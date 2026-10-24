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

// Function: cEm00_ckBananaDance
// Address: 0x275650 - 0x275668
void cEm00_ckBananaDance_0x275650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_ckBananaDance_0x275650");
#endif

    ctx->pc = 0x275650u;

    // 0x275650: 0x8c8216d4  lw          $v0, 0x16D4($a0)
    ctx->pc = 0x275650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x275654: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x275654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x275658: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x275658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27565c: 0x3e00008  jr          $ra
    ctx->pc = 0x27565Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27565Cu;
        // 0x275660: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27565Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275664u;
    // 0x275664: 0x0  nop
    ctx->pc = 0x275664u;
    // NOP
    ctx->pc = 0x275668u;
}
