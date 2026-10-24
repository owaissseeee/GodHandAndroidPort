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

// Function: func_001FCBA0
// Address: 0x1fcba0 - 0x1fccc0
void func_001FCBA0_0x1fcba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FCBA0_0x1fcba0");
#endif

    switch (ctx->pc) {
        case 0x1fcba0u: goto label_1fcba0;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcba8u: goto label_1fcba8;
        case 0x1fcbacu: goto label_1fcbac;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbb4u: goto label_1fcbb4;
        case 0x1fcbb8u: goto label_1fcbb8;
        case 0x1fcbbcu: goto label_1fcbbc;
        case 0x1fcbc0u: goto label_1fcbc0;
        case 0x1fcbc4u: goto label_1fcbc4;
        case 0x1fcbc8u: goto label_1fcbc8;
        case 0x1fcbccu: goto label_1fcbcc;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbd4u: goto label_1fcbd4;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbdcu: goto label_1fcbdc;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbe4u: goto label_1fcbe4;
        case 0x1fcbe8u: goto label_1fcbe8;
        case 0x1fcbecu: goto label_1fcbec;
        case 0x1fcbf0u: goto label_1fcbf0;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcbf8u: goto label_1fcbf8;
        case 0x1fcbfcu: goto label_1fcbfc;
        case 0x1fcc00u: goto label_1fcc00;
        case 0x1fcc04u: goto label_1fcc04;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc0cu: goto label_1fcc0c;
        case 0x1fcc10u: goto label_1fcc10;
        case 0x1fcc14u: goto label_1fcc14;
        case 0x1fcc18u: goto label_1fcc18;
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fcc20u: goto label_1fcc20;
        case 0x1fcc24u: goto label_1fcc24;
        case 0x1fcc28u: goto label_1fcc28;
        case 0x1fcc2cu: goto label_1fcc2c;
        case 0x1fcc30u: goto label_1fcc30;
        case 0x1fcc34u: goto label_1fcc34;
        case 0x1fcc38u: goto label_1fcc38;
        case 0x1fcc3cu: goto label_1fcc3c;
        case 0x1fcc40u: goto label_1fcc40;
        case 0x1fcc44u: goto label_1fcc44;
        case 0x1fcc48u: goto label_1fcc48;
        case 0x1fcc4cu: goto label_1fcc4c;
        case 0x1fcc50u: goto label_1fcc50;
        case 0x1fcc54u: goto label_1fcc54;
        case 0x1fcc58u: goto label_1fcc58;
        case 0x1fcc5cu: goto label_1fcc5c;
        case 0x1fcc60u: goto label_1fcc60;
        case 0x1fcc64u: goto label_1fcc64;
        case 0x1fcc68u: goto label_1fcc68;
        case 0x1fcc6cu: goto label_1fcc6c;
        case 0x1fcc70u: goto label_1fcc70;
        case 0x1fcc74u: goto label_1fcc74;
        case 0x1fcc78u: goto label_1fcc78;
        case 0x1fcc7cu: goto label_1fcc7c;
        case 0x1fcc80u: goto label_1fcc80;
        case 0x1fcc84u: goto label_1fcc84;
        case 0x1fcc88u: goto label_1fcc88;
        case 0x1fcc8cu: goto label_1fcc8c;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fcc94u: goto label_1fcc94;
        case 0x1fcc98u: goto label_1fcc98;
        case 0x1fcc9cu: goto label_1fcc9c;
        case 0x1fcca0u: goto label_1fcca0;
        case 0x1fcca4u: goto label_1fcca4;
        case 0x1fcca8u: goto label_1fcca8;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb0u: goto label_1fccb0;
        case 0x1fccb4u: goto label_1fccb4;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccbcu: goto label_1fccbc;
        default: break;
    }

    ctx->pc = 0x1fcba0u;

