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

// Function: func_00345610
// Address: 0x345610 - 0x345750
void func_00345610_0x345610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345610_0x345610");
#endif

    switch (ctx->pc) {
        case 0x345630u: goto label_345630;
        case 0x345660u: goto label_345660;
        case 0x345678u: goto label_345678;
        case 0x345694u: goto label_345694;
        case 0x34569cu: goto label_34569c;
        case 0x3456a8u: goto label_3456a8;
        case 0x3456b0u: goto label_3456b0;
        case 0x3456b8u: goto label_3456b8;
        case 0x3456c0u: goto label_3456c0;
        case 0x3456c8u: goto label_3456c8;
        case 0x3456d0u: goto label_3456d0;
        case 0x3456d8u: goto label_3456d8;
        case 0x3456e0u: goto label_3456e0;
        case 0x3456e8u: goto label_3456e8;
        case 0x3456f0u: goto label_3456f0;
        case 0x3456f8u: goto label_3456f8;
        case 0x345700u: goto label_345700;
        case 0x345708u: goto label_345708;
        case 0x345710u: goto label_345710;
        default: break;
    }

    ctx->pc = 0x345610u;

    // 0x345610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34561c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345620: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x345620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x345628: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x345628u;
    SET_GPR_U32(ctx, 31, 0x345630u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x345628u, 0x345630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345630u;
label_345630:
    // 0x345630: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x345630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x345634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x345634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345638: 0x2463c7d8  addiu       $v1, $v1, -0x3828
    ctx->pc = 0x345638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952920));
    // 0x34563c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34563cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EC7D8u));
    // 0x345640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x345644: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x345644u;
    {
        const bool branch_taken_0x345644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345644u;
        // 0x345648: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345644) {
            ctx->pc = 0x345730u;
            goto label_345730;
        }
    }
    ctx->pc = 0x34564Cu;
    // 0x34564c: 0x2490006c  addiu       $s0, $a0, 0x6C
    ctx->pc = 0x34564cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x345650: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x345650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345654: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x345654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345658: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x345658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34565c: 0x0  nop
    ctx->pc = 0x34565cu;
    // NOP
label_345660:
    // 0x345660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x345660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345664: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x345664u;
    {
        const bool branch_taken_0x345664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x345664) {
            ctx->pc = 0x345668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345664u;
            // 0x345668: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34567Cu;
            goto label_34567c;
        }
    }
    ctx->pc = 0x34566Cu;
    // 0x34566c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345670: 0xc0d10f2  jal         func_3443C8
    ctx->pc = 0x345670u;
    SET_GPR_U32(ctx, 31, 0x345678u);
    ctx->pc = 0x345674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345670u;
    // 0x345674: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3443C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3443C8u, 0x345670u, 0x345678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345678u;
label_345678:
    // 0x345678: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x345678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34567c:
    // 0x34567c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34567Cu;
    {
        const bool branch_taken_0x34567c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x345680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34567Cu;
        // 0x345680: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34567c) {
            ctx->pc = 0x345660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345660;
        }
    }
    ctx->pc = 0x345684u;
    // 0x345684: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x345684u;
    {
        const bool branch_taken_0x345684 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x345688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345684u;
        // 0x345688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345684) {
            ctx->pc = 0x3456A8u;
            goto label_3456a8;
        }
    }
    ctx->pc = 0x34568Cu;
    // 0x34568c: 0xc0d25ce  jal         func_349738
    ctx->pc = 0x34568Cu;
    SET_GPR_U32(ctx, 31, 0x345694u);
    ctx->pc = 0x345690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34568Cu;
    // 0x345690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349738u, 0x34568Cu, 0x345694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345694u;
label_345694:
    // 0x345694: 0xc0d231e  jal         func_348C78
    ctx->pc = 0x345694u;
    SET_GPR_U32(ctx, 31, 0x34569Cu);
    ctx->pc = 0x348C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348C78u, 0x345694u, 0x34569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34569Cu;
label_34569c:
    // 0x34569c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3456a0: 0xc0d25ce  jal         func_349738
    ctx->pc = 0x3456A0u;
    SET_GPR_U32(ctx, 31, 0x3456A8u);
    ctx->pc = 0x3456A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456A0u;
    // 0x3456a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349738u, 0x3456A0u, 0x3456A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456A8u;
label_3456a8:
    // 0x3456a8: 0xc0d22d4  jal         func_348B50
    ctx->pc = 0x3456A8u;
    SET_GPR_U32(ctx, 31, 0x3456B0u);
    ctx->pc = 0x348B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B50u, 0x3456A8u, 0x3456B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456B0u;
