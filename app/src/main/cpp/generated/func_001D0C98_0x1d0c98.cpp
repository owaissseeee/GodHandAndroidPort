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

// Function: func_001D0C98
// Address: 0x1d0c98 - 0x1d0ce8
void func_001D0C98_0x1d0c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0C98_0x1d0c98");
#endif

    ctx->pc = 0x1d0c98u;

    // 0x1d0c98: 0x9c830004  lwu         $v1, 0x4($a0)
    ctx->pc = 0x1d0c98u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0c9c: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1d0c9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1d0ca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0ca4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D0CA4u;
    {
        const bool branch_taken_0x1d0ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA4u;
        // 0x1d0ca8: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ca4) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0CACu;
    // 0x1d0cac: 0x310bb  dsra        $v0, $v1, 2
    ctx->pc = 0x1d0cacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
    // 0x1d0cb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0cb4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0CB4u;
    {
        const bool branch_taken_0x1d0cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0cb4) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0CBCu;
    // 0x1d0cbc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0CBCu;
    {
        const bool branch_taken_0x1d0cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0cbc) {
            ctx->pc = 0x1D0CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0CBCu;
            // 0x1d0cc0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0CD0u;
            goto label_1d0cd0;
        }
    }
    ctx->pc = 0x1D0CC4u;
    // 0x1d0cc4: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x1d0cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x1d0cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CC8u;
        // 0x1d0ccc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CD0u;
label_1d0cd0:
    // 0x1d0cd0: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x1d0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x1d0cd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0cd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d0cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d0cdc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1d0ce0:
    // 0x1d0ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CE8u;
}
