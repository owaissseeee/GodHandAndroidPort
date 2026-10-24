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

// Function: func_0034AAF8
// Address: 0x34aaf8 - 0x34ab18
void func_0034AAF8_0x34aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AAF8_0x34aaf8");
#endif

    ctx->pc = 0x34aaf8u;

    // 0x34aaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34aafc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34aafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ab00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34ab04: 0x8c852010  lw          $a1, 0x2010($a0)
    ctx->pc = 0x34ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8208)));
    // 0x34ab08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ab08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ab0c: 0x80d329a  j           func_34CA68
    ctx->pc = 0x34AB0Cu;
    ctx->pc = 0x34AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB0Cu;
    // 0x34ab10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA68u, 0x34AB0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34AB14u;
    // 0x34ab14: 0x0  nop
    ctx->pc = 0x34ab14u;
    // NOP
    ctx->pc = 0x34ab18u;
}
