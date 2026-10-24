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

// Function: func_002AD590
// Address: 0x2ad590 - 0x2ad748
void func_002AD590_0x2ad590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD590_0x2ad590");
#endif

    switch (ctx->pc) {
        case 0x2ad5d8u: goto label_2ad5d8;
        case 0x2ad5e0u: goto label_2ad5e0;
        case 0x2ad5f8u: goto label_2ad5f8;
        case 0x2ad618u: goto label_2ad618;
        default: break;
    }

    ctx->pc = 0x2ad590u;

    // 0x2ad590: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ad590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ad594: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ad594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ad598: 0x8c43238c  lw          $v1, 0x238C($v0)
    ctx->pc = 0x2ad598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C238Cu));
    // 0x2ad59c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ad59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2ad5a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad5a4: 0x0  nop
    ctx->pc = 0x2ad5a4u;
    // NOP
    // 0x2ad5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ad5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ad5ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ad5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2ad5b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ad5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ad5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5b8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2ad5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ad5bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ad5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ad5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ad5c4: 0x0  nop
    ctx->pc = 0x2ad5c4u;
    // NOP
    // 0x2ad5c8: 0x0  nop
    ctx->pc = 0x2ad5c8u;
    // NOP
    // 0x2ad5cc: 0x46006503  div.s       $f20, $f12, $f0
    ctx->pc = 0x2ad5ccu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x2ad5d0: 0x18600056  blez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2AD5D0u;
    {
        const bool branch_taken_0x2ad5d0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2AD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5D0u;
        // 0x2ad5d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5d0) {
            ctx->pc = 0x2AD72Cu;
            goto label_2ad72c;
        }
    }
    ctx->pc = 0x2AD5D8u;
label_2ad5d8:
    // 0x2ad5d8: 0xc0ab5d2  jal         func_2AD748
    ctx->pc = 0x2AD5D8u;
    SET_GPR_U32(ctx, 31, 0x2AD5E0u);
    ctx->pc = 0x2AD5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD5D8u;
    // 0x2ad5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD748u, 0x2AD5D8u, 0x2AD5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD5E0u;
label_2ad5e0:
    // 0x2ad5e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ad5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ad5e4: 0x260c0001  addiu       $t4, $s0, 0x1
    ctx->pc = 0x2ad5e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ad5e8: 0x440004b  bltz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AD5E8u;
    {
        const bool branch_taken_0x2ad5e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5E8u;
        // 0x2ad5ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5e8) {
            ctx->pc = 0x2AD718u;
            goto label_2ad718;
        }
    }
    ctx->pc = 0x2AD5F0u;
    // 0x2ad5f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ad5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad5f4: 0x0  nop
    ctx->pc = 0x2ad5f4u;
    // NOP
label_2ad5f8:
    // 0x2ad5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5fc: 0x4600041  bltz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AD5FCu;
    {
        const bool branch_taken_0x2ad5fc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5FCu;
        // 0x2ad600: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5fc) {
            ctx->pc = 0x2AD704u;
            goto label_2ad704;
        }
    }
    ctx->pc = 0x2AD604u;
    // 0x2ad604: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x2ad604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad608: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2ad608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad60c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2ad60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad610: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x2ad610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ad614: 0x0  nop
    ctx->pc = 0x2ad614u;
    // NOP
label_2ad618:
    // 0x2ad618: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2ad618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2ad61c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ad61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ad620: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ad620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ad624: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2ad624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad628: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ad628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ad62c: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x2ad62cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ad630: 0x106a002f  beq         $v1, $t2, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AD630u;
    {
        const bool branch_taken_0x2ad630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x2AD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD630u;
        // 0x2ad634: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad630) {
            ctx->pc = 0x2AD6F0u;
            goto label_2ad6f0;
        }
    }
    ctx->pc = 0x2AD638u;
    // 0x2ad638: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2ad638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad63c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2ad63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2ad640: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ad640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad644: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad648: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad64c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ad64cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ad650: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ad650u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ad654: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ad654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad658: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad65c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ad65cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad660: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ad660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad664: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2ad664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ad668: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD668u;
    {
        const bool branch_taken_0x2ad668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2AD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD668u;
        // 0x2ad66c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad668) {
            ctx->pc = 0x2AD684u;
            goto label_2ad684;
        }
    }
    ctx->pc = 0x2AD670u;
    // 0x2ad670: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2ad670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2ad674: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ad674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad678: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ad678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad67c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ad67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad680: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad684:
    // 0x2ad684: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ad684u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad688: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad68c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad68cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad690: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2ad690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ad694: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ad694u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ad698: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ad698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad69c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad6a0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2ad6a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ad6a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad6a8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2ad6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2ad6ac: 0xd8840010  lqc2        $vf4, 0x10($a0)
    ctx->pc = 0x2ad6acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ad6b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2ad6b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad6b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ad6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad6b8: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x2ad6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad6bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ad6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad6c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad6c4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad6c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad6c8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2ad6c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ad6cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ad6ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ad6d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ad6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad6d4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad6d8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2ad6d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ad6dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad6e0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2ad6e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad6e4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2ad6e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad6e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ad6e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad6ec: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2ad6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2ad6f0:
    // 0x2ad6f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ad6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad6f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ad6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ad6f8: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2ad6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ad6fc: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2AD6FCu;
    {
        const bool branch_taken_0x2ad6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6FCu;
        // 0x2ad700: 0x672018  mult        $a0, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6fc) {
            ctx->pc = 0x2AD618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad618;
        }
    }
    ctx->pc = 0x2AD704u;
label_2ad704:
    // 0x2ad704: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ad704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ad708: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2ad708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad70c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2ad70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2ad710: 0x5040ffb9  beql        $v0, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2AD710u;
    {
        const bool branch_taken_0x2ad710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad710) {
            ctx->pc = 0x2AD714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD710u;
            // 0x2ad714: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad5f8;
        }
    }
    ctx->pc = 0x2AD718u;
label_2ad718:
    // 0x2ad718: 0x8e42238c  lw          $v0, 0x238C($s2)
    ctx->pc = 0x2ad718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9100)));
    // 0x2ad71c: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x2ad71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad720: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ad720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad724: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2AD724u;
    {
        const bool branch_taken_0x2ad724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad724) {
            ctx->pc = 0x2AD5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad5d8;
        }
    }
    ctx->pc = 0x2AD72Cu;
label_2ad72c:
    // 0x2ad72c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ad72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad730: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ad730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad734: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ad734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ad738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad73c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ad73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad740: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD740u;
        // 0x2ad744: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD748u;
}
