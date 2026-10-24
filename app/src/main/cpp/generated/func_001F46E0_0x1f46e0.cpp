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

// Function: func_001F46E0
// Address: 0x1f46e0 - 0x1f4700
void func_001F46E0_0x1f46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F46E0_0x1f46e0");
#endif

    switch (ctx->pc) {
        case 0x1f46f0u: goto label_1f46f0;
        default: break;
    }

    ctx->pc = 0x1f46e0u;

    // 0x1f46e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f46e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f46e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f46e8: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1F46E8u;
    SET_GPR_U32(ctx, 31, 0x1F46F0u);
    ctx->pc = 0x1F46ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F46E8u;
    // 0x1f46ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1F46E8u, 0x1F46F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46F0u;
label_1f46f0:
    // 0x1f46f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f46f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f46f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F46F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46F4u;
        // 0x1f46f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F46F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F46FCu;
    // 0x1f46fc: 0x0  nop
    ctx->pc = 0x1f46fcu;
    // NOP
    ctx->pc = 0x1f4700u;
}
