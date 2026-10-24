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

// Function: StoreMotionParams_2609E0
// Address: 0x2609e0 - 0x2609f8
void StoreMotionParams_2609E0_0x2609e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreMotionParams_2609E0_0x2609e0");
#endif

    ctx->pc = 0x2609e0u;

    // 0x2609e0: 0xa4891880  sh          $t1, 0x1880($a0)
    ctx->pc = 0x2609e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6272), (uint16_t)GPR_U32(ctx, 9));
    // 0x2609e4: 0xac851874  sw          $a1, 0x1874($a0)
    ctx->pc = 0x2609e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6260), GPR_U32(ctx, 5));
    // 0x2609e8: 0xac861870  sw          $a2, 0x1870($a0)
    ctx->pc = 0x2609e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6256), GPR_U32(ctx, 6));
    // 0x2609ec: 0xac871878  sw          $a3, 0x1878($a0)
    ctx->pc = 0x2609ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6264), GPR_U32(ctx, 7));
    // 0x2609f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2609F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2609F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609F0u;
        // 0x2609f4: 0xac88187c  sw          $t0, 0x187C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2609F8u;
}
