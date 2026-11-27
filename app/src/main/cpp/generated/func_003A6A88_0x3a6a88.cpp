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

// Function: func_003A6A88
// Address: 0x3a6a88 - 0x3a6aa8
void func_003A6A88_0x3a6a88(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6A88_0x3a6a88");
#endif

    if (__builtin_expect(ctx->pc != 0x3a6a88u, 0)) {
        switch (ctx->pc) {
            case 0x3a6a98u: goto label_3a6a98;
            default: break;
        }
    }


    // 0x3a6a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6a90: 0xc0e9808  jal         func_3A6020
    ctx->pc = 0x3A6A90u;
    SET_GPR_U32(ctx, 31, 0x3A6A98u);
    if (!runtime->callDirectStatic(rdram, ctx, &fflush_0x3a6020, 0x3a6020u, 0x3a6a98u)) {
        return;
    }
label_3a6a98:
    // 0x3a6a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A9Cu;
        // 0x3a6aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3a6aa4: 0x0  nop
    // NOP
    ctx->pc = 0x3a6aa8u;
}