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

// Function: func_001FE748
// Address: 0x1fe748 - 0x1fe8a0
void func_001FE748_0x1fe748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE748_0x1fe748");
#endif

    switch (ctx->pc) {
        case 0x1fe798u: goto label_1fe798;
        case 0x1fe7acu: goto label_1fe7ac;
        case 0x1fe7bcu: goto label_1fe7bc;
        case 0x1fe7e8u: goto label_1fe7e8;
        case 0x1fe800u: goto label_1fe800;
        case 0x1fe80cu: goto label_1fe80c;
        case 0x1fe820u: goto label_1fe820;
        case 0x1fe834u: goto label_1fe834;
        case 0x1fe854u: goto label_1fe854;
        default: break;
    }

    ctx->pc = 0x1fe748u;

    // 0x1fe748: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fe748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fe74c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe750: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1fe750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1fe754: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1fe754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1fe758: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe75c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1fe75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1fe760: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fe760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1fe764: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1fe764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1fe768: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1fe768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1fe76c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1fe76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1fe770: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1fe770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1fe774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe778: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1fe778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1fe77c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1fe77cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fe780: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fe784: 0x12020039  beq         $s0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1FE784u;
    {
        const bool branch_taken_0x1fe784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE784u;
        // 0x1fe788: 0x241e0008  addiu       $fp, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe784) {
            ctx->pc = 0x1FE86Cu;
            goto label_1fe86c;
        }
    }
    ctx->pc = 0x1FE78Cu;
    // 0x1fe78c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1fe78cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe790: 0x2417005c  addiu       $s7, $zero, 0x5C
    ctx->pc = 0x1fe790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1fe794: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1fe794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1fe798:
    // 0x1fe798: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe79c: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x1fe79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1fe7a0: 0x2615ffff  addiu       $s5, $s0, -0x1
    ctx->pc = 0x1fe7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fe7a4: 0xc07fc44  jal         func_1FF110
    ctx->pc = 0x1FE7A4u;
    SET_GPR_U32(ctx, 31, 0x1FE7ACu);
    ctx->pc = 0x1FE7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7A4u;
    // 0x1fe7a8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF110u, 0x1FE7A4u, 0x1FE7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7ACu;
label_1fe7ac:
    // 0x1fe7ac: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe7b0: 0x3405fffe  ori         $a1, $zero, 0xFFFE
    ctx->pc = 0x1fe7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1fe7b4: 0xc07fdb8  jal         func_1FF6E0
    ctx->pc = 0x1FE7B4u;
    SET_GPR_U32(ctx, 31, 0x1FE7BCu);
    ctx->pc = 0x1FE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7B4u;
    // 0x1fe7b8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF6E0u, 0x1FE7B4u, 0x1FE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7BCu;
label_1fe7bc:
    // 0x1fe7bc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FE7BCu;
    {
        const bool branch_taken_0x1fe7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7BCu;
        // 0x1fe7c0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7bc) {
            ctx->pc = 0x1FE864u;
            goto label_1fe864;
        }
    }
    ctx->pc = 0x1FE7C4u;
    // 0x1fe7c4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fe7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe7c8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1fe7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fe7cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fe7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe7d0: 0x147e0024  bne         $v1, $fp, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FE7D0u;
    {
        const bool branch_taken_0x1fe7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        if (branch_taken_0x1fe7d0) {
            ctx->pc = 0x1FE864u;
            goto label_1fe864;
        }
    }
    ctx->pc = 0x1FE7D8u;
    // 0x1fe7d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fe7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7dc: 0x8cb30020  lw          $s3, 0x20($a1)
    ctx->pc = 0x1fe7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fe7e0: 0xc07fdc4  jal         func_1FF710
    ctx->pc = 0x1FE7E0u;
    SET_GPR_U32(ctx, 31, 0x1FE7E8u);
    ctx->pc = 0x1FE7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7E0u;
    // 0x1fe7e4: 0x3405fffe  ori         $a1, $zero, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF710u, 0x1FE7E0u, 0x1FE7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7E8u;
