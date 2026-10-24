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

// Function: func_0034C2B8
// Address: 0x34c2b8 - 0x34c2d0
void func_0034C2B8_0x34c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C2B8_0x34c2b8");
#endif

    ctx->pc = 0x34c2b8u;

    // 0x34c2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c2bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c2c8: 0x80d30b4  j           func_34C2D0
    ctx->pc = 0x34C2C8u;
    ctx->pc = 0x34C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C2C8u;
    // 0x34c2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2D0u, 0x34C2C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C2D0u;
}
