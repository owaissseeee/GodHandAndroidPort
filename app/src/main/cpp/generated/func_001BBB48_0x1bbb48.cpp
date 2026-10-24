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

// Function: func_001BBB48
// Address: 0x1bbb48 - 0x1bbc08
void func_001BBB48_0x1bbb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBB48_0x1bbb48");
#endif

    switch (ctx->pc) {
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb4cu: goto label_1bbb4c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb54u: goto label_1bbb54;
        case 0x1bbb58u: goto label_1bbb58;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb68u: goto label_1bbb68;
        case 0x1bbb6cu: goto label_1bbb6c;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbb74u: goto label_1bbb74;
        case 0x1bbb78u: goto label_1bbb78;
        case 0x1bbb7cu: goto label_1bbb7c;
        case 0x1bbb80u: goto label_1bbb80;
        case 0x1bbb84u: goto label_1bbb84;
        case 0x1bbb88u: goto label_1bbb88;
        case 0x1bbb8cu: goto label_1bbb8c;
        case 0x1bbb90u: goto label_1bbb90;
        case 0x1bbb94u: goto label_1bbb94;
        case 0x1bbb98u: goto label_1bbb98;
        case 0x1bbb9cu: goto label_1bbb9c;
        case 0x1bbba0u: goto label_1bbba0;
        case 0x1bbba4u: goto label_1bbba4;
        case 0x1bbba8u: goto label_1bbba8;
        case 0x1bbbacu: goto label_1bbbac;
        case 0x1bbbb0u: goto label_1bbbb0;
        case 0x1bbbb4u: goto label_1bbbb4;
        case 0x1bbbb8u: goto label_1bbbb8;
        case 0x1bbbbcu: goto label_1bbbbc;
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc4u: goto label_1bbbc4;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbccu: goto label_1bbbcc;
        case 0x1bbbd0u: goto label_1bbbd0;
        case 0x1bbbd4u: goto label_1bbbd4;
        case 0x1bbbd8u: goto label_1bbbd8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbbe0u: goto label_1bbbe0;
        case 0x1bbbe4u: goto label_1bbbe4;
        case 0x1bbbe8u: goto label_1bbbe8;
        case 0x1bbbecu: goto label_1bbbec;
        case 0x1bbbf0u: goto label_1bbbf0;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbbf8u: goto label_1bbbf8;
        case 0x1bbbfcu: goto label_1bbbfc;
        case 0x1bbc00u: goto label_1bbc00;
        case 0x1bbc04u: goto label_1bbc04;
        default: break;
    }

    ctx->pc = 0x1bbb48u;

label_1bbb48:
    // 0x1bbb48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bbb4c:
    // 0x1bbb4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bbb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bbb50:
    // 0x1bbb50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bbb54:
    // 0x1bbb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bbb58:
    // 0x1bbb58: 0xc06ddac  jal         func_1B76B0
label_1bbb5c:
    if (ctx->pc == 0x1BBB5Cu) {
        ctx->pc = 0x1BBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB58u;
        // 0x1bbb5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB60u;
        goto label_1bbb60;
    }
    ctx->pc = 0x1BBB58u;
    SET_GPR_U32(ctx, 31, 0x1BBB60u);
    ctx->pc = 0x1BBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB58u;
    // 0x1bbb5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BBB58u, 0x1BBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB60u;
label_1bbb60:
    // 0x1bbb60: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1bbb64:
    if (ctx->pc == 0x1BBB64u) {
        ctx->pc = 0x1BBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB60u;
        // 0x1bbb64: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB68u;
        goto label_1bbb68;
    }
    ctx->pc = 0x1BBB60u;
    {
        const bool branch_taken_0x1bbb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB60u;
        // 0x1bbb64: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb60) {
            ctx->pc = 0x1BBBF0u;
            goto label_1bbbf0;
        }
    }
    ctx->pc = 0x1BBB68u;
label_1bbb68:
    // 0x1bbb68: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1bbb68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bbb6c:
    // 0x1bbb6c: 0x2446ddb8  addiu       $a2, $v0, -0x2248
    ctx->pc = 0x1bbb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958520));
label_1bbb70:
    // 0x1bbb70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bbb70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bbb74:
    // 0x1bbb74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bbb78:
    // 0x1bbb78: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bbb7c:
    // 0x1bbb7c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1bbb7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bbb80:
    // 0x1bbb80: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1bbb84:
    if (ctx->pc == 0x1BBB84u) {
        ctx->pc = 0x1BBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB80u;
        // 0x1bbb84: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB88u;
        goto label_1bbb88;
    }
    ctx->pc = 0x1BBB80u;
    {
        const bool branch_taken_0x1bbb80 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB80u;
        // 0x1bbb84: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb80) {
            ctx->pc = 0x1BBBACu;
            goto label_1bbbac;
        }
    }
    ctx->pc = 0x1BBB88u;
