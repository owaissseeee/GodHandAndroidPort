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

// Function: func_00196978
// Address: 0x196978 - 0x1969d8
void func_00196978_0x196978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00196978_0x196978");
#endif

    switch (ctx->pc) {
        case 0x19698cu: goto label_19698c;
        default: break;
    }

    ctx->pc = 0x196978u;

    // 0x196978: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x196978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x19697c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19697Cu;
    {
        const bool branch_taken_0x19697c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19697Cu;
        // 0x196980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19697c) {
            ctx->pc = 0x196994u;
            goto label_196994;
        }
    }
    ctx->pc = 0x196984u;
    // 0x196984: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x196984u;
    {
        const bool branch_taken_0x196984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x196984) {
            ctx->pc = 0x196988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196984u;
            // 0x196988: 0x948209d4  lhu         $v0, 0x9D4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1969B0u;
            goto label_1969b0;
        }
    }
    ctx->pc = 0x19698Cu;
label_19698c:
    // 0x19698c: 0x3e00008  jr          $ra
    ctx->pc = 0x19698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196994u;
label_196994:
    // 0x196994: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19699c: 0xa48209d4  sh          $v0, 0x9D4($a0)
    ctx->pc = 0x19699cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x1969a0: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1969a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1969a4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1969a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1969a8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1969a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1969ac: 0x948209d4  lhu         $v0, 0x9D4($a0)
    ctx->pc = 0x1969acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2516)));
label_1969b0:
    // 0x1969b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1969b4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1969b8: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1969B8u;
    {
        const bool branch_taken_0x1969b8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1969BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B8u;
        // 0x1969bc: 0xa48209d4  sh          $v0, 0x9D4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969b8) {
            ctx->pc = 0x19698Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19698c;
        }
    }
    ctx->pc = 0x1969C0u;
    // 0x1969c0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1969c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1969c4: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1969c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1969c8: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1969c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1969cc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1969ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1969d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1969D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1969D8u;
}
