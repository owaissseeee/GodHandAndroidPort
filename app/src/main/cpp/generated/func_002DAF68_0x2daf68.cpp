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

// Function: func_002DAF68
// Address: 0x2daf68 - 0x2db008
void func_002DAF68_0x2daf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DAF68_0x2daf68");
#endif

    ctx->pc = 0x2daf68u;

    // 0x2daf68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2daf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daf6c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2daf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2daf70: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2daf70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2daf74: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2daf74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2daf78: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2daf78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2daf7c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2daf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2daf80: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2daf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2daf84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2daf84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2daf88: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2daf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2daf8c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2daf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daf90: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2daf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2daf94: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2daf94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2daf98: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2daf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf9c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2daf9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2dafa0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dafa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2dafa4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2dafa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2dafa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dafa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dafac: 0x0  nop
    ctx->pc = 0x2dafacu;
    // NOP
    // 0x2dafb0: 0x0  nop
    ctx->pc = 0x2dafb0u;
    // NOP
    // 0x2dafb4: 0x46000004  c1          0x4
    ctx->pc = 0x2dafb4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2dafb8: 0x460d6300  add.s       $f12, $f12, $f13
    ctx->pc = 0x2dafb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x2dafbc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2dafbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dafc0: 0x0  nop
    ctx->pc = 0x2dafc0u;
    // NOP
    // 0x2dafc4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2DAFC4u;
    {
        const bool branch_taken_0x2dafc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dafc4) {
            ctx->pc = 0x2DAFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAFC4u;
            // 0x2dafc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAFFCu;
            goto label_2daffc;
        }
    }
    ctx->pc = 0x2DAFCCu;
    // 0x2dafcc: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DAFCCu;
    {
        const bool branch_taken_0x2dafcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dafcc) {
            ctx->pc = 0x2DAFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAFCCu;
            // 0x2dafd0: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAFD4u;
            goto label_2dafd4;
        }
    }
    ctx->pc = 0x2DAFD4u;
label_2dafd4:
    // 0x2dafd4: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DAFD4u;
    {
        const bool branch_taken_0x2dafd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFD4u;
        // 0x2dafd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafd4) {
            ctx->pc = 0x2DAFFCu;
            goto label_2daffc;
        }
    }
    ctx->pc = 0x2DAFDCu;
    // 0x2dafdc: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAFDCu;
    {
        const bool branch_taken_0x2dafdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2dafdc) {
            ctx->pc = 0x2DAFFCu;
            goto label_2daffc;
        }
    }
    ctx->pc = 0x2DAFE4u;
    // 0x2dafe4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2dafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dafe8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2dafe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2dafec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2dafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daff0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2daff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2daff4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2daff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daff8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2daff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2daffc:
    // 0x2daffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFFCu;
        // 0x2db000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB004u;
    // 0x2db004: 0x0  nop
    ctx->pc = 0x2db004u;
    // NOP
    ctx->pc = 0x2db008u;
}
