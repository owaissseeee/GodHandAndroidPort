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

// Function: func_00307118
// Address: 0x307118 - 0x307140
void func_00307118_0x307118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307118_0x307118");
#endif

    ctx->pc = 0x307118u;

    // 0x307118: 0x3c02cdcd  lui         $v0, 0xCDCD
    ctx->pc = 0x307118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52685 << 16));
    // 0x30711c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307120: 0x3442cdcd  ori         $v0, $v0, 0xCDCD
    ctx->pc = 0x307120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52685);
    // 0x307124: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307124u;
    {
        const bool branch_taken_0x307124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x307128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307124u;
        // 0x307128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307124) {
            ctx->pc = 0x307134u;
            goto label_307134;
        }
    }
    ctx->pc = 0x30712Cu;
    // 0x30712c: 0x3e00008  jr          $ra
    ctx->pc = 0x30712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30712Cu;
        // 0x307130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307134u;
label_307134:
    // 0x307134: 0x3e00008  jr          $ra
    ctx->pc = 0x307134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30713Cu;
    // 0x30713c: 0x0  nop
    ctx->pc = 0x30713cu;
    // NOP
    ctx->pc = 0x307140u;
}
