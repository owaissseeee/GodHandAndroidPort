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

// Function: InitStateBytes_2478B8
// Address: 0x2478b8 - 0x2478d8
void InitStateBytes_2478B8_0x2478b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStateBytes_2478B8_0x2478b8");
#endif

    ctx->pc = 0x2478b8u;

    // 0x2478b8: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x2478b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2478bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2478bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2478c0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2478c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2478c4: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2478c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2478c8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2478c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2478cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2478CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2478D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478CCu;
        // 0x2478d0: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2478CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2478D4u;
    // 0x2478d4: 0x0  nop
    ctx->pc = 0x2478d4u;
    // NOP
    ctx->pc = 0x2478d8u;
}
