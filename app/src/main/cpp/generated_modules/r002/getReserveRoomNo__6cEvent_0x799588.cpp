#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r002_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r002
{
// Function: getReserveRoomNo__6cEvent
// Address: 0x799588 - 0x799598
void getReserveRoomNo__6cEvent_0x799588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getReserveRoomNo__6cEvent_0x799588");
#endif

    ctx->pc = 0x799588u;

    // 0x799588: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x79958c: 0x3e00008  jr          $ra
    ctx->pc = 0x79958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x94620008  lhu         $v0, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799594u;
    // 0x799594: 0x0  nop
    ctx->pc = 0x799594u;
    // NOP
    ctx->pc = 0x799598u;
}
} // namespace gh_r002
