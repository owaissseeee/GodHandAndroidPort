#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: R105Move__Fv
// Address: 0x799418 - 0x799438
void R105Move__Fv_0x799418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R105Move__Fv_0x799418");
#endif

    switch (ctx->pc) {
        case 0x799428u: goto label_799428;
        default: break;
    }

    ctx->pc = 0x799418u;

    // 0x799418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79941c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799420: 0xc1e685e  jal         func_79A178
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x79A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A178u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79942c: 0x3e00008  jr          $ra
    ctx->pc = 0x79942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799434u;
    // 0x799434: 0x0  nop
    ctx->pc = 0x799434u;
    // NOP
    ctx->pc = 0x799438u;
}
} // namespace gh_r105
