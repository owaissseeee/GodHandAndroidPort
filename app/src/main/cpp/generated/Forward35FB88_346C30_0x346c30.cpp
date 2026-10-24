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

// Function: Forward35FB88_346C30
// Address: 0x346c30 - 0x346c48
void Forward35FB88_346C30_0x346c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward35FB88_346C30_0x346c30");
#endif

    ctx->pc = 0x346c30u;

    // 0x346c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346c3c: 0x80d7ee2  j           func_35FB88
    ctx->pc = 0x346C3Cu;
    ctx->pc = 0x346C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C3Cu;
    // 0x346c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FB88u, 0x346C3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346C44u;
    // 0x346c44: 0x0  nop
    ctx->pc = 0x346c44u;
    // NOP
    ctx->pc = 0x346c48u;
}
