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
// Function: isSetReserveEventSaveEnable2__6cEvent
// Address: 0x799598 - 0x7995b0
void isSetReserveEventSaveEnable2__6cEvent_0x799598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isSetReserveEventSaveEnable2__6cEvent_0x799598");
#endif

    ctx->pc = 0x799598u;

    // 0x799598: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x79959c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7995a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x7995a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7995A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A4u;
        // 0x7995a8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995ACu;
    // 0x7995ac: 0x0  nop
    ctx->pc = 0x7995acu;
    // NOP
    ctx->pc = 0x7995b0u;
}
} // namespace gh_r008
