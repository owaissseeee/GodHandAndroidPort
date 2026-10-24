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

// Function: Forward33BC48_33BDC0
// Address: 0x33bdc0 - 0x33bdd8
void Forward33BC48_33BDC0_0x33bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33BC48_33BDC0_0x33bdc0");
#endif

    ctx->pc = 0x33bdc0u;

    // 0x33bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bdc4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x33bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33bdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bdcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bdd0: 0x80cef12  j           func_33BC48
    ctx->pc = 0x33BDD0u;
    ctx->pc = 0x33BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDD0u;
    // 0x33bdd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC48u, 0x33BDD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BDD8u;
}
