#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r805_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r805
{
// Function: __do_global_ctors
// Address: 0x799710 - 0x7997c0
void ps2___do_global_ctors_0x799710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799710");
#endif

    switch (ctx->pc) {
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        default: break;
    }

    ctx->pc = 0x799710u;

label_799710:
    // 0x799710: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799714:
    // 0x799714: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799718:
    // 0x799718: 0x8ce59900  lw          $a1, -0x6700($a3)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940928)));
label_79971c:
    // 0x79971c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799720:
    // 0x799720: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799724:
    // 0x799724: 0x24e39900  addiu       $v1, $a3, -0x6700
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940928));
label_799728:
    // 0x799728: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79972c:
    // 0x79972c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799730:
    if (ctx->pc == 0x799730u) {
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799734u;
        goto label_799734;
    }
    ctx->pc = 0x79972Cu;
    {
        const bool branch_taken_0x79972c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79972c) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x799734u;
label_799734:
    // 0x799734: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799738:
    // 0x799738: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79973c:
    if (ctx->pc == 0x79973Cu) {
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799740u;
        goto label_799740;
    }
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799738) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x799740u;
label_799740:
    // 0x799740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799744:
    // 0x799744: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799748:
    // 0x799748: 0x24e49900  addiu       $a0, $a3, -0x6700
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940928));
label_79974c:
    // 0x79974c: 0x0  nop
    ctx->pc = 0x79974cu;
    // NOP
label_799750:
    // 0x799750: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799750u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799754:
    // 0x799754: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799758:
    // 0x799758: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79975c:
    // 0x79975c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79975cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799760:
    // 0x799760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799764:
    // 0x799764: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799768:
    // 0x799768: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79976c:
    // 0x79976c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799770:
    if (ctx->pc == 0x799770u) {
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799774u;
        goto label_799774;
    }
    ctx->pc = 0x79976Cu;
    {
        const bool branch_taken_0x79976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79976c) {
            ctx->pc = 0x799770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79976Cu;
            // 0x799770: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799750;
        }
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799778:
    // 0x799778: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799778u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79977c:
    // 0x79977c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799780:
    if (ctx->pc == 0x799780u) {
        ctx->pc = 0x799780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79977Cu;
        // 0x799780: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799784u;
        goto label_799784;
    }
    ctx->pc = 0x79977Cu;
    {
        const bool branch_taken_0x79977c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79977Cu;
        // 0x799780: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79977c) {
            ctx->pc = 0x7997ACu;
            goto label_7997ac;
        }
    }
    ctx->pc = 0x799784u;
label_799784:
    // 0x799784: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799788:
    // 0x799788: 0x24429900  addiu       $v0, $v0, -0x6700
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
label_79978c:
    // 0x79978c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799790:
    // 0x799790: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799794:
    // 0x799794: 0x0  nop
    ctx->pc = 0x799794u;
    // NOP
label_799798:
    // 0x799798: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79979c:
    // 0x79979c: 0x40f809  jalr        $v0
label_7997a0:
    if (ctx->pc == 0x7997A0u) {
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A4u;
        goto label_7997a4;
    }
    ctx->pc = 0x79979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7997A4u);
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79979Cu, 0x7997A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7997a8:
    if (ctx->pc == 0x7997A8u) {
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ACu;
        goto label_7997ac;
    }
    ctx->pc = 0x7997A4u;
    {
        const bool branch_taken_0x7997a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997a4) {
            ctx->pc = 0x7997A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997A4u;
            // 0x7997a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799798;
        }
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7997b0:
    // 0x7997b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7997b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7997b4:
    // 0x7997b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7997b8:
    // 0x7997b8: 0x3e00008  jr          $ra
label_7997bc:
    if (ctx->pc == 0x7997BCu) {
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C0u;
        goto label_fallthrough_0x7997b8;
    }
    ctx->pc = 0x7997B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7997b8:
    ctx->pc = 0x7997C0u;
}
} // namespace gh_r805
