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

// Function: Obj0000_Set_Vtbl_D_0044D388_2D9E18
// Address: 0x2d9e18 - 0x2d9e30
void Obj0000_Set_Vtbl_D_0044D388_2D9E18_0x2d9e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Vtbl_D_0044D388_2D9E18_0x2d9e18");
#endif

    ctx->pc = 0x2d9e18u;

    // 0x2d9e18: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2d9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2d9e1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d9e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e20: 0x2463d388  addiu       $v1, $v1, -0x2C78
    ctx->pc = 0x2d9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955912));
    // 0x2d9e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E24u;
        // 0x2d9e28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9E2Cu;
    // 0x2d9e2c: 0x0  nop
    ctx->pc = 0x2d9e2cu;
    // NOP
    ctx->pc = 0x2d9e30u;
}
