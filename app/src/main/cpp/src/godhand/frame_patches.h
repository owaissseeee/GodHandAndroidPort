#pragma once

#include "ps2_runtime.h"

struct R5900Context;

namespace kamite
{
    // The 60 FPS mode and the L3 dash ([Game] Fps60 / L3Dash in kamite.ini; KAMITE_FPS60 / KAMITE_L3_DASH), and
    // the per-frame hook at the top of the game's main loop (also counts game frames for the F3 overlay). Before
    // runtime.run().
    void installFramePatches(PS2Runtime &runtime);

    // Dynamic 60 FPS state & control
    bool fps60();
    void requestFps60(bool on);
    bool l3Dash();
    void setL3Dash(bool on);
    bool rouletteTimerDouble();
    // Game thread: the roulette wheel is on screen (cCockRoulette's move ran within the last two game frames).
    bool rouletteUp();
    void setRouletteTimerDouble(bool on);

    // Main game loop hook at label_30adf4: in func_0030AC40
    void frameStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

    // Hitbox integer comparison hook at 0x002C81C0 in Motion_seq_ctr
    void hitboxCompare(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
}

// Global host hook functions used by instruction-level patches
uint32_t ps2xPatchFlagMask(const char *name);
void ps2xSetPatchFlag(const char *name, bool enabled);
bool ps2xPatchFlag(const char *name);
void ps2xRegisterHostHook(const char *name, PS2Runtime::RecompiledFunction hook);
PS2Runtime::RecompiledFunction ps2xHostHook(const char *name);

