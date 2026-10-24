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

// Function: func_00338990
// Address: 0x338990 - 0x3389c8
void func_00338990_0x338990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338990_0x338990");
#endif

    ctx->pc = 0x338990u;

    // 0x338990: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x338990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x338994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338998: 0x24633a90  addiu       $v1, $v1, 0x3A90
    ctx->pc = 0x338998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14992));
    // 0x33899c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33899cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3A90u));
    // 0x3389a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3389a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3389a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3389a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E3A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E3A90u, _value); } while (0);
    // 0x3389a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3389a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3E3A90u));
    // 0x3389ac: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3389ACu;
    {
        const bool branch_taken_0x3389ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3389B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389ACu;
        // 0x3389b0: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389ac) {
            ctx->pc = 0x3389BCu;
            goto label_3389bc;
        }
    }
    ctx->pc = 0x3389B4u;
    // 0x3389b4: 0x24423a88  addiu       $v0, $v0, 0x3A88
    ctx->pc = 0x3389b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14984));
    // 0x3389b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3389b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3389bc:
    // 0x3389bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3389BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3389BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3389C4u;
    // 0x3389c4: 0x0  nop
    ctx->pc = 0x3389c4u;
    // NOP
    ctx->pc = 0x3389c8u;
}
