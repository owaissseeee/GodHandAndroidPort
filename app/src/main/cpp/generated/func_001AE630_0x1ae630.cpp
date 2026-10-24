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

// Function: func_001AE630
// Address: 0x1ae630 - 0x1ae6a0
void func_001AE630_0x1ae630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE630_0x1ae630");
#endif

    ctx->pc = 0x1ae630u;

    // 0x1ae630: 0x8c820604  lw          $v0, 0x604($a0)
    ctx->pc = 0x1ae630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1ae634: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE634u;
    {
        const bool branch_taken_0x1ae634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE634u;
        // 0x1ae638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae634) {
            ctx->pc = 0x1AE65Cu;
            goto label_1ae65c;
        }
    }
    ctx->pc = 0x1AE63Cu;
    // 0x1ae63c: 0x8c4309d0  lw          $v1, 0x9D0($v0)
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x1ae640: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE640u;
    {
        const bool branch_taken_0x1ae640 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1AE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE640u;
        // 0x1ae644: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae640) {
            ctx->pc = 0x1AE65Cu;
            goto label_1ae65c;
        }
    }
    ctx->pc = 0x1AE648u;
    // 0x1ae648: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ae648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ae64c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE64Cu;
    {
        const bool branch_taken_0x1ae64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae64c) {
            ctx->pc = 0x1AE650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE64Cu;
            // 0x1ae650: 0x8c820608  lw          $v0, 0x608($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE664u;
            goto label_1ae664;
        }
    }
    ctx->pc = 0x1AE654u;
    // 0x1ae654: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE654u;
        // 0x1ae658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE65Cu;
label_1ae65c:
    // 0x1ae65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae660: 0x8c820608  lw          $v0, 0x608($a0)
    ctx->pc = 0x1ae660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1544)));
label_1ae664:
    // 0x1ae664: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE664u;
    {
        const bool branch_taken_0x1ae664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae664) {
            ctx->pc = 0x1AE668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE664u;
            // 0x1ae668: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE690u;
            goto label_1ae690;
        }
    }
    ctx->pc = 0x1AE66Cu;
    // 0x1ae66c: 0x8c4409d0  lw          $a0, 0x9D0($v0)
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x1ae670: 0x4820007  bltzl       $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE670u;
    {
        const bool branch_taken_0x1ae670 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x1ae670) {
            ctx->pc = 0x1AE674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE670u;
            // 0x1ae674: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE690u;
            goto label_1ae690;
        }
    }
    ctx->pc = 0x1AE678u;
    // 0x1ae678: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ae678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ae67c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ae67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ae680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE680u;
    {
        const bool branch_taken_0x1ae680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE680u;
        // 0x1ae684: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae680) {
            ctx->pc = 0x1AE694u;
            goto label_1ae694;
        }
    }
    ctx->pc = 0x1AE688u;
    // 0x1ae688: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE690u;
label_1ae690:
    // 0x1ae690: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1ae690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ae694:
    // 0x1ae694: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE694u;
        // 0x1ae698: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE69Cu;
    // 0x1ae69c: 0x0  nop
    ctx->pc = 0x1ae69cu;
    // NOP
    ctx->pc = 0x1ae6a0u;
}
