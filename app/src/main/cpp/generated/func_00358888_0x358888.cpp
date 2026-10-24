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

// Function: func_00358888
// Address: 0x358888 - 0x3588b0
void func_00358888_0x358888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358888_0x358888");
#endif

    ctx->pc = 0x358888u;

    // 0x358888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35888c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35888cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358894: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x358894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x358898: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x358898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x35889c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3588a0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x3588a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x3588a4: 0x80d708e  j           func_35C238
    ctx->pc = 0x3588A4u;
    ctx->pc = 0x3588A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588A4u;
    // 0x3588a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C238u, 0x3588A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3588ACu;
    // 0x3588ac: 0x0  nop
    ctx->pc = 0x3588acu;
    // NOP
    ctx->pc = 0x3588b0u;
}
