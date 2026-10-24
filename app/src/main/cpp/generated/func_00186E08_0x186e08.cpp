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

// Function: func_00186E08
// Address: 0x186e08 - 0x186e68
void func_00186E08_0x186e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186E08_0x186e08");
#endif

    switch (ctx->pc) {
        case 0x186e1cu: goto label_186e1c;
        default: break;
    }

    ctx->pc = 0x186e08u;

    // 0x186e08: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x186e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x186e0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x186E0Cu;
    {
        const bool branch_taken_0x186e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E0Cu;
        // 0x186e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e0c) {
            ctx->pc = 0x186E24u;
            goto label_186e24;
        }
    }
    ctx->pc = 0x186E14u;
    // 0x186e14: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x186E14u;
    {
        const bool branch_taken_0x186e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186e14) {
            ctx->pc = 0x186E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E14u;
            // 0x186e18: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E40u;
            goto label_186e40;
        }
    }
    ctx->pc = 0x186E1Cu;
label_186e1c:
    // 0x186e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x186E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E24u;
label_186e24:
    // 0x186e24: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x186e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x186e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186e2c: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x186e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x186e30: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x186e30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x186e34: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x186e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x186e38: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x186e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x186e3c: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x186e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_186e40:
    // 0x186e40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186e44: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x186e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x186e48: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x186E48u;
    {
        const bool branch_taken_0x186e48 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x186E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E48u;
        // 0x186e4c: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e48) {
            ctx->pc = 0x186E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186e1c;
        }
    }
    ctx->pc = 0x186E50u;
    // 0x186e50: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x186e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x186e54: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x186e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x186e58: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x186e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x186e5c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x186e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x186e60: 0x3e00008  jr          $ra
    ctx->pc = 0x186E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E68u;
}
