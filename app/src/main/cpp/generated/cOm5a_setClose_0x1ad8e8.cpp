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

// Function: cOm5a_setClose
// Address: 0x1ad8e8 - 0x1ad918
void cOm5a_setClose_0x1ad8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5a_setClose_0x1ad8e8");
#endif

    ctx->pc = 0x1ad8e8u;

    // 0x1ad8e8: 0x9083060d  lbu         $v1, 0x60D($a0)
    ctx->pc = 0x1ad8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1549)));
    // 0x1ad8ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad8f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD8F0u;
    {
        const bool branch_taken_0x1ad8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8F0u;
        // 0x1ad8f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8f0) {
            ctx->pc = 0x1AD90Cu;
            goto label_1ad90c;
        }
    }
    ctx->pc = 0x1AD8F8u;
    // 0x1ad8f8: 0xa083060e  sb          $v1, 0x60E($a0)
    ctx->pc = 0x1ad8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1550), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad8fc: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x1ad8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad900: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1ad900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad904: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1ad904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad908: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1ad908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ad90c:
    // 0x1ad90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD914u;
    // 0x1ad914: 0x0  nop
    ctx->pc = 0x1ad914u;
    // NOP
    ctx->pc = 0x1ad918u;
}
