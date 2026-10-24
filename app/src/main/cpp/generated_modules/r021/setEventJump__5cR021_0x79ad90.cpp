#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: setEventJump__5cR021
// Address: 0x79ad90 - 0x79b030
void setEventJump__5cR021_0x79ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setEventJump__5cR021_0x79ad90");
#endif

    switch (ctx->pc) {
        case 0x79adccu: goto label_79adcc;
        case 0x79ae10u: goto label_79ae10;
        case 0x79ae20u: goto label_79ae20;
        case 0x79ae78u: goto label_79ae78;
        case 0x79ae94u: goto label_79ae94;
        case 0x79af3cu: goto label_79af3c;
        case 0x79af94u: goto label_79af94;
        case 0x79afb0u: goto label_79afb0;
        case 0x79afd8u: goto label_79afd8;
        case 0x79b000u: goto label_79b000;
        default: break;
    }

    ctx->pc = 0x79ad90u;

    // 0x79ad90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79ad94: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79ad98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79ad9c: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x79ada0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79ada4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79ada4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ada8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79adac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79adacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79adb4: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x79adb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x79adb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79adbc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79adc0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79adc4: 0xc07efe4  jal         func_1FBF90
    ctx->pc = 0x79ADC4u;
    SET_GPR_U32(ctx, 31, 0x79ADCCu);
    ctx->pc = 0x79ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADC4u;
    // 0x79adc8: 0x920505b7  lbu         $a1, 0x5B7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1463)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF90u, 0x79ADC4u, 0x79ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADCCu;
label_79adcc:
    // 0x79adcc: 0x920205b7  lbu         $v0, 0x5B7($s0)
    ctx->pc = 0x79adccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1463)));
    // 0x79add0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x79add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79add4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x79add4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79add8: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x79ADD8u;
    {
        const bool branch_taken_0x79add8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD8u;
        // 0x79addc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79add8) {
            ctx->pc = 0x79B008u;
            goto label_79b008;
        }
    }
    ctx->pc = 0x79ADE0u;
    // 0x79ade0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79ade4: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x79ade8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79adec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79adf0: 0x800008  jr          $a0
    ctx->pc = 0x79ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79ADF8u: goto label_79adf8;
            case 0x79AEA4u: goto label_79aea4;
            case 0x79AEC0u: goto label_79aec0;
            case 0x79AEDCu: goto label_79aedc;
            case 0x79AEF8u: goto label_79aef8;
            case 0x79AF14u: goto label_79af14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79ADF8u;
label_79adf8:
    // 0x79adf8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79adfc: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79adfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79ae00: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79ae00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79ae04: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ae08: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79ae0c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79ae10:
    // 0x79ae10: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79ae10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79ae14: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x79ae18: 0xc1e6eb0  jal         func_79BAC0
    ctx->pc = 0x79AE18u;
    SET_GPR_U32(ctx, 31, 0x79AE20u);
    ctx->pc = 0x79AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE18u;
    // 0x79ae1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAC0u, 0x79AE18u, 0x79AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE20u;
label_79ae20:
    // 0x79ae20: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ae24: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79ae28: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ae2c: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x79ae2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x79ae30: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ae34: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79ae38: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AE38u;
    {
        const bool branch_taken_0x79ae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE38u;
        // 0x79ae3c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae38) {
            ctx->pc = 0x79AE54u;
            goto label_79ae54;
        }
    }
    ctx->pc = 0x79AE40u;
    // 0x79ae40: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79ae40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79ae44: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ae48: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79ae48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ae4c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ae50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79ae50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79ae54:
    // 0x79ae54: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ae58: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ae5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae60: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x79ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x79ae64: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ae68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae6c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x79ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x79ae70: 0xc1e6ec0  jal         func_79BB00
    ctx->pc = 0x79AE70u;
    SET_GPR_U32(ctx, 31, 0x79AE78u);
    ctx->pc = 0x79AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE70u;
    // 0x79ae74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BB00u, 0x79AE70u, 0x79AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE78u;
