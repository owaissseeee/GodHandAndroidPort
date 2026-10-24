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

// Function: func_003740C8
// Address: 0x3740c8 - 0x374120
void func_003740C8_0x3740c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003740C8_0x3740c8");
#endif

    ctx->pc = 0x3740c8u;

    // 0x3740c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3740c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3740cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3740CCu;
    {
        const bool branch_taken_0x3740cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3740cc) {
            ctx->pc = 0x374114u;
            goto label_374114;
        }
    }
    ctx->pc = 0x3740D4u;
    // 0x3740d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3740d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3740d8: 0x0  nop
    ctx->pc = 0x3740d8u;
    // NOP
    // 0x3740dc: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x3740dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3740e0: 0x0  nop
    ctx->pc = 0x3740e0u;
    // NOP
    // 0x3740e4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x3740E4u;
    {
        const bool branch_taken_0x3740e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3740e4) {
            ctx->pc = 0x3740E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3740E4u;
            // 0x3740e8: 0xe48d001c  swc1        $f13, 0x1C($a0) (Delay Slot)
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x374110u;
            goto label_374110;
        }
    }
    ctx->pc = 0x3740ECu;
    // 0x3740ec: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3740ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3740f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3740f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3740f4: 0x0  nop
    ctx->pc = 0x3740f4u;
    // NOP
    // 0x3740f8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3740F8u;
    {
        const bool branch_taken_0x3740f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3740f8) {
            ctx->pc = 0x3740FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3740F8u;
            // 0x3740fc: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37410Cu;
            goto label_37410c;
        }
    }
    ctx->pc = 0x374100u;
    // 0x374100: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x374100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374104u;
    {
        const bool branch_taken_0x374104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374104u;
        // 0x374108: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374104) {
            ctx->pc = 0x374110u;
            goto label_374110;
        }
    }
    ctx->pc = 0x37410Cu;
label_37410c:
    // 0x37410c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x37410cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_374110:
    // 0x374110: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x374110u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_374114:
    // 0x374114: 0x3e00008  jr          $ra
    ctx->pc = 0x374114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37411Cu;
    // 0x37411c: 0x0  nop
    ctx->pc = 0x37411cu;
    // NOP
    ctx->pc = 0x374120u;
}
