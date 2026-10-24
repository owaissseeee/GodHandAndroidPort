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

// Function: func_00137670
// Address: 0x137670 - 0x1377e8
void func_00137670_0x137670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00137670_0x137670");
#endif

    switch (ctx->pc) {
        case 0x137710u: goto label_137710;
        case 0x137738u: goto label_137738;
        default: break;
    }

    ctx->pc = 0x137670u;

    // 0x137670: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x137670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x137674: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x137674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x137678: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x137678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x13767c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13767cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137680: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x137680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x137684: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x137684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x137688: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x137688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x13768c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x13768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x137690: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x137690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x137694: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x137694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x137698: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x137698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x13769c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1376a0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1376a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1376a4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1376a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1376a8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1376a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1376ac: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1376acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1376b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1376b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1376b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1376b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1376b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1376bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1376bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1376c0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1376c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1376c4: 0x12050007  beq         $s0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1376C4u;
    {
        const bool branch_taken_0x1376c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1376C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376C4u;
        // 0x1376c8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376c4) {
            ctx->pc = 0x1376E4u;
            goto label_1376e4;
        }
    }
    ctx->pc = 0x1376CCu;
    // 0x1376cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1376ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376d0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1376d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1376d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1376d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1376d8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1376d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1376dc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1376dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1376e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1376e4:
    // 0x1376e4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1376e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1376e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1376ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1376ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1376f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1376f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1376f4: 0x24b40010  addiu       $s4, $a1, 0x10
    ctx->pc = 0x1376f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1376f8: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x1376f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1376fc: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x1376fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137700: 0x24b30050  addiu       $s3, $a1, 0x50
    ctx->pc = 0x137700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x137704: 0x24b20018  addiu       $s2, $a1, 0x18
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x137708: 0x24b10014  addiu       $s1, $a1, 0x14
    ctx->pc = 0x137708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x13770c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x13770cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_137710:
    // 0x137710: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x137710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137718: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x137718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13771c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137720: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x137720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137724: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x137724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x137728: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x137728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13772c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x13772cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x137730: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x137730u;
    SET_GPR_U32(ctx, 31, 0x137738u);
    ctx->pc = 0x137734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137730u;
    // 0x137734: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x137730u, 0x137738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137738u;
label_137738:
    // 0x137738: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x137738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13773c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13773cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137740: 0x0  nop
    ctx->pc = 0x137740u;
    // NOP
    // 0x137744: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137744u;
    {
        const bool branch_taken_0x137744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137744) {
            ctx->pc = 0x137748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137744u;
            // 0x137748: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13774Cu;
            goto label_13774c;
        }
    }
    ctx->pc = 0x13774Cu;
label_13774c:
    // 0x13774c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13774cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x137750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137754: 0x0  nop
    ctx->pc = 0x137754u;
    // NOP
    // 0x137758: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137758u;
    {
        const bool branch_taken_0x137758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137758) {
            ctx->pc = 0x13775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137758u;
            // 0x13775c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137760u;
            goto label_137760;
        }
    }
    ctx->pc = 0x137760u;
label_137760:
    // 0x137760: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x137760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x137764: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x137764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137768: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x137768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13776c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x13776cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x137770: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x137770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x137774: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x137774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x137778: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x137778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13777c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137780: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x137780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137784: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x137784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137788: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x137788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13778c: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x13778cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x137790: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x137790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x137794: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x137794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137798: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x137798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x13779c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13779cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1377a0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1377a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1377a4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1377a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1377a8: 0x6a1ffd9  bgez        $s5, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1377A8u;
    {
        const bool branch_taken_0x1377a8 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x1377ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377A8u;
        // 0x1377ac: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377a8) {
            ctx->pc = 0x137710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137710;
        }
    }
    ctx->pc = 0x1377B0u;
    // 0x1377b0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1377b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1377b4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1377b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1377b8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1377b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1377bc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1377bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1377c0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1377c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1377c4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1377c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1377c8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1377c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1377cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1377ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1377d0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1377d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1377d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1377d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1377d8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1377d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1377dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1377DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377DCu;
        // 0x1377e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1377DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1377E4u;
    // 0x1377e4: 0x0  nop
    ctx->pc = 0x1377e4u;
    // NOP
    ctx->pc = 0x1377e8u;
}
