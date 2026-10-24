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

// Function: Obj33C8_GetShortArrayE2_idx
// Address: 0x33cfa8 - 0x33cfb8
void Obj33C8_GetShortArrayE2_idx_0x33cfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33C8_GetShortArrayE2_idx_0x33cfa8");
#endif

    ctx->pc = 0x33cfa8u;

    // 0x33cfa8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x33cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33cfac: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x33cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33cfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x33CFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFB0u;
        // 0x33cfb4: 0x84a200e2  lh          $v0, 0xE2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 226)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CFB8u;
}
