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

// Function: Obj0000_Set_Field_424_1595E8
// Address: 0x1595e8 - 0x1595f0
void Obj0000_Set_Field_424_1595E8_0x1595e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Field_424_1595E8_0x1595e8");
#endif

    ctx->pc = 0x1595e8u;

    // 0x1595e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1595E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1595ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595E8u;
        // 0x1595ec: 0xac850424  sw          $a1, 0x424($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1595E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595F0u;
}
