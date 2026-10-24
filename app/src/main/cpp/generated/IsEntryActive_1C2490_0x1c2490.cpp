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

// Function: IsEntryActive_1C2490
// Address: 0x1c2490 - 0x1c24a0
void IsEntryActive_1C2490_0x1c2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsEntryActive_1C2490_0x1c2490");
#endif

    ctx->pc = 0x1c2490u;

    // 0x1c2490: 0x90820660  lbu         $v0, 0x660($a0)
    ctx->pc = 0x1c2490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1632)));
    // 0x1c2494: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2494u;
        // 0x1c2498: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C249Cu;
    // 0x1c249c: 0x0  nop
    ctx->pc = 0x1c249cu;
    // NOP
    ctx->pc = 0x1c24a0u;
}
