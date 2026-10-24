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

// Function: Obj3290_TrampViaA1_0033F130_90A0
// Address: 0x3290a0 - 0x3290b8
void Obj3290_TrampViaA1_0033F130_90A0_0x3290a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_TrampViaA1_0033F130_90A0_0x3290a0");
#endif

    ctx->pc = 0x3290a0u;

    // 0x3290a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3290a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3290a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3290a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3290a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3290ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3290acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3290b0: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x3290B0u;
    ctx->pc = 0x3290B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290B0u;
    // 0x3290b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x3290B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3290B8u;
}
