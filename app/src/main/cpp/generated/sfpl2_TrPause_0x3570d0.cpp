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

// Function: sfpl2_TrPause
// Address: 0x3570d0 - 0x3570f8
void sfpl2_TrPause_0x3570d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfpl2_TrPause_0x3570d0");
#endif

    switch (ctx->pc) {
        case 0x3570ecu: goto label_3570ec;
        default: break;
    }

    ctx->pc = 0x3570d0u;

    // 0x3570d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3570d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3570d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3570d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570d8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3570d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3570dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3570dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3570e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3570e4: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x3570E4u;
    SET_GPR_U32(ctx, 31, 0x3570ECu);
    ctx->pc = 0x3570E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3570E4u;
    // 0x3570e8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x3570E4u, 0x3570ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570ECu;
label_3570ec:
    // 0x3570ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3570ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3570f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3570F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570F0u;
        // 0x3570f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570F8u;
}
