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

// Function: func_0034D2D8
// Address: 0x34d2d8 - 0x34d318
void func_0034D2D8_0x34d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034D2D8_0x34d2d8");
#endif

    switch (ctx->pc) {
        case 0x34d2ecu: goto label_34d2ec;
        default: break;
    }

    ctx->pc = 0x34d2d8u;

    // 0x34d2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d2e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34d2e4: 0xc0d3514  jal         func_34D450
    ctx->pc = 0x34D2E4u;
    SET_GPR_U32(ctx, 31, 0x34D2ECu);
    ctx->pc = 0x34D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D2E4u;
    // 0x34d2e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D450u, 0x34D2E4u, 0x34D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2ECu;
label_34d2ec:
    // 0x34d2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d2f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D2F0u;
    {
        const bool branch_taken_0x34d2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2F0u;
        // 0x34d2f4: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d2f0) {
            ctx->pc = 0x34D308u;
            goto label_34d308;
        }
    }
    ctx->pc = 0x34D2F8u;
    // 0x34d2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d2fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34d2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d300: 0x80d34c6  j           func_34D318
    ctx->pc = 0x34D300u;
    ctx->pc = 0x34D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D300u;
    // 0x34d304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D318u, 0x34D300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34D308u;
label_34d308:
    // 0x34d308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d30c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34d30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d310: 0x3e00008  jr          $ra
    ctx->pc = 0x34D310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D310u;
        // 0x34d314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D318u;
}
