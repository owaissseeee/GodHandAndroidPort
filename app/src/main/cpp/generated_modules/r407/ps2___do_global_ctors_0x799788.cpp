#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r407_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r407
{
// Function: __do_global_ctors
// Address: 0x799788 - 0x799838
void ps2___do_global_ctors_0x799788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799788");
#endif

    switch (ctx->pc) {
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
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
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
        default: break;
    }

    ctx->pc = 0x799788u;

label_799788:
    // 0x799788: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79978c:
    // 0x79978c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799790:
    // 0x799790: 0x8ce59a80  lw          $a1, -0x6580($a3)
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941312)));
label_799794:
    // 0x799794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799798:
    // 0x799798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79979c:
    // 0x79979c: 0x24e39a80  addiu       $v1, $a3, -0x6580
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941312));
label_7997a0:
    // 0x7997a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7997a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7997a4:
    // 0x7997a4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7997a8:
    if (ctx->pc == 0x7997A8u) {
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ACu;
        goto label_7997ac;
    }
    ctx->pc = 0x7997A4u;
    {
        const bool branch_taken_0x7997a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a4) {
            ctx->pc = 0x7997ECu;
            goto label_7997ec;
        }
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7997b0:
    // 0x7997b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7997b4:
    if (ctx->pc == 0x7997B4u) {
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B8u;
        goto label_7997b8;
    }
    ctx->pc = 0x7997B0u;
    {
        const bool branch_taken_0x7997b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b0) {
            ctx->pc = 0x7997ECu;
            goto label_7997ec;
        }
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7997bc:
    // 0x7997bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7997c0:
    // 0x7997c0: 0x24e49a80  addiu       $a0, $a3, -0x6580
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941312));
label_7997c4:
    // 0x7997c4: 0x0  nop
    ctx->pc = 0x7997c4u;
    // NOP
label_7997c8:
    // 0x7997c8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7997c8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7997cc:
    // 0x7997cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7997ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7997d0:
    // 0x7997d0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7997d4:
    // 0x7997d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7997d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_7997d8:
    // 0x7997d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_7997dc:
    // 0x7997dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7997e0:
    // 0x7997e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7997e4:
    // 0x7997e4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7997e8:
    if (ctx->pc == 0x7997E8u) {
        ctx->pc = 0x7997E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E4u;
        // 0x7997e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ECu;
        goto label_7997ec;
    }
    ctx->pc = 0x7997E4u;
    {
        const bool branch_taken_0x7997e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997e4) {
            ctx->pc = 0x7997E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997E4u;
            // 0x7997e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997c8;
        }
    }
    ctx->pc = 0x7997ECu;
label_7997ec:
    // 0x7997ec: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_7997f0:
    // 0x7997f0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x7997f0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_7997f4:
    // 0x7997f4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7997f8:
    if (ctx->pc == 0x7997F8u) {
        ctx->pc = 0x7997F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F4u;
        // 0x7997f8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997FCu;
        goto label_7997fc;
    }
    ctx->pc = 0x7997F4u;
    {
        const bool branch_taken_0x7997f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F4u;
        // 0x7997f8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f4) {
            ctx->pc = 0x799824u;
            goto label_799824;
        }
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799800:
    // 0x799800: 0x24429a80  addiu       $v0, $v0, -0x6580
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
label_799804:
    // 0x799804: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799808:
    // 0x799808: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79980c:
    // 0x79980c: 0x0  nop
    ctx->pc = 0x79980cu;
    // NOP
label_799810:
    // 0x799810: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799814:
    // 0x799814: 0x40f809  jalr        $v0
label_799818:
    if (ctx->pc == 0x799818u) {
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79981Cu;
        goto label_79981c;
    }
    ctx->pc = 0x799814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79981Cu);
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    {
        const bool branch_taken_0x79981c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79981c) {
            ctx->pc = 0x799820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79981Cu;
            // 0x799820: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799810;
        }
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799828:
    // 0x799828: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79982c:
    // 0x79982c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799830:
    // 0x799830: 0x3e00008  jr          $ra
label_799834:
    if (ctx->pc == 0x799834u) {
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799838u;
        goto label_fallthrough_0x799830;
    }
    ctx->pc = 0x799830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799830:
    ctx->pc = 0x799838u;
}
} // namespace gh_r407
