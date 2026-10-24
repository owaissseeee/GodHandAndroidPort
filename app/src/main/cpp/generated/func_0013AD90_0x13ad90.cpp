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

// Function: func_0013AD90
// Address: 0x13ad90 - 0x13b388
void func_0013AD90_0x13ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013AD90_0x13ad90");
#endif

    switch (ctx->pc) {
        case 0x13add8u: goto label_13add8;
        case 0x13adfcu: goto label_13adfc;
        case 0x13ae34u: goto label_13ae34;
        case 0x13aea0u: goto label_13aea0;
        case 0x13aeb4u: goto label_13aeb4;
        case 0x13aebcu: goto label_13aebc;
        case 0x13aed0u: goto label_13aed0;
        case 0x13af50u: goto label_13af50;
        case 0x13af70u: goto label_13af70;
        case 0x13afb8u: goto label_13afb8;
        case 0x13afc8u: goto label_13afc8;
        case 0x13b028u: goto label_13b028;
        case 0x13b03cu: goto label_13b03c;
        case 0x13b080u: goto label_13b080;
        case 0x13b098u: goto label_13b098;
        case 0x13b114u: goto label_13b114;
        case 0x13b124u: goto label_13b124;
        case 0x13b13cu: goto label_13b13c;
        case 0x13b15cu: goto label_13b15c;
        case 0x13b198u: goto label_13b198;
        default: break;
    }

    ctx->pc = 0x13ad90u;

    // 0x13ad90: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x13ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x13ad94: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x13ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x13ad98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ad98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad9c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x13ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x13ada0: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x13ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x13ada4: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x13ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x13ada8: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x13ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x13adac: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x13adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x13adb0: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x13adb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x13adb4: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x13adb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x13adb8: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x13adb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x13adbc: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x13adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13adc0: 0x8e220518  lw          $v0, 0x518($s1)
    ctx->pc = 0x13adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x13adc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADC4u;
    {
        const bool branch_taken_0x13adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADC4u;
        // 0x13adc8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adc4) {
            ctx->pc = 0x13ADD0u;
            goto label_13add0;
        }
    }
    ctx->pc = 0x13ADCCu;
    // 0x13adcc: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x13adccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
