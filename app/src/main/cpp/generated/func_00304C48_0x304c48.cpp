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

// Function: func_00304C48
// Address: 0x304c48 - 0x304d48
void func_00304C48_0x304c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304C48_0x304c48");
#endif

    switch (ctx->pc) {
        case 0x304d2cu: goto label_304d2c;
        case 0x304d34u: goto label_304d34;
        default: break;
    }

    ctx->pc = 0x304c48u;

    // 0x304c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304c50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c5c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x304c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x304c60: 0x904302f4  lbu         $v1, 0x2F4($v0)
    ctx->pc = 0x304c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 756)));
    // 0x304c64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x304C64u;
    {
        const bool branch_taken_0x304c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C64u;
        // 0x304c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c64) {
            ctx->pc = 0x304C70u;
            goto label_304c70;
        }
    }
    ctx->pc = 0x304C6Cu;
    // 0x304c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304c70:
    // 0x304c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304c74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304C74u;
    {
        const bool branch_taken_0x304c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C74u;
        // 0x304c78: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c74) {
            ctx->pc = 0x304C8Cu;
            goto label_304c8c;
        }
    }
    ctx->pc = 0x304C7Cu;
    // 0x304c7c: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x304c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x304c80: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x304c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x304c84: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x304c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x304c88: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x304c88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_304c8c:
    // 0x304c8c: 0x908302f4  lbu         $v1, 0x2F4($a0)
    ctx->pc = 0x304c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x304c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304c94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x304C94u;
    {
        const bool branch_taken_0x304c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x304C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C94u;
        // 0x304c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c94) {
            ctx->pc = 0x304CA0u;
            goto label_304ca0;
        }
    }
    ctx->pc = 0x304C9Cu;
    // 0x304c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304ca0:
    // 0x304ca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304ca4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x304CA4u;
    {
        const bool branch_taken_0x304ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ca4) {
            ctx->pc = 0x304CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304CA4u;
            // 0x304ca8: 0x908302f4  lbu         $v1, 0x2F4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304CC0u;
            goto label_304cc0;
        }
    }
    ctx->pc = 0x304CACu;
    // 0x304cac: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x304cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x304cb0: 0x8e030244  lw          $v1, 0x244($s0)
    ctx->pc = 0x304cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x304cb4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x304cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x304cb8: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x304cb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x304cbc: 0x908302f4  lbu         $v1, 0x2F4($a0)
    ctx->pc = 0x304cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
label_304cc0:
    // 0x304cc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x304cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x304cc4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x304CC4u;
    {
        const bool branch_taken_0x304cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x304CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CC4u;
        // 0x304cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cc4) {
            ctx->pc = 0x304CD0u;
            goto label_304cd0;
        }
    }
    ctx->pc = 0x304CCCu;
    // 0x304ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304cd0:
    // 0x304cd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304cd4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x304CD4u;
    {
        const bool branch_taken_0x304cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304cd4) {
            ctx->pc = 0x304CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304CD4u;
            // 0x304cd8: 0x908302f4  lbu         $v1, 0x2F4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304CF0u;
            goto label_304cf0;
        }
    }
    ctx->pc = 0x304CDCu;
    // 0x304cdc: 0x908202f6  lbu         $v0, 0x2F6($a0)
    ctx->pc = 0x304cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x304ce0: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x304ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x304ce4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x304ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x304ce8: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x304ce8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x304cec: 0x908302f4  lbu         $v1, 0x2F4($a0)
    ctx->pc = 0x304cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
label_304cf0:
    // 0x304cf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x304cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304cf4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x304CF4u;
    {
        const bool branch_taken_0x304cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x304CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CF4u;
        // 0x304cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cf4) {
            ctx->pc = 0x304D00u;
            goto label_304d00;
        }
    }
    ctx->pc = 0x304CFCu;
    // 0x304cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304d00:
    // 0x304d00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304d04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304D04u;
    {
        const bool branch_taken_0x304d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d04) {
            ctx->pc = 0x304D1Cu;
            goto label_304d1c;
        }
    }
    ctx->pc = 0x304D0Cu;
    // 0x304d0c: 0x908202f7  lbu         $v0, 0x2F7($a0)
    ctx->pc = 0x304d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 759)));
    // 0x304d10: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x304d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x304d14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x304d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x304d18: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x304d18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_304d1c:
    // 0x304d1c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304D1Cu;
    {
        const bool branch_taken_0x304d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x304d1c) {
            ctx->pc = 0x304D2Cu;
            goto label_304d2c;
        }
    }
    ctx->pc = 0x304D24u;
    // 0x304d24: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x304D24u;
    SET_GPR_U32(ctx, 31, 0x304D2Cu);
    ctx->pc = 0x304D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D24u;
    // 0x304d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x304D24u, 0x304D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D2Cu;
label_304d2c:
    // 0x304d2c: 0xc0c0a70  jal         func_3029C0
    ctx->pc = 0x304D2Cu;
    SET_GPR_U32(ctx, 31, 0x304D34u);
    ctx->pc = 0x304D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D2Cu;
    // 0x304d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3029C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029C0u, 0x304D2Cu, 0x304D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D34u;
label_304d34:
    // 0x304d34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x304D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D3Cu;
        // 0x304d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304D44u;
    // 0x304d44: 0x0  nop
    ctx->pc = 0x304d44u;
    // NOP
    ctx->pc = 0x304d48u;
}
