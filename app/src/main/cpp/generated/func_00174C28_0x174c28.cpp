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

// Function: func_00174C28
// Address: 0x174c28 - 0x174c88
void func_00174C28_0x174c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174C28_0x174c28");
#endif

    switch (ctx->pc) {
        case 0x174c3cu: goto label_174c3c;
        default: break;
    }

    ctx->pc = 0x174c28u;

    // 0x174c28: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x174c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x174c2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x174C2Cu;
    {
        const bool branch_taken_0x174c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C2Cu;
        // 0x174c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c2c) {
            ctx->pc = 0x174C44u;
            goto label_174c44;
        }
    }
    ctx->pc = 0x174C34u;
    // 0x174c34: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x174C34u;
    {
        const bool branch_taken_0x174c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174c34) {
            ctx->pc = 0x174C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174C34u;
            // 0x174c38: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174C60u;
            goto label_174c60;
        }
    }
    ctx->pc = 0x174C3Cu;
label_174c3c:
    // 0x174c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x174C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x174c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x174c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174c4c: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x174c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x174c50: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x174c50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x174c54: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x174c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c58: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x174c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c5c: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x174c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_174c60:
    // 0x174c60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174c64: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x174c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x174c68: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x174C68u;
    {
        const bool branch_taken_0x174c68 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x174C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C68u;
        // 0x174c6c: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c68) {
            ctx->pc = 0x174C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174c3c;
        }
    }
    ctx->pc = 0x174C70u;
    // 0x174c70: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x174c70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c74: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x174c74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c78: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x174c78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c7c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x174c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c80: 0x3e00008  jr          $ra
    ctx->pc = 0x174C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C88u;
}
