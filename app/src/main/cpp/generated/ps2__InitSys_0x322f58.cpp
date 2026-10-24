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

// Function: _InitSys
// Address: 0x322f58 - 0x322f80
void ps2__InitSys_0x322f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x322f58");
#endif

    switch (ctx->pc) {
        case 0x322f68u: goto label_322f68;
        case 0x322f70u: goto label_322f70;
        default: break;
    }

    ctx->pc = 0x322f58u;

    // 0x322f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322f60: 0xc0c9220  jal         func_324880
    ctx->pc = 0x322F60u;
    SET_GPR_U32(ctx, 31, 0x322F68u);
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x322F60u, 0x322F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F68u;
label_322f68:
    // 0x322f68: 0xc0c8be0  jal         func_322F80
    ctx->pc = 0x322F68u;
    SET_GPR_U32(ctx, 31, 0x322F70u);
    ctx->pc = 0x322F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F80u, 0x322F68u, 0x322F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F70u;
label_322f70:
    // 0x322f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322f74: 0x80c9226  j           func_324898
    ctx->pc = 0x322F74u;
    ctx->pc = 0x322F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F74u;
    // 0x322f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x322F74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x322F7Cu;
    // 0x322f7c: 0x0  nop
    ctx->pc = 0x322f7cu;
    // NOP
    ctx->pc = 0x322f80u;
}
