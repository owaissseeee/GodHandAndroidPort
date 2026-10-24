#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: EmControlTask__5cR501P5cR501
// Address: 0x79acf0 - 0x79b4c0
void EmControlTask__5cR501P5cR501_0x79acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EmControlTask__5cR501P5cR501_0x79acf0");
#endif

    switch (ctx->pc) {
        case 0x79ad30u: goto label_79ad30;
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad9cu: goto label_79ad9c;
        case 0x79adacu: goto label_79adac;
        case 0x79adc0u: goto label_79adc0;
        case 0x79ae00u: goto label_79ae00;
        case 0x79ae24u: goto label_79ae24;
        case 0x79ae38u: goto label_79ae38;
        case 0x79ae44u: goto label_79ae44;
        case 0x79ae50u: goto label_79ae50;
        case 0x79aef8u: goto label_79aef8;
        case 0x79af18u: goto label_79af18;
        case 0x79afe8u: goto label_79afe8;
        case 0x79aff8u: goto label_79aff8;
        case 0x79b038u: goto label_79b038;
        case 0x79b04cu: goto label_79b04c;
        case 0x79b054u: goto label_79b054;
        case 0x79b094u: goto label_79b094;
        case 0x79b0acu: goto label_79b0ac;
        case 0x79b0c0u: goto label_79b0c0;
        case 0x79b0e8u: goto label_79b0e8;
        case 0x79b0fcu: goto label_79b0fc;
        case 0x79b164u: goto label_79b164;
        case 0x79b170u: goto label_79b170;
        case 0x79b184u: goto label_79b184;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1c4u: goto label_79b1c4;
        case 0x79b1ccu: goto label_79b1cc;
        case 0x79b248u: goto label_79b248;
        case 0x79b250u: goto label_79b250;
        case 0x79b264u: goto label_79b264;
        case 0x79b270u: goto label_79b270;
        case 0x79b2a8u: goto label_79b2a8;
        case 0x79b2bcu: goto label_79b2bc;
        case 0x79b2ecu: goto label_79b2ec;
        case 0x79b30cu: goto label_79b30c;
        case 0x79b314u: goto label_79b314;
        case 0x79b31cu: goto label_79b31c;
        case 0x79b340u: goto label_79b340;
        case 0x79b354u: goto label_79b354;
        case 0x79b374u: goto label_79b374;
        case 0x79b398u: goto label_79b398;
        case 0x79b3a8u: goto label_79b3a8;
        case 0x79b3b4u: goto label_79b3b4;
        case 0x79b3c4u: goto label_79b3c4;
        case 0x79b3ccu: goto label_79b3cc;
        case 0x79b3f8u: goto label_79b3f8;
        case 0x79b400u: goto label_79b400;
        case 0x79b478u: goto label_79b478;
        case 0x79b488u: goto label_79b488;
        default: break;
    }

    ctx->pc = 0x79acf0u;

    // 0x79acf0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79acf4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x79acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x79acf8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79acfc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x79acfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad00: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79ad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79ad04: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79ad08: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79ad0c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79ad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79ad10: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x79ad14: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79ad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x79ad18: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x79ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x79ad1c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79ad20: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x79ad20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x79ad24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AD24u;
    {
        const bool branch_taken_0x79ad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad24) {
            ctx->pc = 0x79AD40u;
            goto label_79ad40;
        }
    }
    ctx->pc = 0x79AD2Cu;
    // 0x79ad2c: 0x0  nop
    ctx->pc = 0x79ad2cu;
    // NOP
label_79ad30:
    // 0x79ad30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad34: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79ad38: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD38u;
    SET_GPR_U32(ctx, 31, 0x79AD40u);
    ctx->pc = 0x79AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD38u;
    // 0x79ad3c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD38u, 0x79AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD40u;
label_79ad40:
    // 0x79ad40: 0x8ee40380  lw          $a0, 0x380($s7)
    ctx->pc = 0x79ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
    // 0x79ad44: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79AD44u;
    {
        const bool branch_taken_0x79ad44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD44u;
        // 0x79ad48: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad44) {
            ctx->pc = 0x79AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad30;
        }
    }
    ctx->pc = 0x79AD4Cu;
    // 0x79ad4c: 0x92e3038c  lbu         $v1, 0x38C($s7)
    ctx->pc = 0x79ad4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 908)));
    // 0x79ad50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad54: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79AD54u;
    {
        const bool branch_taken_0x79ad54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD54u;
        // 0x79ad58: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad54) {
            ctx->pc = 0x79AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad30;
        }
    }
    ctx->pc = 0x79AD5Cu;
    // 0x79ad5c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x79ad60: 0x9062007b  lbu         $v0, 0x7B($v1)
    ctx->pc = 0x79ad60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 123)));
    // 0x79ad64: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AD64u;
    {
        const bool branch_taken_0x79ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad64) {
            ctx->pc = 0x79AD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD64u;
            // 0x79ad68: 0xa2e00398  sb          $zero, 0x398($s7) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 23), 920), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD7Cu;
            goto label_79ad7c;
        }
    }
    ctx->pc = 0x79AD6Cu;
    // 0x79ad6c: 0x90620079  lbu         $v0, 0x79($v1)
    ctx->pc = 0x79ad6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 121)));
    // 0x79ad70: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79AD70u;
    {
        const bool branch_taken_0x79ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD70u;
        // 0x79ad74: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad70) {
            ctx->pc = 0x79AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad30;
        }
    }
    ctx->pc = 0x79AD78u;
    // 0x79ad78: 0xa2e00398  sb          $zero, 0x398($s7)
    ctx->pc = 0x79ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 920), (uint8_t)GPR_U32(ctx, 0));
