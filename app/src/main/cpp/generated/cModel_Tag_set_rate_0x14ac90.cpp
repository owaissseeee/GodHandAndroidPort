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

// Function: cModel_Tag_set_rate
// Address: 0x14ac90 - 0x14b470
void cModel_Tag_set_rate_0x14ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_Tag_set_rate_0x14ac90");
#endif

    switch (ctx->pc) {
        case 0x14ad90u: goto label_14ad90;
        case 0x14ada4u: goto label_14ada4;
        case 0x14adbcu: goto label_14adbc;
        case 0x14add8u: goto label_14add8;
        case 0x14adecu: goto label_14adec;
        case 0x14ae00u: goto label_14ae00;
        case 0x14ae14u: goto label_14ae14;
        case 0x14ae20u: goto label_14ae20;
        case 0x14ae30u: goto label_14ae30;
        case 0x14ae48u: goto label_14ae48;
        case 0x14ae68u: goto label_14ae68;
        case 0x14ae78u: goto label_14ae78;
        case 0x14ae90u: goto label_14ae90;
        case 0x14af20u: goto label_14af20;
        case 0x14af44u: goto label_14af44;
        case 0x14af60u: goto label_14af60;
        case 0x14af6cu: goto label_14af6c;
        case 0x14af84u: goto label_14af84;
        case 0x14afa0u: goto label_14afa0;
        case 0x14afe8u: goto label_14afe8;
        case 0x14aff8u: goto label_14aff8;
        case 0x14b014u: goto label_14b014;
        case 0x14b028u: goto label_14b028;
        case 0x14b040u: goto label_14b040;
        case 0x14b050u: goto label_14b050;
        case 0x14b070u: goto label_14b070;
        case 0x14b080u: goto label_14b080;
        case 0x14b098u: goto label_14b098;
        case 0x14b11cu: goto label_14b11c;
        case 0x14b168u: goto label_14b168;
        case 0x14b180u: goto label_14b180;
        case 0x14b18cu: goto label_14b18c;
        case 0x14b1a8u: goto label_14b1a8;
        case 0x14b1f0u: goto label_14b1f0;
        case 0x14b208u: goto label_14b208;
        case 0x14b37cu: goto label_14b37c;
        case 0x14b3b0u: goto label_14b3b0;
        case 0x14b3ccu: goto label_14b3cc;
        case 0x14b3ecu: goto label_14b3ec;
        case 0x14b408u: goto label_14b408;
        case 0x14b424u: goto label_14b424;
        case 0x14b43cu: goto label_14b43c;
        default: break;
    }

    ctx->pc = 0x14ac90u;

    // 0x14ac90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14ac94: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14ac98: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14ac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14ac9c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x14aca0: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x14aca4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x14aca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14aca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14acb0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14acb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14acb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acb8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x14acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x14acbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14acc0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x14acc4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x14acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x14acc8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x14acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x14accc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14acd0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x14acd4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x14acd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14acd8: 0x924302b6  lbu         $v1, 0x2B6($s2)
    ctx->pc = 0x14acd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 694)));
    // 0x14acdc: 0x924402b7  lbu         $a0, 0x2B7($s2)
    ctx->pc = 0x14acdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 695)));
    // 0x14ace0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14ace0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14ace4: 0x0  nop
    ctx->pc = 0x14ace4u;
    // NOP
    // 0x14ace8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14ace8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14acec: 0x924202bc  lbu         $v0, 0x2BC($s2)
    ctx->pc = 0x14acecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x14acf0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x14acf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14acf4: 0x0  nop
    ctx->pc = 0x14acf4u;
    // NOP
    // 0x14acf8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14acf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14acfc: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x14acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ad00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ad00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ad04: 0x0  nop
    ctx->pc = 0x14ad04u;
    // NOP
    // 0x14ad08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14ad08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14ad0c: 0x8e440250  lw          $a0, 0x250($s2)
    ctx->pc = 0x14ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x14ad10: 0x0  nop
    ctx->pc = 0x14ad10u;
    // NOP
    // 0x14ad14: 0x0  nop
    ctx->pc = 0x14ad14u;
    // NOP
    // 0x14ad18: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x14ad18u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[4]);
    // 0x14ad1c: 0x8ce276b0  lw          $v0, 0x76B0($a3)
    ctx->pc = 0x14ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14ad20: 0x0  nop
    ctx->pc = 0x14ad20u;
    // NOP
    // 0x14ad24: 0x0  nop
    ctx->pc = 0x14ad24u;
    // NOP
    // 0x14ad28: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x14ad28u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x14ad2c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x14ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x14ad30: 0x0  nop
    ctx->pc = 0x14ad30u;
    // NOP
    // 0x14ad34: 0x0  nop
    ctx->pc = 0x14ad34u;
    // NOP
    // 0x14ad38: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x14ad38u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x14ad3c: 0x30540001  andi        $s4, $v0, 0x1
    ctx->pc = 0x14ad3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ad40: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x14ad40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x14ad44: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14ad44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14ad48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14ad48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14ad4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14ad4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14ad50: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x14ad50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x14ad54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ad54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14ad58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ad58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ad5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ad60: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x14ad60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ad64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14ad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad68: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14AD68u;
    {
        const bool branch_taken_0x14ad68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD68u;
        // 0x14ad6c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad68) {
            ctx->pc = 0x14AD98u;
            goto label_14ad98;
        }
    }
    ctx->pc = 0x14AD70u;
    // 0x14ad70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ad70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad74: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x14ad78: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x14ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x14ad7c: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x14ad7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
    // 0x14ad80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ad80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad84: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x14ad84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14ad88: 0xc0535da  jal         func_14D768
    ctx->pc = 0x14AD88u;
    SET_GPR_U32(ctx, 31, 0x14AD90u);
    ctx->pc = 0x14AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD88u;
    // 0x14ad8c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D768u, 0x14AD88u, 0x14AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD90u;
