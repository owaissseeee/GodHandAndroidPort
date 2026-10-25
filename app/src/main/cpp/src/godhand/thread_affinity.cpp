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
    HOST_PUMP,
    AUDIO_SPU2,
    DEFAULT
};

struct CpuCoreInfo {
    int id;
    long max_freq_khz;
};

static std::vector<CpuCoreInfo> detectSortedCores() {
    std::vector<CpuCoreInfo> cores;
    for (int i = 0; i < 16; ++i) {
        std::string p = "/sys/devices/system/cpu/cpu" + std::to_string(i) + "/cpufreq/cpuinfo_max_freq";
        std::ifstream f(p);
        long freq = 0;
        if (f >> freq && freq > 0) {
            cores.push_back({i, freq});
        }
    }
    if (cores.empty()) {
        // Fallback if sysfs is unreadable: assume cpu6, cpu7 are highest, then cpu4, cpu5
        for (int i = 0; i < 8; ++i) {
            long synthetic = (i >= 6) ? 2600000 : ((i >= 4) ? 2000001 : 2000000);
            cores.push_back({i, synthetic});
        }
    }
    // Sort descending by max_freq_khz (and by core ID descending on ties, since Big cores are highest IDs)
    std::sort(cores.begin(), cores.end(), [](const CpuCoreInfo& a, const CpuCoreInfo& b) {
        if (a.max_freq_khz != b.max_freq_khz) return a.max_freq_khz > b.max_freq_khz;
        return a.id > b.id;
    });
    return cores;
}

static ThreadRole classifyThread(const char* name, int primaryCore, int fallbackCore) {
    if (name) {
        if (std::strstr(name, "EE") != nullptr) return ThreadRole::EE_MAIN;
        if (std::strstr(name, "VU") != nullptr) return ThreadRole::VU1_WORKER;
        if (std::strstr(name, "GS") != nullptr) return ThreadRole::GS_RENDERER;
        if (std::strstr(name, "GIF") != nullptr) return ThreadRole::GIF_WORKER;
        if (std::strstr(name, "Host") != nullptr) return ThreadRole::HOST_PUMP;
        if (std::strstr(name, "Audio") != nullptr || std::strstr(name, "SPU") != nullptr) return ThreadRole::AUDIO_SPU2;
    }
    if (primaryCore == 0 && fallbackCore <= 1) return ThreadRole::HOST_PUMP;
    return ThreadRole::DEFAULT;
}