label_79ad7c:
    // 0x79ad7c: 0x8ee20380  lw          $v0, 0x380($s7)
    ctx->pc = 0x79ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
    // 0x79ad80: 0x9043009a  lbu         $v1, 0x9A($v0)
    ctx->pc = 0x79ad80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 154)));
    // 0x79ad84: 0x1460019c  bnez        $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x79AD84u;
    {
        const bool branch_taken_0x79ad84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD84u;
        // 0x79ad88: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad84) {
            ctx->pc = 0x79B3F8u;
            goto label_79b3f8;
        }
    }
    ctx->pc = 0x79AD8Cu;
    // 0x79ad8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ad90: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x79ad94: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79AD94u;
    SET_GPR_U32(ctx, 31, 0x79AD9Cu);
    ctx->pc = 0x79AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD94u;
    // 0x79ad98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79AD94u, 0x79AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD9Cu;
label_79ad9c:
    // 0x79ad9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79ada0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ada0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ada4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79ADA4u;
    SET_GPR_U32(ctx, 31, 0x79ADACu);
    ctx->pc = 0x79ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADA4u;
    // 0x79ada8: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79ADA4u, 0x79ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADACu;
label_79adac:
    // 0x79adac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79adacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79adb0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79adb4: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x79adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79adb8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79ADB8u;
    SET_GPR_U32(ctx, 31, 0x79ADC0u);
    ctx->pc = 0x79ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADB8u;
    // 0x79adbc: 0x24a50850  addiu       $a1, $a1, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79ADB8u, 0x79ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADC0u;
label_79adc0:
    // 0x79adc0: 0x8ee60380  lw          $a2, 0x380($s7)
    ctx->pc = 0x79adc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
    // 0x79adc4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x79ADC4u;
    {
        const bool branch_taken_0x79adc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC4u;
        // 0x79adc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc4) {
            ctx->pc = 0x79AE00u;
            goto label_79ae00;
        }
    }
    ctx->pc = 0x79ADCCu;
    // 0x79adcc: 0xc4cc0050  lwc1        $f12, 0x50($a2)
    ctx->pc = 0x79adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79add0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79add4: 0xc4cd0054  lwc1        $f13, 0x54($a2)
    ctx->pc = 0x79add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x79add8: 0xc4ce0058  lwc1        $f14, 0x58($a2)
    ctx->pc = 0x79add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x79addc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x79addcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x79ade0: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x79ade0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x79ade4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ade8: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x79ade8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x79adec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79adf0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x79adf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x79adf4: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x79adf8: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x79ADF8u;
    SET_GPR_U32(ctx, 31, 0x79AE00u);
    ctx->pc = 0x79ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADF8u;
    // 0x79adfc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x79ADF8u, 0x79AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE00u;
label_79ae00:
    // 0x79ae00: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ae04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae08: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79ae0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ae0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79ae10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ae1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AE1Cu;
    SET_GPR_U32(ctx, 31, 0x79AE24u);
    ctx->pc = 0x79AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE1Cu;
    // 0x79ae20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AE1Cu, 0x79AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE24u;
label_79ae24:
    // 0x79ae24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79ae28: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79ae2c: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79ae30: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AE30u;
    SET_GPR_U32(ctx, 31, 0x79AE38u);
    ctx->pc = 0x79AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE30u;
    // 0x79ae34: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AE30u, 0x79AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE38u;
label_79ae38:
    // 0x79ae38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79ae3c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79AE3Cu;
    SET_GPR_U32(ctx, 31, 0x79AE44u);
    ctx->pc = 0x79AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE3Cu;
    // 0x79ae40: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79AE3Cu, 0x79AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE44u;
label_79ae44:
    // 0x79ae44: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79ae48: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79AE48u;
    SET_GPR_U32(ctx, 31, 0x79AE50u);
    ctx->pc = 0x79AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE48u;
    // 0x79ae4c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79AE48u, 0x79AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE50u;
