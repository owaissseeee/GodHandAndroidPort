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

// Function: Forward332778_33B200
// Address: 0x33b200 - 0x33b218
void Forward332778_33B200_0x33b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward332778_33B200_0x33b200");
#endif

    ctx->pc = 0x33b200u;

    // 0x33b200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b20c: 0x80cc9de  j           func_332778
    ctx->pc = 0x33B20Cu;
    ctx->pc = 0x33B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B20Cu;
    // 0x33b210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332778u, 0x33B20Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B214u;
    // 0x33b214: 0x0  nop
    ctx->pc = 0x33b214u;
    // NOP
    ctx->pc = 0x33b218u;
}
