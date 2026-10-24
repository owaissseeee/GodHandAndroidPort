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
// Address: 0x335a18 - 0x335a40
void ps2__InitSys_0x335a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x335a18");
#endif

    switch (ctx->pc) {
        case 0x335a28u: goto label_335a28;
        case 0x335a30u: goto label_335a30;
        default: break;
    }

    ctx->pc = 0x335a18u;

    // 0x335a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335a20: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335A20u;
    SET_GPR_U32(ctx, 31, 0x335A28u);
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335A20u, 0x335A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A28u;
label_335a28:
    // 0x335a28: 0xc0cd690  jal         func_335A40
    ctx->pc = 0x335A28u;
    SET_GPR_U32(ctx, 31, 0x335A30u);
    ctx->pc = 0x335A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A40u, 0x335A28u, 0x335A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A30u;
label_335a30:
    // 0x335a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335a34: 0x80cd738  j           func_335CE0
    ctx->pc = 0x335A34u;
    ctx->pc = 0x335A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A34u;
    // 0x335a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335A34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335A3Cu;
    // 0x335a3c: 0x0  nop
    ctx->pc = 0x335a3cu;
    // NOP
    ctx->pc = 0x335a40u;
}
