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

// Function: func_0031FC78
// Address: 0x31fc78 - 0x31fcb0
void func_0031FC78_0x31fc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FC78_0x31fc78");
#endif

    ctx->pc = 0x31fc78u;

    // 0x31fc78: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fc7c: 0x8c824428  lw          $v0, 0x4428($a0)
    ctx->pc = 0x31fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4428u));
    // 0x31fc80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FC80u;
    {
        const bool branch_taken_0x31fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC80u;
        // 0x31fc84: 0x24854428  addiu       $a1, $a0, 0x4428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc80) {
            ctx->pc = 0x31FCA4u;
            goto label_31fca4;
        }
    }
    ctx->pc = 0x31FC88u;
    // 0x31fc88: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FC88u;
    {
        const bool branch_taken_0x31fc88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC88u;
        // 0x31fc8c: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc88) {
            ctx->pc = 0x31FCA4u;
            goto label_31fca4;
        }
    }
    ctx->pc = 0x31FC90u;
    // 0x31fc90: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fc94: 0x246310f0  addiu       $v1, $v1, 0x10F0
    ctx->pc = 0x31fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4336));
    // 0x31fc98: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fc9c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fca0: 0xac834428  sw          $v1, 0x4428($a0)
    ctx->pc = 0x31fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17448), GPR_U32(ctx, 3));
label_31fca4:
    // 0x31fca4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCA4u;
        // 0x31fca8: 0x24824428  addiu       $v0, $a0, 0x4428 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FCACu;
    // 0x31fcac: 0x0  nop
    ctx->pc = 0x31fcacu;
    // NOP
    ctx->pc = 0x31fcb0u;
}
