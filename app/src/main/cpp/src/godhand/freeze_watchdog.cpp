 #include "godhand/freeze_watchdog.h"
#include "godhand/godhand_perf.h"
#include "godhand/hle_bindings.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ee_scheduler.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <string>
#include <thread>
#include <vector>

#if defined(__ANDROID__)
#include <android/log.h>
#include <pthread.h>
#include <sys/resource.h>
#include <unistd.h>
#define LOG_PERF(fmt, ...) __android_log_print(ANDROID_LOG_INFO, "GodHandPerf", fmt, ##__VA_ARGS__)
#define LOG_FREEZE(fmt, ...) __android_log_print(ANDROID_LOG_ERROR, "GodHandFreeze", fmt, ##__VA_ARGS__)
#define LOG_FREEZE_WARN(fmt, ...) __android_log_print(ANDROID_LOG_WARN, "GodHandFreeze", fmt, ##__VA_ARGS__)
#else
#define LOG_PERF(fmt, ...) std::fprintf(stderr, "[GodHandPerf] " fmt "\n", ##__VA_ARGS__)
#define LOG_FREEZE(fmt, ...) std::fprintf(stderr, "[GodHandFreeze] " fmt "\n", ##__VA_ARGS__)
#define LOG_FREEZE_WARN(fmt, ...) std::fprintf(stderr, "[GodHandFreeze] " fmt "\n", ##__VA_ARGS__)
#endif

namespace godhand
{
    namespace
    {
        std::atomic<PS2Runtime *> g_runtime{nullptr};
        std::atomic<int64_t> g_lastHeartbeatNs{0};
        std::atomic<bool> g_watchdogRunning{false};
        std::thread g_watchdogThread;

        int64_t nowSteadyNs()
        {
            return std::chrono::duration_cast<std::chrono::nanoseconds>(
                       std::chrono::steady_clock::now().time_since_epoch())
                .count();
        }

        const char *statusName(EeThreadStatus status)
        {
            switch (status)
            {
            case EeThreadStatus::Running: return "RUN";
            case EeThreadStatus::Ready: return "READY";
            case EeThreadStatus::Waiting: return "WAIT";
            case EeThreadStatus::WaitingSuspended: return "WAIT+SUSP";
            case EeThreadStatus::Suspended: return "SUSP";
            case EeThreadStatus::Dormant: return "DORMANT";
            }
            return "?";
        }

        const char *waitName(EeWaitReason reason)
        {
            switch (reason)
            {
            case EeWaitReason::None: return "none";
            case EeWaitReason::Sleep: return "sleep";
            case EeWaitReason::Semaphore: return "sema";
            case EeWaitReason::EventFlag: return "evflag";
            case EeWaitReason::VSync: return "vsync";
            case EeWaitReason::External: return "external";
            case EeWaitReason::Mpeg: return "mpeg";
            }
            return "?";
        }

        std::string guestLabel(uint32_t pc)
        {
            char text[96];
            if (const SdkFunction *function = sdkFunctionAt(pc))
            {
                std::snprintf(text, sizeof(text), "0x%08X (%.*s)", pc,
                              static_cast<int>(function->name.size()), function->name.data());
            }
            else
            {
                std::snprintf(text, sizeof(text), "0x%08X", pc);
            }
            return text;
        }

        long getProcessRssMb()
        {
#if defined(__ANDROID__) || defined(__linux__)
            FILE *fp = std::fopen("/proc/self/statm", "r");
            if (!fp)
                return 0;
            long totalPages = 0, residentPages = 0;
            if (std::fscanf(fp, "%ld %ld", &totalPages, &residentPages) == 2)
            {
                std::fclose(fp);
                long pageSize = sysconf(_SC_PAGESIZE);
                return (residentPages * pageSize) / (1024 * 1024);
            }
            std::fclose(fp);
#endif
            return 0;
        }

