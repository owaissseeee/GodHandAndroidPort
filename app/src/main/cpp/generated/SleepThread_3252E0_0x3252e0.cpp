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

// Function: SleepThread_3252E0
// Address: 0x3252e0 - 0x3252f8
void SleepThread_3252E0_0x3252e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SleepThread_3252E0_0x3252e0");
#endif

    ctx->pc = 0x3252e0u;

    // 0x3252e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3252e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3252e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3252e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3252e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3252e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3252ec: 0x80ebef0  j           func_3AFBC0
    ctx->pc = 0x3252ECu;
    ctx->pc = 0x3252F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252ECu;
    // 0x3252f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBC0u, 0x3252ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3252F4u;
    // 0x3252f4: 0x0  nop
    ctx->pc = 0x3252f4u;
    // NOP
    ctx->pc = 0x3252f8u;
}