label_13add0:
    // 0x13add0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13ADD0u;
    SET_GPR_U32(ctx, 31, 0x13ADD8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13ADD0u, 0x13ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADD8u;
label_13add8:
    // 0x13add8: 0xc45415f0  lwc1        $f20, 0x15F0($v0)
    ctx->pc = 0x13add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13addc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x13addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13ade0: 0x8e2503f0  lw          $a1, 0x3F0($s1)
    ctx->pc = 0x13ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13ade4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ade8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ade8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13adecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13adf0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13adf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x13adf4: 0xc051dca  jal         func_147728
    ctx->pc = 0x13ADF4u;
    SET_GPR_U32(ctx, 31, 0x13ADFCu);
    ctx->pc = 0x13ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ADF4u;
    // 0x13adf8: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13ADF4u, 0x13ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADFCu;
label_13adfc:
    // 0x13adfc: 0x8e2303f0  lw          $v1, 0x3F0($s1)
    ctx->pc = 0x13adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13ae00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13ae04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ae08: 0x26260400  addiu       $a2, $s1, 0x400
    ctx->pc = 0x13ae08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x13ae0c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13ae10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae14: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x13ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x13ae18: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13ae1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae20: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x13ae20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13ae24: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13ae28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae2c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13AE2Cu;
    SET_GPR_U32(ctx, 31, 0x13AE34u);
    ctx->pc = 0x13AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE2Cu;
    // 0x13ae30: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13AE2Cu, 0x13AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE34u;
label_13ae34:
    // 0x13ae34: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x13ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13ae38: 0x4614b181  sub.s       $f6, $f22, $f20
    ctx->pc = 0x13ae38u;
    ctx->f[6] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x13ae3c: 0xc6200510  lwc1        $f0, 0x510($s1)
    ctx->pc = 0x13ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae40: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x13ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ae44: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x13ae44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x13ae48: 0xc6240200  lwc1        $f4, 0x200($s1)
    ctx->pc = 0x13ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ae4c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x13ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae50: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x13ae50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x13ae54: 0xc6220204  lwc1        $f2, 0x204($s1)
    ctx->pc = 0x13ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ae58: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x13ae58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x13ae5c: 0xc6230208  lwc1        $f3, 0x208($s1)
    ctx->pc = 0x13ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ae60: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x13ae60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x13ae64: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13ae64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x13ae68: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x13ae68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x13ae6c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x13ae6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x13ae70: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x13ae70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x13ae74: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x13ae74u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x13ae78: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x13ae78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x13ae7c: 0xe6220204  swc1        $f2, 0x204($s1)
    ctx->pc = 0x13ae7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x13ae80: 0xe6240200  swc1        $f4, 0x200($s1)
    ctx->pc = 0x13ae80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x13ae84: 0xe6230208  swc1        $f3, 0x208($s1)
    ctx->pc = 0x13ae84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
    // 0x13ae88: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x13ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13ae8c: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x13ae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13ae90: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x13ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x13ae94: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x13ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x13ae98: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13AE98u;
    SET_GPR_U32(ctx, 31, 0x13AEA0u);
    ctx->pc = 0x13AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE98u;
    // 0x13ae9c: 0xe7b60098  swc1        $f22, 0x98($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13AE98u, 0x13AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEA0u;
label_13aea0:
    // 0x13aea0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13aea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13aea4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13aea8: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x13aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x13aeac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13AEACu;
    SET_GPR_U32(ctx, 31, 0x13AEB4u);
    ctx->pc = 0x13AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEACu;
    // 0x13aeb0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13AEACu, 0x13AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEB4u;
label_13aeb4:
    // 0x13aeb4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13AEB4u;
    SET_GPR_U32(ctx, 31, 0x13AEBCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13AEB4u, 0x13AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEBCu;
label_13aebc:
    // 0x13aebc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13aec0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aec4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x13aec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x13aec8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13AEC8u;
    SET_GPR_U32(ctx, 31, 0x13AED0u);
    ctx->pc = 0x13AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEC8u;
    // 0x13aecc: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13AEC8u, 0x13AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AED0u;
label_13aed0:
    // 0x13aed0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x13aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13aed4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13aed8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13AED8u;
    {
        const bool branch_taken_0x13aed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AED8u;
        // 0x13aedc: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aed8) {
            ctx->pc = 0x13AEFCu;
            goto label_13aefc;
        }
    }
    ctx->pc = 0x13AEE0u;
    // 0x13aee0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aee4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x13aee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x13aee8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aeec: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x13aeecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13aef0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aef4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x13aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x13aef8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x13aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13aefc:
    // 0x13aefc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13aefcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13af00: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x13af00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x13af04: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x13af04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13af08: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x13af08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x13af0c: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x13af0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13af10: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x13af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x13af14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x13af14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x13af18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13af18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13af1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13af1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af20: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x13af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13af24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13af24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af28: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x13af28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x13af2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13af2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x13af30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x13af34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13af34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af38: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x13af38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x13af3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x13af3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13af40: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x13af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x13af44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13af44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af48: 0xc04bb58  jal         func_12ED60
    ctx->pc = 0x13AF48u;
    SET_GPR_U32(ctx, 31, 0x13AF50u);
    ctx->pc = 0x13AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF48u;
    // 0x13af4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED60u, 0x13AF48u, 0x13AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF50u;
label_13af50:
    // 0x13af50: 0x10520025  beq         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x13AF50u;
    {
        const bool branch_taken_0x13af50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x13AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF50u;
        // 0x13af54: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af50) {
            ctx->pc = 0x13AFE8u;
            goto label_13afe8;
        }
    }
    ctx->pc = 0x13AF58u;
    // 0x13af58: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x13af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af5c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x13af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13af60: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x13af60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x13af64: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x13af64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13af68: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13AF68u;
    SET_GPR_U32(ctx, 31, 0x13AF70u);
    ctx->pc = 0x13AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF68u;
    // 0x13af6c: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13AF68u, 0x13AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF70u;
