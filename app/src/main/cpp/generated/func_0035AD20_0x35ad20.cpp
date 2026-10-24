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

// Function: func_0035AD20
// Address: 0x35ad20 - 0x35ae18
void func_0035AD20_0x35ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AD20_0x35ad20");
#endif

    switch (ctx->pc) {
        case 0x35ad20u: goto label_35ad20;
        case 0x35ad24u: goto label_35ad24;
        case 0x35ad28u: goto label_35ad28;
        case 0x35ad2cu: goto label_35ad2c;
        case 0x35ad30u: goto label_35ad30;
        case 0x35ad34u: goto label_35ad34;
        case 0x35ad38u: goto label_35ad38;
        case 0x35ad3cu: goto label_35ad3c;
        case 0x35ad40u: goto label_35ad40;
        case 0x35ad44u: goto label_35ad44;
        case 0x35ad48u: goto label_35ad48;
        case 0x35ad4cu: goto label_35ad4c;
        case 0x35ad50u: goto label_35ad50;
        case 0x35ad54u: goto label_35ad54;
        case 0x35ad58u: goto label_35ad58;
        case 0x35ad5cu: goto label_35ad5c;
        case 0x35ad60u: goto label_35ad60;
        case 0x35ad64u: goto label_35ad64;
        case 0x35ad68u: goto label_35ad68;
        case 0x35ad6cu: goto label_35ad6c;
        case 0x35ad70u: goto label_35ad70;
        case 0x35ad74u: goto label_35ad74;
        case 0x35ad78u: goto label_35ad78;
        case 0x35ad7cu: goto label_35ad7c;
        case 0x35ad80u: goto label_35ad80;
        case 0x35ad84u: goto label_35ad84;
        case 0x35ad88u: goto label_35ad88;
        case 0x35ad8cu: goto label_35ad8c;
        case 0x35ad90u: goto label_35ad90;
        case 0x35ad94u: goto label_35ad94;
        case 0x35ad98u: goto label_35ad98;
        case 0x35ad9cu: goto label_35ad9c;
        case 0x35ada0u: goto label_35ada0;
        case 0x35ada4u: goto label_35ada4;
        case 0x35ada8u: goto label_35ada8;
        case 0x35adacu: goto label_35adac;
        case 0x35adb0u: goto label_35adb0;
        case 0x35adb4u: goto label_35adb4;
        case 0x35adb8u: goto label_35adb8;
        case 0x35adbcu: goto label_35adbc;
        case 0x35adc0u: goto label_35adc0;
        case 0x35adc4u: goto label_35adc4;
        case 0x35adc8u: goto label_35adc8;
        case 0x35adccu: goto label_35adcc;
        case 0x35add0u: goto label_35add0;
        case 0x35add4u: goto label_35add4;
        case 0x35add8u: goto label_35add8;
        case 0x35addcu: goto label_35addc;
        case 0x35ade0u: goto label_35ade0;
        case 0x35ade4u: goto label_35ade4;
        case 0x35ade8u: goto label_35ade8;
        case 0x35adecu: goto label_35adec;
        case 0x35adf0u: goto label_35adf0;
        case 0x35adf4u: goto label_35adf4;
        case 0x35adf8u: goto label_35adf8;
        case 0x35adfcu: goto label_35adfc;
        case 0x35ae00u: goto label_35ae00;
        case 0x35ae04u: goto label_35ae04;
        case 0x35ae08u: goto label_35ae08;
        case 0x35ae0cu: goto label_35ae0c;
        case 0x35ae10u: goto label_35ae10;
        case 0x35ae14u: goto label_35ae14;
        default: break;
    }

    ctx->pc = 0x35ad20u;

