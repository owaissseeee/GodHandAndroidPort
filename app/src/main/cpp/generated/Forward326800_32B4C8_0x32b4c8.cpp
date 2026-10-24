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

// Function: Forward326800_32B4C8
// Address: 0x32b4c8 - 0x32b4e8
void Forward326800_32B4C8_0x32b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward326800_32B4C8_0x32b4c8");
#endif

    ctx->pc = 0x32b4c8u;

    // 0x32b4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b4d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b4d8: 0x80c9a00  j           func_326800
    ctx->pc = 0x32B4D8u;
    ctx->pc = 0x32B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4D8u;
    // 0x32b4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x32B4D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B4E0u;
    // 0x32b4e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b4e4: 0x0  nop
    ctx->pc = 0x32b4e4u;
    // NOP
    ctx->pc = 0x32b4e8u;
}
