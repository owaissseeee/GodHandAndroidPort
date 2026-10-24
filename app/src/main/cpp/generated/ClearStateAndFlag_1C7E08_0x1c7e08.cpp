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

// Function: ClearStateAndFlag_1C7E08
// Address: 0x1c7e08 - 0x1c7e30
void ClearStateAndFlag_1C7E08_0x1c7e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearStateAndFlag_1C7E08_0x1c7e08");
#endif

    ctx->pc = 0x1c7e08u;

    // 0x1c7e08: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x1c7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x1c7e0c: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1c7e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7e14: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1c7e14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7e18: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c7e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c7e1c: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1c7e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7e20: 0xac8305b8  sw          $v1, 0x5B8($a0)
    ctx->pc = 0x1c7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 3));
    // 0x1c7e24: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1c7e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E28u;
        // 0x1c7e2c: 0xa08002f7  sb          $zero, 0x2F7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7E30u;
}
