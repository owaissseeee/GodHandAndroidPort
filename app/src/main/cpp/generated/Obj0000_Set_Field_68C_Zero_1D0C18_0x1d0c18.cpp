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

// Function: Obj0000_Set_Field_68C_Zero_1D0C18
// Address: 0x1d0c18 - 0x1d0c28
void Obj0000_Set_Field_68C_Zero_1D0C18_0x1d0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Field_68C_Zero_1D0C18_0x1d0c18");
#endif

    ctx->pc = 0x1d0c18u;

    // 0x1d0c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C18u;
        // 0x1d0c1c: 0xac80068c  sw          $zero, 0x68C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C20u;
    // 0x1d0c20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d0c24: 0x0  nop
    ctx->pc = 0x1d0c24u;
    // NOP
    ctx->pc = 0x1d0c28u;
}
