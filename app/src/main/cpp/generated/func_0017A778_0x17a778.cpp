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

// Function: func_0017A778
// Address: 0x17a778 - 0x17a980
void func_0017A778_0x17a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017A778_0x17a778");
#endif

    switch (ctx->pc) {
        case 0x17a7a4u: goto label_17a7a4;
        case 0x17a7b8u: goto label_17a7b8;
        case 0x17a7c8u: goto label_17a7c8;
        case 0x17a7d8u: goto label_17a7d8;
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a820u: goto label_17a820;
        case 0x17a8d0u: goto label_17a8d0;
        case 0x17a938u: goto label_17a938;
        case 0x17a948u: goto label_17a948;
        default: break;
    }

    ctx->pc = 0x17a778u;

    // 0x17a778: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a77c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17a780: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17a784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a788: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17a78c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a790: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x17a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x17a794: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A794u;
    {
        const bool branch_taken_0x17a794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a794) {
            ctx->pc = 0x17A798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A794u;
            // 0x17a798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A7A8u;
            goto label_17a7a8;
        }
    }
    ctx->pc = 0x17A79Cu;
    // 0x17a79c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x17A79Cu;
    SET_GPR_U32(ctx, 31, 0x17A7A4u);
    ctx->pc = 0x17A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A79Cu;
    // 0x17a7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x17A79Cu, 0x17A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7A4u;
label_17a7a4:
    // 0x17a7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a7a8:
    // 0x17a7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7b0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x17A7B0u;
    SET_GPR_U32(ctx, 31, 0x17A7B8u);
    ctx->pc = 0x17A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7B0u;
    // 0x17a7b4: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x17A7B0u, 0x17A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7B8u;
label_17a7b8:
    // 0x17a7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a7c0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x17A7C0u;
    SET_GPR_U32(ctx, 31, 0x17A7C8u);
    ctx->pc = 0x17A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7C0u;
    // 0x17a7c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x17A7C0u, 0x17A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7C8u;
label_17a7c8:
    // 0x17a7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7d0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x17A7D0u;
    SET_GPR_U32(ctx, 31, 0x17A7D8u);
    ctx->pc = 0x17A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7D0u;
    // 0x17a7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x17A7D0u, 0x17A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7D8u;
label_17a7d8:
    // 0x17a7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7dc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a7e0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x17A7E0u;
    SET_GPR_U32(ctx, 31, 0x17A7E8u);
    ctx->pc = 0x17A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7E0u;
    // 0x17a7e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x17A7E0u, 0x17A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7E8u;
label_17a7e8:
    // 0x17a7e8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x17a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x17a7ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x17a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x17a7f0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x17a7f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17a7f4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x17a7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a7f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a800: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x17A800u;
    {
        const bool branch_taken_0x17a800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x17A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A800u;
        // 0x17a804: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a800) {
            ctx->pc = 0x17A8C8u;
            goto label_17a8c8;
        }
    }
    ctx->pc = 0x17A808u;
    // 0x17a808: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a80c: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17a810: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x17a810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x17a814: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17a814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a818: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x17a818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17a81c: 0x0  nop
    ctx->pc = 0x17a81cu;
    // NOP
label_17a820:
    // 0x17a820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a824: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x17a824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x17a828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A828u;
    {
        const bool branch_taken_0x17a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A828u;
        // 0x17a82c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a828) {
            ctx->pc = 0x17A838u;
            goto label_17a838;
        }
    }
    ctx->pc = 0x17A830u;
    // 0x17a830: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x17a830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a838:
    // 0x17a838: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17a83c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A83Cu;
    {
        const bool branch_taken_0x17a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A83Cu;
        // 0x17a840: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a83c) {
            ctx->pc = 0x17A854u;
            goto label_17a854;
        }
    }
    ctx->pc = 0x17A844u;
    // 0x17a844: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17a844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17a848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a84c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A84Cu;
    {
        const bool branch_taken_0x17a84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A84Cu;
        // 0x17a850: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a84c) {
            ctx->pc = 0x17A858u;
            goto label_17a858;
        }
    }
    ctx->pc = 0x17A854u;
