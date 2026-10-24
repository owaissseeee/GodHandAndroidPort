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

// Function: func_001BE8F0
// Address: 0x1be8f0 - 0x1be918
void func_001BE8F0_0x1be8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE8F0_0x1be8f0");
#endif

    switch (ctx->pc) {
        case 0x1be90cu: goto label_1be90c;
        default: break;
    }

    ctx->pc = 0x1be8f0u;

    // 0x1be8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be8f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1be8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be8fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1be8fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be900: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x1be900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x1be904: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1BE904u;
    SET_GPR_U32(ctx, 31, 0x1BE90Cu);
    ctx->pc = 0x1BE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE904u;
    // 0x1be908: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1BE904u, 0x1BE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE90Cu;
label_1be90c:
    // 0x1be90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be910: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE910u;
        // 0x1be914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE918u;
}
