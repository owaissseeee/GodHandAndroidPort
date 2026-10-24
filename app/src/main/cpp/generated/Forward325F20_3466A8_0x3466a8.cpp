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

// Function: Forward325F20_3466A8
// Address: 0x3466a8 - 0x3466c0
void Forward325F20_3466A8_0x3466a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward325F20_3466A8_0x3466a8");
#endif

    ctx->pc = 0x3466a8u;

    // 0x3466a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3466a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3466ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3466acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3466b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3466b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3466b4: 0x80c97c8  j           func_325F20
    ctx->pc = 0x3466B4u;
    ctx->pc = 0x3466B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3466B4u;
    // 0x3466b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F20u, 0x3466B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3466BCu;
    // 0x3466bc: 0x0  nop
    ctx->pc = 0x3466bcu;
    // NOP
    ctx->pc = 0x3466c0u;
}
