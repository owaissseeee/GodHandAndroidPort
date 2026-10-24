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

// Function: Tramp_UpdateObjByIndexedOp_2FBE50_2FEBB8
// Address: 0x2febb8 - 0x2febd8
void Tramp_UpdateObjByIndexedOp_2FBE50_2FEBB8_0x2febb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_UpdateObjByIndexedOp_2FBE50_2FEBB8_0x2febb8");
#endif

    switch (ctx->pc) {
        case 0x2febc8u: goto label_2febc8;
        default: break;
    }

    ctx->pc = 0x2febb8u;

    // 0x2febb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2febb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2febbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2febbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2febc0: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FEBC0u;
    SET_GPR_U32(ctx, 31, 0x2FEBC8u);
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FEBC0u, 0x2FEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBC8u;
label_2febc8:
    // 0x2febc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2febc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2febcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBCCu;
        // 0x2febd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEBD4u;
    // 0x2febd4: 0x0  nop
    ctx->pc = 0x2febd4u;
    // NOP
    ctx->pc = 0x2febd8u;
}
