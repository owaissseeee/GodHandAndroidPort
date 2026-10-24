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

// Function: func_002844A0
// Address: 0x2844a0 - 0x2844c0
void func_002844A0_0x2844a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002844A0_0x2844a0");
#endif

    switch (ctx->pc) {
        case 0x2844b4u: goto label_2844b4;
        default: break;
    }

    ctx->pc = 0x2844a0u;

    // 0x2844a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2844a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2844a4: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x2844a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x2844a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2844a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2844ac: 0xc041004  jal         func_104010
    ctx->pc = 0x2844ACu;
    SET_GPR_U32(ctx, 31, 0x2844B4u);
    ctx->pc = 0x2844B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844ACu;
    // 0x2844b0: 0x248605b0  addiu       $a2, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104010u, 0x2844ACu, 0x2844B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844B4u;
label_2844b4:
    // 0x2844b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2844b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2844b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2844B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2844BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844B8u;
        // 0x2844bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2844B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2844C0u;
}
