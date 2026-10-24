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

// Function: func_0031FE00
// Address: 0x31fe00 - 0x31fe38
void func_0031FE00_0x31fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FE00_0x31fe00");
#endif

    ctx->pc = 0x31fe00u;

    // 0x31fe00: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fe04: 0x8c824460  lw          $v0, 0x4460($a0)
    ctx->pc = 0x31fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4460u));
    // 0x31fe08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FE08u;
    {
        const bool branch_taken_0x31fe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE08u;
        // 0x31fe0c: 0x24854460  addiu       $a1, $a0, 0x4460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe08) {
            ctx->pc = 0x31FE2Cu;
            goto label_31fe2c;
        }
    }
    ctx->pc = 0x31FE10u;
    // 0x31fe10: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FE10u;
    {
        const bool branch_taken_0x31fe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE10u;
        // 0x31fe14: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe10) {
            ctx->pc = 0x31FE2Cu;
            goto label_31fe2c;
        }
    }
    ctx->pc = 0x31FE18u;
    // 0x31fe18: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fe1c: 0x24631128  addiu       $v1, $v1, 0x1128
    ctx->pc = 0x31fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x31fe20: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fe24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fe28: 0xac834460  sw          $v1, 0x4460($a0)
    ctx->pc = 0x31fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17504), GPR_U32(ctx, 3));
label_31fe2c:
    // 0x31fe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE2Cu;
        // 0x31fe30: 0x24824460  addiu       $v0, $a0, 0x4460 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FE34u;
    // 0x31fe34: 0x0  nop
    ctx->pc = 0x31fe34u;
    // NOP
    ctx->pc = 0x31fe38u;
}
