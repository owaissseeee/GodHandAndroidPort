#pragma once

#include "ps2_runtime.h"
#include <atomic>

struct R5900Context;

namespace kamite
{
    extern std::atomic<bool> g_isFps60Active;
    inline bool isFps60Active() noexcept { return g_isFps60Active.load(std::memory_order_relaxed); }

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
    void markRouletteSeen();
    void setRouletteTimerDouble(bool on);
    void cycleRouletteTarget(int dir);

    void rouletteSeenHook(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void rouletteStepHook(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void rouletteSlideBeginHook(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void rouletteSlideEndHook(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

    // Main game loop hook at label_30adf4: in func_0030AC40
    void frameStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

    // Hitbox integer comparison hook at 0x002C81C0 in Motion_seq_ctr
    void hitboxCompare(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
}

// Global host hook functions used by instruction-level patches
uint32_t ps2xPatchFlagMask(const char *name);
void ps2xSetPatchFlag(const char *name, bool enabled);

inline bool ps2xPatchFlag(const char *name) noexcept
{
    if (__builtin_expect(name != nullptr && name[0] == 'f' && name[1] == 'p', 1))
        return kamite::g_isFps60Active.load(std::memory_order_relaxed);
    return false;
}

void ps2xRegisterHostHook(const char *name, PS2Runtime::RecompiledFunction hook);
PS2Runtime::RecompiledFunction ps2xHostHook(const char *name);


