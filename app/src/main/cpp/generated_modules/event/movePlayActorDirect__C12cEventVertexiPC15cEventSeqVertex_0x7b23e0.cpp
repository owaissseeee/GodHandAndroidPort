#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlayActorDirect__C12cEventVertexiPC15cEventSeqVertex
// Address: 0x7b23e0 - 0x7b23e8
void movePlayActorDirect__C12cEventVertexiPC15cEventSeqVertex_0x7b23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayActorDirect__C12cEventVertexiPC15cEventSeqVertex_0x7b23e0");
#endif

    ctx->pc = 0x7b23e0u;

    // 0x7b23e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7B23E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B23E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B23E8u;
}
} // namespace gh_event
