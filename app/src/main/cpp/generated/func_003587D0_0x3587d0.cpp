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

// Function: func_003587D0
// Address: 0x3587d0 - 0x3587e8
void func_003587D0_0x3587d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003587D0_0x3587d0");
#endif

    ctx->pc = 0x3587d0u;

    // 0x3587d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3587d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3587d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3587d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3587d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3587d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3587dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3587dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3587e0: 0x80d708e  j           func_35C238
    ctx->pc = 0x3587E0u;
    ctx->pc = 0x3587E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587E0u;
    // 0x3587e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C238u, 0x3587E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3587E8u;
}
