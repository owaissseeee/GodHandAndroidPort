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

// Function: func_002D3190
// Address: 0x2d3190 - 0x2d31b0
void func_002D3190_0x2d3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3190_0x2d3190");
#endif

    ctx->pc = 0x2d3190u;

    // 0x2d3190: 0x8c820c40  lw          $v0, 0xC40($a0)
    ctx->pc = 0x2d3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2d3194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3198u;
    {
        const bool branch_taken_0x2d3198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3198u;
        // 0x2d319c: 0xac820c40  sw          $v0, 0xC40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3198) {
            ctx->pc = 0x2D31A8u;
            goto label_2d31a8;
        }
    }
    ctx->pc = 0x2D31A0u;
    // 0x2d31a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d31a4: 0xac820c40  sw          $v0, 0xC40($a0)
    ctx->pc = 0x2d31a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3136), GPR_U32(ctx, 2));
label_2d31a8:
    // 0x2d31a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31A8u;
        // 0x2d31ac: 0x8c820c40  lw          $v0, 0xC40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D31B0u;
}
