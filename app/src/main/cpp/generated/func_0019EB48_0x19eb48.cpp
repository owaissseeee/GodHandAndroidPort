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

// Function: func_0019EB48
// Address: 0x19eb48 - 0x19eb68
void func_0019EB48_0x19eb48(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019EB48_0x19eb48");
#endif

    if (__builtin_expect(ctx->pc != 0x19eb48u, 0)) {
        switch (ctx->pc) {
            case 0x19eb58u: goto label_19eb58;
            default: break;
        }
    }


    // 0x19eb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19eb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eb50: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x19EB50u;
    SET_GPR_U32(ctx, 31, 0x19EB58u);
    if (!runtime->callDirectStatic(rdram, ctx, &cOmBase_tickModeTableSkip381_0x1c29d0, 0x1c29d0u, 0x19eb58u)) {
        return;
    }
label_19eb58:
    // 0x19eb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB5Cu;
        // 0x19eb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x19eb64: 0x0  nop
    // NOP
    ctx->pc = 0x19eb68u;
}