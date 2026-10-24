#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079A7F8
// Address: 0x79a7f8 - 0x79a880
void func_0079A7F8_0x79a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A7F8_0x79a7f8");
#endif

    switch (ctx->pc) {
        case 0x79a828u: goto label_79a828;
        case 0x79a858u: goto label_79a858;
        case 0x79a868u: goto label_79a868;
        default: break;
    }

    ctx->pc = 0x79a7f8u;

    // 0x79a7f8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a7fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a800: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a804: 0x8044b4e0  lb          $a0, -0x4B20($v0)
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79B4E0u));
    // 0x79a808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a80c: 0x2446b4e0  addiu       $a2, $v0, -0x4B20
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
    // 0x79a810: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a818: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A818u;
    {
        const bool branch_taken_0x79a818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
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
    // 0x79a820: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a824: 0x0  nop
    ctx->pc = 0x79a824u;
    // NOP
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
    // 0x79a854: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A850u, 0x79A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A858u;
label_79a858:
    // 0x79a858: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A858u;
    {
        const bool branch_taken_0x79a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a858) {
            ctx->pc = 0x79A85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A858u;
            // 0x79a85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A870u;
            goto label_79a870;
        }
    }
    ctx->pc = 0x79A860u;
    // 0x79a860: 0xc060574  jal         func_1815D0
    ctx->pc = 0x79A860u;
    SET_GPR_U32(ctx, 31, 0x79A868u);
    ctx->pc = 0x79A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A860u;
    // 0x79a864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815D0u, 0x79A860u, 0x79A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A868u;
label_79a868:
    // 0x79a868: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A868u;
    {
        const bool branch_taken_0x79a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a868) {
            ctx->pc = 0x79A874u;
            goto label_79a874;
        }
    }
    ctx->pc = 0x79A870u;
label_79a870:
    // 0x79a870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a874:
    // 0x79a874: 0x3e00008  jr          $ra
    ctx->pc = 0x79A874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A874u;
        // 0x79a878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A87Cu;
    // 0x79a87c: 0x0  nop
    ctx->pc = 0x79a87cu;
    // NOP
    ctx->pc = 0x79a880u;
}
} // namespace gh_r604
