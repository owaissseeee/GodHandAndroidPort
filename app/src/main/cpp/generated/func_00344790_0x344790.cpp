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

// Function: func_00344790
// Address: 0x344790 - 0x3447a8
void func_00344790_0x344790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344790_0x344790");
#endif

    ctx->pc = 0x344790u;

    // 0x344790: 0x3e00008  jr          $ra
    ctx->pc = 0x344790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344790u;
        // 0x344794: 0x8c820200  lw          $v0, 0x200($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344798u;
    // 0x344798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x344798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34479c: 0x0  nop
    ctx->pc = 0x34479cu;
    // NOP
    // 0x3447a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3447a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3447a4: 0x0  nop
    ctx->pc = 0x3447a4u;
    // NOP
    ctx->pc = 0x3447a8u;
}
