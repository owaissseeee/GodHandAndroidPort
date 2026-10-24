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

// Function: Obj3260_Tramp_00337C00_D1F0
// Address: 0x3261f0 - 0x326208
void Obj3260_Tramp_00337C00_D1F0_0x3261f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00337C00_D1F0_0x3261f0");
#endif

    ctx->pc = 0x3261f0u;

    // 0x3261f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3261f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3261f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3261f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3261f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3261f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3261fc: 0x80cdf00  j           func_337C00
    ctx->pc = 0x3261FCu;
    ctx->pc = 0x326200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261FCu;
    // 0x326200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337C00u, 0x3261FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326204u;
    // 0x326204: 0x0  nop
    ctx->pc = 0x326204u;
    // NOP
    ctx->pc = 0x326208u;
}
