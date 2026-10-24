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

// Function: cWorldTime_getGlobalHMS
// Address: 0x2d9db8 - 0x2d9de8
void cWorldTime_getGlobalHMS_0x2d9db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldTime_getGlobalHMS_0x2d9db8");
#endif

    switch (ctx->pc) {
        case 0x2d9ddcu: goto label_2d9ddc;
        default: break;
    }

    ctx->pc = 0x2d9db8u;

    // 0x2d9db8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2d9db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9dc0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d9dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dc4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d9dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dc8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d9dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9dcc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d9dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9dd4: 0xc0b6754  jal         func_2D9D50
    ctx->pc = 0x2D9DD4u;
    SET_GPR_U32(ctx, 31, 0x2D9DDCu);
    ctx->pc = 0x2D9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9DD4u;
    // 0x2d9dd8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D50u, 0x2D9DD4u, 0x2D9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DDCu;
label_2d9ddc:
    // 0x2d9ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DE0u;
        // 0x2d9de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9DE8u;
}
