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

// Function: func_001573C8
// Address: 0x1573c8 - 0x157498
void func_001573C8_0x1573c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001573C8_0x1573c8");
#endif

    switch (ctx->pc) {
        case 0x15742cu: goto label_15742c;
        default: break;
    }

    ctx->pc = 0x1573c8u;

    // 0x1573c8: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x1573c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1573cc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1573ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573d0: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x1573d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1573d4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1573d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1573d8: 0x460a0181  sub.s       $f6, $f0, $f10
    ctx->pc = 0x1573d8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x1573dc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1573dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1573e0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1573e4: 0x460a09c1  sub.s       $f7, $f1, $f10
    ctx->pc = 0x1573e4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x1573e8: 0x46091101  sub.s       $f4, $f2, $f9
    ctx->pc = 0x1573e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x1573ec: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1573ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573f0: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x1573f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x1573f4: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1573f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1573f8: 0x460a0201  sub.s       $f8, $f0, $f10
    ctx->pc = 0x1573f8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x1573fc: 0x46043842  mul.s       $f1, $f7, $f4
    ctx->pc = 0x1573fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x157400: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x157400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x157404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157408: 0x0  nop
    ctx->pc = 0x157408u;
    // NOP
    // 0x15740c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x15740Cu;
    {
        const bool branch_taken_0x15740c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15740Cu;
        // 0x157410: 0x46091141  sub.s       $f5, $f2, $f9 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15740c) {
            ctx->pc = 0x15742Cu;
            goto label_15742c;
        }
    }
    ctx->pc = 0x157414u;
    // 0x157414: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x157414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x157418: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x157418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x15741c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15741cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157420: 0x0  nop
    ctx->pc = 0x157420u;
    // NOP
    // 0x157424: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x157424u;
    {
        const bool branch_taken_0x157424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157424) {
            ctx->pc = 0x157428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157424u;
            // 0x157428: 0xc4e10008  lwc1        $f1, 0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x157434u;
            goto label_157434;
        }
    }
    ctx->pc = 0x15742Cu;
label_15742c:
    // 0x15742c: 0x3e00008  jr          $ra
    ctx->pc = 0x15742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15742Cu;
        // 0x157430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157434u;
label_157434:
    // 0x157434: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x157434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157438: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x157438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x15743c: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x15743cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x157440: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x157440u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x157444: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x157444u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x157448: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x157448u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x15744c: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x15744cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x157450: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x157450u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x157454: 0x46061882  mul.s       $f2, $f3, $f6
    ctx->pc = 0x157454u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x157458: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x157458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x15745c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15745cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157460: 0x0  nop
    ctx->pc = 0x157460u;
    // NOP
    // 0x157464: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
    ctx->pc = 0x157464u;
    {
        const bool branch_taken_0x157464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157464u;
        // 0x157468: 0x46014201  sub.s       $f8, $f8, $f1 (Delay Slot)
        ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157464) {
            ctx->pc = 0x15742Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15742c;
        }
    }
    ctx->pc = 0x15746Cu;
    // 0x15746c: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x15746cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x157470: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x157470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x157474: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x157474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157478: 0x0  nop
    ctx->pc = 0x157478u;
    // NOP
    // 0x15747c: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
    ctx->pc = 0x15747Cu;
    {
        const bool branch_taken_0x15747c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15747Cu;
        // 0x157480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15747c) {
            ctx->pc = 0x15742Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15742c;
        }
    }
    ctx->pc = 0x157484u;
    // 0x157484: 0x3e00008  jr          $ra
    ctx->pc = 0x157484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15748Cu;
    // 0x15748c: 0x0  nop
    ctx->pc = 0x15748cu;
    // NOP
    // 0x157490: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x157490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x157494: 0x0  nop
    ctx->pc = 0x157494u;
    // NOP
    ctx->pc = 0x157498u;
}
