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

// Function: func_0031FD58
// Address: 0x31fd58 - 0x31fd90
void func_0031FD58_0x31fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FD58_0x31fd58");
#endif

    ctx->pc = 0x31fd58u;

    // 0x31fd58: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fd5c: 0x8c824448  lw          $v0, 0x4448($a0)
    ctx->pc = 0x31fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4448u));
    // 0x31fd60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FD60u;
    {
        const bool branch_taken_0x31fd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD60u;
        // 0x31fd64: 0x24854448  addiu       $a1, $a0, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd60) {
            ctx->pc = 0x31FD84u;
            goto label_31fd84;
        }
    }
    ctx->pc = 0x31FD68u;
    // 0x31fd68: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FD68u;
    {
        const bool branch_taken_0x31fd68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD68u;
        // 0x31fd6c: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd68) {
            ctx->pc = 0x31FD84u;
            goto label_31fd84;
        }
    }
    ctx->pc = 0x31FD70u;
    // 0x31fd70: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fd74: 0x24631110  addiu       $v1, $v1, 0x1110
    ctx->pc = 0x31fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
    // 0x31fd78: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fd7c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fd80: 0xac834448  sw          $v1, 0x4448($a0)
    ctx->pc = 0x31fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17480), GPR_U32(ctx, 3));
label_31fd84:
    // 0x31fd84: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD84u;
        // 0x31fd88: 0x24824448  addiu       $v0, $a0, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FD8Cu;
    // 0x31fd8c: 0x0  nop
    ctx->pc = 0x31fd8cu;
    // NOP
    ctx->pc = 0x31fd90u;
}
