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

// Function: func_001FF090
// Address: 0x1ff090 - 0x1ff0b0
void func_001FF090_0x1ff090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF090_0x1ff090");
#endif

    ctx->pc = 0x1ff090u;

    // 0x1ff090: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff094: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF094u;
    {
        const bool branch_taken_0x1ff094 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF094u;
        // 0x1ff098: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff094) {
            ctx->pc = 0x1FF0A0u;
            goto label_1ff0a0;
        }
    }
    ctx->pc = 0x1FF09Cu;
    // 0x1ff09c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ff09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ff0a0:
    // 0x1ff0a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0A4u;
        // 0x1ff0a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF0ACu;
    // 0x1ff0ac: 0x0  nop
    ctx->pc = 0x1ff0acu;
    // NOP
    ctx->pc = 0x1ff0b0u;
}
