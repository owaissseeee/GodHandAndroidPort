#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getInitSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLayeri
// Address: 0x7b3a48 - 0x7b3af0
void getInitSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLayeri_0x7b3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getInitSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLayeri_0x7b3a48");
#endif

    switch (ctx->pc) {
        case 0x7b3a78u: goto label_7b3a78;
        case 0x7b3a90u: goto label_7b3a90;
        default: break;
    }

    ctx->pc = 0x7b3a48u;

    // 0x7b3a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b3a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b3a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7b3a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3a50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b3a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b3a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b3a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7b3a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3a5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7b3a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3a60: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b3a64: 0x112e00  sll         $a1, $s1, 24
    ctx->pc = 0x7b3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x7b3a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3a6c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b3a6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b3a70: 0xc1ec172  jal         func_7B05C8
    ctx->pc = 0x7B3A70u;
    SET_GPR_U32(ctx, 31, 0x7B3A78u);
    ctx->pc = 0x7B3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3A70u;
    // 0x7b3a74: 0x248458d8  addiu       $a0, $a0, 0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B05C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B05C8u, 0x7B3A70u, 0x7B3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3A78u;
label_7b3a78:
    // 0x7b3a78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7b3a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3a7c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x7b3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7b3a80: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x7b3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7b3a84: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B3A84u;
    {
        const bool branch_taken_0x7b3a84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3A84u;
        // 0x7b3a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3a84) {
            ctx->pc = 0x7B3AD4u;
            goto label_7b3ad4;
        }
    }
    ctx->pc = 0x7B3A8Cu;
    // 0x7b3a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7b3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7b3a90:
    // 0x7b3a90: 0x80620005  lb          $v0, 0x5($v1)
    ctx->pc = 0x7b3a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x7b3a94: 0x5451000d  bnel        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x7B3A94u;
    {
        const bool branch_taken_0x7b3a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x7b3a94) {
            ctx->pc = 0x7B3A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3A94u;
            // 0x7b3a98: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3ACCu;
            goto label_7b3acc;
        }
    }
    ctx->pc = 0x7B3A9Cu;
    // 0x7b3a9c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x7b3a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x7b3aa0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x7B3AA0u;
    {
        const bool branch_taken_0x7b3aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3aa0) {
            ctx->pc = 0x7B3AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3AA0u;
            // 0x7b3aa4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3ACCu;
            goto label_7b3acc;
        }
    }
    ctx->pc = 0x7B3AA8u;
    // 0x7b3aa8: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x7b3aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7b3aac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3AACu;
    {
        const bool branch_taken_0x7b3aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3aac) {
            ctx->pc = 0x7B3AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3AACu;
            // 0x7b3ab0: 0x84620006  lh          $v0, 0x6($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3AC0u;
            goto label_7b3ac0;
        }
    }
    ctx->pc = 0x7B3AB4u;
    // 0x7b3ab4: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3AB4u;
    {
        const bool branch_taken_0x7b3ab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3ab4) {
            ctx->pc = 0x7B3AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3AB4u;
            // 0x7b3ab8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3ACCu;
            goto label_7b3acc;
        }
    }
    ctx->pc = 0x7B3ABCu;
    // 0x7b3abc: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x7b3abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_7b3ac0:
    // 0x7b3ac0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7B3AC0u;
    {
        const bool branch_taken_0x7b3ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3ac0) {
            ctx->pc = 0x7B3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3AC0u;
            // 0x7b3ac4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3AC8u;
            goto label_7b3ac8;
        }
    }
    ctx->pc = 0x7B3AC8u;
label_7b3ac8:
    // 0x7b3ac8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b3acc:
    // 0x7b3acc: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x7B3ACCu;
    {
        const bool branch_taken_0x7b3acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3ACCu;
        // 0x7b3ad0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3acc) {
            ctx->pc = 0x7B3A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3a90;
        }
    }
    ctx->pc = 0x7B3AD4u;
label_7b3ad4:
    // 0x7b3ad4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b3ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b3ad8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x7b3ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b3adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3AE4u;
        // 0x7b3ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3AECu;
    // 0x7b3aec: 0x0  nop
    ctx->pc = 0x7b3aecu;
    // NOP
    ctx->pc = 0x7b3af0u;
}
} // namespace gh_event