label_13af70:
    // 0x13af70: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13af74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13af78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13af7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af80: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13af80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13af84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x13af88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x13af8c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13af90: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x13af90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x13af94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13af94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13af98: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x13af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x13af9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13af9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afa0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x13afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x13afa4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13afa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afa8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x13afa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13afac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13afacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afb0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x13AFB0u;
    SET_GPR_U32(ctx, 31, 0x13AFB8u);
    ctx->pc = 0x13AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AFB0u;
    // 0x13afb4: 0xafb20020  sw          $s2, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x13AFB0u, 0x13AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFB8u;
label_13afb8:
    // 0x13afb8: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AFB8u;
    {
        const bool branch_taken_0x13afb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x13afb8) {
            ctx->pc = 0x13AFD8u;
            goto label_13afd8;
        }
    }
    ctx->pc = 0x13AFC0u;
    // 0x13afc0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13AFC0u;
    SET_GPR_U32(ctx, 31, 0x13AFC8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13AFC0u, 0x13AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFC8u;
label_13afc8:
    // 0x13afc8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13afcc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x13afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13afd0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13afd4: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x13afd4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13afd8:
    // 0x13afd8: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x13afdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13afdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13afe0: 0x0  nop
    ctx->pc = 0x13afe0u;
    // NOP
    // 0x13afe4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x13afe4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_13afe8:
    // 0x13afe8: 0xc6210514  lwc1        $f1, 0x514($s1)
    ctx->pc = 0x13afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13afec: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x13aff0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13aff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13aff4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13aff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13aff8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x13affc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13affcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13b000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b004: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13b004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13b008: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x13b008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x13b00c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b00cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b010: 0xe6210514  swc1        $f1, 0x514($s1)
    ctx->pc = 0x13b010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1300), bits); }
    // 0x13b014: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x13b014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13b018: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x13b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13b01c: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x13b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13b020: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13B020u;
    SET_GPR_U32(ctx, 31, 0x13B028u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13B020u, 0x13B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B028u;
label_13b028:
    // 0x13b028: 0x8c430640  lw          $v1, 0x640($v0)
    ctx->pc = 0x13b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x13b02c: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x13B02Cu;
    {
        const bool branch_taken_0x13b02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b02c) {
            ctx->pc = 0x13B030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B02Cu;
            // 0x13b030: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B0A8u;
            goto label_13b0a8;
        }
    }
    ctx->pc = 0x13B034u;
    // 0x13b034: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13B034u;
    SET_GPR_U32(ctx, 31, 0x13B03Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13B034u, 0x13B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B03Cu;
label_13b03c:
    // 0x13b03c: 0x8c430640  lw          $v1, 0x640($v0)
    ctx->pc = 0x13b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x13b040: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x13b040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x13b044: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x13b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x13b048: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x13b04c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B04Cu;
    {
        const bool branch_taken_0x13b04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B04Cu;
        // 0x13b050: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b04c) {
            ctx->pc = 0x13B058u;
            goto label_13b058;
        }
    }
    ctx->pc = 0x13B054u;
    // 0x13b054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b058:
    // 0x13b058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b05c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13B05Cu;
    {
        const bool branch_taken_0x13b05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B05Cu;
        // 0x13b060: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b05c) {
            ctx->pc = 0x13B0A8u;
            goto label_13b0a8;
        }
    }
    ctx->pc = 0x13B064u;
    // 0x13b064: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x13b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13b068: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x13b068u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x13b06c: 0xc6200414  lwc1        $f0, 0x414($s1)
    ctx->pc = 0x13b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b070: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x13b070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b074: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x13b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b078: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x13B078u;
    SET_GPR_U32(ctx, 31, 0x13B080u);
    ctx->pc = 0x13B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B078u;
    // 0x13b07c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x13B078u, 0x13B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B080u;
