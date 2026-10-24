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

// Function: func_0030A298
// Address: 0x30a298 - 0x30a2b0
void func_0030A298_0x30a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030A298_0x30a298");
#endif

    ctx->pc = 0x30a298u;

    // 0x30a298: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30a298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A29Cu;
        // 0x30a2a0: 0x24421c00  addiu       $v0, $v0, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A2A4u;
    // 0x30a2a4: 0x0  nop
    ctx->pc = 0x30a2a4u;
    // NOP
    // 0x30a2a8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x30a2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a2ac: 0x0  nop
    ctx->pc = 0x30a2acu;
    // NOP
    ctx->pc = 0x30a2b0u;
}
