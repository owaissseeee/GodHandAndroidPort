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

// Function: func_0035FA88
// Address: 0x35fa88 - 0x35fad8
void func_0035FA88_0x35fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FA88_0x35fa88");
#endif

    switch (ctx->pc) {
        case 0x35faa8u: goto label_35faa8;
        default: break;
    }

    ctx->pc = 0x35fa88u;

    // 0x35fa88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35fa8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fa8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa90: 0x2442e338  addiu       $v0, $v0, -0x1CC8
    ctx->pc = 0x35fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959928));
    // 0x35fa94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x35fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EE33Cu));
    // 0x35fa98: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x35FA98u;
    {
        const bool branch_taken_0x35fa98 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x35FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA98u;
        // 0x35fa9c: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa98) {
            ctx->pc = 0x35FACCu;
            goto label_35facc;
        }
    }
    ctx->pc = 0x35FAA0u;
    // 0x35faa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35faa4: 0x0  nop
    ctx->pc = 0x35faa4u;
    // NOP
label_35faa8:
    // 0x35faa8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35faac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35faacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fab0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FAB0u;
    {
        const bool branch_taken_0x35fab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAB0u;
        // 0x35fab4: 0x24840094  addiu       $a0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fab0) {
            ctx->pc = 0x35FAD0u;
            goto label_35fad0;
        }
    }
    ctx->pc = 0x35FAB8u;
    // 0x35fab8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35fabc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x35fabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35fac0: 0x0  nop
    ctx->pc = 0x35fac0u;
    // NOP
    // 0x35fac4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35FAC4u;
    {
        const bool branch_taken_0x35fac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fac4) {
            ctx->pc = 0x35FAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35faa8;
        }
    }
    ctx->pc = 0x35FACCu;
label_35facc:
    // 0x35facc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35faccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fad0:
    // 0x35fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x35FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FAD8u;
}
