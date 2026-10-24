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

// Function: func_0036D7C0
// Address: 0x36d7c0 - 0x36d7e0
void func_0036D7C0_0x36d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D7C0_0x36d7c0");
#endif

    ctx->pc = 0x36d7c0u;

    // 0x36d7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d7c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x36d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x36d7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d7cc: 0x24842048  addiu       $a0, $a0, 0x2048
    ctx->pc = 0x36d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8264));
    // 0x36d7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d7d4: 0x80db5f8  j           func_36D7E0
    ctx->pc = 0x36D7D4u;
    ctx->pc = 0x36D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D7D4u;
    // 0x36d7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D7E0u, 0x36D7D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D7DCu;
    // 0x36d7dc: 0x0  nop
    ctx->pc = 0x36d7dcu;
    // NOP
    ctx->pc = 0x36d7e0u;
}
