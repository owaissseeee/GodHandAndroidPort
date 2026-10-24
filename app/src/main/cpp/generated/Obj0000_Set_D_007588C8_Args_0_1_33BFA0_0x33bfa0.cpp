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

// Function: Obj0000_Set_D_007588C8_Args_0_1_33BFA0
// Address: 0x33bfa0 - 0x33bfb8
void Obj0000_Set_D_007588C8_Args_0_1_33BFA0_0x33bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_007588C8_Args_0_1_33BFA0_0x33bfa0");
#endif

    ctx->pc = 0x33bfa0u;

    // 0x33bfa0: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33bfa4: 0x244288c8  addiu       $v0, $v0, -0x7738
    ctx->pc = 0x33bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936776));
    // 0x33bfa8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33bfa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7588CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7588CCu, _value); } while (0);
    // 0x33bfac: 0x3e00008  jr          $ra
    ctx->pc = 0x33BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFACu;
        // 0x33bfb0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BFB4u;
    // 0x33bfb4: 0x0  nop
    ctx->pc = 0x33bfb4u;
    // NOP
    ctx->pc = 0x33bfb8u;
}
