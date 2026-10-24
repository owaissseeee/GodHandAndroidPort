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

// Function: Obj0000_Set_Ptr_Field_100_2BA580
// Address: 0x2ba580 - 0x2ba590
void Obj0000_Set_Ptr_Field_100_2BA580_0x2ba580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Ptr_Field_100_2BA580_0x2ba580");
#endif

    ctx->pc = 0x2ba580u;

    // 0x2ba580: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ba580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ba584: 0x2442bed0  addiu       $v0, $v0, -0x4130
    ctx->pc = 0x2ba584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    // 0x2ba588: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA588u;
        // 0x2ba58c: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA590u;
}
