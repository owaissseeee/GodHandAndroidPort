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

// Function: Forward3466D8_348B90
// Address: 0x348b90 - 0x348bc8
void Forward3466D8_348B90_0x348b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3466D8_348B90_0x348b90");
#endif

    ctx->pc = 0x348b90u;

    // 0x348b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348b9c: 0x80d19b6  j           func_3466D8
    ctx->pc = 0x348B9Cu;
    ctx->pc = 0x348BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B9Cu;
    // 0x348ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466D8u, 0x348B9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348BA4u;
    // 0x348ba4: 0x0  nop
    ctx->pc = 0x348ba4u;
    // NOP
    // 0x348ba8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x348ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348bac: 0x0  nop
    ctx->pc = 0x348bacu;
    // NOP
    // 0x348bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x348bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348bb4: 0x0  nop
    ctx->pc = 0x348bb4u;
    // NOP
    // 0x348bb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x348bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348bbc: 0x0  nop
    ctx->pc = 0x348bbcu;
    // NOP
    // 0x348bc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x348bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348bc4: 0x0  nop
    ctx->pc = 0x348bc4u;
    // NOP
    ctx->pc = 0x348bc8u;
}
