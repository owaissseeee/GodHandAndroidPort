#include <cstdio>

#if defined(__ANDROID__)
#include <sched.h>
#include <unistd.h>
#include <sys/resource.h>
#include <pthread.h>
#include <android/log.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

namespace godhand::affinity {

enum class ThreadRole {
    EE_MAIN,
    VU1_WORKER,
    GS_RENDERER,
    GIF_WORKER,
    IOP_WORKER,
    HOST_PUMP,
    AUDIO_SPU2,
    DEFAULT
};

struct CpuCoreInfo {
    int id;
    long max_freq_khz;
    int tier; // 3 = Prime (Cortex-X / Mongoose), 2 = Big (Cortex-A7x / Kryo Gold), 1 = Little (Cortex-A5x / Kryo Silver)
    int part;
    int implementer;
};

static int classifyCoreTier(int implementer, int part) {
    if (implementer == 0x41 || implementer == 0) { // ARM Holdings
        switch (part) {
            // Tier 3: Prime Cores (Cortex-X, Neoverse V)
            case 0xd4c: // Cortex-X1 (Tensor G1, SD 888, Exynos 2100)
            case 0xd43: // Cortex-X2 (Tensor G2, SD 8 Gen 1, Dimensity 9000)
            case 0xd4e: // Cortex-X3 (Tensor G3, SD 8 Gen 2, Dimensity 9200)
            case 0xd4f: // Cortex-X4 (Tensor G4, SD 8 Gen 3, Dimensity 9300)
            case 0xd80: // Cortex-X925 (Dimensity 9400)
            case 0xd40: // Neoverse V1
                return 3;

            // Tier 2: Big Performance Cores (Cortex-A7x, Neoverse N)
            case 0xd07: // Cortex-A57
            case 0xd08: // Cortex-A72
            case 0xd09: // Cortex-A73
            case 0xd0a: // Cortex-A75
            case 0xd0b: // Cortex-A76 (Tensor G1)
            case 0xd0d: // Cortex-A77
            case 0xd41: // Cortex-A78 (Dimensity 7050, Snapdragon 7s Gen 2, Exynos 1380, Tensor G2)
            case 0xd42: // Cortex-A78AE
            case 0xd44: // Cortex-A710 (SD 8 Gen 1, Tensor G3)
            case 0xd48: // Cortex-A715 (SD 8 Gen 2, Tensor G3/G4)
            case 0xd4d: // Cortex-A720 (SD 8 Gen 3, Tensor G4)
            case 0xd81: // Cortex-A725 (Dimensity 9400)
            case 0xd49: // Neoverse N2
                return 2;

            // Tier 1: Little Efficiency Cores (Cortex-A5x, A35, A510, A520)
            case 0xd03: // Cortex-A53 (Helio G35/P35)
            case 0xd04: // Cortex-A35
            case 0xd05: // Cortex-A55 (Dimensity 7050, SD 7s Gen 2, Tensor G1/G2)
            case 0xd46: // Cortex-A510 (SD 8 Gen 1, Tensor G3)
            case 0xd47: // Cortex-A520 (SD 8 Gen 3, Tensor G4)
                return 1;

            default:
                break;
        }
    } else if (implementer == 0x51) { // Qualcomm Kryo
        // Kryo Silver (Little): 0x801, 0x803, 0x805
        if (part == 0x801 || part == 0x803 || part == 0x805) {
            return 1;
        }
        // Kryo Gold / Prime (Big): 0x800, 0x802, 0x804, 0xc00
        return 2;
    } else if (implementer == 0x53) { // Samsung Exynos Mongoose
        // M1 (0x001), M2 (0x002), M3 (0x003), M4 (0x004) are Prime/Big
        return 3;
    }
    return 0; // Unknown
}

static long readSysfsFreq(int coreId) {
    const std::string paths[] = {
        "/sys/devices/system/cpu/cpu" + std::to_string(coreId) + "/cpufreq/cpuinfo_max_freq",
        "/sys/devices/system/cpu/cpu" + std::to_string(coreId) + "/cpufreq/scaling_max_freq",
        "/sys/devices/system/cpu/cpu" + std::to_string(coreId) + "/cpufreq/cpuinfo_cur_freq"
    };
    for (const auto& p : paths) {
        std::ifstream f(p);
        long freq = 0;
        if (f >> freq && freq > 0) {
            return freq;
        }
    }
    return 0;
}

struct CpuInfoParseResult {
    int id = -1;
    int implementer = 0;
    int part = 0;
};

static std::vector<CpuInfoParseResult> parseCpuInfoFile() {
    std::vector<CpuInfoParseResult> list;
    std::ifstream f("/proc/cpuinfo");
    if (!f.is_open()) return list;

    std::string line;
    CpuInfoParseResult current;

    auto commit = [&]() {
        if (current.id >= 0) {
            list.push_back(current);
            current = CpuInfoParseResult();
        }
    };

    while (std::getline(f, line)) {
        if (line.empty()) continue;
        size_t colon = line.find(':');
        if (colon == std::string::npos) continue;

        std::string key = line.substr(0, colon);
        std::string val = line.substr(colon + 1);

        while (!key.empty() && (key.back() == ' ' || key.back() == '\t')) key.pop_back();
        while (!val.empty() && (val.front() == ' ' || val.front() == '\t')) val.erase(val.begin());

        if (key == "processor") {
            commit();
            try { current.id = std::stoi(val); } catch (...) { current.id = -1; }
        } else if (key == "CPU part") {
            try { current.part = std::stoi(val, nullptr, 0); } catch (...) {}
        } else if (key == "CPU implementer") {
            try { current.implementer = std::stoi(val, nullptr, 0); } catch (...) {}
        }
    }
    commit();
    return list;
}

static std::vector<CpuCoreInfo> detectSortedCores() {
    std::vector<CpuCoreInfo> cores;

    long conf_cpus = sysconf(_SC_NPROCESSORS_CONF);
    int total_cpus = (conf_cpus > 0 && conf_cpus <= 64) ? static_cast<int>(conf_cpus) : 8;
    for (int probe = total_cpus; probe < 8; ++probe) {
        std::ifstream f("/sys/devices/system/cpu/cpu" + std::to_string(probe) + "/cpufreq/cpuinfo_max_freq");
        if (f.is_open()) {
            total_cpus = probe + 1;
        }
    }

    auto cpuinfoList = parseCpuInfoFile();

    for (int i = 0; i < total_cpus; ++i) {
        CpuCoreInfo info{};
        info.id = i;
        info.max_freq_khz = readSysfsFreq(i);

        // Find match in /proc/cpuinfo
        for (const auto& item : cpuinfoList) {
            if (item.id == i) {
                info.implementer = item.implementer;
                info.part = item.part;
                info.tier = classifyCoreTier(item.implementer, item.part);
                break;
            }
        }

        // If sysfs was unreadable (Motorola, Samsung, Pixel SELinux policies):
        if (info.max_freq_khz <= 0) {
            if (info.tier == 3) {
                info.max_freq_khz = 3000000; // Prime core ~3.0 GHz
            } else if (info.tier == 2) {
                info.max_freq_khz = 2500000; // Big core ~2.5 GHz
            } else if (info.tier == 1) {
                info.max_freq_khz = 1800000; // Little core ~1.8 GHz
            } else {
                // Topological fallback if /proc/cpuinfo lacked part info
                if (total_cpus >= 8) {
                    info.max_freq_khz = (i >= 6) ? 2800000 : ((i >= 4) ? 2500000 : 1800000);
                    info.tier = (i >= 4) ? 2 : 1;
                } else if (total_cpus >= 6) {
                    info.max_freq_khz = (i >= 4) ? 2500000 : 1800000;
                    info.tier = (i >= 4) ? 2 : 1;
                } else {
                    info.max_freq_khz = 2000000;
                    info.tier = 1;
                }
            }
        } else {
            // Sysfs frequency was available: if tier not derived from /proc/cpuinfo, derive from freq
            if (info.tier == 0) {
                if (info.max_freq_khz >= 2650000) info.tier = 3;
                else if (info.max_freq_khz >= 2100000) info.tier = 2;
                else info.tier = 1;
            }
        }

        cores.push_back(info);
    }

    // Sort descending:
    // 1. Core Tier (Prime = 3, Big = 2, Little = 1)
    // 2. Frequency (highest clock first)
    // 3. Core ID (higher IDs are performance cluster in ARM big.LITTLE)
    std::sort(cores.begin(), cores.end(), [](const CpuCoreInfo& a, const CpuCoreInfo& b) {
        if (a.tier != b.tier) return a.tier > b.tier;
        if (a.max_freq_khz != b.max_freq_khz) return a.max_freq_khz > b.max_freq_khz;
        return a.id > b.id;
    });

    for (const auto& c : cores) {
        __android_log_print(ANDROID_LOG_INFO, "GodHandPerf",
            "[Affinity] Detected Core %d: Tier=%d, Freq=%ld kHz, Part=0x%x, Impl=0x%x",
            c.id, c.tier, c.max_freq_khz, c.part, c.implementer);
    }

    return cores;
}

static ThreadRole classifyThread(const char* name, int primaryCore, int fallbackCore) {
    if (name) {
        if (std::strstr(name, "EE") != nullptr) return ThreadRole::EE_MAIN;
        if (std::strstr(name, "VU") != nullptr) return ThreadRole::VU1_WORKER;
        if (std::strstr(name, "GS") != nullptr) return ThreadRole::GS_RENDERER;
        if (std::strstr(name, "GIF") != nullptr) return ThreadRole::GIF_WORKER;
        if (std::strstr(name, "IOP") != nullptr) return ThreadRole::IOP_WORKER;
        if (std::strstr(name, "Host") != nullptr) return ThreadRole::HOST_PUMP;
        if (std::strstr(name, "Audio") != nullptr || std::strstr(name, "SPU") != nullptr) return ThreadRole::AUDIO_SPU2;
    }
    if (primaryCore == 0 && fallbackCore <= 1) return ThreadRole::HOST_PUMP;
    return ThreadRole::DEFAULT;
}

static void applyAffinity(ThreadRole role, const char* name, int requestedNice) {
    static const std::vector<CpuCoreInfo> sorted = detectSortedCores();
    if (sorted.empty()) return;

    const long top_freq = sorted[0].max_freq_khz;
    const long min_freq = sorted.back().max_freq_khz;
    const int top_tier = sorted[0].tier;
    const int min_tier = sorted.back().tier;
    const bool is_uniform_cluster = (top_tier == min_tier) && ((top_freq - min_freq) < 100000);

    std::vector<int> big_cores;
    std::vector<int> little_cores;

    if (is_uniform_cluster) {
        // Uniform cluster (Helio G35, Helio P35, Unisoc SC9863A/T606, budget 4-core A53/A55)
        const size_t half = sorted.size() / 2;
        for (size_t i = 0; i < sorted.size(); ++i) {
            if (i >= half) big_cores.push_back(sorted[i].id);
            else little_cores.push_back(sorted[i].id);
        }
    } else {
        const long big_threshold = min_freq + ((top_freq - min_freq) * 35 / 100);
        for (const auto& c : sorted) {
            if (c.tier >= 2 || c.max_freq_khz >= big_threshold) {
                big_cores.push_back(c.id);
            } else {
                little_cores.push_back(c.id);
            }
        }
        // Guarantee at least 2 big cores if system has 4+ cores
        if (big_cores.size() < 2 && sorted.size() >= 4) {
            big_cores.clear();
            big_cores.push_back(sorted[0].id);
            big_cores.push_back(sorted[1].id);
            little_cores.clear();
            for (size_t i = 2; i < sorted.size(); ++i) {
                little_cores.push_back(sorted[i].id);
            }
        }
        // Guarantee at least 1 little core
        if (little_cores.empty()) {
            for (const auto& c : sorted) {
                if (std::find(big_cores.begin(), big_cores.end(), c.id) == big_cores.end()) {
                    little_cores.push_back(c.id);
                }
            }
            if (little_cores.empty()) {
                little_cores.push_back(sorted.back().id);
            }
        }
    }

    cpu_set_t mask;
    CPU_ZERO(&mask);
    int targetNice = requestedNice;

    if (sorted.size() <= 4) {
        // Low-end 4-core devices:
        switch (role) {
            case ThreadRole::EE_MAIN:
                CPU_SET(sorted[0].id, &mask);
                targetNice = -20;
                break;
            case ThreadRole::VU1_WORKER:
                CPU_SET(sorted[1].id, &mask);
                targetNice = -18;
                break;
            case ThreadRole::GS_RENDERER:
                CPU_SET(sorted[2].id, &mask);
                targetNice = -19;
                break;
            case ThreadRole::IOP_WORKER:
            case ThreadRole::GIF_WORKER:
            case ThreadRole::AUDIO_SPU2:
            default:
                CPU_SET(sorted.back().id, &mask);
                targetNice = -15;
                break;
        }
    } else if (top_tier <= 1 || big_cores.size() >= 4) {
        // Unified 4-Big + 4-Little layout for all 8-core SoCs (Helio G25, Dimensity 7300, Snapdragon):
        //   big_cores[0] : EE_MAIN     (dedicated Big core + fallback to big_cores[3] on budget tier)
        //   big_cores[1] : VU1_WORKER  (dedicated Big core + fallback to big_cores[3] on budget tier)
        //   big_cores[2] : GS_RENDERER (100% EXCLUSIVE Big core — never preempted by IOP or GIF!)
        //   big_cores[3] : GIF_WORKER  (dedicated Big core)
        //   little_cores : IOP_WORKER, AUDIO_SPU2, HOST_PUMP (all Little cores)
        switch (role) {
            case ThreadRole::EE_MAIN:
                CPU_SET(big_cores[0], &mask);
                if (top_tier <= 1 && big_cores.size() >= 4) CPU_SET(big_cores[3], &mask);
                targetNice = -20;
                break;
            case ThreadRole::VU1_WORKER:
                CPU_SET(big_cores[1 % big_cores.size()], &mask);
                if (top_tier <= 1 && big_cores.size() >= 4) CPU_SET(big_cores[3], &mask);
                targetNice = -20;
                break;
            case ThreadRole::GS_RENDERER:
                CPU_SET(big_cores[2 % big_cores.size()], &mask);
                targetNice = -19;
                break;
            case ThreadRole::GIF_WORKER:
                if (big_cores.size() >= 4)
                    CPU_SET(big_cores[3], &mask);
                else
                    CPU_SET(big_cores[2 % big_cores.size()], &mask);
                if (top_tier <= 1) {
                    for (int c : little_cores) CPU_SET(c, &mask);
                }
                targetNice = -16;
                break;
            case ThreadRole::IOP_WORKER:
                if (!little_cores.empty()) {
                    for (int lc : little_cores) CPU_SET(lc, &mask);
                } else if (big_cores.size() >= 4) {
                    CPU_SET(big_cores[3], &mask);
                }
                targetNice = -15;
                break;
            case ThreadRole::AUDIO_SPU2:
                if (!little_cores.empty()) {
                    for (int lc : little_cores) CPU_SET(lc, &mask);
                } else if (big_cores.size() >= 4) {
                    CPU_SET(big_cores[3], &mask);
                }
                targetNice = -16;
                break;
            case ThreadRole::HOST_PUMP:
            default:
                if (!little_cores.empty()) {
                    for (int lc : little_cores) CPU_SET(lc, &mask);
                } else if (big_cores.size() >= 4) {
                    CPU_SET(big_cores[3], &mask);
                }
                targetNice = -2;
                break;
        }
    } else if (big_cores.size() == 3) {
        // 3 Big cores (1 Prime + 2 Big, e.g. Snapdragon 855/865 1+3+4, or tri-cluster variants):
        // Big Core 0: EE_MAIN (Nice -20)
        // Big Core 1: VU1_WORKER (Nice -19)
        // Big Core 2: GS_RENDERER (Nice -20) + IOP_WORKER (Nice -18)
        // Little Cores: GIF_WORKER, AUDIO_SPU2, HOST_PUMP
        switch (role) {
            case ThreadRole::EE_MAIN:
                CPU_SET(big_cores[0], &mask);
                targetNice = -20;
                break;
            case ThreadRole::VU1_WORKER:
                CPU_SET(big_cores[1], &mask);
                targetNice = -19;
                break;
            case ThreadRole::GS_RENDERER:
            case ThreadRole::IOP_WORKER:
                CPU_SET(big_cores[2], &mask);
                targetNice = -18;
                break;
            case ThreadRole::GIF_WORKER:
            case ThreadRole::AUDIO_SPU2:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -16;
                break;
            default:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -5;
                break;
        }
    } else {
        // 2 Big cores + 4/6 Little cores (Dimensity 1080/920/700, Snapdragon 695, 480, Dimensity 7050 dual-A78):
        // Big Core 0: 100% EXCLUSIVELY DEDICATED TO EE_MAIN (Zero thread preemption -> locked 30 EE FPS!)
        // Big Core 1: SHARED BY GS_RENDERER + VU1_WORKER + IOP_WORKER (~65% combined load on Big Core 1)
        // Little Cores: GIF_WORKER, AUDIO_SPU2, and HOST_PUMP
        switch (role) {
            case ThreadRole::EE_MAIN:
                CPU_SET(big_cores[0], &mask);
                targetNice = -20;
                break;
            case ThreadRole::VU1_WORKER:
                CPU_SET(big_cores[1], &mask);
                targetNice = -18;
                break;
            case ThreadRole::GS_RENDERER:
            case ThreadRole::IOP_WORKER:
                CPU_SET(big_cores[1], &mask);
                targetNice = -18;
                break;
            case ThreadRole::GIF_WORKER:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -16;
                break;
            case ThreadRole::AUDIO_SPU2:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -16;
                break;
            default:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -5;
                break;
        }
    }

    // Safety fallback: if mask has no bits set, set all available cores
    if (CPU_COUNT(&mask) == 0) {
        for (const auto& c : sorted) {
            CPU_SET(c.id, &mask);
        }
    }

    int rc = sched_setaffinity(0, sizeof(cpu_set_t), &mask);
    int pr = setpriority(PRIO_PROCESS, 0, targetNice);

    __android_log_print(ANDROID_LOG_INFO, "GodHandPerf",
        "[Affinity] Thread '%s' (TID %d) affinity set (uniform=%d, big_count=%zu, little_count=%zu), sched_setaffinity rc=%d, nice=%d (pr=%d)",
        name ? name : "unknown", gettid(), is_uniform_cluster ? 1 : 0, big_cores.size(), little_cores.size(), rc, targetNice, pr);
}

} // namespace godhand::affinity

