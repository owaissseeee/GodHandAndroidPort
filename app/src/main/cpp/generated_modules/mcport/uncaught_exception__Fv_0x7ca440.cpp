#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: uncaught_exception__Fv
// Address: 0x7ca440 - 0x7ca478
void uncaught_exception__Fv_0x7ca440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("uncaught_exception__Fv_0x7ca440");
#endif

    switch (ctx->pc) {
        case 0x7ca450u: goto label_7ca450;
        default: break;
    }

    ctx->pc = 0x7ca440u;

    // 0x7ca440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ca440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ca444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ca444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ca448: 0xc1f2d0c  jal         func_7CB430
    ctx->pc = 0x7CA448u;
    SET_GPR_U32(ctx, 31, 0x7CA450u);
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7CA448u, 0x7CA450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA450u;
label_7ca450:
    // 0x7ca450: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x7ca450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7ca454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CA454u;
    {
        const bool branch_taken_0x7ca454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA454u;
        // 0x7ca458: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca454) {
            ctx->pc = 0x7CA464u;
            goto label_7ca464;
        }
    }
    ctx->pc = 0x7CA45Cu;
    // 0x7ca45c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x7ca45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x7ca460: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x7ca460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_7ca464:
    // 0x7ca464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ca464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ca468: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x7ca468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca46c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA46Cu;
        // 0x7ca470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA474u;
    // 0x7ca474: 0x0  nop
    ctx->pc = 0x7ca474u;
    // NOP
    ctx->pc = 0x7ca478u;
}
} // namespace gh_mcport
