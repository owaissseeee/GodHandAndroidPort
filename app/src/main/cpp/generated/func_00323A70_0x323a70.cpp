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

// Function: func_00323A70
// Address: 0x323a70 - 0x323aa0
void func_00323A70_0x323a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323A70_0x323a70");
#endif

    switch (ctx->pc) {
        case 0x323a84u: goto label_323a84;
        case 0x323a8cu: goto label_323a8c;
        default: break;
    }

    ctx->pc = 0x323a70u;

    // 0x323a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323a78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x323a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x323a7c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x323A7Cu;
    SET_GPR_U32(ctx, 31, 0x323A84u);
    ctx->pc = 0x323A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A7Cu;
    // 0x323a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x323A7Cu, 0x323A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A84u;
label_323a84:
    // 0x323a84: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x323A84u;
    SET_GPR_U32(ctx, 31, 0x323A8Cu);
    ctx->pc = 0x323A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A84u;
    // 0x323a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x323A84u, 0x323A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A8Cu;
label_323a8c:
    // 0x323a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323a94: 0x80c9226  j           func_324898
    ctx->pc = 0x323A94u;
    ctx->pc = 0x323A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A94u;
    // 0x323a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x323A94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323A9Cu;
    // 0x323a9c: 0x0  nop
    ctx->pc = 0x323a9cu;
    // NOP
    ctx->pc = 0x323aa0u;
}
