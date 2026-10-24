#include "Runtime.h"

// ----------------------------------------------------------------------------
// Custom Triage Stubs (Useful for bypassing unknown functions)
// ----------------------------------------------------------------------------
static void ret0(R5900Context &ctx) { ctx.gpr[2].words[0] = 0; }
static void ret1(R5900Context &ctx) { ctx.gpr[2].words[0] = 1; }
static void reta0(R5900Context &ctx) {
  ctx.gpr[2].words[0] = ctx.gpr[4].words[0];
}

// ----------------------------------------------------------------------------
// Game-Specific Function Implementations
// ----------------------------------------------------------------------------

// A function we reversed via Ghidra and decided to implement natively
static void my_game_init(R5900Context &ctx) {
  uint32_t arg0 = ctx.gpr[4].words[0];

  // Custom emulation logic goes here...
  printf("[GameOverride] Initialization bypassed natively. Arg0: %d\n", arg0);

  // Return success
  ctx.gpr[2].words[0] = 1;
}

// ----------------------------------------------------------------------------
// Registration
// ----------------------------------------------------------------------------
// This runs once when the Runtime starts. We register our bypasses against
// addresses we don't want the recompiler to execute.
void RegisterGameOverrides() {
  // Triage bindings for infinite loops or crashing sub_xxx
  Runtime::OverrideFunction(0x001A24B0, ret1);
  Runtime::OverrideFunction(0x001B0088, ret0);
  Runtime::OverrideFunction(0x001C5530, reta0);

  // Full custom implementations
  Runtime::OverrideFunction(0x00109904, my_game_init);
}
