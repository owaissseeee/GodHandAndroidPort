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

// Function: Obj0000_Set_Bytes_2F4_2F7_2F5_2F6_27DCD0
// Address: 0x27dcd0 - 0x27dce8
void Obj0000_Set_Bytes_2F4_2F7_2F5_2F6_27DCD0_0x27dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Bytes_2F4_2F7_2F5_2F6_27DCD0_0x27dcd0");
#endif

    ctx->pc = 0x27dcd0u;

    // 0x27dcd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x27dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27dcd4: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x27dcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x27dcd8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x27dcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dcdc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x27dcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dce0: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCE0u;
        // 0x27dce4: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DCE8u;
}
