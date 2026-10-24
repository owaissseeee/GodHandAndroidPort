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

// Function: func_001F6B78
// Address: 0x1f6b78 - 0x1f6c40
void func_001F6B78_0x1f6b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6B78_0x1f6b78");
#endif

    ctx->pc = 0x1f6b78u;

    // 0x1f6b78: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F6B78u;
    {
        const bool branch_taken_0x1f6b78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B78u;
        // 0x1f6b7c: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b78) {
            ctx->pc = 0x1F6BD0u;
            goto label_1f6bd0;
        }
    }
    ctx->pc = 0x1F6B80u;
    // 0x1f6b80: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x1f6b80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x1f6b84: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1f6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1f6b88: 0x8d227a80  lw          $v0, 0x7A80($t1)
    ctx->pc = 0x1f6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x1f6b8c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1f6b90: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1f6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1f6b94: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1f6b94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1f6b98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f6b9c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1f6ba0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f6ba4: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1f6ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6ba8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f6ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f6bac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6bb0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1f6bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1f6bb4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1f6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1f6bb8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1f6bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1f6bbc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1f6bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1f6bc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f6bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f6bc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f6bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BC8u;
        // 0x1f6bcc: 0xad227a80  sw          $v0, 0x7A80($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 31360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6BD0u;
label_1f6bd0:
    // 0x1f6bd0: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x1f6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x1f6bd4: 0x8cc27a80  lw          $v0, 0x7A80($a2)
    ctx->pc = 0x1f6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31360)));
    // 0x1f6bd8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f6bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f6bdc: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x1f6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x1f6be0: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x1f6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x1f6be4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f6be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f6be8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6bf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1f6bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1f6bf4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1f6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1f6bf8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1f6bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1f6bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6c00: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x1f6c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x1f6c04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6c08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f6c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f6c0c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1f6c10: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f6c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f6c14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6c18: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x1f6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x1f6c1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6c20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f6c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f6c24: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1f6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1f6c28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f6c2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6c30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C34u;
        // 0x1f6c38: 0xacc27a80  sw          $v0, 0x7A80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 31360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C3Cu;
    // 0x1f6c3c: 0x0  nop
    ctx->pc = 0x1f6c3cu;
    // NOP
    ctx->pc = 0x1f6c40u;
}
