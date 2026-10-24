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

// Function: func_0035EED8
// Address: 0x35eed8 - 0x35eef8
void func_0035EED8_0x35eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EED8_0x35eed8");
#endif

    ctx->pc = 0x35eed8u;

    // 0x35eed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35eedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35eee0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x35eee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x35eee4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x35eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x35eee8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x35eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x35eeec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eef0: 0x80db310  j           func_36CC40
    ctx->pc = 0x35EEF0u;
    ctx->pc = 0x35EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEF0u;
    // 0x35eef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CC40u, 0x35EEF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EEF8u;
}
