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

// Function: func_001897B8
// Address: 0x1897b8 - 0x189818
void func_001897B8_0x1897b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001897B8_0x1897b8");
#endif

    switch (ctx->pc) {
        case 0x1897ccu: goto label_1897cc;
        default: break;
    }

    ctx->pc = 0x1897b8u;

    // 0x1897b8: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x1897b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1897bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1897BCu;
    {
        const bool branch_taken_0x1897bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897BCu;
        // 0x1897c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897bc) {
            ctx->pc = 0x1897D4u;
            goto label_1897d4;
        }
    }
    ctx->pc = 0x1897C4u;
    // 0x1897c4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1897C4u;
    {
        const bool branch_taken_0x1897c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1897c4) {
            ctx->pc = 0x1897C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1897C4u;
            // 0x1897c8: 0x94820cd0  lhu         $v0, 0xCD0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1897F0u;
            goto label_1897f0;
        }
    }
    ctx->pc = 0x1897CCu;
label_1897cc:
    // 0x1897cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1897CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1897CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1897D4u;
label_1897d4:
    // 0x1897d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1897d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1897d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1897d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1897dc: 0xa4820cd0  sh          $v0, 0xCD0($a0)
    ctx->pc = 0x1897dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3280), (uint16_t)GPR_U32(ctx, 2));
    // 0x1897e0: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1897e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1897e4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1897e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1897e8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1897e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1897ec: 0x94820cd0  lhu         $v0, 0xCD0($a0)
    ctx->pc = 0x1897ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3280)));
label_1897f0:
    // 0x1897f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1897f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1897f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1897f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1897f8: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1897F8u;
    {
        const bool branch_taken_0x1897f8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1897FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897F8u;
        // 0x1897fc: 0xa4820cd0  sh          $v0, 0xCD0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3280), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897f8) {
            ctx->pc = 0x1897CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1897cc;
        }
    }
    ctx->pc = 0x189800u;
    // 0x189800: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x189800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x189804: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x189804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x189808: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x189808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18980c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18980cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x189810: 0x3e00008  jr          $ra
    ctx->pc = 0x189810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189818u;
}
