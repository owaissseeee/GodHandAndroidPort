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

// Function: func_0037C630
// Address: 0x37c630 - 0x37c6a0
void func_0037C630_0x37c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C630_0x37c630");
#endif

    ctx->pc = 0x37c630u;

    // 0x37c630: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37c630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c634: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37c634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37c638: 0x84a20020  lh          $v0, 0x20($a1)
    ctx->pc = 0x37c638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x37c63c: 0x24633250  addiu       $v1, $v1, 0x3250
    ctx->pc = 0x37c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12880));
    // 0x37c640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37c640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c648: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c64c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37c650: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x37c650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x37c654: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x37c654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x37c658: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x37c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x37c65c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x37c65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37c660: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C660u;
    {
        const bool branch_taken_0x37c660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C660u;
        // 0x37c664: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c660) {
            ctx->pc = 0x37C670u;
            goto label_37c670;
        }
    }
    ctx->pc = 0x37C668u;
    // 0x37c668: 0x3e00008  jr          $ra
    ctx->pc = 0x37C668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C668u;
        // 0x37c66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C670u;
label_37c670:
    // 0x37c670: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x37c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c674: 0x8c43a7a4  lw          $v1, -0x585C($v0)
    ctx->pc = 0x37c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944676)));
    // 0x37c678: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C678u;
    {
        const bool branch_taken_0x37c678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x37C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C678u;
        // 0x37c67c: 0x94a2002e  lhu         $v0, 0x2E($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c678) {
            ctx->pc = 0x37C690u;
            goto label_37c690;
        }
    }
    ctx->pc = 0x37C680u;
    // 0x37c680: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x37c680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x37c684: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37c684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x37c688: 0x3e00008  jr          $ra
    ctx->pc = 0x37C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C688u;
        // 0x37c68c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C690u;
label_37c690:
    // 0x37c690: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x37c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x37c694: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x37c698: 0x3e00008  jr          $ra
    ctx->pc = 0x37C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C698u;
        // 0x37c69c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C6A0u;
}
