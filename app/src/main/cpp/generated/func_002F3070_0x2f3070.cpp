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

// Function: func_002F3070
// Address: 0x2f3070 - 0x2f3090
void func_002F3070_0x2f3070(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F3070_0x2f3070");
#endif

    if (__builtin_expect(ctx->pc != 0x2f3070u, 0)) {
        switch (ctx->pc) {
            case 0x2f3080u: goto label_2f3080;
            default: break;
        }
    }


    // 0x2f3070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f3074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f3078: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F3078u;
    SET_GPR_U32(ctx, 31, 0x2F3080u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FBED0_0x2fbed0, 0x2fbed0u, 0x2f3080u)) {
        return;
    }
label_2f3080:
    // 0x2f3080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3084: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3084u;
        // 0x2f3088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2f308c: 0x0  nop
    // NOP
    ctx->pc = 0x2f3090u;
}