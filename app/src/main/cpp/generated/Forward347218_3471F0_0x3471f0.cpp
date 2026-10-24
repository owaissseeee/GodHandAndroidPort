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

// Function: Forward347218_3471F0
// Address: 0x3471f0 - 0x347218
void Forward347218_3471F0_0x3471f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward347218_3471F0_0x3471f0");
#endif

    ctx->pc = 0x3471f0u;

    // 0x3471f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3471f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3471f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3471f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3471f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3471fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3471fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347200: 0x80d1c86  j           func_347218
    ctx->pc = 0x347200u;
    ctx->pc = 0x347204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347200u;
    // 0x347204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347218u, 0x347200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347208u;
    // 0x347208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x347208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34720c: 0x0  nop
    ctx->pc = 0x34720cu;
    // NOP
    // 0x347210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347214: 0x0  nop
    ctx->pc = 0x347214u;
    // NOP
    ctx->pc = 0x347218u;
}
