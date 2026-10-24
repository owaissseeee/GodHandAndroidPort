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

// Function: func_0019C9F8
// Address: 0x19c9f8 - 0x19ca58
void func_0019C9F8_0x19c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C9F8_0x19c9f8");
#endif

    switch (ctx->pc) {
        case 0x19ca0cu: goto label_19ca0c;
        default: break;
    }

    ctx->pc = 0x19c9f8u;

    // 0x19c9f8: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x19c9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x19c9fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C9FCu;
    {
        const bool branch_taken_0x19c9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9FCu;
        // 0x19ca00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9fc) {
            ctx->pc = 0x19CA14u;
            goto label_19ca14;
        }
    }
    ctx->pc = 0x19CA04u;
    // 0x19ca04: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19CA04u;
    {
        const bool branch_taken_0x19ca04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ca04) {
            ctx->pc = 0x19CA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CA04u;
            // 0x19ca08: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CA30u;
            goto label_19ca30;
        }
    }
    ctx->pc = 0x19CA0Cu;
label_19ca0c:
    // 0x19ca0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CA14u;
label_19ca14:
    // 0x19ca14: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19ca18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ca1c: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x19ca1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ca20: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x19ca20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ca24: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x19ca24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca28: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x19ca28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca2c: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x19ca2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_19ca30:
    // 0x19ca30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ca34: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19ca38: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x19CA38u;
    {
        const bool branch_taken_0x19ca38 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA38u;
        // 0x19ca3c: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca38) {
            ctx->pc = 0x19CA0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ca0c;
        }
    }
    ctx->pc = 0x19CA40u;
    // 0x19ca40: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x19ca40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca44: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x19ca44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca48: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x19ca48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca4c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x19ca4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca50: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CA58u;
}
