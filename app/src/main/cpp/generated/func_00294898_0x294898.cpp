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

// Function: func_00294898
// Address: 0x294898 - 0x2948c8
void func_00294898_0x294898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294898_0x294898");
#endif

    switch (ctx->pc) {
        case 0x2948a0u: goto label_2948a0;
        default: break;
    }

    ctx->pc = 0x294898u;

    // 0x294898: 0x248405ac  addiu       $a0, $a0, 0x5AC
    ctx->pc = 0x294898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1452));
    // 0x29489c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29489cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2948a0:
    // 0x2948a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2948a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2948A4u;
    {
        const bool branch_taken_0x2948a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2948A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948A4u;
        // 0x2948a8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948a4) {
            ctx->pc = 0x2948B4u;
            goto label_2948b4;
        }
    }
    ctx->pc = 0x2948ACu;
    // 0x2948ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2948ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2948B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948ACu;
        // 0x2948b0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948B4u;
label_2948b4:
    // 0x2948b4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2948b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2948b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2948B8u;
    {
        const bool branch_taken_0x2948b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2948BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948B8u;
        // 0x2948bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948b8) {
            ctx->pc = 0x2948A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2948a0;
        }
    }
    ctx->pc = 0x2948C0u;
    // 0x2948c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2948C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948C8u;
}
