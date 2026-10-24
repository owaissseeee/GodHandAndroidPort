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
// Function: _$_16__ptmd_type_info
// Address: 0x7cb0f0 - 0x7cb110
void ps2____16__ptmd_type_info_0x7cb0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__ptmd_type_info_0x7cb0f0");
#endif

    switch (ctx->pc) {
        case 0x7cb100u: goto label_7cb100;
        default: break;
    }

    ctx->pc = 0x7cb0f0u;

    // 0x7cb0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cb0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cb0f8: 0xc1f25e6  jal         func_7C9798
    ctx->pc = 0x7CB0F8u;
    SET_GPR_U32(ctx, 31, 0x7CB100u);
    ctx->pc = 0x7C9798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9798u, 0x7CB0F8u, 0x7CB100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB100u;
label_7cb100:
    // 0x7cb100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb104: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB104u;
        // 0x7cb108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB10Cu;
    // 0x7cb10c: 0x0  nop
    ctx->pc = 0x7cb10cu;
    // NOP
    ctx->pc = 0x7cb110u;
}
} // namespace gh_mcport
