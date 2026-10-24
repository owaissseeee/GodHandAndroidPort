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

// Function: patch_394328
// Address: 0x394328 - 0x394348
void patch_394328_0x394328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("patch_394328_0x394328");
#endif

    switch (ctx->pc) {
        case 0x394338u: goto label_394338;
        default: break;
    }

    ctx->pc = 0x394328u;

    // 0x394328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39432c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x394330: 0xc0e5022  jal         func_394088
    ctx->pc = 0x394330u;
    SET_GPR_U32(ctx, 31, 0x394338u);
    ctx->pc = 0x394334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394330u;
    // 0x394334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x394330u, 0x394338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394338u;
label_394338:
    // 0x394338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39433c: 0x3e00008  jr          $ra
    ctx->pc = 0x39433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39433Cu;
        // 0x394340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394344u;
    // 0x394344: 0x0  nop
    ctx->pc = 0x394344u;
    // NOP
    ctx->pc = 0x394348u;
}