label_1fcba0:
    // 0x1fcba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fcba4:
    // 0x1fcba4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1fcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1fcba8:
    // 0x1fcba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fcbac:
    // 0x1fcbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fcbb0:
    // 0x1fcbb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcbb4:
    // 0x1fcbb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fcbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fcbb8:
    // 0x1fcbb8: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x1fcbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1fcbbc:
    // 0x1fcbbc: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_1fcbc0:
    if (ctx->pc == 0x1FCBC0u) {
        ctx->pc = 0x1FCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBBCu;
        // 0x1fcbc0: 0x24448040  addiu       $a0, $v0, -0x7FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBC4u;
        goto label_1fcbc4;
    }
    ctx->pc = 0x1FCBBCu;
    {
        const bool branch_taken_0x1fcbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBBCu;
        // 0x1fcbc0: 0x24448040  addiu       $a0, $v0, -0x7FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbbc) {
            ctx->pc = 0x1FCC9Cu;
            goto label_1fcc9c;
        }
    }
    ctx->pc = 0x1FCBC4u;
label_1fcbc4:
    // 0x1fcbc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fcbc8:
    // 0x1fcbc8: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x1fcbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_1fcbcc:
    // 0x1fcbcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fcbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1fcbd0:
    // 0x1fcbd0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1fcbd4:
    if (ctx->pc == 0x1FCBD4u) {
        ctx->pc = 0x1FCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBD0u;
        // 0x1fcbd4: 0x9083000c  lbu         $v1, 0xC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBD8u;
        goto label_1fcbd8;
    }
    ctx->pc = 0x1FCBD0u;
    {
        const bool branch_taken_0x1fcbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbd0) {
            ctx->pc = 0x1FCBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCBD0u;
            // 0x1fcbd4: 0x9083000c  lbu         $v1, 0xC($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC20u;
            goto label_1fcc20;
        }
    }
    ctx->pc = 0x1FCBD8u;
label_1fcbd8:
    // 0x1fcbd8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1fcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1fcbdc:
    // 0x1fcbdc: 0x5470000d  bnel        $v1, $s0, . + 4 + (0xD << 2)
label_1fcbe0:
    if (ctx->pc == 0x1FCBE0u) {
        ctx->pc = 0x1FCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBDCu;
        // 0x1fcbe0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBE4u;
        goto label_1fcbe4;
    }
    ctx->pc = 0x1FCBDCu;
    {
        const bool branch_taken_0x1fcbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1fcbdc) {
            ctx->pc = 0x1FCBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCBDCu;
            // 0x1fcbe0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC14u;
            goto label_1fcc14;
        }
    }
    ctx->pc = 0x1FCBE4u;
label_1fcbe4:
    // 0x1fcbe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fcbe8:
    // 0x1fcbe8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1fcbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1fcbec:
    // 0x1fcbec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1fcbf0:
    if (ctx->pc == 0x1FCBF0u) {
        ctx->pc = 0x1FCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBECu;
        // 0x1fcbf0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBF4u;
        goto label_1fcbf4;
    }
    ctx->pc = 0x1FCBECu;
    {
        const bool branch_taken_0x1fcbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBECu;
        // 0x1fcbf0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbec) {
            ctx->pc = 0x1FCC1Cu;
            goto label_1fcc1c;
        }
    }
    ctx->pc = 0x1FCBF4u;
label_1fcbf4:
    // 0x1fcbf4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fcbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fcbf8:
    // 0x1fcbf8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fcbfc:
    if (ctx->pc == 0x1FCBFCu) {
        ctx->pc = 0x1FCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF8u;
        // 0x1fcbfc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC00u;
        goto label_1fcc00;
    }
    ctx->pc = 0x1FCBF8u;
    {
        const bool branch_taken_0x1fcbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF8u;
        // 0x1fcbfc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf8) {
            ctx->pc = 0x1FCC1Cu;
            goto label_1fcc1c;
        }
    }
    ctx->pc = 0x1FCC00u;
label_1fcc00:
    // 0x1fcc00: 0x0  nop
    ctx->pc = 0x1fcc00u;
    // NOP
label_1fcc04:
    // 0x1fcc04: 0x5050fffb  beql        $v0, $s0, . + 4 + (-0x5 << 2)
label_1fcc08:
    if (ctx->pc == 0x1FCC08u) {
        ctx->pc = 0x1FCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC04u;
        // 0x1fcc08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC0Cu;
        goto label_1fcc0c;
    }
    ctx->pc = 0x1FCC04u;
    {
        const bool branch_taken_0x1fcc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1fcc04) {
            ctx->pc = 0x1FCC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC04u;
            // 0x1fcc08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCBF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcbf4;
        }
    }
    ctx->pc = 0x1FCC0Cu;
