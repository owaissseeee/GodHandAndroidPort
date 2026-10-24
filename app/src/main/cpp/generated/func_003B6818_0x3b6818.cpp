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

// Function: func_003B6818
// Address: 0x3b6818 - 0x3b6820
void func_003B6818_0x3b6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B6818_0x3b6818");
#endif

    ctx->pc = 0x3b6818u;

    // 0x3b6818: 0x80edf06  j           func_3B7C18
    ctx->pc = 0x3B6818u;
    ctx->pc = 0x3B7C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7C18u, 0x3B6818u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6820u;
}