label_35ad20:
    // 0x35ad20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35ad24:
    // 0x35ad24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_35ad28:
    // 0x35ad28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ad28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35ad2c:
    // 0x35ad2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35ad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_35ad30:
    // 0x35ad30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35ad30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35ad34:
    // 0x35ad34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_35ad38:
    // 0x35ad38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_35ad3c:
    // 0x35ad3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_35ad40:
    // 0x35ad40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_35ad44:
    // 0x35ad44: 0xc0d6b86  jal         func_35AE18
label_35ad48:
    if (ctx->pc == 0x35AD48u) {
        ctx->pc = 0x35AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD44u;
        // 0x35ad48: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD4Cu;
        goto label_35ad4c;
    }
    ctx->pc = 0x35AD44u;
    SET_GPR_U32(ctx, 31, 0x35AD4Cu);
    ctx->pc = 0x35AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD44u;
    // 0x35ad48: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE18u, 0x35AD44u, 0x35AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD4Cu;
label_35ad4c:
    // 0x35ad4c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_35ad50:
    if (ctx->pc == 0x35AD50u) {
        ctx->pc = 0x35AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD4Cu;
        // 0x35ad50: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD54u;
        goto label_35ad54;
    }
    ctx->pc = 0x35AD4Cu;
    {
        const bool branch_taken_0x35ad4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD4Cu;
        // 0x35ad50: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad4c) {
            ctx->pc = 0x35ADF8u;
            goto label_35adf8;
        }
    }
    ctx->pc = 0x35AD54u;
label_35ad54:
    // 0x35ad54: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x35ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_35ad58:
    // 0x35ad58: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_35ad5c:
    if (ctx->pc == 0x35AD5Cu) {
        ctx->pc = 0x35AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD58u;
        // 0x35ad5c: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD60u;
        goto label_35ad60;
    }
    ctx->pc = 0x35AD58u;
    {
        const bool branch_taken_0x35ad58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ad58) {
            ctx->pc = 0x35AD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35AD58u;
            // 0x35ad5c: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35AD78u;
            goto label_35ad78;
        }
    }
    ctx->pc = 0x35AD60u;
label_35ad60:
    // 0x35ad60: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x35ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_35ad64:
    // 0x35ad64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ad68:
    // 0x35ad68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x35ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_35ad6c:
    // 0x35ad6c: 0x10000021  b           . + 4 + (0x21 << 2)
label_35ad70:
    if (ctx->pc == 0x35AD70u) {
        ctx->pc = 0x35AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD6Cu;
        // 0x35ad70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD74u;
        goto label_35ad74;
    }
    ctx->pc = 0x35AD6Cu;
    {
        const bool branch_taken_0x35ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD6Cu;
        // 0x35ad70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad6c) {
            ctx->pc = 0x35ADF4u;
            goto label_35adf4;
        }
    }
    ctx->pc = 0x35AD74u;
label_35ad74:
    // 0x35ad74: 0x0  nop
    ctx->pc = 0x35ad74u;
    // NOP
label_35ad78:
    // 0x35ad78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35ad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35ad7c:
    // 0x35ad7c: 0x40f809  jalr        $v0
label_35ad80:
    if (ctx->pc == 0x35AD80u) {
        ctx->pc = 0x35AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD7Cu;
        // 0x35ad80: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD84u;
        goto label_35ad84;
    }
    ctx->pc = 0x35AD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35AD84u);
        ctx->pc = 0x35AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD7Cu;
        // 0x35ad80: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD7Cu, 0x35AD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35AD84u;
label_35ad84:
    // 0x35ad84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ad88:
    // 0x35ad88: 0xc0d69da  jal         func_35A768
label_35ad8c:
    if (ctx->pc == 0x35AD8Cu) {
        ctx->pc = 0x35AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD88u;
        // 0x35ad8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD90u;
        goto label_35ad90;
    }
    ctx->pc = 0x35AD88u;
    SET_GPR_U32(ctx, 31, 0x35AD90u);
    ctx->pc = 0x35AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD88u;
    // 0x35ad8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A768u, 0x35AD88u, 0x35AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD90u;
