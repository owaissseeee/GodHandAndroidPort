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

// Function: func_003A6290
// Address: 0x3a6290 - 0x3a62b0
void func_003A6290_0x3a6290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6290_0x3a6290");
#endif

    switch (ctx->pc) {
        case 0x3a62a4u: goto label_3a62a4;
        default: break;
    }

    ctx->pc = 0x3a6290u;

    // 0x3a6290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6294: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3a6294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x3a6298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a629c: 0xc0e9a0c  jal         func_3A6830
    ctx->pc = 0x3A629Cu;
    SET_GPR_U32(ctx, 31, 0x3A62A4u);
    ctx->pc = 0x3A62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A629Cu;
    // 0x3a62a0: 0x24a56020  addiu       $a1, $a1, 0x6020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6830u, 0x3A629Cu, 0x3A62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A62A4u;
label_3a62a4:
    // 0x3a62a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a62a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a62a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A62A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A62A8u;
        // 0x3a62ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A62A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A62B0u;
}
