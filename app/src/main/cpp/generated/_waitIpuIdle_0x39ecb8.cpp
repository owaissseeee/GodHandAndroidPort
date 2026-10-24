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

// Function: _waitIpuIdle
// Address: 0x39ecb8 - 0x39ecf0
void _waitIpuIdle_0x39ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle_0x39ecb8");
#endif

    ctx->pc = 0x39ecb8u;

    // 0x39ecb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39ecbc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x39ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x39ecc0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39ecc4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x39ecc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x39ecc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39eccc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39ecd0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x39ecd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x39ecd4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39ECD4u;
    {
        const bool branch_taken_0x39ecd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ecd4) {
            ctx->pc = 0x39ECE4u;
            goto label_39ece4;
        }
    }
    ctx->pc = 0x39ECDCu;
    // 0x39ecdc: 0x80e79f0  j           func_39E7C0
    ctx->pc = 0x39ECDCu;
    ctx->pc = 0x39E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E7C0u, 0x39ECDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39ECE4u;
label_39ece4:
    // 0x39ece4: 0x3e00008  jr          $ra
    ctx->pc = 0x39ECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ECE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ECECu;
    // 0x39ecec: 0x0  nop
    ctx->pc = 0x39ececu;
    // NOP
    ctx->pc = 0x39ecf0u;
}
