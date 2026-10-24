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

// Function: func_003607A0
// Address: 0x3607a0 - 0x3607c8
void func_003607A0_0x3607a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003607A0_0x3607a0");
#endif

    ctx->pc = 0x3607a0u;

    // 0x3607a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3607a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3607a4: 0x2442ea6c  addiu       $v0, $v0, -0x1594
    ctx->pc = 0x3607a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961772));
    // 0x3607a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3607a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEA6Cu));
    // 0x3607ac: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3607ACu;
    {
        const bool branch_taken_0x3607ac = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607ACu;
        // 0x3607b0: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607ac) {
            ctx->pc = 0x3607B8u;
            goto label_3607b8;
        }
    }
    ctx->pc = 0x3607B4u;
    // 0x3607b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3607b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3607b8:
    // 0x3607b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3607B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3607B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3607C0u;
    // 0x3607c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3607c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3607c4: 0x0  nop
    ctx->pc = 0x3607c4u;
    // NOP
    ctx->pc = 0x3607c8u;
}