label_79ae50:
    // 0x79ae50: 0x8ee30380  lw          $v1, 0x380($s7)
    ctx->pc = 0x79ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
    // 0x79ae54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ae54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae58: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x79ae5c: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x79ae5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x79ae60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AE60u;
    {
        const bool branch_taken_0x79ae60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE60u;
        // 0x79ae64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae60) {
            ctx->pc = 0x79AE74u;
            goto label_79ae74;
        }
    }
    ctx->pc = 0x79AE68u;
    // 0x79ae68: 0x2468fff1  addiu       $t0, $v1, -0xF
    ctx->pc = 0x79ae68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x79ae6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x79AE6Cu;
    {
        const bool branch_taken_0x79ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE6Cu;
        // 0x79ae70: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae6c) {
            ctx->pc = 0x79AED8u;
            goto label_79aed8;
        }
    }
    ctx->pc = 0x79AE74u;
label_79ae74:
    // 0x79ae74: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x79ae74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x79ae78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AE78u;
    {
        const bool branch_taken_0x79ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE78u;
        // 0x79ae7c: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae78) {
            ctx->pc = 0x79AE8Cu;
            goto label_79ae8c;
        }
    }
    ctx->pc = 0x79AE80u;
    // 0x79ae80: 0x2468fff4  addiu       $t0, $v1, -0xC
    ctx->pc = 0x79ae80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x79ae84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79AE84u;
    {
        const bool branch_taken_0x79ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE84u;
        // 0x79ae88: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae84) {
            ctx->pc = 0x79AED8u;
            goto label_79aed8;
        }
    }
    ctx->pc = 0x79AE8Cu;
label_79ae8c:
    // 0x79ae8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AE8Cu;
    {
        const bool branch_taken_0x79ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE8Cu;
        // 0x79ae90: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae8c) {
            ctx->pc = 0x79AEA0u;
            goto label_79aea0;
        }
    }
    ctx->pc = 0x79AE94u;
    // 0x79ae94: 0x2468fff7  addiu       $t0, $v1, -0x9
    ctx->pc = 0x79ae94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x79ae98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79AE98u;
    {
        const bool branch_taken_0x79ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE98u;
        // 0x79ae9c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae98) {
            ctx->pc = 0x79AED8u;
            goto label_79aed8;
        }
    }
    ctx->pc = 0x79AEA0u;
label_79aea0:
    // 0x79aea0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AEA0u;
    {
        const bool branch_taken_0x79aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEA0u;
        // 0x79aea4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aea0) {
            ctx->pc = 0x79AEB4u;
            goto label_79aeb4;
        }
    }
    ctx->pc = 0x79AEA8u;
    // 0x79aea8: 0x2468fffa  addiu       $t0, $v1, -0x6
    ctx->pc = 0x79aea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x79aeac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79AEACu;
    {
        const bool branch_taken_0x79aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEACu;
        // 0x79aeb0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aeac) {
            ctx->pc = 0x79AED8u;
            goto label_79aed8;
        }
    }
    ctx->pc = 0x79AEB4u;
label_79aeb4:
    // 0x79aeb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AEB4u;
    {
        const bool branch_taken_0x79aeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aeb4) {
            ctx->pc = 0x79AEC8u;
            goto label_79aec8;
        }
    }
    ctx->pc = 0x79AEBCu;
    // 0x79aebc: 0x2468fffd  addiu       $t0, $v1, -0x3
    ctx->pc = 0x79aebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x79aec0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AEC0u;
    {
        const bool branch_taken_0x79aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC0u;
        // 0x79aec4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aec0) {
            ctx->pc = 0x79AED8u;
            goto label_79aed8;
        }
    }
    ctx->pc = 0x79AEC8u;
label_79aec8:
    // 0x79aec8: 0x58600004  blezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AEC8u;
    {
        const bool branch_taken_0x79aec8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x79aec8) {
            ctx->pc = 0x79AECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEC8u;
            // 0x79aecc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AEDCu;
            goto label_79aedc;
        }
    }
    ctx->pc = 0x79AED0u;
    // 0x79aed0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x79aed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aed8:
    // 0x79aed8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79aed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aedc:
    // 0x79aedc: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x79AEDCu;
    {
        const bool branch_taken_0x79aedc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEDCu;
        // 0x79aee0: 0x8ee60380  lw          $a2, 0x380($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aedc) {
            ctx->pc = 0x79AF40u;
            goto label_79af40;
        }
    }
    ctx->pc = 0x79AEE4u;
    // 0x79aee4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79aee8: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x79aee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79aeec: 0x244907f8  addiu       $t1, $v0, 0x7F8
    ctx->pc = 0x79aeecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2040));
    // 0x79aef0: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x79aef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79aef4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x79aef4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_79aef8:
    // 0x79aef8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x79aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x79aefc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x79aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79af00: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x79af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x79af04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79af08: 0x106c0009  beq         $v1, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AF08u;
    {
        const bool branch_taken_0x79af08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x79AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF08u;
        // 0x79af0c: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af08) {
            ctx->pc = 0x79AF30u;
            goto label_79af30;
        }
    }
    ctx->pc = 0x79AF10u;
    // 0x79af10: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x79af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af14: 0x0  nop
    ctx->pc = 0x79af14u;
    // NOP
