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

// Function: SFAOAP_Start
// Address: 0x34b8f8 - 0x34b940
void SFAOAP_Start_0x34b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFAOAP_Start_0x34b8f8");
#endif

    switch (ctx->pc) {
        case 0x34b910u: goto label_34b910;
        case 0x34b930u: goto label_34b930;
        default: break;
    }

    ctx->pc = 0x34b8f8u;

    // 0x34b8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b8fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b904: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b908: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34B908u;
    SET_GPR_U32(ctx, 31, 0x34B910u);
    ctx->pc = 0x34B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B908u;
    // 0x34b90c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B908u, 0x34B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B910u;
label_34b910:
    // 0x34b910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x34b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b918: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x34b918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b91c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34b91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B920u;
    {
        const bool branch_taken_0x34b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B920u;
        // 0x34b924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b920) {
            ctx->pc = 0x34B930u;
            goto label_34b930;
        }
    }
    ctx->pc = 0x34B928u;
    // 0x34b928: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x34B928u;
    SET_GPR_U32(ctx, 31, 0x34B930u);
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x34B928u, 0x34B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B930u;
label_34b930:
    // 0x34b930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b934: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b938: 0x3e00008  jr          $ra
    ctx->pc = 0x34B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B938u;
        // 0x34b93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B940u;
}
