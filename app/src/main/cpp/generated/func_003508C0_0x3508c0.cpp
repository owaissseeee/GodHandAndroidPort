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

// Function: func_003508C0
// Address: 0x3508c0 - 0x3508d8
void func_003508C0_0x3508c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003508C0_0x3508c0");
#endif

    ctx->pc = 0x3508c0u;

    // 0x3508c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3508c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3508c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3508c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3508c8: 0x8c851fcc  lw          $a1, 0x1FCC($a0)
    ctx->pc = 0x3508c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8140)));
    // 0x3508cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3508ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3508d0: 0x80d32a6  j           func_34CA98
    ctx->pc = 0x3508D0u;
    ctx->pc = 0x3508D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508D0u;
    // 0x3508d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x3508D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3508D8u;
}
