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

// Function: cMc_Trans
// Address: 0x2ae718 - 0x2ae740
void cMc_Trans_0x2ae718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_Trans_0x2ae718");
#endif

    switch (ctx->pc) {
        case 0x2ae728u: goto label_2ae728;
        case 0x2ae734u: goto label_2ae734;
        default: break;
    }

    ctx->pc = 0x2ae718u;

    // 0x2ae718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae720: 0xc0c3d94  jal         func_30F650
    ctx->pc = 0x2AE720u;
    SET_GPR_U32(ctx, 31, 0x2AE728u);
    ctx->pc = 0x30F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F650u, 0x2AE720u, 0x2AE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE728u;
label_2ae728:
    // 0x2ae728: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ae72c: 0xc0abc0a  jal         func_2AF028
    ctx->pc = 0x2AE72Cu;
    SET_GPR_U32(ctx, 31, 0x2AE734u);
    ctx->pc = 0x2AE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE72Cu;
    // 0x2ae730: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF028u, 0x2AE72Cu, 0x2AE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE734u;
label_2ae734:
    // 0x2ae734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae738: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE738u;
        // 0x2ae73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE740u;
}
