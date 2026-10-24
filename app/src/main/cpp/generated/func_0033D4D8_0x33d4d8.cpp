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

// Function: func_0033D4D8
// Address: 0x33d4d8 - 0x33d508
void func_0033D4D8_0x33d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D4D8_0x33d4d8");
#endif

    switch (ctx->pc) {
        case 0x33d4e0u: goto label_33d4e0;
        default: break;
    }

    ctx->pc = 0x33d4d8u;

    // 0x33d4d8: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x33D4D8u;
    {
        const bool branch_taken_0x33d4d8 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x33d4d8) {
            ctx->pc = 0x33D4FCu;
            goto label_33d4fc;
        }
    }
    ctx->pc = 0x33D4E0u;
label_33d4e0:
    // 0x33d4e0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x33d4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d4e4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x33d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x33d4e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33d4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33d4ec: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x33d4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d4f0: 0x0  nop
    ctx->pc = 0x33d4f0u;
    // NOP
    // 0x33d4f4: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33D4F4u;
    {
        const bool branch_taken_0x33d4f4 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x33D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4F4u;
        // 0x33d4f8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4f4) {
            ctx->pc = 0x33D4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d4e0;
        }
    }
    ctx->pc = 0x33D4FCu;
label_33d4fc:
    // 0x33d4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x33D4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D504u;
    // 0x33d504: 0x0  nop
    ctx->pc = 0x33d504u;
    // NOP
    ctx->pc = 0x33d508u;
}
