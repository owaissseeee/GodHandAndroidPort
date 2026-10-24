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
// Address: 0x324c50 - 0x324c78
void ps2__InitSys_0x324c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x324c50");
#endif

    switch (ctx->pc) {
        case 0x324c60u: goto label_324c60;
        case 0x324c68u: goto label_324c68;
        default: break;
    }

    ctx->pc = 0x324c50u;

    // 0x324c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324c58: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x324C58u;
    SET_GPR_U32(ctx, 31, 0x324C60u);
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x324C58u, 0x324C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C60u;
label_324c60:
    // 0x324c60: 0xc0c931e  jal         func_324C78
    ctx->pc = 0x324C60u;
    SET_GPR_U32(ctx, 31, 0x324C68u);
    ctx->pc = 0x324C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C78u, 0x324C60u, 0x324C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C68u;
label_324c68:
    // 0x324c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324c6c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x324C6Cu;
    ctx->pc = 0x324C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C6Cu;
    // 0x324c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x324C6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324C74u;
    // 0x324c74: 0x0  nop
    ctx->pc = 0x324c74u;
    // NOP
    ctx->pc = 0x324c78u;
}
