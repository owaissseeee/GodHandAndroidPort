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

// Function: kputchar
// Address: 0x3b0d48 - 0x3b0d80
void kputchar_0x3b0d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputchar_0x3b0d48");
#endif

    switch (ctx->pc) {
        case 0x3b0d50u: goto label_3b0d50;
        default: break;
    }

    ctx->pc = 0x3b0d48u;

    // 0x3b0d48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b0d4c: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x3b0d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_3b0d50:
    // 0x3b0d50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0d54: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3b0d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3b0d58: 0x0  nop
    ctx->pc = 0x3b0d58u;
    // NOP
    // 0x3b0d5c: 0x0  nop
    ctx->pc = 0x3b0d5cu;
    // NOP
    // 0x3b0d60: 0x0  nop
    ctx->pc = 0x3b0d60u;
    // NOP
    // 0x3b0d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B0D64u;
    {
        const bool branch_taken_0x3b0d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0d64) {
            ctx->pc = 0x3B0D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0d50;
        }
    }
    ctx->pc = 0x3B0D6Cu;
    // 0x3b0d6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b0d70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b0d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0d74: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x3b0d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x3b0d78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D78u;
        // 0x3b0d7c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0D80u;
}
