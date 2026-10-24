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

// Function: PhaseDispatch_callRowB
// Address: 0x1b2708 - 0x1b27a8
void PhaseDispatch_callRowB_0x1b2708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PhaseDispatch_callRowB_0x1b2708");
#endif

    switch (ctx->pc) {
        case 0x1b2708u: goto label_1b2708;
        case 0x1b270cu: goto label_1b270c;
        case 0x1b2710u: goto label_1b2710;
        case 0x1b2714u: goto label_1b2714;
        case 0x1b2718u: goto label_1b2718;
        case 0x1b271cu: goto label_1b271c;
        case 0x1b2720u: goto label_1b2720;
        case 0x1b2724u: goto label_1b2724;
        case 0x1b2728u: goto label_1b2728;
        case 0x1b272cu: goto label_1b272c;
        case 0x1b2730u: goto label_1b2730;
        case 0x1b2734u: goto label_1b2734;
        case 0x1b2738u: goto label_1b2738;
        case 0x1b273cu: goto label_1b273c;
        case 0x1b2740u: goto label_1b2740;
        case 0x1b2744u: goto label_1b2744;
        case 0x1b2748u: goto label_1b2748;
        case 0x1b274cu: goto label_1b274c;
        case 0x1b2750u: goto label_1b2750;
        case 0x1b2754u: goto label_1b2754;
        case 0x1b2758u: goto label_1b2758;
        case 0x1b275cu: goto label_1b275c;
        case 0x1b2760u: goto label_1b2760;
        case 0x1b2764u: goto label_1b2764;
        case 0x1b2768u: goto label_1b2768;
        case 0x1b276cu: goto label_1b276c;
        case 0x1b2770u: goto label_1b2770;
        case 0x1b2774u: goto label_1b2774;
        case 0x1b2778u: goto label_1b2778;
        case 0x1b277cu: goto label_1b277c;
        case 0x1b2780u: goto label_1b2780;
        case 0x1b2784u: goto label_1b2784;
        case 0x1b2788u: goto label_1b2788;
        case 0x1b278cu: goto label_1b278c;
        case 0x1b2790u: goto label_1b2790;
        case 0x1b2794u: goto label_1b2794;
        case 0x1b2798u: goto label_1b2798;
        case 0x1b279cu: goto label_1b279c;
        case 0x1b27a0u: goto label_1b27a0;
        case 0x1b27a4u: goto label_1b27a4;
        default: break;
    }

    ctx->pc = 0x1b2708u;

label_1b2708:
    // 0x1b2708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b270c:
    // 0x1b270c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b270cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2710:
    // 0x1b2710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b2714:
    // 0x1b2714: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1b2718:
    // 0x1b2718: 0x2447dd08  addiu       $a3, $v0, -0x22F8
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958344));
label_1b271c:
    // 0x1b271c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b271cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2720:
    // 0x1b2720: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1b2720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1b2724:
    // 0x1b2724: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b2724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b2728:
    // 0x1b2728: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1b272c:
    // 0x1b272c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b272cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b2730:
    // 0x1b2730: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b2734:
    if (ctx->pc == 0x1B2734u) {
        ctx->pc = 0x1B2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2730u;
        // 0x1b2734: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2738u;
        goto label_1b2738;
    }
    ctx->pc = 0x1B2730u;
    {
        const bool branch_taken_0x1b2730 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2730u;
        // 0x1b2734: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2730) {
            ctx->pc = 0x1B275Cu;
            goto label_1b275c;
        }
    }
    ctx->pc = 0x1B2738u;
label_1b2738:
    // 0x1b2738: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b273c:
    // 0x1b273c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b273cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b2740:
    // 0x1b2740: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b2744:
    // 0x1b2744: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b2748:
    // 0x1b2748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b274c:
    // 0x1b274c: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x1b274cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b2750:
    // 0x1b2750: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x1b2750u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_1b2754:
    // 0x1b2754: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2758:
    if (ctx->pc == 0x1B2758u) {
        ctx->pc = 0x1B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2754u;
        // 0x1b2758: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B275Cu;
        goto label_1b275c;
    }
    ctx->pc = 0x1B2754u;
    {
        const bool branch_taken_0x1b2754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2754u;
        // 0x1b2758: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2754) {
            ctx->pc = 0x1B2764u;
            goto label_1b2764;
        }
    }
    ctx->pc = 0x1B275Cu;
label_1b275c:
    // 0x1b275c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1b275cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b2760:
    // 0x1b2760: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1b2760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1b2764:
    // 0x1b2764: 0x2523dd08  addiu       $v1, $t1, -0x22F8
    ctx->pc = 0x1b2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958344));
label_1b2768:
    // 0x1b2768: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b2768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b276c:
    // 0x1b276c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b2770:
    // 0x1b2770: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b2774:
    if (ctx->pc == 0x1B2774u) {
        ctx->pc = 0x1B2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2770u;
        // 0x1b2774: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2778u;
        goto label_1b2778;
    }
    ctx->pc = 0x1B2770u;
    {
        const bool branch_taken_0x1b2770 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2770u;
        // 0x1b2774: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2770) {
            ctx->pc = 0x1B278Cu;
            goto label_1b278c;
        }
    }
    ctx->pc = 0x1B2778u;
label_1b2778:
    // 0x1b2778: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1b2778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1b277c:
    // 0x1b277c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b277cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b2780:
    // 0x1b2780: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b2780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b2784:
    // 0x1b2784: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b2788:
    if (ctx->pc == 0x1B2788u) {
        ctx->pc = 0x1B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2784u;
        // 0x1b2788: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B278Cu;
        goto label_1b278c;
    }
    ctx->pc = 0x1B2784u;
    {
        const bool branch_taken_0x1b2784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2784u;
        // 0x1b2788: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2784) {
            ctx->pc = 0x1B2790u;
            goto label_1b2790;
        }
    }
    ctx->pc = 0x1B278Cu;
label_1b278c:
    // 0x1b278c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b278cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b2790:
    // 0x1b2790: 0xe0f809  jalr        $a3
label_1b2794:
    if (ctx->pc == 0x1B2794u) {
        ctx->pc = 0x1B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2790u;
        // 0x1b2794: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2798u;
        goto label_1b2798;
    }
    ctx->pc = 0x1B2790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1B2798u);
        ctx->pc = 0x1B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2790u;
        // 0x1b2794: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2790u, 0x1B2798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2798u;
label_1b2798:
    // 0x1b2798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b279c:
    // 0x1b279c: 0x3e00008  jr          $ra
label_1b27a0:
    if (ctx->pc == 0x1B27A0u) {
        ctx->pc = 0x1B27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B279Cu;
        // 0x1b27a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27A4u;
        goto label_1b27a4;
    }
    ctx->pc = 0x1B279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B279Cu;
        // 0x1b27a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B27A4u;
label_1b27a4:
    // 0x1b27a4: 0x0  nop
    ctx->pc = 0x1b27a4u;
    // NOP
    ctx->pc = 0x1b27a8u;
}
