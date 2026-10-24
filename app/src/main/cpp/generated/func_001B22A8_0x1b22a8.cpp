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

// Function: func_001B22A8
// Address: 0x1b22a8 - 0x1b22d0
void func_001B22A8_0x1b22a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B22A8_0x1b22a8");
#endif

    switch (ctx->pc) {
        case 0x1b22c4u: goto label_1b22c4;
        default: break;
    }

    ctx->pc = 0x1b22a8u;

    // 0x1b22a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b22ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b22acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b22b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b22b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b22b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b22b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22b8: 0x244284a0  addiu       $v0, $v0, -0x7B60
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935712));
    // 0x1b22bc: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x1B22BCu;
    SET_GPR_U32(ctx, 31, 0x1B22C4u);
    ctx->pc = 0x1B22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22BCu;
    // 0x1b22c0: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x1B22BCu, 0x1B22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22C4u;
label_1b22c4:
    // 0x1b22c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b22c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b22c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B22C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22C8u;
        // 0x1b22cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B22C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22D0u;
}
