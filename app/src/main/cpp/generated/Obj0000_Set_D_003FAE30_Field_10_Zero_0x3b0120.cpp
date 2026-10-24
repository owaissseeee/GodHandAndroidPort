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

// Function: Obj0000_Set_D_003FAE30_Field_10_Zero
// Address: 0x3b0120 - 0x3b0130
void Obj0000_Set_D_003FAE30_Field_10_Zero_0x3b0120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003FAE30_Field_10_Zero_0x3b0120");
#endif

    ctx->pc = 0x3b0120u;

    // 0x3b0120: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b0120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b0124: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0124u;
        // 0x3b0128: 0xac40ae40  sw          $zero, -0x51C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B012Cu;
    // 0x3b012c: 0x0  nop
    ctx->pc = 0x3b012cu;
    // NOP
    ctx->pc = 0x3b0130u;
}
