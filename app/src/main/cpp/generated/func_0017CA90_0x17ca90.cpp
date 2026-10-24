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

// Function: func_0017CA90
// Address: 0x17ca90 - 0x17caf0
void func_0017CA90_0x17ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017CA90_0x17ca90");
#endif

    switch (ctx->pc) {
        case 0x17caa4u: goto label_17caa4;
        default: break;
    }

    ctx->pc = 0x17ca90u;

    // 0x17ca90: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x17ca90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x17ca94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CA94u;
    {
        const bool branch_taken_0x17ca94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA94u;
        // 0x17ca98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca94) {
            ctx->pc = 0x17CAACu;
            goto label_17caac;
        }
    }
    ctx->pc = 0x17CA9Cu;
    // 0x17ca9c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17CA9Cu;
    {
        const bool branch_taken_0x17ca9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ca9c) {
            ctx->pc = 0x17CAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CA9Cu;
            // 0x17caa0: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CAC8u;
            goto label_17cac8;
        }
    }
    ctx->pc = 0x17CAA4u;
label_17caa4:
    // 0x17caa4: 0x3e00008  jr          $ra
    ctx->pc = 0x17CAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CAACu;
label_17caac:
    // 0x17caac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17cab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cab4: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x17cab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x17cab8: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x17cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17cabc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17cabcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cac0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17cac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cac4: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x17cac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_17cac8:
    // 0x17cac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17cacc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17caccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17cad0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17CAD0u;
    {
        const bool branch_taken_0x17cad0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAD0u;
        // 0x17cad4: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cad0) {
            ctx->pc = 0x17CAA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17caa4;
        }
    }
    ctx->pc = 0x17CAD8u;
    // 0x17cad8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17cad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cadc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x17cadcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cae0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cae4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17cae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cae8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CAF0u;
}
