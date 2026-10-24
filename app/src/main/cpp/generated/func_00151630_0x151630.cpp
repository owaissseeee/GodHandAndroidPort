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

// Function: func_00151630
// Address: 0x151630 - 0x151688
void func_00151630_0x151630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151630_0x151630");
#endif

    ctx->pc = 0x151630u;

    // 0x151630: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x151630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151634: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x151634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x151638: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x151638u;
    {
        const bool branch_taken_0x151638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151638u;
        // 0x15163c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151638) {
            ctx->pc = 0x151680u;
            goto label_151680;
        }
    }
    ctx->pc = 0x151640u;
    // 0x151640: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x151644: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x151644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x151648: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151648) {
            ctx->pc = 0x15164Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151648u;
            // 0x15164c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151660u;
            goto label_151660;
        }
    }
    ctx->pc = 0x151650u;
    // 0x151650: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x151654: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x151654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x151658: 0x3e00008  jr          $ra
    ctx->pc = 0x151658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151658u;
        // 0x15165c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151660u;
label_151660:
    // 0x151660: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151660u;
    {
        const bool branch_taken_0x151660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151660) {
            ctx->pc = 0x151664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151660u;
            // 0x151664: 0x80840001  lb          $a0, 0x1($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x151668u;
    // 0x151668: 0x3e00008  jr          $ra
    ctx->pc = 0x151668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151668u;
        // 0x15166c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151670u;
label_151670:
    // 0x151670: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x151674: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151674u;
    {
        const bool branch_taken_0x151674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x151678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151674u;
        // 0x151678: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151674) {
            ctx->pc = 0x151680u;
            goto label_151680;
        }
    }
    ctx->pc = 0x15167Cu;
    // 0x15167c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151680:
    // 0x151680: 0x3e00008  jr          $ra
    ctx->pc = 0x151680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151688u;
}
