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

// Function: Forward3428A0_342870
// Address: 0x342870 - 0x342888
void Forward3428A0_342870_0x342870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3428A0_342870_0x342870");
#endif

    ctx->pc = 0x342870u;

    // 0x342870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342874: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x342874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34287c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34287cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342880: 0x80d0a28  j           func_3428A0
    ctx->pc = 0x342880u;
    ctx->pc = 0x342884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342880u;
    // 0x342884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3428A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3428A0u, 0x342880u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342888u;
}
