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

// Function: func_00133408
// Address: 0x133408 - 0x1334a8
void func_00133408_0x133408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133408_0x133408");
#endif

    switch (ctx->pc) {
        case 0x133438u: goto label_133438;
        default: break;
    }

    ctx->pc = 0x133408u;

    // 0x133408: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x133408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13340c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x13340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133414: 0x0  nop
    ctx->pc = 0x133414u;
    // NOP
    // 0x133418: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x133418u;
    {
        const bool branch_taken_0x133418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133418) {
            ctx->pc = 0x133438u;
            goto label_133438;
        }
    }
    ctx->pc = 0x133420u;
    // 0x133420: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x133420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133424: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x133424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13342c: 0x0  nop
    ctx->pc = 0x13342cu;
    // NOP
    // 0x133430: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x133430u;
    {
        const bool branch_taken_0x133430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133430) {
            ctx->pc = 0x133434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133430u;
            // 0x133434: 0xc4c10008  lwc1        $f1, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x133440u;
            goto label_133440;
        }
    }
    ctx->pc = 0x133438u;
label_133438:
    // 0x133438: 0x3e00008  jr          $ra
    ctx->pc = 0x133438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133438u;
        // 0x13343c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133440u;
label_133440:
    // 0x133440: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x133440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133444: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133448: 0x0  nop
    ctx->pc = 0x133448u;
    // NOP
    // 0x13344c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x13344Cu;
    {
        const bool branch_taken_0x13344c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13344c) {
            ctx->pc = 0x133438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133438;
        }
    }
    ctx->pc = 0x133454u;
    // 0x133454: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x133454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133458: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x133458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13345c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13345cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133460: 0x0  nop
    ctx->pc = 0x133460u;
    // NOP
    // 0x133464: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x133464u;
    {
        const bool branch_taken_0x133464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133464) {
            ctx->pc = 0x133438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133438;
        }
    }
    ctx->pc = 0x13346Cu;
    // 0x13346c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x13346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133470: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x133470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133474: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133478: 0x0  nop
    ctx->pc = 0x133478u;
    // NOP
    // 0x13347c: 0x4501ffee  bc1t        . + 4 + (-0x12 << 2)
    ctx->pc = 0x13347Cu;
    {
        const bool branch_taken_0x13347c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13347c) {
            ctx->pc = 0x133438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133438;
        }
    }
    ctx->pc = 0x133484u;
    // 0x133484: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x133484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133488: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x133488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13348c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13348cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133490: 0x0  nop
    ctx->pc = 0x133490u;
    // NOP
    // 0x133494: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x133494u;
    {
        const bool branch_taken_0x133494 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x133498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133494u;
        // 0x133498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133494) {
            ctx->pc = 0x133438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133438;
        }
    }
    ctx->pc = 0x13349Cu;
    // 0x13349c: 0x3e00008  jr          $ra
    ctx->pc = 0x13349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1334A4u;
    // 0x1334a4: 0x0  nop
    ctx->pc = 0x1334a4u;
    // NOP
    ctx->pc = 0x1334a8u;
}