        void dumpFreezeDiagnostics(PS2Runtime *runtime, int64_t stallDurationMs)
        {
            LOG_FREEZE("================================================================================");
            LOG_FREEZE("!!! GAME FREEZE / STALL DETECTED: No frame heartbeat for %lld ms !!!",
                       static_cast<long long>(stallDurationMs));
            LOG_FREEZE("================================================================================");

            if (!runtime)
            {
                LOG_FREEZE("PS2Runtime handle is null!");
                return;
            }

            // 1. Guest EE Kernel & Thread Snapshot
            const EeKernelSnapshot snapshot = runtime->eeScheduler().snapshot();
            LOG_FREEZE("EE Kernel State: Seq=%llu, Cycle=%llu, RunningThreadId=%d",
                       static_cast<unsigned long long>(snapshot.sequence),
                       static_cast<unsigned long long>(snapshot.eeCycle),
                       snapshot.runningThreadId);

            if (const R5900Context *ctx = runtime->eeScheduler().currentContext())
            {
                const uint32_t ra = GPR_U32(ctx, 31);
                const uint32_t sp = GPR_U32(ctx, 29);
                LOG_FREEZE("Current EE Context: PC=%s, RA=%s, SP=0x%08X",
                           guestLabel(ctx->pc).c_str(),
                           guestLabel(ra).c_str(),
                           sp);
            }

            LOG_FREEZE("Active Guest Threads (%zu total):", snapshot.threads.size());
            for (const EeThreadSnapshot &t : snapshot.threads)
            {
                LOG_FREEZE("  Thread %2d: %-9s wait=%-8s (waitId=%d, prio=%d) PC=%s RA=%s SP=0x%08X",
                           t.id, statusName(t.status), waitName(t.waitReason), t.waitId,
                           t.currentPriority, guestLabel(t.pc).c_str(), guestLabel(t.ra).c_str(), t.sp);
            }

            // 2. DMA Channel Inspection (identifying channels stuck with STR bit 0x100 active)
            static constexpr struct { const char *name; uint32_t base; } kDmaChannels[] = {
                {"VIF0", 0x10008000u}, {"VIF1", 0x10009000u}, {"GIF", 0x1000A000u},
                {"IPUfrom", 0x1000B000u}, {"IPUto", 0x1000B400u}, {"SIF0", 0x1000C000u},
                {"SIF1", 0x1000C400u}, {"SIF2", 0x1000C800u}, {"SPRfrom", 0x1000D000u},
                {"SPRto", 0x1000D400u},
            };

            LOG_FREEZE("DMA Controller Status:");
            for (const auto &channel : kDmaChannels)
            {
                const uint32_t chcr = runtime->memory().readIORegister(channel.base);
                const uint32_t madr = runtime->memory().readIORegister(channel.base + 0x10u);
                const uint32_t qwc = runtime->memory().readIORegister(channel.base + 0x20u);
                const bool isBusy = (chcr & 0x100u) != 0;
                LOG_FREEZE("  DMA %-7s @0x%08X: CHCR=0x%08X %s MADR=0x%08X QWC=0x%04X",
                           channel.name, channel.base, chcr,
                           isBusy ? ">>> STUCK BUSY (STR=1) <<<" : "      IDLE", madr, qwc);
            }

            // 3. Timers & Interrupt Controller
            LOG_FREEZE("INTC & GS Status:");
            LOG_FREEZE("  INTC STAT=0x%08X MASK=0x%08X",
                       runtime->memory().readIORegister(0x1000F000u),
                       runtime->memory().readIORegister(0x1000F010u));
            const GSRegisters &gs = runtime->memory().gs();
            LOG_FREEZE("  GS CSR=0x%016llX IMR=0x%016llX PMODE=0x%016llX SMODE2=0x%016llX",
                       static_cast<unsigned long long>(gs.csr.load(std::memory_order_relaxed)),
                       static_cast<unsigned long long>(gs.imr),
                       static_cast<unsigned long long>(gs.pmode),
                       static_cast<unsigned long long>(gs.smode2));

            // 4. Live PC Sampling (100 samples across 50ms) to pinpoint exact loop / spinlock
            LOG_FREEZE("Sampling Live EE PC over 50ms to detect spinlock location...");
            std::map<uint32_t, int> samples;
            for (int i = 0; i < 100; ++i)
            {
                if (const R5900Context *ctx = runtime->eeScheduler().currentContext())
                {
                    ++samples[ctx->pc];
                }
                std::this_thread::sleep_for(std::chrono::microseconds(500));
            }

            std::vector<std::pair<int, uint32_t>> hot;
            hot.reserve(samples.size());
            for (const auto &[pc, count] : samples)
            {
                hot.emplace_back(count, pc);
            }
            std::sort(hot.begin(), hot.end(), std::greater<>());

            LOG_FREEZE("Top Hotspot PCs during Freeze:");
            for (size_t i = 0; i < hot.size() && i < 6; ++i)
            {
                const float pct = static_cast<float>(hot[i].first) * 1.0f;
                LOG_FREEZE("  #%zu: %3d%% at %s", i + 1, static_cast<int>(pct), guestLabel(hot[i].second).c_str());
            }

            LOG_FREEZE("================================================================================");
        }

