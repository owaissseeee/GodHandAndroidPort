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

// Function: func_00307840
// Address: 0x307840 - 0x307878
void func_00307840_0x307840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307840_0x307840");
#endif

    ctx->pc = 0x307840u;

    // 0x307840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307844: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x307844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x307848: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x307848u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30784c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x30784cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307850: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x307850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x307854: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x307854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307858: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x307858u;
    {
        const bool branch_taken_0x307858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307858) {
            ctx->pc = 0x307860u;
            goto label_307860;
        }
    }
    ctx->pc = 0x307860u;
label_307860:
    // 0x307860: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x307860u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307864: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x307864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307868: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30786c: 0x3e00008  jr          $ra
    ctx->pc = 0x30786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30786Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307874u;
    // 0x307874: 0x0  nop
    ctx->pc = 0x307874u;
    // NOP
    ctx->pc = 0x307878u;
}
