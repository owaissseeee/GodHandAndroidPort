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

// Function: func_003248F0
// Address: 0x3248f0 - 0x324910
void func_003248F0_0x3248f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003248F0_0x3248f0");
#endif

    switch (ctx->pc) {
        case 0x324900u: goto label_324900;
        default: break;
    }

    ctx->pc = 0x3248f0u;

    // 0x3248f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3248f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3248f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3248f8: 0xc0c9314  jal         func_324C50
    ctx->pc = 0x3248F8u;
    SET_GPR_U32(ctx, 31, 0x324900u);
    ctx->pc = 0x324C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C50u, 0x3248F8u, 0x324900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324900u;
label_324900:
    // 0x324900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324908: 0x3e00008  jr          $ra
    ctx->pc = 0x324908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324908u;
        // 0x32490c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324910u;
}
