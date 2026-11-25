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

// Function: Tramp_func_001B79B0_001B3658
// Address: 0x1b3658 - 0x1b3680
void Tramp_func_001B79B0_001B3658_0x1b3658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_001B3658_0x1b3658");
#endif

    if (__builtin_expect(ctx->pc != 0x1b3658u, 0)) {
        switch (ctx->pc) {
            case 0x1b3668u: goto label_1b3668;
            default: break;
        }
    }


    // 0x1b3658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b365c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3660: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1B3660u;
    SET_GPR_U32(ctx, 31, 0x1B3668u);
    if (!runtime->callDirectStatic(rdram, ctx, &cOmBase_dieCommon_0x1b79b0, 0x1b79b0u, 0x1b3668u)) {
        return;
    }
    ctx->pc = 0x1B3668u;
label_1b3668:
    // 0x1b3668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b366c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B366Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B366Cu;
        // 0x1b3670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B366Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1b3674: 0x0  nop
    // NOP
    // 0x1b3678: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b367c: 0x0  nop
    // NOP
    ctx->pc = 0x1b3680u;
}