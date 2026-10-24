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

// Function: Obj3260_TrampVia0C_00337B30_D220
// Address: 0x326220 - 0x326238
void Obj3260_TrampVia0C_00337B30_D220_0x326220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_TrampVia0C_00337B30_D220_0x326220");
#endif

    ctx->pc = 0x326220u;

    // 0x326220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326228: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32622c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326230: 0x80cdecc  j           func_337B30
    ctx->pc = 0x326230u;
    ctx->pc = 0x326234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326230u;
    // 0x326234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B30u, 0x326230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326238u;
}
