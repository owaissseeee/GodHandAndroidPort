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

// Function: func_0034D068
// Address: 0x34d068 - 0x34d080
void func_0034D068_0x34d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034D068_0x34d068");
#endif

    ctx->pc = 0x34d068u;

    // 0x34d068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d074: 0x80d7572  j           func_35D5C8
    ctx->pc = 0x34D074u;
    ctx->pc = 0x34D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D074u;
    // 0x34d078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5C8u, 0x34D074u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34D07Cu;
    // 0x34d07c: 0x0  nop
    ctx->pc = 0x34d07cu;
    // NOP
    ctx->pc = 0x34d080u;
}
