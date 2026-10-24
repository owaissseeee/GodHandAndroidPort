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

// Function: func_00349820
// Address: 0x349820 - 0x349840
void func_00349820_0x349820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349820_0x349820");
#endif

    switch (ctx->pc) {
        case 0x349830u: goto label_349830;
        default: break;
    }

    ctx->pc = 0x349820u;

    // 0x349820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349828: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x349828u;
    SET_GPR_U32(ctx, 31, 0x349830u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x349828u, 0x349830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349830u;
label_349830:
    // 0x349830: 0x8c42188c  lw          $v0, 0x188C($v0)
    ctx->pc = 0x349830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6284)));
    // 0x349834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349838: 0x3e00008  jr          $ra
    ctx->pc = 0x349838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349838u;
        // 0x34983c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349840u;
}
