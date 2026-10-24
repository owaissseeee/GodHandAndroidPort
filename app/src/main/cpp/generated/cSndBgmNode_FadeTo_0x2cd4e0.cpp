#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cSndBgmNode_FadeTo
// Address: 0x2cd4e0 - 0x2cd500
void cSndBgmNode_FadeTo_0x2cd4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_FadeTo_0x2cd4e0");
#endif

    switch (ctx->pc) {
        case 0x2cd4f0u: goto label_2cd4f0;
        default: break;
    }

    ctx->pc = 0x2cd4e0u;

    // 0x2cd4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd4e8: 0xc0dcd78  jal         func_3735E0
    ctx->pc = 0x2CD4E8u;
    SET_GPR_U32(ctx, 31, 0x2CD4F0u);
    ctx->pc = 0x2CD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4E8u;
    // 0x2cd4ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735E0u, 0x2CD4E8u, 0x2CD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4F0u;
label_2cd4f0:
    // 0x2cd4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4F4u;
        // 0x2cd4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD4FCu;
    // 0x2cd4fc: 0x0  nop
    ctx->pc = 0x2cd4fcu;
    // NOP
    ctx->pc = 0x2cd500u;
}