label_14ad90:
    // 0x14ad90: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14AD90u;
    {
        const bool branch_taken_0x14ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD90u;
        // 0x14ad94: 0x10bc00  sll         $s7, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad90) {
            ctx->pc = 0x14AE0Cu;
            goto label_14ae0c;
        }
    }
    ctx->pc = 0x14AD98u;
label_14ad98:
    // 0x14ad98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad9c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14AD9Cu;
    SET_GPR_U32(ctx, 31, 0x14ADA4u);
    ctx->pc = 0x14ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD9Cu;
    // 0x14ada0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14AD9Cu, 0x14ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADA4u;
label_14ada4:
    // 0x14ada4: 0x10bc00  sll         $s7, $s0, 16
    ctx->pc = 0x14ada4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14ada8: 0x90430380  lbu         $v1, 0x380($v0)
    ctx->pc = 0x14ada8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x14adac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14adacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14adb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adb4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14ADB4u;
    SET_GPR_U32(ctx, 31, 0x14ADBCu);
    ctx->pc = 0x14ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADB4u;
    // 0x14adb8: 0x3a9fa  dsrl        $s5, $v1, 7 (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) >> 7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14ADB4u, 0x14ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADBCu;
label_14adbc:
    // 0x14adbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14adbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adc0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14ADC0u;
    {
        const bool branch_taken_0x14adc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14adc0) {
            ctx->pc = 0x14AE0Cu;
            goto label_14ae0c;
        }
    }
    ctx->pc = 0x14ADC8u;
    // 0x14adc8: 0x118938  dsll        $s1, $s1, 4
    ctx->pc = 0x14adc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 4);
    // 0x14adcc: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x14adccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x14add0: 0x3673100d  ori         $s3, $s3, 0x100D
    ctx->pc = 0x14add0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4109);
    // 0x14add4: 0x0  nop
    ctx->pc = 0x14add4u;
    // NOP
label_14add8:
    // 0x14add8: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ADD8u;
    {
        const bool branch_taken_0x14add8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADD8u;
        // 0x14addc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14add8) {
            ctx->pc = 0x14ADF4u;
            goto label_14adf4;
        }
    }
    ctx->pc = 0x14ADE0u;
    // 0x14ade0: 0x2332825  or          $a1, $s1, $s3
    ctx->pc = 0x14ade0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x14ade4: 0xc055758  jal         func_155D60
    ctx->pc = 0x14ADE4u;
    SET_GPR_U32(ctx, 31, 0x14ADECu);
    ctx->pc = 0x14ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADE4u;
    // 0x14ade8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x14ADE4u, 0x14ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADECu;
label_14adec:
    // 0x14adec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14ADECu;
    {
        const bool branch_taken_0x14adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADECu;
        // 0x14adf0: 0x8e100404  lw          $s0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adec) {
            ctx->pc = 0x14AE04u;
            goto label_14ae04;
        }
    }
    ctx->pc = 0x14ADF4u;
label_14adf4:
    // 0x14adf4: 0x2332825  or          $a1, $s1, $s3
    ctx->pc = 0x14adf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x14adf8: 0xc055758  jal         func_155D60
    ctx->pc = 0x14ADF8u;
    SET_GPR_U32(ctx, 31, 0x14AE00u);
    ctx->pc = 0x14ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADF8u;
    // 0x14adfc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x14ADF8u, 0x14AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE00u;
label_14ae00:
    // 0x14ae00: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14ae00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_14ae04:
    // 0x14ae04: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14AE04u;
    {
        const bool branch_taken_0x14ae04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae04) {
            ctx->pc = 0x14ADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14add8;
        }
    }
    ctx->pc = 0x14AE0Cu;
label_14ae0c:
    // 0x14ae0c: 0xc0531fa  jal         func_14C7E8
    ctx->pc = 0x14AE0Cu;
    SET_GPR_U32(ctx, 31, 0x14AE14u);
    ctx->pc = 0x14AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE0Cu;
    // 0x14ae10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C7E8u, 0x14AE0Cu, 0x14AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE14u;
label_14ae14:
    // 0x14ae14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae18: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14AE18u;
    SET_GPR_U32(ctx, 31, 0x14AE20u);
    ctx->pc = 0x14AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE18u;
    // 0x14ae1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14AE18u, 0x14AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE20u;
label_14ae20:
    // 0x14ae20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ae20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae24: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14AE24u;
    {
        const bool branch_taken_0x14ae24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE24u;
        // 0x14ae28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae24) {
            ctx->pc = 0x14AE58u;
            goto label_14ae58;
        }
    }
    ctx->pc = 0x14AE2Cu;
    // 0x14ae2c: 0x92020380  lbu         $v0, 0x380($s0)
    ctx->pc = 0x14ae2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 896)));
