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

// Function: cCoreSave_getAllKillNpcNum
// Address: 0x1fc5d0 - 0x1fc5e8
void cCoreSave_getAllKillNpcNum_0x1fc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getAllKillNpcNum_0x1fc5d0");
#endif

    ctx->pc = 0x1fc5d0u;

    // 0x1fc5d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc5d4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC5D4u;
    {
        const bool branch_taken_0x1fc5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5D4u;
        // 0x1fc5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5d4) {
            ctx->pc = 0x1FC5E0u;
            goto label_1fc5e0;
        }
    }
    ctx->pc = 0x1FC5DCu;
    // 0x1fc5dc: 0x94820bb6  lhu         $v0, 0xBB6($a0)
    ctx->pc = 0x1fc5dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2998)));
label_1fc5e0:
    // 0x1fc5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5E8u;
}
