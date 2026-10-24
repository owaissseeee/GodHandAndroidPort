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

// Function: Obj0000_Set_D_005FEAC0_2C23E0
// Address: 0x2c23e0 - 0x2c23f0
void Obj0000_Set_D_005FEAC0_2C23E0_0x2c23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_005FEAC0_2C23E0_0x2c23e0");
#endif

    ctx->pc = 0x2c23e0u;

    // 0x2c23e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2c23e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c23e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C23E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23E8u;
        // 0x2c23ec: 0xac64eac0  sw          $a0, -0x1540($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961856), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C23E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C23F0u;
}
