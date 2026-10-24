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

// Function: func_002ACF30
// Address: 0x2acf30 - 0x2acfa8
void func_002ACF30_0x2acf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ACF30_0x2acf30");
#endif

    switch (ctx->pc) {
        case 0x2acf48u: goto label_2acf48;
        default: break;
    }

    ctx->pc = 0x2acf30u;

    // 0x2acf30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2acf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2acf34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2acf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2acf38: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x2acf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acf3c: 0x8d093544  lw          $t1, 0x3544($t0)
    ctx->pc = 0x2acf3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13636)));
    // 0x2acf40: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACF40u;
    {
        const bool branch_taken_0x2acf40 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acf40) {
            ctx->pc = 0x2ACF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACF40u;
            // 0x2acf44: 0x8c820740  lw          $v0, 0x740($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACF50u;
            goto label_2acf50;
        }
    }
    ctx->pc = 0x2ACF48u;
label_2acf48:
    // 0x2acf48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF48u;
        // 0x2acf4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACF50u;
label_2acf50:
    // 0x2acf50: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x2acf50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2acf54: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x2acf54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2acf58: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2acf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2acf5c: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2acf60: 0x1466fff9  bne         $v1, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2ACF60u;
    {
        const bool branch_taken_0x2acf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2ACF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF60u;
        // 0x2acf64: 0x873821  addu        $a3, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf60) {
            ctx->pc = 0x2ACF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acf48;
        }
    }
    ctx->pc = 0x2ACF68u;
    // 0x2acf68: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2acf6c: 0x80e6010c  lb          $a2, 0x10C($a3)
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
    // 0x2acf70: 0x1261023  subu        $v0, $t1, $a2
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2acf74: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2acf74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2acf78: 0x24420744  addiu       $v0, $v0, 0x744
    ctx->pc = 0x2acf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1860));
    // 0x2acf7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2acf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acf80: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACF80u;
    {
        const bool branch_taken_0x2acf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2ACF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF80u;
        // 0x2acf84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf80) {
            ctx->pc = 0x2ACFA0u;
            goto label_2acfa0;
        }
    }
    ctx->pc = 0x2ACF88u;
    // 0x2acf88: 0xac8a0740  sw          $t2, 0x740($a0)
    ctx->pc = 0x2acf88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1856), GPR_U32(ctx, 10));
    // 0x2acf8c: 0x80e6010c  lb          $a2, 0x10C($a3)
    ctx->pc = 0x2acf8cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
    // 0x2acf90: 0x8d033544  lw          $v1, 0x3544($t0)
    ctx->pc = 0x2acf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13636)));
    // 0x2acf94: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2acf94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2acf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF98u;
        // 0x2acf9c: 0xad033544  sw          $v1, 0x3544($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 13636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACFA0u;
label_2acfa0:
    // 0x2acfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFA0u;
        // 0x2acfa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACFA8u;
}
