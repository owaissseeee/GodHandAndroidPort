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

// Function: func_0018E6B0
// Address: 0x18e6b0 - 0x18e8b8
void func_0018E6B0_0x18e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018E6B0_0x18e6b0");
#endif

    switch (ctx->pc) {
        case 0x18e6dcu: goto label_18e6dc;
        case 0x18e6f0u: goto label_18e6f0;
        case 0x18e700u: goto label_18e700;
        case 0x18e710u: goto label_18e710;
        case 0x18e720u: goto label_18e720;
        case 0x18e758u: goto label_18e758;
        case 0x18e808u: goto label_18e808;
        case 0x18e870u: goto label_18e870;
        case 0x18e880u: goto label_18e880;
        default: break;
    }

    ctx->pc = 0x18e6b0u;

    // 0x18e6b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18e6b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18e6b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18e6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18e6c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e6c8: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x18e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x18e6cc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E6CCu;
    {
        const bool branch_taken_0x18e6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6cc) {
            ctx->pc = 0x18E6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E6CCu;
            // 0x18e6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E6E0u;
            goto label_18e6e0;
        }
    }
    ctx->pc = 0x18E6D4u;
    // 0x18e6d4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18E6D4u;
    SET_GPR_U32(ctx, 31, 0x18E6DCu);
    ctx->pc = 0x18E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6D4u;
    // 0x18e6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18E6D4u, 0x18E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6DCu;
label_18e6dc:
    // 0x18e6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e6e0:
    // 0x18e6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6e8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18E6E8u;
    SET_GPR_U32(ctx, 31, 0x18E6F0u);
    ctx->pc = 0x18E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6E8u;
    // 0x18e6ec: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18E6E8u, 0x18E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6F0u;
label_18e6f0:
    // 0x18e6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18e6f8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18E6F8u;
    SET_GPR_U32(ctx, 31, 0x18E700u);
    ctx->pc = 0x18E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6F8u;
    // 0x18e6fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18E6F8u, 0x18E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E700u;
label_18e700:
    // 0x18e700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e708: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18E708u;
    SET_GPR_U32(ctx, 31, 0x18E710u);
    ctx->pc = 0x18E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E708u;
    // 0x18e70c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18E708u, 0x18E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E710u;
label_18e710:
    // 0x18e710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e714: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18e718: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18E718u;
    SET_GPR_U32(ctx, 31, 0x18E720u);
    ctx->pc = 0x18E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E718u;
    // 0x18e71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18E718u, 0x18E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E720u;
label_18e720:
    // 0x18e720: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18e724: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18e724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18e728: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x18e728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18e72c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18e72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18e734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e738: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18E738u;
    {
        const bool branch_taken_0x18e738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x18E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E738u;
        // 0x18e73c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e738) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E740u;
    // 0x18e740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e744: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18e748: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18e74c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18e74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e750: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18e750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18e754: 0x0  nop
    ctx->pc = 0x18e754u;
    // NOP
label_18e758:
    // 0x18e758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e75c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18e75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18e760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E760u;
    {
        const bool branch_taken_0x18e760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E760u;
        // 0x18e764: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e760) {
            ctx->pc = 0x18E770u;
            goto label_18e770;
        }
    }
    ctx->pc = 0x18E768u;
    // 0x18e768: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18e768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e76c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e770:
    // 0x18e770: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18e770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18e774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E774u;
    {
        const bool branch_taken_0x18e774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E774u;
        // 0x18e778: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e774) {
            ctx->pc = 0x18E78Cu;
            goto label_18e78c;
        }
    }
    ctx->pc = 0x18E77Cu;
    // 0x18e77c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18e780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E784u;
    {
        const bool branch_taken_0x18e784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E784u;
        // 0x18e788: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e784) {
            ctx->pc = 0x18E790u;
            goto label_18e790;
        }
    }
    ctx->pc = 0x18E78Cu;
