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

// Function: func_00161B30
// Address: 0x161b30 - 0x161b60
void func_00161B30_0x161b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161B30_0x161b30");
#endif

    ctx->pc = 0x161b30u;

    // 0x161b30: 0x90830064  lbu         $v1, 0x64($a0)
    ctx->pc = 0x161b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x161b34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161B34u;
    {
        const bool branch_taken_0x161b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B34u;
        // 0x161b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b34) {
            ctx->pc = 0x161B4Cu;
            goto label_161b4c;
        }
    }
    ctx->pc = 0x161B3Cu;
    // 0x161b3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161B3Cu;
    {
        const bool branch_taken_0x161b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B3Cu;
        // 0x161b40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b3c) {
            ctx->pc = 0x161B58u;
            goto label_161b58;
        }
    }
    ctx->pc = 0x161B44u;
    // 0x161b44: 0x3e00008  jr          $ra
    ctx->pc = 0x161B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161B4Cu;
label_161b4c:
    // 0x161b4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x161b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x161b50: 0x3e00008  jr          $ra
    ctx->pc = 0x161B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B50u;
        // 0x161b54: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161B58u;
label_161b58:
    // 0x161b58: 0x3e00008  jr          $ra
    ctx->pc = 0x161B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B58u;
        // 0x161b5c: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161B60u;
}
