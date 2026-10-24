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

// Function: func_0033E618
// Address: 0x33e618 - 0x33e648
void func_0033E618_0x33e618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E618_0x33e618");
#endif

    ctx->pc = 0x33e618u;

    // 0x33e618: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33e618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33e61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e620: 0x2463adb0  addiu       $v1, $v1, -0x5250
    ctx->pc = 0x33e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946224));
    // 0x33e624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EADB0u));
    // 0x33e628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33e62c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e62cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EADB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EADB0u, _value); } while (0);
    // 0x33e630: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33e630u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EADB0u));
    // 0x33e634: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33E634u;
    {
        const bool branch_taken_0x33e634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x33E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E634u;
        // 0x33e638: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e634) {
            ctx->pc = 0x33E640u;
            goto label_33e640;
        }
    }
    ctx->pc = 0x33E63Cu;
    // 0x33e63c: 0xac40ada8  sw          $zero, -0x5258($v0)
    ctx->pc = 0x33e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946216), GPR_U32(ctx, 0));
label_33e640:
    // 0x33e640: 0x3e00008  jr          $ra
    ctx->pc = 0x33E640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E648u;
}
