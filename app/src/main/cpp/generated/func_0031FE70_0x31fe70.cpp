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

// Function: func_0031FE70
// Address: 0x31fe70 - 0x31fea8
void func_0031FE70_0x31fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FE70_0x31fe70");
#endif

    ctx->pc = 0x31fe70u;

    // 0x31fe70: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fe74: 0x8c824470  lw          $v0, 0x4470($a0)
    ctx->pc = 0x31fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4470u));
    // 0x31fe78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FE78u;
    {
        const bool branch_taken_0x31fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE78u;
        // 0x31fe7c: 0x24854470  addiu       $a1, $a0, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe78) {
            ctx->pc = 0x31FE9Cu;
            goto label_31fe9c;
        }
    }
    ctx->pc = 0x31FE80u;
    // 0x31fe80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FE80u;
    {
        const bool branch_taken_0x31fe80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE80u;
        // 0x31fe84: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe80) {
            ctx->pc = 0x31FE9Cu;
            goto label_31fe9c;
        }
    }
    ctx->pc = 0x31FE88u;
    // 0x31fe88: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fe8c: 0x24631138  addiu       $v1, $v1, 0x1138
    ctx->pc = 0x31fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4408));
    // 0x31fe90: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fe94: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fe98: 0xac834470  sw          $v1, 0x4470($a0)
    ctx->pc = 0x31fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17520), GPR_U32(ctx, 3));
label_31fe9c:
    // 0x31fe9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE9Cu;
        // 0x31fea0: 0x24824470  addiu       $v0, $a0, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FEA4u;
    // 0x31fea4: 0x0  nop
    ctx->pc = 0x31fea4u;
    // NOP
    ctx->pc = 0x31fea8u;
}
