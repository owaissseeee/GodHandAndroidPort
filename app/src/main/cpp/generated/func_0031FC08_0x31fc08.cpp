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

// Function: func_0031FC08
// Address: 0x31fc08 - 0x31fc40
void func_0031FC08_0x31fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FC08_0x31fc08");
#endif

    ctx->pc = 0x31fc08u;

    // 0x31fc08: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fc0c: 0x8c824418  lw          $v0, 0x4418($a0)
    ctx->pc = 0x31fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4418u));
    // 0x31fc10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FC10u;
    {
        const bool branch_taken_0x31fc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC10u;
        // 0x31fc14: 0x24854418  addiu       $a1, $a0, 0x4418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc10) {
            ctx->pc = 0x31FC34u;
            goto label_31fc34;
        }
    }
    ctx->pc = 0x31FC18u;
    // 0x31fc18: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FC18u;
    {
        const bool branch_taken_0x31fc18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC18u;
        // 0x31fc1c: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc18) {
            ctx->pc = 0x31FC34u;
            goto label_31fc34;
        }
    }
    ctx->pc = 0x31FC20u;
    // 0x31fc20: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fc24: 0x246310e0  addiu       $v1, $v1, 0x10E0
    ctx->pc = 0x31fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4320));
    // 0x31fc28: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fc2c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fc30: 0xac834418  sw          $v1, 0x4418($a0)
    ctx->pc = 0x31fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17432), GPR_U32(ctx, 3));
label_31fc34:
    // 0x31fc34: 0x3e00008  jr          $ra
    ctx->pc = 0x31FC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC34u;
        // 0x31fc38: 0x24824418  addiu       $v0, $a0, 0x4418 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FC3Cu;
    // 0x31fc3c: 0x0  nop
    ctx->pc = 0x31fc3cu;
    // NOP
    ctx->pc = 0x31fc40u;
}
