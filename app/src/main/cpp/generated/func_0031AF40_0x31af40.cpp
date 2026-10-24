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

// Function: func_0031AF40
// Address: 0x31af40 - 0x31af70
void func_0031AF40_0x31af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031AF40_0x31af40");
#endif

    ctx->pc = 0x31af40u;

    // 0x31af40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31af44: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AF44u;
    {
        const bool branch_taken_0x31af44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x31af44) {
            ctx->pc = 0x31AF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AF44u;
            // 0x31af48: 0x8c820154  lw          $v0, 0x154($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF60u;
            goto label_31af60;
        }
    }
    ctx->pc = 0x31AF4Cu;
    // 0x31af4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31af50: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AF50u;
    {
        const bool branch_taken_0x31af50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x31af50) {
            ctx->pc = 0x31AF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AF50u;
            // 0x31af54: 0x8c8204ac  lw          $v0, 0x4AC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF68u;
            goto label_31af68;
        }
    }
    ctx->pc = 0x31AF58u;
    // 0x31af58: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF58u;
        // 0x31af5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF60u;
label_31af60:
    // 0x31af60: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF60u;
        // 0x31af64: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF68u;
label_31af68:
    // 0x31af68: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF68u;
        // 0x31af6c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF70u;
}
