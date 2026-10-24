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

// Function: func_00386640
// Address: 0x386640 - 0x3866b8
void func_00386640_0x386640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386640_0x386640");
#endif

    switch (ctx->pc) {
        case 0x386688u: goto label_386688;
        default: break;
    }

    ctx->pc = 0x386640u;

    // 0x386640: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x386640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x386644: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x386644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x386648: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386648u;
    {
        const bool branch_taken_0x386648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386648u;
        // 0x38664c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386648) {
            ctx->pc = 0x38665Cu;
            goto label_38665c;
        }
    }
    ctx->pc = 0x386650u;
    // 0x386650: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x386650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x386654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386654u;
    {
        const bool branch_taken_0x386654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386654u;
        // 0x386658: 0x2444d008  addiu       $a0, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386654) {
            ctx->pc = 0x386668u;
            goto label_386668;
        }
    }
    ctx->pc = 0x38665Cu;
label_38665c:
    // 0x38665c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386660: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x386660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x386664: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x386664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_386668:
    // 0x386668: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x386668u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38666c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x38666Cu;
    {
        const bool branch_taken_0x38666c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38666Cu;
        // 0x386670: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38666c) {
            ctx->pc = 0x3866A4u;
            goto label_3866a4;
        }
    }
    ctx->pc = 0x386674u;
    // 0x386674: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x386674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x386678: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x386678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x38667c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386680: 0x2408002f  addiu       $t0, $zero, 0x2F
    ctx->pc = 0x386680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x386684: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x386684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
label_386688:
    // 0x386688: 0x14a80004  bne         $a1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386688u;
    {
        const bool branch_taken_0x386688 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x38668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386688u;
        // 0x38668c: 0x80850000  lb          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386688) {
            ctx->pc = 0x38669Cu;
            goto label_38669c;
        }
    }
    ctx->pc = 0x386690u;
    // 0x386690: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x386690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386694: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x386694u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x386698: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x386698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_38669c:
    // 0x38669c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38669Cu;
    {
        const bool branch_taken_0x38669c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3866A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38669Cu;
        // 0x3866a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38669c) {
            ctx->pc = 0x386688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386688;
        }
    }
    ctx->pc = 0x3866A4u;
label_3866a4:
    // 0x3866a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3866a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3866a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3866a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866ac: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x3866acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3866b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3866B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3866B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866B0u;
        // 0x3866b4: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3866B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3866B8u;
}
