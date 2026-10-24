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

// Function: Obj33F8_SetFlag_D003EB850_FB68
// Address: 0x33fb68 - 0x33fb78
void Obj33F8_SetFlag_D003EB850_FB68_0x33fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_SetFlag_D003EB850_FB68_0x33fb68");
#endif

    ctx->pc = 0x33fb68u;

    // 0x33fb68: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33fb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fb70: 0x3e00008  jr          $ra
    ctx->pc = 0x33FB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB70u;
        // 0x33fb74: 0xac62b850  sw          $v0, -0x47B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FB78u;
}
