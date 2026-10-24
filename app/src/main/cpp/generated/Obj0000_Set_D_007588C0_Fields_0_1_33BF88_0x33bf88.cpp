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

// Function: Obj0000_Set_D_007588C0_Fields_0_1_33BF88
// Address: 0x33bf88 - 0x33bfa0
void Obj0000_Set_D_007588C0_Fields_0_1_33BF88_0x33bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_007588C0_Fields_0_1_33BF88_0x33bf88");
#endif

    ctx->pc = 0x33bf88u;

    // 0x33bf88: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33bf8c: 0x244288c0  addiu       $v0, $v0, -0x7740
    ctx->pc = 0x33bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
    // 0x33bf90: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33bf90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7588C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7588C4u, _value); } while (0);
    // 0x33bf94: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF94u;
        // 0x33bf98: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF9Cu;
    // 0x33bf9c: 0x0  nop
    ctx->pc = 0x33bf9cu;
    // NOP
    ctx->pc = 0x33bfa0u;
}
