#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: StartWait__9EnemyShipRQ29EnemyShip4Ship
// Address: 0x79fd70 - 0x79fd78
void StartWait__9EnemyShipRQ29EnemyShip4Ship_0x79fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartWait__9EnemyShipRQ29EnemyShip4Ship_0x79fd70");
#endif

    ctx->pc = 0x79fd70u;

    // 0x79fd70: 0x3e00008  jr          $ra
    ctx->pc = 0x79FD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FD70u;
        // 0x79fd74: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79FD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79FD78u;
}
} // namespace gh_r501