label_17a854:
    // 0x17a854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a858:
    // 0x17a858: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17a85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a860: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x17a860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x17a864: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x17a864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x17a868: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x17a868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x17a86c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17a86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17a870: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A870u;
    {
        const bool branch_taken_0x17a870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A870u;
        // 0x17a874: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a870) {
            ctx->pc = 0x17A880u;
            goto label_17a880;
        }
    }
    ctx->pc = 0x17A878u;
    // 0x17a878: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17a878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a87c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17a87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a880:
    // 0x17a880: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x17a880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17a884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A884u;
    {
        const bool branch_taken_0x17a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A884u;
        // 0x17a888: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a884) {
            ctx->pc = 0x17A89Cu;
            goto label_17a89c;
        }
    }
    ctx->pc = 0x17A88Cu;
    // 0x17a88c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17a890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A894u;
    {
        const bool branch_taken_0x17a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A894u;
        // 0x17a898: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a894) {
            ctx->pc = 0x17A8A0u;
            goto label_17a8a0;
        }
    }
    ctx->pc = 0x17A89Cu;
label_17a89c:
    // 0x17a89c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a8a0:
    // 0x17a8a0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17a8a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17a8a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17a8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17a8ac: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x17a8acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x17a8b0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x17a8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x17a8b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A8B4u;
    {
        const bool branch_taken_0x17a8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8B4u;
        // 0x17a8b8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8b4) {
            ctx->pc = 0x17A8C8u;
            goto label_17a8c8;
        }
    }
    ctx->pc = 0x17A8BCu;
    // 0x17a8bc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17a8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17a8c0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x17A8C0u;
    {
        const bool branch_taken_0x17a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x17a8c0) {
            ctx->pc = 0x17A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A8C0u;
            // 0x17a8c4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a820;
        }
    }
    ctx->pc = 0x17A8C8u;
label_17a8c8:
    // 0x17a8c8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x17A8C8u;
    SET_GPR_U32(ctx, 31, 0x17A8D0u);
    ctx->pc = 0x17A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8C8u;
    // 0x17a8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x17A8C8u, 0x17A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8D0u;
label_17a8d0:
    // 0x17a8d0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17a8d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17a8d4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17a8d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17a8dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17a8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a8e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17a8e4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x17a8e8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17a8ec: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x17a8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x17a8f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17a8f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17a8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17a8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a8fc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17a8fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a900: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17a900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17a904: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17a904u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17a908: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17a908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17a90c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17a910: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a914: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17a914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a918: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17a91c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x17a91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x17a920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17a920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a924: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17a924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17a928: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a928u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a92c: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17A92Cu;
    {
        const bool branch_taken_0x17a92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x17A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A92Cu;
        // 0x17a930: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a92c) {
            ctx->pc = 0x17A964u;
            goto label_17a964;
        }
    }
    ctx->pc = 0x17A934u;
    // 0x17a934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a938:
    // 0x17a938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a93c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17a93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17a940: 0xc05e94a  jal         func_17A528
    ctx->pc = 0x17A940u;
    SET_GPR_U32(ctx, 31, 0x17A948u);
    ctx->pc = 0x17A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A940u;
    // 0x17a944: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A528u, 0x17A940u, 0x17A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A948u;
label_17a948:
    // 0x17a948: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a94c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x17a94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x17a950: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A950u;
    {
        const bool branch_taken_0x17a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a950) {
            ctx->pc = 0x17A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A950u;
            // 0x17a954: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A968u;
            goto label_17a968;
        }
    }
    ctx->pc = 0x17A958u;
    // 0x17a958: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17a958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17a95c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17A95Cu;
    {
        const bool branch_taken_0x17a95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x17A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A95Cu;
        // 0x17a960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a95c) {
            ctx->pc = 0x17A938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a938;
        }
    }
    ctx->pc = 0x17A964u;
label_17a964:
    // 0x17a964: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17a964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17a968:
    // 0x17a968: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17a968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a96c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17a96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a970: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a974: 0x3e00008  jr          $ra
    ctx->pc = 0x17A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A974u;
        // 0x17a978: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A97Cu;
    // 0x17a97c: 0x0  nop
    ctx->pc = 0x17a97cu;
    // NOP
    ctx->pc = 0x17a980u;
}
