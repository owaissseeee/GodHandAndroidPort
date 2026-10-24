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
// Address: 0x3a0de8 - 0x3a0e20
void _waitIpuIdle_0x3a0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle_0x3a0de8");
#endif

    ctx->pc = 0x3a0de8u;

    // 0x3a0de8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0dec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3a0decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3a0df0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x3a0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x3a0df4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x3a0df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3a0df8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3a0dfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a0e00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3a0e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3a0e04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0E04u;
    {
        const bool branch_taken_0x3a0e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0e04) {
            ctx->pc = 0x3A0E14u;
            goto label_3a0e14;
        }
    }
    ctx->pc = 0x3A0E0Cu;
    // 0x3a0e0c: 0x80e79f0  j           func_39E7C0
    ctx->pc = 0x3A0E0Cu;
    ctx->pc = 0x39E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E7C0u, 0x3A0E0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0E14u;
label_3a0e14:
    // 0x3a0e14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0E1Cu;
    // 0x3a0e1c: 0x0  nop
    ctx->pc = 0x3a0e1cu;
    // NOP
    ctx->pc = 0x3a0e20u;
}
