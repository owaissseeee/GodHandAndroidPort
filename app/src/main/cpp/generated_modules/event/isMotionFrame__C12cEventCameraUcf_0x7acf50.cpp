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
// Function: isMotionFrame__C12cEventCameraUcf
// Address: 0x7acf50 - 0x7acf88
void isMotionFrame__C12cEventCameraUcf_0x7acf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isMotionFrame__C12cEventCameraUcf_0x7acf50");
#endif

    ctx->pc = 0x7acf50u;

    // 0x7acf50: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x7acf50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x7acf54: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x7acf54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7acf58: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7ACF58u;
    {
        const bool branch_taken_0x7acf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x7ACF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACF58u;
        // 0x7acf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acf58) {
            ctx->pc = 0x7ACF7Cu;
            goto label_7acf7c;
        }
    }
    ctx->pc = 0x7ACF60u;
    // 0x7acf60: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x7acf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7acf64: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x7acf64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7acf68: 0x0  nop
    ctx->pc = 0x7acf68u;
    // NOP
    // 0x7acf6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x7ACF6Cu;
    {
        const bool branch_taken_0x7acf6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7acf6c) {
            ctx->pc = 0x7ACF7Cu;
            goto label_7acf7c;
        }
    }
    ctx->pc = 0x7ACF74u;
    // 0x7acf74: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACF74u;
        // 0x7acf78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACF7Cu;
label_7acf7c:
    // 0x7acf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACF84u;
    // 0x7acf84: 0x0  nop
    ctx->pc = 0x7acf84u;
    // NOP
    ctx->pc = 0x7acf88u;
}
} // namespace gh_event
