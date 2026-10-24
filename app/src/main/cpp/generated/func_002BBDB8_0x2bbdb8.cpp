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

// Function: func_002BBDB8
// Address: 0x2bbdb8 - 0x2bc0f8
void func_002BBDB8_0x2bbdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BBDB8_0x2bbdb8");
#endif

    switch (ctx->pc) {
        case 0x2bbe2cu: goto label_2bbe2c;
        case 0x2bbe4cu: goto label_2bbe4c;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbf70u: goto label_2bbf70;
        case 0x2bbf8cu: goto label_2bbf8c;
        case 0x2bbfecu: goto label_2bbfec;
        case 0x2bc0b4u: goto label_2bc0b4;
        default: break;
    }

    ctx->pc = 0x2bbdb8u;

    // 0x2bbdb8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2bbdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2bbdbc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2bbdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2bbdc0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2bbdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2bbdc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbdc8: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x2bbdc8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2bbdcc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bbdccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbdd0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2bbdd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2bbdd4: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x2bbdd4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2bbdd8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2bbdd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2bbddc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2bbddcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2bbde0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bbde0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bbde4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2bbde4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2bbde8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2bbde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2bbdec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bbdecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bbdf0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2bbdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2bbdf4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2bbdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2bbdf8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2bbdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2bbdfc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bbdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bbe00: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x2bbe00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2bbe04: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bbe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbe08: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bbe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbe0c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbe10: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2bbe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbe14: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2bbe14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bbe18: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2bbe18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bbe1c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bbe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbe20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe24: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BBE24u;
    SET_GPR_U32(ctx, 31, 0x2BBE2Cu);
    ctx->pc = 0x2BBE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE24u;
    // 0x2bbe28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BBE24u, 0x2BBE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE2Cu;
label_2bbe2c:
    // 0x2bbe2c: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2bbe2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bbe30: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x2bbe30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bbe34: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bbe34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bbe38: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bbe38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbe3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bbe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe44: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BBE44u;
    SET_GPR_U32(ctx, 31, 0x2BBE4Cu);
    ctx->pc = 0x2BBE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE44u;
    // 0x2bbe48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BBE44u, 0x2BBE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE4Cu;
label_2bbe4c:
    // 0x2bbe4c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bbe4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbe50: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bbe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbe54: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbe58: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bbe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbe5c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bbe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbe60: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bbe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bbe64: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bbe64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bbe68: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2bbe68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bbe6c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bbe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbe70: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bbe70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bbe74: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bbe74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbe78: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bbe78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbe7c: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bbe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbe80: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bbe80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbe84: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bbe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbe88: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbe8c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bbe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbe90: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bbe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbe94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bbe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bbe98: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bbe98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bbe9c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bbe9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bbea0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bbea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbea4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2bbea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2bbea8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BBEA8u;
    SET_GPR_U32(ctx, 31, 0x2BBEB0u);
    ctx->pc = 0x2BBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEA8u;
    // 0x2bbeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BBEA8u, 0x2BBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEB0u;
label_2bbeb0:
    // 0x2bbeb0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2bbeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbeb4: 0x0  nop
    ctx->pc = 0x2bbeb4u;
    // NOP
    // 0x2bbeb8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBEB8u;
    {
        const bool branch_taken_0x2bbeb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEB8u;
        // 0x2bbebc: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbeb8) {
            ctx->pc = 0x2BBEFCu;
            goto label_2bbefc;
        }
    }
    ctx->pc = 0x2BBEC0u;
    // 0x2bbec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bbec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bbec4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bbec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bbec8: 0x0  nop
    ctx->pc = 0x2bbec8u;
    // NOP
    // 0x2bbecc: 0x0  nop
    ctx->pc = 0x2bbeccu;
    // NOP
    // 0x2bbed0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2bbed0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x2bbed4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bbed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bbed8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bbed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bbedc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2bbedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbee0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bbee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bbee4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2bbee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bbee8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2bbee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbeec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bbeecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bbef0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2bbef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bbef4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2bbef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbef8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2bbef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2bbefc:
    // 0x2bbefc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bbefcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbf00: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bbf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbf04: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbf08: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bbf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbf0c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbf10: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bbf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bbf14: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bbf14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bbf18: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bbf18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bbf1c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bbf1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbf20: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2bbf20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bbf24: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bbf24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bbf28: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bbf28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbf2c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bbf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbf30: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bbf30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbf34: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bbf34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbf38: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bbf38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbf3c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bbf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbf40: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bbf40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf44: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bbf44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbf48: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bbf48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbf4c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bbf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbf50: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x2bbf50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2bbf54: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bbf54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbf58: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2bbf58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bbf5c: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x2bbf5cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2bbf60: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bbf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf68: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BBF68u;
    SET_GPR_U32(ctx, 31, 0x2BBF70u);
    ctx->pc = 0x2BBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF68u;
    // 0x2bbf6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BBF68u, 0x2BBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF70u;
