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

// Function: func_0036C080
// Address: 0x36c080 - 0x36c0a8
void func_0036C080_0x36c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C080_0x36c080");
#endif

    ctx->pc = 0x36c080u;

    // 0x36c080: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x36c080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x36c084: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x36c084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x36c088: 0x8c626d38  lw          $v0, 0x6D38($v1)
    ctx->pc = 0x36c088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x766D38u));
    // 0x36c08c: 0x24421100  addiu       $v0, $v0, 0x1100
    ctx->pc = 0x36c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x36c090: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x36c090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x36c094: 0x8ca31abc  lw          $v1, 0x1ABC($a1)
    ctx->pc = 0x36c094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F1ABCu));
    // 0x36c098: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x36c098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
    // 0x36c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C09Cu;
        // 0x36c0a0: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C0A4u;
    // 0x36c0a4: 0x0  nop
    ctx->pc = 0x36c0a4u;
    // NOP
    ctx->pc = 0x36c0a8u;
}
