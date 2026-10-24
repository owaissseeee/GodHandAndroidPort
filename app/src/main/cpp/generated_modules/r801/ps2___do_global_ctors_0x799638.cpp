#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r801_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r801
{
// Function: __do_global_ctors
// Address: 0x799638 - 0x7996e8
void ps2___do_global_ctors_0x799638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799638");
#endif

    switch (ctx->pc) {
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        case 0x799660u: goto label_799660;
        case 0x799664u: goto label_799664;
        case 0x799668u: goto label_799668;
        case 0x79966cu: goto label_79966c;
        case 0x799670u: goto label_799670;
        case 0x799674u: goto label_799674;
        case 0x799678u: goto label_799678;
        case 0x79967cu: goto label_79967c;
        case 0x799680u: goto label_799680;
        case 0x799684u: goto label_799684;
        case 0x799688u: goto label_799688;
        case 0x79968cu: goto label_79968c;
        case 0x799690u: goto label_799690;
        case 0x799694u: goto label_799694;
        case 0x799698u: goto label_799698;
        case 0x79969cu: goto label_79969c;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996acu: goto label_7996ac;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        default: break;
    }

    ctx->pc = 0x799638u;

label_799638:
    // 0x799638: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79963c:
    // 0x79963c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799640:
    // 0x799640: 0x8ce59880  lw          $a1, -0x6780($a3)
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940800)));
label_799644:
    // 0x799644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799648:
    // 0x799648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79964c:
    // 0x79964c: 0x24e39880  addiu       $v1, $a3, -0x6780
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940800));
label_799650:
    // 0x799650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799654:
    // 0x799654: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799658:
    if (ctx->pc == 0x799658u) {
        ctx->pc = 0x799658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799654u;
        // 0x799658: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79965Cu;
        goto label_79965c;
    }
    ctx->pc = 0x799654u;
    {
        const bool branch_taken_0x799654 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799654u;
        // 0x799658: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799654) {
            ctx->pc = 0x79969Cu;
            goto label_79969c;
        }
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799660:
    // 0x799660: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799664:
    if (ctx->pc == 0x799664u) {
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799668u;
        goto label_799668;
    }
    ctx->pc = 0x799660u;
    {
        const bool branch_taken_0x799660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799660) {
            ctx->pc = 0x79969Cu;
            goto label_79969c;
        }
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79966c:
    // 0x79966c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799670:
    // 0x799670: 0x24e49880  addiu       $a0, $a3, -0x6780
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940800));
label_799674:
    // 0x799674: 0x0  nop
    ctx->pc = 0x799674u;
    // NOP
label_799678:
    // 0x799678: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799678u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79967c:
    // 0x79967c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799680:
    // 0x799680: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799684:
    // 0x799684: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799688:
    // 0x799688: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79968c:
    // 0x79968c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799690:
    // 0x799690: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799694:
    // 0x799694: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799698:
    if (ctx->pc == 0x799698u) {
        ctx->pc = 0x799698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799694u;
        // 0x799698: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79969Cu;
        goto label_79969c;
    }
    ctx->pc = 0x799694u;
    {
        const bool branch_taken_0x799694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799694) {
            ctx->pc = 0x799698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799694u;
            // 0x799698: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799678;
        }
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_7996a0:
    // 0x7996a0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x7996a0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_7996a4:
    // 0x7996a4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7996a8:
    if (ctx->pc == 0x7996A8u) {
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996ACu;
        goto label_7996ac;
    }
    ctx->pc = 0x7996A4u;
    {
        const bool branch_taken_0x7996a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a4) {
            ctx->pc = 0x7996D4u;
            goto label_7996d4;
        }
    }
    ctx->pc = 0x7996ACu;
label_7996ac:
    // 0x7996ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7996b0:
    // 0x7996b0: 0x24429880  addiu       $v0, $v0, -0x6780
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940800));
label_7996b4:
    // 0x7996b4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7996b8:
    // 0x7996b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7996bc:
    // 0x7996bc: 0x0  nop
    ctx->pc = 0x7996bcu;
    // NOP
label_7996c0:
    // 0x7996c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_7996c4:
    // 0x7996c4: 0x40f809  jalr        $v0
label_7996c8:
    if (ctx->pc == 0x7996C8u) {
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996CCu;
        goto label_7996cc;
    }
    ctx->pc = 0x7996C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7996CCu);
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7996d0:
    if (ctx->pc == 0x7996D0u) {
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D4u;
        goto label_7996d4;
    }
    ctx->pc = 0x7996CCu;
    {
        const bool branch_taken_0x7996cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996cc) {
            ctx->pc = 0x7996D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996CCu;
            // 0x7996d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996c0;
        }
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7996d8:
    // 0x7996d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7996dc:
    // 0x7996dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7996e0:
    // 0x7996e0: 0x3e00008  jr          $ra
label_7996e4:
    if (ctx->pc == 0x7996E4u) {
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E8u;
        goto label_fallthrough_0x7996e0;
    }
    ctx->pc = 0x7996E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7996e0:
    ctx->pc = 0x7996E8u;
}
} // namespace gh_r801
