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

// Function: func_001BDFA0
// Address: 0x1bdfa0 - 0x1be060
void func_001BDFA0_0x1bdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BDFA0_0x1bdfa0");
#endif

    switch (ctx->pc) {
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfa4u: goto label_1bdfa4;
        case 0x1bdfa8u: goto label_1bdfa8;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfb4u: goto label_1bdfb4;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdfbcu: goto label_1bdfbc;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfc4u: goto label_1bdfc4;
        case 0x1bdfc8u: goto label_1bdfc8;
        case 0x1bdfccu: goto label_1bdfcc;
        case 0x1bdfd0u: goto label_1bdfd0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdfd8u: goto label_1bdfd8;
        case 0x1bdfdcu: goto label_1bdfdc;
        case 0x1bdfe0u: goto label_1bdfe0;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdfe8u: goto label_1bdfe8;
        case 0x1bdfecu: goto label_1bdfec;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1bdff4u: goto label_1bdff4;
        case 0x1bdff8u: goto label_1bdff8;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be000u: goto label_1be000;
        case 0x1be004u: goto label_1be004;
        case 0x1be008u: goto label_1be008;
        case 0x1be00cu: goto label_1be00c;
        case 0x1be010u: goto label_1be010;
        case 0x1be014u: goto label_1be014;
        case 0x1be018u: goto label_1be018;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be020u: goto label_1be020;
        case 0x1be024u: goto label_1be024;
        case 0x1be028u: goto label_1be028;
        case 0x1be02cu: goto label_1be02c;
        case 0x1be030u: goto label_1be030;
        case 0x1be034u: goto label_1be034;
        case 0x1be038u: goto label_1be038;
        case 0x1be03cu: goto label_1be03c;
        case 0x1be040u: goto label_1be040;
        case 0x1be044u: goto label_1be044;
        case 0x1be048u: goto label_1be048;
        case 0x1be04cu: goto label_1be04c;
        case 0x1be050u: goto label_1be050;
        case 0x1be054u: goto label_1be054;
        case 0x1be058u: goto label_1be058;
        case 0x1be05cu: goto label_1be05c;
        default: break;
    }

    ctx->pc = 0x1bdfa0u;

label_1bdfa0:
    // 0x1bdfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bdfa4:
    // 0x1bdfa4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bdfa8:
    // 0x1bdfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bdfac:
    // 0x1bdfac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bdfb0:
    // 0x1bdfb0: 0xc06ddac  jal         func_1B76B0
label_1bdfb4:
    if (ctx->pc == 0x1BDFB4u) {
        ctx->pc = 0x1BDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB0u;
        // 0x1bdfb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFB8u;
        goto label_1bdfb8;
    }
    ctx->pc = 0x1BDFB0u;
    SET_GPR_U32(ctx, 31, 0x1BDFB8u);
    ctx->pc = 0x1BDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFB0u;
    // 0x1bdfb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BDFB0u, 0x1BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB8u;
label_1bdfb8:
    // 0x1bdfb8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1bdfbc:
    if (ctx->pc == 0x1BDFBCu) {
        ctx->pc = 0x1BDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB8u;
        // 0x1bdfbc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFC0u;
        goto label_1bdfc0;
    }
    ctx->pc = 0x1BDFB8u;
    {
        const bool branch_taken_0x1bdfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB8u;
        // 0x1bdfbc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfb8) {
            ctx->pc = 0x1BE048u;
            goto label_1be048;
        }
    }
    ctx->pc = 0x1BDFC0u;
label_1bdfc0:
    // 0x1bdfc0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1bdfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bdfc4:
    // 0x1bdfc4: 0x2446dde8  addiu       $a2, $v0, -0x2218
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958568));
label_1bdfc8:
    // 0x1bdfc8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bdfc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdfcc:
    // 0x1bdfcc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bdfd0:
    // 0x1bdfd0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bdfd4:
    // 0x1bdfd4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bdfd8:
    // 0x1bdfd8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1bdfdc:
    if (ctx->pc == 0x1BDFDCu) {
        ctx->pc = 0x1BDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFD8u;
        // 0x1bdfdc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFE0u;
        goto label_1bdfe0;
    }
    ctx->pc = 0x1BDFD8u;
    {
        const bool branch_taken_0x1bdfd8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFD8u;
        // 0x1bdfdc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfd8) {
            ctx->pc = 0x1BE004u;
            goto label_1be004;
        }
    }
    ctx->pc = 0x1BDFE0u;
