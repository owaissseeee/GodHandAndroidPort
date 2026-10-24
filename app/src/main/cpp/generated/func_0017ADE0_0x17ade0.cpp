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

// Function: func_0017ADE0
// Address: 0x17ade0 - 0x17aea0
void func_0017ADE0_0x17ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017ADE0_0x17ade0");
#endif

    switch (ctx->pc) {
        case 0x17ade0u: goto label_17ade0;
        case 0x17ade4u: goto label_17ade4;
        case 0x17ade8u: goto label_17ade8;
        case 0x17adecu: goto label_17adec;
        case 0x17adf0u: goto label_17adf0;
        case 0x17adf4u: goto label_17adf4;
        case 0x17adf8u: goto label_17adf8;
        case 0x17adfcu: goto label_17adfc;
        case 0x17ae00u: goto label_17ae00;
        case 0x17ae04u: goto label_17ae04;
        case 0x17ae08u: goto label_17ae08;
        case 0x17ae0cu: goto label_17ae0c;
        case 0x17ae10u: goto label_17ae10;
        case 0x17ae14u: goto label_17ae14;
        case 0x17ae18u: goto label_17ae18;
        case 0x17ae1cu: goto label_17ae1c;
        case 0x17ae20u: goto label_17ae20;
        case 0x17ae24u: goto label_17ae24;
        case 0x17ae28u: goto label_17ae28;
        case 0x17ae2cu: goto label_17ae2c;
        case 0x17ae30u: goto label_17ae30;
        case 0x17ae34u: goto label_17ae34;
        case 0x17ae38u: goto label_17ae38;
        case 0x17ae3cu: goto label_17ae3c;
        case 0x17ae40u: goto label_17ae40;
        case 0x17ae44u: goto label_17ae44;
        case 0x17ae48u: goto label_17ae48;
        case 0x17ae4cu: goto label_17ae4c;
        case 0x17ae50u: goto label_17ae50;
        case 0x17ae54u: goto label_17ae54;
        case 0x17ae58u: goto label_17ae58;
        case 0x17ae5cu: goto label_17ae5c;
        case 0x17ae60u: goto label_17ae60;
        case 0x17ae64u: goto label_17ae64;
        case 0x17ae68u: goto label_17ae68;
        case 0x17ae6cu: goto label_17ae6c;
        case 0x17ae70u: goto label_17ae70;
        case 0x17ae74u: goto label_17ae74;
        case 0x17ae78u: goto label_17ae78;
        case 0x17ae7cu: goto label_17ae7c;
        case 0x17ae80u: goto label_17ae80;
        case 0x17ae84u: goto label_17ae84;
        case 0x17ae88u: goto label_17ae88;
        case 0x17ae8cu: goto label_17ae8c;
        case 0x17ae90u: goto label_17ae90;
        case 0x17ae94u: goto label_17ae94;
        case 0x17ae98u: goto label_17ae98;
        case 0x17ae9cu: goto label_17ae9c;
        default: break;
    }

    ctx->pc = 0x17ade0u;

label_17ade0:
    // 0x17ade0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ade4:
    // 0x17ade4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17ade8:
    // 0x17ade8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17adec:
    // 0x17adec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17adf0:
    // 0x17adf0: 0xc06ddac  jal         func_1B76B0
label_17adf4:
    if (ctx->pc == 0x17ADF4u) {
        ctx->pc = 0x17ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADF0u;
        // 0x17adf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ADF8u;
        goto label_17adf8;
    }
    ctx->pc = 0x17ADF0u;
    SET_GPR_U32(ctx, 31, 0x17ADF8u);
    ctx->pc = 0x17ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADF0u;
    // 0x17adf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17ADF0u, 0x17ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADF8u;
label_17adf8:
    // 0x17adf8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_17adfc:
    if (ctx->pc == 0x17ADFCu) {
        ctx->pc = 0x17ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADF8u;
        // 0x17adfc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE00u;
        goto label_17ae00;
    }
    ctx->pc = 0x17ADF8u;
    {
        const bool branch_taken_0x17adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADF8u;
        // 0x17adfc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adf8) {
            ctx->pc = 0x17AE88u;
            goto label_17ae88;
        }
    }
    ctx->pc = 0x17AE00u;
label_17ae00:
    // 0x17ae00: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17ae00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17ae04:
    // 0x17ae04: 0x2446da20  addiu       $a2, $v0, -0x25E0
    ctx->pc = 0x17ae04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_17ae08:
    // 0x17ae08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17ae08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ae0c:
    // 0x17ae0c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17ae10:
    // 0x17ae10: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17ae14:
    // 0x17ae14: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17ae14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ae18:
    // 0x17ae18: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17ae1c:
    if (ctx->pc == 0x17AE1Cu) {
        ctx->pc = 0x17AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE18u;
        // 0x17ae1c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE20u;
        goto label_17ae20;
    }
    ctx->pc = 0x17AE18u;
    {
        const bool branch_taken_0x17ae18 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE18u;
        // 0x17ae1c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae18) {
            ctx->pc = 0x17AE44u;
            goto label_17ae44;
        }
    }
    ctx->pc = 0x17AE20u;
