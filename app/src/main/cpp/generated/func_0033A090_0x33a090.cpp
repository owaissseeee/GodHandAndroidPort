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

// Function: func_0033A090
// Address: 0x33a090 - 0x33a0c0
void func_0033A090_0x33a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A090_0x33a090");
#endif

    switch (ctx->pc) {
        case 0x33a0a0u: goto label_33a0a0;
        case 0x33a0a8u: goto label_33a0a8;
        case 0x33a0b0u: goto label_33a0b0;
        default: break;
    }

    ctx->pc = 0x33a090u;

    // 0x33a090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a098: 0xc0ce264  jal         func_338990
    ctx->pc = 0x33A098u;
    SET_GPR_U32(ctx, 31, 0x33A0A0u);
    ctx->pc = 0x338990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338990u, 0x33A098u, 0x33A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A0A0u;
label_33a0a0:
    // 0x33a0a0: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A0A0u;
    SET_GPR_U32(ctx, 31, 0x33A0A8u);
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A0A0u, 0x33A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A0A8u;
label_33a0a8:
    // 0x33a0a8: 0xc0ce830  jal         func_33A0C0
    ctx->pc = 0x33A0A8u;
    SET_GPR_U32(ctx, 31, 0x33A0B0u);
    ctx->pc = 0x33A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A0C0u, 0x33A0A8u, 0x33A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A0B0u;
label_33a0b0:
    // 0x33a0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a0b4: 0x80ce284  j           func_338A10
    ctx->pc = 0x33A0B4u;
    ctx->pc = 0x33A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A0B4u;
    // 0x33a0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A0B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A0BCu;
    // 0x33a0bc: 0x0  nop
    ctx->pc = 0x33a0bcu;
    // NOP
    ctx->pc = 0x33a0c0u;
}
