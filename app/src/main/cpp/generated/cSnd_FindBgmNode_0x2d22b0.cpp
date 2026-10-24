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

// Function: cSnd_FindBgmNode
// Address: 0x2d22b0 - 0x2d22f0
void cSnd_FindBgmNode_0x2d22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_FindBgmNode_0x2d22b0");
#endif

    switch (ctx->pc) {
        case 0x2d22c0u: goto label_2d22c0;
        default: break;
    }

    ctx->pc = 0x2d22b0u;

    // 0x2d22b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d22b4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D22B4u;
    {
        const bool branch_taken_0x2d22b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d22b4) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22BCu;
    // 0x2d22bc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2d22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2d22c0:
    // 0x2d22c0: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2d22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2d22c4: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D22C4u;
    {
        const bool branch_taken_0x2d22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d22c4) {
            ctx->pc = 0x2D22C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D22C4u;
            // 0x2d22c8: 0x8c630088  lw          $v1, 0x88($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D22E0u;
            goto label_2d22e0;
        }
    }
    ctx->pc = 0x2D22CCu;
    // 0x2d22cc: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2d22d0: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D22D0u;
    {
        const bool branch_taken_0x2d22d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2d22d0) {
            ctx->pc = 0x2D22D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D22D0u;
            // 0x2d22d4: 0x8c630088  lw          $v1, 0x88($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D22E0u;
            goto label_2d22e0;
        }
    }
    ctx->pc = 0x2D22D8u;
    // 0x2d22d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D22D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22D8u;
        // 0x2d22dc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D22D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D22E0u;
label_2d22e0:
    // 0x2d22e0: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D22E0u;
    {
        const bool branch_taken_0x2d22e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d22e0) {
            ctx->pc = 0x2D22E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D22E0u;
            // 0x2d22e4: 0x8c62008c  lw          $v0, 0x8C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D22C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d22c0;
        }
    }
    ctx->pc = 0x2D22E8u;
label_2d22e8:
    // 0x2d22e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D22E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22E8u;
        // 0x2d22ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D22E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D22F0u;
}
