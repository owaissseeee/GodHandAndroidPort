#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r008_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r008
{
// Function: getReserveJmpPointNo__6cEvent
// Address: 0x799578 - 0x799588
void getReserveJmpPointNo__6cEvent_0x799578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getReserveJmpPointNo__6cEvent_0x799578");
#endif

    ctx->pc = 0x799578u;

    // 0x799578: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x79957c: 0x3e00008  jr          $ra
    ctx->pc = 0x79957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0x9462000a  lhu         $v0, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799584u;
    // 0x799584: 0x0  nop
    ctx->pc = 0x799584u;
    // NOP
    ctx->pc = 0x799588u;
}
} // namespace gh_r008