label_14ae30:
    // 0x14ae30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14ae34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ae38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AE38u;
    {
        const bool branch_taken_0x14ae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE38u;
        // 0x14ae3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae38) {
            ctx->pc = 0x14AE48u;
            goto label_14ae48;
        }
    }
    ctx->pc = 0x14AE40u;
    // 0x14ae40: 0xc055090  jal         func_154240
    ctx->pc = 0x14AE40u;
    SET_GPR_U32(ctx, 31, 0x14AE48u);
    ctx->pc = 0x14AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE40u;
    // 0x14ae44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154240u, 0x14AE40u, 0x14AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE48u;
label_14ae48:
    // 0x14ae48: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14ae4c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14AE4Cu;
    {
        const bool branch_taken_0x14ae4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae4c) {
            ctx->pc = 0x14AE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AE4Cu;
            // 0x14ae50: 0x92020380  lbu         $v0, 0x380($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ae30;
        }
    }
    ctx->pc = 0x14AE54u;
    // 0x14ae54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14ae58:
    // 0x14ae58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x14ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14ae5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14ae5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae60: 0xc0556fa  jal         func_155BE8
    ctx->pc = 0x14AE60u;
    SET_GPR_U32(ctx, 31, 0x14AE68u);
    ctx->pc = 0x14AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE60u;
    // 0x14ae64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE8u, 0x14AE60u, 0x14AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE68u;
label_14ae68:
    // 0x14ae68: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14ae68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae70: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14AE70u;
    SET_GPR_U32(ctx, 31, 0x14AE78u);
    ctx->pc = 0x14AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE70u;
    // 0x14ae74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14AE70u, 0x14AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE78u;
label_14ae78:
    // 0x14ae78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14ae78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae7c: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x14AE7Cu;
    {
        const bool branch_taken_0x14ae7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE7Cu;
        // 0x14ae80: 0x3c150075  lui         $s5, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae7c) {
            ctx->pc = 0x14B05Cu;
            goto label_14b05c;
        }
    }
    ctx->pc = 0x14AE84u;
    // 0x14ae84: 0x241e00b0  addiu       $fp, $zero, 0xB0
    ctx->pc = 0x14ae84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x14ae88: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x14ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x14ae8c: 0x0  nop
    ctx->pc = 0x14ae8cu;
    // NOP
label_14ae90:
    // 0x14ae90: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14ae94: 0x5440006f  bnel        $v0, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x14AE94u;
    {
        const bool branch_taken_0x14ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae94) {
            ctx->pc = 0x14AE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AE94u;
            // 0x14ae98: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14AE9Cu;
    // 0x14ae9c: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x14aea0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x14aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x14aea4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14AEA4u;
    {
        const bool branch_taken_0x14aea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEA4u;
        // 0x14aea8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aea4) {
            ctx->pc = 0x14AED0u;
            goto label_14aed0;
        }
    }
    ctx->pc = 0x14AEACu;
    // 0x14aeac: 0x8e230414  lw          $v1, 0x414($s1)
    ctx->pc = 0x14aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
    // 0x14aeb0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x14aeb4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14aeb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14aebc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aec0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14aec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14aec4: 0x54620063  bnel        $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x14AEC4u;
    {
        const bool branch_taken_0x14aec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14aec4) {
            ctx->pc = 0x14AEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AEC4u;
            // 0x14aec8: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14AECCu;
    // 0x14aecc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_14aed0:
    // 0x14aed0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14aed4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14AED4u;
    {
        const bool branch_taken_0x14aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aed4) {
            ctx->pc = 0x14AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AED4u;
            // 0x14aed8: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AF2Cu;
            goto label_14af2c;
        }
    }
    ctx->pc = 0x14AEDCu;
    // 0x14aedc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x14aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14aee0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14aee4: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x14aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x14aee8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14aeec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AEECu;
    {
        const bool branch_taken_0x14aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEECu;
        // 0x14aef0: 0xc46c0014  lwc1        $f12, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aeec) {
            ctx->pc = 0x14AEF8u;
            goto label_14aef8;
        }
    }
    ctx->pc = 0x14AEF4u;
    // 0x14aef4: 0xc46c0068  lwc1        $f12, 0x68($v1)
    ctx->pc = 0x14aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14aef8:
    // 0x14aef8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x14aef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x14aefc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14AEFCu;
    {
        const bool branch_taken_0x14aefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aefc) {
            ctx->pc = 0x14AF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AEFCu;
            // 0x14af00: 0xc46c001c  lwc1        $f12, 0x1C($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AF04u;
            goto label_14af04;
        }
    }
    ctx->pc = 0x14AF04u;
label_14af04:
    // 0x14af04: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x14af08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14af0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14AF0Cu;
    {
        const bool branch_taken_0x14af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14af0c) {
            ctx->pc = 0x14AF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AF0Cu;
            // 0x14af10: 0xc46c0024  lwc1        $f12, 0x24($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AF14u;
            goto label_14af14;
        }
    }
    ctx->pc = 0x14AF14u;
label_14af14:
    // 0x14af14: 0x26440260  addiu       $a0, $s2, 0x260
    ctx->pc = 0x14af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x14af18: 0xc07e37e  jal         func_1F8DF8
    ctx->pc = 0x14AF18u;
    SET_GPR_U32(ctx, 31, 0x14AF20u);
    ctx->pc = 0x14AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF18u;
    // 0x14af1c: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8DF8u, 0x14AF18u, 0x14AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF20u;
