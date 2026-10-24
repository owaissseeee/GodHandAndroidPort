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

// Function: IdDrawObj_transIfShown
// Address: 0x13cf20 - 0x13cfb0
void IdDrawObj_transIfShown_0x13cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdDrawObj_transIfShown_0x13cf20");
#endif

    switch (ctx->pc) {
        case 0x13cf90u: goto label_13cf90;
        case 0x13cfa0u: goto label_13cfa0;
        default: break;
    }

    ctx->pc = 0x13cf20u;

    // 0x13cf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cf24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13cf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf30: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x13cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13cf34: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x13CF34u;
    {
        const bool branch_taken_0x13cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf34) {
            ctx->pc = 0x13CF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF34u;
            // 0x13cf38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFA4u;
            goto label_13cfa4;
        }
    }
    ctx->pc = 0x13CF3Cu;
    // 0x13cf3c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x13cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x13cf40: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13CF40u;
    {
        const bool branch_taken_0x13cf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF40u;
        // 0x13cf44: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf40) {
            ctx->pc = 0x13CFA0u;
            goto label_13cfa0;
        }
    }
    ctx->pc = 0x13CF48u;
    // 0x13cf48: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x13cf4c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13cf50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13cf54: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13CF54u;
    {
        const bool branch_taken_0x13cf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF54u;
        // 0x13cf58: 0x24657a24  addiu       $a1, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf54) {
            ctx->pc = 0x13CFA0u;
            goto label_13cfa0;
        }
    }
    ctx->pc = 0x13CF5Cu;
    // 0x13cf5c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x13cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13cf60: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13CF60u;
    {
        const bool branch_taken_0x13cf60 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x13cf60) {
            ctx->pc = 0x13CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF60u;
            // 0x13cf64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFA4u;
            goto label_13cfa4;
        }
    }
    ctx->pc = 0x13CF68u;
    // 0x13cf68: 0x84820548  lh          $v0, 0x548($a0)
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x13cf6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13CF6Cu;
    {
        const bool branch_taken_0x13cf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF6Cu;
        // 0x13cf70: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf6c) {
            ctx->pc = 0x13CFA0u;
            goto label_13cfa0;
        }
    }
    ctx->pc = 0x13CF74u;
    // 0x13cf74: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x13cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x13cf78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13cf7c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CF7Cu;
    {
        const bool branch_taken_0x13cf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf7c) {
            ctx->pc = 0x13CF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF7Cu;
            // 0x13cf80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFA4u;
            goto label_13cfa4;
        }
    }
    ctx->pc = 0x13CF84u;
    // 0x13cf84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x13cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x13cf88: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x13CF88u;
    SET_GPR_U32(ctx, 31, 0x13CF90u);
    ctx->pc = 0x13CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF88u;
    // 0x13cf8c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x13CF88u, 0x13CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF90u;
label_13cf90:
    // 0x13cf90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CF90u;
    {
        const bool branch_taken_0x13cf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf90) {
            ctx->pc = 0x13CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF90u;
            // 0x13cf94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFA4u;
            goto label_13cfa4;
        }
    }
    ctx->pc = 0x13CF98u;
    // 0x13cf98: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13CF98u;
    SET_GPR_U32(ctx, 31, 0x13CFA0u);
    ctx->pc = 0x13CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF98u;
    // 0x13cf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13CF98u, 0x13CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFA0u;
label_13cfa0:
    // 0x13cfa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13cfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13cfa4:
    // 0x13cfa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA8u;
        // 0x13cfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFB0u;
}
