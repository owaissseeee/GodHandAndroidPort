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

// Function: func_00182A18
// Address: 0x182a18 - 0x182ae0
void func_00182A18_0x182a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182A18_0x182a18");
#endif

    switch (ctx->pc) {
        case 0x182a18u: goto label_182a18;
        case 0x182a1cu: goto label_182a1c;
        case 0x182a20u: goto label_182a20;
        case 0x182a24u: goto label_182a24;
        case 0x182a28u: goto label_182a28;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a30u: goto label_182a30;
        case 0x182a34u: goto label_182a34;
        case 0x182a38u: goto label_182a38;
        case 0x182a3cu: goto label_182a3c;
        case 0x182a40u: goto label_182a40;
        case 0x182a44u: goto label_182a44;
        case 0x182a48u: goto label_182a48;
        case 0x182a4cu: goto label_182a4c;
        case 0x182a50u: goto label_182a50;
        case 0x182a54u: goto label_182a54;
        case 0x182a58u: goto label_182a58;
        case 0x182a5cu: goto label_182a5c;
        case 0x182a60u: goto label_182a60;
        case 0x182a64u: goto label_182a64;
        case 0x182a68u: goto label_182a68;
        case 0x182a6cu: goto label_182a6c;
        case 0x182a70u: goto label_182a70;
        case 0x182a74u: goto label_182a74;
        case 0x182a78u: goto label_182a78;
        case 0x182a7cu: goto label_182a7c;
        case 0x182a80u: goto label_182a80;
        case 0x182a84u: goto label_182a84;
        case 0x182a88u: goto label_182a88;
        case 0x182a8cu: goto label_182a8c;
        case 0x182a90u: goto label_182a90;
        case 0x182a94u: goto label_182a94;
        case 0x182a98u: goto label_182a98;
        case 0x182a9cu: goto label_182a9c;
        case 0x182aa0u: goto label_182aa0;
        case 0x182aa4u: goto label_182aa4;
        case 0x182aa8u: goto label_182aa8;
        case 0x182aacu: goto label_182aac;
        case 0x182ab0u: goto label_182ab0;
        case 0x182ab4u: goto label_182ab4;
        case 0x182ab8u: goto label_182ab8;
        case 0x182abcu: goto label_182abc;
        case 0x182ac0u: goto label_182ac0;
        case 0x182ac4u: goto label_182ac4;
        case 0x182ac8u: goto label_182ac8;
        case 0x182accu: goto label_182acc;
        case 0x182ad0u: goto label_182ad0;
        case 0x182ad4u: goto label_182ad4;
        case 0x182ad8u: goto label_182ad8;
        case 0x182adcu: goto label_182adc;
        default: break;
    }

    ctx->pc = 0x182a18u;

label_182a18:
    // 0x182a18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_182a1c:
    // 0x182a1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x182a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_182a20:
    // 0x182a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_182a24:
    // 0x182a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182a28:
    // 0x182a28: 0xc06ddac  jal         func_1B76B0
label_182a2c:
    if (ctx->pc == 0x182A2Cu) {
        ctx->pc = 0x182A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A28u;
        // 0x182a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A30u;
        goto label_182a30;
    }
    ctx->pc = 0x182A28u;
    SET_GPR_U32(ctx, 31, 0x182A30u);
    ctx->pc = 0x182A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A28u;
    // 0x182a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x182A28u, 0x182A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A30u;
label_182a30:
    // 0x182a30: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_182a34:
    if (ctx->pc == 0x182A34u) {
        ctx->pc = 0x182A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A30u;
        // 0x182a34: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A38u;
        goto label_182a38;
    }
    ctx->pc = 0x182A30u;
    {
        const bool branch_taken_0x182a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A30u;
        // 0x182a34: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a30) {
            ctx->pc = 0x182ACCu;
            goto label_182acc;
        }
    }
    ctx->pc = 0x182A38u;
label_182a38:
    // 0x182a38: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x182a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_182a3c:
    // 0x182a3c: 0x2446db20  addiu       $a2, $v0, -0x24E0
    ctx->pc = 0x182a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957856));
label_182a40:
    // 0x182a40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x182a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182a44:
    // 0x182a44: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_182a48:
    // 0x182a48: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_182a4c:
    // 0x182a4c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x182a4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_182a50:
    // 0x182a50: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_182a54:
    if (ctx->pc == 0x182A54u) {
        ctx->pc = 0x182A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A50u;
        // 0x182a54: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A58u;
        goto label_182a58;
    }
    ctx->pc = 0x182A50u;
    {
        const bool branch_taken_0x182a50 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x182A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A50u;
        // 0x182a54: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a50) {
            ctx->pc = 0x182A7Cu;
            goto label_182a7c;
        }
    }
    ctx->pc = 0x182A58u;
