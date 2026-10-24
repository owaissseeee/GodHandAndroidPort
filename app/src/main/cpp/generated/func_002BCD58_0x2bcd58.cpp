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

// Function: func_002BCD58
// Address: 0x2bcd58 - 0x2bcf28
void func_002BCD58_0x2bcd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BCD58_0x2bcd58");
#endif

    switch (ctx->pc) {
        case 0x2bcdacu: goto label_2bcdac;
        case 0x2bcdccu: goto label_2bcdcc;
        case 0x2bce2cu: goto label_2bce2c;
        case 0x2bceecu: goto label_2bceec;
        default: break;
    }

    ctx->pc = 0x2bcd58u;

    // 0x2bcd58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2bcd5c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2bcd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2bcd60: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2bcd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2bcd64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bcd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd68: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2bcd68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bcd6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2bcd6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd70: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bcd70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bcd74: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2bcd74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcd78: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2bcd78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2bcd7c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2bcd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2bcd80: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2bcd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2bcd84: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2bcd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2bcd88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bcd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bcd8c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bcd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcd90: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bcd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcd94: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2bcd94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcd98: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2bcd98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcd9c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bcd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcda0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcda4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BCDA4u;
    SET_GPR_U32(ctx, 31, 0x2BCDACu);
    ctx->pc = 0x2BCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDA4u;
    // 0x2bcda8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BCDA4u, 0x2BCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDACu;
label_2bcdac:
    // 0x2bcdac: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2bcdacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bcdb0: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2bcdb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bcdb4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bcdb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bcdb8: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bcdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcdbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcdc4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BCDC4u;
    SET_GPR_U32(ctx, 31, 0x2BCDCCu);
    ctx->pc = 0x2BCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDC4u;
    // 0x2bcdc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BCDC4u, 0x2BCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDCCu;
label_2bcdcc:
    // 0x2bcdcc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bcdccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bcdd0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bcdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcdd4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bcdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdd8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bcdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcddc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bcddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcde0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bcde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bcde4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bcde4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bcde8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2bcde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bcdec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bcdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcdf0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bcdf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bcdf4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bcdf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcdf8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bcdf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bcdfc: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bcdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bce00: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bce00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bce04: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bce08: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bce0c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce10: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bce14: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bce14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bce18: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bce18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bce1c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bce1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bce20: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bce24: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BCE24u;
    SET_GPR_U32(ctx, 31, 0x2BCE2Cu);
    ctx->pc = 0x2BCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE24u;
    // 0x2bce28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BCE24u, 0x2BCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE2Cu;
label_2bce2c:
    // 0x2bce2c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2bce2cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2bce30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bce30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce34: 0x0  nop
    ctx->pc = 0x2bce34u;
    // NOP
    // 0x2bce38: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2bce38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bce3c: 0x0  nop
    ctx->pc = 0x2bce3cu;
    // NOP
    // 0x2bce40: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BCE40u;
    {
        const bool branch_taken_0x2bce40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE40u;
        // 0x2bce44: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce40) {
            ctx->pc = 0x2BCE84u;
            goto label_2bce84;
        }
    }
    ctx->pc = 0x2BCE48u;
    // 0x2bce48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bce4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bce4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bce50: 0x0  nop
    ctx->pc = 0x2bce50u;
    // NOP
    // 0x2bce54: 0x0  nop
    ctx->pc = 0x2bce54u;
    // NOP
    // 0x2bce58: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2bce58u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x2bce5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bce5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bce60: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2bce60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bce64: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2bce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bce68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bce68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bce6c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2bce6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bce70: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2bce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bce74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bce78: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2bce78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bce7c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2bce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bce80: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2bce80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2bce84:
    // 0x2bce84: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bce84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bce88: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bce8c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bce90: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce94: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bce98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bce9c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bce9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bcea0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bcea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bcea4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bcea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bcea8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2bcea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bceac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bceacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bceb0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bceb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bceb4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bceb8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bceb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcebc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bcebcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcec0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bcec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bcec4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bcec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcec8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bcec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcecc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bceccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bced0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bced0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bced4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bced8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcedc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bcedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcee0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bcee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcee4: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BCEE4u;
    SET_GPR_U32(ctx, 31, 0x2BCEECu);
    ctx->pc = 0x2BCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEE4u;
    // 0x2bcee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BCEE4u, 0x2BCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEECu;
label_2bceec:
    // 0x2bceec: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2bceecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcef0: 0x0  nop
    ctx->pc = 0x2bcef0u;
    // NOP
    // 0x2bcef4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCEF4u;
    {
        const bool branch_taken_0x2bcef4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEF4u;
        // 0x2bcef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcef4) {
            ctx->pc = 0x2BCF00u;
            goto label_2bcf00;
        }
    }
    ctx->pc = 0x2BCEFCu;
    // 0x2bcefc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bcefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf00:
    // 0x2bcf00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2bcf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bcf04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2bcf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bcf08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2bcf08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bcf0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2bcf0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bcf10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2bcf10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bcf14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bcf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bcf18: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2bcf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bcf1c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bcf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcf20: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF20u;
        // 0x2bcf24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCF28u;
}