#include <atomic>

static std::atomic<int32_t> g_tidEE{0};
static std::atomic<int32_t> g_tidVU{0};
static std::atomic<int32_t> g_tidGS{0};
static std::atomic<int32_t> g_tidGIF{0};
static std::atomic<int32_t> g_tidIOP{0};
static std::atomic<int64_t> g_lastFrameWorkNanos{16000000LL};

extern "C" void godhand_perf_record_work_duration(int64_t ns) {
    if (ns > 0) {
        g_lastFrameWorkNanos.store(ns, std::memory_order_relaxed);
    }
}

extern "C" int64_t godhand_perf_get_last_work_duration() {
    return g_lastFrameWorkNanos.load(std::memory_order_relaxed);
}

extern "C" void godhand_perf_get_tids(int32_t* out, int* count) {
    if (!out || !count) return;
    int c = 0;
    int32_t ee = g_tidEE.load(std::memory_order_relaxed);
    int32_t vu = g_tidVU.load(std::memory_order_relaxed);
    int32_t gs = g_tidGS.load(std::memory_order_relaxed);
    int32_t gif = g_tidGIF.load(std::memory_order_relaxed);
    if (ee > 0) out[c++] = ee;
    if (vu > 0) out[c++] = vu;
    if (gs > 0) out[c++] = gs;
    if (gif > 0) out[c++] = gif;
    int32_t iop = g_tidIOP.load(std::memory_order_relaxed);
    if (iop > 0) out[c++] = iop;
    *count = c;
}

