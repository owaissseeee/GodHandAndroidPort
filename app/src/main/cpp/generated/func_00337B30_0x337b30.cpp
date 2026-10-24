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

// Function: func_00337B30
// Address: 0x337b30 - 0x337b80
void func_00337B30_0x337b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337B30_0x337b30");
#endif

    ctx->pc = 0x337b30u;

    // 0x337b30: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337b34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337b38: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337b3c: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x337B3Cu;
    {
        const bool branch_taken_0x337b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x337b3c) {
            ctx->pc = 0x337B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337B3Cu;
            // 0x337b40: 0x80820054  lb          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B58u;
            goto label_337b58;
        }
    }
    ctx->pc = 0x337B44u;
    // 0x337b44: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337b48: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337b48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337b4c: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x337B4Cu;
    {
        const bool branch_taken_0x337b4c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337b4c) {
            ctx->pc = 0x337B74u;
            goto label_337b74;
        }
    }
    ctx->pc = 0x337B54u;
    // 0x337b54: 0x80820054  lb          $v0, 0x54($a0)
    ctx->pc = 0x337b54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_337b58:
    // 0x337b58: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x337B58u;
    {
        const bool branch_taken_0x337b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x337B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B58u;
        // 0x337b5c: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b58) {
            ctx->pc = 0x337B74u;
            goto label_337b74;
        }
    }
    ctx->pc = 0x337B60u;
    // 0x337b60: 0x8c430738  lw          $v1, 0x738($v0)
    ctx->pc = 0x337b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1848)));
    // 0x337b64: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x337B64u;
    {
        const bool branch_taken_0x337b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337b64) {
            ctx->pc = 0x337B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337B64u;
            // 0x337b68: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B74u;
            goto label_337b74;
        }
    }
    ctx->pc = 0x337B6Cu;
    // 0x337b6c: 0x54a60001  bnel        $a1, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x337B6Cu;
    {
        const bool branch_taken_0x337b6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x337b6c) {
            ctx->pc = 0x337B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337B6Cu;
            // 0x337b70: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B74u;
            goto label_337b74;
        }
    }
    ctx->pc = 0x337B74u;
label_337b74:
    // 0x337b74: 0x3e00008  jr          $ra
    ctx->pc = 0x337B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337B7Cu;
    // 0x337b7c: 0x0  nop
    ctx->pc = 0x337b7cu;
    // NOP
    ctx->pc = 0x337b80u;
}
