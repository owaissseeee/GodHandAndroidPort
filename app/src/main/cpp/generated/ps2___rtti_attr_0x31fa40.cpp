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

// Function: __rtti_attr
// Address: 0x31fa40 - 0x31fa68
void ps2___rtti_attr_0x31fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_attr_0x31fa40");
#endif

    ctx->pc = 0x31fa40u;

    // 0x31fa40: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FA40u;
    {
        const bool branch_taken_0x31fa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA40u;
        // 0x31fa44: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa40) {
            ctx->pc = 0x31FA5Cu;
            goto label_31fa5c;
        }
    }
    ctx->pc = 0x31FA48u;
    // 0x31fa48: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x31fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x31fa4c: 0x244211a8  addiu       $v0, $v0, 0x11A8
    ctx->pc = 0x31fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4520));
    // 0x31fa50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fa54: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x31fa58: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x31fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_31fa5c:
    // 0x31fa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FA64u;
    // 0x31fa64: 0x0  nop
    ctx->pc = 0x31fa64u;
    // NOP
    ctx->pc = 0x31fa68u;
}
