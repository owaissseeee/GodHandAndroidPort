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

// Function: Forward331C98_333F60
// Address: 0x333f60 - 0x333f80
void Forward331C98_333F60_0x333f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward331C98_333F60_0x333f60");
#endif

    ctx->pc = 0x333f60u;

    // 0x333f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333f6c: 0x80cc726  j           func_331C98
    ctx->pc = 0x333F6Cu;
    ctx->pc = 0x333F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F6Cu;
    // 0x333f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C98u, 0x333F6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x333F74u;
    // 0x333f74: 0x0  nop
    ctx->pc = 0x333f74u;
    // NOP
    // 0x333f78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x333f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x333f7c: 0x0  nop
    ctx->pc = 0x333f7cu;
    // NOP
    ctx->pc = 0x333f80u;
}
