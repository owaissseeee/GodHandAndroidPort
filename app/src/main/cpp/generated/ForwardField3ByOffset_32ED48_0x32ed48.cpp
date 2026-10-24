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

// Function: ForwardField3ByOffset_32ED48
// Address: 0x32ed48 - 0x32ed70
void ForwardField3ByOffset_32ED48_0x32ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardField3ByOffset_32ED48_0x32ed48");
#endif

    ctx->pc = 0x32ed48u;

    // 0x32ed48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ed4c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32ed50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ed54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x32ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32ed58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32ed58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed5c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x32ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32ed60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ed60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ed64: 0x80caa7c  j           func_32A9F0
    ctx->pc = 0x32ED64u;
    ctx->pc = 0x32ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED64u;
    // 0x32ed68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x32ED64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ED6Cu;
    // 0x32ed6c: 0x0  nop
    ctx->pc = 0x32ed6cu;
    // NOP
    ctx->pc = 0x32ed70u;
}
