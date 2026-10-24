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

// Function: func_001ADD20
// Address: 0x1add20 - 0x1addd8
void func_001ADD20_0x1add20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ADD20_0x1add20");
#endif

    switch (ctx->pc) {
        case 0x1add20u: goto label_1add20;
        case 0x1add24u: goto label_1add24;
        case 0x1add28u: goto label_1add28;
        case 0x1add2cu: goto label_1add2c;
        case 0x1add30u: goto label_1add30;
        case 0x1add34u: goto label_1add34;
        case 0x1add38u: goto label_1add38;
        case 0x1add3cu: goto label_1add3c;
        case 0x1add40u: goto label_1add40;
        case 0x1add44u: goto label_1add44;
        case 0x1add48u: goto label_1add48;
        case 0x1add4cu: goto label_1add4c;
        case 0x1add50u: goto label_1add50;
        case 0x1add54u: goto label_1add54;
        case 0x1add58u: goto label_1add58;
        case 0x1add5cu: goto label_1add5c;
        case 0x1add60u: goto label_1add60;
        case 0x1add64u: goto label_1add64;
        case 0x1add68u: goto label_1add68;
        case 0x1add6cu: goto label_1add6c;
        case 0x1add70u: goto label_1add70;
        case 0x1add74u: goto label_1add74;
        case 0x1add78u: goto label_1add78;
        case 0x1add7cu: goto label_1add7c;
        case 0x1add80u: goto label_1add80;
        case 0x1add84u: goto label_1add84;
        case 0x1add88u: goto label_1add88;
        case 0x1add8cu: goto label_1add8c;
        case 0x1add90u: goto label_1add90;
        case 0x1add94u: goto label_1add94;
        case 0x1add98u: goto label_1add98;
        case 0x1add9cu: goto label_1add9c;
        case 0x1adda0u: goto label_1adda0;
        case 0x1adda4u: goto label_1adda4;
        case 0x1adda8u: goto label_1adda8;
        case 0x1addacu: goto label_1addac;
        case 0x1addb0u: goto label_1addb0;
        case 0x1addb4u: goto label_1addb4;
        case 0x1addb8u: goto label_1addb8;
        case 0x1addbcu: goto label_1addbc;
        case 0x1addc0u: goto label_1addc0;
        case 0x1addc4u: goto label_1addc4;
        case 0x1addc8u: goto label_1addc8;
        case 0x1addccu: goto label_1addcc;
        case 0x1addd0u: goto label_1addd0;
        case 0x1addd4u: goto label_1addd4;
        default: break;
    }

    ctx->pc = 0x1add20u;

label_1add20:
    // 0x1add20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1add20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1add24:
    // 0x1add24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1add24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1add28:
    // 0x1add28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1add28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1add2c:
    // 0x1add2c: 0x2446dc60  addiu       $a2, $v0, -0x23A0
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958176));
label_1add30:
    // 0x1add30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1add30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1add34:
    // 0x1add34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1add34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1add38:
    // 0x1add38: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1add3c:
    // 0x1add3c: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1add3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1add40:
    // 0x1add40: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1add44:
    // 0x1add44: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1add44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1add48:
    // 0x1add48: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1add48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1add4c:
    // 0x1add4c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1add50:
    if (ctx->pc == 0x1ADD50u) {
        ctx->pc = 0x1ADD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD4Cu;
        // 0x1add50: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD54u;
        goto label_1add54;
    }
    ctx->pc = 0x1ADD4Cu;
    {
        const bool branch_taken_0x1add4c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1ADD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD4Cu;
        // 0x1add50: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add4c) {
            ctx->pc = 0x1ADD78u;
            goto label_1add78;
        }
    }
    ctx->pc = 0x1ADD54u;
label_1add54:
    // 0x1add54: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1add54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1add58:
    // 0x1add58: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1add5c:
    // 0x1add5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1add60:
    // 0x1add60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1add60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1add64:
    // 0x1add64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1add64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1add68:
    // 0x1add68: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x1add68u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1add6c:
    // 0x1add6c: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x1add6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_1add70:
    // 0x1add70: 0x10000003  b           . + 4 + (0x3 << 2)
