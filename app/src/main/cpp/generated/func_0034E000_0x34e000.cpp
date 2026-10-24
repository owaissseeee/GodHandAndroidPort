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

// Function: func_0034E000
// Address: 0x34e000 - 0x34e020
void func_0034E000_0x34e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E000_0x34e000");
#endif

    ctx->pc = 0x34e000u;

    // 0x34e000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e004: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34e004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e00c: 0x8c851f44  lw          $a1, 0x1F44($a0)
    ctx->pc = 0x34e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8004)));
    // 0x34e010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e014: 0x80d30a8  j           func_34C2A0
    ctx->pc = 0x34E014u;
    ctx->pc = 0x34E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E014u;
    // 0x34e018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2A0u, 0x34E014u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E01Cu;
    // 0x34e01c: 0x0  nop
    ctx->pc = 0x34e01cu;
    // NOP
    ctx->pc = 0x34e020u;
}
