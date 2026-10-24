#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: getReserveRoomNo__6cEvent
// Address: 0x799938 - 0x799948
void getReserveRoomNo__6cEvent_0x799938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getReserveRoomNo__6cEvent_0x799938");
#endif

    ctx->pc = 0x799938u;

    // 0x799938: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x79993c: 0x3e00008  jr          $ra
    ctx->pc = 0x79993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x94620008  lhu         $v0, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799944u;
    // 0x799944: 0x0  nop
    ctx->pc = 0x799944u;
    // NOP
    ctx->pc = 0x799948u;
}
} // namespace gh_r003
