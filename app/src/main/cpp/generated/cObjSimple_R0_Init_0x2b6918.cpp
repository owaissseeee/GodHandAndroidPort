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

// Function: cObjSimple_R0_Init
// Address: 0x2b6918 - 0x2b6930
void cObjSimple_R0_Init_0x2b6918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_R0_Init_0x2b6918");
#endif

    ctx->pc = 0x2b6918u;

    // 0x2b6918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b691c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2b691cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6920: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x2b6920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b6924: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x2b6924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6928: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6928u;
        // 0x2b692c: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6930u;
}
