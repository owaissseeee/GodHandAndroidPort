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

// Function: func_00175ED8
// Address: 0x175ed8 - 0x175f38
void func_00175ED8_0x175ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175ED8_0x175ed8");
#endif

    switch (ctx->pc) {
        case 0x175eecu: goto label_175eec;
        default: break;
    }

    ctx->pc = 0x175ed8u;

    // 0x175ed8: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x175ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x175edc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175EDCu;
    {
        const bool branch_taken_0x175edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EDCu;
        // 0x175ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175edc) {
            ctx->pc = 0x175EF4u;
            goto label_175ef4;
        }
    }
    ctx->pc = 0x175EE4u;
    // 0x175ee4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x175EE4u;
    {
        const bool branch_taken_0x175ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x175ee4) {
            ctx->pc = 0x175EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175EE4u;
            // 0x175ee8: 0x94820d34  lhu         $v0, 0xD34($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175F10u;
            goto label_175f10;
        }
    }
    ctx->pc = 0x175EECu;
label_175eec:
    // 0x175eec: 0x3e00008  jr          $ra
    ctx->pc = 0x175EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175EF4u;
label_175ef4:
    // 0x175ef4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x175ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x175ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175efc: 0xa4820d34  sh          $v0, 0xD34($a0)
    ctx->pc = 0x175efcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x175f00: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x175f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x175f04: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x175f04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x175f08: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x175f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x175f0c: 0x94820d34  lhu         $v0, 0xD34($a0)
    ctx->pc = 0x175f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3380)));
label_175f10:
    // 0x175f10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175f14: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x175f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x175f18: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x175F18u;
    {
        const bool branch_taken_0x175f18 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x175F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F18u;
        // 0x175f1c: 0xa4820d34  sh          $v0, 0xD34($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f18) {
            ctx->pc = 0x175EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175eec;
        }
    }
    ctx->pc = 0x175F20u;
    // 0x175f20: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x175f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x175f24: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x175f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x175f28: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x175f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x175f2c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x175f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x175f30: 0x3e00008  jr          $ra
    ctx->pc = 0x175F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175F38u;
}
