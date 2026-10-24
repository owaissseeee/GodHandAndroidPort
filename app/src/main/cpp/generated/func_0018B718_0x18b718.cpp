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

// Function: func_0018B718
// Address: 0x18b718 - 0x18b778
void func_0018B718_0x18b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018B718_0x18b718");
#endif

    switch (ctx->pc) {
        case 0x18b72cu: goto label_18b72c;
        default: break;
    }

    ctx->pc = 0x18b718u;

    // 0x18b718: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x18b718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x18b71c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B71Cu;
    {
        const bool branch_taken_0x18b71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B71Cu;
        // 0x18b720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b71c) {
            ctx->pc = 0x18B734u;
            goto label_18b734;
        }
    }
    ctx->pc = 0x18B724u;
    // 0x18b724: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18B724u;
    {
        const bool branch_taken_0x18b724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b724) {
            ctx->pc = 0x18B728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B724u;
            // 0x18b728: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B750u;
            goto label_18b750;
        }
    }
    ctx->pc = 0x18B72Cu;
label_18b72c:
    // 0x18b72c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B734u;
label_18b734:
    // 0x18b734: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b73c: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x18b73cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b740: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x18b740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b744: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18b744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b748: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18b748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b74c: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x18b74cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_18b750:
    // 0x18b750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b754: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18b754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18b758: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18B758u;
    {
        const bool branch_taken_0x18b758 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B758u;
        // 0x18b75c: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b758) {
            ctx->pc = 0x18B72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b72c;
        }
    }
    ctx->pc = 0x18B760u;
    // 0x18b760: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18b760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b764: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x18b764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b768: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x18b768u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b76c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18b76cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b770: 0x3e00008  jr          $ra
    ctx->pc = 0x18B770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B778u;
}
