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

// Function: cCoreSave_clearStateBit0
// Address: 0x1fc6c8 - 0x1fc6e8
void cCoreSave_clearStateBit0_0x1fc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearStateBit0_0x1fc6c8");
#endif

    ctx->pc = 0x1fc6c8u;

    // 0x1fc6c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc6cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC6CCu;
    {
        const bool branch_taken_0x1fc6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6cc) {
            ctx->pc = 0x1FC6E0u;
            goto label_1fc6e0;
        }
    }
    ctx->pc = 0x1FC6D4u;
    // 0x1fc6d4: 0x94820bba  lhu         $v0, 0xBBA($a0)
    ctx->pc = 0x1fc6d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3002)));
    // 0x1fc6d8: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x1fc6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x1fc6dc: 0xa4820bba  sh          $v0, 0xBBA($a0)
    ctx->pc = 0x1fc6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3002), (uint16_t)GPR_U32(ctx, 2));
label_1fc6e0:
    // 0x1fc6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC6E8u;
}
