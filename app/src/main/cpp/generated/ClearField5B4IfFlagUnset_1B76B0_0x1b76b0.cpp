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

// Function: ClearField5B4IfFlagUnset_1B76B0
// Address: 0x1b76b0 - 0x1b76d8
void ClearField5B4IfFlagUnset_1B76B0_0x1b76b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearField5B4IfFlagUnset_1B76B0_0x1b76b0");
#endif

    ctx->pc = 0x1b76b0u;

    // 0x1b76b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b76b4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1b76b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1b76b8: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1b76bc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b76bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b76c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B76C0u;
    {
        const bool branch_taken_0x1b76c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76C0u;
        // 0x1b76c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76c0) {
            ctx->pc = 0x1B76D0u;
            goto label_1b76d0;
        }
    }
    ctx->pc = 0x1B76C8u;
    // 0x1b76c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B76C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76C8u;
        // 0x1b76cc: 0xac8005b4  sw          $zero, 0x5B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B76D0u;
label_1b76d0:
    // 0x1b76d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B76D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76D0u;
        // 0x1b76d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B76D8u;
}
