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

// Function: func_002B4F78
// Address: 0x2b4f78 - 0x2b4f98
void func_002B4F78_0x2b4f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4F78_0x2b4f78");
#endif

    ctx->pc = 0x2b4f78u;

    // 0x2b4f78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b4f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b4f80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4F80u;
    {
        const bool branch_taken_0x2b4f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F80u;
        // 0x2b4f84: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f80) {
            ctx->pc = 0x2B4F90u;
            goto label_2b4f90;
        }
    }
    ctx->pc = 0x2B4F88u;
    // 0x2b4f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4f8c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2b4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2b4f90:
    // 0x2b4f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F90u;
        // 0x2b4f94: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F98u;
}
