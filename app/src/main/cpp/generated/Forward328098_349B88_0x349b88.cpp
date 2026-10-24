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

// Function: Forward328098_349B88
// Address: 0x349b88 - 0x349ba8
void Forward328098_349B88_0x349b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward328098_349B88_0x349b88");
#endif

    ctx->pc = 0x349b88u;

    // 0x349b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b94: 0x80ca026  j           func_328098
    ctx->pc = 0x349B94u;
    ctx->pc = 0x349B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B94u;
    // 0x349b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x349B94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349B9Cu;
    // 0x349b9c: 0x0  nop
    ctx->pc = 0x349b9cu;
    // NOP
    // 0x349ba0: 0x0  nop
    ctx->pc = 0x349ba0u;
    // NOP
    // 0x349ba4: 0x0  nop
    ctx->pc = 0x349ba4u;
    // NOP
    ctx->pc = 0x349ba8u;
}