label_1fcc0c:
    // 0x1fcc0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fcc0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc10:
    // 0x1fcc10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1fcc14:
    // 0x1fcc14: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_1fcc18:
    if (ctx->pc == 0x1FCC18u) {
        ctx->pc = 0x1FCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC14u;
        // 0x1fcc18: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC1Cu;
        goto label_1fcc1c;
    }
    ctx->pc = 0x1FCC14u;
    {
        const bool branch_taken_0x1fcc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc14) {
            ctx->pc = 0x1FCC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC14u;
            // 0x1fcc18: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcc00;
        }
    }
    ctx->pc = 0x1FCC1Cu;
label_1fcc1c:
    // 0x1fcc1c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x1fcc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_1fcc20:
    // 0x1fcc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcc24:
    // 0x1fcc24: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
label_1fcc28:
    if (ctx->pc == 0x1FCC28u) {
        ctx->pc = 0x1FCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC24u;
        // 0x1fcc28: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC2Cu;
        goto label_1fcc2c;
    }
    ctx->pc = 0x1FCC24u;
    {
        const bool branch_taken_0x1fcc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fcc24) {
            ctx->pc = 0x1FCC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC24u;
            // 0x1fcc28: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC8Cu;
            goto label_1fcc8c;
        }
    }
    ctx->pc = 0x1FCC2Cu;
label_1fcc2c:
    // 0x1fcc2c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1fcc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fcc30:
    // 0x1fcc30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fcc34:
    if (ctx->pc == 0x1FCC34u) {
        ctx->pc = 0x1FCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC30u;
        // 0x1fcc34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC38u;
        goto label_1fcc38;
    }
    ctx->pc = 0x1FCC30u;
    {
        const bool branch_taken_0x1fcc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC30u;
        // 0x1fcc34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc30) {
            ctx->pc = 0x1FCC48u;
            goto label_1fcc48;
        }
    }
    ctx->pc = 0x1FCC38u;
label_1fcc38:
    // 0x1fcc38: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1fcc3c:
    if (ctx->pc == 0x1FCC3Cu) {
        ctx->pc = 0x1FCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC38u;
        // 0x1fcc3c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC40u;
        goto label_1fcc40;
    }
    ctx->pc = 0x1FCC38u;
    {
        const bool branch_taken_0x1fcc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc38) {
            ctx->pc = 0x1FCC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC38u;
            // 0x1fcc3c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC58u;
            goto label_1fcc58;
        }
    }
    ctx->pc = 0x1FCC40u;
label_1fcc40:
    // 0x1fcc40: 0x10000017  b           . + 4 + (0x17 << 2)
label_1fcc44:
    if (ctx->pc == 0x1FCC44u) {
        ctx->pc = 0x1FCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC40u;
        // 0x1fcc44: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC48u;
        goto label_1fcc48;
    }
    ctx->pc = 0x1FCC40u;
    {
        const bool branch_taken_0x1fcc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC40u;
        // 0x1fcc44: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc40) {
            ctx->pc = 0x1FCCA0u;
            goto label_1fcca0;
        }
    }
    ctx->pc = 0x1FCC48u;
label_1fcc48:
    // 0x1fcc48: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
label_1fcc4c:
    if (ctx->pc == 0x1FCC4Cu) {
        ctx->pc = 0x1FCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC48u;
        // 0x1fcc4c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC50u;
        goto label_1fcc50;
    }
    ctx->pc = 0x1FCC48u;
    {
        const bool branch_taken_0x1fcc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fcc48) {
            ctx->pc = 0x1FCC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC48u;
            // 0x1fcc4c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC94u;
            goto label_1fcc94;
        }
    }
    ctx->pc = 0x1FCC50u;
label_1fcc50:
    // 0x1fcc50: 0x10000013  b           . + 4 + (0x13 << 2)
label_1fcc54:
    if (ctx->pc == 0x1FCC54u) {
        ctx->pc = 0x1FCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC50u;
        // 0x1fcc54: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC58u;
        goto label_1fcc58;
    }
    ctx->pc = 0x1FCC50u;
    {
        const bool branch_taken_0x1fcc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC50u;
        // 0x1fcc54: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc50) {
            ctx->pc = 0x1FCCA0u;
            goto label_1fcca0;
        }
    }
    ctx->pc = 0x1FCC58u;
