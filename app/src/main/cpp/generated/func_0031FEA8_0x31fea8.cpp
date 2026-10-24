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

// Function: func_0031FEA8
// Address: 0x31fea8 - 0x31fee0
void func_0031FEA8_0x31fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FEA8_0x31fea8");
#endif

    ctx->pc = 0x31fea8u;

    // 0x31fea8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31feac: 0x8c824478  lw          $v0, 0x4478($a0)
    ctx->pc = 0x31feacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4478u));
    // 0x31feb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FEB0u;
    {
        const bool branch_taken_0x31feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEB0u;
        // 0x31feb4: 0x24854478  addiu       $a1, $a0, 0x4478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31feb0) {
            ctx->pc = 0x31FED4u;
            goto label_31fed4;
        }
    }
    ctx->pc = 0x31FEB8u;
    // 0x31feb8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FEB8u;
    {
        const bool branch_taken_0x31feb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEB8u;
        // 0x31febc: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31feb8) {
            ctx->pc = 0x31FED4u;
            goto label_31fed4;
        }
    }
    ctx->pc = 0x31FEC0u;
    // 0x31fec0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fec4: 0x24631140  addiu       $v1, $v1, 0x1140
    ctx->pc = 0x31fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4416));
    // 0x31fec8: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fecc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31feccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fed0: 0xac834478  sw          $v1, 0x4478($a0)
    ctx->pc = 0x31fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17528), GPR_U32(ctx, 3));
label_31fed4:
    // 0x31fed4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FED4u;
        // 0x31fed8: 0x24824478  addiu       $v0, $a0, 0x4478 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FEDCu;
    // 0x31fedc: 0x0  nop
    ctx->pc = 0x31fedcu;
    // NOP
    ctx->pc = 0x31fee0u;
}
