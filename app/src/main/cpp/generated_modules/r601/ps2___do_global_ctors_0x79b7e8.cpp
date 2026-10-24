#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: __do_global_ctors
// Address: 0x79b7e8 - 0x79b898
void ps2___do_global_ctors_0x79b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79b7e8");
#endif

    switch (ctx->pc) {
        case 0x79b7e8u: goto label_79b7e8;
        case 0x79b7ecu: goto label_79b7ec;
        case 0x79b7f0u: goto label_79b7f0;
        case 0x79b7f4u: goto label_79b7f4;
        case 0x79b7f8u: goto label_79b7f8;
        case 0x79b7fcu: goto label_79b7fc;
        case 0x79b800u: goto label_79b800;
        case 0x79b804u: goto label_79b804;
        case 0x79b808u: goto label_79b808;
        case 0x79b80cu: goto label_79b80c;
        case 0x79b810u: goto label_79b810;
        case 0x79b814u: goto label_79b814;
        case 0x79b818u: goto label_79b818;
        case 0x79b81cu: goto label_79b81c;
        case 0x79b820u: goto label_79b820;
        case 0x79b824u: goto label_79b824;
        case 0x79b828u: goto label_79b828;
        case 0x79b82cu: goto label_79b82c;
        case 0x79b830u: goto label_79b830;
        case 0x79b834u: goto label_79b834;
        case 0x79b838u: goto label_79b838;
        case 0x79b83cu: goto label_79b83c;
        case 0x79b840u: goto label_79b840;
        case 0x79b844u: goto label_79b844;
        case 0x79b848u: goto label_79b848;
        case 0x79b84cu: goto label_79b84c;
        case 0x79b850u: goto label_79b850;
        case 0x79b854u: goto label_79b854;
        case 0x79b858u: goto label_79b858;
        case 0x79b85cu: goto label_79b85c;
        case 0x79b860u: goto label_79b860;
        case 0x79b864u: goto label_79b864;
        case 0x79b868u: goto label_79b868;
        case 0x79b86cu: goto label_79b86c;
        case 0x79b870u: goto label_79b870;
        case 0x79b874u: goto label_79b874;
        case 0x79b878u: goto label_79b878;
        case 0x79b87cu: goto label_79b87c;
        case 0x79b880u: goto label_79b880;
        case 0x79b884u: goto label_79b884;
        case 0x79b888u: goto label_79b888;
        case 0x79b88cu: goto label_79b88c;
        case 0x79b890u: goto label_79b890;
        case 0x79b894u: goto label_79b894;
        default: break;
    }

    ctx->pc = 0x79b7e8u;

label_79b7e8:
    // 0x79b7e8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b7ec:
    // 0x79b7ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79b7f0:
    // 0x79b7f0: 0x8ce5bb00  lw          $a1, -0x4500($a3)
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294949632)));
label_79b7f4:
    // 0x79b7f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b7f8:
    // 0x79b7f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b7fc:
    // 0x79b7fc: 0x24e3bb00  addiu       $v1, $a3, -0x4500
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949632));
label_79b800:
    // 0x79b800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79b804:
    // 0x79b804: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79b808:
    if (ctx->pc == 0x79B808u) {
        ctx->pc = 0x79B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B804u;
        // 0x79b808: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B80Cu;
        goto label_79b80c;
    }
    ctx->pc = 0x79B804u;
    {
        const bool branch_taken_0x79b804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B804u;
        // 0x79b808: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b804) {
            ctx->pc = 0x79B84Cu;
            goto label_79b84c;
        }
    }
    ctx->pc = 0x79B80Cu;
label_79b80c:
    // 0x79b80c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79b810:
    // 0x79b810: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79b814:
    if (ctx->pc == 0x79B814u) {
        ctx->pc = 0x79B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B810u;
        // 0x79b814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B818u;
        goto label_79b818;
    }
    ctx->pc = 0x79B810u;
    {
        const bool branch_taken_0x79b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B810u;
        // 0x79b814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b810) {
            ctx->pc = 0x79B84Cu;
            goto label_79b84c;
        }
    }
    ctx->pc = 0x79B818u;