label_13b080:
    // 0x13b080: 0xc60cd6dc  lwc1        $f12, -0x2924($s0)
    ctx->pc = 0x13b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b084: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x13b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x13b088: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13b088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x13b08c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x13b08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x13b090: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x13B090u;
    SET_GPR_U32(ctx, 31, 0x13B098u);
    ctx->pc = 0x13B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B090u;
    // 0x13b094: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x13B090u, 0x13B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B098u;
label_13b098:
    // 0x13b098: 0xc601d6dc  lwc1        $f1, -0x2924($s0)
    ctx->pc = 0x13b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b09c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b09cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b0a0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13B0A0u;
    {
        const bool branch_taken_0x13b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0A0u;
        // 0x13b0a4: 0xe601d6dc  swc1        $f1, -0x2924($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294956764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0a0) {
            ctx->pc = 0x13B11Cu;
            goto label_13b11c;
        }
    }
    ctx->pc = 0x13B0A8u;
label_13b0a8:
    // 0x13b0a8: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x13b0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x13b0ac: 0x8c6474a0  lw          $a0, 0x74A0($v1)
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29856)));
    // 0x13b0b0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x13b0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x13b0b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B0B4u;
    {
        const bool branch_taken_0x13b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0B4u;
        // 0x13b0b8: 0x246374a0  addiu       $v1, $v1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0b4) {
            ctx->pc = 0x13B0D8u;
            goto label_13b0d8;
        }
    }
    ctx->pc = 0x13B0BCu;
    // 0x13b0bc: 0xc640d6dc  lwc1        $f0, -0x2924($s2)
    ctx->pc = 0x13b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b0c0: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x13b0c4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b0c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b0cc: 0x0  nop
    ctx->pc = 0x13b0ccu;
    // NOP
    // 0x13b0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13b0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13b0d4: 0xe640d6dc  swc1        $f0, -0x2924($s2)
    ctx->pc = 0x13b0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294956764), bits); }
label_13b0d8:
    // 0x13b0d8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x13b0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x13b0dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B0DCu;
    {
        const bool branch_taken_0x13b0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0DCu;
        // 0x13b0e0: 0xc640d6dc  lwc1        $f0, -0x2924($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0dc) {
            ctx->pc = 0x13B0FCu;
            goto label_13b0fc;
        }
    }
    ctx->pc = 0x13B0E4u;
    // 0x13b0e4: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x13b0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x13b0e8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b0ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b0f0: 0x0  nop
    ctx->pc = 0x13b0f0u;
    // NOP
    // 0x13b0f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13b0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13b0f8: 0xe640d6dc  swc1        $f0, -0x2924($s2)
    ctx->pc = 0x13b0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294956764), bits); }
label_13b0fc:
    // 0x13b0fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13b100: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13b100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13b104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B104u;
    {
        const bool branch_taken_0x13b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b104) {
            ctx->pc = 0x13B11Cu;
            goto label_13b11c;
        }
    }
    ctx->pc = 0x13B10Cu;
    // 0x13b10c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13B10Cu;
    SET_GPR_U32(ctx, 31, 0x13B114u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13B10Cu, 0x13B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B114u;
label_13b114:
    // 0x13b114: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x13b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b118: 0xe640d6dc  swc1        $f0, -0x2924($s2)
    ctx->pc = 0x13b118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294956764), bits); }
label_13b11c:
    // 0x13b11c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x13B11Cu;
    SET_GPR_U32(ctx, 31, 0x13B124u);
    ctx->pc = 0x13B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B11Cu;
    // 0x13b120: 0xc64cd6dc  lwc1        $f12, -0x2924($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x13B11Cu, 0x13B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B124u;
label_13b124:
    // 0x13b124: 0xe640d6dc  swc1        $f0, -0x2924($s2)
    ctx->pc = 0x13b124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294956764), bits); }
    // 0x13b128: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x13b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13b12c: 0xc6200410  lwc1        $f0, 0x410($s1)
    ctx->pc = 0x13b12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b130: 0xc44c0100  lwc1        $f12, 0x100($v0)
    ctx->pc = 0x13b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b134: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x13B134u;
    SET_GPR_U32(ctx, 31, 0x13B13Cu);
    ctx->pc = 0x13B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B134u;
    // 0x13b138: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x13B134u, 0x13B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B13Cu;
