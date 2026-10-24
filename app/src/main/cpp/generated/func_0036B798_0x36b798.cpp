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

// Function: func_0036B798
// Address: 0x36b798 - 0x36b888
void func_0036B798_0x36b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036B798_0x36b798");
#endif

    switch (ctx->pc) {
        case 0x36b798u: goto label_36b798;
        case 0x36b79cu: goto label_36b79c;
        case 0x36b7a0u: goto label_36b7a0;
        case 0x36b7a4u: goto label_36b7a4;
        case 0x36b7a8u: goto label_36b7a8;
        case 0x36b7acu: goto label_36b7ac;
        case 0x36b7b0u: goto label_36b7b0;
        case 0x36b7b4u: goto label_36b7b4;
        case 0x36b7b8u: goto label_36b7b8;
        case 0x36b7bcu: goto label_36b7bc;
        case 0x36b7c0u: goto label_36b7c0;
        case 0x36b7c4u: goto label_36b7c4;
        case 0x36b7c8u: goto label_36b7c8;
        case 0x36b7ccu: goto label_36b7cc;
        case 0x36b7d0u: goto label_36b7d0;
        case 0x36b7d4u: goto label_36b7d4;
        case 0x36b7d8u: goto label_36b7d8;
        case 0x36b7dcu: goto label_36b7dc;
        case 0x36b7e0u: goto label_36b7e0;
        case 0x36b7e4u: goto label_36b7e4;
        case 0x36b7e8u: goto label_36b7e8;
        case 0x36b7ecu: goto label_36b7ec;
        case 0x36b7f0u: goto label_36b7f0;
        case 0x36b7f4u: goto label_36b7f4;
        case 0x36b7f8u: goto label_36b7f8;
        case 0x36b7fcu: goto label_36b7fc;
        case 0x36b800u: goto label_36b800;
        case 0x36b804u: goto label_36b804;
        case 0x36b808u: goto label_36b808;
        case 0x36b80cu: goto label_36b80c;
        case 0x36b810u: goto label_36b810;
        case 0x36b814u: goto label_36b814;
        case 0x36b818u: goto label_36b818;
        case 0x36b81cu: goto label_36b81c;
        case 0x36b820u: goto label_36b820;
        case 0x36b824u: goto label_36b824;
        case 0x36b828u: goto label_36b828;
        case 0x36b82cu: goto label_36b82c;
        case 0x36b830u: goto label_36b830;
        case 0x36b834u: goto label_36b834;
        case 0x36b838u: goto label_36b838;
        case 0x36b83cu: goto label_36b83c;
        case 0x36b840u: goto label_36b840;
        case 0x36b844u: goto label_36b844;
        case 0x36b848u: goto label_36b848;
        case 0x36b84cu: goto label_36b84c;
        case 0x36b850u: goto label_36b850;
        case 0x36b854u: goto label_36b854;
        case 0x36b858u: goto label_36b858;
        case 0x36b85cu: goto label_36b85c;
        case 0x36b860u: goto label_36b860;
        case 0x36b864u: goto label_36b864;
        case 0x36b868u: goto label_36b868;
        case 0x36b86cu: goto label_36b86c;
        case 0x36b870u: goto label_36b870;
        case 0x36b874u: goto label_36b874;
        case 0x36b878u: goto label_36b878;
        case 0x36b87cu: goto label_36b87c;
        case 0x36b880u: goto label_36b880;
        case 0x36b884u: goto label_36b884;
        default: break;
    }

    ctx->pc = 0x36b798u;

label_36b798:
    // 0x36b798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_36b79c:
    // 0x36b79c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36b7a0:
    // 0x36b7a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36b7a4:
    // 0x36b7a4: 0x2410fffc  addiu       $s0, $zero, -0x4
    ctx->pc = 0x36b7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36b7a8:
    // 0x36b7a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_36b7ac:
    // 0x36b7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36b7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36b7b0:
    // 0x36b7b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_36b7b4:
    // 0x36b7b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36b7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36b7b8:
    // 0x36b7b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_36b7bc:
    // 0x36b7bc: 0x2633038c  addiu       $s3, $s1, 0x38C
    ctx->pc = 0x36b7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
label_36b7c0:
    // 0x36b7c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x36b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_36b7c4:
    // 0x36b7c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36b7c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b7c8:
    // 0x36b7c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_36b7cc:
    // 0x36b7cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b7d0:
    // 0x36b7d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b7d4:
    // 0x36b7d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x36b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b7d8:
    // 0x36b7d8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x36b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36b7dc:
    // 0x36b7dc: 0x60f809  jalr        $v1