label_79ae78:
    // 0x79ae78: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x79AE78u;
    {
        const bool branch_taken_0x79ae78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE78u;
        // 0x79ae7c: 0x268274a0  addiu       $v0, $s4, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae78) {
            ctx->pc = 0x79B010u;
            goto label_79b010;
        }
    }
    ctx->pc = 0x79AE80u;
    // 0x79ae80: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x79ae80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x79ae84: 0x10700063  beq         $v1, $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x79AE84u;
    {
        const bool branch_taken_0x79ae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x79AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE84u;
        // 0x79ae88: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae84) {
            ctx->pc = 0x79B014u;
            goto label_79b014;
        }
    }
    ctx->pc = 0x79AE8Cu;
    // 0x79ae8c: 0xc1e6eba  jal         func_79BAE8
    ctx->pc = 0x79AE8Cu;
    SET_GPR_U32(ctx, 31, 0x79AE94u);
    ctx->pc = 0x79AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE8Cu;
    // 0x79ae90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAE8u, 0x79AE8Cu, 0x79AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE94u;
label_79ae94:
    // 0x79ae94: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x79AE94u;
    {
        const bool branch_taken_0x79ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE94u;
        // 0x79ae98: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae94) {
            ctx->pc = 0x79AFB8u;
            goto label_79afb8;
        }
    }
    ctx->pc = 0x79AE9Cu;
    // 0x79ae9c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x79AE9Cu;
    {
        const bool branch_taken_0x79ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae9c) {
            ctx->pc = 0x79AFE0u;
            goto label_79afe0;
        }
    }
    ctx->pc = 0x79AEA4u;
label_79aea4:
    // 0x79aea4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79aea8: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79aea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79aeac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79aeacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79aeb0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79aeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79aeb4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aeb8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x79AEB8u;
    {
        const bool branch_taken_0x79aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEB8u;
        // 0x79aebc: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aeb8) {
            ctx->pc = 0x79AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae10;
        }
    }
    ctx->pc = 0x79AEC0u;
label_79aec0:
    // 0x79aec0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79aec4: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79aec8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79aec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79aecc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79aed0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aed4: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x79AED4u;
    {
        const bool branch_taken_0x79aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED4u;
        // 0x79aed8: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed4) {
            ctx->pc = 0x79AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae10;
        }
    }
    ctx->pc = 0x79AEDCu;
label_79aedc:
    // 0x79aedc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79aee0: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79aee4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79aee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79aee8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79aeec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aef0: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x79AEF0u;
    {
        const bool branch_taken_0x79aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEF0u;
        // 0x79aef4: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aef0) {
            ctx->pc = 0x79AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae10;
        }
    }
    ctx->pc = 0x79AEF8u;
label_79aef8:
    // 0x79aef8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79aefc: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79aefcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79af00: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79af00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79af04: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79af04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79af08: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79af08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79af0c: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x79AF0Cu;
    {
        const bool branch_taken_0x79af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF0Cu;
        // 0x79af10: 0x24100023  addiu       $s0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af0c) {
            ctx->pc = 0x79AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae10;
        }
    }
    ctx->pc = 0x79AF14u;
label_79af14:
    // 0x79af14: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79af18: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79af1c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79af1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79af20: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79af20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79af24: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79af28: 0x24100027  addiu       $s0, $zero, 0x27
    ctx->pc = 0x79af28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x79af2c: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79af2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79af30: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x79af30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x79af34: 0xc1e6eb0  jal         func_79BAC0
    ctx->pc = 0x79AF34u;
    SET_GPR_U32(ctx, 31, 0x79AF3Cu);
    ctx->pc = 0x79AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF34u;
    // 0x79af38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAC0u, 0x79AF34u, 0x79AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF3Cu;
