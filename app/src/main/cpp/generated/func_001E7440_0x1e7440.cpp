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

// Function: func_001E7440
// Address: 0x1e7440 - 0x1e7470
void func_001E7440_0x1e7440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7440_0x1e7440");
#endif

    switch (ctx->pc) {
        case 0x1e7458u: goto label_1e7458;
        case 0x1e7460u: goto label_1e7460;
        default: break;
    }

    ctx->pc = 0x1e7440u;

    // 0x1e7440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e7448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e744c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7450: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1E7450u;
    SET_GPR_U32(ctx, 31, 0x1E7458u);
    ctx->pc = 0x1E7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7450u;
    // 0x1e7454: 0x26040530  addiu       $a0, $s0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1E7450u, 0x1E7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7458u;
label_1e7458:
    // 0x1e7458: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1E7458u;
    SET_GPR_U32(ctx, 31, 0x1E7460u);
    ctx->pc = 0x1E745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7458u;
    // 0x1e745c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1E7458u, 0x1E7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7460u;
label_1e7460:
    // 0x1e7460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7468: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7468u;
        // 0x1e746c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7470u;
}