label_36b7e0:
    if (ctx->pc == 0x36B7E0u) {
        ctx->pc = 0x36B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7DCu;
        // 0x36b7e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B7E4u;
        goto label_36b7e4;
    }
    ctx->pc = 0x36B7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36B7E4u);
        ctx->pc = 0x36B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7DCu;
        // 0x36b7e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B7DCu, 0x36B7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B7E4u;
label_36b7e4:
    // 0x36b7e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x36b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36b7e8:
    // 0x36b7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b7ec:
    // 0x36b7ec: 0xb08024  and         $s0, $a1, $s0
    ctx->pc = 0x36b7ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_36b7f0:
    // 0x36b7f0: 0x8c860390  lw          $a2, 0x390($a0)
    ctx->pc = 0x36b7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
label_36b7f4:
    // 0x36b7f4: 0xb08823  subu        $s1, $a1, $s0
    ctx->pc = 0x36b7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_36b7f8:
    // 0x36b7f8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x36b7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_36b7fc:
    // 0x36b7fc: 0xc0dae22  jal         func_36B888
label_36b800:
    if (ctx->pc == 0x36B800u) {
        ctx->pc = 0x36B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7FCu;
        // 0x36b800: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B804u;
        goto label_36b804;
    }
    ctx->pc = 0x36B7FCu;
    SET_GPR_U32(ctx, 31, 0x36B804u);
    ctx->pc = 0x36B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B7FCu;
    // 0x36b800: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B888u, 0x36B7FCu, 0x36B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B804u;
label_36b804:
    // 0x36b804: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x36b804u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
label_36b808:
    // 0x36b808: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x36b808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36b80c:
    // 0x36b80c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x36b80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_36b810:
    // 0x36b810: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36b810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b814:
    // 0x36b814: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x36b814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_36b818:
    // 0x36b818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b81c:
    // 0x36b81c: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x36b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_36b820:
    // 0x36b820: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36b820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b824:
    // 0x36b824: 0xc0ceb28  jal         func_33ACA0
label_36b828:
    if (ctx->pc == 0x36B828u) {
        ctx->pc = 0x36B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B824u;
        // 0x36b828: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B82Cu;
        goto label_36b82c;
    }
    ctx->pc = 0x36B824u;
    SET_GPR_U32(ctx, 31, 0x36B82Cu);
    ctx->pc = 0x36B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B824u;
    // 0x36b828: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36B824u, 0x36B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B82Cu;
label_36b82c:
    // 0x36b82c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b830:
    // 0x36b830: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36b830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b834:
    // 0x36b834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b838:
    // 0x36b838: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36b83c:
    // 0x36b83c: 0x40f809  jalr        $v0
label_36b840:
    if (ctx->pc == 0x36B840u) {
        ctx->pc = 0x36B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B83Cu;
        // 0x36b840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B844u;
        goto label_36b844;
    }
    ctx->pc = 0x36B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B844u);
        ctx->pc = 0x36B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B83Cu;
        // 0x36b840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B83Cu, 0x36B844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B844u;
label_36b844:
    // 0x36b844: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b848:
    // 0x36b848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b84c:
    // 0x36b84c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36b84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b850:
    // 0x36b850: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36b854:
    // 0x36b854: 0x40f809  jalr        $v0
label_36b858:
    if (ctx->pc == 0x36B858u) {
        ctx->pc = 0x36B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B854u;
        // 0x36b858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B85Cu;
        goto label_36b85c;
    }
    ctx->pc = 0x36B854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B85Cu);
        ctx->pc = 0x36B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B854u;
        // 0x36b858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B854u, 0x36B85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B85Cu;
label_36b85c:
    // 0x36b85c: 0xc0daede  jal         func_36BB78
label_36b860:
    if (ctx->pc == 0x36B860u) {
        ctx->pc = 0x36B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B85Cu;
        // 0x36b860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B864u;
        goto label_36b864;
    }
    ctx->pc = 0x36B85Cu;
    SET_GPR_U32(ctx, 31, 0x36B864u);
    ctx->pc = 0x36B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B85Cu;
    // 0x36b860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BB78u, 0x36B85Cu, 0x36B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B864u;
label_36b864:
    // 0x36b864: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x36b864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36b868:
    // 0x36b868: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36b868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36b86c:
    // 0x36b86c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36b86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36b870:
    // 0x36b870: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36b870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36b874:
    // 0x36b874: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36b874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36b878:
    // 0x36b878: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x36b878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36b87c:
    // 0x36b87c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x36b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36b880:
    // 0x36b880: 0x3e00008  jr          $ra
label_36b884:
    if (ctx->pc == 0x36B884u) {
        ctx->pc = 0x36B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B880u;
        // 0x36b884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B888u;
        goto label_fallthrough_0x36b880;
    }
    ctx->pc = 0x36B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B880u;
        // 0x36b884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b880:
    ctx->pc = 0x36B888u;
}
