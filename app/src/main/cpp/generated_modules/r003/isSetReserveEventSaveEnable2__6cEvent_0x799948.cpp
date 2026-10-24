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
// Function: isSetReserveEventSaveEnable2__6cEvent
// Address: 0x799948 - 0x799960
void isSetReserveEventSaveEnable2__6cEvent_0x799948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isSetReserveEventSaveEnable2__6cEvent_0x799948");
#endif

    ctx->pc = 0x799948u;

    // 0x799948: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x79994c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799950: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x799954: 0x3e00008  jr          $ra
    ctx->pc = 0x799954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79995Cu;
    // 0x79995c: 0x0  nop
    ctx->pc = 0x79995cu;
    // NOP
    ctx->pc = 0x799960u;
}
} // namespace gh_r003
