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

// Function: func_0031FF18
// Address: 0x31ff18 - 0x31ff50
void func_0031FF18_0x31ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FF18_0x31ff18");
#endif

    ctx->pc = 0x31ff18u;

    // 0x31ff18: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31ff1c: 0x8c824488  lw          $v0, 0x4488($a0)
    ctx->pc = 0x31ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4488u));
    // 0x31ff20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FF20u;
    {
        const bool branch_taken_0x31ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF20u;
        // 0x31ff24: 0x24854488  addiu       $a1, $a0, 0x4488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff20) {
            ctx->pc = 0x31FF44u;
            goto label_31ff44;
        }
    }
    ctx->pc = 0x31FF28u;
    // 0x31ff28: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FF28u;
    {
        const bool branch_taken_0x31ff28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF28u;
        // 0x31ff2c: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff28) {
            ctx->pc = 0x31FF44u;
            goto label_31ff44;
        }
    }
    ctx->pc = 0x31FF30u;
    // 0x31ff30: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31ff34: 0x24631150  addiu       $v1, $v1, 0x1150
    ctx->pc = 0x31ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4432));
    // 0x31ff38: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31ff3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31ff40: 0xac834488  sw          $v1, 0x4488($a0)
    ctx->pc = 0x31ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17544), GPR_U32(ctx, 3));
label_31ff44:
    // 0x31ff44: 0x3e00008  jr          $ra
    ctx->pc = 0x31FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF44u;
        // 0x31ff48: 0x24824488  addiu       $v0, $a0, 0x4488 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FF4Cu;
    // 0x31ff4c: 0x0  nop
    ctx->pc = 0x31ff4cu;
    // NOP
    ctx->pc = 0x31ff50u;
}
