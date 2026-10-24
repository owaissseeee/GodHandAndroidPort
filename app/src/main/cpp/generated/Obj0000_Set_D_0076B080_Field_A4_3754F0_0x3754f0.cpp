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

// Function: Obj0000_Set_D_0076B080_Field_A4_3754F0
// Address: 0x3754f0 - 0x375500
void Obj0000_Set_D_0076B080_Field_A4_3754F0_0x3754f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_0076B080_Field_A4_3754F0_0x3754f0");
#endif

    ctx->pc = 0x3754f0u;

    // 0x3754f0: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x3754f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x3754f4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3754f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3754f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3754F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3754FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754F8u;
        // 0x3754fc: 0xac43b080  sw          $v1, -0x4F80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3754F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375500u;
}
