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

// Function: func_001ECBD0
// Address: 0x1ecbd0 - 0x1ecbf0
void func_001ECBD0_0x1ecbd0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ECBD0_0x1ecbd0");
#endif

    if (__builtin_expect(ctx->pc != 0x1ecbd0u, 0)) {
        switch (ctx->pc) {
            case 0x1ecbe0u: goto label_1ecbe0;
            default: break;
        }
    }


    // 0x1ecbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ecbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecbd8: 0xc0aa81e  jal         func_2AA078
    SET_GPR_U32(ctx, 31, 0x1ECBE0u);
    ctx->pc = 0x1ECBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECBD8u;
    // 0x1ecbdc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_release_0x2aa078, 0x2aa078u, 0x1ecbe0u)) {
        return;
    }
label_1ecbe0:
    // 0x1ecbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBE4u;
        // 0x1ecbe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1ecbec: 0x0  nop
    // NOP
    ctx->pc = 0x1ecbf0u;
}