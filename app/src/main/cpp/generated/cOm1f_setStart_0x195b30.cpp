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

// Function: cOm1f_setStart
// Address: 0x195b30 - 0x195b70
void cOm1f_setStart_0x195b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm1f_setStart_0x195b30");
#endif

    ctx->pc = 0x195b30u;

    // 0x195b30: 0x8c830600  lw          $v1, 0x600($a0)
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x195b34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195B34u;
    {
        const bool branch_taken_0x195b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B34u;
        // 0x195b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b34) {
            ctx->pc = 0x195B44u;
            goto label_195b44;
        }
    }
    ctx->pc = 0x195B3Cu;
    // 0x195b3c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195B3Cu;
    {
        const bool branch_taken_0x195b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195b3c) {
            ctx->pc = 0x195B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195B3Cu;
            // 0x195b40: 0xa08302f5  sb          $v1, 0x2F5($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195B5Cu;
            goto label_195b5c;
        }
    }
    ctx->pc = 0x195B44u;
label_195b44:
    // 0x195b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195b48: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x195b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x195b4c: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x195b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x195b50: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x195b50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x195b54: 0x3e00008  jr          $ra
    ctx->pc = 0x195B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B54u;
        // 0x195b58: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195B5Cu;
label_195b5c:
    // 0x195b5c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x195b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x195b60: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x195b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x195b64: 0x3e00008  jr          $ra
    ctx->pc = 0x195B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B64u;
        // 0x195b68: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195B6Cu;
    // 0x195b6c: 0x0  nop
    ctx->pc = 0x195b6cu;
    // NOP
    ctx->pc = 0x195b70u;
}
