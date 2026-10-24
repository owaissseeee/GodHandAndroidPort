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

// Function: func_002F3090
// Address: 0x2f3090 - 0x2f34b0
void func_002F3090_0x2f3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F3090_0x2f3090");
#endif

    switch (ctx->pc) {
        case 0x2f30dcu: goto label_2f30dc;
        case 0x2f31acu: goto label_2f31ac;
        case 0x2f3308u: goto label_2f3308;
        case 0x2f3310u: goto label_2f3310;
        case 0x2f3320u: goto label_2f3320;
        case 0x2f3330u: goto label_2f3330;
        case 0x2f3440u: goto label_2f3440;
        case 0x2f344cu: goto label_2f344c;
        case 0x2f3470u: goto label_2f3470;
        default: break;
    }

    ctx->pc = 0x2f3090u;

    // 0x2f3090: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2f3090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2f3094: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2f3094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2f3098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f309c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2f309cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2f30a0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2f30a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2f30a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f30a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30a8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2f30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2f30ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f30acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30b0: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2f30b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2f30b4: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2f30b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2f30b8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2f30b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2f30bc: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2f30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2f30c0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f30c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f30c4: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x2f30c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2f30c8: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x2f30c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2f30cc: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2f30ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2f30d0: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2f30d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2f30d4: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F30D4u;
    SET_GPR_U32(ctx, 31, 0x2F30DCu);
    ctx->pc = 0x2F30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30D4u;
    // 0x2f30d8: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F30D4u, 0x2F30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30DCu;
label_2f30dc:
    // 0x2f30dc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2f30dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f30e0: 0xc60002b8  lwc1        $f0, 0x2B8($s0)
    ctx->pc = 0x2f30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f30e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2f30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2f30e8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f30e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2f30ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f30ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f30f0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2f30f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2f30f4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f30f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f30f8: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2f30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f30fc: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x2f30fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2f3100: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f3100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3104: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f3104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f3108: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x2f3108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2f310c: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x2f310cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2f3110: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f3110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3114: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f3114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2f3118: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2f3118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2f311c: 0x0  nop
    ctx->pc = 0x2f311cu;
    // NOP
    // 0x2f3120: 0x0  nop
    ctx->pc = 0x2f3120u;
    // NOP
    // 0x2f3124: 0x4614ae03  div.s       $f24, $f21, $f20
    ctx->pc = 0x2f3124u;
    ctx->f[24] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[20]);
    // 0x2f3128: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f3128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f312c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3130: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f3130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3134: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x2f3134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3138: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3138u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f313c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f313cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3140: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f3140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3144: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f3144u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f3148: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f314c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2f314cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3150: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x2f3150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2f3154: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f3154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3158: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f3158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f315c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f315cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3160: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x2f3160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3164: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3164u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3168: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f316c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3170: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f3170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f3174: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f3174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3178: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2f3178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f317c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2f317cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3180: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2f3180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f3184: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f3184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f3188: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2f3188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f318c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f318cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3190: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f3190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3194: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2f3194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f3198: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f319c: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2f319cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f31a0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2f31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f31a4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2F31A4u;
    SET_GPR_U32(ctx, 31, 0x2F31ACu);
    ctx->pc = 0x2F31A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31A4u;
    // 0x2f31a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2F31A4u, 0x2F31ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31ACu;
label_2f31ac:
    // 0x2f31ac: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2f31acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2f31b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f31b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f31b4: 0x0  nop
    ctx->pc = 0x2f31b4u;
    // NOP
    // 0x2f31b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f31b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f31bc: 0x0  nop
    ctx->pc = 0x2f31bcu;
    // NOP
    // 0x2f31c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2F31C0u;
    {
        const bool branch_taken_0x2f31c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31C0u;
        // 0x2f31c4: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31c0) {
            ctx->pc = 0x2F31FCu;
            goto label_2f31fc;
        }
    }
    ctx->pc = 0x2F31C8u;
    // 0x2f31c8: 0x0  nop
    ctx->pc = 0x2f31c8u;
    // NOP
    // 0x2f31cc: 0x0  nop
    ctx->pc = 0x2f31ccu;
    // NOP
    // 0x2f31d0: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x2f31d0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[2]);
    // 0x2f31d4: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x2f31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f31d8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2f31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f31dc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f31e0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f31e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2f31e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f31e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f31e8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2f31e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2f31ec: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2f31ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2f31f0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2f31f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2f31f4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2f31f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2f31f8: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x2f31f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2f31fc:
    // 0x2f31fc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f3200: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f3200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3204: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f3204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3208: 0xc60002bc  lwc1        $f0, 0x2BC($s0)
    ctx->pc = 0x2f3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f320c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2f320cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3210: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3214: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f3218: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f3218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f321c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f321cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3220: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3224: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3228: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f3228u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f322c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3230: 0xc60002b8  lwc1        $f0, 0x2B8($s0)
    ctx->pc = 0x2f3230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3234: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f3234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f3238: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2f3238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2f323c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f323cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3240: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3244: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f3248: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f3248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f324c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f324cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3250: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3254: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3258: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f3258u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f325c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3260: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x2f3264: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x2f3264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x2f3268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f326c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2f326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3270: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f3270u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3274: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3278: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f327c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f327cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3280: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3284: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3288: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f328c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f328cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3290: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f3290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3294: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2f3294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3298: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2f3298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f329c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2f329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f32a0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f32a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f32a4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2f32a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f32a8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2f32a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f32ac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f32acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f32b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f32b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f32b4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f32b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f32b8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2f32b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f32bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f32bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f32c0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f32c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f32c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f32c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f32c8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f32cc: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x2f32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f32d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f32d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32d4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2f32d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32d8: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2F32D8u;
    {
        const bool branch_taken_0x2f32d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32D8u;
        // 0x2f32dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32d8) {
            ctx->pc = 0x2F345Cu;
            goto label_2f345c;
        }
    }
    ctx->pc = 0x2F32E0u;
    // 0x2f32e0: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x2f32e0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x2f32e4: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2f32e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2f32e8: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2f32e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2f32ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f32ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f32f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f32f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f32f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f32f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f32f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2f32fc: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x2f32fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f3300: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2f3300u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f3304: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x2f3304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f3308:
    // 0x2f3308: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F3308u;
    SET_GPR_U32(ctx, 31, 0x2F3310u);
    ctx->pc = 0x2F330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3308u;
    // 0x2f330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F3308u, 0x2F3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3310u;