label_79af18:
    // 0x79af18: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x79af1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79af20: 0x0  nop
    ctx->pc = 0x79af20u;
    // NOP
    // 0x79af24: 0x0  nop
    ctx->pc = 0x79af24u;
    // NOP
    // 0x79af28: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79AF28u;
    {
        const bool branch_taken_0x79af28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x79AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF28u;
        // 0x79af2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af28) {
            ctx->pc = 0x79AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af18;
        }
    }
    ctx->pc = 0x79AF30u;
label_79af30:
    // 0x79af30: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x79af30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af34: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x79af34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79af38: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79AF38u;
    {
        const bool branch_taken_0x79af38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF38u;
        // 0x79af3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af38) {
            ctx->pc = 0x79AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aef8;
        }
    }
    ctx->pc = 0x79AF40u;
label_79af40:
    // 0x79af40: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x79af44: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x79af48: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x79af48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x79af4c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AF4Cu;
    {
        const bool branch_taken_0x79af4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF4Cu;
        // 0x79af50: 0x24c40020  addiu       $a0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af4c) {
            ctx->pc = 0x79AF6Cu;
            goto label_79af6c;
        }
    }
    ctx->pc = 0x79AF54u;
    // 0x79af54: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x79af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79af58: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x79af58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x79af5c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x79af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79af60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79af60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79af64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79af68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79af68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79af6c:
    // 0x79af6c: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x79af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x79af70: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AF70u;
    {
        const bool branch_taken_0x79af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x79af70) {
            ctx->pc = 0x79AF90u;
            goto label_79af90;
        }
    }
    ctx->pc = 0x79AF78u;
    // 0x79af78: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x79af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79af7c: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x79af7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x79af80: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x79af80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79af84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79af84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79af88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79af8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79af8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79af90:
    // 0x79af90: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79af90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x79af94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79af94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79af98: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x79af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x79af9c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x79afa0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79afa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79afa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79afa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79afa8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79afac: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x79afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x79afb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79afb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afb4: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x79afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x79afb8: 0x12a880  sll         $s5, $s2, 2
    ctx->pc = 0x79afb8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x79afbc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79afc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79afc4: 0xe4810064  swc1        $f1, 0x64($a0)
    ctx->pc = 0x79afc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x79afc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79afc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79afcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79afccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79afd0: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x79afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x79afd4: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x79afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x79afd8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79afdc: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x79afdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x79afe0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79AFE0u;
    SET_GPR_U32(ctx, 31, 0x79AFE8u);
    ctx->pc = 0x79AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFE0u;
    // 0x79afe4: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79AFE0u, 0x79AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFE8u;
label_79afe8:
    // 0x79afe8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x79afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79afec: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x79afecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aff4: 0x0  nop
    ctx->pc = 0x79aff4u;
    // NOP
label_79aff8:
    // 0x79aff8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x79aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79affc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79b000: 0x0  nop
    ctx->pc = 0x79b000u;
    // NOP
    // 0x79b004: 0x0  nop
    ctx->pc = 0x79b004u;
    // NOP
    // 0x79b008: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B008u;
    {
        const bool branch_taken_0x79b008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x79B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B008u;
        // 0x79b00c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b008) {
            ctx->pc = 0x79AFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aff8;
        }
    }
    ctx->pc = 0x79B010u;
    // 0x79b010: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b014: 0x244307f8  addiu       $v1, $v0, 0x7F8
    ctx->pc = 0x79b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2040));
    // 0x79b018: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x79b01c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b020: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x79b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x79b024: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79B024u;
    {
        const bool branch_taken_0x79b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B024u;
        // 0x79b028: 0x241300ff  addiu       $s3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b024) {
            ctx->pc = 0x79B080u;
            goto label_79b080;
        }
    }
    ctx->pc = 0x79B02Cu;
    // 0x79b02c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79b02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b030: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x79b030u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79b034: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79b034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b038:
    // 0x79b038: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79b038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b03c: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x79b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79b040: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79b040u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b044: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B044u;
    SET_GPR_U32(ctx, 31, 0x79B04Cu);
    ctx->pc = 0x79B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B044u;
    // 0x79b048: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B044u, 0x79B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B04Cu;
label_79b04c:
    // 0x79b04c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79B04Cu;
    SET_GPR_U32(ctx, 31, 0x79B054u);
    ctx->pc = 0x79B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B04Cu;
    // 0x79b050: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79B04Cu, 0x79B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B054u;
