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

// Function: func_0031FEE0
// Address: 0x31fee0 - 0x31ff18
void func_0031FEE0_0x31fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FEE0_0x31fee0");
#endif

    ctx->pc = 0x31fee0u;

    // 0x31fee0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fee4: 0x8c824480  lw          $v0, 0x4480($a0)
    ctx->pc = 0x31fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4480u));
    // 0x31fee8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FEE8u;
    {
        const bool branch_taken_0x31fee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEE8u;
        // 0x31feec: 0x24854480  addiu       $a1, $a0, 0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fee8) {
            ctx->pc = 0x31FF0Cu;
            goto label_31ff0c;
        }
    }
    ctx->pc = 0x31FEF0u;
    // 0x31fef0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FEF0u;
    {
        const bool branch_taken_0x31fef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEF0u;
        // 0x31fef4: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fef0) {
            ctx->pc = 0x31FF0Cu;
            goto label_31ff0c;
        }
    }
    ctx->pc = 0x31FEF8u;
    // 0x31fef8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fefc: 0x24631148  addiu       $v1, $v1, 0x1148
    ctx->pc = 0x31fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4424));
    // 0x31ff00: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31ff04: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31ff08: 0xac834480  sw          $v1, 0x4480($a0)
    ctx->pc = 0x31ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17536), GPR_U32(ctx, 3));
label_31ff0c:
    // 0x31ff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF0Cu;
        // 0x31ff10: 0x24824480  addiu       $v0, $a0, 0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FF14u;
    // 0x31ff14: 0x0  nop
    ctx->pc = 0x31ff14u;
    // NOP
    ctx->pc = 0x31ff18u;
}
