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
// Function: GameStartWait__9EnemyShipRQ29EnemyShip4Ship
// Address: 0x79fd50 - 0x79fd70
void GameStartWait__9EnemyShipRQ29EnemyShip4Ship_0x79fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GameStartWait__9EnemyShipRQ29EnemyShip4Ship_0x79fd50");
#endif

    ctx->pc = 0x79fd50u;

    // 0x79fd50: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x79fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x79fd54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79fd58: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79FD58u;
    {
        const bool branch_taken_0x79fd58 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FD58u;
        // 0x79fd5c: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fd58) {
            ctx->pc = 0x79FD68u;
            goto label_79fd68;
        }
    }
    ctx->pc = 0x79FD60u;
    // 0x79fd60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79fd64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x79fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_79fd68:
    // 0x79fd68: 0x3e00008  jr          $ra
    ctx->pc = 0x79FD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FD68u;
        // 0x79fd6c: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79FD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79FD70u;
}
} // namespace gh_r501
