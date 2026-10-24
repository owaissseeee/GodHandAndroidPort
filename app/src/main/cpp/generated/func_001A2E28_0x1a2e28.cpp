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

// Function: func_001A2E28
// Address: 0x1a2e28 - 0x1a2e88
void func_001A2E28_0x1a2e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A2E28_0x1a2e28");
#endif

    switch (ctx->pc) {
        case 0x1a2e3cu: goto label_1a2e3c;
        default: break;
    }

    ctx->pc = 0x1a2e28u;

    // 0x1a2e28: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x1a2e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1a2e2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2E2Cu;
    {
        const bool branch_taken_0x1a2e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E2Cu;
        // 0x1a2e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e2c) {
            ctx->pc = 0x1A2E44u;
            goto label_1a2e44;
        }
    }
    ctx->pc = 0x1A2E34u;
    // 0x1a2e34: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2E34u;
    {
        const bool branch_taken_0x1a2e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2e34) {
            ctx->pc = 0x1A2E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2E34u;
            // 0x1a2e38: 0x94820d98  lhu         $v0, 0xD98($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2E60u;
            goto label_1a2e60;
        }
    }
    ctx->pc = 0x1A2E3Cu;
label_1a2e3c:
    // 0x1a2e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E44u;
label_1a2e44:
    // 0x1a2e44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a2e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e4c: 0xa4820d98  sh          $v0, 0xD98($a0)
    ctx->pc = 0x1a2e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3480), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2e50: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1a2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2e54: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a2e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e58: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a2e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e5c: 0x94820d98  lhu         $v0, 0xD98($a0)
    ctx->pc = 0x1a2e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3480)));
label_1a2e60:
    // 0x1a2e60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a2e64: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a2e68: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A2E68u;
    {
        const bool branch_taken_0x1a2e68 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E68u;
        // 0x1a2e6c: 0xa4820d98  sh          $v0, 0xD98($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3480), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e68) {
            ctx->pc = 0x1A2E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e3c;
        }
    }
    ctx->pc = 0x1A2E70u;
    // 0x1a2e70: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a2e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e74: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1a2e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e78: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1a2e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e7c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a2e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E88u;
}