label_79b054:
    // 0x79b054: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B054u;
    {
        const bool branch_taken_0x79b054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B054u;
        // 0x79b058: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b054) {
            ctx->pc = 0x79B074u;
            goto label_79b074;
        }
    }
    ctx->pc = 0x79B05Cu;
    // 0x79b05c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b060: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x79b060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x79b064: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b068: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x79b068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79b06c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b070: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79b074:
    // 0x79b074: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x79b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b078: 0x1453ffef  bne         $v0, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79B078u;
    {
        const bool branch_taken_0x79b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x79B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B078u;
        // 0x79b07c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b078) {
            ctx->pc = 0x79B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b038;
        }
    }
    ctx->pc = 0x79B080u;
label_79b080:
    // 0x79b080: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b084: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b088: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x79b088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b08c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B08Cu;
    SET_GPR_U32(ctx, 31, 0x79B094u);
    ctx->pc = 0x79B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B08Cu;
    // 0x79b090: 0x24a50858  addiu       $a1, $a1, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B08Cu, 0x79B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B094u;
label_79b094:
    // 0x79b094: 0x8ee30380  lw          $v1, 0x380($s7)
    ctx->pc = 0x79b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
    // 0x79b098: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B098u;
    {
        const bool branch_taken_0x79b098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B098u;
        // 0x79b09c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b098) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79B0A0u;
    // 0x79b0a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b0a4: 0xc0c185a  jal         func_306168
    ctx->pc = 0x79B0A4u;
    SET_GPR_U32(ctx, 31, 0x79B0ACu);
    ctx->pc = 0x79B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0A4u;
    // 0x79b0a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x79B0A4u, 0x79B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0ACu;
label_79b0ac:
    // 0x79b0ac: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b0b0: 0x12f080  sll         $fp, $s2, 2
    ctx->pc = 0x79b0b0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x79b0b4: 0x244207f8  addiu       $v0, $v0, 0x7F8
    ctx->pc = 0x79b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2040));
    // 0x79b0b8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x79B0B8u;
    {
        const bool branch_taken_0x79b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B8u;
        // 0x79b0bc: 0x2a2b021  addu        $s6, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0b8) {
            ctx->pc = 0x79B164u;
            goto label_79b164;
        }
    }
    ctx->pc = 0x79B0C0u;
label_79b0c0:
    // 0x79b0c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x79b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x79b0c4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x79b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x79b0c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x79B0C8u;
    {
        const bool branch_taken_0x79b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C8u;
        // 0x79b0cc: 0x241300ff  addiu       $s3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0c8) {
            ctx->pc = 0x79B150u;
            goto label_79b150;
        }
    }
    ctx->pc = 0x79B0D0u;
    // 0x79b0d0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b0d4: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x79b0d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79b0d8: 0x244207f8  addiu       $v0, $v0, 0x7F8
    ctx->pc = 0x79b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2040));
    // 0x79b0dc: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x79b0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b0e0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x79b0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x79b0e4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x79b0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b0e8:
    // 0x79b0e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79b0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b0ec: 0x268464f0  addiu       $a0, $s4, 0x64F0
    ctx->pc = 0x79b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x79b0f0: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79b0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b0f4: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79B0F4u;
    SET_GPR_U32(ctx, 31, 0x79B0FCu);
    ctx->pc = 0x79B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0F4u;
    // 0x79b0f8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B0F4u, 0x79B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0FCu;
label_79b0fc:
    // 0x79b0fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79b0fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b100: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79b100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b104: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b108: 0x8ee20380  lw          $v0, 0x380($s7)
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
    // 0x79b10c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x79b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b110: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x79b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79b114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79b118: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B118u;
    {
        const bool branch_taken_0x79b118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B118u;
        // 0x79b11c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b118) {
            ctx->pc = 0x79B140u;
            goto label_79b140;
        }
    }
    ctx->pc = 0x79B120u;
    // 0x79b120: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x79b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x79b124: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B124u;
    {
        const bool branch_taken_0x79b124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B124u;
        // 0x79b128: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b124) {
            ctx->pc = 0x79B140u;
            goto label_79b140;
        }
    }
    ctx->pc = 0x79B12Cu;
    // 0x79b12c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b130: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x79b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b134: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b138: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x79b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b13c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b140:
    // 0x79b140: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79b140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79b144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b148: 0x1453ffe7  bne         $v0, $s3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79B148u;
    {
        const bool branch_taken_0x79b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x79B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B148u;
        // 0x79b14c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b148) {
            ctx->pc = 0x79B0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0e8;
        }
    }
    ctx->pc = 0x79B150u;
label_79b150:
    // 0x79b150: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b158: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b15c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B15Cu;
    SET_GPR_U32(ctx, 31, 0x79B164u);
    ctx->pc = 0x79B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B15Cu;
    // 0x79b160: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B15Cu, 0x79B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B164u;
label_79b164:
    // 0x79b164: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b168: 0xc0b1010  jal         func_2C4040
    ctx->pc = 0x79B168u;
    SET_GPR_U32(ctx, 31, 0x79B170u);
    ctx->pc = 0x79B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B168u;
    // 0x79b16c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4040u, 0x79B168u, 0x79B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B170u;
