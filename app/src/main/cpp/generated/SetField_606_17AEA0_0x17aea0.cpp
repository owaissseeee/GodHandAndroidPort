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

// Function: SetField_606_17AEA0
// Address: 0x17aea0 - 0x17aeb0
void SetField_606_17AEA0_0x17aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_606_17AEA0_0x17aea0");
#endif

    ctx->pc = 0x17aea0u;

    // 0x17aea0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17aea4: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEA4u;
        // 0x17aea8: 0xa4820606  sh          $v0, 0x606($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1542), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AEACu;
    // 0x17aeac: 0x0  nop
    ctx->pc = 0x17aeacu;
    // NOP
    ctx->pc = 0x17aeb0u;
}
