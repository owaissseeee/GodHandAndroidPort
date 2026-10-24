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

// Function: func_0031FE38
// Address: 0x31fe38 - 0x31fe70
void func_0031FE38_0x31fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FE38_0x31fe38");
#endif

    ctx->pc = 0x31fe38u;

    // 0x31fe38: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fe3c: 0x8c824468  lw          $v0, 0x4468($a0)
    ctx->pc = 0x31fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4468u));
    // 0x31fe40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FE40u;
    {
        const bool branch_taken_0x31fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE40u;
        // 0x31fe44: 0x24854468  addiu       $a1, $a0, 0x4468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe40) {
            ctx->pc = 0x31FE64u;
            goto label_31fe64;
        }
    }
    ctx->pc = 0x31FE48u;
    // 0x31fe48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FE48u;
    {
        const bool branch_taken_0x31fe48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE48u;
        // 0x31fe4c: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe48) {
            ctx->pc = 0x31FE64u;
            goto label_31fe64;
        }
    }
    ctx->pc = 0x31FE50u;
    // 0x31fe50: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fe54: 0x24631130  addiu       $v1, $v1, 0x1130
    ctx->pc = 0x31fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4400));
    // 0x31fe58: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fe5c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fe60: 0xac834468  sw          $v1, 0x4468($a0)
    ctx->pc = 0x31fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17512), GPR_U32(ctx, 3));
label_31fe64:
    // 0x31fe64: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE64u;
        // 0x31fe68: 0x24824468  addiu       $v0, $a0, 0x4468 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FE6Cu;
    // 0x31fe6c: 0x0  nop
    ctx->pc = 0x31fe6cu;
    // NOP
    ctx->pc = 0x31fe70u;
}
