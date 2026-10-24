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

// Function: Obj3290_Tramp_003313F0_9278
// Address: 0x329278 - 0x329298
void Obj3290_Tramp_003313F0_9278_0x329278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_Tramp_003313F0_9278_0x329278");
#endif

    ctx->pc = 0x329278u;

    // 0x329278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32927c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329284: 0x80cc4fc  j           func_3313F0
    ctx->pc = 0x329284u;
    ctx->pc = 0x329288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329284u;
    // 0x329288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3313F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3313F0u, 0x329284u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32928Cu;
    // 0x32928c: 0x0  nop
    ctx->pc = 0x32928cu;
    // NOP
    // 0x329290: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329294: 0x0  nop
    ctx->pc = 0x329294u;
    // NOP
    ctx->pc = 0x329298u;
}
