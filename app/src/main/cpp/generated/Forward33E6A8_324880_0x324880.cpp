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

// Function: Forward33E6A8_324880
// Address: 0x324880 - 0x324898
void Forward33E6A8_324880_0x324880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33E6A8_324880_0x324880");
#endif

    ctx->pc = 0x324880u;

    // 0x324880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32488c: 0x80cf9aa  j           func_33E6A8
    ctx->pc = 0x32488Cu;
    ctx->pc = 0x324890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32488Cu;
    // 0x324890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32488Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324894u;
    // 0x324894: 0x0  nop
    ctx->pc = 0x324894u;
    // NOP
    ctx->pc = 0x324898u;
}
