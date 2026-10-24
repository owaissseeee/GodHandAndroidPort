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

// Function: cOmbb_ckCountdown
// Address: 0x1b8648 - 0x1b8670
void cOmbb_ckCountdown_0x1b8648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmbb_ckCountdown_0x1b8648");
#endif

    ctx->pc = 0x1b8648u;

    // 0x1b8648: 0xc4810604  lwc1        $f1, 0x604($a0)
    ctx->pc = 0x1b8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b864c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b864cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8650: 0x0  nop
    ctx->pc = 0x1b8650u;
    // NOP
    // 0x1b8654: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b8654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8658: 0x0  nop
    ctx->pc = 0x1b8658u;
    // NOP
    // 0x1b865c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B865Cu;
    {
        const bool branch_taken_0x1b865c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B865Cu;
        // 0x1b8660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b865c) {
            ctx->pc = 0x1B8668u;
            goto label_1b8668;
        }
    }
    ctx->pc = 0x1B8664u;
    // 0x1b8664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8668:
    // 0x1b8668: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8670u;
}
