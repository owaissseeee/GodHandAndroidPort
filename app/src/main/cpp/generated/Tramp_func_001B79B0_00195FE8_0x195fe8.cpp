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

// Function: Tramp_func_001B79B0_00195FE8
// Address: 0x195fe8 - 0x196008
void Tramp_func_001B79B0_00195FE8_0x195fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_00195FE8_0x195fe8");
#endif

    switch (ctx->pc) {
        case 0x195ff8u: goto label_195ff8;
        default: break;
    }

    ctx->pc = 0x195fe8u;

    // 0x195fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195ff0: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x195FF0u;
    SET_GPR_U32(ctx, 31, 0x195FF8u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x195FF0u, 0x195FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FF8u;
label_195ff8:
    // 0x195ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x195FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FFCu;
        // 0x196000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196004u;
    // 0x196004: 0x0  nop
    ctx->pc = 0x196004u;
    // NOP
    ctx->pc = 0x196008u;
}
