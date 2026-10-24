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

// Function: Slot2_PayoutNone
// Address: 0x1e66c0 - 0x1e6718
void Slot2_PayoutNone_0x1e66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_PayoutNone_0x1e66c0");
#endif

    ctx->pc = 0x1e66c0u;

    // 0x1e66c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e66c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e66c8: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E66C8u;
    {
        const bool branch_taken_0x1e66c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66C8u;
        // 0x1e66cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66c8) {
            ctx->pc = 0x1E6700u;
            goto label_1e6700;
        }
    }
    ctx->pc = 0x1E66D0u;
    // 0x1e66d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E66D0u;
    {
        const bool branch_taken_0x1e66d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66d0) {
            ctx->pc = 0x1E66D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E66D0u;
            // 0x1e66d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E66E8u;
            goto label_1e66e8;
        }
    }
    ctx->pc = 0x1E66D8u;
    // 0x1e66d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E66D8u;
    {
        const bool branch_taken_0x1e66d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66d8) {
            ctx->pc = 0x1E66F8u;
            goto label_1e66f8;
        }
    }
    ctx->pc = 0x1E66E0u;
    // 0x1e66e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E66E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E66E8u;
label_1e66e8:
    // 0x1e66e8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E66E8u;
    {
        const bool branch_taken_0x1e66e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e66e8) {
            ctx->pc = 0x1E66ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E66E8u;
            // 0x1e66ec: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E670Cu;
            goto label_1e670c;
        }
    }
    ctx->pc = 0x1E66F0u;
    // 0x1e66f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E66F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E66F8u;
label_1e66f8:
    // 0x1e66f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E66F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66F8u;
        // 0x1e66fc: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6700u;
label_1e6700:
    // 0x1e6700: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6704: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6704u;
        // 0x1e6708: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E670Cu;
label_1e670c:
    // 0x1e670c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e670cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e6710: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6710u;
        // 0x1e6714: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6718u;
}
