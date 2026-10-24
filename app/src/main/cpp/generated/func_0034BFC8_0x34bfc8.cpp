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

// Function: func_0034BFC8
// Address: 0x34bfc8 - 0x34bff8
void func_0034BFC8_0x34bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BFC8_0x34bfc8");
#endif

    switch (ctx->pc) {
        case 0x34bfd0u: goto label_34bfd0;
        default: break;
    }

    ctx->pc = 0x34bfc8u;

    // 0x34bfc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bfcc: 0x0  nop
    ctx->pc = 0x34bfccu;
    // NOP
label_34bfd0:
    // 0x34bfd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34bfd4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x34bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x34bfd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x34bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x34bfdc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x34bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x34bfe0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x34bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x34bfe4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BFE4u;
    {
        const bool branch_taken_0x34bfe4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x34BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFE4u;
        // 0x34bfe8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bfe4) {
            ctx->pc = 0x34BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bfd0;
        }
    }
    ctx->pc = 0x34BFECu;
    // 0x34bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x34BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BFF4u;
    // 0x34bff4: 0x0  nop
    ctx->pc = 0x34bff4u;
    // NOP
    ctx->pc = 0x34bff8u;
}