label_14af20:
    // 0x14af20: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x14AF20u;
    {
        const bool branch_taken_0x14af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14af20) {
            ctx->pc = 0x14AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AF20u;
            // 0x14af24: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14AF28u;
    // 0x14af28: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_14af2c:
    // 0x14af2c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x14af30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AF30u;
    {
        const bool branch_taken_0x14af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14af30) {
            ctx->pc = 0x14AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AF30u;
            // 0x14af34: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AF48u;
            goto label_14af48;
        }
    }
    ctx->pc = 0x14AF38u;
    // 0x14af38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af3c: 0xc052d34  jal         func_14B4D0
    ctx->pc = 0x14AF3Cu;
    SET_GPR_U32(ctx, 31, 0x14AF44u);
    ctx->pc = 0x14AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF3Cu;
    // 0x14af40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4D0u, 0x14AF3Cu, 0x14AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF44u;
label_14af44:
    // 0x14af44: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_14af48:
    // 0x14af48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14af48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14af4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14af4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14af50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AF50u;
    {
        const bool branch_taken_0x14af50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF50u;
        // 0x14af54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af50) {
            ctx->pc = 0x14AF60u;
            goto label_14af60;
        }
    }
    ctx->pc = 0x14AF58u;
    // 0x14af58: 0xc052d76  jal         func_14B5D8
    ctx->pc = 0x14AF58u;
    SET_GPR_U32(ctx, 31, 0x14AF60u);
    ctx->pc = 0x14AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF58u;
    // 0x14af5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B5D8u, 0x14AF58u, 0x14AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF60u;
label_14af60:
    // 0x14af60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14af60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af64: 0xc052f8e  jal         func_14BE38
    ctx->pc = 0x14AF64u;
    SET_GPR_U32(ctx, 31, 0x14AF6Cu);
    ctx->pc = 0x14AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF64u;
    // 0x14af68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE38u, 0x14AF64u, 0x14AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF6Cu;
label_14af6c:
    // 0x14af6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14af6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14af74: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x14af74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x14af78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af7c: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14AF7Cu;
    SET_GPR_U32(ctx, 31, 0x14AF84u);
    ctx->pc = 0x14AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF7Cu;
    // 0x14af80: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14AF7Cu, 0x14AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF84u;
label_14af84:
    // 0x14af84: 0x12d00007  beq         $s6, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AF84u;
    {
        const bool branch_taken_0x14af84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 16));
        ctx->pc = 0x14AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF84u;
        // 0x14af88: 0x29e1018  mult        $v0, $s4, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af84) {
            ctx->pc = 0x14AFA4u;
            goto label_14afa4;
        }
    }
    ctx->pc = 0x14AF8Cu;
    // 0x14af8c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AF8Cu;
    {
        const bool branch_taken_0x14af8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF8Cu;
        // 0x14af90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af8c) {
            ctx->pc = 0x14AFA0u;
            goto label_14afa0;
        }
    }
    ctx->pc = 0x14AF94u;
    // 0x14af94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af98: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14AF98u;
    SET_GPR_U32(ctx, 31, 0x14AFA0u);
    ctx->pc = 0x14AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF98u;
    // 0x14af9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14AF98u, 0x14AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFA0u;
label_14afa0:
    // 0x14afa0: 0x29e1018  mult        $v0, $s4, $fp
    ctx->pc = 0x14afa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_14afa4:
    // 0x14afa4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x14afa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afa8: 0x8e4502c0  lw          $a1, 0x2C0($s2)
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x14afac: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x14afacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afb0: 0x8e630380  lw          $v1, 0x380($s3)
    ctx->pc = 0x14afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
    // 0x14afb4: 0x173403  sra         $a2, $s7, 16
    ctx->pc = 0x14afb4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 23), 16));
    // 0x14afb8: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14afbc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x14afbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afc0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14afc4: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14AFC4u;
    {
        const bool branch_taken_0x14afc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFC4u;
        // 0x14afc8: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afc4) {
            ctx->pc = 0x14B030u;
            goto label_14b030;
        }
    }
    ctx->pc = 0x14AFCCu;
    // 0x14afcc: 0x30624080  andi        $v0, $v1, 0x4080
    ctx->pc = 0x14afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16512);
    // 0x14afd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14AFD0u;
    {
        const bool branch_taken_0x14afd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14afd0) {
            ctx->pc = 0x14B000u;
            goto label_14b000;
        }
    }
    ctx->pc = 0x14AFD8u;
    // 0x14afd8: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AFD8u;
    {
        const bool branch_taken_0x14afd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFD8u;
        // 0x14afdc: 0x26a44c80  addiu       $a0, $s5, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afd8) {
            ctx->pc = 0x14AFF0u;
            goto label_14aff0;
        }
    }
    ctx->pc = 0x14AFE0u;
    // 0x14afe0: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14AFE0u;
    SET_GPR_U32(ctx, 31, 0x14AFE8u);
    ctx->pc = 0x14AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFE0u;
    // 0x14afe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14AFE0u, 0x14AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFE8u;
