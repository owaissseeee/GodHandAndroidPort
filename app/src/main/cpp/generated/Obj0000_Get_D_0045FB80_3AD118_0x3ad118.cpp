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

// Function: Obj0000_Get_D_0045FB80_3AD118
// Address: 0x3ad118 - 0x3ad130
void Obj0000_Get_D_0045FB80_3AD118_0x3ad118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_0045FB80_3AD118_0x3ad118");
#endif

    ctx->pc = 0x3ad118u;

    // 0x3ad118: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ad118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ad11c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD11Cu;
        // 0x3ad120: 0x2442fb80  addiu       $v0, $v0, -0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD124u;
    // 0x3ad124: 0x0  nop
    ctx->pc = 0x3ad124u;
    // NOP
    // 0x3ad128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ad128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ad12c: 0x0  nop
    ctx->pc = 0x3ad12cu;
    // NOP
    ctx->pc = 0x3ad130u;
}
