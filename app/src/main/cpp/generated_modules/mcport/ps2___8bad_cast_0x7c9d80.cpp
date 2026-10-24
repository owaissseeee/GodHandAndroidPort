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
// Function: __8bad_cast
// Address: 0x7c9d80 - 0x7c9d98
void ps2___8bad_cast_0x7c9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___8bad_cast_0x7c9d80");
#endif

    ctx->pc = 0x7c9d80u;

    // 0x7c9d80: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9d84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7c9d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9d88: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x7c9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x7c9d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9D8Cu;
        // 0x7c9d90: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9D94u;
    // 0x7c9d94: 0x0  nop
    ctx->pc = 0x7c9d94u;
    // NOP
    ctx->pc = 0x7c9d98u;
}
} // namespace gh_mcport
