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

// Function: __rtti_class
// Address: 0x31ee80 - 0x31eea8
void ps2___rtti_class_0x31ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_class_0x31ee80");
#endif

    ctx->pc = 0x31ee80u;

    // 0x31ee80: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EE80u;
    {
        const bool branch_taken_0x31ee80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE80u;
        // 0x31ee84: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee80) {
            ctx->pc = 0x31EE9Cu;
            goto label_31ee9c;
        }
    }
    ctx->pc = 0x31EE88u;
    // 0x31ee88: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x31ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x31ee8c: 0x24420fc0  addiu       $v0, $v0, 0xFC0
    ctx->pc = 0x31ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
    // 0x31ee90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31ee94: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x31ee98: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x31ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_31ee9c:
    // 0x31ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EEA4u;
    // 0x31eea4: 0x0  nop
    ctx->pc = 0x31eea4u;
    // NOP
    ctx->pc = 0x31eea8u;
}
