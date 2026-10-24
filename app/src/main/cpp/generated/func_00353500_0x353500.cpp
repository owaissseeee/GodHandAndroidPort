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

// Function: func_00353500
// Address: 0x353500 - 0x353550
void func_00353500_0x353500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353500_0x353500");
#endif

    ctx->pc = 0x353500u;

    // 0x353500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353504: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x353504u;
    {
        const bool branch_taken_0x353504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x353508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353504u;
        // 0x353508: 0x24840a0c  addiu       $a0, $a0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353504) {
            ctx->pc = 0x353540u;
            goto label_353540;
        }
    }
    ctx->pc = 0x35350Cu;
    // 0x35350c: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x35350cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x353510: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353510u;
    {
        const bool branch_taken_0x353510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353510u;
        // 0x353514: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353510) {
            ctx->pc = 0x353530u;
            goto label_353530;
        }
    }
    ctx->pc = 0x353518u;
    // 0x353518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35351c: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35351Cu;
    {
        const bool branch_taken_0x35351c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x35351c) {
            ctx->pc = 0x353520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35351Cu;
            // 0x353520: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353544u;
            goto label_353544;
        }
    }
    ctx->pc = 0x353524u;
    // 0x353524: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x353524u;
    {
        const bool branch_taken_0x353524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353524) {
            ctx->pc = 0x353548u;
            goto label_353548;
        }
    }
    ctx->pc = 0x35352Cu;
    // 0x35352c: 0x0  nop
    ctx->pc = 0x35352cu;
    // NOP
label_353530:
    // 0x353530: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353530u;
    {
        const bool branch_taken_0x353530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x353530) {
            ctx->pc = 0x353534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353530u;
            // 0x353534: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353544u;
            goto label_353544;
        }
    }
    ctx->pc = 0x353538u;
    // 0x353538: 0x3e00008  jr          $ra
    ctx->pc = 0x353538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353538u;
        // 0x35353c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353540u;
label_353540:
    // 0x353540: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x353540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_353544:
    // 0x353544: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x353544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_353548:
    // 0x353548: 0x3e00008  jr          $ra
    ctx->pc = 0x353548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353550u;
}
