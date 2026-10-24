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

// Function: func_001268F0
// Address: 0x1268f0 - 0x126918
void func_001268F0_0x1268f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001268F0_0x1268f0");
#endif

    switch (ctx->pc) {
        case 0x1268f8u: goto label_1268f8;
        default: break;
    }

    ctx->pc = 0x1268f0u;

    // 0x1268f0: 0x24841644  addiu       $a0, $a0, 0x1644
    ctx->pc = 0x1268f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5700));
    // 0x1268f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1268f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1268f8:
    // 0x1268f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1268f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1268fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x126900: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x126900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x126904: 0x0  nop
    ctx->pc = 0x126904u;
    // NOP
    // 0x126908: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x126908u;
    {
        const bool branch_taken_0x126908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126908u;
        // 0x12690c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126908) {
            ctx->pc = 0x1268F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1268f8;
        }
    }
    ctx->pc = 0x126910u;
    // 0x126910: 0x3e00008  jr          $ra
    ctx->pc = 0x126910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126918u;
}
