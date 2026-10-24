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

// Function: func_00348B20
// Address: 0x348b20 - 0x348b50
void func_00348B20_0x348b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348B20_0x348b20");
#endif

    switch (ctx->pc) {
        case 0x348b38u: goto label_348b38;
        default: break;
    }

    ctx->pc = 0x348b20u;

    // 0x348b20: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348b24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348b30: 0xc0cefe2  jal         func_33BF88
    ctx->pc = 0x348B30u;
    SET_GPR_U32(ctx, 31, 0x348B38u);
    ctx->pc = 0x348B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B30u;
    // 0x348b34: 0x24848b78  addiu       $a0, $a0, -0x7488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF88u, 0x348B30u, 0x348B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B38u;
label_348b38:
    // 0x348b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348b3c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x348b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x348b40: 0x24848b90  addiu       $a0, $a0, -0x7470
    ctx->pc = 0x348b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937488));
    // 0x348b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b48: 0x80cefe8  j           func_33BFA0
    ctx->pc = 0x348B48u;
    ctx->pc = 0x348B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B48u;
    // 0x348b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFA0u, 0x348B48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348B50u;
}
