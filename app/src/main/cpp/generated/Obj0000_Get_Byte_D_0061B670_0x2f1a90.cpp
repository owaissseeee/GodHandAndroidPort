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

// Function: Obj0000_Get_Byte_D_0061B670
// Address: 0x2f1a90 - 0x2f1aa0
void Obj0000_Get_Byte_D_0061B670_0x2f1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Byte_D_0061B670_0x2f1a90");
#endif

    ctx->pc = 0x2f1a90u;

    // 0x2f1a90: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2f1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2f1a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A94u;
        // 0x2f1a98: 0x9062b670  lbu         $v0, -0x4990($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948464)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1A9Cu;
    // 0x2f1a9c: 0x0  nop
    ctx->pc = 0x2f1a9cu;
    // NOP
    ctx->pc = 0x2f1aa0u;
}
