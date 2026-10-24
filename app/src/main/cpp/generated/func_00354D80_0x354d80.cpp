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

// Function: func_00354D80
// Address: 0x354d80 - 0x354db0
void func_00354D80_0x354d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354D80_0x354d80");
#endif

    switch (ctx->pc) {
        case 0x354da0u: goto label_354da0;
        default: break;
    }

    ctx->pc = 0x354d80u;

    // 0x354d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354d88: 0x8c831fc0  lw          $v1, 0x1FC0($a0)
    ctx->pc = 0x354d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x354d8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x354d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354d90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354D90u;
    {
        const bool branch_taken_0x354d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D90u;
        // 0x354d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d90) {
            ctx->pc = 0x354DA4u;
            goto label_354da4;
        }
    }
    ctx->pc = 0x354D98u;
    // 0x354d98: 0xc0da81c  jal         func_36A070
    ctx->pc = 0x354D98u;
    SET_GPR_U32(ctx, 31, 0x354DA0u);
    ctx->pc = 0x36A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A070u, 0x354D98u, 0x354DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DA0u;
label_354da0:
    // 0x354da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354da4:
    // 0x354da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354da8: 0x3e00008  jr          $ra
    ctx->pc = 0x354DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DA8u;
        // 0x354dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354DB0u;
}
