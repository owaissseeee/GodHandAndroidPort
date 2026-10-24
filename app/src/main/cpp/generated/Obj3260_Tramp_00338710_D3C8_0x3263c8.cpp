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

// Function: Obj3260_Tramp_00338710_D3C8
// Address: 0x3263c8 - 0x3263e0
void Obj3260_Tramp_00338710_D3C8_0x3263c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00338710_D3C8_0x3263c8");
#endif

    ctx->pc = 0x3263c8u;

    // 0x3263c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3263cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3263ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3263d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3263d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3263d4: 0x80ce1c4  j           func_338710
    ctx->pc = 0x3263D4u;
    ctx->pc = 0x3263D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263D4u;
    // 0x3263d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338710u, 0x3263D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3263DCu;
    // 0x3263dc: 0x0  nop
    ctx->pc = 0x3263dcu;
    // NOP
    ctx->pc = 0x3263e0u;
}
