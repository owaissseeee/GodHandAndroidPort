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

// Function: func_0031FB98
// Address: 0x31fb98 - 0x31fbd0
void func_0031FB98_0x31fb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FB98_0x31fb98");
#endif

    ctx->pc = 0x31fb98u;

    // 0x31fb98: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fb9c: 0x8c824408  lw          $v0, 0x4408($a0)
    ctx->pc = 0x31fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4408u));
    // 0x31fba0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FBA0u;
    {
        const bool branch_taken_0x31fba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBA0u;
        // 0x31fba4: 0x24854408  addiu       $a1, $a0, 0x4408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fba0) {
            ctx->pc = 0x31FBC4u;
            goto label_31fbc4;
        }
    }
    ctx->pc = 0x31FBA8u;
    // 0x31fba8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FBA8u;
    {
        const bool branch_taken_0x31fba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBA8u;
        // 0x31fbac: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fba8) {
            ctx->pc = 0x31FBC4u;
            goto label_31fbc4;
        }
    }
    ctx->pc = 0x31FBB0u;
    // 0x31fbb0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fbb4: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x31fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
    // 0x31fbb8: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fbbc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fbc0: 0xac834408  sw          $v1, 0x4408($a0)
    ctx->pc = 0x31fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17416), GPR_U32(ctx, 3));
label_31fbc4:
    // 0x31fbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBC4u;
        // 0x31fbc8: 0x24824408  addiu       $v0, $a0, 0x4408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FBCCu;
    // 0x31fbcc: 0x0  nop
    ctx->pc = 0x31fbccu;
    // NOP
    ctx->pc = 0x31fbd0u;
}
