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

// Function: func_0038BB70
// Address: 0x38bb70 - 0x38bb98
void func_0038BB70_0x38bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038BB70_0x38bb70");
#endif

    ctx->pc = 0x38bb70u;

    // 0x38bb70: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BB70u;
    {
        const bool branch_taken_0x38bb70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB70u;
        // 0x38bb74: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb70) {
            ctx->pc = 0x38BB84u;
            goto label_38bb84;
        }
    }
    ctx->pc = 0x38BB78u;
    // 0x38bb78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x38bb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x38BB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB7Cu;
        // 0x38bb80: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB84u;
label_38bb84:
    // 0x38bb84: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x38bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x38bb88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38bb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x38BB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB8Cu;
        // 0x38bb90: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB94u;
    // 0x38bb94: 0x0  nop
    ctx->pc = 0x38bb94u;
    // NOP
    ctx->pc = 0x38bb98u;
}
