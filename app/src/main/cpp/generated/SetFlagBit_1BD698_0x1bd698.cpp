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

// Function: SetFlagBit_1BD698
// Address: 0x1bd698 - 0x1bd6b0
void SetFlagBit_1BD698_0x1bd698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagBit_1BD698_0x1bd698");
#endif

    ctx->pc = 0x1bd698u;

    // 0x1bd698: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x1bd69c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6a0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1bd6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1bd6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6A4u;
        // 0x1bd6a8: 0xac8305b8  sw          $v1, 0x5B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD6ACu;
    // 0x1bd6ac: 0x0  nop
    ctx->pc = 0x1bd6acu;
    // NOP
    ctx->pc = 0x1bd6b0u;
}
