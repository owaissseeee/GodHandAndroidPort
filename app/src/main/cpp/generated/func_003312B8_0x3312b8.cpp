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

// Function: func_003312B8
// Address: 0x3312b8 - 0x3312e8
void func_003312B8_0x3312b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003312B8_0x3312b8");
#endif

    switch (ctx->pc) {
        case 0x3312c0u: goto label_3312c0;
        default: break;
    }

    ctx->pc = 0x3312b8u;

    // 0x3312b8: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x3312b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x3312bc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3312bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3312c0:
    // 0x3312c0: 0x0  nop
    ctx->pc = 0x3312c0u;
    // NOP
    // 0x3312c4: 0x0  nop
    ctx->pc = 0x3312c4u;
    // NOP
    // 0x3312c8: 0x0  nop
    ctx->pc = 0x3312c8u;
    // NOP
    // 0x3312cc: 0x0  nop
    ctx->pc = 0x3312ccu;
    // NOP
    // 0x3312d0: 0x0  nop
    ctx->pc = 0x3312d0u;
    // NOP
    // 0x3312d4: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3312D4u;
    {
        const bool branch_taken_0x3312d4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3312d4) {
            ctx->pc = 0x3312D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3312D4u;
            // 0x3312d8: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3312C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3312c0;
        }
    }
    ctx->pc = 0x3312DCu;
    // 0x3312dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3312DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3312DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3312E4u;
    // 0x3312e4: 0x0  nop
    ctx->pc = 0x3312e4u;
    // NOP
    ctx->pc = 0x3312e8u;
}
