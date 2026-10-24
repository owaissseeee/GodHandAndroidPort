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

// Function: func_003389C8
// Address: 0x3389c8 - 0x3389f8
void func_003389C8_0x3389c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003389C8_0x3389c8");
#endif

    ctx->pc = 0x3389c8u;

    // 0x3389c8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3389c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3389cc: 0x24423a90  addiu       $v0, $v0, 0x3A90
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14992));
    // 0x3389d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3389d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E3A90u));
    // 0x3389d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3389d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3389d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3389d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E3A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E3A90u, _value); } while (0);
    // 0x3389dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3389dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3E3A90u));
    // 0x3389e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3389E0u;
    {
        const bool branch_taken_0x3389e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3389E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389E0u;
        // 0x3389e4: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389e0) {
            ctx->pc = 0x3389F0u;
            goto label_3389f0;
        }
    }
    ctx->pc = 0x3389E8u;
    // 0x3389e8: 0x24423a88  addiu       $v0, $v0, 0x3A88
    ctx->pc = 0x3389e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14984));
    // 0x3389ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3389ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3389f0:
    // 0x3389f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3389F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3389F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3389F8u;
}
