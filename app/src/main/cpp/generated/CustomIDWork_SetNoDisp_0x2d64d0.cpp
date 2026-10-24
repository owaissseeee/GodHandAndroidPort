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

// Function: CustomIDWork_SetNoDisp
// Address: 0x2d64d0 - 0x2d6510
void CustomIDWork_SetNoDisp_0x2d64d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetNoDisp_0x2d64d0");
#endif

    ctx->pc = 0x2d64d0u;

    // 0x2d64d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d64d4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D64D4u;
    {
        const bool branch_taken_0x2d64d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d64d4) {
            ctx->pc = 0x2D6508u;
            goto label_2d6508;
        }
    }
    ctx->pc = 0x2D64DCu;
    // 0x2d64dc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D64DCu;
    {
        const bool branch_taken_0x2d64dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d64dc) {
            ctx->pc = 0x2D64E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D64DCu;
            // 0x2d64e0: 0x8c83002c  lw          $v1, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D64F8u;
            goto label_2d64f8;
        }
    }
    ctx->pc = 0x2D64E4u;
    // 0x2d64e4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2d64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d64e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2d64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2d64ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d64ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d64f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64F0u;
        // 0x2d64f4: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64F8u;
label_2d64f8:
    // 0x2d64f8: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2d64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2d64fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d64fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d6500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d6504: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2d6504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2d6508:
    // 0x2d6508: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6510u;
}
