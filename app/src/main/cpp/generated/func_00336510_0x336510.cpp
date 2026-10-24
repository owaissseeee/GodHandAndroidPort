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

// Function: func_00336510
// Address: 0x336510 - 0x336530
void func_00336510_0x336510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336510_0x336510");
#endif

    switch (ctx->pc) {
        case 0x336520u: goto label_336520;
        default: break;
    }

    ctx->pc = 0x336510u;

    // 0x336510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336518: 0xc0cd8fe  jal         func_3363F8
    ctx->pc = 0x336518u;
    SET_GPR_U32(ctx, 31, 0x336520u);
    ctx->pc = 0x33651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336518u;
    // 0x33651c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363F8u, 0x336518u, 0x336520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336520u;
label_336520:
    // 0x336520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336528: 0x3e00008  jr          $ra
    ctx->pc = 0x336528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336528u;
        // 0x33652c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336530u;
}
