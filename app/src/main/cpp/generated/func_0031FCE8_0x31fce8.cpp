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

// Function: func_0031FCE8
// Address: 0x31fce8 - 0x31fd20
void func_0031FCE8_0x31fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FCE8_0x31fce8");
#endif

    ctx->pc = 0x31fce8u;

    // 0x31fce8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fcec: 0x8c824438  lw          $v0, 0x4438($a0)
    ctx->pc = 0x31fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4438u));
    // 0x31fcf0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FCF0u;
    {
        const bool branch_taken_0x31fcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCF0u;
        // 0x31fcf4: 0x24854438  addiu       $a1, $a0, 0x4438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcf0) {
            ctx->pc = 0x31FD14u;
            goto label_31fd14;
        }
    }
    ctx->pc = 0x31FCF8u;
    // 0x31fcf8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FCF8u;
    {
        const bool branch_taken_0x31fcf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCF8u;
        // 0x31fcfc: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcf8) {
            ctx->pc = 0x31FD14u;
            goto label_31fd14;
        }
    }
    ctx->pc = 0x31FD00u;
    // 0x31fd00: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fd04: 0x24631100  addiu       $v1, $v1, 0x1100
    ctx->pc = 0x31fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4352));
    // 0x31fd08: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fd0c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fd10: 0xac834438  sw          $v1, 0x4438($a0)
    ctx->pc = 0x31fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17464), GPR_U32(ctx, 3));
label_31fd14:
    // 0x31fd14: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD14u;
        // 0x31fd18: 0x24824438  addiu       $v0, $a0, 0x4438 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FD1Cu;
    // 0x31fd1c: 0x0  nop
    ctx->pc = 0x31fd1cu;
    // NOP
    ctx->pc = 0x31fd20u;
}