label_2bbf70:
    // 0x2bbf70: 0xe7b80034  swc1        $f24, 0x34($sp)
    ctx->pc = 0x2bbf70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bbf74: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bbf74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bbf78: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bbf78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbf7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bbf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf84: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BBF84u;
    SET_GPR_U32(ctx, 31, 0x2BBF8Cu);
    ctx->pc = 0x2BBF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF84u;
    // 0x2bbf88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BBF84u, 0x2BBF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF8Cu;
label_2bbf8c:
    // 0x2bbf8c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bbf8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbf90: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bbf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbf94: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbf98: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbf9c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbfa0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bbfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bbfa4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bbfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bbfa8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bbfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bbfac: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbfb0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bbfb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bbfb4: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2bbfb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbfb8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bbfb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbfbc: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bbfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbfc0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bbfc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bbfc4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bbfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbfc8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbfcc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bbfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbfd0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bbfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbfd4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bbfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bbfd8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bbfd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bbfdc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bbfdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bbfe0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bbfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbfe4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BBFE4u;
    SET_GPR_U32(ctx, 31, 0x2BBFECu);
    ctx->pc = 0x2BBFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFE4u;
    // 0x2bbfe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BBFE4u, 0x2BBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBFECu;
label_2bbfec:
    // 0x2bbfec: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2bbfecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbff0: 0x0  nop
    ctx->pc = 0x2bbff0u;
    // NOP
    // 0x2bbff4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBFF4u;
    {
        const bool branch_taken_0x2bbff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFF4u;
        // 0x2bbff8: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbff4) {
            ctx->pc = 0x2BC038u;
            goto label_2bc038;
        }
    }
    ctx->pc = 0x2BBFFCu;
    // 0x2bbffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bbffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc000: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bc000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc004: 0x0  nop
    ctx->pc = 0x2bc004u;
    // NOP
    // 0x2bc008: 0x0  nop
    ctx->pc = 0x2bc008u;
    // NOP
    // 0x2bc00c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2bc00cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x2bc010: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bc010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bc014: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bc014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc018: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2bc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc01c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc020: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2bc020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bc024: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2bc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc028: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bc028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bc02c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2bc02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bc030: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2bc030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc034: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2bc034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2bc038:
    // 0x2bc038: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bc038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc03c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc040: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc044: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc048: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc04c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bc050: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bc054: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc058: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc05c: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2bc05cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bc060: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bc060u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bc064: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bc064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc068: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc06c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bc06cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc070: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bc070u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc074: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc078: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bc078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc07c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bc07cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc080: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bc080u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc084: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc088: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bc088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc08c: 0x4615abc0  add.s       $f15, $f21, $f21
    ctx->pc = 0x2bc08cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x2bc090: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bc090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc094: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bc098: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2bc098u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2bc09c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2bc0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0a4: 0x460fc3c1  sub.s       $f15, $f24, $f15
    ctx->pc = 0x2bc0a4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[24], ctx->f[15]);
    // 0x2bc0a8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2bc0a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2bc0ac: 0xc0af03e  jal         func_2BC0F8
    ctx->pc = 0x2BC0ACu;
    SET_GPR_U32(ctx, 31, 0x2BC0B4u);
    ctx->pc = 0x2BC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0ACu;
    // 0x2bc0b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F8u, 0x2BC0ACu, 0x2BC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0B4u;
label_2bc0b4:
    // 0x2bc0b4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2bc0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc0b8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2bc0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc0bc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2bc0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bc0c0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2bc0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc0c4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2bc0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc0c8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2bc0c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc0cc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bc0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc0d0: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x2bc0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2bc0d4: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x2bc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bc0d8: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2bc0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bc0dc: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2bc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bc0e0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bc0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0E4u;
        // 0x2bc0e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC0ECu;
    // 0x2bc0ec: 0x0  nop
    ctx->pc = 0x2bc0ecu;
    // NOP
    // 0x2bc0f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bc0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bc0f4: 0x0  nop
    ctx->pc = 0x2bc0f4u;
    // NOP
    ctx->pc = 0x2bc0f8u;
}
