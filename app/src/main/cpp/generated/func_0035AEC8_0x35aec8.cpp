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

// Function: func_0035AEC8
// Address: 0x35aec8 - 0x35aee0
void func_0035AEC8_0x35aec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AEC8_0x35aec8");
#endif

    ctx->pc = 0x35aec8u;

    // 0x35aec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35aecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35aed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aed4: 0x80d9a46  j           func_366918
    ctx->pc = 0x35AED4u;
    ctx->pc = 0x35AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AED4u;
    // 0x35aed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366918u, 0x35AED4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35AEDCu;
    // 0x35aedc: 0x0  nop
    ctx->pc = 0x35aedcu;
    // NOP
    ctx->pc = 0x35aee0u;
}
