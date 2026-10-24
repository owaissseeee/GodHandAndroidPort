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

// Function: func_001377E8
// Address: 0x1377e8 - 0x137a48
void func_001377E8_0x1377e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001377E8_0x1377e8");
#endif

    switch (ctx->pc) {
        case 0x137880u: goto label_137880;
        case 0x1378e0u: goto label_1378e0;
        case 0x1378f0u: goto label_1378f0;
        default: break;
    }

    ctx->pc = 0x1377e8u;

    // 0x1377e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1377e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1377ec: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1377ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1377f0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1377f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1377f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1377f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1377f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1377fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1377fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137800: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x137800u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x137804: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x137804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137808: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x137808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x13780c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x13780cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x137810: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x137810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x137814: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x137814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x137818: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x137818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13781c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x13781cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x137820: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x137820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x137824: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x137824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x137828: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x137828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13782c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x13782cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137830: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x137830u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x137834: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x137834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137838: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x137838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13783c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13783cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137840: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x137840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137844: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x137844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137848: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x137848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13784c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13784cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137850: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x137850u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137854: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x137854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x137858: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x137858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13785c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x13785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137860: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x137860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137864: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x137864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137868: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x137868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13786c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x13786cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137870: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x137870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137874: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x137874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x137878: 0xc04078a  jal         func_101E28
    ctx->pc = 0x137878u;
    SET_GPR_U32(ctx, 31, 0x137880u);
    ctx->pc = 0x13787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137878u;
    // 0x13787c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x137878u, 0x137880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137880u;
label_137880:
    // 0x137880: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x137880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137884: 0x0  nop
    ctx->pc = 0x137884u;
    // NOP
    // 0x137888: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x137888u;
    {
        const bool branch_taken_0x137888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137888u;
        // 0x13788c: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137888) {
            ctx->pc = 0x1378CCu;
            goto label_1378cc;
        }
    }
    ctx->pc = 0x137890u;
    // 0x137890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137898: 0x0  nop
    ctx->pc = 0x137898u;
    // NOP
    // 0x13789c: 0x0  nop
    ctx->pc = 0x13789cu;
    // NOP
    // 0x1378a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1378a0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1378a4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1378a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1378a8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1378a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1378ac: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1378acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1378b0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1378b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1378b4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1378b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1378b8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1378b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1378bc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1378bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1378c0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1378c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1378c4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1378c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1378c8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1378c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1378cc:
    // 0x1378cc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1378ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1378d0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1378d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1378d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1378d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378d8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1378D8u;
    SET_GPR_U32(ctx, 31, 0x1378E0u);
    ctx->pc = 0x1378DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378D8u;
    // 0x1378dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1378D8u, 0x1378E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378E0u;
label_1378e0:
    // 0x1378e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1378e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1378e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1378e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378e8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1378E8u;
    SET_GPR_U32(ctx, 31, 0x1378F0u);
    ctx->pc = 0x1378ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378E8u;
    // 0x1378ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1378E8u, 0x1378F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378F0u;
label_1378f0:
    // 0x1378f0: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x1378f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x1378f4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1378f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1378f8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1378f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1378fc: 0x0  nop
    ctx->pc = 0x1378fcu;
    // NOP
    // 0x137900: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x137900u;
    {
        const bool branch_taken_0x137900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137900) {
            ctx->pc = 0x137904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137900u;
            // 0x137904: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13791Cu;
            goto label_13791c;
        }
    }
    ctx->pc = 0x137908u;
    // 0x137908: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x137908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13790c: 0x0  nop
    ctx->pc = 0x13790cu;
    // NOP
    // 0x137910: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x137910u;
    {
        const bool branch_taken_0x137910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137910u;
        // 0x137914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137910) {
            ctx->pc = 0x137A10u;
            goto label_137a10;
        }
    }
    ctx->pc = 0x137918u;
    // 0x137918: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x137918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_13791c:
    // 0x13791c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x13791cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x137920: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x137920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x137924: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x137924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137928: 0x0  nop
    ctx->pc = 0x137928u;
    // NOP
    // 0x13792c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x13792Cu;
    {
        const bool branch_taken_0x13792c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13792Cu;
        // 0x137930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13792c) {
            ctx->pc = 0x137A10u;
            goto label_137a10;
        }
    }
    ctx->pc = 0x137934u;
    // 0x137934: 0x0  nop
    ctx->pc = 0x137934u;
    // NOP
    // 0x137938: 0x0  nop
    ctx->pc = 0x137938u;
    // NOP
    // 0x13793c: 0x46000184  c1          0x184
    ctx->pc = 0x13793cu;
    ctx->f[6] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x137940: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x137940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137944: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x137944u;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
    // 0x137948: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x137948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13794c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x13794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137950: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x137950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x137954: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x137954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x137958: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x137958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13795c: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x13795cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x137960: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x137960u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x137964: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x137964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137968: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x137968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13796c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13796cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x137970: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x137970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x137974: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x137974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x137978: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x137978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13797c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13797cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x137980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137984: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x137984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137988: 0x0  nop
    ctx->pc = 0x137988u;
    // NOP
    // 0x13798c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x13798Cu;
    {
        const bool branch_taken_0x13798c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13798Cu;
        // 0x137990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13798c) {
            ctx->pc = 0x137A10u;
            goto label_137a10;
        }
    }
    ctx->pc = 0x137994u;
    // 0x137994: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x137994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137998: 0x0  nop
    ctx->pc = 0x137998u;
    // NOP
    // 0x13799c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13799Cu;
    {
        const bool branch_taken_0x13799c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13799c) {
            ctx->pc = 0x1379A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13799Cu;
            // 0x1379a0: 0x46003946  mov.s       $f5, $f7 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1379A4u;
            goto label_1379a4;
        }
    }
    ctx->pc = 0x1379A4u;
label_1379a4:
    // 0x1379a4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1379A4u;
    {
        const bool branch_taken_0x1379a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1379A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379A4u;
        // 0x1379a8: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379a4) {
            ctx->pc = 0x137A0Cu;
            goto label_137a0c;
        }
    }
    ctx->pc = 0x1379ACu;
    // 0x1379ac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1379acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1379b0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1379b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1379b4: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1379b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1379b8: 0x44082800  mfc1        $t0, $f5
    ctx->pc = 0x1379b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1379bc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1379bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1379c0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1379c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1379c4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1379c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1379c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1379c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1379cc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1379ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1379d0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1379d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1379d4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1379d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1379d8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1379d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1379dc: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1379dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1379e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1379e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1379e4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1379e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1379e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1379e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1379ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1379ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1379f0: 0x12550006  beq         $s2, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1379F0u;
    {
        const bool branch_taken_0x1379f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1379F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379F0u;
        // 0x1379f4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379f0) {
            ctx->pc = 0x137A0Cu;
            goto label_137a0c;
        }
    }
    ctx->pc = 0x1379F8u;
    // 0x1379f8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1379f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1379fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1379fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137a00: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x137a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x137a04: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x137a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x137a08: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x137a08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_137a0c:
    // 0x137a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137a10:
    // 0x137a10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x137a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137a14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x137a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137a18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x137a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137a1c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x137a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137a20: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x137a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137a24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x137a24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137a28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x137a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137a2c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x137a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x137a30: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x137a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x137a34: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x137a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137a38: 0x3e00008  jr          $ra
    ctx->pc = 0x137A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A38u;
        // 0x137a3c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A40u;
    // 0x137a40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x137a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137a44: 0x0  nop
    ctx->pc = 0x137a44u;
    // NOP
    ctx->pc = 0x137a48u;
}
