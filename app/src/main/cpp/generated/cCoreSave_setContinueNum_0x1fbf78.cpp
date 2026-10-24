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

// Function: cCoreSave_setContinueNum
// Address: 0x1fbf78 - 0x1fbf90
void cCoreSave_setContinueNum_0x1fbf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setContinueNum_0x1fbf78");
#endif

    ctx->pc = 0x1fbf78u;

    // 0x1fbf78: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf7c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBF7Cu;
    {
        const bool branch_taken_0x1fbf7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF7Cu;
        // 0x1fbf80: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf7c) {
            ctx->pc = 0x1FBF88u;
            goto label_1fbf88;
        }
    }
    ctx->pc = 0x1FBF84u;
    // 0x1fbf84: 0xa4850012  sh          $a1, 0x12($a0)
    ctx->pc = 0x1fbf84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 5));
label_1fbf88:
    // 0x1fbf88: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF90u;
}
