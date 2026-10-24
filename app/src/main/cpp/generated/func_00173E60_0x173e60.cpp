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

// Function: func_00173E60
// Address: 0x173e60 - 0x173ec0
void func_00173E60_0x173e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173E60_0x173e60");
#endif

    switch (ctx->pc) {
        case 0x173e74u: goto label_173e74;
        default: break;
    }

    ctx->pc = 0x173e60u;

    // 0x173e60: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x173e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x173e64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x173E64u;
    {
        const bool branch_taken_0x173e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E64u;
        // 0x173e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e64) {
            ctx->pc = 0x173E7Cu;
            goto label_173e7c;
        }
    }
    ctx->pc = 0x173E6Cu;
    // 0x173e6c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x173E6Cu;
    {
        const bool branch_taken_0x173e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173e6c) {
            ctx->pc = 0x173E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E6Cu;
            // 0x173e70: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E98u;
            goto label_173e98;
        }
    }
    ctx->pc = 0x173E74u;
label_173e74:
    // 0x173e74: 0x3e00008  jr          $ra
    ctx->pc = 0x173E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173E7Cu;
label_173e7c:
    // 0x173e7c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x173e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173e84: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x173e84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x173e88: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x173e88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x173e8c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x173e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e90: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x173e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e94: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x173e94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_173e98:
    // 0x173e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x173e9c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x173e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x173ea0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x173EA0u;
    {
        const bool branch_taken_0x173ea0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x173EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EA0u;
        // 0x173ea4: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ea0) {
            ctx->pc = 0x173E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e74;
        }
    }
    ctx->pc = 0x173EA8u;
    // 0x173ea8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x173ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eac: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x173eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eb0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x173eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eb4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x173eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x173EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173EC0u;
}
