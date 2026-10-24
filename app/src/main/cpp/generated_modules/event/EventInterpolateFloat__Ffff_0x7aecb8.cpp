#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: EventInterpolateFloat__Ffff
// Address: 0x7aecb8 - 0x7aecf0
void EventInterpolateFloat__Ffff_0x7aecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventInterpolateFloat__Ffff_0x7aecb8");
#endif

    ctx->pc = 0x7aecb8u;

    // 0x7aecb8: 0x460d6032  c.eq.s      $f12, $f13
    ctx->pc = 0x7aecb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7aecbc: 0x0  nop
    ctx->pc = 0x7aecbcu;
    // NOP
    // 0x7aecc0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x7AECC0u;
    {
        const bool branch_taken_0x7aecc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7aecc0) {
            ctx->pc = 0x7AECE4u;
            goto label_7aece4;
        }
    }
    ctx->pc = 0x7AECC8u;
    // 0x7aecc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7aecc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7aeccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7aecccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7aecd0: 0x460e6842  mul.s       $f1, $f13, $f14
    ctx->pc = 0x7aecd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x7aecd4: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x7aecd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x7aecd8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x7aecd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x7aecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AECDCu;
        // 0x7aece0: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AECE4u;
label_7aece4:
    // 0x7aece4: 0x3e00008  jr          $ra
    ctx->pc = 0x7AECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AECE4u;
        // 0x7aece8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AECE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AECECu;
    // 0x7aecec: 0x0  nop
    ctx->pc = 0x7aececu;
    // NOP
    ctx->pc = 0x7aecf0u;
}
} // namespace gh_event
