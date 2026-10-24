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

// Function: func_0033FA70
// Address: 0x33fa70 - 0x33faa0
void func_0033FA70_0x33fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FA70_0x33fa70");
#endif

    ctx->pc = 0x33fa70u;

    // 0x33fa70: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33fa74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FA74u;
    {
        const bool branch_taken_0x33fa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA74u;
        // 0x33fa78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa74) {
            ctx->pc = 0x33FA98u;
            goto label_33fa98;
        }
    }
    ctx->pc = 0x33FA7Cu;
    // 0x33fa7c: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x33fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x33fa80: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x33fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x33fa84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fa88: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x33fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x33fa8c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x33fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x33fa90: 0x3e00008  jr          $ra
    ctx->pc = 0x33FA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA90u;
        // 0x33fa94: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FA98u;
label_33fa98:
    // 0x33fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x33FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA98u;
        // 0x33fa9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FAA0u;
}
