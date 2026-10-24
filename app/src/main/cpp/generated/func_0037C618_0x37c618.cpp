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

// Function: func_0037C618
// Address: 0x37c618 - 0x37c630
void func_0037C618_0x37c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C618_0x37c618");
#endif

    ctx->pc = 0x37c618u;

    // 0x37c618: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x37c618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37c61c: 0x94a3003c  lhu         $v1, 0x3C($a1)
    ctx->pc = 0x37c61cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x37c620: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x37c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x37c624: 0xa4830048  sh          $v1, 0x48($a0)
    ctx->pc = 0x37c624u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c628: 0x3e00008  jr          $ra
    ctx->pc = 0x37C628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C628u;
        // 0x37c62c: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C630u;
}
