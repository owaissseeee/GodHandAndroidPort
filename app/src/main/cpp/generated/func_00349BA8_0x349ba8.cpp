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

// Function: func_00349BA8
// Address: 0x349ba8 - 0x349bc8
void func_00349BA8_0x349ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349BA8_0x349ba8");
#endif

    ctx->pc = 0x349ba8u;

    // 0x349ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349bb0: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x349bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x349bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349bb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x349bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349bbc: 0x80ca9b4  j           func_32A6D0
    ctx->pc = 0x349BBCu;
    ctx->pc = 0x349BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349BBCu;
    // 0x349bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x349BBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349BC4u;
    // 0x349bc4: 0x0  nop
    ctx->pc = 0x349bc4u;
    // NOP
    ctx->pc = 0x349bc8u;
}