label_79b170:
    // 0x79b170: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x79B170u;
    {
        const bool branch_taken_0x79b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B170u;
        // 0x79b174: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b170) {
            ctx->pc = 0x79B0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0c0;
        }
    }
    ctx->pc = 0x79B178u;
    // 0x79b178: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x79b178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79b17c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B17Cu;
    SET_GPR_U32(ctx, 31, 0x79B184u);
    ctx->pc = 0x79B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B17Cu;
    // 0x79b180: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B17Cu, 0x79B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B184u;
label_79b184:
    // 0x79b184: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b188: 0x244307f8  addiu       $v1, $v0, 0x7F8
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2040));
    // 0x79b18c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x79b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x79b190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b194: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x79b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x79b198: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B198u;
    {
        const bool branch_taken_0x79b198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b198) {
            ctx->pc = 0x79B19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B198u;
            // 0x79b19c: 0x8ee40380  lw          $a0, 0x380($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1DCu;
            goto label_79b1dc;
        }
    }
    ctx->pc = 0x79B1A0u;
    // 0x79b1a0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x79b1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1a4: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x79b1a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79b1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b1ac: 0x0  nop
    ctx->pc = 0x79b1acu;
    // NOP
label_79b1b0:
    // 0x79b1b0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x79b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x79b1b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79b1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79b1b8: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79b1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b1bc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B1BCu;
    SET_GPR_U32(ctx, 31, 0x79B1C4u);
    ctx->pc = 0x79B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1BCu;
    // 0x79b1c0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B1BCu, 0x79B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1C4u;
label_79b1c4:
    // 0x79b1c4: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79B1C4u;
    SET_GPR_U32(ctx, 31, 0x79B1CCu);
    ctx->pc = 0x79B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1C4u;
    // 0x79b1c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79B1C4u, 0x79B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1CCu;
label_79b1cc:
    // 0x79b1cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b1d0: 0x5471fff7  bnel        $v1, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B1D0u;
    {
        const bool branch_taken_0x79b1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x79b1d0) {
            ctx->pc = 0x79B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1D0u;
            // 0x79b1d4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1b0;
        }
    }
    ctx->pc = 0x79B1D8u;
    // 0x79b1d8: 0x8ee40380  lw          $a0, 0x380($s7)
    ctx->pc = 0x79b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 896)));
label_79b1dc:
    // 0x79b1dc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B1DCu;
    {
        const bool branch_taken_0x79b1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1DCu;
        // 0x79b1e0: 0x24830030  addiu       $v1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1dc) {
            ctx->pc = 0x79B218u;
            goto label_79b218;
        }
    }
    ctx->pc = 0x79B1E4u;
    // 0x79b1e4: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x79b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x79b1e8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B1E8u;
    {
        const bool branch_taken_0x79b1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x79b1e8) {
            ctx->pc = 0x79B1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1E8u;
            // 0x79b1ec: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B20Cu;
            goto label_79b20c;
        }
    }
    ctx->pc = 0x79B1F0u;
    // 0x79b1f0: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x79b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b1f4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x79b1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x79b1f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79b1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b1fc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b204: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79b204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b208: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x79b208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79b20c:
    // 0x79b20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b210: 0xa0820099  sb          $v0, 0x99($a0)
    ctx->pc = 0x79b210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 153), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b214: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x79b214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_79b218:
    // 0x79b218: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b21c: 0x246507f8  addiu       $a1, $v1, 0x7F8
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2040));
    // 0x79b220: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x79b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x79b224: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x79b228: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b22c: 0x1043006d  beq         $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x79B22Cu;
    {
        const bool branch_taken_0x79b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B22Cu;
        // 0x79b230: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b22c) {
            ctx->pc = 0x79B3E4u;
            goto label_79b3e4;
        }
    }
    ctx->pc = 0x79B234u;
    // 0x79b234: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x79b234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b238: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x79b238u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x79b23c: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79b23cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x79b240: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79b240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b244: 0x0  nop
    ctx->pc = 0x79b244u;
    // NOP
label_79b248:
    // 0x79b248: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79B248u;
    SET_GPR_U32(ctx, 31, 0x79B250u);
    ctx->pc = 0x79B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B248u;
    // 0x79b24c: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79B248u, 0x79B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B250u;
label_79b250:
    // 0x79b250: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79b254: 0x27c507a8  addiu       $a1, $fp, 0x7A8
    ctx->pc = 0x79b254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1960));
    // 0x79b258: 0x2444ae50  addiu       $a0, $v0, -0x51B0
    ctx->pc = 0x79b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x79b25c: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79B25Cu;
    SET_GPR_U32(ctx, 31, 0x79B264u);
    ctx->pc = 0x79B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B25Cu;
    // 0x79b260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79B25Cu, 0x79B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B264u;
label_79b264:
    // 0x79b264: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79b268: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B268u;
    SET_GPR_U32(ctx, 31, 0x79B270u);
    ctx->pc = 0x79B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B268u;
    // 0x79b26c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B268u, 0x79B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B270u;
