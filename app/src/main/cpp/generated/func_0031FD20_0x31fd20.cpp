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

// Function: func_0031FD20
// Address: 0x31fd20 - 0x31fd58
void func_0031FD20_0x31fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FD20_0x31fd20");
#endif

    ctx->pc = 0x31fd20u;

    // 0x31fd20: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fd24: 0x8c824440  lw          $v0, 0x4440($a0)
    ctx->pc = 0x31fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4440u));
    // 0x31fd28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FD28u;
    {
        const bool branch_taken_0x31fd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD28u;
        // 0x31fd2c: 0x24854440  addiu       $a1, $a0, 0x4440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd28) {
            ctx->pc = 0x31FD4Cu;
            goto label_31fd4c;
        }
    }
    ctx->pc = 0x31FD30u;
    // 0x31fd30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FD30u;
    {
        const bool branch_taken_0x31fd30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD30u;
        // 0x31fd34: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd30) {
            ctx->pc = 0x31FD4Cu;
            goto label_31fd4c;
        }
    }
    ctx->pc = 0x31FD38u;
    // 0x31fd38: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fd3c: 0x24631108  addiu       $v1, $v1, 0x1108
    ctx->pc = 0x31fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4360));
    // 0x31fd40: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fd44: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fd48: 0xac834440  sw          $v1, 0x4440($a0)
    ctx->pc = 0x31fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17472), GPR_U32(ctx, 3));
label_31fd4c:
    // 0x31fd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD4Cu;
        // 0x31fd50: 0x24824440  addiu       $v0, $a0, 0x4440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FD54u;
    // 0x31fd54: 0x0  nop
    ctx->pc = 0x31fd54u;
    // NOP
    ctx->pc = 0x31fd58u;
}
