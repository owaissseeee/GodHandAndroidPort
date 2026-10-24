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

// Function: func_002FA3E0
// Address: 0x2fa3e0 - 0x2fa470
void func_002FA3E0_0x2fa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FA3E0_0x2fa3e0");
#endif

    ctx->pc = 0x2fa3e0u;

    // 0x2fa3e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2fa3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa3e4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2fa3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2fa3e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fa3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fa3ec: 0x0  nop
    ctx->pc = 0x2fa3ecu;
    // NOP
    // 0x2fa3f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fa3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fa3f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2fa3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2fa3f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fa3f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fa3fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2fa3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2fa400: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2fa400u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fa404: 0x0  nop
    ctx->pc = 0x2fa404u;
    // NOP
    // 0x2fa408: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fa408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fa40c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2fa40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa410: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2fa410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fa414: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2fa414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2fa418: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2fa418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fa41c: 0x0  nop
    ctx->pc = 0x2fa41cu;
    // NOP
    // 0x2fa420: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA420u;
    {
        const bool branch_taken_0x2fa420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fa420) {
            ctx->pc = 0x2FA424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA420u;
            // 0x2fa424: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA428u;
            goto label_2fa428;
        }
    }
    ctx->pc = 0x2FA428u;
label_2fa428:
    // 0x2fa428: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fa428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2fa42c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fa42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fa430: 0xc4401dc0  lwc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x2fa430u;
    { uint32_t bits = FAST_READ32(0x741DC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa434: 0xc4617a14  lwc1        $f1, 0x7A14($v1)
    ctx->pc = 0x2fa434u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa438: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fa438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fa43c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fa43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fa440: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fa440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fa444: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fa444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fa448: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2fa448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fa44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fa450: 0x0  nop
    ctx->pc = 0x2fa450u;
    // NOP
    // 0x2fa454: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fa454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fa458: 0x0  nop
    ctx->pc = 0x2fa458u;
    // NOP
    // 0x2fa45c: 0x0  nop
    ctx->pc = 0x2fa45cu;
    // NOP
    // 0x2fa460: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2fa460u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2fa464: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA464u;
        // 0x2fa468: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA46Cu;
    // 0x2fa46c: 0x0  nop
    ctx->pc = 0x2fa46cu;
    // NOP
    ctx->pc = 0x2fa470u;
}
