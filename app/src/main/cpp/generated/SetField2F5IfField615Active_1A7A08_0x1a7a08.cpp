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

// Function: SetField2F5IfField615Active_1A7A08
// Address: 0x1a7a08 - 0x1a7a28
void SetField2F5IfField615Active_1A7A08_0x1a7a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField2F5IfField615Active_1A7A08_0x1a7a08");
#endif

    ctx->pc = 0x1a7a08u;

    // 0x1a7a08: 0x90820615  lbu         $v0, 0x615($a0)
    ctx->pc = 0x1a7a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1557)));
    // 0x1a7a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7A0Cu;
    {
        const bool branch_taken_0x1a7a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A0Cu;
        // 0x1a7a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a0c) {
            ctx->pc = 0x1A7A20u;
            goto label_1a7a20;
        }
    }
    ctx->pc = 0x1A7A14u;
    // 0x1a7a14: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a7a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7a18: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1a7a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7a1c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a7a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a7a20:
    // 0x1a7a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7A28u;
}
