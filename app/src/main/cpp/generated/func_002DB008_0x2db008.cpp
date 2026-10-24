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

// Function: func_002DB008
// Address: 0x2db008 - 0x2db0d0
void func_002DB008_0x2db008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DB008_0x2db008");
#endif

    ctx->pc = 0x2db008u;

    // 0x2db008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db00c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2db00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2db010: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2db010u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db014: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2db014u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db018: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2db018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2db01c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2db01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2db020: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2db020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2db024: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2db024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db028: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2db028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2db02c: 0x460e6b40  add.s       $f13, $f13, $f14
    ctx->pc = 0x2db02cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x2db030: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2db030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db034: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x2db034u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x2db038: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db03c: 0x0  nop
    ctx->pc = 0x2db03cu;
    // NOP
    // 0x2db040: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x2DB040u;
    {
        const bool branch_taken_0x2db040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db040) {
            ctx->pc = 0x2DB044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB040u;
            // 0x2db044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0BCu;
            goto label_2db0bc;
        }
    }
    ctx->pc = 0x2DB048u;
    // 0x2db048: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x2db048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db04c: 0x0  nop
    ctx->pc = 0x2db04cu;
    // NOP
    // 0x2db050: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2DB050u;
    {
        const bool branch_taken_0x2db050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db050) {
            ctx->pc = 0x2DB054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB050u;
            // 0x2db054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0BCu;
            goto label_2db0bc;
        }
    }
    ctx->pc = 0x2DB058u;
    // 0x2db058: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2db058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db05c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2db05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db060: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2db060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2db064: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2db064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2db068: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2db06c: 0x0  nop
    ctx->pc = 0x2db06cu;
    // NOP
    // 0x2db070: 0x0  nop
    ctx->pc = 0x2db070u;
    // NOP
    // 0x2db074: 0x46000004  c1          0x4
    ctx->pc = 0x2db074u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2db078: 0x460e6040  add.s       $f1, $f12, $f14
    ctx->pc = 0x2db078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x2db07c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2db07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db080: 0x0  nop
    ctx->pc = 0x2db080u;
    // NOP
    // 0x2db084: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2DB084u;
    {
        const bool branch_taken_0x2db084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db084) {
            ctx->pc = 0x2DB088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB084u;
            // 0x2db088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0BCu;
            goto label_2db0bc;
        }
    }
    ctx->pc = 0x2DB08Cu;
    // 0x2db08c: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB08Cu;
    {
        const bool branch_taken_0x2db08c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db08c) {
            ctx->pc = 0x2DB090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB08Cu;
            // 0x2db090: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB094u;
            goto label_2db094;
        }
    }
    ctx->pc = 0x2DB094u;
label_2db094:
    // 0x2db094: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB094u;
    {
        const bool branch_taken_0x2db094 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB094u;
        // 0x2db098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db094) {
            ctx->pc = 0x2DB0BCu;
            goto label_2db0bc;
        }
    }
    ctx->pc = 0x2DB09Cu;
    // 0x2db09c: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB09Cu;
    {
        const bool branch_taken_0x2db09c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2db09c) {
            ctx->pc = 0x2DB0BCu;
            goto label_2db0bc;
        }
    }
    ctx->pc = 0x2DB0A4u;
    // 0x2db0a4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2db0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db0a8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2db0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2db0ac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2db0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0b0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2db0b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2db0b4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2db0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db0b8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2db0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2db0bc:
    // 0x2db0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0BCu;
        // 0x2db0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB0C4u;
    // 0x2db0c4: 0x0  nop
    ctx->pc = 0x2db0c4u;
    // NOP
    // 0x2db0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db0cc: 0x0  nop
    ctx->pc = 0x2db0ccu;
    // NOP
    ctx->pc = 0x2db0d0u;
}
