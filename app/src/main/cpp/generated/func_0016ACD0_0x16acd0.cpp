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

// Function: func_0016ACD0
// Address: 0x16acd0 - 0x16ae38
void func_0016ACD0_0x16acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016ACD0_0x16acd0");
#endif

    switch (ctx->pc) {
        case 0x16ad38u: goto label_16ad38;
        case 0x16ad54u: goto label_16ad54;
        case 0x16ad64u: goto label_16ad64;
        case 0x16ad90u: goto label_16ad90;
        case 0x16adc0u: goto label_16adc0;
        case 0x16add8u: goto label_16add8;
        case 0x16ade0u: goto label_16ade0;
        case 0x16adfcu: goto label_16adfc;
        case 0x16ae04u: goto label_16ae04;
        default: break;
    }

    ctx->pc = 0x16acd0u;

    // 0x16acd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16acd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16acd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16acdc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x16ace0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16ace0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ace4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x16ace8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x16acec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16acf0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16acf4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x16acf8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x16acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x16acfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ad00: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x16ad00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16ad04: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x16ad04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x16ad08: 0x8282005a  lb          $v0, 0x5A($s4)
    ctx->pc = 0x16ad08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x16ad0c: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x16AD0Cu;
    {
        const bool branch_taken_0x16ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD0Cu;
        // 0x16ad10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad0c) {
            ctx->pc = 0x16ADF4u;
            goto label_16adf4;
        }
    }
    ctx->pc = 0x16AD14u;
    // 0x16ad14: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x16ad18: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16ad18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16ad1c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x16ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x16ad20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16ad20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16ad24: 0x26960260  addiu       $s6, $s4, 0x260
    ctx->pc = 0x16ad24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
    // 0x16ad28: 0x26910210  addiu       $s1, $s4, 0x210
    ctx->pc = 0x16ad28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 528));
    // 0x16ad2c: 0x2417001a  addiu       $s7, $zero, 0x1A
    ctx->pc = 0x16ad2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x16ad30: 0x2695026c  addiu       $s5, $s4, 0x26C
    ctx->pc = 0x16ad30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 620));
    // 0x16ad34: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x16ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_16ad38:
    // 0x16ad38: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x16ad38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x16ad3c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ad40: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x16AD40u;
    {
        const bool branch_taken_0x16ad40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD40u;
        // 0x16ad44: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad40) {
            ctx->pc = 0x16ADE4u;
            goto label_16ade4;
        }
    }
    ctx->pc = 0x16AD48u;
    // 0x16ad48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad4c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16AD4Cu;
    SET_GPR_U32(ctx, 31, 0x16AD54u);
    ctx->pc = 0x16AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD4Cu;
    // 0x16ad50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16AD4Cu, 0x16AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD54u;
label_16ad54:
    // 0x16ad54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ad54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad5c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16AD5Cu;
    SET_GPR_U32(ctx, 31, 0x16AD64u);
    ctx->pc = 0x16AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD5Cu;
    // 0x16ad60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16AD5Cu, 0x16AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD64u;
label_16ad64:
    // 0x16ad64: 0x2773018  mult        $a2, $s3, $s7
    ctx->pc = 0x16ad64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16ad68: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16ad6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ad70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad74: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x16ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x16ad78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ad7c: 0x0  nop
    ctx->pc = 0x16ad7cu;
    // NOP
    // 0x16ad80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ad80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16ad84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16ad84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16ad88: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16AD88u;
    SET_GPR_U32(ctx, 31, 0x16AD90u);
    ctx->pc = 0x16AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD88u;
    // 0x16ad8c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16AD88u, 0x16AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD90u;
label_16ad90:
    // 0x16ad90: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x16ad90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ad94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ad94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ad9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ada0: 0x0  nop
    ctx->pc = 0x16ada0u;
    // NOP
    // 0x16ada4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ada4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ada8: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x16ada8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x16adac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16adacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16adb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16adb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16adb4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16adb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16adb8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16ADB8u;
    SET_GPR_U32(ctx, 31, 0x16ADC0u);
    ctx->pc = 0x16ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADB8u;
    // 0x16adbc: 0xa043004f  sb          $v1, 0x4F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16ADB8u, 0x16ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADC0u;
label_16adc0:
    // 0x16adc0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16adc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16adc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adc8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x16adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x16adcc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16adccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16add0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16ADD0u;
    SET_GPR_U32(ctx, 31, 0x16ADD8u);
    ctx->pc = 0x16ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADD0u;
    // 0x16add4: 0xac450084  sw          $a1, 0x84($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16ADD0u, 0x16ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADD8u;
label_16add8:
    // 0x16add8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16ADD8u;
    SET_GPR_U32(ctx, 31, 0x16ADE0u);
    ctx->pc = 0x16ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADD8u;
    // 0x16addc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16ADD8u, 0x16ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADE0u;
label_16ade0:
    // 0x16ade0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x16ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16ade4:
    // 0x16ade4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x16ade4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ade8: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x16ade8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16adec: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x16ADECu;
    {
        const bool branch_taken_0x16adec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADECu;
        // 0x16adf0: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adec) {
            ctx->pc = 0x16AD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ad38;
        }
    }
    ctx->pc = 0x16ADF4u;
label_16adf4:
    // 0x16adf4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16ADF4u;
    SET_GPR_U32(ctx, 31, 0x16ADFCu);
    ctx->pc = 0x16ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADF4u;
    // 0x16adf8: 0x268400d0  addiu       $a0, $s4, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16ADF4u, 0x16ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADFCu;
label_16adfc:
    // 0x16adfc: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16ADFCu;
    SET_GPR_U32(ctx, 31, 0x16AE04u);
    ctx->pc = 0x16AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADFCu;
    // 0x16ae00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16ADFCu, 0x16AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE04u;
label_16ae04:
    // 0x16ae04: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16ae04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ae08: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16ae08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ae0c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16ae0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ae10: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16ae10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16ae14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16ae14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ae18: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16ae18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ae1c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x16ae1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ae20: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x16ae20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ae24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ae24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae28: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x16ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16ae2c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x16ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ae30: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE30u;
        // 0x16ae34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE38u;
}
