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

// Function: func_0034E1D8
// Address: 0x34e1d8 - 0x34e1f0
void func_0034E1D8_0x34e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E1D8_0x34e1d8");
#endif

    ctx->pc = 0x34e1d8u;

    // 0x34e1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e1e4: 0x80d387c  j           func_34E1F0
    ctx->pc = 0x34E1E4u;
    ctx->pc = 0x34E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E1E4u;
    // 0x34e1e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E1F0u, 0x34E1E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E1ECu;
    // 0x34e1ec: 0x0  nop
    ctx->pc = 0x34e1ecu;
    // NOP
    ctx->pc = 0x34e1f0u;
}
