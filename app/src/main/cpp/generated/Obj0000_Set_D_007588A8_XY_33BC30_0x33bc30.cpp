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

// Function: Obj0000_Set_D_007588A8_XY_33BC30
// Address: 0x33bc30 - 0x33bc48
void Obj0000_Set_D_007588A8_XY_33BC30_0x33bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_007588A8_XY_33BC30_0x33bc30");
#endif

    ctx->pc = 0x33bc30u;

    // 0x33bc30: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33bc34: 0x244288a8  addiu       $v0, $v0, -0x7758
    ctx->pc = 0x33bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936744));
    // 0x33bc38: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33bc38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7588ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7588ACu, _value); } while (0);
    // 0x33bc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x33BC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC3Cu;
        // 0x33bc40: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BC44u;
    // 0x33bc44: 0x0  nop
    ctx->pc = 0x33bc44u;
    // NOP
    ctx->pc = 0x33bc48u;
}