static void applyAffinity(ThreadRole role, const char* name, int requestedNice) {
    static const std::vector<CpuCoreInfo> sorted = detectSortedCores();
    if (sorted.size() < 2) return;

    const long top_freq = sorted[0].max_freq_khz;
    const long min_freq = sorted.back().max_freq_khz;
    const bool is_uniform_cluster = ((top_freq - min_freq) < 100000); // Frequency delta < 100MHz (e.g. Helio G35 8x A53)

    std::vector<int> big_cores;
    std::vector<int> little_cores;

    if (is_uniform_cluster) {
        // Uniform cluster (Helio G35, Helio P35, Unisoc T606, Snapdragon 400/600 series)
        // Partition cores evenly: first half little, second half compute
        const size_t half = sorted.size() / 2;
        for (size_t i = 0; i < sorted.size(); ++i) {
            if (i >= half) {
                big_cores.push_back(sorted[i].id);
            } else {
                little_cores.push_back(sorted[i].id);
            }
        }
    } else {
        const long big_threshold = min_freq + ((top_freq - min_freq) * 40 / 100);
        for (const auto& c : sorted) {
            if (c.max_freq_khz >= big_threshold) {
                big_cores.push_back(c.id);
            } else {
                little_cores.push_back(c.id);
            }
        }
        // Guarantee at least 2 big cores
        if (big_cores.size() < 2) {
            big_cores.clear();
            big_cores.push_back(sorted[0].id);
            big_cores.push_back(sorted[1].id);
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

    if (big_cores.size() >= 4) {
        // 4+4 (Dimensity 7300/8100/8300/9300, Snapdragon 778G/865/870) or 1+3+4 (Snapdragon 8 Gen 1/2/3)
        // CRITICAL: NEVER include a Little core in EE_MAIN, VU1_WORKER, or GS_RENDERER!
        // Partition the 4 Big cores so EE, VU1, and GS never preempt each other and never touch Little cores:
        switch (role) {
            case ThreadRole::EE_MAIN:
                // Prefer Big Core 0 & 1, allow all Big cores
                for (int bc : big_cores) CPU_SET(bc, &mask);
                targetNice = -20;
                break;
            case ThreadRole::VU1_WORKER:
                // All Big cores (EAS places VU1 on a free Big core separate from EE_MAIN)
                for (int bc : big_cores) CPU_SET(bc, &mask);
                targetNice = -20;
                break;
            case ThreadRole::GS_RENDERER:
                // Strictly Big cores ONLY! Removing little_cores prevents GS_RENDERER from
                // ever migrating to a slow Cortex-A55 core during heavy house/enemy/particle draws!
                for (int bc : big_cores) CPU_SET(bc, &mask);
                targetNice = -20;
                break;
            case ThreadRole::GIF_WORKER:
                for (int bc : big_cores) CPU_SET(bc, &mask);
                if (!little_cores.empty()) CPU_SET(little_cores[0], &mask);
                targetNice = -16;
                break;
            case ThreadRole::AUDIO_SPU2:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -16;
                break;
            case ThreadRole::HOST_PUMP:
            default:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -2;
                break;
        }
    } else if (big_cores.size() == 3) {
        // 3 Big cores: 1 for EE_MAIN, 1 for VU1_WORKER, 1 for GS_RENDERER
        switch (role) {
            case ThreadRole::EE_MAIN:
            case ThreadRole::VU1_WORKER:
            case ThreadRole::GS_RENDERER:
                for (int bc : big_cores) CPU_SET(bc, &mask);
                targetNice = -20;
                break;
            case ThreadRole::GIF_WORKER:
                CPU_SET(big_cores[2], &mask);
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -15;
                break;
            default:
                for (int lc : little_cores) CPU_SET(lc, &mask);
                targetNice = -5;
                break;
        }
    } else {
        // 2+6 SoC (e.g. 2 Big cores + 6 Little cores)
        switch (role) {
            case ThreadRole::EE_MAIN:
                CPU_SET(big_cores[0], &mask);
                CPU_SET(big_cores[1], &mask);
                targetNice = -20;
                break;
            case ThreadRole::VU1_WORKER:
                CPU_SET(big_cores[1], &mask);
                CPU_SET(big_cores[0], &mask);
                targetNice = -19;
                break;
            case ThreadRole::GS_RENDERER:
                CPU_SET(big_cores[1], &mask);
                if (little_cores.size() >= 2) {
                    CPU_SET(little_cores[0], &mask);
                    CPU_SET(little_cores[1], &mask);
                }
                targetNice = -18;
                break;
            case ThreadRole::GIF_WORKER:
                for (size_t i = 0; i < std::min<size_t>(3, little_cores.size()); ++i) {
                    CPU_SET(little_cores[i], &mask);
                }
                targetNice = -15;
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

extern "C" void godhand_set_thread_affinity_and_priority(const char* name, int primaryCore, int fallbackCore, int niceVal) {
    if (name && *name) {
        char thread_name[16];
        snprintf(thread_name, sizeof(thread_name), "%s", name);
        pthread_setname_np(pthread_self(), thread_name);
    }
    godhand::affinity::ThreadRole role = godhand::affinity::classifyThread(name, primaryCore, fallbackCore);
    godhand::affinity::applyAffinity(role, name, niceVal);
}
#else
extern "C" void godhand_set_thread_affinity_and_priority(const char*, int, int, int) {}
#endif
