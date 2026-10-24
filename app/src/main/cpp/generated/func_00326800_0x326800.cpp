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

// Function: func_00326800
// Address: 0x326800 - 0x326830
void func_00326800_0x326800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326800_0x326800");
#endif

    switch (ctx->pc) {
        case 0x326818u: goto label_326818;
        default: break;
    }

    ctx->pc = 0x326800u;

    // 0x326800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32680c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326810: 0xc0cf13a  jal         func_33C4E8
    ctx->pc = 0x326810u;
    SET_GPR_U32(ctx, 31, 0x326818u);
    ctx->pc = 0x326814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326810u;
    // 0x326814: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C4E8u, 0x326810u, 0x326818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326818u;
label_326818:
    // 0x326818: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x326818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32681c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326824: 0x80cf0a4  j           func_33C290
    ctx->pc = 0x326824u;
    ctx->pc = 0x326828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326824u;
    // 0x326828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C290u, 0x326824u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32682Cu;
    // 0x32682c: 0x0  nop
    ctx->pc = 0x32682cu;
    // NOP
    ctx->pc = 0x326830u;
}
