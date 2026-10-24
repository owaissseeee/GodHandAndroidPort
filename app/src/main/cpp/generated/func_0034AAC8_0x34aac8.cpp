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

// Function: func_0034AAC8
// Address: 0x34aac8 - 0x34aae0
void func_0034AAC8_0x34aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AAC8_0x34aac8");
#endif

    ctx->pc = 0x34aac8u;

    // 0x34aac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34aacc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34aaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34aad0: 0x8c85200c  lw          $a1, 0x200C($a0)
    ctx->pc = 0x34aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8204)));
    // 0x34aad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34aad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aad8: 0x80d32a6  j           func_34CA98
    ctx->pc = 0x34AAD8u;
    ctx->pc = 0x34AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AAD8u;
    // 0x34aadc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x34AAD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34AAE0u;
}
