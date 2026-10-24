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

// Function: func_00354B98
// Address: 0x354b98 - 0x354bd8
void func_00354B98_0x354b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354B98_0x354b98");
#endif

    ctx->pc = 0x354b98u;

    // 0x354b98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x354b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354ba0: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x354ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x354ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354ba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354BA8u;
    {
        const bool branch_taken_0x354ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BA8u;
        // 0x354bac: 0x2866ffff  slti        $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x354ba8) {
            ctx->pc = 0x354BC0u;
            goto label_354bc0;
        }
    }
    ctx->pc = 0x354BB0u;
    // 0x354bb0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x354BB0u;
    {
        const bool branch_taken_0x354bb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x354BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BB0u;
        // 0x354bb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354bb0) {
            ctx->pc = 0x354BD0u;
            goto label_354bd0;
        }
    }
    ctx->pc = 0x354BB8u;
    // 0x354bb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x354BB8u;
    {
        const bool branch_taken_0x354bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354bb8) {
            ctx->pc = 0x354BD0u;
            goto label_354bd0;
        }
    }
    ctx->pc = 0x354BC0u;
label_354bc0:
    // 0x354bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354bc4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x354BC4u;
    ctx->pc = 0x354BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354BC4u;
    // 0x354bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x354BC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x354BCCu;
    // 0x354bcc: 0x0  nop
    ctx->pc = 0x354bccu;
    // NOP
label_354bd0:
    // 0x354bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x354BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BD0u;
        // 0x354bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354BD8u;
}
