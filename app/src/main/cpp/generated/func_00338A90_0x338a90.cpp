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

// Function: func_00338A90
// Address: 0x338a90 - 0x338ac0
void func_00338A90_0x338a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338A90_0x338a90");
#endif

    switch (ctx->pc) {
        case 0x338aa0u: goto label_338aa0;
        case 0x338aa8u: goto label_338aa8;
        case 0x338ab0u: goto label_338ab0;
        default: break;
    }

    ctx->pc = 0x338a90u;

    // 0x338a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338a98: 0xc0ce264  jal         func_338990
    ctx->pc = 0x338A98u;
    SET_GPR_U32(ctx, 31, 0x338AA0u);
    ctx->pc = 0x338990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338990u, 0x338A98u, 0x338AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AA0u;
label_338aa0:
    // 0x338aa0: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338AA0u;
    SET_GPR_U32(ctx, 31, 0x338AA8u);
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x338AA0u, 0x338AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AA8u;
label_338aa8:
    // 0x338aa8: 0xc0ce2b0  jal         func_338AC0
    ctx->pc = 0x338AA8u;
    SET_GPR_U32(ctx, 31, 0x338AB0u);
    ctx->pc = 0x338AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338AC0u, 0x338AA8u, 0x338AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AB0u;
label_338ab0:
    // 0x338ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338ab4: 0x80ce284  j           func_338A10
    ctx->pc = 0x338AB4u;
    ctx->pc = 0x338AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AB4u;
    // 0x338ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338AB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338ABCu;
    // 0x338abc: 0x0  nop
    ctx->pc = 0x338abcu;
    // NOP
    ctx->pc = 0x338ac0u;
}
