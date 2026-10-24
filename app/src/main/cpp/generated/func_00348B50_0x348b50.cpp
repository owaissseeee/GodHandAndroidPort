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

// Function: func_00348B50
// Address: 0x348b50 - 0x348b78
void func_00348B50_0x348b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348B50_0x348b50");
#endif

    switch (ctx->pc) {
        case 0x348b64u: goto label_348b64;
        default: break;
    }

    ctx->pc = 0x348b50u;

    // 0x348b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348b5c: 0xc0cefe2  jal         func_33BF88
    ctx->pc = 0x348B5Cu;
    SET_GPR_U32(ctx, 31, 0x348B64u);
    ctx->pc = 0x348B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B5Cu;
    // 0x348b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF88u, 0x348B5Cu, 0x348B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B64u;
label_348b64:
    // 0x348b64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x348b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b70: 0x80cefe8  j           func_33BFA0
    ctx->pc = 0x348B70u;
    ctx->pc = 0x348B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B70u;
    // 0x348b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFA0u, 0x348B70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348B78u;
}
