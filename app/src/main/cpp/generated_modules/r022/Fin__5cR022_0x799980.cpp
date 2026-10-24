#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: Fin__5cR022
// Address: 0x799980 - 0x7999b0
void Fin__5cR022_0x799980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fin__5cR022_0x799980");
#endif

    switch (ctx->pc) {
        case 0x799990u: goto label_799990;
        default: break;
    }

    ctx->pc = 0x799980u;

    // 0x799980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799988: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x799988u;
    SET_GPR_U32(ctx, 31, 0x799990u);
    ctx->pc = 0x79998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799988u;
    // 0x79998c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x799988u, 0x799990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799990u;
label_799990:
    // 0x799990: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799998: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x79999c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7999a0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x7999a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x7999a4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x7999a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x7999a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7999A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A8u;
        // 0x7999ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999B0u;
}
} // namespace gh_r022
