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

// Function: func_003ACE90
// Address: 0x3ace90 - 0x3ad0c0
void func_003ACE90_0x3ace90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003ACE90_0x3ace90");
#endif

    switch (ctx->pc) {
        case 0x3acee0u: goto label_3acee0;
        case 0x3acf94u: goto label_3acf94;
        case 0x3acfacu: goto label_3acfac;
        case 0x3acfb8u: goto label_3acfb8;
        case 0x3acff8u: goto label_3acff8;
        default: break;
    }

    ctx->pc = 0x3ace90u;

    // 0x3ace90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ace90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ace94: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3ace94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3ace98: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3ace98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3ace9c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3ace9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3acea0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3acea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3acea4: 0x3c1e0046  lui         $fp, 0x46
    ctx->pc = 0x3acea4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)70 << 16));
    // 0x3acea8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3acea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3aceac: 0x27c5f039  addiu       $a1, $fp, -0xFC7
    ctx->pc = 0x3aceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963257));
    // 0x3aceb0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3aceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3aceb4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3aceb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aceb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3aceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3acebc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3acebcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acec0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3acec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3acec4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3acec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3acec8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3acec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3acecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aced0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3aced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3aced4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3aced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3aced8: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x3aced8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3acedc: 0x0  nop
    ctx->pc = 0x3acedcu;
    // NOP
label_3acee0:
    // 0x3acee0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3acee0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3acee4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x3acee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3acee8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3acee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3aceec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3aceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3acef0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3ACEF0u;
    {
        const bool branch_taken_0x3acef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEF0u;
        // 0x3acef4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acef0) {
            ctx->pc = 0x3ACEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acee0;
        }
    }
    ctx->pc = 0x3ACEF8u;
    // 0x3acef8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3acef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3acefc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACEFCu;
    {
        const bool branch_taken_0x3acefc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ACF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEFCu;
        // 0x3acf00: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acefc) {
            ctx->pc = 0x3ACF10u;
            goto label_3acf10;
        }
    }
    ctx->pc = 0x3ACF04u;
    // 0x3acf04: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3acf04u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3acf08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACF08u;
    {
        const bool branch_taken_0x3acf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF08u;
        // 0x3acf0c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf08) {
            ctx->pc = 0x3ACF1Cu;
            goto label_3acf1c;
        }
    }
    ctx->pc = 0x3ACF10u;
label_3acf10:
    // 0x3acf10: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACF10u;
    {
        const bool branch_taken_0x3acf10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3acf10) {
            ctx->pc = 0x3ACF20u;
            goto label_3acf20;
        }
    }
    ctx->pc = 0x3ACF18u;
    // 0x3acf18: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3acf18u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3acf1c:
    // 0x3acf1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3acf1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3acf20:
    // 0x3acf20: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACF20u;
    {
        const bool branch_taken_0x3acf20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF20u;
        // 0x3acf24: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf20) {
            ctx->pc = 0x3ACF30u;
            goto label_3acf30;
        }
    }
    ctx->pc = 0x3ACF28u;
    // 0x3acf28: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ACF28u;
    {
        const bool branch_taken_0x3acf28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3acf28) {
            ctx->pc = 0x3ACF5Cu;
            goto label_3acf5c;
        }
    }
    ctx->pc = 0x3ACF30u;
label_3acf30:
    // 0x3acf30: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3acf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3acf34: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3ACF34u;
    {
        const bool branch_taken_0x3acf34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ACF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF34u;
        // 0x3acf38: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf34) {
            ctx->pc = 0x3ACF5Cu;
            goto label_3acf5c;
        }
    }
    ctx->pc = 0x3ACF3Cu;
    // 0x3acf3c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3acf3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3acf40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACF40u;
    {
        const bool branch_taken_0x3acf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ACF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF40u;
        // 0x3acf44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf40) {
            ctx->pc = 0x3ACF50u;
            goto label_3acf50;
        }
    }
    ctx->pc = 0x3ACF48u;
    // 0x3acf48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACF48u;
    {
        const bool branch_taken_0x3acf48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3acf48) {
            ctx->pc = 0x3ACF5Cu;
            goto label_3acf5c;
        }
    }
    ctx->pc = 0x3ACF50u;
