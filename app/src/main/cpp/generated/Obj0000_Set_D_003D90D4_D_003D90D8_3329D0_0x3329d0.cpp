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

// Function: Obj0000_Set_D_003D90D4_D_003D90D8_3329D0
// Address: 0x3329d0 - 0x3329e8
void Obj0000_Set_D_003D90D4_D_003D90D8_3329D0_0x3329d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003D90D4_D_003D90D8_3329D0_0x3329d0");
#endif

    ctx->pc = 0x3329d0u;

    // 0x3329d0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3329d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3329d4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3329d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3329d8: 0xac4490d4  sw          $a0, -0x6F2C($v0)
    ctx->pc = 0x3329d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3D90D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D90D4u, _value); } while (0);
    // 0x3329dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3329DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3329E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329DCu;
        // 0x3329e0: 0xac6590d8  sw          $a1, -0x6F28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938840), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3329DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3329E4u;
    // 0x3329e4: 0x0  nop
    ctx->pc = 0x3329e4u;
    // NOP
    ctx->pc = 0x3329e8u;
}
