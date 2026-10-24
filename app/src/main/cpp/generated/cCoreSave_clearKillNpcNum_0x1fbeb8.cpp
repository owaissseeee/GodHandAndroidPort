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

// Function: cCoreSave_clearKillNpcNum
// Address: 0x1fbeb8 - 0x1fbed0
void cCoreSave_clearKillNpcNum_0x1fbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearKillNpcNum_0x1fbeb8");
#endif

    ctx->pc = 0x1fbeb8u;

    // 0x1fbeb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbebc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FBEBCu;
    {
        const bool branch_taken_0x1fbebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbebc) {
            ctx->pc = 0x1FBEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBEBCu;
            // 0x1fbec0: 0xa4800096  sh          $zero, 0x96($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 150), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBEC4u;
            goto label_1fbec4;
        }
    }
    ctx->pc = 0x1FBEC4u;
label_1fbec4:
    // 0x1fbec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBECCu;
    // 0x1fbecc: 0x0  nop
    ctx->pc = 0x1fbeccu;
    // NOP
    ctx->pc = 0x1fbed0u;
}