label_14afe8:
    // 0x14afe8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14AFE8u;
    {
        const bool branch_taken_0x14afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFE8u;
        // 0x14afec: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afe8) {
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14AFF0u;
label_14aff0:
    // 0x14aff0: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14AFF0u;
    SET_GPR_U32(ctx, 31, 0x14AFF8u);
    ctx->pc = 0x14AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFF0u;
    // 0x14aff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14AFF0u, 0x14AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFF8u;
label_14aff8:
    // 0x14aff8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14AFF8u;
    {
        const bool branch_taken_0x14aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFF8u;
        // 0x14affc: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aff8) {
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14B000u;
label_14b000:
    // 0x14b000: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B000u;
    {
        const bool branch_taken_0x14b000 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B000u;
        // 0x14b004: 0x26a44c80  addiu       $a0, $s5, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b000) {
            ctx->pc = 0x14B01Cu;
            goto label_14b01c;
        }
    }
    ctx->pc = 0x14B008u;
    // 0x14b008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b00c: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B00Cu;
    SET_GPR_U32(ctx, 31, 0x14B014u);
    ctx->pc = 0x14B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B00Cu;
    // 0x14b010: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B00Cu, 0x14B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B014u;
label_14b014:
    // 0x14b014: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14B014u;
    {
        const bool branch_taken_0x14b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B014u;
        // 0x14b018: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b014) {
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14B01Cu;
label_14b01c:
    // 0x14b01c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b020: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B020u;
    SET_GPR_U32(ctx, 31, 0x14B028u);
    ctx->pc = 0x14B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B020u;
    // 0x14b024: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B020u, 0x14B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B028u;
label_14b028:
    // 0x14b028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14B028u;
    {
        const bool branch_taken_0x14b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B028u;
        // 0x14b02c: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b028) {
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14B030u;
label_14b030:
    // 0x14b030: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B030u;
    {
        const bool branch_taken_0x14b030 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B030u;
        // 0x14b034: 0x864602ac  lh          $a2, 0x2AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b030) {
            ctx->pc = 0x14B048u;
            goto label_14b048;
        }
    }
    ctx->pc = 0x14B038u;
    // 0x14b038: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B038u;
    SET_GPR_U32(ctx, 31, 0x14B040u);
    ctx->pc = 0x14B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B038u;
    // 0x14b03c: 0x26a44c80  addiu       $a0, $s5, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B038u, 0x14B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B040u;
label_14b040:
    // 0x14b040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B040u;
    {
        const bool branch_taken_0x14b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B040u;
        // 0x14b044: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b040) {
            ctx->pc = 0x14B054u;
            goto label_14b054;
        }
    }
    ctx->pc = 0x14B048u;
label_14b048:
    // 0x14b048: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B048u;
    SET_GPR_U32(ctx, 31, 0x14B050u);
    ctx->pc = 0x14B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B048u;
    // 0x14b04c: 0x26a44c80  addiu       $a0, $s5, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B048u, 0x14B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B050u;
label_14b050:
    // 0x14b050: 0x8e310404  lw          $s1, 0x404($s1)
    ctx->pc = 0x14b050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
label_14b054:
    // 0x14b054: 0x5620ff8e  bnel        $s1, $zero, . + 4 + (-0x72 << 2)
    ctx->pc = 0x14B054u;
    {
        const bool branch_taken_0x14b054 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b054) {
            ctx->pc = 0x14B058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B054u;
            // 0x14b058: 0x8e240380  lw          $a0, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ae90;
        }
    }
    ctx->pc = 0x14B05Cu;
label_14b05c:
    // 0x14b05c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B05Cu;
    {
        const bool branch_taken_0x14b05c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B05Cu;
        // 0x14b060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b05c) {
            ctx->pc = 0x14B070u;
            goto label_14b070;
        }
    }
    ctx->pc = 0x14B064u;
    // 0x14b064: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14b064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b068: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14B068u;
    SET_GPR_U32(ctx, 31, 0x14B070u);
    ctx->pc = 0x14B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B068u;
    // 0x14b06c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14B068u, 0x14B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B070u;
label_14b070:
    // 0x14b070: 0x17ac03  sra         $s5, $s7, 16
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 23), 16));
    // 0x14b074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b078: 0xc053168  jal         func_14C5A0
    ctx->pc = 0x14B078u;
    SET_GPR_U32(ctx, 31, 0x14B080u);
    ctx->pc = 0x14B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B078u;
    // 0x14b07c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C5A0u, 0x14B078u, 0x14B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B080u;
label_14b080:
    // 0x14b080: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x14b084: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14b084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14b088: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x14B088u;
    {
        const bool branch_taken_0x14b088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B088u;
        // 0x14b08c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b088) {
            ctx->pc = 0x14B43Cu;
            goto label_14b43c;
        }
    }
    ctx->pc = 0x14B090u;
    // 0x14b090: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x14B090u;
    SET_GPR_U32(ctx, 31, 0x14B098u);
    ctx->pc = 0x14B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B090u;
    // 0x14b094: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x14B090u, 0x14B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B098u;
label_14b098:
    // 0x14b098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b09c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x14b0a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14b0a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b0a8: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x14b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x14b0ac: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x14b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x14b0b0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x14b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x14b0b4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x14b0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0b8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x14b0bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x14b0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14b0c0: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x14b0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x14b0c4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x14b0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x14b0c8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b0cc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14b0d0: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x14b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x14b0d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b0d8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x14b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x14b0dc: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x14b0e0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x14b0e4: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x14b0e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0f0: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x14b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x14b0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0f8: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x14b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x14b0fc: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x14b0fcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14b100: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x14b104: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x14b104u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x14b108: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x14b108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x14b10c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14b10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14b110: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x14b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x14b114: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14B114u;
    SET_GPR_U32(ctx, 31, 0x14B11Cu);
    ctx->pc = 0x14B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B114u;
    // 0x14b118: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14B114u, 0x14B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B11Cu;
