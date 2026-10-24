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

// Function: func_001DEDA8
// Address: 0x1deda8 - 0x1dedc8
void func_001DEDA8_0x1deda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DEDA8_0x1deda8");
#endif

    switch (ctx->pc) {
        case 0x1dedb8u: goto label_1dedb8;
        default: break;
    }

    ctx->pc = 0x1deda8u;

    // 0x1deda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dedac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dedacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dedb0: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1DEDB0u;
    SET_GPR_U32(ctx, 31, 0x1DEDB8u);
    ctx->pc = 0x1DEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDB0u;
    // 0x1dedb4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1DEDB0u, 0x1DEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDB8u;
label_1dedb8:
    // 0x1dedb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dedb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDBCu;
        // 0x1dedc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDC4u;
    // 0x1dedc4: 0x0  nop
    ctx->pc = 0x1dedc4u;
    // NOP
    ctx->pc = 0x1dedc8u;
}
