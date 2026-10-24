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

// Function: Obj34D8_CopyVec3_From98_To934
// Address: 0x34dac0 - 0x34dae8
void Obj34D8_CopyVec3_From98_To934_0x34dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj34D8_CopyVec3_From98_To934_0x34dac0");
#endif

    ctx->pc = 0x34dac0u;

    // 0x34dac0: 0x24850098  addiu       $a1, $a0, 0x98
    ctx->pc = 0x34dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x34dac4: 0x2484090c  addiu       $a0, $a0, 0x90C
    ctx->pc = 0x34dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x34dac8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x34dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x34dacc: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x34daccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x34dad0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x34dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x34dad4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x34dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x34dad8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x34dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34dadc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DADCu;
        // 0x34dae0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DAE4u;
    // 0x34dae4: 0x0  nop
    ctx->pc = 0x34dae4u;
    // NOP
    ctx->pc = 0x34dae8u;
}
