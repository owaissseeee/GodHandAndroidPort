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

// Function: func_0035EDC8
// Address: 0x35edc8 - 0x35ede0
void func_0035EDC8_0x35edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EDC8_0x35edc8");
#endif

    ctx->pc = 0x35edc8u;

    // 0x35edc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35edc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35edcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35edccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35edd0: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x35edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x35edd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35edd8: 0x80d7b78  j           func_35EDE0
    ctx->pc = 0x35EDD8u;
    ctx->pc = 0x35EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDD8u;
    // 0x35eddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EDE0u, 0x35EDD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EDE0u;
}
