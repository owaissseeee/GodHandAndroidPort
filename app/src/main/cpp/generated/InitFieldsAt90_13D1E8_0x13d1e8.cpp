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

// Function: InitFieldsAt90_13D1E8
// Address: 0x13d1e8 - 0x13d200
void InitFieldsAt90_13D1E8_0x13d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFieldsAt90_13D1E8_0x13d1e8");
#endif

    ctx->pc = 0x13d1e8u;

    // 0x13d1e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d1ec: 0xa0800092  sb          $zero, 0x92($a0)
    ctx->pc = 0x13d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 146), (uint8_t)GPR_U32(ctx, 0));
    // 0x13d1f0: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x13d1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x13d1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1F4u;
        // 0x13d1f8: 0xa0800093  sb          $zero, 0x93($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 147), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D1FCu;
    // 0x13d1fc: 0x0  nop
    ctx->pc = 0x13d1fcu;
    // NOP
    ctx->pc = 0x13d200u;
}
