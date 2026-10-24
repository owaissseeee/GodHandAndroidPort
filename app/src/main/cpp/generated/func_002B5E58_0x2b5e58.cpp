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

// Function: func_002B5E58
// Address: 0x2b5e58 - 0x2b5e90
void func_002B5E58_0x2b5e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5E58_0x2b5e58");
#endif

    switch (ctx->pc) {
        case 0x2b5e70u: goto label_2b5e70;
        default: break;
    }

    ctx->pc = 0x2b5e58u;

    // 0x2b5e58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b5e5c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5E5Cu;
    {
        const bool branch_taken_0x2b5e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E5Cu;
        // 0x2b5e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e5c) {
            ctx->pc = 0x2B5E88u;
            goto label_2b5e88;
        }
    }
    ctx->pc = 0x2B5E64u;
    // 0x2b5e64: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2b5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b5e68: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5E68u;
    {
        const bool branch_taken_0x2b5e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E68u;
        // 0x2b5e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e68) {
            ctx->pc = 0x2B5E88u;
            goto label_2b5e88;
        }
    }
    ctx->pc = 0x2B5E70u;
label_2b5e70:
    // 0x2b5e70: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2b5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b5e74: 0x0  nop
    ctx->pc = 0x2b5e74u;
    // NOP
    // 0x2b5e78: 0x0  nop
    ctx->pc = 0x2b5e78u;
    // NOP
    // 0x2b5e7c: 0x0  nop
    ctx->pc = 0x2b5e7cu;
    // NOP
    // 0x2b5e80: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B5E80u;
    {
        const bool branch_taken_0x2b5e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E80u;
        // 0x2b5e84: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e80) {
            ctx->pc = 0x2B5E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5e70;
        }
    }
    ctx->pc = 0x2B5E88u;
label_2b5e88:
    // 0x2b5e88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5E90u;
}
