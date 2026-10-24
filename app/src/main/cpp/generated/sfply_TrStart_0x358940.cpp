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

// Function: sfply_TrStart
// Address: 0x358940 - 0x358968
void sfply_TrStart_0x358940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfply_TrStart_0x358940");
#endif

    switch (ctx->pc) {
        case 0x35895cu: goto label_35895c;
        default: break;
    }

    ctx->pc = 0x358940u;

    // 0x358940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358944: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x358944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x358948: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x358948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35894c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35894cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358954: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x358954u;
    SET_GPR_U32(ctx, 31, 0x35895Cu);
    ctx->pc = 0x358958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358954u;
    // 0x358958: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x358954u, 0x35895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35895Cu;
label_35895c:
    // 0x35895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358960: 0x3e00008  jr          $ra
    ctx->pc = 0x358960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358960u;
        // 0x358964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358968u;
}
