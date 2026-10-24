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

// Function: func_003475F0
// Address: 0x3475f0 - 0x347698
void func_003475F0_0x3475f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003475F0_0x3475f0");
#endif

    switch (ctx->pc) {
        case 0x347624u: goto label_347624;
        case 0x347654u: goto label_347654;
        case 0x34766cu: goto label_34766c;
        case 0x347688u: goto label_347688;
        default: break;
    }

    ctx->pc = 0x3475f0u;

    // 0x3475f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3475f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3475f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3475f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3475f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3475fc: 0x24430194  addiu       $v1, $v0, 0x194
    ctx->pc = 0x3475fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 404));
    // 0x347600: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x347600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x347604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347608: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x347608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x34760c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34760Cu;
    {
        const bool branch_taken_0x34760c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x347610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34760Cu;
        // 0x347610: 0x8c5000a8  lw          $s0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34760c) {
            ctx->pc = 0x347630u;
            goto label_347630;
        }
    }
    ctx->pc = 0x347614u;
    // 0x347614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34761c: 0xc0d7f22  jal         func_35FC88
    ctx->pc = 0x34761Cu;
    SET_GPR_U32(ctx, 31, 0x347624u);
    ctx->pc = 0x347620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34761Cu;
    // 0x347620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC88u, 0x34761Cu, 0x347624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347624u;
label_347624:
    // 0x347624: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x347624u;
    {
        const bool branch_taken_0x347624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347624u;
        // 0x347628: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347624) {
            ctx->pc = 0x34768Cu;
            goto label_34768c;
        }
    }
    ctx->pc = 0x34762Cu;
    // 0x34762c: 0x0  nop
    ctx->pc = 0x34762cu;
    // NOP
label_347630:
    // 0x347630: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x347630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x347634: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x347634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x347638: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x347638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x34763c: 0x24a58ce0  addiu       $a1, $a1, -0x7320
    ctx->pc = 0x34763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937824));
    // 0x347640: 0x24c68ce8  addiu       $a2, $a2, -0x7318
    ctx->pc = 0x347640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937832));
    // 0x347644: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x347644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347648: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x347648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x34764c: 0xc0ceb7e  jal         func_33ADF8
    ctx->pc = 0x34764Cu;
    SET_GPR_U32(ctx, 31, 0x347654u);
    ctx->pc = 0x347650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34764Cu;
    // 0x347650: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADF8u, 0x34764Cu, 0x347654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347654u;
label_347654:
    // 0x347654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34765c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34765Cu;
    {
        const bool branch_taken_0x34765c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34765Cu;
        // 0x347660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34765c) {
            ctx->pc = 0x347678u;
            goto label_347678;
        }
    }
    ctx->pc = 0x347664u;
    // 0x347664: 0xc0d7f22  jal         func_35FC88
    ctx->pc = 0x347664u;
    SET_GPR_U32(ctx, 31, 0x34766Cu);
    ctx->pc = 0x35FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC88u, 0x347664u, 0x34766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34766Cu;
label_34766c:
    // 0x34766c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34766Cu;
    {
        const bool branch_taken_0x34766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34766Cu;
        // 0x347670: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34766c) {
            ctx->pc = 0x34768Cu;
            goto label_34768c;
        }
    }
    ctx->pc = 0x347674u;
    // 0x347674: 0x0  nop
    ctx->pc = 0x347674u;
    // NOP
label_347678:
    // 0x347678: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x347678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34767c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347680: 0xc0d7f22  jal         func_35FC88
    ctx->pc = 0x347680u;
    SET_GPR_U32(ctx, 31, 0x347688u);
    ctx->pc = 0x347684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347680u;
    // 0x347684: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC88u, 0x347680u, 0x347688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347688u;
label_347688:
    // 0x347688: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x347688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34768c:
    // 0x34768c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34768cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347690: 0x3e00008  jr          $ra
    ctx->pc = 0x347690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347690u;
        // 0x347694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347698u;
}