extern "C" void godhand_set_thread_affinity_and_priority(const char* name, int primaryCore, int fallbackCore, int niceVal) {
    if (name && *name) {
        char thread_name[16];
        snprintf(thread_name, sizeof(thread_name), "%s", name);
        pthread_setname_np(pthread_self(), thread_name);
    }
    godhand::affinity::ThreadRole role = godhand::affinity::classifyThread(name, primaryCore, fallbackCore);
    pid_t tid = gettid();
    if (role == godhand::affinity::ThreadRole::EE_MAIN) g_tidEE.store(tid, std::memory_order_relaxed);
    else if (role == godhand::affinity::ThreadRole::VU1_WORKER) g_tidVU.store(tid, std::memory_order_relaxed);
    else if (role == godhand::affinity::ThreadRole::GS_RENDERER) g_tidGS.store(tid, std::memory_order_relaxed);
    else if (role == godhand::affinity::ThreadRole::GIF_WORKER) g_tidGIF.store(tid, std::memory_order_relaxed);
    else if (role == godhand::affinity::ThreadRole::IOP_WORKER) g_tidIOP.store(tid, std::memory_order_relaxed);

    godhand::affinity::applyAffinity(role, name, niceVal);
}

extern "C" int godhand_get_device_tier() {
    static const int s_tier = [] {
        const auto sorted = godhand::affinity::detectSortedCores();
        if (sorted.empty()) return 1;
        bool has_x_or_prime = false;
        bool has_big_a7x = false;
        long max_freq = 0;
        for (const auto& c : sorted) {
            if (c.tier == 3) has_x_or_prime = true;
            if (c.tier == 2) has_big_a7x = true;
            if (c.max_freq_khz > max_freq) max_freq = c.max_freq_khz;
        }
        if (has_x_or_prime || max_freq >= 2850000) return 3;
        if (has_big_a7x || max_freq >= 2300000) return 2;
        return 1;
    }();
    return s_tier;
}
#else
extern "C" void godhand_set_thread_affinity_and_priority(const char*, int, int, int) {}
extern "C" int godhand_get_device_tier() { return 1; }
extern "C" void godhand_perf_record_work_duration(int64_t) {}
extern "C" int64_t godhand_perf_get_last_work_duration() { return 16000000LL; }
extern "C" void godhand_perf_get_tids(int32_t*, int* count) { if (count) *count = 0; }
#endif
