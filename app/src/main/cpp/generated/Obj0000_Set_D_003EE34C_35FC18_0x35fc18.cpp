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

// Function: Obj0000_Set_D_003EE34C_35FC18
// Address: 0x35fc18 - 0x35fc28
void Obj0000_Set_D_003EE34C_35FC18_0x35fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003EE34C_35FC18_0x35fc18");
#endif

    ctx->pc = 0x35fc18u;

    // 0x35fc18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35fc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC1Cu;
        // 0x35fc20: 0xac44e34c  sw          $a0, -0x1CB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959948), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC24u;
    // 0x35fc24: 0x0  nop
    ctx->pc = 0x35fc24u;
    // NOP
    ctx->pc = 0x35fc28u;
}
