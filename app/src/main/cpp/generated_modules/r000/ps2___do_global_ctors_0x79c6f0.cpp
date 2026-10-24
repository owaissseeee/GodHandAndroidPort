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
// Function: __do_global_ctors
// Address: 0x79c6f0 - 0x79c7a0
void ps2___do_global_ctors_0x79c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79c6f0");
#endif

    switch (ctx->pc) {
        case 0x79c6f0u: goto label_79c6f0;
        case 0x79c6f4u: goto label_79c6f4;
        case 0x79c6f8u: goto label_79c6f8;
        case 0x79c6fcu: goto label_79c6fc;
        case 0x79c700u: goto label_79c700;
        case 0x79c704u: goto label_79c704;
        case 0x79c708u: goto label_79c708;
        case 0x79c70cu: goto label_79c70c;
        case 0x79c710u: goto label_79c710;
        case 0x79c714u: goto label_79c714;
        case 0x79c718u: goto label_79c718;
        case 0x79c71cu: goto label_79c71c;
        case 0x79c720u: goto label_79c720;
        case 0x79c724u: goto label_79c724;
        case 0x79c728u: goto label_79c728;
        case 0x79c72cu: goto label_79c72c;
        case 0x79c730u: goto label_79c730;
        case 0x79c734u: goto label_79c734;
        case 0x79c738u: goto label_79c738;
        case 0x79c73cu: goto label_79c73c;
        case 0x79c740u: goto label_79c740;
        case 0x79c744u: goto label_79c744;
        case 0x79c748u: goto label_79c748;
        case 0x79c74cu: goto label_79c74c;
        case 0x79c750u: goto label_79c750;
        case 0x79c754u: goto label_79c754;
        case 0x79c758u: goto label_79c758;
        case 0x79c75cu: goto label_79c75c;
        case 0x79c760u: goto label_79c760;
        case 0x79c764u: goto label_79c764;
        case 0x79c768u: goto label_79c768;
        case 0x79c76cu: goto label_79c76c;
        case 0x79c770u: goto label_79c770;
        case 0x79c774u: goto label_79c774;
        case 0x79c778u: goto label_79c778;
        case 0x79c77cu: goto label_79c77c;
        case 0x79c780u: goto label_79c780;
        case 0x79c784u: goto label_79c784;
        case 0x79c788u: goto label_79c788;
        case 0x79c78cu: goto label_79c78c;
        case 0x79c790u: goto label_79c790;
        case 0x79c794u: goto label_79c794;
        case 0x79c798u: goto label_79c798;
        case 0x79c79cu: goto label_79c79c;
        default: break;
    }

    ctx->pc = 0x79c6f0u;

label_79c6f0:
    // 0x79c6f0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79c6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79c6f4:
    // 0x79c6f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c6f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79c6f8:
    // 0x79c6f8: 0x8ce5c804  lw          $a1, -0x37FC($a3)
    ctx->pc = 0x79c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294952964)));
label_79c6fc:
    // 0x79c6fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79c700:
    // 0x79c700: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79c704:
    // 0x79c704: 0x24e3c804  addiu       $v1, $a3, -0x37FC
    ctx->pc = 0x79c704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952964));
label_79c708:
    // 0x79c708: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79c70c:
    // 0x79c70c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79c710:
    if (ctx->pc == 0x79C710u) {
        ctx->pc = 0x79C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C70Cu;
        // 0x79c710: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C714u;
        goto label_79c714;
    }
    ctx->pc = 0x79C70Cu;
    {
        const bool branch_taken_0x79c70c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C70Cu;
        // 0x79c710: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c70c) {
            ctx->pc = 0x79C754u;
            goto label_79c754;
        }
    }
    ctx->pc = 0x79C714u;
label_79c714:
    // 0x79c714: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79c718:
    // 0x79c718: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79c71c:
    if (ctx->pc == 0x79C71Cu) {
        ctx->pc = 0x79C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C718u;
        // 0x79c71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C720u;
        goto label_79c720;
    }
    ctx->pc = 0x79C718u;
    {
        const bool branch_taken_0x79c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C718u;
        // 0x79c71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c718) {
            ctx->pc = 0x79C754u;
            goto label_79c754;
        }
    }
    ctx->pc = 0x79C720u;