        void watchdogLoop()
        {
#if defined(__ANDROID__)
            pthread_setname_np(pthread_self(), "GH_Watchdog");
            setpriority(PRIO_PROCESS, 0, 10); // Low priority, never starves EE/GS
#endif
            // Initial grace period for ELF load and boot initialization
            std::this_thread::sleep_for(std::chrono::seconds(4));

            const int64_t watchdogStartNs = nowSteadyNs();
            bool isStalled = false;
            int64_t lastDumpedStamp = 0;
            int64_t stallStartTimeMs = 0;
            int perfReportCounter = 0;

            while (g_watchdogRunning.load(std::memory_order_relaxed))
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                if (!g_watchdogRunning.load(std::memory_order_relaxed))
                    break;

                const int64_t nowNs = nowSteadyNs();
                const int64_t lastNs = g_lastHeartbeatNs.load(std::memory_order_relaxed);
                int64_t stallMs = 0;
                if (lastNs == 0)
                {
                    const int64_t bootMs = (nowNs - watchdogStartNs) / 1000000;
                    if (bootMs < 8000)
                    {
                        continue; // Initial boot grace period
                    }
                    stallMs = bootMs;
                }
                else
                {
                    stallMs = (nowNs - lastNs) / 1000000;
                }

                // Freeze / Stall Detection (threshold: 2500 ms)
                if (stallMs >= 2500)
                {
                    if (!isStalled)
                    {
                        isStalled = true;
                        stallStartTimeMs = nowNs / 1000000;
                        lastDumpedStamp = lastNs;
                        dumpFreezeDiagnostics(g_runtime.load(std::memory_order_relaxed), stallMs);
                    }
                    else if ((stallMs >= 5000 && stallMs < 6000) ||
                             (stallMs >= 10000 && stallMs < 11000) ||
                             (stallMs % 15000 < 1000))
                    {
                        // Repeat concise periodic stall reminder
                        LOG_FREEZE_WARN("Game remains FROZEN: Stalled for %lld ms (no EE frame progress)",
                                        static_cast<long long>(stallMs));
                    }
                }
                else if (isStalled)
                {
                    // Heartbeat recovered!
                    const int64_t totalStallMs = (nowNs / 1000000) - stallStartTimeMs;
                    LOG_FREEZE_WARN(">>> GAME RECOVERED: Stall resolved after %lld ms. Normal gameplay resumed! <<<",
                                    static_cast<long long>(totalStallMs));
                    isStalled = false;
                }

                // Periodic Performance Logging (every 3 seconds when game is running smoothly)
                if (!isStalled && (++perfReportCounter % 3 == 0))
                {
                    float stats[6] = {0.0f};
                    if (godhand_perf_get_stats(stats, 6, nullptr, 0))
                    {
                        const float screenFps = stats[0];
                        const float avgMs = stats[1];
                        const float worstMs = stats[2];
                        const float gameFps = stats[3];
                        const float gameSpeed = stats[4];
                        const uint64_t presents = static_cast<uint64_t>(stats[5]);
                        const long rssMb = getProcessRssMb();

                        LOG_PERF("Present: %4.1f FPS (avg %5.2f ms, spike %5.2f ms) | EE: %4.1f FPS (%5.1f%%) | Frames: %llu | RAM: %ld MB",
                                 screenFps, avgMs, worstMs, gameFps, gameSpeed,
                                 static_cast<unsigned long long>(presents), rssMb);

                        PS2Runtime *rt = g_runtime.load(std::memory_order_relaxed);
                        if (rt)
                        {
                            std::map<uint32_t, int> samples;
                            for (int i = 0; i < 40; ++i)
                            {
                                if (const R5900Context *ctx = rt->eeScheduler().currentContext())
                                    ++samples[ctx->pc];
                                std::this_thread::sleep_for(std::chrono::microseconds(250));
                            }
                            std::vector<std::pair<int, uint32_t>> hot;
                            for (const auto &pair : samples)
                                hot.emplace_back(pair.second, pair.first);
                            std::sort(hot.begin(), hot.end(), std::greater<>());
                            std::string hotStr;
                            for (size_t i = 0; i < hot.size() && i < 3; ++i)
                            {
                                char hbuf[128];
                                std::snprintf(hbuf, sizeof(hbuf), "[#%zu: %d%% @%s] ",
                                              i + 1, hot[i].first * 100 / 40, guestLabel(hot[i].second).c_str());
                                hotStr += hbuf;
                            }
                            if (!hotStr.empty())
                            {
                                LOG_PERF("EE Hotspots: %s", hotStr.c_str());
                            }
                        }
                    }
                }
            }
        }
    } // namespace

    void startFreezeAndPerfWatchdog(PS2Runtime *runtime)
    {
        g_runtime.store(runtime, std::memory_order_release);
        if (!g_watchdogRunning.exchange(true))
        {
            g_watchdogThread = std::thread(watchdogLoop);
            g_watchdogThread.detach();
        }
    }

    void stopFreezeAndPerfWatchdog()
    {
        g_watchdogRunning.store(false, std::memory_order_release);
    }

    void notifyFrameHeartbeat()
    {
        g_lastHeartbeatNs.store(nowSteadyNs(), std::memory_order_relaxed);
    }

} // namespace godhand

