#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: R021Move__Fv
// Address: 0x799368 - 0x799398
void R021Move__Fv_0x799368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R021Move__Fv_0x799368");
#endif

    switch (ctx->pc) {
        case 0x799380u: goto label_799380;
        case 0x799388u: goto label_799388;
        default: break;
    }

    ctx->pc = 0x799368u;

    // 0x799368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79936c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799370: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799378: 0xc1e6590  jal         func_799640
    ctx->pc = 0x799378u;
    SET_GPR_U32(ctx, 31, 0x799380u);
    ctx->pc = 0x79937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799378u;
    // 0x79937c: 0x8e04c2cc  lw          $a0, -0x3D34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799640u, 0x799378u, 0x799380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0xc1e6640  jal         func_799900
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x8e04c2cc  lw          $a0, -0x3D34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799900u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79938c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799390: 0x3e00008  jr          $ra
    ctx->pc = 0x799390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799398u;
}
} // namespace gh_r021
