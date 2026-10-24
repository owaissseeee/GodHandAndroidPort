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

// Function: Obj3290_Tramp_0033E678_9028
// Address: 0x329028 - 0x329040
void Obj3290_Tramp_0033E678_9028_0x329028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_Tramp_0033E678_9028_0x329028");
#endif

    ctx->pc = 0x329028u;

    // 0x329028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32902c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329034: 0x80cf99e  j           func_33E678
    ctx->pc = 0x329034u;
    ctx->pc = 0x329038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329034u;
    // 0x329038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x329034u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32903Cu;
    // 0x32903c: 0x0  nop
    ctx->pc = 0x32903cu;
    // NOP
    ctx->pc = 0x329040u;
}
