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

// Function: func_0036E2B8
// Address: 0x36e2b8 - 0x36e308
void func_0036E2B8_0x36e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036E2B8_0x36e2b8");
#endif

    ctx->pc = 0x36e2b8u;

    // 0x36e2b8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x36e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x36e2bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e2c0: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E2C0u;
    {
        const bool branch_taken_0x36e2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x36E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2C0u;
        // 0x36e2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e2c0) {
            ctx->pc = 0x36E2E4u;
            goto label_36e2e4;
        }
    }
    ctx->pc = 0x36E2C8u;
    // 0x36e2c8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x36e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x36e2cc: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E2CCu;
    {
        const bool branch_taken_0x36e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e2cc) {
            ctx->pc = 0x36E2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E2CCu;
            // 0x36e2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E2E4u;
            goto label_36e2e4;
        }
    }
    ctx->pc = 0x36E2D4u;
    // 0x36e2d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e2d8: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E2D8u;
    {
        const bool branch_taken_0x36e2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x36e2d8) {
            ctx->pc = 0x36E2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E2D8u;
            // 0x36e2dc: 0x8c820134  lw          $v0, 0x134($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E2F0u;
            goto label_36e2f0;
        }
    }
    ctx->pc = 0x36E2E0u;
    // 0x36e2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e2e4:
    // 0x36e2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2E4u;
        // 0x36e2e8: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E2ECu;
    // 0x36e2ec: 0x0  nop
    ctx->pc = 0x36e2ecu;
    // NOP
label_36e2f0:
    // 0x36e2f0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E2F0u;
    {
        const bool branch_taken_0x36e2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x36E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2F0u;
        // 0x36e2f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e2f0) {
            ctx->pc = 0x36E300u;
            goto label_36e300;
        }
    }
    ctx->pc = 0x36E2F8u;
    // 0x36e2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2F8u;
        // 0x36e2fc: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E300u;
label_36e300:
    // 0x36e300: 0x3e00008  jr          $ra
    ctx->pc = 0x36E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E300u;
        // 0x36e304: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E308u;
}
