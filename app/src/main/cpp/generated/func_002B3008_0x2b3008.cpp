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

// Function: func_002B3008
// Address: 0x2b3008 - 0x2b3020
void func_002B3008_0x2b3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3008_0x2b3008");
#endif

    ctx->pc = 0x2b3008u;

    // 0x2b3008: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2b3008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b300c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b300cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3010: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x2b3010u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b3014: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3014u;
        // 0x2b3018: 0xa085003c  sb          $a1, 0x3C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B301Cu;
    // 0x2b301c: 0x0  nop
    ctx->pc = 0x2b301cu;
    // NOP
    ctx->pc = 0x2b3020u;
}