label_1fcc58:
    // 0x1fcc58: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x1fcc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_1fcc5c:
    // 0x1fcc5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fcc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1fcc60:
    // 0x1fcc60: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1fcc64:
    if (ctx->pc == 0x1FCC64u) {
        ctx->pc = 0x1FCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC60u;
        // 0x1fcc64: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC68u;
        goto label_1fcc68;
    }
    ctx->pc = 0x1FCC60u;
    {
        const bool branch_taken_0x1fcc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc60) {
            ctx->pc = 0x1FCC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC60u;
            // 0x1fcc64: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCCA0u;
            goto label_1fcca0;
        }
    }
    ctx->pc = 0x1FCC68u;
label_1fcc68:
    // 0x1fcc68: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1fcc6c:
    if (ctx->pc == 0x1FCC6Cu) {
        ctx->pc = 0x1FCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC68u;
        // 0x1fcc6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC70u;
        goto label_1fcc70;
    }
    ctx->pc = 0x1FCC68u;
    {
        const bool branch_taken_0x1fcc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC68u;
        // 0x1fcc6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc68) {
            ctx->pc = 0x1FCC84u;
            goto label_1fcc84;
        }
    }
    ctx->pc = 0x1FCC70u;
label_1fcc70:
    // 0x1fcc70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fcc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fcc74:
    // 0x1fcc74: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fcc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fcc78:
    // 0x1fcc78: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fcc7c:
    // 0x1fcc7c: 0x60f809  jalr        $v1
label_1fcc80:
    if (ctx->pc == 0x1FCC80u) {
        ctx->pc = 0x1FCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC7Cu;
        // 0x1fcc80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC84u;
        goto label_1fcc84;
    }
    ctx->pc = 0x1FCC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FCC84u);
        ctx->pc = 0x1FCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC7Cu;
        // 0x1fcc80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC7Cu, 0x1FCC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCC84u;
label_1fcc84:
    // 0x1fcc84: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fcc88:
    if (ctx->pc == 0x1FCC88u) {
        ctx->pc = 0x1FCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC84u;
        // 0x1fcc88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC8Cu;
        goto label_1fcc8c;
    }
    ctx->pc = 0x1FCC84u;
    {
        const bool branch_taken_0x1fcc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC84u;
        // 0x1fcc88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc84) {
            ctx->pc = 0x1FCC9Cu;
            goto label_1fcc9c;
        }
    }
    ctx->pc = 0x1FCC8Cu;
label_1fcc8c:
    // 0x1fcc8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fcc90:
    if (ctx->pc == 0x1FCC90u) {
        ctx->pc = 0x1FCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC8Cu;
        // 0x1fcc90: 0x34420600  ori         $v0, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC94u;
        goto label_1fcc94;
    }
    ctx->pc = 0x1FCC8Cu;
    {
        const bool branch_taken_0x1fcc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC8Cu;
        // 0x1fcc90: 0x34420600  ori         $v0, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc8c) {
            ctx->pc = 0x1FCC98u;
            goto label_1fcc98;
        }
    }
    ctx->pc = 0x1FCC94u;
label_1fcc94:
    // 0x1fcc94: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1fcc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_1fcc98:
    // 0x1fcc98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fcc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fcc9c:
    // 0x1fcc9c: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x1fcc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
label_1fcca0:
    // 0x1fcca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcca4:
    // 0x1fcca4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1fcca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_1fcca8:
    // 0x1fcca8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fcca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fccac:
    // 0x1fccac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fccacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fccb0:
    // 0x1fccb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fccb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fccb4:
    // 0x1fccb4: 0x3e00008  jr          $ra
label_1fccb8:
    if (ctx->pc == 0x1FCCB8u) {
        ctx->pc = 0x1FCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB4u;
        // 0x1fccb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCBCu;
        goto label_1fccbc;
    }
    ctx->pc = 0x1FCCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB4u;
        // 0x1fccb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCCBCu;
label_1fccbc:
    // 0x1fccbc: 0x0  nop
    ctx->pc = 0x1fccbcu;
    // NOP
    ctx->pc = 0x1fccc0u;
}
