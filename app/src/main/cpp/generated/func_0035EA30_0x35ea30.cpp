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

// Function: func_0035EA30
// Address: 0x35ea30 - 0x35ea60
void func_0035EA30_0x35ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EA30_0x35ea30");
#endif

    ctx->pc = 0x35ea30u;

    // 0x35ea30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ea34: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x35ea34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ea3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea40: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35ea40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea44: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x35ea44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ea48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ea4c: 0xac480044  sw          $t0, 0x44($v0)
    ctx->pc = 0x35ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 8));
    // 0x35ea50: 0xac490048  sw          $t1, 0x48($v0)
    ctx->pc = 0x35ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 9));
    // 0x35ea54: 0x80d7f66  j           func_35FD98
    ctx->pc = 0x35EA54u;
    ctx->pc = 0x35EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA54u;
    // 0x35ea58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FD98u, 0x35EA54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EA5Cu;
    // 0x35ea5c: 0x0  nop
    ctx->pc = 0x35ea5cu;
    // NOP
    ctx->pc = 0x35ea60u;
}
