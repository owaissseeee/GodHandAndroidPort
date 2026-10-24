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

// Function: func_001AE700
// Address: 0x1ae700 - 0x1ae748
void func_001AE700_0x1ae700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE700_0x1ae700");
#endif

    ctx->pc = 0x1ae700u;

    // 0x1ae700: 0xc4810614  lwc1        $f1, 0x614($a0)
    ctx->pc = 0x1ae700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae704: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1ae704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1ae708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae70c: 0x0  nop
    ctx->pc = 0x1ae70cu;
    // NOP
    // 0x1ae710: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ae710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae714: 0x0  nop
    ctx->pc = 0x1ae714u;
    // NOP
    // 0x1ae718: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE718u;
    {
        const bool branch_taken_0x1ae718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE718u;
        // 0x1ae71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae718) {
            ctx->pc = 0x1AE724u;
            goto label_1ae724;
        }
    }
    ctx->pc = 0x1AE720u;
    // 0x1ae720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae724:
    // 0x1ae724: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x1ae724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x1ae728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae72c: 0x0  nop
    ctx->pc = 0x1ae72cu;
    // NOP
    // 0x1ae730: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ae730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae734: 0x0  nop
    ctx->pc = 0x1ae734u;
    // NOP
    // 0x1ae738: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE738u;
    {
        const bool branch_taken_0x1ae738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae738) {
            ctx->pc = 0x1AE73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE738u;
            // 0x1ae73c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE740u;
            goto label_1ae740;
        }
    }
    ctx->pc = 0x1AE740u;
label_1ae740:
    // 0x1ae740: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE748u;
}
