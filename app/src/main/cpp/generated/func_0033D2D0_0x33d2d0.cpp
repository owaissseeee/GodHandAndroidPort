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

// Function: func_0033D2D0
// Address: 0x33d2d0 - 0x33d320
void func_0033D2D0_0x33d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D2D0_0x33d2d0");
#endif

    switch (ctx->pc) {
        case 0x33d308u: goto label_33d308;
        default: break;
    }

    ctx->pc = 0x33d2d0u;

    // 0x33d2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d2d4: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x33d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x33d2d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d2dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33d2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d2e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d2e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33d2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d2e8: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x33d2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x33d2ec: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x33d2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33d2f0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x33d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x33d2f4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x33d2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33d2f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33d2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d300: 0xc0cfe9c  jal         func_33FA70
    ctx->pc = 0x33D300u;
    SET_GPR_U32(ctx, 31, 0x33D308u);
    ctx->pc = 0x33D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D300u;
    // 0x33d304: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA70u, 0x33D300u, 0x33D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D308u;
label_33d308:
    // 0x33d308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d30c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d314: 0x80cfec0  j           func_33FB00
    ctx->pc = 0x33D314u;
    ctx->pc = 0x33D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D314u;
    // 0x33d318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB00u, 0x33D314u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D31Cu;
    // 0x33d31c: 0x0  nop
    ctx->pc = 0x33d31cu;
    // NOP
    ctx->pc = 0x33d320u;
}