label_35ad90:
    // 0x35ad90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_35ad94:
    if (ctx->pc == 0x35AD94u) {
        ctx->pc = 0x35AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD90u;
        // 0x35ad94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AD98u;
        goto label_35ad98;
    }
    ctx->pc = 0x35AD90u;
    {
        const bool branch_taken_0x35ad90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD90u;
        // 0x35ad94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad90) {
            ctx->pc = 0x35ADD8u;
            goto label_35add8;
        }
    }
    ctx->pc = 0x35AD98u;
label_35ad98:
    // 0x35ad98: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x35ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_35ad9c:
    // 0x35ad9c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_35ada0:
    // 0x35ada0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_35ada4:
    if (ctx->pc == 0x35ADA4u) {
        ctx->pc = 0x35ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADA0u;
        // 0x35ada4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ADA8u;
        goto label_35ada8;
    }
    ctx->pc = 0x35ADA0u;
    {
        const bool branch_taken_0x35ada0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADA0u;
        // 0x35ada4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ada0) {
            ctx->pc = 0x35ADDCu;
            goto label_35addc;
        }
    }
    ctx->pc = 0x35ADA8u;
label_35ada8:
    // 0x35ada8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x35ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_35adac:
    // 0x35adac: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x35adacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35adb0:
    // 0x35adb0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_35adb4:
    if (ctx->pc == 0x35ADB4u) {
        ctx->pc = 0x35ADB8u;
        goto label_35adb8;
    }
    ctx->pc = 0x35ADB0u;
    {
        const bool branch_taken_0x35adb0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x35adb0) {
            ctx->pc = 0x35ADC4u;
            goto label_35adc4;
        }
    }
    ctx->pc = 0x35ADB8u;
label_35adb8:
    // 0x35adb8: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x35adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_35adbc:
    // 0x35adbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35adc0:
    // 0x35adc0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x35adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_35adc4:
    // 0x35adc4: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x35adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_35adc8:
    // 0x35adc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35adcc:
    // 0x35adcc: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x35adccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_35add0:
    // 0x35add0: 0x10000002  b           . + 4 + (0x2 << 2)
label_35add4:
    if (ctx->pc == 0x35ADD4u) {
        ctx->pc = 0x35ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADD0u;
        // 0x35add4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ADD8u;
        goto label_35add8;
    }
    ctx->pc = 0x35ADD0u;
    {
        const bool branch_taken_0x35add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADD0u;
        // 0x35add4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35add0) {
            ctx->pc = 0x35ADDCu;
            goto label_35addc;
        }
    }
    ctx->pc = 0x35ADD8u;
label_35add8:
    // 0x35add8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35addc:
    // 0x35addc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x35addcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ade0:
    // 0x35ade0: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x35ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
label_35ade4:
    // 0x35ade4: 0xae0302e0  sw          $v1, 0x2E0($s0)
    ctx->pc = 0x35ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 3));
label_35ade8:
    // 0x35ade8: 0x8e0402dc  lw          $a0, 0x2DC($s0)
    ctx->pc = 0x35ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_35adec:
    // 0x35adec: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x35adecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_35adf0:
    // 0x35adf0: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x35adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_35adf4:
    // 0x35adf4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x35adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_35adf8:
    // 0x35adf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35adf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35adfc:
    // 0x35adfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35adfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35ae00:
    // 0x35ae00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35ae00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35ae04:
    // 0x35ae04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35ae04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_35ae08:
    // 0x35ae08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35ae08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35ae0c:
    // 0x35ae0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35ae0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_35ae10:
    // 0x35ae10: 0x3e00008  jr          $ra
label_35ae14:
    if (ctx->pc == 0x35AE14u) {
        ctx->pc = 0x35AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE10u;
        // 0x35ae14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AE18u;
        goto label_fallthrough_0x35ae10;
    }
    ctx->pc = 0x35AE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE10u;
        // 0x35ae14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35ae10:
    ctx->pc = 0x35AE18u;
}
