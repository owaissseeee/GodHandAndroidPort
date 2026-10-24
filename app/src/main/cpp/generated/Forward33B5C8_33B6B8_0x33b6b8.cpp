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

// Function: Forward33B5C8_33B6B8
// Address: 0x33b6b8 - 0x33b6d0
void Forward33B5C8_33B6B8_0x33b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B5C8_33B6B8_0x33b6b8");
#endif

    ctx->pc = 0x33b6b8u;

    // 0x33b6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b6bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b6c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b6c8: 0x80ced72  j           func_33B5C8
    ctx->pc = 0x33B6C8u;
    ctx->pc = 0x33B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6C8u;
    // 0x33b6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B5C8u, 0x33B6C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B6D0u;
}
