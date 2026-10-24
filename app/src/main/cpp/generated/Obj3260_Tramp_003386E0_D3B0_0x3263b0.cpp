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

// Function: Obj3260_Tramp_003386E0_D3B0
// Address: 0x3263b0 - 0x3263c8
void Obj3260_Tramp_003386E0_D3B0_0x3263b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_003386E0_D3B0_0x3263b0");
#endif

    ctx->pc = 0x3263b0u;

    // 0x3263b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3263b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3263b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3263b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3263b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3263b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3263bc: 0x80ce1b8  j           func_3386E0
    ctx->pc = 0x3263BCu;
    ctx->pc = 0x3263C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263BCu;
    // 0x3263c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3386E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3386E0u, 0x3263BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3263C4u;
    // 0x3263c4: 0x0  nop
    ctx->pc = 0x3263c4u;
    // NOP
    ctx->pc = 0x3263c8u;
}
