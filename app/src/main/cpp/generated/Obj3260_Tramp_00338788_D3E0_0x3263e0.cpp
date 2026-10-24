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

// Function: Obj3260_Tramp_00338788_D3E0
// Address: 0x3263e0 - 0x3263f8
void Obj3260_Tramp_00338788_D3E0_0x3263e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00338788_D3E0_0x3263e0");
#endif

    ctx->pc = 0x3263e0u;

    // 0x3263e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3263e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3263e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3263e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3263e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3263e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3263ec: 0x80ce1e2  j           func_338788
    ctx->pc = 0x3263ECu;
    ctx->pc = 0x3263F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263ECu;
    // 0x3263f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338788u, 0x3263ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3263F4u;
    // 0x3263f4: 0x0  nop
    ctx->pc = 0x3263f4u;
    // NOP
    ctx->pc = 0x3263f8u;
}
