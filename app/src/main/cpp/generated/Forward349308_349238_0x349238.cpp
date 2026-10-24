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

// Function: Forward349308_349238
// Address: 0x349238 - 0x349250
void Forward349308_349238_0x349238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward349308_349238_0x349238");
#endif

    ctx->pc = 0x349238u;

    // 0x349238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34923c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349244: 0x80d24c2  j           func_349308
    ctx->pc = 0x349244u;
    ctx->pc = 0x349248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349244u;
    // 0x349248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349308u, 0x349244u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34924Cu;
    // 0x34924c: 0x0  nop
    ctx->pc = 0x34924cu;
    // NOP
    ctx->pc = 0x349250u;
}
