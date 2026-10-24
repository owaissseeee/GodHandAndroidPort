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

// Function: Forward33BBD8_348C78
// Address: 0x348c78 - 0x348c98
void Forward33BBD8_348C78_0x348c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33BBD8_348C78_0x348c78");
#endif

    ctx->pc = 0x348c78u;

    // 0x348c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348c7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348c88: 0x80ceef6  j           func_33BBD8
    ctx->pc = 0x348C88u;
    ctx->pc = 0x348C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C88u;
    // 0x348c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BBD8u, 0x348C88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348C90u;
    // 0x348c90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x348c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348c94: 0x0  nop
    ctx->pc = 0x348c94u;
    // NOP
    ctx->pc = 0x348c98u;
}
