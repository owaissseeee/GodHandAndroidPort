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

// Function: func_003B9D48
// Address: 0x3b9d48 - 0x3b9d60
void func_003B9D48_0x3b9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9D48_0x3b9d48");
#endif

    ctx->pc = 0x3b9d48u;

    // 0x3b9d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9d4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b9d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b9d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9d58: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x3B9D58u;
    ctx->pc = 0x3B9D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9D58u;
    // 0x3b9d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x3B9D58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B9D60u;
}