label_3acf50:
    // 0x3acf50: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x3acf50u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3acf54: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3acf54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3acf58: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3acf58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_3acf5c:
    // 0x3acf5c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACF5Cu;
    {
        const bool branch_taken_0x3acf5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF5Cu;
        // 0x3acf60: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf5c) {
            ctx->pc = 0x3ACF70u;
            goto label_3acf70;
        }
    }
    ctx->pc = 0x3ACF64u;
    // 0x3acf64: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x3acf64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3acf68: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x3acf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x3acf6c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3acf6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3acf70:
    // 0x3acf70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3acf74: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x3acf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x3acf78: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3acf78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3acf7c: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x3acf7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x3acf80: 0x57a00b  movn        $s4, $v0, $s7
    ctx->pc = 0x3acf80u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x3acf84: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3acf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3acf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf8c: 0xc0ee516  jal         func_3B9458
    ctx->pc = 0x3ACF8Cu;
    SET_GPR_U32(ctx, 31, 0x3ACF94u);
    ctx->pc = 0x3ACF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF8Cu;
    // 0x3acf90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9458u, 0x3ACF8Cu, 0x3ACF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF94u;
label_3acf94:
    // 0x3acf94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3acf94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3acf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf9c: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x3acf9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3acfa0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x3acfa0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x3acfa4: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3ACFA4u;
    SET_GPR_U32(ctx, 31, 0x3ACFACu);
    ctx->pc = 0x3ACFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACFA4u;
    // 0x3acfa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3ACFA4u, 0x3ACFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACFACu;
label_3acfac:
    // 0x3acfac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3acfacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acfb0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3ACFB0u;
    {
        const bool branch_taken_0x3acfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFB0u;
        // 0x3acfb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfb0) {
            ctx->pc = 0x3AD004u;
            goto label_3ad004;
        }
    }
    ctx->pc = 0x3ACFB8u;
label_3acfb8:
    // 0x3acfb8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3acfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3acfbc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3ACFBCu;
    {
        const bool branch_taken_0x3acfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acfbc) {
            ctx->pc = 0x3AD03Cu;
            goto label_3ad03c;
        }
    }
    ctx->pc = 0x3ACFC4u;
    // 0x3acfc4: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ACFC4u;
    {
        const bool branch_taken_0x3acfc4 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x3ACFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFC4u;
        // 0x3acfc8: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfc4) {
            ctx->pc = 0x3ACFE8u;
            goto label_3acfe8;
        }
    }
    ctx->pc = 0x3ACFCCu;
    // 0x3acfcc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3ACFCCu;
    {
        const bool branch_taken_0x3acfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acfcc) {
            ctx->pc = 0x3ACFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACFCCu;
            // 0x3acfd0: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACFFCu;
            goto label_3acffc;
        }
    }
    ctx->pc = 0x3ACFD4u;
    // 0x3acfd4: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ACFD4u;
    {
        const bool branch_taken_0x3acfd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x3ACFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFD4u;
        // 0x3acfd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfd4) {
            ctx->pc = 0x3ACFF0u;
            goto label_3acff0;
        }
    }
    ctx->pc = 0x3ACFDCu;
    // 0x3acfdc: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x3acfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3acfe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACFE0u;
    {
        const bool branch_taken_0x3acfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acfe0) {
            ctx->pc = 0x3ACFF0u;
            goto label_3acff0;
        }
    }
    ctx->pc = 0x3ACFE8u;
