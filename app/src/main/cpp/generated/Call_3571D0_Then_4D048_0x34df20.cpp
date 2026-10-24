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

// Function: Call_3571D0_Then_4D048
// Address: 0x34df20 - 0x34df40
void Call_3571D0_Then_4D048_0x34df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Call_3571D0_Then_4D048_0x34df20");
#endif

    switch (ctx->pc) {
        case 0x34df30u: goto label_34df30;
        default: break;
    }

    ctx->pc = 0x34df20u;

    // 0x34df20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34df24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34df28: 0xc0d5c74  jal         func_3571D0
    ctx->pc = 0x34DF28u;
    SET_GPR_U32(ctx, 31, 0x34DF30u);
    ctx->pc = 0x3571D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3571D0u, 0x34DF28u, 0x34DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF30u;
label_34df30:
    // 0x34df30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34df34: 0x80d3412  j           func_34D048
    ctx->pc = 0x34DF34u;
    ctx->pc = 0x34DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF34u;
    // 0x34df38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D048u, 0x34DF34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34DF3Cu;
    // 0x34df3c: 0x0  nop
    ctx->pc = 0x34df3cu;
    // NOP
    ctx->pc = 0x34df40u;
}