label_1bbb88:
    // 0x1bbb88: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1bbb88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bbb8c:
    // 0x1bbb8c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1bbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bbb90:
    // 0x1bbb90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bbb94:
    // 0x1bbb94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bbb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bbb98:
    // 0x1bbb98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bbb9c:
    // 0x1bbb9c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1bbb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1bbba0:
    // 0x1bbba0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1bbba0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1bbba4:
    // 0x1bbba4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bbba8:
    if (ctx->pc == 0x1BBBA8u) {
        ctx->pc = 0x1BBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBA4u;
        // 0x1bbba8: 0x2503ddb8  addiu       $v1, $t0, -0x2248 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBACu;
        goto label_1bbbac;
    }
    ctx->pc = 0x1BBBA4u;
    {
        const bool branch_taken_0x1bbba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBA4u;
        // 0x1bbba8: 0x2503ddb8  addiu       $v1, $t0, -0x2248 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbba4) {
            ctx->pc = 0x1BBBB8u;
            goto label_1bbbb8;
        }
    }
    ctx->pc = 0x1BBBACu;
label_1bbbac:
    // 0x1bbbac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1bbbb0:
    // 0x1bbbb0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bbbb4:
    // 0x1bbbb4: 0x2503ddb8  addiu       $v1, $t0, -0x2248
    ctx->pc = 0x1bbbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958520));
label_1bbbb8:
    // 0x1bbbb8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1bbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1bbbbc:
    // 0x1bbbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bbbc0:
    // 0x1bbbc0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1bbbc4:
    if (ctx->pc == 0x1BBBC4u) {
        ctx->pc = 0x1BBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBC0u;
        // 0x1bbbc4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBC8u;
        goto label_1bbbc8;
    }
    ctx->pc = 0x1BBBC0u;
    {
        const bool branch_taken_0x1bbbc0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBC0u;
        // 0x1bbbc4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbc0) {
            ctx->pc = 0x1BBBDCu;
            goto label_1bbbdc;
        }
    }
    ctx->pc = 0x1BBBC8u;
label_1bbbc8:
    // 0x1bbbc8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1bbbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1bbbcc:
    // 0x1bbbcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bbbd0:
    // 0x1bbbd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bbbd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bbbd4:
    // 0x1bbbd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bbbd8:
    if (ctx->pc == 0x1BBBD8u) {
        ctx->pc = 0x1BBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBD4u;
        // 0x1bbbd8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBDCu;
        goto label_1bbbdc;
    }
    ctx->pc = 0x1BBBD4u;
    {
        const bool branch_taken_0x1bbbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBD4u;
        // 0x1bbbd8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbd4) {
            ctx->pc = 0x1BBBE0u;
            goto label_1bbbe0;
        }
    }
    ctx->pc = 0x1BBBDCu;
label_1bbbdc:
    // 0x1bbbdc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bbbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bbbe0:
    // 0x1bbbe0: 0xc0f809  jalr        $a2
label_1bbbe4:
    if (ctx->pc == 0x1BBBE4u) {
        ctx->pc = 0x1BBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBE0u;
        // 0x1bbbe4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBE8u;
        goto label_1bbbe8;
    }
    ctx->pc = 0x1BBBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BBBE8u);
        ctx->pc = 0x1BBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBE0u;
        // 0x1bbbe4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBE0u, 0x1BBBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBBE8u;
label_1bbbe8:
    // 0x1bbbe8: 0xc06ddb6  jal         func_1B76D8
label_1bbbec:
    if (ctx->pc == 0x1BBBECu) {
        ctx->pc = 0x1BBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBE8u;
        // 0x1bbbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBF0u;
        goto label_1bbbf0;
    }
    ctx->pc = 0x1BBBE8u;
    SET_GPR_U32(ctx, 31, 0x1BBBF0u);
    ctx->pc = 0x1BBBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBE8u;
    // 0x1bbbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BBBE8u, 0x1BBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBF0u;
label_1bbbf0:
    // 0x1bbbf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbbf4:
    // 0x1bbbf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbbf8:
    // 0x1bbbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbbfc:
    // 0x1bbbfc: 0x3e00008  jr          $ra
label_1bbc00:
    if (ctx->pc == 0x1BBC00u) {
        ctx->pc = 0x1BBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBFCu;
        // 0x1bbc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC04u;
        goto label_1bbc04;
    }
    ctx->pc = 0x1BBBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBFCu;
        // 0x1bbc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC04u;
label_1bbc04:
    // 0x1bbc04: 0x0  nop
    ctx->pc = 0x1bbc04u;
    // NOP
    ctx->pc = 0x1bbc08u;
}