label_79b270:
    // 0x79b270: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b274: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x79b274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x79b278: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79B278u;
    {
        const bool branch_taken_0x79b278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B278u;
        // 0x79b27c: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b278) {
            ctx->pc = 0x79B2F8u;
            goto label_79b2f8;
        }
    }
    ctx->pc = 0x79B280u;
    // 0x79b280: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79b280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79b284: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79b284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79b288: 0x246307f8  addiu       $v1, $v1, 0x7F8
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2040));
    // 0x79b28c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b290: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b294: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79b298: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x79b298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b29c: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x79b29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x79b2a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79b2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b2a4: 0x0  nop
    ctx->pc = 0x79b2a4u;
    // NOP
label_79b2a8:
    // 0x79b2a8: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x79b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79b2ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79b2b0: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b2b4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B2B4u;
    SET_GPR_U32(ctx, 31, 0x79B2BCu);
    ctx->pc = 0x79B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2B4u;
    // 0x79b2b8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B2B4u, 0x79B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2BCu;
label_79b2bc:
    // 0x79b2bc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x79b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x79b2c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b2c4: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x79b2c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x79b2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2cc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x79b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79b2d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b2d4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b2d8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b2d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b2dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2e4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B2E4u;
    SET_GPR_U32(ctx, 31, 0x79B2ECu);
    ctx->pc = 0x79B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2E4u;
    // 0x79b2e8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B2E4u, 0x79B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2ECu;
label_79b2ec:
    // 0x79b2ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b2f0: 0x5455ffed  bnel        $v0, $s5, . + 4 + (-0x13 << 2)
    ctx->pc = 0x79B2F0u;
    {
        const bool branch_taken_0x79b2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x79b2f0) {
            ctx->pc = 0x79B2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2F0u;
            // 0x79b2f4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B2F8u;
label_79b2f8:
    // 0x79b2f8: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79b2fc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b300: 0x24450860  addiu       $a1, $v0, 0x860
    ctx->pc = 0x79b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2144));
    // 0x79b304: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B304u;
    SET_GPR_U32(ctx, 31, 0x79B30Cu);
    ctx->pc = 0x79B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B304u;
    // 0x79b308: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B304u, 0x79B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B30Cu;
label_79b30c:
    // 0x79b30c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B30Cu;
    SET_GPR_U32(ctx, 31, 0x79B314u);
    ctx->pc = 0x79B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B30Cu;
    // 0x79b310: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B30Cu, 0x79B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B314u;
label_79b314:
    // 0x79b314: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B314u;
    SET_GPR_U32(ctx, 31, 0x79B31Cu);
    ctx->pc = 0x79B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B314u;
    // 0x79b318: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B314u, 0x79B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B31Cu;
label_79b31c:
    // 0x79b31c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b320: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x79b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x79b324: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79B324u;
    {
        const bool branch_taken_0x79b324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B324u;
        // 0x79b328: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b324) {
            ctx->pc = 0x79B380u;
            goto label_79b380;
        }
    }
    ctx->pc = 0x79B32Cu;
    // 0x79b32c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x79b32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b330: 0x246307f8  addiu       $v1, $v1, 0x7F8
    ctx->pc = 0x79b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2040));
    // 0x79b334: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x79b334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x79b338: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79b338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b33c: 0x0  nop
    ctx->pc = 0x79b33cu;
    // NOP
label_79b340:
    // 0x79b340: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x79b344: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79b344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79b348: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x79b348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x79b34c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B34Cu;
    SET_GPR_U32(ctx, 31, 0x79B354u);
    ctx->pc = 0x79B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B34Cu;
    // 0x79b350: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B34Cu, 0x79B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B354u;
label_79b354:
    // 0x79b354: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b35c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b360: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b364: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b368: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b36c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B36Cu;
    SET_GPR_U32(ctx, 31, 0x79B374u);
    ctx->pc = 0x79B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B36Cu;
    // 0x79b370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B36Cu, 0x79B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B374u;
label_79b374:
    // 0x79b374: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b378: 0x5454fff1  bnel        $v0, $s4, . + 4 + (-0xF << 2)
    ctx->pc = 0x79B378u;
    {
        const bool branch_taken_0x79b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x79b378) {
            ctx->pc = 0x79B37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B378u;
            // 0x79b37c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b340;
        }
    }
    ctx->pc = 0x79B380u;
label_79b380:
    // 0x79b380: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79b384: 0x27c507a8  addiu       $a1, $fp, 0x7A8
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1960));
    // 0x79b388: 0x2444ae50  addiu       $a0, $v0, -0x51B0
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x79b38c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b390: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79B390u;
    SET_GPR_U32(ctx, 31, 0x79B398u);
    ctx->pc = 0x79B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B390u;
    // 0x79b394: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79B390u, 0x79B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B398u;
