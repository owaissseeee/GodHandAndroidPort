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

// Function: func_0034A3E0
// Address: 0x34a3e0 - 0x34a400
void func_0034A3E0_0x34a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A3E0_0x34a3e0");
#endif

    ctx->pc = 0x34a3e0u;

    // 0x34a3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34a3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34a3e8: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x34a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34a3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a3f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a3f4: 0x80cae0c  j           func_32B830
    ctx->pc = 0x34A3F4u;
    ctx->pc = 0x34A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A3F4u;
    // 0x34a3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B830u, 0x34A3F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34A3FCu;
    // 0x34a3fc: 0x0  nop
    ctx->pc = 0x34a3fcu;
    // NOP
    ctx->pc = 0x34a400u;
}
