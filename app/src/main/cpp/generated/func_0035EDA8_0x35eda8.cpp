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

// Function: func_0035EDA8
// Address: 0x35eda8 - 0x35edc8
void func_0035EDA8_0x35eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EDA8_0x35eda8");
#endif

    ctx->pc = 0x35eda8u;

    // 0x35eda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35edac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35edacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35edb0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x35edb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x35edb4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x35edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x35edb8: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x35edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x35edbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35edc0: 0x80d80f6  j           func_3603D8
    ctx->pc = 0x35EDC0u;
    ctx->pc = 0x35EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDC0u;
    // 0x35edc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3603D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3603D8u, 0x35EDC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EDC8u;
}
