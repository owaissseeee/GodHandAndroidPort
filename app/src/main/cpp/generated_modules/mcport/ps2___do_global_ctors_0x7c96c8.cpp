#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __do_global_ctors
// Address: 0x7c96c8 - 0x7c9778
void ps2___do_global_ctors_0x7c96c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7c96c8");
#endif

    switch (ctx->pc) {
        case 0x7c96c8u: goto label_7c96c8;
        case 0x7c96ccu: goto label_7c96cc;
        case 0x7c96d0u: goto label_7c96d0;
        case 0x7c96d4u: goto label_7c96d4;
        case 0x7c96d8u: goto label_7c96d8;
        case 0x7c96dcu: goto label_7c96dc;
        case 0x7c96e0u: goto label_7c96e0;
        case 0x7c96e4u: goto label_7c96e4;
        case 0x7c96e8u: goto label_7c96e8;
        case 0x7c96ecu: goto label_7c96ec;
        case 0x7c96f0u: goto label_7c96f0;
        case 0x7c96f4u: goto label_7c96f4;
        case 0x7c96f8u: goto label_7c96f8;
        case 0x7c96fcu: goto label_7c96fc;
        case 0x7c9700u: goto label_7c9700;
        case 0x7c9704u: goto label_7c9704;
        case 0x7c9708u: goto label_7c9708;
        case 0x7c970cu: goto label_7c970c;
        case 0x7c9710u: goto label_7c9710;
        case 0x7c9714u: goto label_7c9714;
        case 0x7c9718u: goto label_7c9718;
        case 0x7c971cu: goto label_7c971c;
        case 0x7c9720u: goto label_7c9720;
        case 0x7c9724u: goto label_7c9724;
        case 0x7c9728u: goto label_7c9728;
        case 0x7c972cu: goto label_7c972c;
        case 0x7c9730u: goto label_7c9730;
        case 0x7c9734u: goto label_7c9734;
        case 0x7c9738u: goto label_7c9738;
        case 0x7c973cu: goto label_7c973c;
        case 0x7c9740u: goto label_7c9740;
        case 0x7c9744u: goto label_7c9744;
        case 0x7c9748u: goto label_7c9748;
        case 0x7c974cu: goto label_7c974c;
        case 0x7c9750u: goto label_7c9750;
        case 0x7c9754u: goto label_7c9754;
        case 0x7c9758u: goto label_7c9758;
        case 0x7c975cu: goto label_7c975c;
        case 0x7c9760u: goto label_7c9760;
        case 0x7c9764u: goto label_7c9764;
        case 0x7c9768u: goto label_7c9768;
        case 0x7c976cu: goto label_7c976c;
        case 0x7c9770u: goto label_7c9770;
        case 0x7c9774u: goto label_7c9774;
        default: break;
    }

    ctx->pc = 0x7c96c8u;

label_7c96c8:
    // 0x7c96c8: 0x3c07007d  lui         $a3, 0x7D
    ctx->pc = 0x7c96c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
label_7c96cc:
    // 0x7c96cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c96ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7c96d0:
    // 0x7c96d0: 0x8ce508c0  lw          $a1, 0x8C0($a3)
    ctx->pc = 0x7c96d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2240)));
label_7c96d4:
    // 0x7c96d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7c96d8:
    // 0x7c96d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7c96d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7c96dc:
    // 0x7c96dc: 0x24e308c0  addiu       $v1, $a3, 0x8C0
    ctx->pc = 0x7c96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2240));
label_7c96e0:
    // 0x7c96e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7c96e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7c96e4:
    // 0x7c96e4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7c96e8:
    if (ctx->pc == 0x7C96E8u) {
        ctx->pc = 0x7C96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96E4u;
        // 0x7c96e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C96ECu;
        goto label_7c96ec;
    }
    ctx->pc = 0x7C96E4u;
    {
        const bool branch_taken_0x7c96e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96E4u;
        // 0x7c96e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c96e4) {
            ctx->pc = 0x7C972Cu;
            goto label_7c972c;
        }
    }
    ctx->pc = 0x7C96ECu;
