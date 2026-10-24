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

// Function: func_00306A48
// Address: 0x306a48 - 0x306a88
void func_00306A48_0x306a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306A48_0x306a48");
#endif

    ctx->pc = 0x306a48u;

    // 0x306a48: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x306a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x306a4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x306a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x306a50: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x306a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306a54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306A54u;
    {
        const bool branch_taken_0x306a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A54u;
        // 0x306a58: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a54) {
            ctx->pc = 0x306A64u;
            goto label_306a64;
        }
    }
    ctx->pc = 0x306A5Cu;
    // 0x306a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x306A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A5Cu;
        // 0x306a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306A64u;
label_306a64:
    // 0x306a64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x306a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x306a68: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x306a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x306a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306A6Cu;
    {
        const bool branch_taken_0x306a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A6Cu;
        // 0x306a70: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a6c) {
            ctx->pc = 0x306A80u;
            goto label_306a80;
        }
    }
    ctx->pc = 0x306A74u;
    // 0x306a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306a78: 0x3e00008  jr          $ra
    ctx->pc = 0x306A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A78u;
        // 0x306a7c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306A80u;
label_306a80:
    // 0x306a80: 0x3e00008  jr          $ra
    ctx->pc = 0x306A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A80u;
        // 0x306a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306A88u;
}