label_79c720:
    // 0x79c720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c724:
    // 0x79c724: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79c724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79c728:
    // 0x79c728: 0x24e4c804  addiu       $a0, $a3, -0x37FC
    ctx->pc = 0x79c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952964));
label_79c72c:
    // 0x79c72c: 0x0  nop
    ctx->pc = 0x79c72cu;
    // NOP
label_79c730:
    // 0x79c730: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79c730u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79c734:
    // 0x79c734: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79c738:
    // 0x79c738: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79c73c:
    // 0x79c73c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c73cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79c740:
    // 0x79c740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79c740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79c744:
    // 0x79c744: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79c748:
    // 0x79c748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c74c:
    // 0x79c74c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79c750:
    if (ctx->pc == 0x79C750u) {
        ctx->pc = 0x79C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C74Cu;
        // 0x79c750: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C754u;
        goto label_79c754;
    }
    ctx->pc = 0x79C74Cu;
    {
        const bool branch_taken_0x79c74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c74c) {
            ctx->pc = 0x79C750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C74Cu;
            // 0x79c750: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c730;
        }
    }
    ctx->pc = 0x79C754u;
label_79c754:
    // 0x79c754: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79c754u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79c758:
    // 0x79c758: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79c758u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79c75c:
    // 0x79c75c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79c760:
    if (ctx->pc == 0x79C760u) {
        ctx->pc = 0x79C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C75Cu;
        // 0x79c760: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C764u;
        goto label_79c764;
    }
    ctx->pc = 0x79C75Cu;
    {
        const bool branch_taken_0x79c75c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C75Cu;
        // 0x79c760: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c75c) {
            ctx->pc = 0x79C78Cu;
            goto label_79c78c;
        }
    }
    ctx->pc = 0x79C764u;
label_79c764:
    // 0x79c764: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79c764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79c768:
    // 0x79c768: 0x2442c804  addiu       $v0, $v0, -0x37FC
    ctx->pc = 0x79c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952964));
label_79c76c:
    // 0x79c76c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79c76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79c770:
    // 0x79c770: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79c774:
    // 0x79c774: 0x0  nop
    ctx->pc = 0x79c774u;
    // NOP
label_79c778:
    // 0x79c778: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79c778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79c77c:
    // 0x79c77c: 0x40f809  jalr        $v0
label_79c780:
    if (ctx->pc == 0x79C780u) {
        ctx->pc = 0x79C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C77Cu;
        // 0x79c780: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C784u;
        goto label_79c784;
    }
    ctx->pc = 0x79C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79C784u);
        ctx->pc = 0x79C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C77Cu;
        // 0x79c780: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C77Cu, 0x79C784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C784u;
label_79c784:
    // 0x79c784: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79c788:
    if (ctx->pc == 0x79C788u) {
        ctx->pc = 0x79C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C784u;
        // 0x79c788: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C78Cu;
        goto label_79c78c;
    }
    ctx->pc = 0x79C784u;
    {
        const bool branch_taken_0x79c784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c784) {
            ctx->pc = 0x79C788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C784u;
            // 0x79c788: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c778;
        }
    }
    ctx->pc = 0x79C78Cu;
label_79c78c:
    // 0x79c78c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79c790:
    // 0x79c790: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79c790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c794:
    // 0x79c794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c798:
    // 0x79c798: 0x3e00008  jr          $ra
label_79c79c:
    if (ctx->pc == 0x79C79Cu) {
        ctx->pc = 0x79C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C798u;
        // 0x79c79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C7A0u;
        goto label_fallthrough_0x79c798;
    }
    ctx->pc = 0x79C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C798u;
        // 0x79c79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79c798:
    ctx->pc = 0x79C7A0u;
}
} // namespace gh_r000
