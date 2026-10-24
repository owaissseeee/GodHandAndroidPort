#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: GetShopGold__17cSkillListManager
// Address: 0x79a820 - 0x79a970
void GetShopGold__17cSkillListManager_0x79a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShopGold__17cSkillListManager_0x79a820");
#endif

    switch (ctx->pc) {
        case 0x79a868u: goto label_79a868;
        case 0x79a874u: goto label_79a874;
        case 0x79a880u: goto label_79a880;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a904u: goto label_79a904;
        case 0x79a91cu: goto label_79a91c;
        default: break;
    }

    ctx->pc = 0x79a820u;

    // 0x79a820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79a824: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79a828: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79a82c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79a82cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a830: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79a830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79a834: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79a838: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79a83c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x79a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x79a840: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x79a840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x79a844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a848: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a84c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A84Cu;
    {
        const bool branch_taken_0x79a84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A84Cu;
        // 0x79a850: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a84c) {
            ctx->pc = 0x79A85Cu;
            goto label_79a85c;
        }
    }
    ctx->pc = 0x79A854u;
    // 0x79a854: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x79A854u;
    {
        const bool branch_taken_0x79a854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A854u;
        // 0x79a858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a854) {
            ctx->pc = 0x79A944u;
            goto label_79a944;
        }
    }
    ctx->pc = 0x79A85Cu;
label_79a85c:
    // 0x79a85c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x79a85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79A860u;
    {
        const bool branch_taken_0x79a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A860u;
        // 0x79a864: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a860) {
            ctx->pc = 0x79A8B8u;
            goto label_79a8b8;
        }
    }
    ctx->pc = 0x79A868u;
label_79a868:
    // 0x79a868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a86c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x79A86Cu;
    SET_GPR_U32(ctx, 31, 0x79A874u);
    ctx->pc = 0x79A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A86Cu;
    // 0x79a870: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x79A86Cu, 0x79A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A874u;
label_79a874:
    // 0x79a874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a878: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A878u;
    SET_GPR_U32(ctx, 31, 0x79A880u);
    ctx->pc = 0x79A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A878u;
    // 0x79a87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A878u, 0x79A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A880u;
label_79a880:
    // 0x79a880: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a884: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x79A884u;
    {
        const bool branch_taken_0x79a884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x79a884) {
            ctx->pc = 0x79A888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A884u;
            // 0x79a888: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8B8u;
            goto label_79a8b8;
        }
    }
    ctx->pc = 0x79A88Cu;
    // 0x79a88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a894: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x79A894u;
    SET_GPR_U32(ctx, 31, 0x79A89Cu);
    ctx->pc = 0x79A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A894u;
    // 0x79a898: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x79A894u, 0x79A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A89Cu;
label_79a89c:
    // 0x79a89c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x79a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a8a0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x79a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a8a4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x79a8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79a8ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a8b0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79a8b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a8b8:
    // 0x79a8b8: 0x26709b70  addiu       $s0, $s3, -0x6490
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x79a8bc: 0xc07ef58  jal         func_1FBD60
    ctx->pc = 0x79A8BCu;
    SET_GPR_U32(ctx, 31, 0x79A8C4u);
    ctx->pc = 0x79A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8BCu;
    // 0x79a8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD60u, 0x79A8BCu, 0x79A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8C4u;
label_79a8c4:
    // 0x79a8c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x79a8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a8c8: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79A8C8u;
    {
        const bool branch_taken_0x79a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8c8) {
            ctx->pc = 0x79A8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8C8u;
            // 0x79a8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a868;
        }
    }
    ctx->pc = 0x79A8D0u;
    // 0x79a8d0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79a8d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a8dc: 0x24150024  addiu       $s5, $zero, 0x24
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a8e0: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x79a8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a8e4: 0x0  nop
    ctx->pc = 0x79a8e4u;
    // NOP
label_79a8e8:
    // 0x79a8e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8f0: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x79A8F0u;
    SET_GPR_U32(ctx, 31, 0x79A8F8u);
    ctx->pc = 0x79A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8F0u;
    // 0x79a8f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x79A8F0u, 0x79A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F8u;
label_79a8f8:
    // 0x79a8f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8fc: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A8FCu;
    SET_GPR_U32(ctx, 31, 0x79A904u);
    ctx->pc = 0x79A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8FCu;
    // 0x79a900: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A8FCu, 0x79A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A904u;
label_79a904:
    // 0x79a904: 0x1456000b  bne         $v0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x79A904u;
    {
        const bool branch_taken_0x79a904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x79A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A904u;
        // 0x79a908: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a904) {
            ctx->pc = 0x79A934u;
            goto label_79a934;
        }
    }
    ctx->pc = 0x79A90Cu;
    // 0x79a90c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a914: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x79A914u;
    SET_GPR_U32(ctx, 31, 0x79A91Cu);
    ctx->pc = 0x79A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A914u;
    // 0x79a918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x79A914u, 0x79A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A91Cu;
label_79a91c:
    // 0x79a91c: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x79a91cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a920: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x79a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79a928: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a92c: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x79a92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x79a930: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79a930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a934:
    // 0x79a934: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x79a934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a938: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x79A938u;
    {
        const bool branch_taken_0x79a938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a938) {
            ctx->pc = 0x79A8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8e8;
        }
    }
    ctx->pc = 0x79A940u;
    // 0x79a940: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79a940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a944:
    // 0x79a944: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79a944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a948: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79a948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a94c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79a94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a950: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79a950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a954: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79a954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a958: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x79a958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a95c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x79a95cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a964: 0x3e00008  jr          $ra
    ctx->pc = 0x79A964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A96Cu;
    // 0x79a96c: 0x0  nop
    ctx->pc = 0x79a96cu;
    // NOP
    ctx->pc = 0x79a970u;
}
} // namespace gh_r000
