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

// Function: func_00318338
// Address: 0x318338 - 0x318358
void func_00318338_0x318338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318338_0x318338");
#endif

    switch (ctx->pc) {
        case 0x318348u: goto label_318348;
        default: break;
    }

    ctx->pc = 0x318338u;

    // 0x318338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31833c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318340: 0xc053a8a  jal         func_14EA28
    ctx->pc = 0x318340u;
    SET_GPR_U32(ctx, 31, 0x318348u);
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x318340u, 0x318348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318348u;
label_318348:
    // 0x318348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31834c: 0x3e00008  jr          $ra
    ctx->pc = 0x31834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31834Cu;
        // 0x318350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318354u;
    // 0x318354: 0x0  nop
    ctx->pc = 0x318354u;
    // NOP
    ctx->pc = 0x318358u;
}
