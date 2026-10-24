#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r803_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r803
{
// Function: __do_global_ctors
// Address: 0x7997d8 - 0x799888
void ps2___do_global_ctors_0x7997d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7997d8");
#endif

    switch (ctx->pc) {
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
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
        default: break;
    }

    ctx->pc = 0x7997d8u;

label_7997d8:
    // 0x7997d8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7997dc:
    // 0x7997dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7997e0:
    // 0x7997e0: 0x8ce59a00  lw          $a1, -0x6600($a3)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941184)));
label_7997e4:
    // 0x7997e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7997e8:
    // 0x7997e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7997e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7997ec:
    // 0x7997ec: 0x24e39a00  addiu       $v1, $a3, -0x6600
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941184));
label_7997f0:
    // 0x7997f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7997f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7997f4:
    // 0x7997f4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7997f8:
    if (ctx->pc == 0x7997F8u) {
        ctx->pc = 0x7997F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F4u;
        // 0x7997f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997FCu;
        goto label_7997fc;
    }
    ctx->pc = 0x7997F4u;
    {
        const bool branch_taken_0x7997f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7997F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F4u;
        // 0x7997f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f4) {
            ctx->pc = 0x79983Cu;
            goto label_79983c;
        }
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799800:
    // 0x799800: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799804:
    if (ctx->pc == 0x799804u) {
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799808u;
        goto label_799808;
    }
    ctx->pc = 0x799800u;
    {
        const bool branch_taken_0x799800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799800) {
            ctx->pc = 0x79983Cu;
            goto label_79983c;
        }
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79980c:
    // 0x79980c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799810:
    // 0x799810: 0x24e49a00  addiu       $a0, $a3, -0x6600
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941184));
label_799814:
    // 0x799814: 0x0  nop
    ctx->pc = 0x799814u;
    // NOP
label_799818:
    // 0x799818: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799818u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79981c:
    // 0x79981c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799820:
    // 0x799820: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799824:
    // 0x799824: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799828:
    // 0x799828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79982c:
    // 0x79982c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799830:
    // 0x799830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799834:
    // 0x799834: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799838:
    if (ctx->pc == 0x799838u) {
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79983Cu;
        goto label_79983c;
    }
    ctx->pc = 0x799834u;
    {
        const bool branch_taken_0x799834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799834) {
            ctx->pc = 0x799838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799834u;
            // 0x799838: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799818;
        }
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799840:
    // 0x799840: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799840u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799844:
    // 0x799844: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799848:
    if (ctx->pc == 0x799848u) {
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79984Cu;
        goto label_79984c;
    }
    ctx->pc = 0x799844u;
    {
        const bool branch_taken_0x799844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799844) {
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x79984Cu;
label_79984c:
    // 0x79984c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799850:
    // 0x799850: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
label_799854:
    // 0x799854: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799858:
    // 0x799858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79985c:
    // 0x79985c: 0x0  nop
    ctx->pc = 0x79985cu;
    // NOP
label_799860:
    // 0x799860: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799864:
    // 0x799864: 0x40f809  jalr        $v0
label_799868:
    if (ctx->pc == 0x799868u) {
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79986Cu;
        goto label_79986c;
    }
    ctx->pc = 0x799864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79986Cu);
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799864u, 0x79986Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79986Cu;
label_79986c:
    // 0x79986c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799870:
    if (ctx->pc == 0x799870u) {
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799874u;
        goto label_799874;
    }
    ctx->pc = 0x79986Cu;
    {
        const bool branch_taken_0x79986c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79986c) {
            ctx->pc = 0x799870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79986Cu;
            // 0x799870: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799860;
        }
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799878:
    // 0x799878: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79987c:
    // 0x79987c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799880:
    // 0x799880: 0x3e00008  jr          $ra
label_799884:
    if (ctx->pc == 0x799884u) {
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799888u;
        goto label_fallthrough_0x799880;
    }
    ctx->pc = 0x799880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799880:
    ctx->pc = 0x799888u;
}
} // namespace gh_r803
