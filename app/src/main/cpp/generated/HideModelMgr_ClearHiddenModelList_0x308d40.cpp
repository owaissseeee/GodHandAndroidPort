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

// Function: HideModelMgr_ClearHiddenModelList
// Address: 0x308d40 - 0x308d68
void HideModelMgr_ClearHiddenModelList_0x308d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HideModelMgr_ClearHiddenModelList_0x308d40");
#endif

    switch (ctx->pc) {
        case 0x308d48u: goto label_308d48;
        default: break;
    }

    ctx->pc = 0x308d40u;

    // 0x308d40: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x308d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x308d44: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x308d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_308d48:
    // 0x308d48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x308d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x308d4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x308d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x308d50: 0x0  nop
    ctx->pc = 0x308d50u;
    // NOP
    // 0x308d54: 0x0  nop
    ctx->pc = 0x308d54u;
    // NOP
    // 0x308d58: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x308D58u;
    {
        const bool branch_taken_0x308d58 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x308D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D58u;
        // 0x308d5c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d58) {
            ctx->pc = 0x308D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308d48;
        }
    }
    ctx->pc = 0x308D60u;
    // 0x308d60: 0x3e00008  jr          $ra
    ctx->pc = 0x308D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D68u;
}
