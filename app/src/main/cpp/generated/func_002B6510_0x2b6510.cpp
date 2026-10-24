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

// Function: func_002B6510
// Address: 0x2b6510 - 0x2b6528
void func_002B6510_0x2b6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6510_0x2b6510");
#endif

    ctx->pc = 0x2b6510u;

    // 0x2b6510: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x2b6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2b6514: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6514u;
        // 0x2b6518: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B651Cu;
    // 0x2b651c: 0x0  nop
    ctx->pc = 0x2b651cu;
    // NOP
    // 0x2b6520: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6524: 0x0  nop
    ctx->pc = 0x2b6524u;
    // NOP
    ctx->pc = 0x2b6528u;
}
