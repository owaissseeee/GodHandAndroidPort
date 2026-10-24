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

// Function: PhaseDispatch_callRowC
// Address: 0x1c9a50 - 0x1c9af0
void PhaseDispatch_callRowC_0x1c9a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PhaseDispatch_callRowC_0x1c9a50");
#endif

    switch (ctx->pc) {
        case 0x1c9a50u: goto label_1c9a50;
        case 0x1c9a54u: goto label_1c9a54;
        case 0x1c9a58u: goto label_1c9a58;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a60u: goto label_1c9a60;
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a68u: goto label_1c9a68;
        case 0x1c9a6cu: goto label_1c9a6c;
        case 0x1c9a70u: goto label_1c9a70;
        case 0x1c9a74u: goto label_1c9a74;
        case 0x1c9a78u: goto label_1c9a78;
        case 0x1c9a7cu: goto label_1c9a7c;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a84u: goto label_1c9a84;
        case 0x1c9a88u: goto label_1c9a88;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9a90u: goto label_1c9a90;
        case 0x1c9a94u: goto label_1c9a94;
        case 0x1c9a98u: goto label_1c9a98;
        case 0x1c9a9cu: goto label_1c9a9c;
        case 0x1c9aa0u: goto label_1c9aa0;
        case 0x1c9aa4u: goto label_1c9aa4;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9aacu: goto label_1c9aac;
        case 0x1c9ab0u: goto label_1c9ab0;
        case 0x1c9ab4u: goto label_1c9ab4;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9abcu: goto label_1c9abc;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ac4u: goto label_1c9ac4;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9accu: goto label_1c9acc;
        case 0x1c9ad0u: goto label_1c9ad0;
        case 0x1c9ad4u: goto label_1c9ad4;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9adcu: goto label_1c9adc;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9ae4u: goto label_1c9ae4;
        case 0x1c9ae8u: goto label_1c9ae8;
        case 0x1c9aecu: goto label_1c9aec;
        default: break;
    }

    ctx->pc = 0x1c9a50u;

label_1c9a50:
    // 0x1c9a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9a54:
    // 0x1c9a54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c9a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a58:
    // 0x1c9a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c9a5c:
    // 0x1c9a5c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c9a60:
    // 0x1c9a60: 0x2447de98  addiu       $a3, $v0, -0x2168
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958744));
label_1c9a64:
    // 0x1c9a64: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c9a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a68:
    // 0x1c9a68: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1c9a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1c9a6c:
    // 0x1c9a6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1c9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c9a70:
    // 0x1c9a70: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1c9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1c9a74:
    // 0x1c9a74: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1c9a74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1c9a78:
    // 0x1c9a78: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1c9a7c:
    if (ctx->pc == 0x1C9A7Cu) {
        ctx->pc = 0x1C9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A78u;
        // 0x1c9a7c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A80u;
        goto label_1c9a80;
    }
    ctx->pc = 0x1C9A78u;
    {
        const bool branch_taken_0x1c9a78 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A78u;
        // 0x1c9a7c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a78) {
            ctx->pc = 0x1C9AA4u;
            goto label_1c9aa4;
        }
    }
    ctx->pc = 0x1C9A80u;
label_1c9a80:
    // 0x1c9a80: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1c9a84:
    // 0x1c9a84: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c9a88:
    // 0x1c9a88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1c9a8c:
    // 0x1c9a8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9a90:
    // 0x1c9a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c9a94:
    // 0x1c9a94: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x1c9a94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1c9a98:
    // 0x1c9a98: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x1c9a98u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_1c9a9c:
    // 0x1c9a9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c9aa0:
    if (ctx->pc == 0x1C9AA0u) {
        ctx->pc = 0x1C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A9Cu;
        // 0x1c9aa0: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AA4u;
        goto label_1c9aa4;
    }
    ctx->pc = 0x1C9A9Cu;
    {
        const bool branch_taken_0x1c9a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A9Cu;
        // 0x1c9aa0: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a9c) {
            ctx->pc = 0x1C9AACu;
            goto label_1c9aac;
        }
    }
    ctx->pc = 0x1C9AA4u;
label_1c9aa4:
    // 0x1c9aa4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1c9aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c9aa8:
    // 0x1c9aa8: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1c9aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1c9aac:
    // 0x1c9aac: 0x2523de98  addiu       $v1, $t1, -0x2168
    ctx->pc = 0x1c9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958744));
label_1c9ab0:
    // 0x1c9ab0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c9ab4:
    // 0x1c9ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c9ab8:
    // 0x1c9ab8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1c9abc:
    if (ctx->pc == 0x1C9ABCu) {
        ctx->pc = 0x1C9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB8u;
        // 0x1c9abc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AC0u;
        goto label_1c9ac0;
    }
    ctx->pc = 0x1C9AB8u;
    {
        const bool branch_taken_0x1c9ab8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB8u;
        // 0x1c9abc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ab8) {
            ctx->pc = 0x1C9AD4u;
            goto label_1c9ad4;
        }
    }
    ctx->pc = 0x1C9AC0u;
label_1c9ac0:
    // 0x1c9ac0: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1c9ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1c9ac4:
    // 0x1c9ac4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c9ac8:
    // 0x1c9ac8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c9acc:
    // 0x1c9acc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c9ad0:
    if (ctx->pc == 0x1C9AD0u) {
        ctx->pc = 0x1C9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ACCu;
        // 0x1c9ad0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AD4u;
        goto label_1c9ad4;
    }
    ctx->pc = 0x1C9ACCu;
    {
        const bool branch_taken_0x1c9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ACCu;
        // 0x1c9ad0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9acc) {
            ctx->pc = 0x1C9AD8u;
            goto label_1c9ad8;
        }
    }
    ctx->pc = 0x1C9AD4u;
label_1c9ad4:
    // 0x1c9ad4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c9ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c9ad8:
    // 0x1c9ad8: 0xe0f809  jalr        $a3
label_1c9adc:
    if (ctx->pc == 0x1C9ADCu) {
        ctx->pc = 0x1C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8u;
        // 0x1c9adc: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AE0u;
        goto label_1c9ae0;
    }
    ctx->pc = 0x1C9AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1C9AE0u);
        ctx->pc = 0x1C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8u;
        // 0x1c9adc: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AD8u, 0x1C9AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9AE0u;
label_1c9ae0:
    // 0x1c9ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9ae4:
    // 0x1c9ae4: 0x3e00008  jr          $ra
label_1c9ae8:
    if (ctx->pc == 0x1C9AE8u) {
        ctx->pc = 0x1C9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AE4u;
        // 0x1c9ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9AECu;
        goto label_1c9aec;
    }
    ctx->pc = 0x1C9AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AE4u;
        // 0x1c9ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AECu;
label_1c9aec:
    // 0x1c9aec: 0x0  nop
    ctx->pc = 0x1c9aecu;
    // NOP
    ctx->pc = 0x1c9af0u;
}
