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
// Function: __10bad_typeid
// Address: 0x7c9ce8 - 0x7c9d00
void ps2___10bad_typeid_0x7c9ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___10bad_typeid_0x7c9ce8");
#endif

    ctx->pc = 0x7c9ce8u;

    // 0x7c9ce8: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9cec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7c9cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9cf0: 0x24630f88  addiu       $v1, $v1, 0xF88
    ctx->pc = 0x7c9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
    // 0x7c9cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9CF4u;
        // 0x7c9cf8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9CFCu;
    // 0x7c9cfc: 0x0  nop
    ctx->pc = 0x7c9cfcu;
    // NOP
    ctx->pc = 0x7c9d00u;
}
} // namespace gh_mcport
