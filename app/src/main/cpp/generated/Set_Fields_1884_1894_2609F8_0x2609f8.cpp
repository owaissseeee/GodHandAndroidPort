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

// Function: Set_Fields_1884_1894_2609F8
// Address: 0x2609f8 - 0x260a10
void Set_Fields_1884_1894_2609F8_0x2609f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Fields_1884_1894_2609F8_0x2609f8");
#endif

    ctx->pc = 0x2609f8u;

    // 0x2609f8: 0xa4891894  sh          $t1, 0x1894($a0)
    ctx->pc = 0x2609f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6292), (uint16_t)GPR_U32(ctx, 9));
    // 0x2609fc: 0xac851888  sw          $a1, 0x1888($a0)
    ctx->pc = 0x2609fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6280), GPR_U32(ctx, 5));
    // 0x260a00: 0xac861884  sw          $a2, 0x1884($a0)
    ctx->pc = 0x260a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6276), GPR_U32(ctx, 6));
    // 0x260a04: 0xac87188c  sw          $a3, 0x188C($a0)
    ctx->pc = 0x260a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6284), GPR_U32(ctx, 7));
    // 0x260a08: 0x3e00008  jr          $ra
    ctx->pc = 0x260A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A08u;
        // 0x260a0c: 0xac881890  sw          $t0, 0x1890($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6288), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260A10u;
}
