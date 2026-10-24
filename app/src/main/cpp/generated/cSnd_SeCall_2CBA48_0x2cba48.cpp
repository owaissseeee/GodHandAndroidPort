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

// Function: cSnd_SeCall_2CBA48
// Address: 0x2cba48 - 0x2cbba0
void cSnd_SeCall_2CBA48_0x2cba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeCall_2CBA48_0x2cba48");
#endif

    switch (ctx->pc) {
        case 0x2cbab8u: goto label_2cbab8;
        case 0x2cbad4u: goto label_2cbad4;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbafcu: goto label_2cbafc;
        case 0x2cbb24u: goto label_2cbb24;
        case 0x2cbb2cu: goto label_2cbb2c;
        case 0x2cbb3cu: goto label_2cbb3c;
        case 0x2cbb60u: goto label_2cbb60;
        default: break;
    }

    ctx->pc = 0x2cba48u;

    // 0x2cba48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cba4c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cba50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2cba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2cba54: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cba58: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2cba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2cba5c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2cba5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cba60: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2cba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2cba64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cba64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cba6c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2cba6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba70: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2cba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2cba74: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2cba74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba78: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2cba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2cba7c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2cba7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba80: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2cba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2cba84: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2cba84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba88: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2cba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2cba8c: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2cba8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2cba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2cba94: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x2cba94u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cba98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cba9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbaa0: 0x1682001d  bne         $s4, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CBAA0u;
    {
        const bool branch_taken_0x2cbaa0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAA0u;
        // 0x2cbaa4: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaa0) {
            ctx->pc = 0x2CBB18u;
            goto label_2cbb18;
        }
    }
    ctx->pc = 0x2CBAA8u;
    // 0x2cbaa8: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBAA8u;
    {
        const bool branch_taken_0x2cbaa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbaa8) {
            ctx->pc = 0x2CBAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBAA8u;
            // 0x2cbaac: 0x8ea50564  lw          $a1, 0x564($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBACCu;
            goto label_2cbacc;
        }
    }
    ctx->pc = 0x2CBAB0u;
    // 0x2cbab0: 0xc0b2cea  jal         func_2CB3A8
    ctx->pc = 0x2CBAB0u;
    SET_GPR_U32(ctx, 31, 0x2CBAB8u);
    ctx->pc = 0x2CBAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAB0u;
    // 0x2cbab4: 0x8e050564  lw          $a1, 0x564($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3A8u, 0x2CBAB0u, 0x2CBAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAB8u;
label_2cbab8:
    // 0x2cbab8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbabc: 0x5a200008  blezl       $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBABCu;
    {
        const bool branch_taken_0x2cbabc = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x2cbabc) {
            ctx->pc = 0x2CBAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBABCu;
            // 0x2cbac0: 0x96110300  lhu         $s1, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBAE0u;
            goto label_2cbae0;
        }
    }
    ctx->pc = 0x2CBAC4u;
    // 0x2cbac4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBAC4u;
    {
        const bool branch_taken_0x2cbac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAC4u;
        // 0x2cbac8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbac4) {
            ctx->pc = 0x2CBAE4u;
            goto label_2cbae4;
        }
    }
    ctx->pc = 0x2CBACCu;
label_2cbacc:
    // 0x2cbacc: 0xc0b2cea  jal         func_2CB3A8
    ctx->pc = 0x2CBACCu;
    SET_GPR_U32(ctx, 31, 0x2CBAD4u);
    ctx->pc = 0x2CBAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBACCu;
    // 0x2cbad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3A8u, 0x2CBACCu, 0x2CBAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAD4u;
label_2cbad4:
    // 0x2cbad4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbad8: 0x5a200001  blezl       $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CBAD8u;
    {
        const bool branch_taken_0x2cbad8 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x2cbad8) {
            ctx->pc = 0x2CBADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBAD8u;
            // 0x2cbadc: 0x96b10300  lhu         $s1, 0x300($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBAE0u;
            goto label_2cbae0;
        }
    }
    ctx->pc = 0x2CBAE0u;
