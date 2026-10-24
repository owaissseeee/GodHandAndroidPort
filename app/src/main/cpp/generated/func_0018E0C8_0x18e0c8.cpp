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

// Function: func_0018E0C8
// Address: 0x18e0c8 - 0x18e128
void func_0018E0C8_0x18e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018E0C8_0x18e0c8");
#endif

    switch (ctx->pc) {
        case 0x18e0dcu: goto label_18e0dc;
        default: break;
    }

    ctx->pc = 0x18e0c8u;

    // 0x18e0c8: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x18e0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x18e0cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E0CCu;
    {
        const bool branch_taken_0x18e0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0CCu;
        // 0x18e0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0cc) {
            ctx->pc = 0x18E0E4u;
            goto label_18e0e4;
        }
    }
    ctx->pc = 0x18E0D4u;
    // 0x18e0d4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E0D4u;
    {
        const bool branch_taken_0x18e0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e0d4) {
            ctx->pc = 0x18E0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E0D4u;
            // 0x18e0d8: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E100u;
            goto label_18e100;
        }
    }
    ctx->pc = 0x18E0DCu;
label_18e0dc:
    // 0x18e0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x18E0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E0E4u;
label_18e0e4:
    // 0x18e0e4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18e0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e0ec: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x18e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e0f0: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x18e0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e0f4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18e0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e0f8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18e0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e0fc: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x18e0fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_18e100:
    // 0x18e100: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e104: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18e108: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18E108u;
    {
        const bool branch_taken_0x18e108 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E108u;
        // 0x18e10c: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e108) {
            ctx->pc = 0x18E0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e0dc;
        }
    }
    ctx->pc = 0x18E110u;
    // 0x18e110: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18e110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e114: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x18e114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e118: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x18e118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e11c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18e11cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e120: 0x3e00008  jr          $ra
    ctx->pc = 0x18E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E128u;
}
