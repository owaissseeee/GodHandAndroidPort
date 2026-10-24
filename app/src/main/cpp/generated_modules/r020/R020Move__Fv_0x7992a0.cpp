#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: R020Move__Fv
// Address: 0x7992a0 - 0x7992c8
void R020Move__Fv_0x7992a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R020Move__Fv_0x7992a0");
#endif

    switch (ctx->pc) {
        case 0x7992b8u: goto label_7992b8;
        default: break;
    }

    ctx->pc = 0x7992a0u;

    // 0x7992a0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7992a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7992a8: 0x8c44ce80  lw          $a0, -0x3180($v0)
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79CE80u));
    // 0x7992ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992b0: 0xc1e65b4  jal         func_7996D0
    ctx->pc = 0x7992B0u;
    SET_GPR_U32(ctx, 31, 0x7992B8u);
    ctx->pc = 0x7996D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996D0u, 0x7992B0u, 0x7992B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
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
} // namespace gh_r020