label_14b11c:
    // 0x14b11c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x14b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x14b120: 0x8e4502c0  lw          $a1, 0x2C0($s2)
    ctx->pc = 0x14b120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x14b124: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b128: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14B128u;
    {
        const bool branch_taken_0x14b128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B128u;
        // 0x14b12c: 0x3c100075  lui         $s0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b128) {
            ctx->pc = 0x14B170u;
            goto label_14b170;
        }
    }
    ctx->pc = 0x14B130u;
    // 0x14b130: 0x30624080  andi        $v0, $v1, 0x4080
    ctx->pc = 0x14b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16512);
    // 0x14b134: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B134u;
    {
        const bool branch_taken_0x14b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B134u;
        // 0x14b138: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b134) {
            ctx->pc = 0x14B150u;
            goto label_14b150;
        }
    }
    ctx->pc = 0x14B13Cu;
    // 0x14b13c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14b13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b140: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b144: 0x24444c80  addiu       $a0, $v0, 0x4C80
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x14b148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B148u;
    {
        const bool branch_taken_0x14b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B148u;
        // 0x14b14c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b148) {
            ctx->pc = 0x14B160u;
            goto label_14b160;
        }
    }
    ctx->pc = 0x14B150u;
label_14b150:
    // 0x14b150: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b154: 0x24444c80  addiu       $a0, $v0, 0x4C80
    ctx->pc = 0x14b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x14b158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b15c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x14b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_14b160:
    // 0x14b160: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B160u;
    SET_GPR_U32(ctx, 31, 0x14B168u);
    ctx->pc = 0x14B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B160u;
    // 0x14b164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B160u, 0x14B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B168u;
label_14b168:
    // 0x14b168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14B168u;
    {
        const bool branch_taken_0x14b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B168u;
        // 0x14b16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b168) {
            ctx->pc = 0x14B184u;
            goto label_14b184;
        }
    }
    ctx->pc = 0x14B170u;
label_14b170:
    // 0x14b170: 0x864602ac  lh          $a2, 0x2AC($s2)
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
    // 0x14b174: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b178: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B178u;
    SET_GPR_U32(ctx, 31, 0x14B180u);
    ctx->pc = 0x14B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B178u;
    // 0x14b17c: 0x26044c80  addiu       $a0, $s0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B178u, 0x14B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B180u;
label_14b180:
    // 0x14b180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14b184:
    // 0x14b184: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14B184u;
    SET_GPR_U32(ctx, 31, 0x14B18Cu);
    ctx->pc = 0x14B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B184u;
    // 0x14b188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14B184u, 0x14B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B18Cu;
label_14b18c:
    // 0x14b18c: 0x14a080  sll         $s4, $s4, 2
    ctx->pc = 0x14b18cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14b190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b194: 0x26550230  addiu       $s5, $s2, 0x230
    ctx->pc = 0x14b194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x14b198: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14B198u;
    {
        const bool branch_taken_0x14b198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B198u;
        // 0x14b19c: 0x265e0228  addiu       $fp, $s2, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b198) {
            ctx->pc = 0x14B1FCu;
            goto label_14b1fc;
        }
    }
    ctx->pc = 0x14B1A0u;
    // 0x14b1a0: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
    // 0x14b1a4: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x14b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_14b1a8:
    // 0x14b1a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14b1ac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14B1ACu;
    {
        const bool branch_taken_0x14b1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b1ac) {
            ctx->pc = 0x14B1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B1ACu;
            // 0x14b1b0: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B1F4u;
            goto label_14b1f4;
        }
    }
    ctx->pc = 0x14B1B4u;
    // 0x14b1b4: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x14b1b8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x14b1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x14b1bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B1BCu;
    {
        const bool branch_taken_0x14b1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1BCu;
        // 0x14b1c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1bc) {
            ctx->pc = 0x14B1E4u;
            goto label_14b1e4;
        }
    }
    ctx->pc = 0x14B1C4u;
    // 0x14b1c4: 0x8e230414  lw          $v1, 0x414($s1)
    ctx->pc = 0x14b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
    // 0x14b1c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x14b1cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b1d0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x14b1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x14b1d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14b1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b1d8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B1D8u;
    {
        const bool branch_taken_0x14b1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14b1d8) {
            ctx->pc = 0x14B1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B1D8u;
            // 0x14b1dc: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B1F4u;
            goto label_14b1f4;
        }
    }
    ctx->pc = 0x14B1E0u;
    // 0x14b1e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14b1e4:
    // 0x14b1e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1e8: 0xc052e68  jal         func_14B9A0
    ctx->pc = 0x14B1E8u;
    SET_GPR_U32(ctx, 31, 0x14B1F0u);
    ctx->pc = 0x14B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1E8u;
    // 0x14b1ec: 0x173403  sra         $a2, $s7, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 23), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9A0u, 0x14B1E8u, 0x14B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1F0u;
