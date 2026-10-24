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

// Function: cCoreSave_getAllContinueNum
// Address: 0x1fc600 - 0x1fc618
void cCoreSave_getAllContinueNum_0x1fc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getAllContinueNum_0x1fc600");
#endif

    ctx->pc = 0x1fc600u;

    // 0x1fc600: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc604: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC604u;
    {
        const bool branch_taken_0x1fc604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC604u;
        // 0x1fc608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc604) {
            ctx->pc = 0x1FC610u;
            goto label_1fc610;
        }
    }
    ctx->pc = 0x1FC60Cu;
    // 0x1fc60c: 0x94820bb8  lhu         $v0, 0xBB8($a0)
    ctx->pc = 0x1fc60cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3000)));
label_1fc610:
    // 0x1fc610: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC618u;
}
