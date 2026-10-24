#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: __do_global_ctors
// Address: 0x799828 - 0x7998d8
void ps2___do_global_ctors_0x799828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799828");
#endif

    switch (ctx->pc) {
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        default: break;
    }

    ctx->pc = 0x799828u;

label_799828:
    // 0x799828: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79982c:
    // 0x79982c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799830:
    // 0x799830: 0x8ce59b80  lw          $a1, -0x6480($a3)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941568)));
label_799834:
    // 0x799834: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799838:
    // 0x799838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79983c:
    // 0x79983c: 0x24e39b80  addiu       $v1, $a3, -0x6480
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941568));
label_799840:
    // 0x799840: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799844:
    // 0x799844: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799848:
    if (ctx->pc == 0x799848u) {
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79984Cu;
        goto label_79984c;
    }
    ctx->pc = 0x799844u;
    {
        const bool branch_taken_0x799844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799844) {
            ctx->pc = 0x79988Cu;
            goto label_79988c;
        }
    }
    ctx->pc = 0x79984Cu;
label_79984c:
    // 0x79984c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799850:
    // 0x799850: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799854:
    if (ctx->pc == 0x799854u) {
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799858u;
        goto label_799858;
    }
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799850) {
            ctx->pc = 0x79988Cu;
            goto label_79988c;
        }
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79985c:
    // 0x79985c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799860:
    // 0x799860: 0x24e49b80  addiu       $a0, $a3, -0x6480
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941568));
label_799864:
    // 0x799864: 0x0  nop
    ctx->pc = 0x799864u;
    // NOP
label_799868:
    // 0x799868: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799868u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79986c:
    // 0x79986c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79986cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799870:
    // 0x799870: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799874:
    // 0x799874: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799878:
    // 0x799878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79987c:
    // 0x79987c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799880:
    // 0x799880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799884:
    // 0x799884: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799888:
    if (ctx->pc == 0x799888u) {
        ctx->pc = 0x799888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799884u;
        // 0x799888: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79988Cu;
        goto label_79988c;
    }
    ctx->pc = 0x799884u;
    {
        const bool branch_taken_0x799884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799884) {
            ctx->pc = 0x799888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799884u;
            // 0x799888: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799868;
        }
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799890:
    // 0x799890: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799890u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799894:
    // 0x799894: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799894) {
            ctx->pc = 0x7998C4u;
            goto label_7998c4;
        }
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7998a0:
    // 0x7998a0: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
label_7998a4:
    // 0x7998a4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7998a8:
    // 0x7998a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7998ac:
    // 0x7998ac: 0x0  nop
    ctx->pc = 0x7998acu;
    // NOP
label_7998b0:
    // 0x7998b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_7998b4:
    // 0x7998b4: 0x40f809  jalr        $v0
label_7998b8:
    if (ctx->pc == 0x7998B8u) {
        ctx->pc = 0x7998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B4u;
        // 0x7998b8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998BCu;
        goto label_7998bc;
    }
    ctx->pc = 0x7998B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7998BCu);
        ctx->pc = 0x7998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B4u;
        // 0x7998b8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998B4u, 0x7998BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7998BCu;
label_7998bc:
    // 0x7998bc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7998c0:
    if (ctx->pc == 0x7998C0u) {
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C4u;
        goto label_7998c4;
    }
    ctx->pc = 0x7998BCu;
    {
        const bool branch_taken_0x7998bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998bc) {
            ctx->pc = 0x7998C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998BCu;
            // 0x7998c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998b0;
        }
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7998c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7998c8:
    // 0x7998c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7998cc:
    // 0x7998cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7998ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7998d0:
    // 0x7998d0: 0x3e00008  jr          $ra
label_7998d4:
    if (ctx->pc == 0x7998D4u) {
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D8u;
        goto label_fallthrough_0x7998d0;
    }
    ctx->pc = 0x7998D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7998d0:
    ctx->pc = 0x7998D8u;
}
} // namespace gh_r003
