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

// Function: cOmDoor2_setClose
// Address: 0x1bdc20 - 0x1bdc48
void cOmDoor2_setClose_0x1bdc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor2_setClose_0x1bdc20");
#endif

    ctx->pc = 0x1bdc20u;

    // 0x1bdc20: 0x90820774  lbu         $v0, 0x774($a0)
    ctx->pc = 0x1bdc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1908)));
    // 0x1bdc24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdc28: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDC28u;
    {
        const bool branch_taken_0x1bdc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC28u;
        // 0x1bdc2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc28) {
            ctx->pc = 0x1BDC40u;
            goto label_1bdc40;
        }
    }
    ctx->pc = 0x1BDC30u;
    // 0x1bdc30: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1bdc30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bdc34: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x1bdc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdc38: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1bdc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bdc3c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1bdc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bdc40:
    // 0x1bdc40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC48u;
}
