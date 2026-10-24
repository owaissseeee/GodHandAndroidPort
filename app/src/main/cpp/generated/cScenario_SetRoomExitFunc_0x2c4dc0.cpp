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

// Function: cScenario_SetRoomExitFunc
// Address: 0x2c4dc0 - 0x2c4dd0
void cScenario_SetRoomExitFunc_0x2c4dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_SetRoomExitFunc_0x2c4dc0");
#endif

    ctx->pc = 0x2c4dc0u;

    // 0x2c4dc0: 0xac8600f0  sw          $a2, 0xF0($a0)
    ctx->pc = 0x2c4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 6));
    // 0x2c4dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DC4u;
        // 0x2c4dc8: 0xac8500ec  sw          $a1, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4DCCu;
    // 0x2c4dcc: 0x0  nop
    ctx->pc = 0x2c4dccu;
    // NOP
    ctx->pc = 0x2c4dd0u;
}
