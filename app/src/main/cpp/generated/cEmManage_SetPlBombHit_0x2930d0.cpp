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

// Function: cEmManage_SetPlBombHit
// Address: 0x2930d0 - 0x2930e0
void cEmManage_SetPlBombHit_0x2930d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetPlBombHit_0x2930d0");
#endif

    ctx->pc = 0x2930d0u;

    // 0x2930d0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2930d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2930d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2930D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D4u;
        // 0x2930d8: 0xa082053b  sb          $v0, 0x53B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1339), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930DCu;
    // 0x2930dc: 0x0  nop
    ctx->pc = 0x2930dcu;
    // NOP
    ctx->pc = 0x2930e0u;
}
