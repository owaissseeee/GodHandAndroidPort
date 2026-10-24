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

// Function: cCoreSave_setStateBit0
// Address: 0x1fc6e8 - 0x1fc708
void cCoreSave_setStateBit0_0x1fc6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setStateBit0_0x1fc6e8");
#endif

    ctx->pc = 0x1fc6e8u;

    // 0x1fc6e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc6ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC6ECu;
    {
        const bool branch_taken_0x1fc6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6ec) {
            ctx->pc = 0x1FC700u;
            goto label_1fc700;
        }
    }
    ctx->pc = 0x1FC6F4u;
    // 0x1fc6f4: 0x94820bba  lhu         $v0, 0xBBA($a0)
    ctx->pc = 0x1fc6f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3002)));
    // 0x1fc6f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fc6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fc6fc: 0xa4820bba  sh          $v0, 0xBBA($a0)
    ctx->pc = 0x1fc6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3002), (uint16_t)GPR_U32(ctx, 2));
label_1fc700:
    // 0x1fc700: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC708u;
}
