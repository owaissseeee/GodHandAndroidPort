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

// Function: func_0033CCF0
// Address: 0x33ccf0 - 0x33ce68
void func_0033CCF0_0x33ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033CCF0_0x33ccf0");
#endif

    switch (ctx->pc) {
        case 0x33cd14u: goto label_33cd14;
        case 0x33cd60u: goto label_33cd60;
        case 0x33cd90u: goto label_33cd90;
        case 0x33cdc0u: goto label_33cdc0;
        case 0x33cdf0u: goto label_33cdf0;
        case 0x33ce20u: goto label_33ce20;
        default: break;
    }

    ctx->pc = 0x33ccf0u;

    // 0x33ccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ccf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ccf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33ccf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ccfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33cd00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33cd00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cd04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33cd08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33cd0c: 0xc0cf1f0  jal         func_33C7C0
    ctx->pc = 0x33CD0Cu;
    SET_GPR_U32(ctx, 31, 0x33CD14u);
    ctx->pc = 0x33CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD0Cu;
    // 0x33cd10: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C7C0u, 0x33CD0Cu, 0x33CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD14u;
label_33cd14:
    // 0x33cd14: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x33cd14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33cd18: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x33cd18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33cd1c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x33cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33cd20: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33cd24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33cd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33cd28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cd2c: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x33CD2Cu;
    {
        const bool branch_taken_0x33cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD2Cu;
        // 0x33cd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd2c) {
            ctx->pc = 0x33CD58u;
            goto label_33cd58;
        }
    }
    ctx->pc = 0x33CD34u;
    // 0x33cd34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cd38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cd38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cd3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cd40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33cd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cd44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cd44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cd48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33cd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33cd4c: 0x80cf258  j           func_33C960
    ctx->pc = 0x33CD4Cu;
    ctx->pc = 0x33CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD4Cu;
    // 0x33cd50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C960u, 0x33CD4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CD54u;
    // 0x33cd54: 0x0  nop
    ctx->pc = 0x33cd54u;
    // NOP
label_33cd58:
    // 0x33cd58: 0xc0cf754  jal         func_33DD50
    ctx->pc = 0x33CD58u;
    SET_GPR_U32(ctx, 31, 0x33CD60u);
    ctx->pc = 0x33CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD58u;
    // 0x33cd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DD50u, 0x33CD58u, 0x33CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD60u;
label_33cd60:
    // 0x33cd60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CD60u;
    {
        const bool branch_taken_0x33cd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD60u;
        // 0x33cd64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd60) {
            ctx->pc = 0x33CD88u;
            goto label_33cd88;
        }
    }
    ctx->pc = 0x33CD68u;
    // 0x33cd68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cd6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cd74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33cd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cd78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cd7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33cd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33cd80: 0x80cf6b8  j           func_33DAE0
    ctx->pc = 0x33CD80u;
    ctx->pc = 0x33CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD80u;
    // 0x33cd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DAE0u, 0x33CD80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CD88u;
label_33cd88:
    // 0x33cd88: 0xc0cf956  jal         func_33E558
    ctx->pc = 0x33CD88u;
    SET_GPR_U32(ctx, 31, 0x33CD90u);
    ctx->pc = 0x33CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD88u;
    // 0x33cd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E558u, 0x33CD88u, 0x33CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD90u;
label_33cd90:
    // 0x33cd90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CD90u;
    {
        const bool branch_taken_0x33cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD90u;
        // 0x33cd94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd90) {
            ctx->pc = 0x33CDB8u;
            goto label_33cdb8;
        }
    }
    ctx->pc = 0x33CD98u;
    // 0x33cd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cd9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cd9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cda4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33cda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cda8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cdac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33cdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33cdb0: 0x80cf7ea  j           func_33DFA8
    ctx->pc = 0x33CDB0u;
    ctx->pc = 0x33CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CDB0u;
    // 0x33cdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DFA8u, 0x33CDB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CDB8u;
label_33cdb8:
    // 0x33cdb8: 0xc0d03a4  jal         func_340E90
    ctx->pc = 0x33CDB8u;
    SET_GPR_U32(ctx, 31, 0x33CDC0u);
    ctx->pc = 0x33CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CDB8u;
    // 0x33cdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340E90u, 0x33CDB8u, 0x33CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CDC0u;
label_33cdc0:
    // 0x33cdc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CDC0u;
    {
        const bool branch_taken_0x33cdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDC0u;
        // 0x33cdc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdc0) {
            ctx->pc = 0x33CDE8u;
            goto label_33cde8;
        }
    }
    ctx->pc = 0x33CDC8u;
    // 0x33cdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cdcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cdccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cdd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cdd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33cdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cdd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cdd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cddc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33cddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33cde0: 0x80d0402  j           func_341008
    ctx->pc = 0x33CDE0u;
    ctx->pc = 0x33CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CDE0u;
    // 0x33cde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341008u, 0x33CDE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CDE8u;
label_33cde8:
    // 0x33cde8: 0xc0d05e6  jal         func_341798
    ctx->pc = 0x33CDE8u;
    SET_GPR_U32(ctx, 31, 0x33CDF0u);
    ctx->pc = 0x33CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CDE8u;
    // 0x33cdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341798u, 0x33CDE8u, 0x33CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CDF0u;
label_33cdf0:
    // 0x33cdf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CDF0u;
    {
        const bool branch_taken_0x33cdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDF0u;
        // 0x33cdf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdf0) {
            ctx->pc = 0x33CE18u;
            goto label_33ce18;
        }
    }
    ctx->pc = 0x33CDF8u;
    // 0x33cdf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cdfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ce00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ce00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ce04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ce04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ce08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ce0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ce10: 0x80d0640  j           func_341900
    ctx->pc = 0x33CE10u;
    ctx->pc = 0x33CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE10u;
    // 0x33ce14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341900u, 0x33CE10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CE18u;
label_33ce18:
    // 0x33ce18: 0xc0cf0e8  jal         func_33C3A0
    ctx->pc = 0x33CE18u;
    SET_GPR_U32(ctx, 31, 0x33CE20u);
    ctx->pc = 0x33CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE18u;
    // 0x33ce1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C3A0u, 0x33CE18u, 0x33CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE20u;
label_33ce20:
    // 0x33ce20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CE20u;
    {
        const bool branch_taken_0x33ce20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE20u;
        // 0x33ce24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce20) {
            ctx->pc = 0x33CE48u;
            goto label_33ce48;
        }
    }
    ctx->pc = 0x33CE28u;
    // 0x33ce28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ce28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ce2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33ce2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ce30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ce34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ce34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ce38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ce3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ce3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ce40: 0x80cf0bc  j           func_33C2F0
    ctx->pc = 0x33CE40u;
    ctx->pc = 0x33CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE40u;
    // 0x33ce44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C2F0u, 0x33CE40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CE48u;
label_33ce48:
    // 0x33ce48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ce4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33ce50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ce50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ce54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ce54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ce58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ce5c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE5Cu;
        // 0x33ce60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE64u;
    // 0x33ce64: 0x0  nop
    ctx->pc = 0x33ce64u;
    // NOP
    ctx->pc = 0x33ce68u;
}
