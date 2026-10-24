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

// Function: func_00135250
// Address: 0x135250 - 0x1352f0
void func_00135250_0x135250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00135250_0x135250");
#endif

    switch (ctx->pc) {
        case 0x135280u: goto label_135280;
        default: break;
    }

    ctx->pc = 0x135250u;

    // 0x135250: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x135250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135254: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x135254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13525c: 0x0  nop
    ctx->pc = 0x13525cu;
    // NOP
    // 0x135260: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x135260u;
    {
        const bool branch_taken_0x135260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135260) {
            ctx->pc = 0x135280u;
            goto label_135280;
        }
    }
    ctx->pc = 0x135268u;
    // 0x135268: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x135268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13526c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x13526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x135270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135274: 0x0  nop
    ctx->pc = 0x135274u;
    // NOP
    // 0x135278: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x135278u;
    {
        const bool branch_taken_0x135278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135278) {
            ctx->pc = 0x13527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135278u;
            // 0x13527c: 0xc4c10008  lwc1        $f1, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135288u;
            goto label_135288;
        }
    }
    ctx->pc = 0x135280u;
label_135280:
    // 0x135280: 0x3e00008  jr          $ra
    ctx->pc = 0x135280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135280u;
        // 0x135284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135288u;
label_135288:
    // 0x135288: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x135288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13528c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13528cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135290: 0x0  nop
    ctx->pc = 0x135290u;
    // NOP
    // 0x135294: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x135294u;
    {
        const bool branch_taken_0x135294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135294) {
            ctx->pc = 0x135280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135280;
        }
    }
    ctx->pc = 0x13529Cu;
    // 0x13529c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x13529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352a0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1352a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1352a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1352a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1352a8: 0x0  nop
    ctx->pc = 0x1352a8u;
    // NOP
    // 0x1352ac: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x1352ACu;
    {
        const bool branch_taken_0x1352ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1352ac) {
            ctx->pc = 0x135280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135280;
        }
    }
    ctx->pc = 0x1352B4u;
    // 0x1352b4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1352b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352b8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1352b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1352bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1352bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1352c0: 0x0  nop
    ctx->pc = 0x1352c0u;
    // NOP
    // 0x1352c4: 0x4501ffee  bc1t        . + 4 + (-0x12 << 2)
    ctx->pc = 0x1352C4u;
    {
        const bool branch_taken_0x1352c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1352c4) {
            ctx->pc = 0x135280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135280;
        }
    }
    ctx->pc = 0x1352CCu;
    // 0x1352cc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1352ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352d0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1352d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1352d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1352d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1352d8: 0x0  nop
    ctx->pc = 0x1352d8u;
    // NOP
    // 0x1352dc: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x1352DCu;
    {
        const bool branch_taken_0x1352dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1352E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352DCu;
        // 0x1352e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352dc) {
            ctx->pc = 0x135280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135280;
        }
    }
    ctx->pc = 0x1352E4u;
    // 0x1352e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1352E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1352E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1352ECu;
    // 0x1352ec: 0x0  nop
    ctx->pc = 0x1352ecu;
    // NOP
    ctx->pc = 0x1352f0u;
}
