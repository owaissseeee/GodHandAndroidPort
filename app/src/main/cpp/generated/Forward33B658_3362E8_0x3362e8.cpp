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

// Function: Forward33B658_3362E8
// Address: 0x3362e8 - 0x336300
void Forward33B658_3362E8_0x3362e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B658_3362E8_0x3362e8");
#endif

    ctx->pc = 0x3362e8u;

    // 0x3362e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3362e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3362ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3362ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3362f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3362f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3362f4: 0x80ced96  j           func_33B658
    ctx->pc = 0x3362F4u;
    ctx->pc = 0x3362F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362F4u;
    // 0x3362f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x3362F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3362FCu;
    // 0x3362fc: 0x0  nop
    ctx->pc = 0x3362fcu;
    // NOP
    ctx->pc = 0x336300u;
}
