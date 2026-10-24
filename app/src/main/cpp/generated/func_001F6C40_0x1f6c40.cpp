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

// Function: func_001F6C40
// Address: 0x1f6c40 - 0x1f6ce0
void func_001F6C40_0x1f6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6C40_0x1f6c40");
#endif

    ctx->pc = 0x1f6c40u;

    // 0x1f6c40: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6C40u;
    {
        const bool branch_taken_0x1f6c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C40u;
        // 0x1f6c44: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c40) {
            ctx->pc = 0x1F6C88u;
            goto label_1f6c88;
        }
    }
    ctx->pc = 0x1F6C48u;
    // 0x1f6c48: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x1f6c48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x1f6c4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f6c50: 0x8d027a78  lw          $v0, 0x7A78($t0)
    ctx->pc = 0x1f6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x1f6c54: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1f6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1f6c58: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1f6c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6c5c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1f6c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f6c64: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1f6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1f6c68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f6c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f6c6c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1f6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1f6c70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1f6c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1f6c74: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1f6c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1f6c78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f6c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f6c7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f6c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C80u;
        // 0x1f6c84: 0xad027a78  sw          $v0, 0x7A78($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C88u;
label_1f6c88:
    // 0x1f6c88: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x1f6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x1f6c8c: 0x8cc37a78  lw          $v1, 0x7A78($a2)
    ctx->pc = 0x1f6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31352)));
    // 0x1f6c90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f6c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f6c94: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1f6c98: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x1f6c9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f6c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f6ca0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6ca4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f6ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6ca8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1f6ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1f6cac: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1f6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1f6cb0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1f6cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1f6cb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6cb8: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x1f6cbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f6cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6cc0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f6cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f6cc4: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x1f6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x1f6cc8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f6cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f6ccc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6cd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f6cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CD4u;
        // 0x1f6cd8: 0xacc37a78  sw          $v1, 0x7A78($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 31352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6CDCu;
    // 0x1f6cdc: 0x0  nop
    ctx->pc = 0x1f6cdcu;
    // NOP
    ctx->pc = 0x1f6ce0u;
}
