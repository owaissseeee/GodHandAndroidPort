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

// Function: func_0036C658
// Address: 0x36c658 - 0x36c670
void func_0036C658_0x36c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C658_0x36c658");
#endif

    ctx->pc = 0x36c658u;

    // 0x36c658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c664: 0x80db33c  j           func_36CCF0
    ctx->pc = 0x36C664u;
    ctx->pc = 0x36C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C664u;
    // 0x36c668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CCF0u, 0x36C664u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C66Cu;
    // 0x36c66c: 0x0  nop
    ctx->pc = 0x36c66cu;
    // NOP
    ctx->pc = 0x36c670u;
}
