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

// Function: func_00281260
// Address: 0x281260 - 0x281278
void func_00281260_0x281260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281260_0x281260");
#endif

    ctx->pc = 0x281260u;

    // 0x281260: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281264: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x281264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281268: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x281268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x28126c: 0x3e00008  jr          $ra
    ctx->pc = 0x28126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28126Cu;
        // 0x281270: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281274u;
    // 0x281274: 0x0  nop
    ctx->pc = 0x281274u;
    // NOP
    ctx->pc = 0x281278u;
}
