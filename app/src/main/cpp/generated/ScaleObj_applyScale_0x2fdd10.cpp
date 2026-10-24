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

// Function: ScaleObj_applyScale
// Address: 0x2fdd10 - 0x2fdda8
void ScaleObj_applyScale_0x2fdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScaleObj_applyScale_0x2fdd10");
#endif

    ctx->pc = 0x2fdd10u;

    // 0x2fdd10: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2fdd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdd14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdd14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdd18: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x2fdd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdd1c: 0xc482012c  lwc1        $f2, 0x12C($a0)
    ctx->pc = 0x2fdd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdd20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fdd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fdd24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fdd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fdd28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fdd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fdd2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fdd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fdd30: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fdd30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fdd34: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2fdd34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fdd38: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x2fdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2fdd3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fdd40: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fdd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fdd44: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FDD44u;
    {
        const bool branch_taken_0x2fdd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdd44) {
            ctx->pc = 0x2FDD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDD44u;
            // 0x2fdd48: 0xc4800130  lwc1        $f0, 0x130($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDD70u;
            goto label_2fdd70;
        }
    }
    ctx->pc = 0x2FDD4Cu;
    // 0x2fdd4c: 0x9082011d  lbu         $v0, 0x11D($a0)
    ctx->pc = 0x2fdd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 285)));
    // 0x2fdd50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fdd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fdd54: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDD54u;
    {
        const bool branch_taken_0x2fdd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdd54) {
            ctx->pc = 0x2FDD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDD54u;
            // 0x2fdd58: 0xc4800130  lwc1        $f0, 0x130($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDD70u;
            goto label_2fdd70;
        }
    }
    ctx->pc = 0x2FDD5Cu;
    // 0x2fdd5c: 0x84830230  lh          $v1, 0x230($a0)
    ctx->pc = 0x2fdd5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x2fdd60: 0x8482022e  lh          $v0, 0x22E($a0)
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 558)));
    // 0x2fdd64: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDD64u;
    {
        const bool branch_taken_0x2fdd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD64u;
        // 0x2fdd68: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd64) {
            ctx->pc = 0x2FDD88u;
            goto label_2fdd88;
        }
    }
    ctx->pc = 0x2FDD6Cu;
    // 0x2fdd6c: 0xc4800130  lwc1        $f0, 0x130($a0)
    ctx->pc = 0x2fdd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fdd70:
    // 0x2fdd70: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2fdd70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdd74: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2fdd74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2fdd78: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2fdd78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2fdd7c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2fdd7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fdd80: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2fdd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdd84: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fdd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fdd88:
    // 0x2fdd88: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2fdd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdd8c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2fdd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdd90: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x2fdd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x2fdd94: 0xe481012c  swc1        $f1, 0x12C($a0)
    ctx->pc = 0x2fdd94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
    // 0x2fdd98: 0xe4820128  swc1        $f2, 0x128($a0)
    ctx->pc = 0x2fdd98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x2fdd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD9Cu;
        // 0x2fdda0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDA4u;
    // 0x2fdda4: 0x0  nop
    ctx->pc = 0x2fdda4u;
    // NOP
    ctx->pc = 0x2fdda8u;
}
