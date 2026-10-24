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

// Function: func_0031FC40
// Address: 0x31fc40 - 0x31fc78
void func_0031FC40_0x31fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FC40_0x31fc40");
#endif

    ctx->pc = 0x31fc40u;

    // 0x31fc40: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fc44: 0x8c824420  lw          $v0, 0x4420($a0)
    ctx->pc = 0x31fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4420u));
    // 0x31fc48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FC48u;
    {
        const bool branch_taken_0x31fc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC48u;
        // 0x31fc4c: 0x24854420  addiu       $a1, $a0, 0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc48) {
            ctx->pc = 0x31FC6Cu;
            goto label_31fc6c;
        }
    }
    ctx->pc = 0x31FC50u;
    // 0x31fc50: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FC50u;
    {
        const bool branch_taken_0x31fc50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC50u;
        // 0x31fc54: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc50) {
            ctx->pc = 0x31FC6Cu;
            goto label_31fc6c;
        }
    }
    ctx->pc = 0x31FC58u;
    // 0x31fc58: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fc5c: 0x246310e8  addiu       $v1, $v1, 0x10E8
    ctx->pc = 0x31fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4328));
    // 0x31fc60: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fc64: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fc68: 0xac834420  sw          $v1, 0x4420($a0)
    ctx->pc = 0x31fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17440), GPR_U32(ctx, 3));
label_31fc6c:
    // 0x31fc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC6Cu;
        // 0x31fc70: 0x24824420  addiu       $v0, $a0, 0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FC74u;
    // 0x31fc74: 0x0  nop
    ctx->pc = 0x31fc74u;
    // NOP
    ctx->pc = 0x31fc78u;
}
