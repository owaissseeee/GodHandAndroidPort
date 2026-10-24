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

// Function: func_00181C98
// Address: 0x181c98 - 0x181cf8
void func_00181C98_0x181c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181C98_0x181c98");
#endif

    switch (ctx->pc) {
        case 0x181cacu: goto label_181cac;
        default: break;
    }

    ctx->pc = 0x181c98u;

    // 0x181c98: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x181c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x181c9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x181C9Cu;
    {
        const bool branch_taken_0x181c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C9Cu;
        // 0x181ca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c9c) {
            ctx->pc = 0x181CB4u;
            goto label_181cb4;
        }
    }
    ctx->pc = 0x181CA4u;
    // 0x181ca4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x181CA4u;
    {
        const bool branch_taken_0x181ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181ca4) {
            ctx->pc = 0x181CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CA4u;
            // 0x181ca8: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CD0u;
            goto label_181cd0;
        }
    }
    ctx->pc = 0x181CACu;
label_181cac:
    // 0x181cac: 0x3e00008  jr          $ra
    ctx->pc = 0x181CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181CB4u;
label_181cb4:
    // 0x181cb4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x181cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x181cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181cbc: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x181cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x181cc0: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x181cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x181cc4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x181cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x181cc8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x181cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ccc: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x181cccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_181cd0:
    // 0x181cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x181cd4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x181cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x181cd8: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x181CD8u;
    {
        const bool branch_taken_0x181cd8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x181CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CD8u;
        // 0x181cdc: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cd8) {
            ctx->pc = 0x181CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181cac;
        }
    }
    ctx->pc = 0x181CE0u;
    // 0x181ce0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x181ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ce4: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x181ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ce8: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x181ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x181cec: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x181cecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x181cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x181CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181CF8u;
}