label_14b1f0:
    // 0x14b1f0: 0x8e310404  lw          $s1, 0x404($s1)
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
label_14b1f4:
    // 0x14b1f4: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14B1F4u;
    {
        const bool branch_taken_0x14b1f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b1f4) {
            ctx->pc = 0x14B1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B1F4u;
            // 0x14b1f8: 0x8e220380  lw          $v0, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b1a8;
        }
    }
    ctx->pc = 0x14B1FCu;
label_14b1fc:
    // 0x14b1fc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x14b1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x14b200: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x14B200u;
    SET_GPR_U32(ctx, 31, 0x14B208u);
    ctx->pc = 0x14B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B200u;
    // 0x14b204: 0x17b403  sra         $s6, $s7, 16 (Delay Slot)
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 23), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x14B200u, 0x14B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B208u;
label_14b208:
    // 0x14b208: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b20c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x14b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x14b210: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x14b210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x14b214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14b218: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x14b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x14b21c: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x14b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x14b220: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x14b220u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x14b224: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x14b224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x14b228: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x14b228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b22c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x14b230: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x14b230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14b234: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x14b234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x14b238: 0x34a58004  ori         $a1, $a1, 0x8004
    ctx->pc = 0x14b238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32772);
    // 0x14b23c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b240: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14b244: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x14b244u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x14b248: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14b248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b24c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x14b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x14b250: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x14b250u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x14b254: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x14b254u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x14b258: 0x35080070  ori         $t0, $t0, 0x70
    ctx->pc = 0x14b258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    // 0x14b25c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x14b260: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14b260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14b264: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b268: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x14b26c: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x14b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x14b270: 0x3c0b9c00  lui         $t3, 0x9C00
    ctx->pc = 0x14b270u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39936 << 16));
    // 0x14b274: 0xb5a78  dsll        $t3, $t3, 9
    ctx->pc = 0x14b274u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 9);
    // 0x14b278: 0x356b0360  ori         $t3, $t3, 0x360
    ctx->pc = 0x14b278u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)864);
    // 0x14b27c: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x14b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x14b280: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x14b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14b284: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x14b284u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14b288: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x14b28c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x14b28cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x14b290: 0x3c0e0005  lui         $t6, 0x5
    ctx->pc = 0x14b290u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5 << 16));
    // 0x14b294: 0x35ce07fd  ori         $t6, $t6, 0x7FD
    ctx->pc = 0x14b294u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2045);
    // 0x14b298: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x14b29c: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x14b29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x14b2a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14b2a4: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x14b2a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14b2a8: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x14b2a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x14b2ac: 0x35ef0044  ori         $t7, $t7, 0x44
    ctx->pc = 0x14b2acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)68);
    // 0x14b2b0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x14b2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x14b2b4: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x14b2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x14b2b8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x14b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x14b2bc: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14b2c0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b2c4: 0x2b44821  addu        $t1, $s5, $s4
    ctx->pc = 0x14b2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x14b2c8: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x14b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x14b2cc: 0x240300a9  addiu       $v1, $zero, 0xA9
    ctx->pc = 0x14b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x14b2d0: 0xfe2b0000  sd          $t3, 0x0($s1)
    ctx->pc = 0x14b2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 11));
    // 0x14b2d4: 0x3c0c3000  lui         $t4, 0x3000
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)12288 << 16));
    // 0x14b2d8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b2dc: 0x3c080fff  lui         $t0, 0xFFF
    ctx->pc = 0x14b2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
    // 0x14b2e0: 0xfe2a0008  sd          $t2, 0x8($s1)
    ctx->pc = 0x14b2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 10));
    // 0x14b2e4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x14b2e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x14b2e8: 0xfe2e0000  sd          $t6, 0x0($s1)
    ctx->pc = 0x14b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 14));
    // 0x14b2ec: 0x3d46821  addu        $t5, $fp, $s4
    ctx->pc = 0x14b2ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x14b2f0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b2f4: 0x3c0b3000  lui         $t3, 0x3000
    ctx->pc = 0x14b2f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)12288 << 16));
    // 0x14b2f8: 0x356b0015  ori         $t3, $t3, 0x15
    ctx->pc = 0x14b2f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)21);
    // 0x14b2fc: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x14b2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x14b300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b304: 0xfe2f0000  sd          $t7, 0x0($s1)
    ctx->pc = 0x14b304u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 15));
    // 0x14b308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b30c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b310: 0x924602b4  lbu         $a2, 0x2B4($s2)
    ctx->pc = 0x14b310u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x14b314: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x14b314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14b318: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x14b318u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14b31c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14b320: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x14b320u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14b324: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x14b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x14b328: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x14b328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14b32c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14b32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14b330: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x14b330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x14b334: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14b334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x14b338: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14b338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14b33c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14b33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14b340: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b344: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x14b344u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x14b348: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b34c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x14b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14b350: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14b350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14b354: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x14b354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x14b358: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14b358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x14b35c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14b360: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x14b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x14b364: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x14b364u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x14b368: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14b368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14b36c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x14b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x14b370: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14b370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14b374: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14B374u;
    SET_GPR_U32(ctx, 31, 0x14B37Cu);
    ctx->pc = 0x14B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B374u;
    // 0x14b378: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14B374u, 0x14B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B37Cu;
