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

// Function: ClearObjRef_1EE9A0
// Address: 0x1ee9a0 - 0x1ee9c8
void ClearObjRef_1EE9A0_0x1ee9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearObjRef_1EE9A0_0x1ee9a0");
#endif

    ctx->pc = 0x1ee9a0u;

    // 0x1ee9a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee9a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE9A4u;
    {
        const bool branch_taken_0x1ee9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9A4u;
        // 0x1ee9a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9a4) {
            ctx->pc = 0x1EE9B4u;
            goto label_1ee9b4;
        }
    }
    ctx->pc = 0x1EE9ACu;
    // 0x1ee9ac: 0xa06202f4  sb          $v0, 0x2F4($v1)
    ctx->pc = 0x1ee9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ee9b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ee9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1ee9b4:
    // 0x1ee9b4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1ee9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1ee9b8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x1ee9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9BCu;
        // 0x1ee9c0: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE9C4u;
    // 0x1ee9c4: 0x0  nop
    ctx->pc = 0x1ee9c4u;
    // NOP
    ctx->pc = 0x1ee9c8u;
}
