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

// Function: Forward331CE0_333F80
// Address: 0x333f80 - 0x333fa0
void Forward331CE0_333F80_0x333f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward331CE0_333F80_0x333f80");
#endif


    // 0x333f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333f8c: 0x80cc738  j           func_331CE0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F8Cu;
    // 0x333f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331CE0u, 0x333F8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x333f94: 0x0  nop
    // NOP
    // 0x333f98: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x333f9c: 0x0  nop
    // NOP
    ctx->pc = 0x333fa0u;
}