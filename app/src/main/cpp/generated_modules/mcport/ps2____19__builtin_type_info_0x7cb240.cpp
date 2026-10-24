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
// Function: _$_19__builtin_type_info
// Address: 0x7cb240 - 0x7cb260
void ps2____19__builtin_type_info_0x7cb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____19__builtin_type_info_0x7cb240");
#endif

    switch (ctx->pc) {
        case 0x7cb250u: goto label_7cb250;
        default: break;
    }

    ctx->pc = 0x7cb240u;

    // 0x7cb240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cb244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cb248: 0xc1f25e6  jal         func_7C9798
    ctx->pc = 0x7CB248u;
    SET_GPR_U32(ctx, 31, 0x7CB250u);
    ctx->pc = 0x7C9798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9798u, 0x7CB248u, 0x7CB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB250u;
label_7cb250:
    // 0x7cb250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb254: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB254u;
        // 0x7cb258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB25Cu;
    // 0x7cb25c: 0x0  nop
    ctx->pc = 0x7cb25cu;
    // NOP
    ctx->pc = 0x7cb260u;
}
} // namespace gh_mcport
