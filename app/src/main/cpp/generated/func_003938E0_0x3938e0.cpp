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

// Function: func_003938E0
// Address: 0x3938e0 - 0x393900
void func_003938E0_0x3938e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003938E0_0x3938e0");
#endif

    switch (ctx->pc) {
        case 0x3938f0u: goto label_3938f0;
        default: break;
    }

    ctx->pc = 0x3938e0u;

    // 0x3938e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3938e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3938e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3938e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3938e8: 0xc0e4e1e  jal         func_393878
    ctx->pc = 0x3938E8u;
    SET_GPR_U32(ctx, 31, 0x3938F0u);
    ctx->pc = 0x3938ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3938E8u;
    // 0x3938ec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393878u, 0x3938E8u, 0x3938F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3938F0u;
label_3938f0:
    // 0x3938f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3938f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3938f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3938F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938F4u;
        // 0x3938f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3938F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3938FCu;
    // 0x3938fc: 0x0  nop
    ctx->pc = 0x3938fcu;
    // NOP
    ctx->pc = 0x393900u;
}
