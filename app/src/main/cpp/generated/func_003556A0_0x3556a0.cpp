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

// Function: func_003556A0
// Address: 0x3556a0 - 0x3556c8
void func_003556A0_0x3556a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003556A0_0x3556a0");
#endif

    ctx->pc = 0x3556a0u;

    // 0x3556a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3556A0u;
    {
        const bool branch_taken_0x3556a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3556A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556A0u;
        // 0x3556a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556a0) {
            ctx->pc = 0x3556C0u;
            goto label_3556c0;
        }
    }
    ctx->pc = 0x3556A8u;
    // 0x3556a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3556a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3556ac: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3556ACu;
    {
        const bool branch_taken_0x3556ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3556ac) {
            ctx->pc = 0x3556B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3556ACu;
            // 0x3556b0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3556C0u;
            goto label_3556c0;
        }
    }
    ctx->pc = 0x3556B4u;
    // 0x3556b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3556b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3556b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3556B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3556BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556B8u;
        // 0x3556bc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3556B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3556C0u;
label_3556c0:
    // 0x3556c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3556C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3556C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3556C8u;
}
