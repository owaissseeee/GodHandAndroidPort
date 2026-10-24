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

// Function: Forward33B568_33B658
// Address: 0x33b658 - 0x33b670
void Forward33B568_33B658_0x33b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B568_33B658_0x33b658");
#endif

    ctx->pc = 0x33b658u;

    // 0x33b658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b65c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b668: 0x80ced5a  j           func_33B568
    ctx->pc = 0x33B668u;
    ctx->pc = 0x33B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B668u;
    // 0x33b66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B568u, 0x33B668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B670u;
}
