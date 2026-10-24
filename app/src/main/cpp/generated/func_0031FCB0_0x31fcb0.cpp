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

// Function: func_0031FCB0
// Address: 0x31fcb0 - 0x31fce8
void func_0031FCB0_0x31fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FCB0_0x31fcb0");
#endif

    ctx->pc = 0x31fcb0u;

    // 0x31fcb0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fcb4: 0x8c824430  lw          $v0, 0x4430($a0)
    ctx->pc = 0x31fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4430u));
    // 0x31fcb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FCB8u;
    {
        const bool branch_taken_0x31fcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCB8u;
        // 0x31fcbc: 0x24854430  addiu       $a1, $a0, 0x4430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcb8) {
            ctx->pc = 0x31FCDCu;
            goto label_31fcdc;
        }
    }
    ctx->pc = 0x31FCC0u;
    // 0x31fcc0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FCC0u;
    {
        const bool branch_taken_0x31fcc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCC0u;
        // 0x31fcc4: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcc0) {
            ctx->pc = 0x31FCDCu;
            goto label_31fcdc;
        }
    }
    ctx->pc = 0x31FCC8u;
    // 0x31fcc8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fccc: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x31fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
    // 0x31fcd0: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fcd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fcd8: 0xac834430  sw          $v1, 0x4430($a0)
    ctx->pc = 0x31fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17456), GPR_U32(ctx, 3));
label_31fcdc:
    // 0x31fcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x31FCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCDCu;
        // 0x31fce0: 0x24824430  addiu       $v0, $a0, 0x4430 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FCE4u;
    // 0x31fce4: 0x0  nop
    ctx->pc = 0x31fce4u;
    // NOP
    ctx->pc = 0x31fce8u;
}
