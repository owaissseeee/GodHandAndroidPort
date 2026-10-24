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

// Function: func_0034A818
// Address: 0x34a818 - 0x34a9b8
void func_0034A818_0x34a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A818_0x34a818");
#endif

    switch (ctx->pc) {
        case 0x34a858u: goto label_34a858;
        case 0x34a864u: goto label_34a864;
        case 0x34a880u: goto label_34a880;
        case 0x34a8c4u: goto label_34a8c4;
        case 0x34a8dcu: goto label_34a8dc;
        case 0x34a8f8u: goto label_34a8f8;
        case 0x34a914u: goto label_34a914;
        case 0x34a930u: goto label_34a930;
        case 0x34a938u: goto label_34a938;
        case 0x34a954u: goto label_34a954;
        default: break;
    }

    ctx->pc = 0x34a818u;

    // 0x34a818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34a81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34a820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34a824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34a824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a828: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34a82c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x34a830: 0x26351020  addiu       $s5, $s1, 0x1020
    ctx->pc = 0x34a830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4128));
    // 0x34a834: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x34a838: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x34a838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a83c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34a840: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34a844: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34a848: 0x8e342004  lw          $s4, 0x2004($s1)
    ctx->pc = 0x34a848u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8196)));
    // 0x34a84c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x34a84cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34a850: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x34A850u;
    SET_GPR_U32(ctx, 31, 0x34A858u);
    ctx->pc = 0x34A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A850u;
    // 0x34a854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x34A850u, 0x34A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A858u;
label_34a858:
    // 0x34a858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a85c: 0xc0cac2c  jal         func_32B0B0
    ctx->pc = 0x34A85Cu;
    SET_GPR_U32(ctx, 31, 0x34A864u);
    ctx->pc = 0x34A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A85Cu;
    // 0x34a860: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B0B0u, 0x34A85Cu, 0x34A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A864u;
label_34a864:
    // 0x34a864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34a864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a868: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34A868u;
    {
        const bool branch_taken_0x34a868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A868u;
        // 0x34a86c: 0x3c020076  lui         $v0, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a868) {
            ctx->pc = 0x34A874u;
            goto label_34a874;
        }
    }
    ctx->pc = 0x34A870u;
    // 0x34a870: 0xac500dac  sw          $s0, 0xDAC($v0)
    ctx->pc = 0x34a870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3500), GPR_U32(ctx, 16));
label_34a874:
    // 0x34a874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a878: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34A878u;
    SET_GPR_U32(ctx, 31, 0x34A880u);
    ctx->pc = 0x34A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A878u;
    // 0x34a87c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34A878u, 0x34A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A880u;
label_34a880:
    // 0x34a880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34a884: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x34a884u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x34a888: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34A888u;
    {
        const bool branch_taken_0x34a888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x34A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A888u;
        // 0x34a88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a888) {
            ctx->pc = 0x34A8B8u;
            goto label_34a8b8;
        }
    }
    ctx->pc = 0x34A890u;
    // 0x34a890: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A890u;
    {
        const bool branch_taken_0x34a890 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x34A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A890u;
        // 0x34a894: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a890) {
            ctx->pc = 0x34A8A8u;
            goto label_34a8a8;
        }
    }
    ctx->pc = 0x34A898u;
    // 0x34a898: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34A898u;
    {
        const bool branch_taken_0x34a898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x34a898) {
            ctx->pc = 0x34A8D0u;
            goto label_34a8d0;
        }
    }
    ctx->pc = 0x34A8A0u;
    // 0x34a8a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34A8A0u;
    {
        const bool branch_taken_0x34a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a8a0) {
            ctx->pc = 0x34A8E8u;
            goto label_34a8e8;
        }
    }
    ctx->pc = 0x34A8A8u;
label_34a8a8:
    // 0x34a8a8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A8A8u;
    {
        const bool branch_taken_0x34a8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8A8u;
        // 0x34a8ac: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8a8) {
            ctx->pc = 0x34A8FCu;
            goto label_34a8fc;
        }
    }
    ctx->pc = 0x34A8B0u;
    // 0x34a8b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34A8B0u;
    {
        const bool branch_taken_0x34a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a8b0) {
            ctx->pc = 0x34A8E8u;
            goto label_34a8e8;
        }
    }
    ctx->pc = 0x34A8B8u;
label_34a8b8:
    // 0x34a8b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34a8bc: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34A8BCu;
    SET_GPR_U32(ctx, 31, 0x34A8C4u);
    ctx->pc = 0x34A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A8BCu;
    // 0x34a8c0: 0x34a50c08  ori         $a1, $a1, 0xC08 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3080);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34A8BCu, 0x34A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A8C4u;
label_34a8c4:
    // 0x34a8c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34A8C4u;
    {
        const bool branch_taken_0x34a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8C4u;
        // 0x34a8c8: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8c4) {
            ctx->pc = 0x34A8FCu;
            goto label_34a8fc;
        }
    }
    ctx->pc = 0x34A8CCu;
    // 0x34a8cc: 0x0  nop
    ctx->pc = 0x34a8ccu;
    // NOP