label_79b398:
    // 0x79b398: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x79b39c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b39cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b3a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79B3A0u;
    {
        const bool branch_taken_0x79b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3A0u;
        // 0x79b3a4: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3a0) {
            ctx->pc = 0x79B3C4u;
            goto label_79b3c4;
        }
    }
    ctx->pc = 0x79B3A8u;
label_79b3a8:
    // 0x79b3a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3ac: 0xc1e810a  jal         func_7A0428
    ctx->pc = 0x79B3ACu;
    SET_GPR_U32(ctx, 31, 0x79B3B4u);
    ctx->pc = 0x79B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3ACu;
    // 0x79b3b0: 0x26250868  addiu       $a1, $s1, 0x868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0428u, 0x79B3ACu, 0x79B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3B4u;
label_79b3b4:
    // 0x79b3b4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b3b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b3bc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B3BCu;
    SET_GPR_U32(ctx, 31, 0x79B3C4u);
    ctx->pc = 0x79B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3BCu;
    // 0x79b3c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B3BCu, 0x79B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3C4u;
label_79b3c4:
    // 0x79b3c4: 0xc1e6dca  jal         func_79B728
    ctx->pc = 0x79B3C4u;
    SET_GPR_U32(ctx, 31, 0x79B3CCu);
    ctx->pc = 0x79B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B728u, 0x79B3C4u, 0x79B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3CCu;
label_79b3cc:
    // 0x79b3cc: 0x1c40fff6  bgtz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B3CCu;
    {
        const bool branch_taken_0x79b3cc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3CCu;
        // 0x79b3d0: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3cc) {
            ctx->pc = 0x79B3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b3a8;
        }
    }
    ctx->pc = 0x79B3D4u;
    // 0x79b3d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b3d8: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x79b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x79b3dc: 0x1443ff9a  bne         $v0, $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x79B3DCu;
    {
        const bool branch_taken_0x79b3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3DCu;
        // 0x79b3e0: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3dc) {
            ctx->pc = 0x79B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b248;
        }
    }
    ctx->pc = 0x79B3E4u;
label_79b3e4:
    // 0x79b3e4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b3e8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79b3ec: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b3f0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B3F0u;
    SET_GPR_U32(ctx, 31, 0x79B3F8u);
    ctx->pc = 0x79B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3F0u;
    // 0x79b3f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B3F0u, 0x79B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3F8u;
label_79b3f8:
    // 0x79b3f8: 0xc1e6df4  jal         func_79B7D0
    ctx->pc = 0x79B3F8u;
    SET_GPR_U32(ctx, 31, 0x79B400u);
    ctx->pc = 0x79B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B7D0u, 0x79B3F8u, 0x79B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B400u;
label_79b400:
    // 0x79b400: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B400u;
    {
        const bool branch_taken_0x79b400 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B400u;
        // 0x79b404: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b400) {
            ctx->pc = 0x79B420u;
            goto label_79b420;
        }
    }
    ctx->pc = 0x79B408u;
    // 0x79b408: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79b408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79b40c: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x79b410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79b410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79b414: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79b418: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B418u;
    {
        const bool branch_taken_0x79b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B418u;
        // 0x79b41c: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b418) {
            ctx->pc = 0x79B434u;
            goto label_79b434;
        }
    }
    ctx->pc = 0x79B420u;
label_79b420:
    // 0x79b420: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79b420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79b424: 0x8c649b70  lw          $a0, -0x6490($v1)
    ctx->pc = 0x79b424u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x79b428: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79b428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x79b42c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x79b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79b430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79b434:
    // 0x79b434: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x79b434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x79b438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b43c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b440: 0xaee20340  sw          $v0, 0x340($s7)
    ctx->pc = 0x79b440u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 832), GPR_U32(ctx, 2));
    // 0x79b444: 0x24670990  addiu       $a3, $v1, 0x990
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x79b448: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b44c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79b450: 0x24460980  addiu       $a2, $v0, 0x980
    ctx->pc = 0x79b450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x79b454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b458: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79b458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79b45c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b460: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b464: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79b468: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79b468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79b46c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b470: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79B470u;
    SET_GPR_U32(ctx, 31, 0x79B478u);
    ctx->pc = 0x79B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B470u;
    // 0x79b474: 0x8c64264c  lw          $a0, 0x264C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79B470u, 0x79B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B478u;
label_79b478:
    // 0x79b478: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b47c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b480: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B480u;
    SET_GPR_U32(ctx, 31, 0x79B488u);
    ctx->pc = 0x79B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B480u;
    // 0x79b484: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B480u, 0x79B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B488u;
label_79b488:
    // 0x79b488: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79b488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b48c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x79b48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b490: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79b490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b494: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x79b494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b498: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x79b498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b49c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x79b49cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b4a0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79b4a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b4a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x79b4a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b4a8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x79b4a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b4ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79b4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b4b0: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x79b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79b4b4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x79b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4B8u;
        // 0x79b4bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B4C0u;
}
} // namespace gh_r501
