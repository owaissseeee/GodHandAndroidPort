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

// Function: func_00328120
// Address: 0x328120 - 0x328140
void func_00328120_0x328120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328120_0x328120");
#endif

    ctx->pc = 0x328120u;

    // 0x328120: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x328120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x328124: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x328124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x328128: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x328128u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x32812c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32812Cu;
    {
        const bool branch_taken_0x32812c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x32812c) {
            ctx->pc = 0x328130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32812Cu;
            // 0x328130: 0xac820058  sw          $v0, 0x58($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328134u;
            goto label_328134;
        }
    }
    ctx->pc = 0x328134u;
label_328134:
    // 0x328134: 0x3e00008  jr          $ra
    ctx->pc = 0x328134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328134u;
        // 0x328138: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32813Cu;
    // 0x32813c: 0x0  nop
    ctx->pc = 0x32813cu;
    // NOP
    ctx->pc = 0x328140u;
}
