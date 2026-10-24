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

// Function: Obj0000_Set_D_003EE2BC_358A28
// Address: 0x358a28 - 0x358a38
void Obj0000_Set_D_003EE2BC_358A28_0x358a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003EE2BC_358A28_0x358a28");
#endif

    ctx->pc = 0x358a28u;

    // 0x358a28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x358a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x358a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x358A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A2Cu;
        // 0x358a30: 0xac44e2bc  sw          $a0, -0x1D44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959804), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358A34u;
    // 0x358a34: 0x0  nop
    ctx->pc = 0x358a34u;
    // NOP
    ctx->pc = 0x358a38u;
}
