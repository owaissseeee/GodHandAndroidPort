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

// Function: func_00326370
// Address: 0x326370 - 0x326390
void func_00326370_0x326370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326370_0x326370");
#endif

    ctx->pc = 0x326370u;

    // 0x326370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32637c: 0x80ce106  j           func_338418
    ctx->pc = 0x32637Cu;
    ctx->pc = 0x326380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32637Cu;
    // 0x326380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338418u, 0x32637Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326384u;
    // 0x326384: 0x0  nop
    ctx->pc = 0x326384u;
    // NOP
    // 0x326388: 0x0  nop
    ctx->pc = 0x326388u;
    // NOP
    // 0x32638c: 0x0  nop
    ctx->pc = 0x32638cu;
    // NOP
    ctx->pc = 0x326390u;
}
