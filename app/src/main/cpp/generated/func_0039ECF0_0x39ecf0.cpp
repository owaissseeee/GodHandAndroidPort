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

// Function: func_0039ECF0
// Address: 0x39ecf0 - 0x39ecf8
void func_0039ECF0_0x39ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039ECF0_0x39ecf0");
#endif

    ctx->pc = 0x39ecf0u;

    // 0x39ecf0: 0x80e7b08  j           func_39EC20
    ctx->pc = 0x39ECF0u;
    ctx->pc = 0x39EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EC20u, 0x39ECF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39ECF8u;
}
