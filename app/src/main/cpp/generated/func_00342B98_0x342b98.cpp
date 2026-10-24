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

// Function: func_00342B98
// Address: 0x342b98 - 0x342bc8
void func_00342B98_0x342b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342B98_0x342b98");
#endif

    ctx->pc = 0x342b98u;

    // 0x342b98: 0x3e00008  jr          $ra
    ctx->pc = 0x342B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B98u;
        // 0x342b9c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342BA0u;
    // 0x342ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x342ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x342ba4: 0x0  nop
    ctx->pc = 0x342ba4u;
    // NOP
    // 0x342ba8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x342ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x342bac: 0x0  nop
    ctx->pc = 0x342bacu;
    // NOP
    // 0x342bb0: 0x0  nop
    ctx->pc = 0x342bb0u;
    // NOP
    // 0x342bb4: 0x0  nop
    ctx->pc = 0x342bb4u;
    // NOP
    // 0x342bb8: 0x0  nop
    ctx->pc = 0x342bb8u;
    // NOP
    // 0x342bbc: 0x0  nop
    ctx->pc = 0x342bbcu;
    // NOP
    // 0x342bc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x342bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x342bc4: 0x0  nop
    ctx->pc = 0x342bc4u;
    // NOP
    ctx->pc = 0x342bc8u;
}
