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

// Function: func_002E6AF8
// Address: 0x2e6af8 - 0x2e6b88
void func_002E6AF8_0x2e6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E6AF8_0x2e6af8");
#endif

    ctx->pc = 0x2e6af8u;

    // 0x2e6af8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e6af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6afc: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x2e6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x2e6b00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E6B00u;
    {
        const bool branch_taken_0x2e6b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b00) {
            ctx->pc = 0x2E6B7Cu;
            goto label_2e6b7c;
        }
    }
    ctx->pc = 0x2E6B08u;
    // 0x2e6b08: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2e6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e6b0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e6b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e6b10: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6B10u;
    {
        const bool branch_taken_0x2e6b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b10) {
            ctx->pc = 0x2E6B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6B10u;
            // 0x2e6b14: 0x8ca402b0  lw          $a0, 0x2B0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6B2Cu;
            goto label_2e6b2c;
        }
    }
    ctx->pc = 0x2E6B18u;
    // 0x2e6b18: 0x8ca302b0  lw          $v1, 0x2B0($a1)
    ctx->pc = 0x2e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
    // 0x2e6b1c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2e6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2e6b20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e6b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e6b24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6B24u;
    {
        const bool branch_taken_0x2e6b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B24u;
        // 0x2e6b28: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b24) {
            ctx->pc = 0x2E6B40u;
            goto label_2e6b40;
        }
    }
    ctx->pc = 0x2E6B2Cu;
label_2e6b2c:
    // 0x2e6b2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6b30: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x2e6b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x2e6b34: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2e6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2e6b38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e6b3c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x2e6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_2e6b40:
    // 0x2e6b40: 0x8ca30114  lw          $v1, 0x114($a1)
    ctx->pc = 0x2e6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x2e6b44: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2e6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2e6b48: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2e6b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2e6b4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6B4Cu;
    {
        const bool branch_taken_0x2e6b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b4c) {
            ctx->pc = 0x2E6B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6B4Cu;
            // 0x2e6b50: 0x8ca402b0  lw          $a0, 0x2B0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6B68u;
            goto label_2e6b68;
        }
    }
    ctx->pc = 0x2E6B54u;
    // 0x2e6b54: 0x8ca302b0  lw          $v1, 0x2B0($a1)
    ctx->pc = 0x2e6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
    // 0x2e6b58: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2e6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2e6b5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e6b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e6b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B60u;
        // 0x2e6b64: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6B68u;
label_2e6b68:
    // 0x2e6b68: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e6b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6b6c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2e6b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2e6b70: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2e6b74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e6b78: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x2e6b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_2e6b7c:
    // 0x2e6b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6B84u;
    // 0x2e6b84: 0x0  nop
    ctx->pc = 0x2e6b84u;
    // NOP
    ctx->pc = 0x2e6b88u;
}
