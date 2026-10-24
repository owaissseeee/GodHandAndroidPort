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

// Function: func_00276090
// Address: 0x276090 - 0x2760c0
void func_00276090_0x276090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276090_0x276090");
#endif

    ctx->pc = 0x276090u;

    // 0x276090: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276090u;
    {
        const bool branch_taken_0x276090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x276090) {
            ctx->pc = 0x276094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276090u;
            // 0x276094: 0x8c8316d4  lw          $v1, 0x16D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2760ACu;
            goto label_2760ac;
        }
    }
    ctx->pc = 0x276098u;
    // 0x276098: 0x8c8216d4  lw          $v0, 0x16D4($a0)
    ctx->pc = 0x276098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x27609c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x27609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2760a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2760a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2760A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2760A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760A4u;
        // 0x2760a8: 0xac8216d4  sw          $v0, 0x16D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2760A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2760ACu;
label_2760ac:
    // 0x2760ac: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x2760acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x2760b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2760b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2760b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2760b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2760b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2760B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2760BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760B8u;
        // 0x2760bc: 0xac8316d4  sw          $v1, 0x16D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2760B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2760C0u;
}
