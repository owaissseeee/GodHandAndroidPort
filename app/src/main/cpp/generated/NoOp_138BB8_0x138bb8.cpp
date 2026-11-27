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

// Function: NoOp_138BB8
// Address: 0x138bb8 - 0x138be8
void NoOp_138BB8_0x138bb8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NoOp_138BB8_0x138bb8");
#endif


    // 0x138bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x138BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x138bc0: 0x0  nop
    // NOP
    // 0x138bc4: 0x0  nop
    // NOP
    // 0x138bc8: 0x0  nop
    // NOP
    // 0x138bcc: 0x0  nop
    // NOP
    // 0x138bd0: 0x0  nop
    // NOP
    // 0x138bd4: 0x0  nop
    // NOP
    // 0x138bd8: 0x0  nop
    // NOP
    // 0x138bdc: 0x0  nop
    // NOP
    // 0x138be0: 0x451024  and         $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x138be4: 0x0  nop
    // NOP
    ctx->pc = 0x138be8u;
}