label_17ae20:
    // 0x17ae20: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17ae20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17ae24:
    // 0x17ae24: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17ae28:
    // 0x17ae28: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17ae2c:
    // 0x17ae2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ae30:
    // 0x17ae30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ae34:
    // 0x17ae34: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17ae34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17ae38:
    // 0x17ae38: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17ae38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17ae3c:
    // 0x17ae3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17ae40:
    if (ctx->pc == 0x17AE40u) {
        ctx->pc = 0x17AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE3Cu;
        // 0x17ae40: 0x2503da20  addiu       $v1, $t0, -0x25E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE44u;
        goto label_17ae44;
    }
    ctx->pc = 0x17AE3Cu;
    {
        const bool branch_taken_0x17ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE3Cu;
        // 0x17ae40: 0x2503da20  addiu       $v1, $t0, -0x25E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae3c) {
            ctx->pc = 0x17AE50u;
            goto label_17ae50;
        }
    }
    ctx->pc = 0x17AE44u;
label_17ae44:
    // 0x17ae44: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17ae48:
    // 0x17ae48: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17ae4c:
    // 0x17ae4c: 0x2503da20  addiu       $v1, $t0, -0x25E0
    ctx->pc = 0x17ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957600));
label_17ae50:
    // 0x17ae50: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17ae54:
    // 0x17ae54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ae58:
    // 0x17ae58: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17ae5c:
    if (ctx->pc == 0x17AE5Cu) {
        ctx->pc = 0x17AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE58u;
        // 0x17ae5c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE60u;
        goto label_17ae60;
    }
    ctx->pc = 0x17AE58u;
    {
        const bool branch_taken_0x17ae58 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE58u;
        // 0x17ae5c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae58) {
            ctx->pc = 0x17AE74u;
            goto label_17ae74;
        }
    }
    ctx->pc = 0x17AE60u;
label_17ae60:
    // 0x17ae60: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17ae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17ae64:
    // 0x17ae64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17ae68:
    // 0x17ae68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17ae68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17ae6c:
    // 0x17ae6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17ae70:
    if (ctx->pc == 0x17AE70u) {
        ctx->pc = 0x17AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE6Cu;
        // 0x17ae70: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE74u;
        goto label_17ae74;
    }
    ctx->pc = 0x17AE6Cu;
    {
        const bool branch_taken_0x17ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE6Cu;
        // 0x17ae70: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae6c) {
            ctx->pc = 0x17AE78u;
            goto label_17ae78;
        }
    }
    ctx->pc = 0x17AE74u;
label_17ae74:
    // 0x17ae74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17ae78:
    // 0x17ae78: 0xc0f809  jalr        $a2
label_17ae7c:
    if (ctx->pc == 0x17AE7Cu) {
        ctx->pc = 0x17AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE78u;
        // 0x17ae7c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE80u;
        goto label_17ae80;
    }
    ctx->pc = 0x17AE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17AE80u);
        ctx->pc = 0x17AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE78u;
        // 0x17ae7c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE78u, 0x17AE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17AE80u;
label_17ae80:
    // 0x17ae80: 0xc06ddb6  jal         func_1B76D8
label_17ae84:
    if (ctx->pc == 0x17AE84u) {
        ctx->pc = 0x17AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE80u;
        // 0x17ae84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE88u;
        goto label_17ae88;
    }
    ctx->pc = 0x17AE80u;
    SET_GPR_U32(ctx, 31, 0x17AE88u);
    ctx->pc = 0x17AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE80u;
    // 0x17ae84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17AE80u, 0x17AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE88u;
label_17ae88:
    // 0x17ae88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ae88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ae8c:
    // 0x17ae8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ae8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ae90:
    // 0x17ae90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ae94:
    // 0x17ae94: 0x3e00008  jr          $ra
label_17ae98:
    if (ctx->pc == 0x17AE98u) {
        ctx->pc = 0x17AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE94u;
        // 0x17ae98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE9Cu;
        goto label_17ae9c;
    }
    ctx->pc = 0x17AE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE94u;
        // 0x17ae98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE9Cu;
label_17ae9c:
    // 0x17ae9c: 0x0  nop
    ctx->pc = 0x17ae9cu;
    // NOP
    ctx->pc = 0x17aea0u;
}
