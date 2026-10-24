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
// Function: isSetReserveEventPosition__6cEvent
// Address: 0x7995e0 - 0x7995f4
void isSetReserveEventPosition__6cEvent_0x7995e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isSetReserveEventPosition__6cEvent_0x7995e0");
#endif

    ctx->pc = 0x7995e0u;

    // 0x7995e0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x7995e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7995e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x7995ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7995ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995F4u;
}
} // namespace gh_r110
