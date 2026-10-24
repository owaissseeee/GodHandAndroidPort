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
// Function: ReadOpen__7cMcPortPCcb
// Address: 0x7c33d0 - 0x7c33f0
void ReadOpen__7cMcPortPCcb_0x7c33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadOpen__7cMcPortPCcb_0x7c33d0");
#endif

    switch (ctx->pc) {
        case 0x7c33e4u: goto label_7c33e4;
        default: break;
    }

    ctx->pc = 0x7c33d0u;

    // 0x7c33d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c33d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7c33d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c33d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c33dc: 0xc1f0cc0  jal         func_7C3300
    ctx->pc = 0x7C33DCu;
    SET_GPR_U32(ctx, 31, 0x7C33E4u);
    ctx->pc = 0x7C33E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C33DCu;
    // 0x7c33e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3300u, 0x7C33DCu, 0x7C33E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C33E4u;
label_7c33e4:
    // 0x7c33e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c33e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c33e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C33E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C33E8u;
        // 0x7c33ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C33E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C33F0u;
}
} // namespace gh_mcport