label_13b13c:
    // 0x13b13c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x13b13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13b140: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b144: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x13b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13b148: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b14c: 0xc640d6dc  lwc1        $f0, -0x2924($s2)
    ctx->pc = 0x13b14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b150: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x13b150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x13b154: 0xc051dca  jal         func_147728
    ctx->pc = 0x13B154u;
    SET_GPR_U32(ctx, 31, 0x13B15Cu);
    ctx->pc = 0x13B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B154u;
    // 0x13b158: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13B154u, 0x13B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B15Cu;
label_13b15c:
    // 0x13b15c: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x13b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b160: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13b164: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x13b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b168: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b16c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13b16cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13b170: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x13b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b174: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x13b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b178: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x13b178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13b17c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x13b17cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x13b180: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x13b180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13b184: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x13b184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x13b188: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x13b188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x13b18c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x13b190: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13B190u;
    SET_GPR_U32(ctx, 31, 0x13B198u);
    ctx->pc = 0x13B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B190u;
    // 0x13b194: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13B190u, 0x13B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B198u;
label_13b198:
    // 0x13b198: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x13b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b19c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13b1a0: 0xc6230514  lwc1        $f3, 0x514($s1)
    ctx->pc = 0x13b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b1a4: 0x262303d0  addiu       $v1, $s1, 0x3D0
    ctx->pc = 0x13b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
    // 0x13b1a8: 0xc6210510  lwc1        $f1, 0x510($s1)
    ctx->pc = 0x13b1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b1ac: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x13b1b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13b1b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x13b1b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b1b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x13b1b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x13b1bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b1c0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x13b1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x13b1c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13b1c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13b1c8: 0xc7a700b0  lwc1        $f7, 0xB0($sp)
    ctx->pc = 0x13b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x13b1cc: 0x46143101  sub.s       $f4, $f6, $f20
    ctx->pc = 0x13b1ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[20]);
    // 0x13b1d0: 0xc7a500b8  lwc1        $f5, 0xB8($sp)
    ctx->pc = 0x13b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13b1d4: 0xc6220210  lwc1        $f2, 0x210($s1)
    ctx->pc = 0x13b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b1d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13b1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13b1dc: 0xc6230214  lwc1        $f3, 0x214($s1)
    ctx->pc = 0x13b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b1e0: 0xc6210218  lwc1        $f1, 0x218($s1)
    ctx->pc = 0x13b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b1e4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x13b1e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x13b1e8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13b1e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x13b1ec: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x13b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x13b1f0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13b1f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x13b1f4: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x13b1f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13b1f8: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x13b1f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x13b1fc: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x13b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x13b200: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x13b200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x13b204: 0xe446000c  swc1        $f6, 0xC($v0)
    ctx->pc = 0x13b204u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x13b208: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x13b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x13b20c: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x13b20cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x13b210: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x13b210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x13b214: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x13b214u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x13b218: 0xe6220210  swc1        $f2, 0x210($s1)
    ctx->pc = 0x13b218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x13b21c: 0xe6210218  swc1        $f1, 0x218($s1)
    ctx->pc = 0x13b21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x13b220: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B220u;
    {
        const bool branch_taken_0x13b220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B220u;
        // 0x13b224: 0xe6230214  swc1        $f3, 0x214($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b220) {
            ctx->pc = 0x13B240u;
            goto label_13b240;
        }
    }
    ctx->pc = 0x13B228u;
    // 0x13b228: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x13b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b22c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x13b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b230: 0xe62003d0  swc1        $f0, 0x3D0($s1)
    ctx->pc = 0x13b230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 976), bits); }
    // 0x13b234: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13b234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13b238: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x13b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b23c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13b23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13b240:
    // 0x13b240: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x13b240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13b244: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x13b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13b248: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13b24c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13b24cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b250: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x13b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b254: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x13b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b258: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x13b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x13b25c: 0xc6210404  lwc1        $f1, 0x404($s1)
    ctx->pc = 0x13b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b260: 0x26230200  addiu       $v1, $s1, 0x200
    ctx->pc = 0x13b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x13b264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13b264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13b268: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x13b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x13b26c: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x13b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13b270: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13b270u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b274: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13b274u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b278: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13b278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13b27c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x13b27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b280: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x13b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13b284: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13b284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b288: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x13b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b28c: 0xc7a60100  lwc1        $f6, 0x100($sp)
    ctx->pc = 0x13b28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13b290: 0xc7a70104  lwc1        $f7, 0x104($sp)
    ctx->pc = 0x13b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x13b294: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x13b294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x13b298: 0xc7a50108  lwc1        $f5, 0x108($sp)
    ctx->pc = 0x13b298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13b29c: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x13b29cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x13b2a0: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x13b2a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x13b2a4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x13b2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x13b2a8: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x13b2a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x13b2ac: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x13b2acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x13b2b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13b2b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13b2b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b2b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b2b8: 0x0  nop
    ctx->pc = 0x13b2b8u;
    // NOP
    // 0x13b2bc: 0x0  nop
    ctx->pc = 0x13b2bcu;
    // NOP
    // 0x13b2c0: 0x46010044  c1          0x10044
    ctx->pc = 0x13b2c0u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x13b2c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13b2c8: 0xc6220510  lwc1        $f2, 0x510($s1)
    ctx->pc = 0x13b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b2cc: 0xc440d6d8  lwc1        $f0, -0x2928($v0)
    ctx->pc = 0x13b2ccu;
    { uint32_t bits = FAST_READ32(0x3BD6D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b2d0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x13b2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x13b2d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13b2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13b2d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13b2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b2dc: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x13b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x13b2e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13b2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13b2e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13b2e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x13b2e8: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x13b2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x13b2ec: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x13b2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x13b2f0: 0x0  nop
    ctx->pc = 0x13b2f0u;
    // NOP
    // 0x13b2f4: 0x0  nop
    ctx->pc = 0x13b2f4u;
    // NOP
    // 0x13b2f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13b2f8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x13b2fc: 0x460410c0  add.s       $f3, $f2, $f4
    ctx->pc = 0x13b2fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x13b300: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x13b300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b304: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x13b304u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x13b308: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x13b308u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x13b30c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x13b30cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x13b310: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x13b310u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x13b314: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x13b314u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x13b318: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B318u;
    {
        const bool branch_taken_0x13b318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B318u;
        // 0x13b31c: 0xe7a700e4  swc1        $f7, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b318) {
            ctx->pc = 0x13B324u;
            goto label_13b324;
        }
    }
    ctx->pc = 0x13B320u;
    // 0x13b320: 0x460040c6  mov.s       $f3, $f8
    ctx->pc = 0x13b320u;
    ctx->f[3] = FPU_MOV_S(ctx->f[8]);
label_13b324:
    // 0x13b324: 0xc6200250  lwc1        $f0, 0x250($s1)
    ctx->pc = 0x13b324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b328: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x13b328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x13b32c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x13b32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x13b330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b334: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x13b334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x13b338: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13b338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13b33c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b340: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13b340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13b344: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x13b344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x13b348: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x13b348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x13b34c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x13b34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x13b350: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x13b350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13b354: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x13b354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13b358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13b358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13b35c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x13b35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13b360: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x13b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13b364: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x13b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b368: 0xe6200250  swc1        $f0, 0x250($s1)
    ctx->pc = 0x13b368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    // 0x13b36c: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x13b36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x13b370: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x13b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b374: 0x3e00008  jr          $ra
    ctx->pc = 0x13B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B374u;
        // 0x13b378: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B37Cu;
    // 0x13b37c: 0x0  nop
    ctx->pc = 0x13b37cu;
    // NOP
    // 0x13b380: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x13b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b384: 0x0  nop
    ctx->pc = 0x13b384u;
    // NOP
    ctx->pc = 0x13b388u;
}
