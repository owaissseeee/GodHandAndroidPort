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

// Function: func_001FF0B0
// Address: 0x1ff0b0 - 0x1ff0d8
void func_001FF0B0_0x1ff0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF0B0_0x1ff0b0");
#endif

    ctx->pc = 0x1ff0b0u;

    // 0x1ff0b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff0b4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF0B4u;
    {
        const bool branch_taken_0x1ff0b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1FF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0B4u;
        // 0x1ff0b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0b4) {
            ctx->pc = 0x1FF0C0u;
            goto label_1ff0c0;
        }
    }
    ctx->pc = 0x1FF0BCu;
    // 0x1ff0bc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ff0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ff0c0:
    // 0x1ff0c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff0c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF0C4u;
    {
        const bool branch_taken_0x1ff0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0C4u;
        // 0x1ff0c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0c4) {
            ctx->pc = 0x1FF0D0u;
            goto label_1ff0d0;
        }
    }
    ctx->pc = 0x1FF0CCu;
    // 0x1ff0cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ff0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ff0d0:
    // 0x1ff0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF0D8u;
}
