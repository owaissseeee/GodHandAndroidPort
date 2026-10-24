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

// Function: cSnd_SeFadeVoicesByKey
// Address: 0x2cbc58 - 0x2cbcf0
void cSnd_SeFadeVoicesByKey_0x2cbc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeFadeVoicesByKey_0x2cbc58");
#endif

    switch (ctx->pc) {
        case 0x2cbc90u: goto label_2cbc90;
        case 0x2cbcb4u: goto label_2cbcb4;
        case 0x2cbcc4u: goto label_2cbcc4;
        default: break;
    }

    ctx->pc = 0x2cbc58u;

    // 0x2cbc58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cbc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cbc5c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cbc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cbc60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2cbc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2cbc64: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cbc64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cbc68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cbc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cbc6c: 0x68c03  sra         $s1, $a2, 16
    ctx->pc = 0x2cbc6cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cbc70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2cbc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2cbc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbc78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2cbc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2cbc7c: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x2cbc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cbc80: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBC80u;
    {
        const bool branch_taken_0x2cbc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC80u;
        // 0x2cbc84: 0x59403  sra         $s2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc80) {
            ctx->pc = 0x2CBCD0u;
            goto label_2cbcd0;
        }
    }
    ctx->pc = 0x2CBC88u;
    // 0x2cbc88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbc8c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x2cbc8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2cbc90:
    // 0x2cbc90: 0x5452000d  bnel        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2CBC90u;
    {
        const bool branch_taken_0x2cbc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cbc90) {
            ctx->pc = 0x2CBC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBC90u;
            // 0x2cbc94: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBCC8u;
            goto label_2cbcc8;
        }
    }
    ctx->pc = 0x2CBC98u;
    // 0x2cbc98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2cbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cbc9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cbc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cbca0: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBCA0u;
    {
        const bool branch_taken_0x2cbca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2cbca0) {
            ctx->pc = 0x2CBCBCu;
            goto label_2cbcbc;
        }
    }
    ctx->pc = 0x2CBCA8u;
    // 0x2cbca8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2cbca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cbcac: 0xc0dd414  jal         func_375050
    ctx->pc = 0x2CBCACu;
    SET_GPR_U32(ctx, 31, 0x2CBCB4u);
    ctx->pc = 0x2CBCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBCACu;
    // 0x2cbcb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375050u, 0x2CBCACu, 0x2CBCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCB4u;
label_2cbcb4:
    // 0x2cbcb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBCB4u;
    {
        const bool branch_taken_0x2cbcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCB4u;
        // 0x2cbcb8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcb4) {
            ctx->pc = 0x2CBCC8u;
            goto label_2cbcc8;
        }
    }
    ctx->pc = 0x2CBCBCu;
label_2cbcbc:
    // 0x2cbcbc: 0xc0b390c  jal         func_2CE430
    ctx->pc = 0x2CBCBCu;
    SET_GPR_U32(ctx, 31, 0x2CBCC4u);
    ctx->pc = 0x2CBCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBCBCu;
    // 0x2cbcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE430u, 0x2CBCBCu, 0x2CBCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCC4u;
label_2cbcc4:
    // 0x2cbcc4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2cbcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cbcc8:
    // 0x2cbcc8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CBCC8u;
    {
        const bool branch_taken_0x2cbcc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcc8) {
            ctx->pc = 0x2CBCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBCC8u;
            // 0x2cbccc: 0x86020008  lh          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbc90;
        }
    }
    ctx->pc = 0x2CBCD0u;
label_2cbcd0:
    // 0x2cbcd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2cbcd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbcd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2cbcd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbcd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cbcd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbcdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2cbcdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCE4u;
        // 0x2cbce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBCECu;
    // 0x2cbcec: 0x0  nop
    ctx->pc = 0x2cbcecu;
    // NOP
    ctx->pc = 0x2cbcf0u;
}
