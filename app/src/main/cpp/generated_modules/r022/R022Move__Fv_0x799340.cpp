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
// Function: R022Move__Fv
// Address: 0x799340 - 0x799370
void R022Move__Fv_0x799340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R022Move__Fv_0x799340");
#endif

    switch (ctx->pc) {
        case 0x799358u: goto label_799358;
        case 0x799360u: goto label_799360;
        default: break;
    }

    ctx->pc = 0x799340u;

    // 0x799340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799348: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79934c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799350: 0xc1e6596  jal         func_799658
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x8e04cd8c  lw          $a0, -0x3274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799658u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0xc1e6658  jal         func_799960
    ctx->pc = 0x799358u;
    SET_GPR_U32(ctx, 31, 0x799360u);
    ctx->pc = 0x79935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799358u;
    // 0x79935c: 0x8e04cd8c  lw          $a0, -0x3274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799960u, 0x799358u, 0x799360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799368: 0x3e00008  jr          $ra
    ctx->pc = 0x799368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799370u;
}
} // namespace gh_r022