label_1add74:
    if (ctx->pc == 0x1ADD74u) {
        ctx->pc = 0x1ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD70u;
        // 0x1add74: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD78u;
        goto label_1add78;
    }
    ctx->pc = 0x1ADD70u;
    {
        const bool branch_taken_0x1add70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD70u;
        // 0x1add74: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add70) {
            ctx->pc = 0x1ADD80u;
            goto label_1add80;
        }
    }
    ctx->pc = 0x1ADD78u;
label_1add78:
    // 0x1add78: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1add78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1add7c:
    // 0x1add7c: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1add7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1add80:
    // 0x1add80: 0x2503dc60  addiu       $v1, $t0, -0x23A0
    ctx->pc = 0x1add80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958176));
label_1add84:
    // 0x1add84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1add84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1add88:
    // 0x1add88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1add88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1add8c:
    // 0x1add8c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1add90:
    if (ctx->pc == 0x1ADD90u) {
        ctx->pc = 0x1ADD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD8Cu;
        // 0x1add90: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD94u;
        goto label_1add94;
    }
    ctx->pc = 0x1ADD8Cu;
    {
        const bool branch_taken_0x1add8c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1ADD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD8Cu;
        // 0x1add90: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add8c) {
            ctx->pc = 0x1ADDA8u;
            goto label_1adda8;
        }
    }
    ctx->pc = 0x1ADD94u;
label_1add94:
    // 0x1add94: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1add94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1add98:
    // 0x1add98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1add9c:
    // 0x1add9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1add9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1adda0:
    // 0x1adda0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1adda4:
    if (ctx->pc == 0x1ADDA4u) {
        ctx->pc = 0x1ADDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDA0u;
        // 0x1adda4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDA8u;
        goto label_1adda8;
    }
    ctx->pc = 0x1ADDA0u;
    {
        const bool branch_taken_0x1adda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDA0u;
        // 0x1adda4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adda0) {
            ctx->pc = 0x1ADDACu;
            goto label_1addac;
        }
    }
    ctx->pc = 0x1ADDA8u;
label_1adda8:
    // 0x1adda8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1adda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1addac:
    // 0x1addac: 0xc0f809  jalr        $a2
label_1addb0:
    if (ctx->pc == 0x1ADDB0u) {
        ctx->pc = 0x1ADDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDACu;
        // 0x1addb0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDB4u;
        goto label_1addb4;
    }
    ctx->pc = 0x1ADDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1ADDB4u);
        ctx->pc = 0x1ADDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDACu;
        // 0x1addb0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADDACu, 0x1ADDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADDB4u;
label_1addb4:
    // 0x1addb4: 0xc0527ae  jal         func_149EB8
label_1addb8:
    if (ctx->pc == 0x1ADDB8u) {
        ctx->pc = 0x1ADDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDB4u;
        // 0x1addb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDBCu;
        goto label_1addbc;
    }
    ctx->pc = 0x1ADDB4u;
    SET_GPR_U32(ctx, 31, 0x1ADDBCu);
    ctx->pc = 0x1ADDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDB4u;
    // 0x1addb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1ADDB4u, 0x1ADDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADDBCu;
label_1addbc:
    // 0x1addbc: 0xc05280e  jal         func_14A038
label_1addc0:
    if (ctx->pc == 0x1ADDC0u) {
        ctx->pc = 0x1ADDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDBCu;
        // 0x1addc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDC4u;
        goto label_1addc4;
    }
    ctx->pc = 0x1ADDBCu;
    SET_GPR_U32(ctx, 31, 0x1ADDC4u);
    ctx->pc = 0x1ADDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDBCu;
    // 0x1addc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x1ADDBCu, 0x1ADDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADDC4u;
label_1addc4:
    // 0x1addc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1addc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1addc8:
    // 0x1addc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1addc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1addcc:
    // 0x1addcc: 0x3e00008  jr          $ra
label_1addd0:
    if (ctx->pc == 0x1ADDD0u) {
        ctx->pc = 0x1ADDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDCCu;
        // 0x1addd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDD4u;
        goto label_1addd4;
    }
    ctx->pc = 0x1ADDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDCCu;
        // 0x1addd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADDD4u;
label_1addd4:
    // 0x1addd4: 0x0  nop
    ctx->pc = 0x1addd4u;
    // NOP
    ctx->pc = 0x1addd8u;
}
