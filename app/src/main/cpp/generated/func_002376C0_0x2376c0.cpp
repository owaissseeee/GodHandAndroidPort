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

// Function: func_002376C0
// Address: 0x2376c0 - 0x2376d0
void func_002376C0_0x2376c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002376C0_0x2376c0");
#endif

    ctx->pc = 0x2376c0u;

    // 0x2376c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2376c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2376c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2376C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376C4u;
        // 0x2376c8: 0xa4820568  sh          $v0, 0x568($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2376CCu;
    // 0x2376cc: 0x0  nop
    ctx->pc = 0x2376ccu;
    // NOP
    ctx->pc = 0x2376d0u;
}
