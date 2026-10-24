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

// Function: func_00335950
// Address: 0x335950 - 0x335980
void func_00335950_0x335950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335950_0x335950");
#endif

    switch (ctx->pc) {
        case 0x335964u: goto label_335964;
        case 0x33596cu: goto label_33596c;
        default: break;
    }

    ctx->pc = 0x335950u;

    // 0x335950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33595c: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x33595Cu;
    SET_GPR_U32(ctx, 31, 0x335964u);
    ctx->pc = 0x335960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33595Cu;
    // 0x335960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x33595Cu, 0x335964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335964u;
label_335964:
    // 0x335964: 0xc0cd660  jal         func_335980
    ctx->pc = 0x335964u;
    SET_GPR_U32(ctx, 31, 0x33596Cu);
    ctx->pc = 0x335968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335964u;
    // 0x335968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335980u, 0x335964u, 0x33596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33596Cu;
label_33596c:
    // 0x33596c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33596cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335970: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335974: 0x80cd738  j           func_335CE0
    ctx->pc = 0x335974u;
    ctx->pc = 0x335978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335974u;
    // 0x335978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335974u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33597Cu;
    // 0x33597c: 0x0  nop
    ctx->pc = 0x33597cu;
    // NOP
    ctx->pc = 0x335980u;
}
