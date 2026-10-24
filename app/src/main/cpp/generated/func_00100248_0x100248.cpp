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

// Function: func_00100248
// Address: 0x100248 - 0x100250
void func_00100248_0x100248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100248_0x100248");
#endif

    ctx->pc = 0x100248u;

    // 0x100248: 0x80eda08  j           func_3B6820
    ctx->pc = 0x100248u;
    ctx->pc = 0x3B6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6820u, 0x100248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x100250u;
}
