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

// Function: SetField_2F6_1C2308
// Address: 0x1c2308 - 0x1c2318
void SetField_2F6_1C2308_0x1c2308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_2F6_1C2308_0x1c2308");
#endif

    ctx->pc = 0x1c2308u;

    // 0x1c2308: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c230c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C230Cu;
        // 0x1c2310: 0xa08202f6  sb          $v0, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2314u;
    // 0x1c2314: 0x0  nop
    ctx->pc = 0x1c2314u;
    // NOP
    ctx->pc = 0x1c2318u;
}
