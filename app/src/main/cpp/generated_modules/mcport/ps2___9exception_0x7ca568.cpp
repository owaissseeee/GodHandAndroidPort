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
// Function: __9exception
// Address: 0x7ca568 - 0x7ca580
void ps2___9exception_0x7ca568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9exception_0x7ca568");
#endif

    ctx->pc = 0x7ca568u;

    // 0x7ca568: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ca568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ca56c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7ca56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca570: 0x24631058  addiu       $v1, $v1, 0x1058
    ctx->pc = 0x7ca570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4184));
    // 0x7ca574: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA574u;
        // 0x7ca578: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA57Cu;
    // 0x7ca57c: 0x0  nop
    ctx->pc = 0x7ca57cu;
    // NOP
    ctx->pc = 0x7ca580u;
}
} // namespace gh_mcport
