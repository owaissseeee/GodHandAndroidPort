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

// Function: func_003BAFB8
// Address: 0x3bafb8 - 0x3bafd0
void func_003BAFB8_0x3bafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BAFB8_0x3bafb8");
#endif

    ctx->pc = 0x3bafb8u;

    // 0x3bafb8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3bafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3bafbc: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3bafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x3bafc0: 0x2484c9b4  addiu       $a0, $a0, -0x364C
    ctx->pc = 0x3bafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953396));
    // 0x3bafc4: 0x80c8934  j           func_3224D0
    ctx->pc = 0x3BAFC4u;
    ctx->pc = 0x3BAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAFC4u;
    // 0x3bafc8: 0x24a554b0  addiu       $a1, $a1, 0x54B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3224D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3224D0u, 0x3BAFC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BAFCCu;
    // 0x3bafcc: 0x0  nop
    ctx->pc = 0x3bafccu;
    // NOP
    ctx->pc = 0x3bafd0u;
}
