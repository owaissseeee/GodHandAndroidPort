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

// Function: CustomIDWork_SetDisp
// Address: 0x2d6490 - 0x2d64d0
void CustomIDWork_SetDisp_0x2d6490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetDisp_0x2d6490");
#endif

    ctx->pc = 0x2d6490u;

    // 0x2d6490: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d6490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6494: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6494u;
    {
        const bool branch_taken_0x2d6494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6494u;
        // 0x2d6498: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6494) {
            ctx->pc = 0x2D64C8u;
            goto label_2d64c8;
        }
    }
    ctx->pc = 0x2D649Cu;
    // 0x2d649c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D649Cu;
    {
        const bool branch_taken_0x2d649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d649c) {
            ctx->pc = 0x2D64A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D649Cu;
            // 0x2d64a0: 0x8c83002c  lw          $v1, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D64B8u;
            goto label_2d64b8;
        }
    }
    ctx->pc = 0x2D64A4u;
    // 0x2d64a4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2d64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d64a8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2d64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2d64ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d64acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d64b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64B0u;
        // 0x2d64b4: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64B8u;
label_2d64b8:
    // 0x2d64b8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2d64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x2d64bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d64bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d64c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d64c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d64c4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2d64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2d64c8:
    // 0x2d64c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64D0u;
}
