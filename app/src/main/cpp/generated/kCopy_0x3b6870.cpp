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

// Function: kCopy
// Address: 0x3b6870 - 0x3b68a8
void kCopy_0x3b6870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x3b6870");
#endif

    switch (ctx->pc) {
        case 0x3b6880u: goto label_3b6880;
        default: break;
    }

    ctx->pc = 0x3b6870u;

    // 0x3b6870: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x3b6870u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3b6874: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3B6874u;
    {
        const bool branch_taken_0x3b6874 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6874u;
        // 0x3b6878: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6874) {
            ctx->pc = 0x3B68A0u;
            goto label_3b68a0;
        }
    }
    ctx->pc = 0x3B687Cu;
    // 0x3b687c: 0x0  nop
    ctx->pc = 0x3b687cu;
    // NOP
label_3b6880:
    // 0x3b6880: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b6880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b6884: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b6884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3b6888: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3b6888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3b688c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3b688cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b6890: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b6890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3b6894: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b6894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b6898: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B6898u;
    {
        const bool branch_taken_0x3b6898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6898) {
            ctx->pc = 0x3B6880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6880;
        }
    }
    ctx->pc = 0x3B68A0u;
label_3b68a0:
    // 0x3b68a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B68A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68A0u;
        // 0x3b68a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B68A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B68A8u;
}
