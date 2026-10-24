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

// Function: InitVtablePtrAndClearFlags_1F7C60
// Address: 0x1f7c60 - 0x1f7c88
void InitVtablePtrAndClearFlags_1F7C60_0x1f7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtablePtrAndClearFlags_1F7C60_0x1f7c60");
#endif

    ctx->pc = 0x1f7c60u;

    // 0x1f7c60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7c64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7c68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f7c6c: 0x3463f9fc  ori         $v1, $v1, 0xF9FC
    ctx->pc = 0x1f7c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63996);
    // 0x1f7c70: 0x2442c320  addiu       $v0, $v0, -0x3CE0
    ctx->pc = 0x1f7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x1f7c74: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1f7c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f7c78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f7c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1f7c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C7Cu;
        // 0x1f7c80: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7C84u;
    // 0x1f7c84: 0x0  nop
    ctx->pc = 0x1f7c84u;
    // NOP
    ctx->pc = 0x1f7c88u;
}
