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

// Function: cCoreSave_getKeyCardNum
// Address: 0x1fa950 - 0x1fa968
void cCoreSave_getKeyCardNum_0x1fa950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getKeyCardNum_0x1fa950");
#endif

    ctx->pc = 0x1fa950u;

    // 0x1fa950: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa954: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA954u;
    {
        const bool branch_taken_0x1fa954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA954u;
        // 0x1fa958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa954) {
            ctx->pc = 0x1FA960u;
            goto label_1fa960;
        }
    }
    ctx->pc = 0x1FA95Cu;
    // 0x1fa95c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1fa95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_1fa960:
    // 0x1fa960: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA968u;
}
