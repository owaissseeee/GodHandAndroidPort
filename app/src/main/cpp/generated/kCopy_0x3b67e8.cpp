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
// Address: 0x3b67e8 - 0x3b6818
void kCopy_0x3b67e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x3b67e8");
#endif

    switch (ctx->pc) {
        case 0x3b67f0u: goto label_3b67f0;
        default: break;
    }

    ctx->pc = 0x3b67e8u;

    // 0x3b67e8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B67E8u;
    {
        const bool branch_taken_0x3b67e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67E8u;
        // 0x3b67ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b67e8) {
            ctx->pc = 0x3B6810u;
            goto label_3b6810;
        }
    }
    ctx->pc = 0x3B67F0u;
label_3b67f0:
    // 0x3b67f0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b67f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b67f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b67f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3b67f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b67f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b67fc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3b67fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b6800: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b6800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b6804: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b6804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b6808: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B6808u;
    {
        const bool branch_taken_0x3b6808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6808) {
            ctx->pc = 0x3B67F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b67f0;
        }
    }
    ctx->pc = 0x3B6810u;
label_3b6810:
    // 0x3b6810: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6810u;
        // 0x3b6814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6818u;
}
