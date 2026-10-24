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

// Function: func_00335848
// Address: 0x335848 - 0x335878
void func_00335848_0x335848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335848_0x335848");
#endif

    switch (ctx->pc) {
        case 0x33585cu: goto label_33585c;
        case 0x335864u: goto label_335864;
        default: break;
    }

    ctx->pc = 0x335848u;

    // 0x335848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33584c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335854: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335854u;
    SET_GPR_U32(ctx, 31, 0x33585Cu);
    ctx->pc = 0x335858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335854u;
    // 0x335858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335854u, 0x33585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33585Cu;
label_33585c:
    // 0x33585c: 0xc0cd61e  jal         func_335878
    ctx->pc = 0x33585Cu;
    SET_GPR_U32(ctx, 31, 0x335864u);
    ctx->pc = 0x335860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33585Cu;
    // 0x335860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335878u, 0x33585Cu, 0x335864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335864u;
label_335864:
    // 0x335864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335868: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33586c: 0x80cd738  j           func_335CE0
    ctx->pc = 0x33586Cu;
    ctx->pc = 0x335870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33586Cu;
    // 0x335870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x33586Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335874u;
    // 0x335874: 0x0  nop
    ctx->pc = 0x335874u;
    // NOP
    ctx->pc = 0x335878u;
}
