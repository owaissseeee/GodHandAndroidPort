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

// Function: func_003A0E20
// Address: 0x3a0e20 - 0x3a0e28
void func_003A0E20_0x3a0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A0E20_0x3a0e20");
#endif

    ctx->pc = 0x3a0e20u;

    // 0x3a0e20: 0x80e7b08  j           func_39EC20
    ctx->pc = 0x3A0E20u;
    ctx->pc = 0x39EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EC20u, 0x3A0E20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0E28u;
}
