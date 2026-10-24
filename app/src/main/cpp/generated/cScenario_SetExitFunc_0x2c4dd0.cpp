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

// Function: cScenario_SetExitFunc
// Address: 0x2c4dd0 - 0x2c4de0
void cScenario_SetExitFunc_0x2c4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_SetExitFunc_0x2c4dd0");
#endif

    ctx->pc = 0x2c4dd0u;

    // 0x2c4dd0: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x2c4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
    // 0x2c4dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DD4u;
        // 0x2c4dd8: 0xac8500f4  sw          $a1, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4DDCu;
    // 0x2c4ddc: 0x0  nop
    ctx->pc = 0x2c4ddcu;
    // NOP
    ctx->pc = 0x2c4de0u;
}
