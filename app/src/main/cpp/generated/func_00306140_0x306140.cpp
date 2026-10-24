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

// Function: func_00306140
// Address: 0x306140 - 0x306168
void func_00306140_0x306140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306140_0x306140");
#endif

    switch (ctx->pc) {
        case 0x306150u: goto label_306150;
        case 0x30615cu: goto label_30615c;
        default: break;
    }

    ctx->pc = 0x306140u;

    // 0x306140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306148: 0xc0bedec  jal         func_2FB7B0
    ctx->pc = 0x306148u;
    SET_GPR_U32(ctx, 31, 0x306150u);
    ctx->pc = 0x30614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306148u;
    // 0x30614c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB7B0u, 0x306148u, 0x306150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306150u;
label_306150:
    // 0x306150: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x306154: 0xc0c0300  jal         func_300C00
    ctx->pc = 0x306154u;
    SET_GPR_U32(ctx, 31, 0x30615Cu);
    ctx->pc = 0x306158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306154u;
    // 0x306158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300C00u, 0x306154u, 0x30615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30615Cu;
label_30615c:
    // 0x30615c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30615cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306160: 0x3e00008  jr          $ra
    ctx->pc = 0x306160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306160u;
        // 0x306164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306168u;
}
