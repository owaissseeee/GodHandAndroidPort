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

// Function: InitVtableAndClearFlags_1F7B60
// Address: 0x1f7b60 - 0x1f7b88
void InitVtableAndClearFlags_1F7B60_0x1f7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtableAndClearFlags_1F7B60_0x1f7b60");
#endif

    ctx->pc = 0x1f7b60u;

    // 0x1f7b60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f7b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7b64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7b68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f7b6c: 0x3463f9fc  ori         $v1, $v1, 0xF9FC
    ctx->pc = 0x1f7b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63996);
    // 0x1f7b70: 0x2442c320  addiu       $v0, $v0, -0x3CE0
    ctx->pc = 0x1f7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x1f7b74: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1f7b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f7b78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1f7b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B7Cu;
        // 0x1f7b80: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B84u;
    // 0x1f7b84: 0x0  nop
    ctx->pc = 0x1f7b84u;
    // NOP
    ctx->pc = 0x1f7b88u;
}
