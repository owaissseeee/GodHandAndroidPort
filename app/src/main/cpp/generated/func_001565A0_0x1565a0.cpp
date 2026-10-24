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

// Function: func_001565A0
// Address: 0x1565a0 - 0x1566c0
void func_001565A0_0x1565a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001565A0_0x1565a0");
#endif

    ctx->pc = 0x1565a0u;

    // 0x1565a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1565a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1565a4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1565a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1565a8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1565a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1565ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1565acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1565b0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1565b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1565b4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1565b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1565b8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1565b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1565bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1565bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1565c0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1565c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1565c4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1565c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1565c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1565cc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1565ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1565d0: 0x13a30006  beq         $sp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1565D0u;
    {
        const bool branch_taken_0x1565d0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x1565D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565D0u;
        // 0x1565d4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565d0) {
            ctx->pc = 0x1565ECu;
            goto label_1565ec;
        }
    }
    ctx->pc = 0x1565D8u;
    // 0x1565d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1565d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1565dc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1565dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1565e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1565e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1565e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1565e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1565e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1565e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1565ec:
    // 0x1565ec: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1565ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1565f0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1565f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1565f4: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1565f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1565f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1565f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1565fc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1565fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156600: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156600u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156604: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156608: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x156608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15660c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15660cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156610: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x156610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x156614: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x156614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156618: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x156618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15661c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156620: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x156620u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x156624: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x156624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156628: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x156628u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15662c: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x15662cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x156630: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156634: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x156634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x156638: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x156638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15663c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x15663cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x156640: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x156640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x156644: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x156644u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x156648: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x156648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15664c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x15664cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x156650: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x156650u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x156654: 0xe488000c  swc1        $f8, 0xC($a0)
    ctx->pc = 0x156654u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x156658: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x156658u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x15665c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x15665cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x156660: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x156660u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x156664: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x156664u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x156668: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x156668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15666c: 0xe468000c  swc1        $f8, 0xC($v1)
    ctx->pc = 0x15666cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x156670: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x156670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156674: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x156674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156678: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15667c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x15667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x156680: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x156680u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x156684: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x156684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156688: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x156688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15668c: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x15668cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x156690: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156694: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x156694u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x156698: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x156698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15669c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15669cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1566a0: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x1566a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x1566a4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1566a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1566a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1566a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1566ac: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x1566acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1566b0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1566b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1566b4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1566b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1566b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1566B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1566BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B8u;
        // 0x1566bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1566B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1566C0u;
}
