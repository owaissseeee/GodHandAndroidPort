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

// Function: func_0036C670
// Address: 0x36c670 - 0x36c688
void func_0036C670_0x36c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C670_0x36c670");
#endif

    ctx->pc = 0x36c670u;

    // 0x36c670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c67c: 0x80db346  j           func_36CD18
    ctx->pc = 0x36C67Cu;
    ctx->pc = 0x36C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C67Cu;
    // 0x36c680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CD18u, 0x36C67Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C684u;
    // 0x36c684: 0x0  nop
    ctx->pc = 0x36c684u;
    // NOP
    ctx->pc = 0x36c688u;
}
