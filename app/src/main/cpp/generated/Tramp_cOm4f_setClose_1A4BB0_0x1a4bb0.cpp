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

// Function: Tramp_cOm4f_setClose_1A4BB0
// Address: 0x1a4bb0 - 0x1a4bd0
void Tramp_cOm4f_setClose_1A4BB0_0x1a4bb0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_cOm4f_setClose_1A4BB0_0x1a4bb0");
#endif

    if (__builtin_expect(ctx->pc != 0x1a4bb0u, 0)) {
        switch (ctx->pc) {
            case 0x1a4bc0u: goto label_1a4bc0;
            default: break;
        }
    }


    // 0x1a4bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4bb8: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x1A4BB8u;
    SET_GPR_U32(ctx, 31, 0x1A4BC0u);
    if (!runtime->callDirectStatic(rdram, ctx, &cOm4f_setClose_0x1a4da8, 0x1a4da8u, 0x1a4bc0u)) {
        return;
    }
label_1a4bc0:
    // 0x1a4bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC4u;
        // 0x1a4bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1a4bcc: 0x0  nop
    // NOP
    ctx->pc = 0x1a4bd0u;
}