// app/src/main/cpp/runtime/ps2xRuntime/include/runtime/performance_profiler.h
#pragma once

#include <cstdint>
#include <cstddef>
#include <atomic>

#ifdef __cplusplus
extern "C" {
#endif

struct FrameSpikeRecord {
    uint64_t frameNumber;
    float totalFrametimeMs;
    float eeTimeMs;
    float eeIdleTimeMs;
    uint32_t topGuestPc;
    uint32_t vu1QueueDepth;
    float gsPresentTimeMs;
    uint32_t audioBufferFillPct;
    uint32_t audioUnderruns;
    char bottleneckReason[64];
};

// Global lock-free telemetry primitives
extern std::atomic<uint32_t> g_perfLastActiveGuestPc;
extern std::atomic<uint64_t> g_perfAccumEeIdleCycles;
extern std::atomic<float> g_perfLastEeWorkMs;
extern std::atomic<float> g_perfLastEeIdleMs;
extern std::atomic<int64_t> g_perfFrameStartNs;
extern std::atomic<bool> g_perfSpikeLoggingEnabled;

// Subsystem telemetry query hooks
uint32_t ps2_async_vif_get_queue_depth();
void ps2_audio_get_stats(uint32_t *outQueuedPct, uint32_t *outUnderruns);

// Toggle logging completely (0 overhead when disabled)
void godhand_perf_set_logging_enabled(bool enabled);
bool godhand_perf_is_logging_enabled();

// Record a spike when total frametime represents a true frame drop
void godhand_perf_record_spike(
    uint64_t frameNumber,
    float totalFrametimeMs,
    float gsPresentTimeMs
);

// Returns true if a spike record was copied into outBuf
bool godhand_perf_get_last_spike_report(char *outBuf, size_t outSize);

// Retrieves the persistent session history of all major frame drops since boot
bool godhand_perf_get_session_spike_log(char *outBuf, size_t outSize);
void godhand_perf_clear_session_spike_log();

#ifdef __cplusplus
}
#endif

