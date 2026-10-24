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

// Function: pl00_setEventWait
// Address: 0x12c0d8 - 0x12c0f8
void pl00_setEventWait_0x12c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_setEventWait_0x12c0d8");
#endif

    ctx->pc = 0x12c0d8u;

    // 0x12c0d8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x12c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12c0dc: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x12c0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0e0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x12c0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c0e4: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x12c0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0E8u;
        // 0x12c0ec: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C0F0u;
    // 0x12c0f0: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x12c0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0f4: 0x0  nop
    ctx->pc = 0x12c0f4u;
    // NOP
    ctx->pc = 0x12c0f8u;
}
