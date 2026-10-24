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

// Function: func_003403F8
// Address: 0x3403f8 - 0x340438
void func_003403F8_0x3403f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003403F8_0x3403f8");
#endif

    switch (ctx->pc) {
        case 0x340414u: goto label_340414;
        case 0x340420u: goto label_340420;
        default: break;
    }

    ctx->pc = 0x3403f8u;

    // 0x3403f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3403f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3403fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3403fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34040c: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x34040Cu;
    SET_GPR_U32(ctx, 31, 0x340414u);
    ctx->pc = 0x340410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34040Cu;
    // 0x340410: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x34040Cu, 0x340414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340414u;
label_340414:
    // 0x340414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340418: 0xc0d010e  jal         func_340438
    ctx->pc = 0x340418u;
    SET_GPR_U32(ctx, 31, 0x340420u);
    ctx->pc = 0x34041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340418u;
    // 0x34041c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340438u, 0x340418u, 0x340420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340420u;
label_340420:
    // 0x340420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34042c: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x34042Cu;
    ctx->pc = 0x340430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34042Cu;
    // 0x340430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x34042Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340434u;
    // 0x340434: 0x0  nop
    ctx->pc = 0x340434u;
    // NOP
    ctx->pc = 0x340438u;
}
