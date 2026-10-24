#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearBytesAt74And79To7C_13C618
// Address: 0x13c618 - 0x13c630
void ClearBytesAt74And79To7C_13C618_0x13c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearBytesAt74And79To7C_13C618_0x13c618");
#endif

    ctx->pc = 0x13c618u;

    // 0x13c618: 0xa080007c  sb          $zero, 0x7C($a0)
    ctx->pc = 0x13c618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c61c: 0xa0800074  sb          $zero, 0x74($a0)
    ctx->pc = 0x13c61cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c620: 0xa0800079  sb          $zero, 0x79($a0)
    ctx->pc = 0x13c620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c624: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x13c624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c628: 0x3e00008  jr          $ra
    ctx->pc = 0x13C628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C628u;
        // 0x13c62c: 0xa080007b  sb          $zero, 0x7B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C630u;
}
