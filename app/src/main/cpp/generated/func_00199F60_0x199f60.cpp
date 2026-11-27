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

// Function: func_00199F60
// Address: 0x199f60 - 0x199f80
void func_00199F60_0x199f60(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00199F60_0x199f60");
#endif

    if (__builtin_expect(ctx->pc != 0x199f60u, 0)) {
        switch (ctx->pc) {
            case 0x199f70u: goto label_199f70;
            default: break;
        }
    }


    // 0x199f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199f68: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x199F68u;
    SET_GPR_U32(ctx, 31, 0x199F70u);
    if (!runtime->callDirectStatic(rdram, ctx, &StateObj_runHandler_0x1bfb80, 0x1bfb80u, 0x199f70u)) {
        return;
    }
label_199f70:
    // 0x199f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199f74: 0x3e00008  jr          $ra
    ctx->pc = 0x199F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F74u;
        // 0x199f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x199f7c: 0x0  nop
    // NOP
    ctx->pc = 0x199f80u;
}