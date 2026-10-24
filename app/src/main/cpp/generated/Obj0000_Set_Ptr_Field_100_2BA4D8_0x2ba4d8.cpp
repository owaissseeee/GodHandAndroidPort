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

// Function: Obj0000_Set_Ptr_Field_100_2BA4D8
// Address: 0x2ba4d8 - 0x2ba4e8
void Obj0000_Set_Ptr_Field_100_2BA4D8_0x2ba4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Ptr_Field_100_2BA4D8_0x2ba4d8");
#endif

    ctx->pc = 0x2ba4d8u;

    // 0x2ba4d8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ba4dc: 0x2442bed0  addiu       $v0, $v0, -0x4130
    ctx->pc = 0x2ba4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    // 0x2ba4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4E0u;
        // 0x2ba4e4: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA4E8u;
}
