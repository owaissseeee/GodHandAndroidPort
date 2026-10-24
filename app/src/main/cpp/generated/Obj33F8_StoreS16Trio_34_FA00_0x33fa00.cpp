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

// Function: Obj33F8_StoreS16Trio_34_FA00
// Address: 0x33fa00 - 0x33fa10
void Obj33F8_StoreS16Trio_34_FA00_0x33fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_StoreS16Trio_34_FA00_0x33fa00");
#endif

    ctx->pc = 0x33fa00u;

    // 0x33fa00: 0xa4870038  sh          $a3, 0x38($a0)
    ctx->pc = 0x33fa00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 7));
    // 0x33fa04: 0xa4850034  sh          $a1, 0x34($a0)
    ctx->pc = 0x33fa04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x33fa08: 0x3e00008  jr          $ra
    ctx->pc = 0x33FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA08u;
        // 0x33fa0c: 0xa4860036  sh          $a2, 0x36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FA10u;
}
