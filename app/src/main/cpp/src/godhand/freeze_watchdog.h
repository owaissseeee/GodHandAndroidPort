#pragma once

#include <cstdint>

class PS2Runtime;

namespace godhand {

// Starts the zero-overhead background performance and freeze watchdog thread.
// Runs as a low-priority background thread that sleeps 99.9% of the time.
void startFreezeAndPerfWatchdog(PS2Runtime *runtime);

// Stops the background watchdog thread cleanly.
void stopFreezeAndPerfWatchdog();

// Heartbeat called once per frame from EE flip-chain builder (0x0030B870).
// Extremely lightweight: single relaxed atomic timestamp write (~1 nanosecond).
void notifyFrameHeartbeat();

} // namespace godhand

