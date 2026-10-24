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

// Function: func_00348950
// Address: 0x348950 - 0x348968
void func_00348950_0x348950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348950_0x348950");
#endif

    ctx->pc = 0x348950u;

    // 0x348950: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x348950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x348954: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x348954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x348958: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x348958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x34895c: 0x3e00008  jr          $ra
    ctx->pc = 0x34895Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34895Cu;
        // 0x348960: 0xac24e088  sw          $a0, -0x1F78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959240), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34895Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348964u;
    // 0x348964: 0x0  nop
    ctx->pc = 0x348964u;
    // NOP
    ctx->pc = 0x348968u;
}
