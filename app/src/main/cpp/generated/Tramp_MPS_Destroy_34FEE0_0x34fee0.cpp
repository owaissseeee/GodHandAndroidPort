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

// Function: Tramp_MPS_Destroy_34FEE0
// Address: 0x34fee0 - 0x34fef8
void Tramp_MPS_Destroy_34FEE0_0x34fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_MPS_Destroy_34FEE0_0x34fee0");
#endif

    ctx->pc = 0x34fee0u;

    // 0x34fee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34fee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34fee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34feec: 0x80da462  j           func_369188
    ctx->pc = 0x34FEECu;
    ctx->pc = 0x34FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FEECu;
    // 0x34fef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369188u, 0x34FEECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34FEF4u;
    // 0x34fef4: 0x0  nop
    ctx->pc = 0x34fef4u;
    // NOP
    ctx->pc = 0x34fef8u;
}
