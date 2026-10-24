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

// Function: func_00297C88
// Address: 0x297c88 - 0x297ca0
void func_00297C88_0x297c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297C88_0x297c88");
#endif

    ctx->pc = 0x297c88u;

    // 0x297c88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x297c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297c8c: 0xa485003c  sh          $a1, 0x3C($a0)
    ctx->pc = 0x297c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 5));
    // 0x297c90: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x297c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x297c94: 0x3e00008  jr          $ra
    ctx->pc = 0x297C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C94u;
        // 0x297c98: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C9Cu;
    // 0x297c9c: 0x0  nop
    ctx->pc = 0x297c9cu;
    // NOP
    ctx->pc = 0x297ca0u;
}