label_79af3c:
    // 0x79af3c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79af40: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79af40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79af44: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79af48: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x79af48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x79af4c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79af50: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79af54: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AF54u;
    {
        const bool branch_taken_0x79af54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF54u;
        // 0x79af58: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af54) {
            ctx->pc = 0x79AF70u;
            goto label_79af70;
        }
    }
    ctx->pc = 0x79AF5Cu;
    // 0x79af5c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79af5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79af60: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79af64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79af64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79af68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79af6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79af6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79af70:
    // 0x79af70: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79af74: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x79af74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79af78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af7c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x79af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x79af80: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79af84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79af88: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x79af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x79af8c: 0xc1e6ec0  jal         func_79BB00
    ctx->pc = 0x79AF8Cu;
    SET_GPR_U32(ctx, 31, 0x79AF94u);
    ctx->pc = 0x79AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF8Cu;
    // 0x79af90: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BB00u, 0x79AF8Cu, 0x79AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF94u;
label_79af94:
    // 0x79af94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79AF94u;
    {
        const bool branch_taken_0x79af94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF94u;
        // 0x79af98: 0x268274a0  addiu       $v0, $s4, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af94) {
            ctx->pc = 0x79B010u;
            goto label_79b010;
        }
    }
    ctx->pc = 0x79AF9Cu;
    // 0x79af9c: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x79af9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x79afa0: 0x1070001c  beq         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79AFA0u;
    {
        const bool branch_taken_0x79afa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x79AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA0u;
        // 0x79afa4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afa0) {
            ctx->pc = 0x79B014u;
            goto label_79b014;
        }
    }
    ctx->pc = 0x79AFA8u;
    // 0x79afa8: 0xc1e6eba  jal         func_79BAE8
    ctx->pc = 0x79AFA8u;
    SET_GPR_U32(ctx, 31, 0x79AFB0u);
    ctx->pc = 0x79AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA8u;
    // 0x79afac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAE8u, 0x79AFA8u, 0x79AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFB0u;
label_79afb0:
    // 0x79afb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79AFB0u;
    {
        const bool branch_taken_0x79afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB0u;
        // 0x79afb4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afb0) {
            ctx->pc = 0x79AFE0u;
            goto label_79afe0;
        }
    }
    ctx->pc = 0x79AFB8u;
label_79afb8:
    // 0x79afb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79afb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79afbc: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79afc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79afc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79afc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79afc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79afc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79afccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afd0: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79AFD0u;
    SET_GPR_U32(ctx, 31, 0x79AFD8u);
    ctx->pc = 0x79AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFD0u;
    // 0x79afd4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79AFD0u, 0x79AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFD8u;
label_79afd8:
    // 0x79afd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79AFD8u;
    {
        const bool branch_taken_0x79afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFD8u;
        // 0x79afdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afd8) {
            ctx->pc = 0x79B014u;
            goto label_79b014;
        }
    }
    ctx->pc = 0x79AFE0u;
label_79afe0:
    // 0x79afe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79afe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79afe4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79afe8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79afe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79afecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79aff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aff8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79AFF8u;
    SET_GPR_U32(ctx, 31, 0x79B000u);
    ctx->pc = 0x79AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFF8u;
    // 0x79affc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79AFF8u, 0x79B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B000u;
label_79b000:
    // 0x79b000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B000u;
    {
        const bool branch_taken_0x79b000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B000u;
        // 0x79b004: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b000) {
            ctx->pc = 0x79B014u;
            goto label_79b014;
        }
    }
    ctx->pc = 0x79B008u;
label_79b008:
    // 0x79b008: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x79b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79b00c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79b00cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79b010:
    // 0x79b010: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79b010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79b014:
    // 0x79b014: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79b014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b018: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79b018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b01c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79b01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b020: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79b020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b028: 0x3e00008  jr          $ra
    ctx->pc = 0x79B028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B028u;
        // 0x79b02c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B030u;
}
} // namespace gh_r021
