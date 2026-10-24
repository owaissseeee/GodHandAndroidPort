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

// Function: cOmb3_SetPointTbl
// Address: 0x1b5180 - 0x1b5190
void cOmb3_SetPointTbl_0x1b5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmb3_SetPointTbl_0x1b5180");
#endif

    ctx->pc = 0x1b5180u;

    // 0x1b5180: 0xa4860608  sh          $a2, 0x608($a0)
    ctx->pc = 0x1b5180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1544), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b5184: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5184u;
        // 0x1b5188: 0xac850604  sw          $a1, 0x604($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B518Cu;
    // 0x1b518c: 0x0  nop
    ctx->pc = 0x1b518cu;
    // NOP
    ctx->pc = 0x1b5190u;
}
