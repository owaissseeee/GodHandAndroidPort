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

// Function: sfply_AdjustPrepEnd
// Address: 0x357648 - 0x357678
void sfply_AdjustPrepEnd_0x357648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfply_AdjustPrepEnd_0x357648");
#endif

    switch (ctx->pc) {
        case 0x35765cu: goto label_35765c;
        case 0x357664u: goto label_357664;
        default: break;
    }

    ctx->pc = 0x357648u;

    // 0x357648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35764c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x357654: 0xc0d5d9e  jal         func_357678
    ctx->pc = 0x357654u;
    SET_GPR_U32(ctx, 31, 0x35765Cu);
    ctx->pc = 0x357658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357654u;
    // 0x357658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357678u, 0x357654u, 0x35765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35765Cu;
label_35765c:
    // 0x35765c: 0xc0d5dc8  jal         func_357720
    ctx->pc = 0x35765Cu;
    SET_GPR_U32(ctx, 31, 0x357664u);
    ctx->pc = 0x357660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35765Cu;
    // 0x357660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357720u, 0x35765Cu, 0x357664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357664u;
label_357664:
    // 0x357664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357668: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35766c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357670: 0x80d5dea  j           func_3577A8
    ctx->pc = 0x357670u;
    ctx->pc = 0x357674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357670u;
    // 0x357674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3577A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3577A8u, 0x357670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357678u;
}
