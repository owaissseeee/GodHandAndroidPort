#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r110_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r110
{
// Function: getReserveRoomNo__6cEvent
// Address: 0x7995b8 - 0x7995c8
void getReserveRoomNo__6cEvent_0x7995b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getReserveRoomNo__6cEvent_0x7995b8");
#endif

    ctx->pc = 0x7995b8u;

    // 0x7995b8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x7995bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7995BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x94620008  lhu         $v0, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995C4u;
    // 0x7995c4: 0x0  nop
    ctx->pc = 0x7995c4u;
    // NOP
    ctx->pc = 0x7995c8u;
}
} // namespace gh_r110
