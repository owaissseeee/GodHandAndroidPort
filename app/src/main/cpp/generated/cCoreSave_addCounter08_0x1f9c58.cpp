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

// Function: cCoreSave_addCounter08
// Address: 0x1f9c58 - 0x1f9c88
void cCoreSave_addCounter08_0x1f9c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addCounter08_0x1f9c58");
#endif

    ctx->pc = 0x1f9c58u;

    // 0x1f9c58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9c5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f9c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9c64: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f9c68: 0x2c4203e8  sltiu       $v0, $v0, 0x3E8
    ctx->pc = 0x1f9c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1f9c6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9C6Cu;
    {
        const bool branch_taken_0x1f9c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C6Cu;
        // 0x1f9c70: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c6c) {
            ctx->pc = 0x1F9C7Cu;
            goto label_1f9c7c;
        }
    }
    ctx->pc = 0x1F9C74u;
    // 0x1f9c74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9c78: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f9c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1f9c7c:
    // 0x1f9c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C84u;
    // 0x1f9c84: 0x0  nop
    ctx->pc = 0x1f9c84u;
    // NOP
    ctx->pc = 0x1f9c88u;
}
