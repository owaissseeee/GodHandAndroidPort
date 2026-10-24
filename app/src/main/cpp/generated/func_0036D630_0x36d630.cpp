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

// Function: func_0036D630
// Address: 0x36d630 - 0x36d688
void func_0036D630_0x36d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D630_0x36d630");
#endif

    switch (ctx->pc) {
        case 0x36d658u: goto label_36d658;
        default: break;
    }

    ctx->pc = 0x36d630u;

    // 0x36d630: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x36d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x36d634: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x36d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
    // 0x36d638: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x36d638u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x76A5D0u));
    // 0x36d63c: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x36D63Cu;
    {
        const bool branch_taken_0x36d63c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x36D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D63Cu;
        // 0x36d640: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d63c) {
            ctx->pc = 0x36D67Cu;
            goto label_36d67c;
        }
    }
    ctx->pc = 0x36D644u;
    // 0x36d644: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x36d644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36d648: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36d648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d64c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36d650: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x36d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x36d654: 0x0  nop
    ctx->pc = 0x36d654u;
    // NOP
label_36d658:
    // 0x36d658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d65c: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x36D65Cu;
    {
        const bool branch_taken_0x36d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x36D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D65Cu;
        // 0x36d660: 0x24630640  addiu       $v1, $v1, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d65c) {
            ctx->pc = 0x36D668u;
            goto label_36d668;
        }
    }
    ctx->pc = 0x36D664u;
    // 0x36d664: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x36d664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_36d668:
    // 0x36d668: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x36d668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x36d66c: 0x0  nop
    ctx->pc = 0x36d66cu;
    // NOP
    // 0x36d670: 0x0  nop
    ctx->pc = 0x36d670u;
    // NOP
    // 0x36d674: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36D674u;
    {
        const bool branch_taken_0x36d674 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D674u;
        // 0x36d678: 0x24840640  addiu       $a0, $a0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d674) {
            ctx->pc = 0x36D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d658;
        }
    }
    ctx->pc = 0x36D67Cu;
label_36d67c:
    // 0x36d67c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D684u;
    // 0x36d684: 0x0  nop
    ctx->pc = 0x36d684u;
    // NOP
    ctx->pc = 0x36d688u;
}