label_2f3310:
    // 0x2f3310: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2f3310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f3314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3318: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F3318u;
    SET_GPR_U32(ctx, 31, 0x2F3320u);
    ctx->pc = 0x2F331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3318u;
    // 0x2f331c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F3318u, 0x2F3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3320u;
label_2f3320:
    // 0x2f3320: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2f3320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f3324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3328: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F3328u;
    SET_GPR_U32(ctx, 31, 0x2F3330u);
    ctx->pc = 0x2F332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3328u;
    // 0x2f332c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F3328u, 0x2F3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3330u;
label_2f3330:
    // 0x2f3330: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2f3330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f3334: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f3334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f3338: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f3338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f333c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3340: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f3340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3344: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x2f3344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3348: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3348u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f334c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f334cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3350: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f3350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3354: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2f3354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f3358: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f3358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f335c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f335cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3360: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2f3360u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f3364: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f3364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3368: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f336c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f336cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3370: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2f3370u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f3374: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f3374u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3378: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f337c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f337cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3380: 0x4408c000  mfc1        $t0, $f24
    ctx->pc = 0x2f3380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3384: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3388: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f338c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3390: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3394: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3398: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2f339c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2f339cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f33a0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f33a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f33a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f33a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f33a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f33a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f33ac: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f33acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f33b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2f33b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f33b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2f33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f33b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f33bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2f33bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2f33c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2f33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2f33c4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2f33c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2f33c8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2f33c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2f33cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f33ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f33d0: 0x0  nop
    ctx->pc = 0x2f33d0u;
    // NOP
    // 0x2f33d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f33d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f33d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f33d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f33dc: 0x0  nop
    ctx->pc = 0x2f33dcu;
    // NOP
    // 0x2f33e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f33e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f33e4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2f33e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f33e8: 0x0  nop
    ctx->pc = 0x2f33e8u;
    // NOP
    // 0x2f33ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f33ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f33f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f33f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f33f4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2f33f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2f33f8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2f33f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2f33fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f33fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f3400: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f3400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f3404: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2f3404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f3408: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f340c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2f340cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f3410: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f3410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3414: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3418: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f341c: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x2f341cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3420: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3420u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3424: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3428: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f342c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2f342cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f3430: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f3430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3438: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F3438u;
    SET_GPR_U32(ctx, 31, 0x2F3440u);
    ctx->pc = 0x2F343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3438u;
    // 0x2f343c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F3438u, 0x2F3440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3440u;
label_2f3440:
    // 0x2f3440: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f3440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f3444: 0xc0bcd2c  jal         func_2F34B0
    ctx->pc = 0x2F3444u;
    SET_GPR_U32(ctx, 31, 0x2F344Cu);
    ctx->pc = 0x2F3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3444u;
    // 0x2f3448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34B0u, 0x2F3444u, 0x2F344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F344Cu;
label_2f344c:
    // 0x2f344c: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x2f344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f3450: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2f3450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f3454: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2F3454u;
    {
        const bool branch_taken_0x2f3454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3454) {
            ctx->pc = 0x2F3308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3308;
        }
    }
    ctx->pc = 0x2F345Cu;
label_2f345c:
    // 0x2f345c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f345cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3460: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3468: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F3468u;
    SET_GPR_U32(ctx, 31, 0x2F3470u);
    ctx->pc = 0x2F346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3468u;
    // 0x2f346c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F3468u, 0x2F3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3470u;
label_2f3470:
    // 0x2f3470: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2f3470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2f3474: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2f3474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2f3478: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2f3478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f347c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2f347cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f3480: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2f3480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f3484: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2f3484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f3488: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2f3488u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f348c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2f348cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f3490: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f3490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f3494: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x2f3494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2f3498: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x2f3498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2f349c: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x2f349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f34a0: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2f34a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f34a4: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2f34a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f34a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F34A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34A8u;
        // 0x2f34ac: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F34A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F34B0u;
}
