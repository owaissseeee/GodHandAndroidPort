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

// Function: func_00328448
// Address: 0x328448 - 0x328488
void func_00328448_0x328448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328448_0x328448");
#endif

    switch (ctx->pc) {
        case 0x328464u: goto label_328464;
        case 0x328470u: goto label_328470;
        default: break;
    }

    ctx->pc = 0x328448u;

    // 0x328448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32844c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32845c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x32845Cu;
    SET_GPR_U32(ctx, 31, 0x328464u);
    ctx->pc = 0x328460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32845Cu;
    // 0x328460: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x32845Cu, 0x328464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328464u;
label_328464:
    // 0x328464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328468: 0xc0ca122  jal         func_328488
    ctx->pc = 0x328468u;
    SET_GPR_U32(ctx, 31, 0x328470u);
    ctx->pc = 0x32846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328468u;
    // 0x32846c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328488u, 0x328468u, 0x328470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328470u;
label_328470:
    // 0x328470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32847c: 0x80ca422  j           func_329088
    ctx->pc = 0x32847Cu;
    ctx->pc = 0x328480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32847Cu;
    // 0x328480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x32847Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328484u;
    // 0x328484: 0x0  nop
    ctx->pc = 0x328484u;
    // NOP
    ctx->pc = 0x328488u;
}
