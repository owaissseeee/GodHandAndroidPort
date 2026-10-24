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

// Function: func_00340680
// Address: 0x340680 - 0x3406b0
void func_00340680_0x340680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340680_0x340680");
#endif

    switch (ctx->pc) {
        case 0x340694u: goto label_340694;
        case 0x34069cu: goto label_34069c;
        default: break;
    }

    ctx->pc = 0x340680u;

    // 0x340680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340688: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34068c: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x34068Cu;
    SET_GPR_U32(ctx, 31, 0x340694u);
    ctx->pc = 0x340690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34068Cu;
    // 0x340690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x34068Cu, 0x340694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340694u;
label_340694:
    // 0x340694: 0xc0d01ac  jal         func_3406B0
    ctx->pc = 0x340694u;
    SET_GPR_U32(ctx, 31, 0x34069Cu);
    ctx->pc = 0x340698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340694u;
    // 0x340698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3406B0u, 0x340694u, 0x34069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34069Cu;
label_34069c:
    // 0x34069c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34069cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3406a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3406a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3406a4: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x3406A4u;
    ctx->pc = 0x3406A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406A4u;
    // 0x3406a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x3406A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3406ACu;
    // 0x3406ac: 0x0  nop
    ctx->pc = 0x3406acu;
    // NOP
    ctx->pc = 0x3406b0u;
}
