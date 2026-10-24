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

// Function: func_0032D170
// Address: 0x32d170 - 0x32d198
void func_0032D170_0x32d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D170_0x32d170");
#endif

    switch (ctx->pc) {
        case 0x32d180u: goto label_32d180;
        case 0x32d188u: goto label_32d188;
        default: break;
    }

    ctx->pc = 0x32d170u;

    // 0x32d170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d178: 0xc0cbaf6  jal         func_32EBD8
    ctx->pc = 0x32D178u;
    SET_GPR_U32(ctx, 31, 0x32D180u);
    ctx->pc = 0x32EBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EBD8u, 0x32D178u, 0x32D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D180u;
label_32d180:
    // 0x32d180: 0xc0cc09a  jal         func_330268
    ctx->pc = 0x32D180u;
    SET_GPR_U32(ctx, 31, 0x32D188u);
    ctx->pc = 0x330268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330268u, 0x32D180u, 0x32D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D188u;
label_32d188:
    // 0x32d188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d190: 0x3e00008  jr          $ra
    ctx->pc = 0x32D190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D190u;
        // 0x32d194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D198u;
}
