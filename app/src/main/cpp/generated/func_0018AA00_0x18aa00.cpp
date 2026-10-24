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

// Function: func_0018AA00
// Address: 0x18aa00 - 0x18aa60
void func_0018AA00_0x18aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018AA00_0x18aa00");
#endif

    switch (ctx->pc) {
        case 0x18aa14u: goto label_18aa14;
        default: break;
    }

    ctx->pc = 0x18aa00u;

    // 0x18aa00: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x18aa00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x18aa04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AA04u;
    {
        const bool branch_taken_0x18aa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA04u;
        // 0x18aa08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa04) {
            ctx->pc = 0x18AA1Cu;
            goto label_18aa1c;
        }
    }
    ctx->pc = 0x18AA0Cu;
    // 0x18aa0c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18AA0Cu;
    {
        const bool branch_taken_0x18aa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18aa0c) {
            ctx->pc = 0x18AA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AA0Cu;
            // 0x18aa10: 0x94820604  lhu         $v0, 0x604($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AA38u;
            goto label_18aa38;
        }
    }
    ctx->pc = 0x18AA14u;
label_18aa14:
    // 0x18aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AA1Cu;
label_18aa1c:
    // 0x18aa1c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18aa20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aa24: 0xa4820604  sh          $v0, 0x604($a0)
    ctx->pc = 0x18aa24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1540), (uint16_t)GPR_U32(ctx, 2));
    // 0x18aa28: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x18aa28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x18aa2c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18aa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aa30: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18aa30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aa34: 0x94820604  lhu         $v0, 0x604($a0)
    ctx->pc = 0x18aa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1540)));
label_18aa38:
    // 0x18aa38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18aa3c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18aa40: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18AA40u;
    {
        const bool branch_taken_0x18aa40 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA40u;
        // 0x18aa44: 0xa4820604  sh          $v0, 0x604($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1540), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa40) {
            ctx->pc = 0x18AA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aa14;
        }
    }
    ctx->pc = 0x18AA48u;
    // 0x18aa48: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18aa48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aa4c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x18aa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aa50: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x18aa50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aa54: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aa58: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AA60u;
}
