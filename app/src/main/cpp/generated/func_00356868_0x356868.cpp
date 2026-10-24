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

// Function: func_00356868
// Address: 0x356868 - 0x356890
void func_00356868_0x356868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356868_0x356868");
#endif

    ctx->pc = 0x356868u;

    // 0x356868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35686c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x35686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x356870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356874: 0x8c851fc0  lw          $a1, 0x1FC0($a0)
    ctx->pc = 0x356874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x356878: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x356878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x35687c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356880: 0x24846c28  addiu       $a0, $a0, 0x6C28
    ctx->pc = 0x356880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27688));
    // 0x356884: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x356884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x356888: 0x80d9a6c  j           func_3669B0
    ctx->pc = 0x356888u;
    ctx->pc = 0x35688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356888u;
    // 0x35688c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3669B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3669B0u, 0x356888u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356890u;
}
