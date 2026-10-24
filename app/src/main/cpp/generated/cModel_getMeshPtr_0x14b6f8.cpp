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

// Function: cModel_getMeshPtr
// Address: 0x14b6f8 - 0x14b730
void cModel_getMeshPtr_0x14b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_getMeshPtr_0x14b6f8");
#endif

    switch (ctx->pc) {
        case 0x14b710u: goto label_14b710;
        default: break;
    }

    ctx->pc = 0x14b6f8u;

    // 0x14b6f8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x14b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14b6fc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x14B6FCu;
    {
        const bool branch_taken_0x14b6fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6FCu;
        // 0x14b700: 0x8c82025c  lw          $v0, 0x25C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6fc) {
            ctx->pc = 0x14B728u;
            goto label_14b728;
        }
    }
    ctx->pc = 0x14B704u;
    // 0x14b704: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14b704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b708: 0x8c420404  lw          $v0, 0x404($v0)
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x14b70c: 0x0  nop
    ctx->pc = 0x14b70cu;
    // NOP
label_14b710:
    // 0x14b710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B710u;
    {
        const bool branch_taken_0x14b710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B710u;
        // 0x14b714: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b710) {
            ctx->pc = 0x14B720u;
            goto label_14b720;
        }
    }
    ctx->pc = 0x14B718u;
    // 0x14b718: 0x3e00008  jr          $ra
    ctx->pc = 0x14B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B718u;
        // 0x14b71c: 0x8c82025c  lw          $v0, 0x25C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B720u;
label_14b720:
    // 0x14b720: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B720u;
    {
        const bool branch_taken_0x14b720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x14b720) {
            ctx->pc = 0x14B724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B720u;
            // 0x14b724: 0x8c420404  lw          $v0, 0x404($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b710;
        }
    }
    ctx->pc = 0x14B728u;
label_14b728:
    // 0x14b728: 0x3e00008  jr          $ra
    ctx->pc = 0x14B728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B730u;
}