label_2cbae0:
    // 0x2cbae0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2cbae4:
    // 0x2cbae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cbae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbae8: 0x2450ce48  addiu       $s0, $v0, -0x31B8
    ctx->pc = 0x2cbae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954568));
    // 0x2cbaec: 0x0  nop
    ctx->pc = 0x2cbaecu;
    // NOP
label_2cbaf0:
    // 0x2cbaf0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cbaf4: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CBAF4u;
    SET_GPR_U32(ctx, 31, 0x2CBAFCu);
    ctx->pc = 0x2CBAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAF4u;
    // 0x2cbaf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CBAF4u, 0x2CBAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAFCu;
label_2cbafc:
    // 0x2cbafc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cbb00: 0x50710001  beql        $v1, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CBB00u;
    {
        const bool branch_taken_0x2cbb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2cbb00) {
            ctx->pc = 0x2CBB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBB00u;
            // 0x2cbb04: 0x86140000  lh          $s4, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBB08u;
            goto label_2cbb08;
        }
    }
    ctx->pc = 0x2CBB08u;
label_2cbb08:
    // 0x2cbb08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cbb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cbb0c: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x2cbb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cbb10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CBB10u;
    {
        const bool branch_taken_0x2cbb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB10u;
        // 0x2cbb14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb10) {
            ctx->pc = 0x2CBAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbaf0;
        }
    }
    ctx->pc = 0x2CBB18u;
label_2cbb18:
    // 0x2cbb18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb1c: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CBB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB24u);
    ctx->pc = 0x2CBB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB1Cu;
    // 0x2cbb20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CBB1Cu, 0x2CBB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB24u;
label_2cbb24:
    // 0x2cbb24: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CBB24u;
    SET_GPR_U32(ctx, 31, 0x2CBB2Cu);
    ctx->pc = 0x2CBB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB24u;
    // 0x2cbb28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CBB24u, 0x2CBB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB2Cu;
label_2cbb2c:
    // 0x2cbb2c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CBB2Cu;
    {
        const bool branch_taken_0x2cbb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB2Cu;
        // 0x2cbb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb2c) {
            ctx->pc = 0x2CBB6Cu;
            goto label_2cbb6c;
        }
    }
    ctx->pc = 0x2CBB34u;
    // 0x2cbb34: 0xc0b2fb0  jal         func_2CBEC0
    ctx->pc = 0x2CBB34u;
    SET_GPR_U32(ctx, 31, 0x2CBB3Cu);
    ctx->pc = 0x2CBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB34u;
    // 0x2cbb38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBEC0u, 0x2CBB34u, 0x2CBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB3Cu;
label_2cbb3c:
    // 0x2cbb3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CBB3Cu;
    {
        const bool branch_taken_0x2cbb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB3Cu;
        // 0x2cbb40: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb3c) {
            ctx->pc = 0x2CBB68u;
            goto label_2cbb68;
        }
    }
    ctx->pc = 0x2CBB44u;
    // 0x2cbb44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cbb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb4c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2cbb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb50: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2cbb50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb54: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2cbb54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb58: 0xc0b3746  jal         func_2CDD18
    ctx->pc = 0x2CBB58u;
    SET_GPR_U32(ctx, 31, 0x2CBB60u);
    ctx->pc = 0x2CBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB58u;
    // 0x2cbb5c: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD18u, 0x2CBB58u, 0x2CBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB60u;
label_2cbb60:
    // 0x2cbb60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBB60u;
    {
        const bool branch_taken_0x2cbb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB60u;
        // 0x2cbb64: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb60) {
            ctx->pc = 0x2CBB70u;
            goto label_2cbb70;
        }
    }
    ctx->pc = 0x2CBB68u;
label_2cbb68:
    // 0x2cbb68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb6c:
    // 0x2cbb6c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2cbb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cbb70:
    // 0x2cbb70: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2cbb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cbb74: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2cbb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cbb78: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2cbb78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbb7c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2cbb7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cbb80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cbb80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbb84: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2cbb84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbb88: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2cbb88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbb8c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2cbb8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbb90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbb94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB94u;
        // 0x2cbb98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBB9Cu;
    // 0x2cbb9c: 0x0  nop
    ctx->pc = 0x2cbb9cu;
    // NOP
    ctx->pc = 0x2cbba0u;
}
