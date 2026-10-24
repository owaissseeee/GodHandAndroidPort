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

// Function: func_0031FD90
// Address: 0x31fd90 - 0x31fdc8
void func_0031FD90_0x31fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FD90_0x31fd90");
#endif

    ctx->pc = 0x31fd90u;

    // 0x31fd90: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31fd94: 0x8c824450  lw          $v0, 0x4450($a0)
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4450u));
    // 0x31fd98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FD98u;
    {
        const bool branch_taken_0x31fd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD98u;
        // 0x31fd9c: 0x24854450  addiu       $a1, $a0, 0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd98) {
            ctx->pc = 0x31FDBCu;
            goto label_31fdbc;
        }
    }
    ctx->pc = 0x31FDA0u;
    // 0x31fda0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FDA0u;
    {
        const bool branch_taken_0x31fda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDA0u;
        // 0x31fda4: 0x3c030045  lui         $v1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fda0) {
            ctx->pc = 0x31FDBCu;
            goto label_31fdbc;
        }
    }
    ctx->pc = 0x31FDA8u;
    // 0x31fda8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31fdac: 0x24631118  addiu       $v1, $v1, 0x1118
    ctx->pc = 0x31fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4376));
    // 0x31fdb0: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x31fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x31fdb4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31fdb8: 0xac834450  sw          $v1, 0x4450($a0)
    ctx->pc = 0x31fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17488), GPR_U32(ctx, 3));
label_31fdbc:
    // 0x31fdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x31FDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDBCu;
        // 0x31fdc0: 0x24824450  addiu       $v0, $a0, 0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FDC4u;
    // 0x31fdc4: 0x0  nop
    ctx->pc = 0x31fdc4u;
    // NOP
    ctx->pc = 0x31fdc8u;
}
