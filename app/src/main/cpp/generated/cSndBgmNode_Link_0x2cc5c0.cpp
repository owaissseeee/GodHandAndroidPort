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

// Function: cSndBgmNode_Link
// Address: 0x2cc5c0 - 0x2cc5e8
void cSndBgmNode_Link_0x2cc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Link_0x2cc5c0");
#endif

    ctx->pc = 0x2cc5c0u;

    // 0x2cc5c0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2cc5c4: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x2cc5c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2cc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEE18u));
    // 0x2cc5cc: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x2cc5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2cc5d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2cc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEE18u));
    // 0x2cc5d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CC5D4u;
    {
        const bool branch_taken_0x2cc5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5d4) {
            ctx->pc = 0x2CC5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC5D4u;
            // 0x2cc5d8: 0xac440084  sw          $a0, 0x84($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC5DCu;
            goto label_2cc5dc;
        }
    }
    ctx->pc = 0x2CC5DCu;
label_2cc5dc:
    // 0x2cc5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5DCu;
        // 0x2cc5e0: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC5E4u;
    // 0x2cc5e4: 0x0  nop
    ctx->pc = 0x2cc5e4u;
    // NOP
    ctx->pc = 0x2cc5e8u;
}
