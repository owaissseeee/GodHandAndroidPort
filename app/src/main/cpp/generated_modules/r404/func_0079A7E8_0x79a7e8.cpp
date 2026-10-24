#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: func_0079A7E8
// Address: 0x79a7e8 - 0x79a8c8
void func_0079A7E8_0x79a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A7E8_0x79a7e8");
#endif

    switch (ctx->pc) {
        case 0x79a828u: goto label_79a828;
        case 0x79a858u: goto label_79a858;
        case 0x79a878u: goto label_79a878;
        case 0x79a888u: goto label_79a888;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8b0u: goto label_79a8b0;
        default: break;
    }

    ctx->pc = 0x79a7e8u;

    // 0x79a7e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a7ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a7f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a7f4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a7fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79a7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a800: 0x8046abb8  lb          $a2, -0x5448($v0)
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79ABB8u));
    // 0x79a804: 0x2448abb8  addiu       $t0, $v0, -0x5448
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945720));
    // 0x79a808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a80c: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a818: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x79A818u;
    {
        const bool branch_taken_0x79a818 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A818u;
        // 0x79a81c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a818) {
            ctx->pc = 0x79A850u;
            goto label_79a850;
        }
    }
    ctx->pc = 0x79A820u;
    // 0x79a820: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x79a820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a824: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a828:
    // 0x79a828: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a82c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a830: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a834: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a838: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a83c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A83Cu;
    {
        const bool branch_taken_0x79a83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A83Cu;
        // 0x79a840: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a83c) {
            ctx->pc = 0x79A850u;
            goto label_79a850;
        }
    }
    ctx->pc = 0x79A844u;
    // 0x79a844: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a848: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A848u;
    {
        const bool branch_taken_0x79a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a848) {
            ctx->pc = 0x79A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A848u;
            // 0x79a84c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a828;
        }
    }
    ctx->pc = 0x79A850u;
label_79a850:
    // 0x79a850: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A850u;
    SET_GPR_U32(ctx, 31, 0x79A858u);
    ctx->pc = 0x79A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A850u;
    // 0x79a854: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A850u, 0x79A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A858u;
label_79a858:
    // 0x79a858: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79A858u;
    {
        const bool branch_taken_0x79a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A858u;
        // 0x79a85c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a858) {
            ctx->pc = 0x79A8B0u;
            goto label_79a8b0;
        }
    }
    ctx->pc = 0x79A860u;
    // 0x79a860: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A860u;
    {
        const bool branch_taken_0x79a860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x79a860) {
            ctx->pc = 0x79A890u;
            goto label_79a890;
        }
    }
    ctx->pc = 0x79A868u;
    // 0x79a868: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A868u;
    {
        const bool branch_taken_0x79a868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x79a868) {
            ctx->pc = 0x79A880u;
            goto label_79a880;
        }
    }
    ctx->pc = 0x79A870u;
    // 0x79a870: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x79A870u;
    SET_GPR_U32(ctx, 31, 0x79A878u);
    ctx->pc = 0x79A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A870u;
    // 0x79a874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x79A870u, 0x79A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A878u;
label_79a878:
    // 0x79a878: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79A878u;
    {
        const bool branch_taken_0x79a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A878u;
        // 0x79a87c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a878) {
            ctx->pc = 0x79A8B4u;
            goto label_79a8b4;
        }
    }
    ctx->pc = 0x79A880u;
label_79a880:
    // 0x79a880: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x79A880u;
    SET_GPR_U32(ctx, 31, 0x79A888u);
    ctx->pc = 0x79A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A880u;
    // 0x79a884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79A880u, 0x79A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A888u;
label_79a888:
    // 0x79a888: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A888u;
    {
        const bool branch_taken_0x79a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A888u;
        // 0x79a88c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a888) {
            ctx->pc = 0x79A8B4u;
            goto label_79a8b4;
        }
    }
    ctx->pc = 0x79A890u;
label_79a890:
    // 0x79a890: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A890u;
    {
        const bool branch_taken_0x79a890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x79a890) {
            ctx->pc = 0x79A8A8u;
            goto label_79a8a8;
        }
    }
    ctx->pc = 0x79A898u;
    // 0x79a898: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x79A898u;
    SET_GPR_U32(ctx, 31, 0x79A8A0u);
    ctx->pc = 0x79A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A898u;
    // 0x79a89c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x79A898u, 0x79A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A0u;
label_79a8a0:
    // 0x79a8a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A8A0u;
    {
        const bool branch_taken_0x79a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A0u;
        // 0x79a8a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a0) {
            ctx->pc = 0x79A8B4u;
            goto label_79a8b4;
        }
    }
    ctx->pc = 0x79A8A8u;
label_79a8a8:
    // 0x79a8a8: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x79A8A8u;
    SET_GPR_U32(ctx, 31, 0x79A8B0u);
    ctx->pc = 0x79A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8A8u;
    // 0x79a8ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x79A8A8u, 0x79A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B0u;
label_79a8b0:
    // 0x79a8b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a8b4:
    // 0x79a8b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8BCu;
        // 0x79a8c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A8C4u;
    // 0x79a8c4: 0x0  nop
    ctx->pc = 0x79a8c4u;
    // NOP
    ctx->pc = 0x79a8c8u;
}
} // namespace gh_r404