label_3acfe8:
    // 0x3acfe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACFE8u;
    {
        const bool branch_taken_0x3acfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFE8u;
        // 0x3acfec: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfe8) {
            ctx->pc = 0x3ACFFCu;
            goto label_3acffc;
        }
    }
    ctx->pc = 0x3ACFF0u;
label_3acff0:
    // 0x3acff0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x3ACFF0u;
    SET_GPR_U32(ctx, 31, 0x3ACFF8u);
    ctx->pc = 0x3ACFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACFF0u;
    // 0x3acff4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x3ACFF0u, 0x3ACFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACFF8u;
label_3acff8:
    // 0x3acff8: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x3acff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_3acffc:
    // 0x3acffc: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3acffcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ad000: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ad004:
    // 0x3ad004: 0x27c2f039  addiu       $v0, $fp, -0xFC7
    ctx->pc = 0x3ad004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963257));
    // 0x3ad008: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3ad008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ad00c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3ad00cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ad010: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3ad010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3ad014: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD014u;
    {
        const bool branch_taken_0x3ad014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD014u;
        // 0x3ad018: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad014) {
            ctx->pc = 0x3AD024u;
            goto label_3ad024;
        }
    }
    ctx->pc = 0x3AD01Cu;
    // 0x3ad01c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x3AD01Cu;
    {
        const bool branch_taken_0x3ad01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD01Cu;
        // 0x3ad020: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad01c) {
            ctx->pc = 0x3ACFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acfb8;
        }
    }
    ctx->pc = 0x3AD024u;
label_3ad024:
    // 0x3ad024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD024u;
    {
        const bool branch_taken_0x3ad024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD024u;
        // 0x3ad028: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad024) {
            ctx->pc = 0x3AD03Cu;
            goto label_3ad03c;
        }
    }
    ctx->pc = 0x3AD02Cu;
    // 0x3ad02c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3ad02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3ad030: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x3ad030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x3ad034: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3AD034u;
    {
        const bool branch_taken_0x3ad034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD034u;
        // 0x3ad038: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad034) {
            ctx->pc = 0x3ACFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acfb8;
        }
    }
    ctx->pc = 0x3AD03Cu;
label_3ad03c:
    // 0x3ad03c: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x3AD03Cu;
    {
        const bool branch_taken_0x3ad03c = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x3AD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD03Cu;
        // 0x3ad040: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad03c) {
            ctx->pc = 0x3AD068u;
            goto label_3ad068;
        }
    }
    ctx->pc = 0x3AD044u;
    // 0x3ad044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ad044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad048: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x3ad048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x3ad04c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3ad04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad050: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x3ad050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x3ad054: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x3ad054u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x3ad058: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3ad058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3ad05c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3ad05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD060u;
    {
        const bool branch_taken_0x3ad060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD060u;
        // 0x3ad064: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad060) {
            ctx->pc = 0x3AD06Cu;
            goto label_3ad06c;
        }
    }
    ctx->pc = 0x3AD068u;
label_3ad068:
    // 0x3ad068: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x3ad068u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3ad06c:
    // 0x3ad06c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3ad06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ad070: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD070u;
    {
        const bool branch_taken_0x3ad070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD070u;
        // 0x3ad074: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad070) {
            ctx->pc = 0x3AD088u;
            goto label_3ad088;
        }
    }
    ctx->pc = 0x3AD078u;
    // 0x3ad078: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3ad078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3ad07c: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x3ad07cu;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3ad080: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3ad080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ad084: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3ad084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3ad088:
    // 0x3ad088: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3ad088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ad08c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ad08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad090: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3ad090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ad094: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3ad094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ad098: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3ad098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ad09c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ad09cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ad0a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ad0a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ad0a4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3ad0a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ad0a8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3ad0a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ad0ac: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3ad0acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ad0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0B4u;
        // 0x3ad0b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD0BCu;
    // 0x3ad0bc: 0x0  nop
    ctx->pc = 0x3ad0bcu;
    // NOP
    ctx->pc = 0x3ad0c0u;
}
