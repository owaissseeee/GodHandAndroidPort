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

// Function: func_00348938
// Address: 0x348938 - 0x348950
void func_00348938_0x348938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348938_0x348938");
#endif

    ctx->pc = 0x348938u;

    // 0x348938: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x348938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34893c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x348940: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x348940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x348944: 0x3e00008  jr          $ra
    ctx->pc = 0x348944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348944u;
        // 0x348948: 0x8c42e088  lw          $v0, -0x1F78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34894Cu;
    // 0x34894c: 0x0  nop
    ctx->pc = 0x34894cu;
    // NOP
    ctx->pc = 0x348950u;
}
