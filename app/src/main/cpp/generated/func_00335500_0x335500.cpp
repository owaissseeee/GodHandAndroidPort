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

// Function: func_00335500
// Address: 0x335500 - 0x335530
void func_00335500_0x335500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335500_0x335500");
#endif

    switch (ctx->pc) {
        case 0x335514u: goto label_335514;
        case 0x33551cu: goto label_33551c;
        default: break;
    }

    ctx->pc = 0x335500u;

    // 0x335500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33550c: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x33550Cu;
    SET_GPR_U32(ctx, 31, 0x335514u);
    ctx->pc = 0x335510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33550Cu;
    // 0x335510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x33550Cu, 0x335514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335514u;
label_335514:
    // 0x335514: 0xc0cd54c  jal         func_335530
    ctx->pc = 0x335514u;
    SET_GPR_U32(ctx, 31, 0x33551Cu);
    ctx->pc = 0x335518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335514u;
    // 0x335518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335530u, 0x335514u, 0x33551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33551Cu;
label_33551c:
    // 0x33551c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33551cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335520: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335524: 0x80cd738  j           func_335CE0
    ctx->pc = 0x335524u;
    ctx->pc = 0x335528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335524u;
    // 0x335528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335524u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33552Cu;
    // 0x33552c: 0x0  nop
    ctx->pc = 0x33552cu;
    // NOP
    ctx->pc = 0x335530u;
}