label_18e78c:
    // 0x18e78c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e790:
    // 0x18e790: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18e794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e798: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18e798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18e79c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18e79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18e7a0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18e7a4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18e7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18e7a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E7A8u;
    {
        const bool branch_taken_0x18e7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7A8u;
        // 0x18e7ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7a8) {
            ctx->pc = 0x18E7B8u;
            goto label_18e7b8;
        }
    }
    ctx->pc = 0x18E7B0u;
    // 0x18e7b0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18e7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e7b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18e7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e7b8:
    // 0x18e7b8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18e7bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E7BCu;
    {
        const bool branch_taken_0x18e7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7BCu;
        // 0x18e7c0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7bc) {
            ctx->pc = 0x18E7D4u;
            goto label_18e7d4;
        }
    }
    ctx->pc = 0x18E7C4u;
    // 0x18e7c4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18e7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e7cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E7CCu;
    {
        const bool branch_taken_0x18e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7CCu;
        // 0x18e7d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7cc) {
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E7D4u;
label_18e7d4:
    // 0x18e7d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e7d8:
    // 0x18e7d8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18e7dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18e7e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18e7e4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x18e7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18e7e8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18e7ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E7ECu;
    {
        const bool branch_taken_0x18e7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7ECu;
        // 0x18e7f0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7ec) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E7F4u;
    // 0x18e7f4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18e7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18e7f8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18E7F8u;
    {
        const bool branch_taken_0x18e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18e7f8) {
            ctx->pc = 0x18E7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E7F8u;
            // 0x18e7fc: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e758;
        }
    }
    ctx->pc = 0x18E800u;
label_18e800:
    // 0x18e800: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x18E800u;
    SET_GPR_U32(ctx, 31, 0x18E808u);
    ctx->pc = 0x18E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E800u;
    // 0x18e804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x18E800u, 0x18E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E808u;
label_18e808:
    // 0x18e808: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18e808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e80c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18e810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18e814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18e814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e818: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18e818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18e81c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18e820: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18e820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18e824: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x18e824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18e828: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18e82c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18e82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18e830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e834: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18e834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e838: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18e838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18e83c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18e83cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18e840: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18e840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18e844: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18e848: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e84c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18e84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e850: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18e850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18e854: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x18e854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x18e858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e85c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18e85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18e860: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e864: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18E864u;
    {
        const bool branch_taken_0x18e864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x18E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E864u;
        // 0x18e868: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e864) {
            ctx->pc = 0x18E89Cu;
            goto label_18e89c;
        }
    }
    ctx->pc = 0x18E86Cu;
    // 0x18e86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e870:
    // 0x18e870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e874: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18e878: 0xc06391c  jal         func_18E470
    ctx->pc = 0x18E878u;
    SET_GPR_U32(ctx, 31, 0x18E880u);
    ctx->pc = 0x18E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E878u;
    // 0x18e87c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E470u, 0x18E878u, 0x18E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E880u;
label_18e880:
    // 0x18e880: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18e884: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x18e884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18e888: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E888u;
    {
        const bool branch_taken_0x18e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e888) {
            ctx->pc = 0x18E88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E888u;
            // 0x18e88c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E8A0u;
            goto label_18e8a0;
        }
    }
    ctx->pc = 0x18E890u;
    // 0x18e890: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18e890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18e894: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18E894u;
    {
        const bool branch_taken_0x18e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x18E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E894u;
        // 0x18e898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e894) {
            ctx->pc = 0x18E870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e870;
        }
    }
    ctx->pc = 0x18E89Cu;
label_18e89c:
    // 0x18e89c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18e89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18e8a0:
    // 0x18e8a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18e8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e8a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18e8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e8a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8ACu;
        // 0x18e8b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E8B4u;
    // 0x18e8b4: 0x0  nop
    ctx->pc = 0x18e8b4u;
    // NOP
    ctx->pc = 0x18e8b8u;
}
