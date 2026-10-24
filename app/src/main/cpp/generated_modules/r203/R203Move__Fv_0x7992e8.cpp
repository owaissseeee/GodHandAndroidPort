#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: R203Move__Fv
// Address: 0x7992e8 - 0x799308
void R203Move__Fv_0x7992e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203Move__Fv_0x7992e8");
#endif

    switch (ctx->pc) {
        case 0x7992f8u: goto label_7992f8;
        default: break;
    }

    ctx->pc = 0x7992e8u;

    // 0x7992e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7992ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992f0: 0xc1e65a8  jal         func_7996A0
    ctx->pc = 0x7992F0u;
    SET_GPR_U32(ctx, 31, 0x7992F8u);
    ctx->pc = 0x7996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996A0u, 0x7992F0u, 0x7992F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7992FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992FCu;
        // 0x799300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799304u;
    // 0x799304: 0x0  nop
    ctx->pc = 0x799304u;
    // NOP
    ctx->pc = 0x799308u;
}
} // namespace gh_r203
