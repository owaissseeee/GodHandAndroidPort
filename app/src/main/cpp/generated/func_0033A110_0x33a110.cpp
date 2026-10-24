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

// Function: func_0033A110
// Address: 0x33a110 - 0x33a140
void func_0033A110_0x33a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A110_0x33a110");
#endif

    switch (ctx->pc) {
        case 0x33a120u: goto label_33a120;
        case 0x33a128u: goto label_33a128;
        case 0x33a130u: goto label_33a130;
        default: break;
    }

    ctx->pc = 0x33a110u;

    // 0x33a110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a118: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A118u;
    SET_GPR_U32(ctx, 31, 0x33A120u);
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A118u, 0x33A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A120u;
label_33a120:
    // 0x33a120: 0xc0ce850  jal         func_33A140
    ctx->pc = 0x33A120u;
    SET_GPR_U32(ctx, 31, 0x33A128u);
    ctx->pc = 0x33A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A140u, 0x33A120u, 0x33A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A128u;
label_33a128:
    // 0x33a128: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x33A128u;
    SET_GPR_U32(ctx, 31, 0x33A130u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A128u, 0x33A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A130u;
label_33a130:
    // 0x33a130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a134: 0x80ce272  j           func_3389C8
    ctx->pc = 0x33A134u;
    ctx->pc = 0x33A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A134u;
    // 0x33a138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389C8u, 0x33A134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A13Cu;
    // 0x33a13c: 0x0  nop
    ctx->pc = 0x33a13cu;
    // NOP
    ctx->pc = 0x33a140u;
}
