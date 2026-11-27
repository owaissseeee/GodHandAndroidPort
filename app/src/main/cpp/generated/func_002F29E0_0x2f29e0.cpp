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

// Function: func_002F29E0
// Address: 0x2f29e0 - 0x2f2a00
void func_002F29E0_0x2f29e0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F29E0_0x2f29e0");
#endif

    if (__builtin_expect(ctx->pc != 0x2f29e0u, 0)) {
        switch (ctx->pc) {
            case 0x2f29f0u: goto label_2f29f0;
            default: break;
        }
    }


    // 0x2f29e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f29e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f29e8: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F29E8u;
    SET_GPR_U32(ctx, 31, 0x2F29F0u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FBED0_0x2fbed0, 0x2fbed0u, 0x2f29f0u)) {
        return;
    }
label_2f29f0:
    // 0x2f29f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f29f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f29f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F29F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29F4u;
        // 0x2f29f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F29F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2f29fc: 0x0  nop
    // NOP
    ctx->pc = 0x2f2a00u;
}