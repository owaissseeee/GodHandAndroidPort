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

// Function: func_001569A0
// Address: 0x1569a0 - 0x156ac0
void func_001569A0_0x1569a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001569A0_0x1569a0");
#endif

    ctx->pc = 0x1569a0u;

    // 0x1569a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1569a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1569a4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1569a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1569a8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1569a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1569ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1569b0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1569b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1569b4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1569b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1569b8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1569b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1569bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1569bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1569c0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1569c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1569c4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1569c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1569c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1569cc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1569ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1569d0: 0x13a30006  beq         $sp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1569D0u;
    {
        const bool branch_taken_0x1569d0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x1569D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569D0u;
        // 0x1569d4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569d0) {
            ctx->pc = 0x1569ECu;
            goto label_1569ec;
        }
    }
    ctx->pc = 0x1569D8u;
    // 0x1569d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1569d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1569dc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1569dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1569e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1569e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1569e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1569e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1569e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1569e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1569ec:
    // 0x1569ec: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1569ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1569f0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1569f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1569f4: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1569f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1569f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1569f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1569fc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1569fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156a00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156a04: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156a08: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x156a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156a0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x156a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a10: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x156a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x156a14: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x156a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156a18: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x156a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x156a1c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x156a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a20: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x156a20u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x156a24: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x156a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156a28: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x156a28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x156a2c: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x156a2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x156a30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156a34: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x156a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x156a38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x156a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x156a3c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x156a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x156a40: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x156a40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x156a44: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x156a44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x156a48: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x156a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x156a4c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x156a4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x156a50: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x156a50u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x156a54: 0xe488000c  swc1        $f8, 0xC($a0)
    ctx->pc = 0x156a54u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x156a58: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x156a58u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x156a5c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x156a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x156a60: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x156a60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x156a64: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x156a64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x156a68: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x156a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x156a6c: 0xe468000c  swc1        $f8, 0xC($v1)
    ctx->pc = 0x156a6cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x156a70: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x156a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156a74: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x156a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156a78: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156a7c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x156a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x156a80: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x156a80u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x156a84: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x156a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a88: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x156a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x156a8c: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x156a8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x156a90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156a94: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x156a94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x156a98: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x156a98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x156a9c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x156a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x156aa0: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x156aa0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x156aa4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x156aa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x156aa8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x156aa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x156aac: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x156aacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x156ab0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x156ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x156ab4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x156ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x156ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x156AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AB8u;
        // 0x156abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156AC0u;
}
