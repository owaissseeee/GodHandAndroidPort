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

// Function: func_00357468
// Address: 0x357468 - 0x357490
void func_00357468_0x357468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357468_0x357468");
#endif

    switch (ctx->pc) {
        case 0x35747cu: goto label_35747c;
        default: break;
    }

    ctx->pc = 0x357468u;

    // 0x357468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35746c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357470: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x357474: 0xc0d5d24  jal         func_357490
    ctx->pc = 0x357474u;
    SET_GPR_U32(ctx, 31, 0x35747Cu);
    ctx->pc = 0x357478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357474u;
    // 0x357478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357490u, 0x357474u, 0x35747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35747Cu;
label_35747c:
    // 0x35747c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357488: 0x80d6600  j           func_359800
    ctx->pc = 0x357488u;
    ctx->pc = 0x35748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357488u;
    // 0x35748c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359800u, 0x357488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357490u;
}
