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

// Function: Slot2_SetSlotLayer
// Address: 0x1e6780 - 0x1e67a8
void Slot2_SetSlotLayer_0x1e6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_SetSlotLayer_0x1e6780");
#endif

    switch (ctx->pc) {
        case 0x1e6788u: goto label_1e6788;
        default: break;
    }

    ctx->pc = 0x1e6780u;

    // 0x1e6780: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x1e6784: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e6788:
    // 0x1e6788: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e678c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e6790: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1e6790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e6794: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e6798: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E6798u;
    {
        const bool branch_taken_0x1e6798 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6798u;
        // 0x1e679c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6798) {
            ctx->pc = 0x1E6788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6788;
        }
    }
    ctx->pc = 0x1E67A0u;
    // 0x1e67a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E67A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E67A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E67A8u;
}