label_1bdfe0:
    // 0x1bdfe0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bdfe4:
    // 0x1bdfe4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1bdfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bdfe8:
    // 0x1bdfe8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bdfec:
    // 0x1bdfec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bdfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bdff0:
    // 0x1bdff0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bdff4:
    // 0x1bdff4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1bdff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1bdff8:
    // 0x1bdff8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1bdff8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1bdffc:
    // 0x1bdffc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1be000:
    if (ctx->pc == 0x1BE000u) {
        ctx->pc = 0x1BE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFFCu;
        // 0x1be000: 0x2503dde8  addiu       $v1, $t0, -0x2218 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE004u;
        goto label_1be004;
    }
    ctx->pc = 0x1BDFFCu;
    {
        const bool branch_taken_0x1bdffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFFCu;
        // 0x1be000: 0x2503dde8  addiu       $v1, $t0, -0x2218 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdffc) {
            ctx->pc = 0x1BE010u;
            goto label_1be010;
        }
    }
    ctx->pc = 0x1BE004u;
label_1be004:
    // 0x1be004: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1be008:
    // 0x1be008: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1be00c:
    // 0x1be00c: 0x2503dde8  addiu       $v1, $t0, -0x2218
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958568));
label_1be010:
    // 0x1be010: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1be010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1be014:
    // 0x1be014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be018:
    // 0x1be018: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1be01c:
    if (ctx->pc == 0x1BE01Cu) {
        ctx->pc = 0x1BE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE018u;
        // 0x1be01c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE020u;
        goto label_1be020;
    }
    ctx->pc = 0x1BE018u;
    {
        const bool branch_taken_0x1be018 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE018u;
        // 0x1be01c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be018) {
            ctx->pc = 0x1BE034u;
            goto label_1be034;
        }
    }
    ctx->pc = 0x1BE020u;
label_1be020:
    // 0x1be020: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1be020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1be024:
    // 0x1be024: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1be028:
    // 0x1be028: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1be02c:
    // 0x1be02c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1be030:
    if (ctx->pc == 0x1BE030u) {
        ctx->pc = 0x1BE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE02Cu;
        // 0x1be030: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE034u;
        goto label_1be034;
    }
    ctx->pc = 0x1BE02Cu;
    {
        const bool branch_taken_0x1be02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE02Cu;
        // 0x1be030: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be02c) {
            ctx->pc = 0x1BE038u;
            goto label_1be038;
        }
    }
    ctx->pc = 0x1BE034u;
label_1be034:
    // 0x1be034: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1be034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1be038:
    // 0x1be038: 0xc0f809  jalr        $a2
label_1be03c:
    if (ctx->pc == 0x1BE03Cu) {
        ctx->pc = 0x1BE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE038u;
        // 0x1be03c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE040u;
        goto label_1be040;
    }
    ctx->pc = 0x1BE038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BE040u);
        ctx->pc = 0x1BE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE038u;
        // 0x1be03c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE038u, 0x1BE040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE040u;
label_1be040:
    // 0x1be040: 0xc06ddb6  jal         func_1B76D8
label_1be044:
    if (ctx->pc == 0x1BE044u) {
        ctx->pc = 0x1BE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE040u;
        // 0x1be044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE048u;
        goto label_1be048;
    }
    ctx->pc = 0x1BE040u;
    SET_GPR_U32(ctx, 31, 0x1BE048u);
    ctx->pc = 0x1BE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE040u;
    // 0x1be044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BE040u, 0x1BE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE048u;
label_1be048:
    // 0x1be048: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be04c:
    // 0x1be04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1be050:
    // 0x1be050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be054:
    // 0x1be054: 0x3e00008  jr          $ra
label_1be058:
    if (ctx->pc == 0x1BE058u) {
        ctx->pc = 0x1BE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE054u;
        // 0x1be058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE05Cu;
        goto label_1be05c;
    }
    ctx->pc = 0x1BE054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE054u;
        // 0x1be058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE05Cu;
label_1be05c:
    // 0x1be05c: 0x0  nop
    ctx->pc = 0x1be05cu;
    // NOP
    ctx->pc = 0x1be060u;
}