label_34a8d0:
    // 0x34a8d0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34a8d4: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34A8D4u;
    SET_GPR_U32(ctx, 31, 0x34A8DCu);
    ctx->pc = 0x34A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A8D4u;
    // 0x34a8d8: 0x34a50c09  ori         $a1, $a1, 0xC09 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3081);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34A8D4u, 0x34A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A8DCu;
label_34a8dc:
    // 0x34a8dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34A8DCu;
    {
        const bool branch_taken_0x34a8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8DCu;
        // 0x34a8e0: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8dc) {
            ctx->pc = 0x34A8FCu;
            goto label_34a8fc;
        }
    }
    ctx->pc = 0x34A8E4u;
    // 0x34a8e4: 0x0  nop
    ctx->pc = 0x34a8e4u;
    // NOP
label_34a8e8:
    // 0x34a8e8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34a8ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8f0: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34A8F0u;
    SET_GPR_U32(ctx, 31, 0x34A8F8u);
    ctx->pc = 0x34A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A8F0u;
    // 0x34a8f4: 0x34a50c07  ori         $a1, $a1, 0xC07 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34A8F0u, 0x34A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A8F8u;
label_34a8f8:
    // 0x34a8f8: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x34a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_34a8fc:
    // 0x34a8fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x34a8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34a900: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A900u;
    {
        const bool branch_taken_0x34a900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a900) {
            ctx->pc = 0x34A904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A900u;
            // 0x34a904: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A918u;
            goto label_34a918;
        }
    }
    ctx->pc = 0x34A908u;
    // 0x34a908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a90c: 0xc0d7150  jal         func_35C540
    ctx->pc = 0x34A90Cu;
    SET_GPR_U32(ctx, 31, 0x34A914u);
    ctx->pc = 0x34A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A90Cu;
    // 0x34a910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C540u, 0x34A90Cu, 0x34A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A914u;
label_34a914:
    // 0x34a914: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x34a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_34a918:
    // 0x34a918: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A918u;
    {
        const bool branch_taken_0x34a918 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x34A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A918u;
        // 0x34a91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a918) {
            ctx->pc = 0x34A928u;
            goto label_34a928;
        }
    }
    ctx->pc = 0x34A920u;
    // 0x34a920: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A920u;
    {
        const bool branch_taken_0x34a920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a920) {
            ctx->pc = 0x34A930u;
            goto label_34a930;
        }
    }
    ctx->pc = 0x34A928u;
label_34a928:
    // 0x34a928: 0xc0d2abe  jal         func_34AAF8
    ctx->pc = 0x34A928u;
    SET_GPR_U32(ctx, 31, 0x34A930u);
    ctx->pc = 0x34A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A928u;
    // 0x34a92c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AAF8u, 0x34A928u, 0x34A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A930u;
label_34a930:
    // 0x34a930: 0xc0d2ab2  jal         func_34AAC8
    ctx->pc = 0x34A930u;
    SET_GPR_U32(ctx, 31, 0x34A938u);
    ctx->pc = 0x34A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A930u;
    // 0x34a934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AAC8u, 0x34A930u, 0x34A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A938u;
label_34a938:
    // 0x34a938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a93c: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A93Cu;
    {
        const bool branch_taken_0x34a93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A93Cu;
        // 0x34a940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a93c) {
            ctx->pc = 0x34A990u;
            goto label_34a990;
        }
    }
    ctx->pc = 0x34A944u;
    // 0x34a944: 0x56c00013  bnel        $s6, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x34A944u;
    {
        const bool branch_taken_0x34a944 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a944) {
            ctx->pc = 0x34A948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A944u;
            // 0x34a948: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A994u;
            goto label_34a994;
        }
    }
    ctx->pc = 0x34A94Cu;
    // 0x34a94c: 0xc0cad26  jal         func_32B498
    ctx->pc = 0x34A94Cu;
    SET_GPR_U32(ctx, 31, 0x34A954u);
    ctx->pc = 0x34A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A94Cu;
    // 0x34a950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B498u, 0x34A94Cu, 0x34A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A954u;
label_34a954:
    // 0x34a954: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x34a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x34a958: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34A958u;
    {
        const bool branch_taken_0x34a958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A958u;
        // 0x34a95c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a958) {
            ctx->pc = 0x34A990u;
            goto label_34a990;
        }
    }
    ctx->pc = 0x34A960u;
    // 0x34a960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34a964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a96c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34a96cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a970: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34a970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a974: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34a974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a978: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34a978u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a97c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34a97cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a980: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a984: 0x80d2abe  j           func_34AAF8
    ctx->pc = 0x34A984u;
    ctx->pc = 0x34A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A984u;
    // 0x34a988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AAF8u, 0x34A984u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34A98Cu;
    // 0x34a98c: 0x0  nop
    ctx->pc = 0x34a98cu;
    // NOP
label_34a990:
    // 0x34a990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34a990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34a994:
    // 0x34a994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34a994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a998: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34a998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a99c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34a99cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a9a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34a9a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a9a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34a9a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a9a8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34A9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9ACu;
        // 0x34a9b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A9B4u;
    // 0x34a9b4: 0x0  nop
    ctx->pc = 0x34a9b4u;
    // NOP
    ctx->pc = 0x34a9b8u;
}
