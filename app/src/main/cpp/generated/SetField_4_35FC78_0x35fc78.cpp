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

// Function: SetField_4_35FC78
// Address: 0x35fc78 - 0x35fc88
void SetField_4_35FC78_0x35fc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_4_35FC78_0x35fc78");
#endif

    ctx->pc = 0x35fc78u;

    // 0x35fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x35FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC78u;
        // 0x35fc7c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC80u;
    // 0x35fc80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35fc84: 0x0  nop
    ctx->pc = 0x35fc84u;
    // NOP
    ctx->pc = 0x35fc88u;
}
