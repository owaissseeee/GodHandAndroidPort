#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: _$_16__ptmf_type_info
// Address: 0x7cb160 - 0x7cb180
void ps2____16__ptmf_type_info_0x7cb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__ptmf_type_info_0x7cb160");
#endif

    switch (ctx->pc) {
        case 0x7cb170u: goto label_7cb170;
        default: break;
    }

    ctx->pc = 0x7cb160u;

    // 0x7cb160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cb164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cb168: 0xc1f25e6  jal         func_7C9798
    ctx->pc = 0x7CB168u;
    SET_GPR_U32(ctx, 31, 0x7CB170u);
    ctx->pc = 0x7C9798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9798u, 0x7CB168u, 0x7CB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB170u;
label_7cb170:
    // 0x7cb170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb174: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB174u;
        // 0x7cb178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB17Cu;
    // 0x7cb17c: 0x0  nop
    ctx->pc = 0x7cb17cu;
    // NOP
    ctx->pc = 0x7cb180u;
}
} // namespace gh_mcport
