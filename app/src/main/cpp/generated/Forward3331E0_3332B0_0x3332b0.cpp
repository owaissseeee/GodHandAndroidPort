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

// Function: Forward3331E0_3332B0
// Address: 0x3332b0 - 0x3332c8
void Forward3331E0_3332B0_0x3332b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3331E0_3332B0_0x3332b0");
#endif

    ctx->pc = 0x3332b0u;

    // 0x3332b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3332b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3332b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3332b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3332b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3332b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3332bc: 0x80ccc78  j           func_3331E0
    ctx->pc = 0x3332BCu;
    ctx->pc = 0x3332C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332BCu;
    // 0x3332c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3331E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3331E0u, 0x3332BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3332C4u;
    // 0x3332c4: 0x0  nop
    ctx->pc = 0x3332c4u;
    // NOP
    ctx->pc = 0x3332c8u;
}
