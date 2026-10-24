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

// Function: ClearFields_B0_AC_147018
// Address: 0x147018 - 0x147028
void ClearFields_B0_AC_147018_0x147018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields_B0_AC_147018_0x147018");
#endif

    ctx->pc = 0x147018u;

    // 0x147018: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x147018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14701c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x14701cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x147020: 0x3e00008  jr          $ra
    ctx->pc = 0x147020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147020u;
        // 0x147024: 0xa48200ac  sh          $v0, 0xAC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 172), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147028u;
}
