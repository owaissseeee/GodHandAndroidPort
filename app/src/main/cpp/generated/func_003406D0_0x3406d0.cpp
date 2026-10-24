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

// Function: func_003406D0
// Address: 0x3406d0 - 0x340700
void func_003406D0_0x3406d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003406D0_0x3406d0");
#endif

    switch (ctx->pc) {
        case 0x3406e4u: goto label_3406e4;
        case 0x3406ecu: goto label_3406ec;
        default: break;
    }

    ctx->pc = 0x3406d0u;

    // 0x3406d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3406d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3406d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3406d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3406d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3406d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3406dc: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x3406DCu;
    SET_GPR_U32(ctx, 31, 0x3406E4u);
    ctx->pc = 0x3406E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406DCu;
    // 0x3406e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x3406DCu, 0x3406E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406E4u;
label_3406e4:
    // 0x3406e4: 0xc0d01c0  jal         func_340700
    ctx->pc = 0x3406E4u;
    SET_GPR_U32(ctx, 31, 0x3406ECu);
    ctx->pc = 0x3406E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406E4u;
    // 0x3406e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x3406E4u, 0x3406ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406ECu;
label_3406ec:
    // 0x3406ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3406ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3406f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3406f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3406f4: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x3406F4u;
    ctx->pc = 0x3406F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406F4u;
    // 0x3406f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x3406F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3406FCu;
    // 0x3406fc: 0x0  nop
    ctx->pc = 0x3406fcu;
    // NOP
    ctx->pc = 0x340700u;
}
