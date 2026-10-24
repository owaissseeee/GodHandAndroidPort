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
// Address: 0x323b58 - 0x323b80
void ps2__InitSys_0x323b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x323b58");
#endif

    switch (ctx->pc) {
        case 0x323b68u: goto label_323b68;
        case 0x323b70u: goto label_323b70;
        default: break;
    }

    ctx->pc = 0x323b58u;

    // 0x323b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323b60: 0xc0c9220  jal         func_324880
    ctx->pc = 0x323B60u;
    SET_GPR_U32(ctx, 31, 0x323B68u);
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x323B60u, 0x323B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B68u;
label_323b68:
    // 0x323b68: 0xc0c8ee0  jal         func_323B80
    ctx->pc = 0x323B68u;
    SET_GPR_U32(ctx, 31, 0x323B70u);
    ctx->pc = 0x323B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B80u, 0x323B68u, 0x323B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B70u;
label_323b70:
    // 0x323b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b74: 0x80c9226  j           func_324898
    ctx->pc = 0x323B74u;
    ctx->pc = 0x323B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B74u;
    // 0x323b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x323B74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323B7Cu;
    // 0x323b7c: 0x0  nop
    ctx->pc = 0x323b7cu;
    // NOP
    ctx->pc = 0x323b80u;
}
