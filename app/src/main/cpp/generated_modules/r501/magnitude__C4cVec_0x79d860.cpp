#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: magnitude__C4cVec
// Address: 0x79d860 - 0x79d880
void magnitude__C4cVec_0x79d860(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("magnitude__C4cVec_0x79d860");
#endif

    if (__builtin_expect(ctx->pc != 0x79d860u, 0)) {
        switch (ctx->pc) {
            case 0x79d870u: goto label_79d870;
            default: break;
        }
    }



    // 0x79d860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79d864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d868: 0xc07df7e  jal         func_1F7DF8
    SET_GPR_U32(ctx, 31, 0x79D870u);
    ctx->pc = 0x1F7DF8u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Length_0x1f7df8, 0x1F7DF8u, 0x79D870u)) {
        return;
    }
label_79d870:
    // 0x79d870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d874: 0x3e00008  jr          $ra
    ctx->pc = 0x79D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D874u;
        // 0x79d878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79d87c: 0x0  nop
    // NOP
    ctx->pc = 0x79d880u;
}
} // namespace gh_r501