label_1fe7e8:
    // 0x1fe7e8: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1fe7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fe7ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fe7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1fe7f0: 0x1236001b  beq         $s1, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FE7F0u;
    {
        const bool branch_taken_0x1fe7f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x1FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7F0u;
        // 0x1fe7f4: 0x2378018  mult        $s0, $s1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7f0) {
            ctx->pc = 0x1FE860u;
            goto label_1fe860;
        }
    }
    ctx->pc = 0x1FE7F8u;
    // 0x1fe7f8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe7fc: 0x0  nop
    ctx->pc = 0x1fe7fcu;
    // NOP
label_1fe800:
    // 0x1fe800: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe804: 0xc07fc36  jal         func_1FF0D8
    ctx->pc = 0x1FE804u;
    SET_GPR_U32(ctx, 31, 0x1FE80Cu);
    ctx->pc = 0x1FE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE804u;
    // 0x1fe808: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF0D8u, 0x1FE804u, 0x1FE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE80Cu;
label_1fe80c:
    // 0x1fe80c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE80Cu;
    {
        const bool branch_taken_0x1fe80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE80Cu;
        // 0x1fe810: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe80c) {
            ctx->pc = 0x1FE854u;
            goto label_1fe854;
        }
    }
    ctx->pc = 0x1FE814u;
    // 0x1fe814: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe818: 0xc07fdb8  jal         func_1FF6E0
    ctx->pc = 0x1FE818u;
    SET_GPR_U32(ctx, 31, 0x1FE820u);
    ctx->pc = 0x1FE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE818u;
    // 0x1fe81c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF6E0u, 0x1FE818u, 0x1FE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE820u;
label_1fe820:
    // 0x1fe820: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE820u;
    {
        const bool branch_taken_0x1fe820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE820u;
        // 0x1fe824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe820) {
            ctx->pc = 0x1FE854u;
            goto label_1fe854;
        }
    }
    ctx->pc = 0x1FE828u;
    // 0x1fe828: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe82c: 0xc07fdc4  jal         func_1FF710
    ctx->pc = 0x1FE82Cu;
    SET_GPR_U32(ctx, 31, 0x1FE834u);
    ctx->pc = 0x1FE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE82Cu;
    // 0x1fe830: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF710u, 0x1FE82Cu, 0x1FE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE834u;
label_1fe834:
    // 0x1fe834: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE834u;
    {
        const bool branch_taken_0x1fe834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE834u;
        // 0x1fe838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe834) {
            ctx->pc = 0x1FE854u;
            goto label_1fe854;
        }
    }
    ctx->pc = 0x1FE83Cu;
    // 0x1fe83c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fe83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe840: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fe840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fe844: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fe844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fe848: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe84c: 0xc07fcb8  jal         func_1FF2E0
    ctx->pc = 0x1FE84Cu;
    SET_GPR_U32(ctx, 31, 0x1FE854u);
    ctx->pc = 0x1FE850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE84Cu;
    // 0x1fe850: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF2E0u, 0x1FE84Cu, 0x1FE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE854u;
label_1fe854:
    // 0x1fe854: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fe854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1fe858: 0x1634ffe9  bne         $s1, $s4, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1FE858u;
    {
        const bool branch_taken_0x1fe858 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1FE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE858u;
        // 0x1fe85c: 0x2610ffa4  addiu       $s0, $s0, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe858) {
            ctx->pc = 0x1FE800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe800;
        }
    }
    ctx->pc = 0x1FE860u;
label_1fe860:
    // 0x1fe860: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1fe860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe864:
    // 0x1fe864: 0x1616ffcc  bne         $s0, $s6, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FE864u;
    {
        const bool branch_taken_0x1fe864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x1FE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE864u;
        // 0x1fe868: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe864) {
            ctx->pc = 0x1FE798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe798;
        }
    }
    ctx->pc = 0x1FE86Cu;
label_1fe86c:
    // 0x1fe86c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1fe86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe870: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1fe870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe874: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1fe874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe878: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1fe878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe87c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fe87cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe880: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1fe880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe884: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1fe884u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe888: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1fe888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe88c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1fe88cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe894: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE894u;
        // 0x1fe898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE89Cu;
    // 0x1fe89c: 0x0  nop
    ctx->pc = 0x1fe89cu;
    // NOP
    ctx->pc = 0x1fe8a0u;
}
