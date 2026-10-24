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

// Function: func_00333FD8
// Address: 0x333fd8 - 0x334008
void func_00333FD8_0x333fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333FD8_0x333fd8");
#endif

    switch (ctx->pc) {
        case 0x333fe0u: goto label_333fe0;
        default: break;
    }

    ctx->pc = 0x333fd8u;

    // 0x333fd8: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x333fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x333fdc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x333fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_333fe0:
    // 0x333fe0: 0x0  nop
    ctx->pc = 0x333fe0u;
    // NOP
    // 0x333fe4: 0x0  nop
    ctx->pc = 0x333fe4u;
    // NOP
    // 0x333fe8: 0x0  nop
    ctx->pc = 0x333fe8u;
    // NOP
    // 0x333fec: 0x0  nop
    ctx->pc = 0x333fecu;
    // NOP
    // 0x333ff0: 0x0  nop
    ctx->pc = 0x333ff0u;
    // NOP
    // 0x333ff4: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333FF4u;
    {
        const bool branch_taken_0x333ff4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x333ff4) {
            ctx->pc = 0x333FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333FF4u;
            // 0x333ff8: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333fe0;
        }
    }
    ctx->pc = 0x333FFCu;
    // 0x333ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x333FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334004u;
    // 0x334004: 0x0  nop
    ctx->pc = 0x334004u;
    // NOP
    ctx->pc = 0x334008u;
}
