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

// Function: Forward3466C0_348B78
// Address: 0x348b78 - 0x348b90
void Forward3466C0_348B78_0x348b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3466C0_348B78_0x348b78");
#endif

    ctx->pc = 0x348b78u;

    // 0x348b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348b84: 0x80d19b0  j           func_3466C0
    ctx->pc = 0x348B84u;
    ctx->pc = 0x348B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B84u;
    // 0x348b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466C0u, 0x348B84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348B8Cu;
    // 0x348b8c: 0x0  nop
    ctx->pc = 0x348b8cu;
    // NOP
    ctx->pc = 0x348b90u;
}
