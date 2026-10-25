// app/src/main/cpp/src/godhand/godhand_perf.h
#pragma once

#include <cstdint>
#include <cstddef>

#ifdef __cplusplus
extern "C" {
#endif

// Records a completed game logic frame (called on EE flip-chain / VSync)
void godhand_perf_record_game_frame();

// Retrieves instantaneous & rolling performance stats:
// outStats (minimum 6 floats):
//   [0]: Screen FPS (actual presented frames per second)
//   [1]: Avg Frametime in milliseconds (e.g. 16.67ms)
//   [2]: Worst frame spike in milliseconds in the current rolling window
//   [3]: Game Loop FPS (internal PS2 EE execution rate)
//   [4]: Game Speed percentage (100.0% = full speed 60 FPS)
//   [5]: Total frames presented since boot
// outHistory (optional, e.g. 64 floats):
//   Last N frametimes in milliseconds, ordered from oldest to newest (for real-time graph)
bool godhand_perf_get_stats(float* outStats, int statsCount, float* outHistory, int historyCount);

#ifdef __cplusplus
}
#endif
