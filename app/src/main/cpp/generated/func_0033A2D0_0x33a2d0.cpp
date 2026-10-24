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

// Function: func_0033A2D0
// Address: 0x33a2d0 - 0x33a300
void func_0033A2D0_0x33a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A2D0_0x33a2d0");
#endif

    switch (ctx->pc) {
        case 0x33a2e4u: goto label_33a2e4;
        case 0x33a2ecu: goto label_33a2ec;
        default: break;
    }

    ctx->pc = 0x33a2d0u;

    // 0x33a2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a2d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33a2dc: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A2DCu;
    SET_GPR_U32(ctx, 31, 0x33A2E4u);
    ctx->pc = 0x33A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2DCu;
    // 0x33a2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A2DCu, 0x33A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2E4u;
label_33a2e4:
    // 0x33a2e4: 0xc0ce8c0  jal         func_33A300
    ctx->pc = 0x33A2E4u;
    SET_GPR_U32(ctx, 31, 0x33A2ECu);
    ctx->pc = 0x33A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2E4u;
    // 0x33a2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A300u, 0x33A2E4u, 0x33A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2ECu;
label_33a2ec:
    // 0x33a2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a2f4: 0x80ce284  j           func_338A10
    ctx->pc = 0x33A2F4u;
    ctx->pc = 0x33A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2F4u;
    // 0x33a2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A2F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A2FCu;
    // 0x33a2fc: 0x0  nop
    ctx->pc = 0x33a2fcu;
    // NOP
    ctx->pc = 0x33a300u;
}
