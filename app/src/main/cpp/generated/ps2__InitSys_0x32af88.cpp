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
// Address: 0x32af88 - 0x32afb0
void ps2__InitSys_0x32af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x32af88");
#endif

    switch (ctx->pc) {
        case 0x32af98u: goto label_32af98;
        case 0x32afa0u: goto label_32afa0;
        default: break;
    }

    ctx->pc = 0x32af88u;

    // 0x32af88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32af8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32af90: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AF90u;
    SET_GPR_U32(ctx, 31, 0x32AF98u);
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AF90u, 0x32AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF98u;
label_32af98:
    // 0x32af98: 0xc0cabec  jal         func_32AFB0
    ctx->pc = 0x32AF98u;
    SET_GPR_U32(ctx, 31, 0x32AFA0u);
    ctx->pc = 0x32AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AFB0u, 0x32AF98u, 0x32AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFA0u;
label_32afa0:
    // 0x32afa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32afa4: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32AFA4u;
    ctx->pc = 0x32AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFA4u;
    // 0x32afa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AFA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AFACu;
    // 0x32afac: 0x0  nop
    ctx->pc = 0x32afacu;
    // NOP
    ctx->pc = 0x32afb0u;
}