label_79b818:
    // 0x79b818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b81c:
    // 0x79b81c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79b81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79b820:
    // 0x79b820: 0x24e4bb00  addiu       $a0, $a3, -0x4500
    ctx->pc = 0x79b820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949632));
label_79b824:
    // 0x79b824: 0x0  nop
    ctx->pc = 0x79b824u;
    // NOP
label_79b828:
    // 0x79b828: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79b828u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79b82c:
    // 0x79b82c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b830:
    // 0x79b830: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79b834:
    // 0x79b834: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79b834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79b838:
    // 0x79b838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79b83c:
    // 0x79b83c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79b840:
    // 0x79b840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b844:
    // 0x79b844: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79b848:
    if (ctx->pc == 0x79B848u) {
        ctx->pc = 0x79B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B844u;
        // 0x79b848: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B84Cu;
        goto label_79b84c;
    }
    ctx->pc = 0x79B844u;
    {
        const bool branch_taken_0x79b844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b844) {
            ctx->pc = 0x79B848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B844u;
            // 0x79b848: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b828;
        }
    }
    ctx->pc = 0x79B84Cu;
label_79b84c:
    // 0x79b84c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79b84cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79b850:
    // 0x79b850: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79b850u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79b854:
    // 0x79b854: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79b858:
    if (ctx->pc == 0x79B858u) {
        ctx->pc = 0x79B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B854u;
        // 0x79b858: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B85Cu;
        goto label_79b85c;
    }
    ctx->pc = 0x79B854u;
    {
        const bool branch_taken_0x79b854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B854u;
        // 0x79b858: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b854) {
            ctx->pc = 0x79B884u;
            goto label_79b884;
        }
    }
    ctx->pc = 0x79B85Cu;
label_79b85c:
    // 0x79b85c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79b860:
    // 0x79b860: 0x2442bb00  addiu       $v0, $v0, -0x4500
    ctx->pc = 0x79b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949632));
label_79b864:
    // 0x79b864: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79b864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b868:
    // 0x79b868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b86c:
    // 0x79b86c: 0x0  nop
    ctx->pc = 0x79b86cu;
    // NOP
label_79b870:
    // 0x79b870: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79b870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79b874:
    // 0x79b874: 0x40f809  jalr        $v0
label_79b878:
    if (ctx->pc == 0x79B878u) {
        ctx->pc = 0x79B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B874u;
        // 0x79b878: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B87Cu;
        goto label_79b87c;
    }
    ctx->pc = 0x79B874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B87Cu);
        ctx->pc = 0x79B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B874u;
        // 0x79b878: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B874u, 0x79B87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B87Cu;
label_79b87c:
    // 0x79b87c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79b880:
    if (ctx->pc == 0x79B880u) {
        ctx->pc = 0x79B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B87Cu;
        // 0x79b880: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B884u;
        goto label_79b884;
    }
    ctx->pc = 0x79B87Cu;
    {
        const bool branch_taken_0x79b87c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b87c) {
            ctx->pc = 0x79B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B87Cu;
            // 0x79b880: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b870;
        }
    }
    ctx->pc = 0x79B884u;
label_79b884:
    // 0x79b884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b888:
    // 0x79b888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79b888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b88c:
    // 0x79b88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b890:
    // 0x79b890: 0x3e00008  jr          $ra
label_79b894:
    if (ctx->pc == 0x79B894u) {
        ctx->pc = 0x79B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B890u;
        // 0x79b894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B898u;
        goto label_fallthrough_0x79b890;
    }
    ctx->pc = 0x79B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B890u;
        // 0x79b894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b890:
    ctx->pc = 0x79B898u;
}
} // namespace gh_r601
