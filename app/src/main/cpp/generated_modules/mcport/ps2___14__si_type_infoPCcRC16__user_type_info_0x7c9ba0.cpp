#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __14__si_type_infoPCcRC16__user_type_info
// Address: 0x7c9ba0 - 0x7c9bc0
void ps2___14__si_type_infoPCcRC16__user_type_info_0x7c9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___14__si_type_infoPCcRC16__user_type_info_0x7c9ba0");
#endif

    ctx->pc = 0x7c9ba0u;

    // 0x7c9ba0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c9ba4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7c9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7c9ba8: 0x24420f58  addiu       $v0, $v0, 0xF58
    ctx->pc = 0x7c9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3928));
    // 0x7c9bac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x7c9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x7c9bb0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c9bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7c9bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9BB4u;
        // 0x7c9bb8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9BBCu;
    // 0x7c9bbc: 0x0  nop
    ctx->pc = 0x7c9bbcu;
    // NOP
    ctx->pc = 0x7c9bc0u;
}
} // namespace gh_mcport
