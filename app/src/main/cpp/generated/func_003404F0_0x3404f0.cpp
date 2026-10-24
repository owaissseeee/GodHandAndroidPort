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

// Function: func_003404F0
// Address: 0x3404f0 - 0x340520
void func_003404F0_0x3404f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003404F0_0x3404f0");
#endif

    switch (ctx->pc) {
        case 0x340504u: goto label_340504;
        case 0x34050cu: goto label_34050c;
        default: break;
    }

    ctx->pc = 0x3404f0u;

    // 0x3404f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3404f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3404f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3404f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3404f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3404f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3404fc: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x3404FCu;
    SET_GPR_U32(ctx, 31, 0x340504u);
    ctx->pc = 0x340500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404FCu;
    // 0x340500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x3404FCu, 0x340504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340504u;
label_340504:
    // 0x340504: 0xc0d0148  jal         func_340520
    ctx->pc = 0x340504u;
    SET_GPR_U32(ctx, 31, 0x34050Cu);
    ctx->pc = 0x340508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340504u;
    // 0x340508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340520u, 0x340504u, 0x34050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34050Cu;
label_34050c:
    // 0x34050c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34050cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340514: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x340514u;
    ctx->pc = 0x340518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340514u;
    // 0x340518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x340514u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34051Cu;
    // 0x34051c: 0x0  nop
    ctx->pc = 0x34051cu;
    // NOP
    ctx->pc = 0x340520u;
}
