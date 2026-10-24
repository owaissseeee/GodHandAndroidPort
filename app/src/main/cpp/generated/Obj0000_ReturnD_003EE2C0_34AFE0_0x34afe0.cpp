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

// Function: Obj0000_ReturnD_003EE2C0_34AFE0
// Address: 0x34afe0 - 0x34aff0
void Obj0000_ReturnD_003EE2C0_34AFE0_0x34afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_ReturnD_003EE2C0_34AFE0_0x34afe0");
#endif

    ctx->pc = 0x34afe0u;

    // 0x34afe0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34afe4: 0x3e00008  jr          $ra
    ctx->pc = 0x34AFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFE4u;
        // 0x34afe8: 0x8c62e2c0  lw          $v0, -0x1D40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AFECu;
    // 0x34afec: 0x0  nop
    ctx->pc = 0x34afecu;
    // NOP
    ctx->pc = 0x34aff0u;
}
