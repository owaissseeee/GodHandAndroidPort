#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: R003Move__Fv
// Address: 0x7992a8 - 0x7992c8
void R003Move__Fv_0x7992a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R003Move__Fv_0x7992a8");
#endif

    switch (ctx->pc) {
        case 0x7992b8u: goto label_7992b8;
        default: break;
    }

    ctx->pc = 0x7992a8u;

    // 0x7992a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7992ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992b0: 0xc1e6516  jal         func_799458
    ctx->pc = 0x7992B0u;
    SET_GPR_U32(ctx, 31, 0x7992B8u);
    ctx->pc = 0x799458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799458u, 0x7992B0u, 0x7992B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B8u;
label_7992b8:
    // 0x7992b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7992BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992BCu;
        // 0x7992c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992C4u;
    // 0x7992c4: 0x0  nop
    ctx->pc = 0x7992c4u;
    // NOP
    ctx->pc = 0x7992c8u;
}
} // namespace gh_r003
