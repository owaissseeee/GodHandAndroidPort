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

// Function: Obj38B8_MaskedSetField0
// Address: 0x38bd90 - 0x38bdb0
void Obj38B8_MaskedSetField0_0x38bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_MaskedSetField0_0x38bd90");
#endif

    ctx->pc = 0x38bd90u;

    // 0x38bd90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bd94: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x38bd94u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x38bd98: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x38bd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x38bd9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38bda0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x38bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x38bda4: 0x3e00008  jr          $ra
    ctx->pc = 0x38BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDA4u;
        // 0x38bda8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BDACu;
    // 0x38bdac: 0x0  nop
    ctx->pc = 0x38bdacu;
    // NOP
    ctx->pc = 0x38bdb0u;
}
