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

// Function: func_003394A0
// Address: 0x3394a0 - 0x3394d0
void func_003394A0_0x3394a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003394A0_0x3394a0");
#endif

    switch (ctx->pc) {
        case 0x3394b0u: goto label_3394b0;
        case 0x3394b8u: goto label_3394b8;
        case 0x3394c0u: goto label_3394c0;
        default: break;
    }

    ctx->pc = 0x3394a0u;

    // 0x3394a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3394a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3394a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3394a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3394a8: 0xc0ce264  jal         func_338990
    ctx->pc = 0x3394A8u;
    SET_GPR_U32(ctx, 31, 0x3394B0u);
    ctx->pc = 0x338990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338990u, 0x3394A8u, 0x3394B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394B0u;
label_3394b0:
    // 0x3394b0: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3394B0u;
    SET_GPR_U32(ctx, 31, 0x3394B8u);
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3394B0u, 0x3394B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394B8u;
label_3394b8:
    // 0x3394b8: 0xc0ce534  jal         func_3394D0
    ctx->pc = 0x3394B8u;
    SET_GPR_U32(ctx, 31, 0x3394C0u);
    ctx->pc = 0x3394D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394D0u, 0x3394B8u, 0x3394C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394C0u;
label_3394c0:
    // 0x3394c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3394c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3394c4: 0x80ce284  j           func_338A10
    ctx->pc = 0x3394C4u;
    ctx->pc = 0x3394C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394C4u;
    // 0x3394c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3394C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3394CCu;
    // 0x3394cc: 0x0  nop
    ctx->pc = 0x3394ccu;
    // NOP
    ctx->pc = 0x3394d0u;
}
