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

// Function: Obj0000_Set_D_003FC7AC_D_003FC7B0_3B9D98
// Address: 0x3b9d98 - 0x3b9db0
void Obj0000_Set_D_003FC7AC_D_003FC7B0_3B9D98_0x3b9d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003FC7AC_D_003FC7B0_3B9D98_0x3b9d98");
#endif

    ctx->pc = 0x3b9d98u;

    // 0x3b9d98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b9d9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b9da0: 0xac44c7ac  sw          $a0, -0x3854($v0)
    ctx->pc = 0x3b9da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FC7ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC7ACu, _value); } while (0);
    // 0x3b9da4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DA4u;
        // 0x3b9da8: 0xac65c7b0  sw          $a1, -0x3850($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952880), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9DACu;
    // 0x3b9dac: 0x0  nop
    ctx->pc = 0x3b9dacu;
    // NOP
    ctx->pc = 0x3b9db0u;
}
