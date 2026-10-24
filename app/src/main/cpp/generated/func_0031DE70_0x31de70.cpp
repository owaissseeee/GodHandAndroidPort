#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0031DE70
// Address: 0x31de70 - 0x31de78
void func_0031DE70_0x31de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031DE70_0x31de70");
#endif

    ctx->pc = 0x31de70u;

    // 0x31de70: 0x80c80a0  j           func_320280
    ctx->pc = 0x31DE70u;
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x31DE70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31DE78u;
}
