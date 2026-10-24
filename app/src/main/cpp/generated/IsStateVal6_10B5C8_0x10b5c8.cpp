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

// Function: IsStateVal6_10B5C8
// Address: 0x10b5c8 - 0x10b5f0
void IsStateVal6_10B5C8_0x10b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsStateVal6_10B5C8_0x10b5c8");
#endif

    ctx->pc = 0x10b5c8u;

    // 0x10b5c8: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x10b5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x10b5cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B5CCu;
    {
        const bool branch_taken_0x10b5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b5cc) {
            ctx->pc = 0x10B5E4u;
            goto label_10b5e4;
        }
    }
    ctx->pc = 0x10B5D4u;
    // 0x10b5d4: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x10b5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x10b5d8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x10b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x10b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5DCu;
        // 0x10b5e0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5E4u;
label_10b5e4:
    // 0x10b5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5E4u;
        // 0x10b5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5ECu;
    // 0x10b5ec: 0x0  nop
    ctx->pc = 0x10b5ecu;
    // NOP
    ctx->pc = 0x10b5f0u;
}