label_3456b0:
    // 0x3456b0: 0xc0d2294  jal         func_348A50
    ctx->pc = 0x3456B0u;
    SET_GPR_U32(ctx, 31, 0x3456B8u);
    ctx->pc = 0x348A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348A50u, 0x3456B0u, 0x3456B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456B8u;
label_3456b8:
    // 0x3456b8: 0xc0d22c0  jal         func_348B00
    ctx->pc = 0x3456B8u;
    SET_GPR_U32(ctx, 31, 0x3456C0u);
    ctx->pc = 0x348B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B00u, 0x3456B8u, 0x3456C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456C0u;
label_3456c0:
    // 0x3456c0: 0xc0d22aa  jal         func_348AA8
    ctx->pc = 0x3456C0u;
    SET_GPR_U32(ctx, 31, 0x3456C8u);
    ctx->pc = 0x348AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348AA8u, 0x3456C0u, 0x3456C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456C8u;
label_3456c8:
    // 0x3456c8: 0xc0d1afe  jal         func_346BF8
    ctx->pc = 0x3456C8u;
    SET_GPR_U32(ctx, 31, 0x3456D0u);
    ctx->pc = 0x346BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346BF8u, 0x3456C8u, 0x3456D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D0u;
label_3456d0:
    // 0x3456d0: 0xc0cd798  jal         func_335E60
    ctx->pc = 0x3456D0u;
    SET_GPR_U32(ctx, 31, 0x3456D8u);
    ctx->pc = 0x335E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E60u, 0x3456D0u, 0x3456D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D8u;
label_3456d8:
    // 0x3456d8: 0xc0d160a  jal         func_345828
    ctx->pc = 0x3456D8u;
    SET_GPR_U32(ctx, 31, 0x3456E0u);
    ctx->pc = 0x345828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345828u, 0x3456D8u, 0x3456E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456E0u;
label_3456e0:
    // 0x3456e0: 0xc0c92b2  jal         func_324AC8
    ctx->pc = 0x3456E0u;
    SET_GPR_U32(ctx, 31, 0x3456E8u);
    ctx->pc = 0x324AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324AC8u, 0x3456E0u, 0x3456E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456E8u;
label_3456e8:
    // 0x3456e8: 0xc0d268e  jal         func_349A38
    ctx->pc = 0x3456E8u;
    SET_GPR_U32(ctx, 31, 0x3456F0u);
    ctx->pc = 0x349A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A38u, 0x3456E8u, 0x3456F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456F0u;
label_3456f0:
    // 0x3456f0: 0xc0ce844  jal         func_33A110
    ctx->pc = 0x3456F0u;
    SET_GPR_U32(ctx, 31, 0x3456F8u);
    ctx->pc = 0x33A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A110u, 0x3456F0u, 0x3456F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456F8u;
label_3456f8:
    // 0x3456f8: 0xc0ce2c4  jal         func_338B10
    ctx->pc = 0x3456F8u;
    SET_GPR_U32(ctx, 31, 0x345700u);
    ctx->pc = 0x338B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B10u, 0x3456F8u, 0x345700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345700u;
label_345700:
    // 0x345700: 0xc0ce548  jal         func_339520
    ctx->pc = 0x345700u;
    SET_GPR_U32(ctx, 31, 0x345708u);
    ctx->pc = 0x339520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339520u, 0x345700u, 0x345708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345708u;
label_345708:
    // 0x345708: 0xc0d18b0  jal         func_3462C0
    ctx->pc = 0x345708u;
    SET_GPR_U32(ctx, 31, 0x345710u);
    ctx->pc = 0x3462C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3462C0u, 0x345708u, 0x345710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345710u;
label_345710:
    // 0x345710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34571c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34571cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345724: 0x80d227c  j           func_3489F0
    ctx->pc = 0x345724u;
    ctx->pc = 0x345728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345724u;
    // 0x345728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3489F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3489F0u, 0x345724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34572Cu;
    // 0x34572c: 0x0  nop
    ctx->pc = 0x34572cu;
    // NOP
label_345730:
    // 0x345730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34573c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34573cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345744: 0x3e00008  jr          $ra
    ctx->pc = 0x345744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345744u;
        // 0x345748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34574Cu;
    // 0x34574c: 0x0  nop
    ctx->pc = 0x34574cu;
    // NOP
    ctx->pc = 0x345750u;
}
