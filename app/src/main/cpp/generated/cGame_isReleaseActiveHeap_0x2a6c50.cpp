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

// Function: cGame_isReleaseActiveHeap
// Address: 0x2a6c50 - 0x2a6c78
void cGame_isReleaseActiveHeap_0x2a6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGame_isReleaseActiveHeap_0x2a6c50");
#endif

    ctx->pc = 0x2a6c50u;

    // 0x2a6c50: 0x848201b2  lh          $v0, 0x1B2($a0)
    ctx->pc = 0x2a6c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 434)));
    // 0x2a6c54: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6C54u;
    {
        const bool branch_taken_0x2a6c54 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C54u;
        // 0x2a6c58: 0x948301b2  lhu         $v1, 0x1B2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 434)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c54) {
            ctx->pc = 0x2A6C64u;
            goto label_2a6c64;
        }
    }
    ctx->pc = 0x2A6C5Cu;
    // 0x2a6c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C5Cu;
        // 0x2a6c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C64u;
label_2a6c64:
    // 0x2a6c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a6c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C6Cu;
        // 0x2a6c70: 0xa48301b2  sh          $v1, 0x1B2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 434), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C74u;
    // 0x2a6c74: 0x0  nop
    ctx->pc = 0x2a6c74u;
    // NOP
    ctx->pc = 0x2a6c78u;
}