label_7c96ec:
    // 0x7c96ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7c96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7c96f0:
    // 0x7c96f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7c96f4:
    if (ctx->pc == 0x7C96F4u) {
        ctx->pc = 0x7C96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96F0u;
        // 0x7c96f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C96F8u;
        goto label_7c96f8;
    }
    ctx->pc = 0x7C96F0u;
    {
        const bool branch_taken_0x7c96f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96F0u;
        // 0x7c96f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c96f0) {
            ctx->pc = 0x7C972Cu;
            goto label_7c972c;
        }
    }
    ctx->pc = 0x7C96F8u;
label_7c96f8:
    // 0x7c96f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c96f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c96fc:
    // 0x7c96fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7c96fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7c9700:
    // 0x7c9700: 0x24e408c0  addiu       $a0, $a3, 0x8C0
    ctx->pc = 0x7c9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2240));
label_7c9704:
    // 0x7c9704: 0x0  nop
    ctx->pc = 0x7c9704u;
    // NOP
label_7c9708:
    // 0x7c9708: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7c9708u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7c970c:
    // 0x7c970c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7c970cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7c9710:
    // 0x7c9710: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7c9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7c9714:
    // 0x7c9714: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7c9714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_7c9718:
    // 0x7c9718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c9718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_7c971c:
    // 0x7c971c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7c971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7c9720:
    // 0x7c9720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7c9720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7c9724:
    // 0x7c9724: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7c9728:
    if (ctx->pc == 0x7C9728u) {
        ctx->pc = 0x7C9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9724u;
        // 0x7c9728: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C972Cu;
        goto label_7c972c;
    }
    ctx->pc = 0x7C9724u;
    {
        const bool branch_taken_0x7c9724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c9724) {
            ctx->pc = 0x7C9728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9724u;
            // 0x7c9728: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c9708;
        }
    }
    ctx->pc = 0x7C972Cu;
label_7c972c:
    // 0x7c972c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x7c972cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_7c9730:
    // 0x7c9730: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x7c9730u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_7c9734:
    // 0x7c9734: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7c9738:
    if (ctx->pc == 0x7C9738u) {
        ctx->pc = 0x7C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9734u;
        // 0x7c9738: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C973Cu;
        goto label_7c973c;
    }
    ctx->pc = 0x7C9734u;
    {
        const bool branch_taken_0x7c9734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9734u;
        // 0x7c9738: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9734) {
            ctx->pc = 0x7C9764u;
            goto label_7c9764;
        }
    }
    ctx->pc = 0x7C973Cu;
label_7c973c:
    // 0x7c973c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7c973cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7c9740:
    // 0x7c9740: 0x244208c0  addiu       $v0, $v0, 0x8C0
    ctx->pc = 0x7c9740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
label_7c9744:
    // 0x7c9744: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7c9744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7c9748:
    // 0x7c9748: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7c9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7c974c:
    // 0x7c974c: 0x0  nop
    ctx->pc = 0x7c974cu;
    // NOP
label_7c9750:
    // 0x7c9750: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7c9750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_7c9754:
    // 0x7c9754: 0x40f809  jalr        $v0
label_7c9758:
    if (ctx->pc == 0x7C9758u) {
        ctx->pc = 0x7C9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9754u;
        // 0x7c9758: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C975Cu;
        goto label_7c975c;
    }
    ctx->pc = 0x7C9754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7C975Cu);
        ctx->pc = 0x7C9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9754u;
        // 0x7c9758: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9754u, 0x7C975Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C975Cu;
label_7c975c:
    // 0x7c975c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7c9760:
    if (ctx->pc == 0x7C9760u) {
        ctx->pc = 0x7C9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C975Cu;
        // 0x7c9760: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9764u;
        goto label_7c9764;
    }
    ctx->pc = 0x7C975Cu;
    {
        const bool branch_taken_0x7c975c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c975c) {
            ctx->pc = 0x7C9760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C975Cu;
            // 0x7c9760: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c9750;
        }
    }
    ctx->pc = 0x7C9764u;
label_7c9764:
    // 0x7c9764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7c9764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7c9768:
    // 0x7c9768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7c9768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7c976c:
    // 0x7c976c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c976cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7c9770:
    // 0x7c9770: 0x3e00008  jr          $ra
label_7c9774:
    if (ctx->pc == 0x7C9774u) {
        ctx->pc = 0x7C9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9770u;
        // 0x7c9774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9778u;
        goto label_fallthrough_0x7c9770;
    }
    ctx->pc = 0x7C9770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9770u;
        // 0x7c9774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7c9770:
    ctx->pc = 0x7C9778u;
}
} // namespace gh_mcport
