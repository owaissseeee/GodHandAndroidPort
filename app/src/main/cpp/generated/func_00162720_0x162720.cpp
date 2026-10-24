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

// Function: func_00162720
// Address: 0x162720 - 0x162750
void func_00162720_0x162720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00162720_0x162720");
#endif

    ctx->pc = 0x162720u;

    // 0x162720: 0x90830064  lbu         $v1, 0x64($a0)
    ctx->pc = 0x162720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x162724: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162724u;
    {
        const bool branch_taken_0x162724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162724u;
        // 0x162728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162724) {
            ctx->pc = 0x16273Cu;
            goto label_16273c;
        }
    }
    ctx->pc = 0x16272Cu;
    // 0x16272c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16272Cu;
    {
        const bool branch_taken_0x16272c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16272Cu;
        // 0x162730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16272c) {
            ctx->pc = 0x162748u;
            goto label_162748;
        }
    }
    ctx->pc = 0x162734u;
    // 0x162734: 0x3e00008  jr          $ra
    ctx->pc = 0x162734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16273Cu;
label_16273c:
    // 0x16273c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162740: 0x3e00008  jr          $ra
    ctx->pc = 0x162740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162740u;
        // 0x162744: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162748u;
label_162748:
    // 0x162748: 0x3e00008  jr          $ra
    ctx->pc = 0x162748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162748u;
        // 0x16274c: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162750u;
}
