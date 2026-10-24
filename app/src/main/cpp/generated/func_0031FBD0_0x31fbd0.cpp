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

// Function: func_0031FBD0
// Address: 0x31fbd0 - 0x31fc08
void func_0031FBD0_0x31fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FBD0_0x31fbd0");
#endif

    ctx->pc = 0x31fbd0u;

    // 0x31fbd0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fbd4: 0x8c824410  lw          $v0, 0x4410($a0)
    ctx->pc = 0x31fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4410u));
    // 0x31fbd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FBD8u;
    {
        const bool branch_taken_0x31fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBD8u;
        // 0x31fbdc: 0x24854410  addiu       $a1, $a0, 0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbd8) {
            ctx->pc = 0x31FBFCu;
            goto label_31fbfc;
        }
    }
    ctx->pc = 0x31FBE0u;
    // 0x31fbe0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FBE0u;
    {
        const bool branch_taken_0x31fbe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBE0u;
        // 0x31fbe4: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbe0) {
            ctx->pc = 0x31FBFCu;
            goto label_31fbfc;
        }
    }
    ctx->pc = 0x31FBE8u;
    // 0x31fbe8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fbec: 0x246310d8  addiu       $v1, $v1, 0x10D8
    ctx->pc = 0x31fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4312));
    // 0x31fbf0: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fbf4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fbf8: 0xac834410  sw          $v1, 0x4410($a0)
    ctx->pc = 0x31fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17424), GPR_U32(ctx, 3));
label_31fbfc:
    // 0x31fbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x31FBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBFCu;
        // 0x31fc00: 0x24824410  addiu       $v0, $a0, 0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FC04u;
    // 0x31fc04: 0x0  nop
    ctx->pc = 0x31fc04u;
    // NOP
    ctx->pc = 0x31fc08u;
}