label_14b37c:
    // 0x14b37c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x14b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x14b380: 0x8e4502c0  lw          $a1, 0x2C0($s2)
    ctx->pc = 0x14b380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x14b384: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b388: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14B388u;
    {
        const bool branch_taken_0x14b388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B388u;
        // 0x14b38c: 0x30624080  andi        $v0, $v1, 0x4080 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b388) {
            ctx->pc = 0x14B410u;
            goto label_14b410;
        }
    }
    ctx->pc = 0x14B390u;
    // 0x14b390: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B390u;
    {
        const bool branch_taken_0x14b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b390) {
            ctx->pc = 0x14B3D4u;
            goto label_14b3d4;
        }
    }
    ctx->pc = 0x14B398u;
    // 0x14b398: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B398u;
    {
        const bool branch_taken_0x14b398 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B398u;
        // 0x14b39c: 0x26044c80  addiu       $a0, $s0, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b398) {
            ctx->pc = 0x14B3B8u;
            goto label_14b3b8;
        }
    }
    ctx->pc = 0x14B3A0u;
    // 0x14b3a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14b3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3a8: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B3A8u;
    SET_GPR_U32(ctx, 31, 0x14B3B0u);
    ctx->pc = 0x14B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3A8u;
    // 0x14b3ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B3A8u, 0x14B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B0u;
label_14b3b0:
    // 0x14b3b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14B3B0u;
    {
        const bool branch_taken_0x14b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3B0u;
        // 0x14b3b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3b0) {
            ctx->pc = 0x14B440u;
            goto label_14b440;
        }
    }
    ctx->pc = 0x14B3B8u;
label_14b3b8:
    // 0x14b3b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14b3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14b3c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3c4: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B3C4u;
    SET_GPR_U32(ctx, 31, 0x14B3CCu);
    ctx->pc = 0x14B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3C4u;
    // 0x14b3c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B3C4u, 0x14B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3CCu;
label_14b3cc:
    // 0x14b3cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14B3CCu;
    {
        const bool branch_taken_0x14b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3CCu;
        // 0x14b3d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3cc) {
            ctx->pc = 0x14B440u;
            goto label_14b440;
        }
    }
    ctx->pc = 0x14B3D4u;
label_14b3d4:
    // 0x14b3d4: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B3D4u;
    {
        const bool branch_taken_0x14b3d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3D4u;
        // 0x14b3d8: 0x26044c80  addiu       $a0, $s0, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3d4) {
            ctx->pc = 0x14B3F4u;
            goto label_14b3f4;
        }
    }
    ctx->pc = 0x14B3DCu;
    // 0x14b3dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b3e4: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B3E4u;
    SET_GPR_U32(ctx, 31, 0x14B3ECu);
    ctx->pc = 0x14B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3E4u;
    // 0x14b3e8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B3E4u, 0x14B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3ECu;
label_14b3ec:
    // 0x14b3ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14B3ECu;
    {
        const bool branch_taken_0x14b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ECu;
        // 0x14b3f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3ec) {
            ctx->pc = 0x14B440u;
            goto label_14b440;
        }
    }
    ctx->pc = 0x14B3F4u;
label_14b3f4:
    // 0x14b3f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14b3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b400: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B400u;
    SET_GPR_U32(ctx, 31, 0x14B408u);
    ctx->pc = 0x14B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B400u;
    // 0x14b404: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B400u, 0x14B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B408u;
label_14b408:
    // 0x14b408: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14B408u;
    {
        const bool branch_taken_0x14b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B408u;
        // 0x14b40c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b408) {
            ctx->pc = 0x14B440u;
            goto label_14b440;
        }
    }
    ctx->pc = 0x14B410u;
label_14b410:
    // 0x14b410: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B410u;
    {
        const bool branch_taken_0x14b410 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B410u;
        // 0x14b414: 0x864602ac  lh          $a2, 0x2AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b410) {
            ctx->pc = 0x14B42Cu;
            goto label_14b42c;
        }
    }
    ctx->pc = 0x14B418u;
    // 0x14b418: 0x26044c80  addiu       $a0, $s0, 0x4C80
    ctx->pc = 0x14b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
    // 0x14b41c: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B41Cu;
    SET_GPR_U32(ctx, 31, 0x14B424u);
    ctx->pc = 0x14B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B41Cu;
    // 0x14b420: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B41Cu, 0x14B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B424u;
label_14b424:
    // 0x14b424: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14B424u;
    {
        const bool branch_taken_0x14b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B424u;
        // 0x14b428: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b424) {
            ctx->pc = 0x14B440u;
            goto label_14b440;
        }
    }
    ctx->pc = 0x14B42Cu;
label_14b42c:
    // 0x14b42c: 0x26044c80  addiu       $a0, $s0, 0x4C80
    ctx->pc = 0x14b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
    // 0x14b430: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14b430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b434: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B434u;
    SET_GPR_U32(ctx, 31, 0x14B43Cu);
    ctx->pc = 0x14B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B434u;
    // 0x14b438: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B434u, 0x14B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B43Cu;
label_14b43c:
    // 0x14b43c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14b43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_14b440:
    // 0x14b440: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x14b440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14b444: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x14b444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b448: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x14b448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b44c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14b44cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b450: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14b450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b454: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x14b454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b458: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x14b458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b45c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x14b45cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b464: 0x3e00008  jr          $ra
    ctx->pc = 0x14B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B464u;
        // 0x14b468: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B46Cu;
    // 0x14b46c: 0x0  nop
    ctx->pc = 0x14b46cu;
    // NOP
    ctx->pc = 0x14b470u;
}