label_182a58:
    // 0x182a58: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_182a5c:
    // 0x182a5c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x182a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_182a60:
    // 0x182a60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_182a64:
    // 0x182a64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_182a68:
    // 0x182a68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_182a6c:
    // 0x182a6c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x182a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_182a70:
    // 0x182a70: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x182a70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_182a74:
    // 0x182a74: 0x10000004  b           . + 4 + (0x4 << 2)
label_182a78:
    if (ctx->pc == 0x182A78u) {
        ctx->pc = 0x182A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A74u;
        // 0x182a78: 0x2503db20  addiu       $v1, $t0, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A7Cu;
        goto label_182a7c;
    }
    ctx->pc = 0x182A74u;
    {
        const bool branch_taken_0x182a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A74u;
        // 0x182a78: 0x2503db20  addiu       $v1, $t0, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a74) {
            ctx->pc = 0x182A88u;
            goto label_182a88;
        }
    }
    ctx->pc = 0x182A7Cu;
label_182a7c:
    // 0x182a7c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_182a80:
    // 0x182a80: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x182a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_182a84:
    // 0x182a84: 0x2503db20  addiu       $v1, $t0, -0x24E0
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957856));
label_182a88:
    // 0x182a88: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_182a8c:
    // 0x182a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_182a90:
    // 0x182a90: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_182a94:
    if (ctx->pc == 0x182A94u) {
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A98u;
        goto label_182a98;
    }
    ctx->pc = 0x182A90u;
    {
        const bool branch_taken_0x182a90 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a90) {
            ctx->pc = 0x182AACu;
            goto label_182aac;
        }
    }
    ctx->pc = 0x182A98u;
label_182a98:
    // 0x182a98: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_182a9c:
    // 0x182a9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_182aa0:
    // 0x182aa0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_182aa4:
    // 0x182aa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_182aa8:
    if (ctx->pc == 0x182AA8u) {
        ctx->pc = 0x182AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AA4u;
        // 0x182aa8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AACu;
        goto label_182aac;
    }
    ctx->pc = 0x182AA4u;
    {
        const bool branch_taken_0x182aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AA4u;
        // 0x182aa8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182aa4) {
            ctx->pc = 0x182AB0u;
            goto label_182ab0;
        }
    }
    ctx->pc = 0x182AACu;
label_182aac:
    // 0x182aac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x182aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_182ab0:
    // 0x182ab0: 0xc0f809  jalr        $a2
label_182ab4:
    if (ctx->pc == 0x182AB4u) {
        ctx->pc = 0x182AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AB0u;
        // 0x182ab4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AB8u;
        goto label_182ab8;
    }
    ctx->pc = 0x182AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x182AB8u);
        ctx->pc = 0x182AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AB0u;
        // 0x182ab4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182AB0u, 0x182AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182AB8u;
label_182ab8:
    // 0x182ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182abc:
    // 0x182abc: 0xc0aa1fa  jal         func_2A87E8
label_182ac0:
    if (ctx->pc == 0x182AC0u) {
        ctx->pc = 0x182AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182ABCu;
        // 0x182ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AC4u;
        goto label_182ac4;
    }
    ctx->pc = 0x182ABCu;
    SET_GPR_U32(ctx, 31, 0x182AC4u);
    ctx->pc = 0x182AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182ABCu;
    // 0x182ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x182ABCu, 0x182AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AC4u;
label_182ac4:
    // 0x182ac4: 0xc06ddb6  jal         func_1B76D8
label_182ac8:
    if (ctx->pc == 0x182AC8u) {
        ctx->pc = 0x182AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC4u;
        // 0x182ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182ACCu;
        goto label_182acc;
    }
    ctx->pc = 0x182AC4u;
    SET_GPR_U32(ctx, 31, 0x182ACCu);
    ctx->pc = 0x182AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182AC4u;
    // 0x182ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x182AC4u, 0x182ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182ACCu;
label_182acc:
    // 0x182acc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182ad0:
    // 0x182ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182ad4:
    // 0x182ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182ad8:
    // 0x182ad8: 0x3e00008  jr          $ra
label_182adc:
    if (ctx->pc == 0x182ADCu) {
        ctx->pc = 0x182ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AD8u;
        // 0x182adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AE0u;
        goto label_fallthrough_0x182ad8;
    }
    ctx->pc = 0x182AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AD8u;
        // 0x182adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x182ad8:
    ctx->pc = 0x182AE0u;
}
