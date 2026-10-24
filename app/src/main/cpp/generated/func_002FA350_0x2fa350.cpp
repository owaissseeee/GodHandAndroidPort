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

// Function: func_002FA350
// Address: 0x2fa350 - 0x2fa3e0
void func_002FA350_0x2fa350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FA350_0x2fa350");
#endif

    ctx->pc = 0x2fa350u;

    // 0x2fa350: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2fa350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa354: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2fa354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2fa358: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fa358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fa35c: 0x0  nop
    ctx->pc = 0x2fa35cu;
    // NOP
    // 0x2fa360: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fa360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fa364: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2fa364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2fa368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fa368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fa36c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2fa36cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2fa370: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2fa370u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fa374: 0x0  nop
    ctx->pc = 0x2fa374u;
    // NOP
    // 0x2fa378: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fa378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fa37c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2fa37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2fa380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fa384: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2fa384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2fa388: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2fa388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fa38c: 0x0  nop
    ctx->pc = 0x2fa38cu;
    // NOP
    // 0x2fa390: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA390u;
    {
        const bool branch_taken_0x2fa390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fa390) {
            ctx->pc = 0x2FA394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA390u;
            // 0x2fa394: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA398u;
            goto label_2fa398;
        }
    }
    ctx->pc = 0x2FA398u;
label_2fa398:
    // 0x2fa398: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fa398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2fa39c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fa39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fa3a0: 0xc4401dc0  lwc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x2fa3a0u;
    { uint32_t bits = FAST_READ32(0x741DC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa3a4: 0xc4617a14  lwc1        $f1, 0x7A14($v1)
    ctx->pc = 0x2fa3a4u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa3a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fa3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fa3ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fa3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fa3b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fa3b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fa3b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fa3b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fa3b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2fa3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fa3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fa3c0: 0x0  nop
    ctx->pc = 0x2fa3c0u;
    // NOP
    // 0x2fa3c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fa3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fa3c8: 0x0  nop
    ctx->pc = 0x2fa3c8u;
    // NOP
    // 0x2fa3cc: 0x0  nop
    ctx->pc = 0x2fa3ccu;
    // NOP
    // 0x2fa3d0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2fa3d0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2fa3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3D4u;
        // 0x2fa3d8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA3DCu;
    // 0x2fa3dc: 0x0  nop
    ctx->pc = 0x2fa3dcu;
    // NOP
    ctx->pc = 0x2fa3e0u;
}
