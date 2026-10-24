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

// Function: get__7istreamRc
// Address: 0x387610 - 0x3876d0
void get__7istreamRc_0x387610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get__7istreamRc_0x387610");
#endif

    switch (ctx->pc) {
        case 0x38766cu: goto label_38766c;
        case 0x387684u: goto label_387684;
        default: break;
    }

    ctx->pc = 0x387610u;

    // 0x387610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387614: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x387614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x387618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38761c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387624: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387628: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38762c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38762Cu;
    {
        const bool branch_taken_0x38762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38762Cu;
        // 0x387630: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38762c) {
            ctx->pc = 0x387644u;
            goto label_387644;
        }
    }
    ctx->pc = 0x387634u;
    // 0x387634: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x387634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x387638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x387638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38763c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38763Cu;
    {
        const bool branch_taken_0x38763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38763Cu;
        // 0x387640: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38763c) {
            ctx->pc = 0x387670u;
            goto label_387670;
        }
    }
    ctx->pc = 0x387644u;
label_387644:
    // 0x387644: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x387644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x387648: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x387648u;
    {
        const bool branch_taken_0x387648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387648u;
        // 0x38764c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387648) {
            ctx->pc = 0x387670u;
            goto label_387670;
        }
    }
    ctx->pc = 0x387650u;
    // 0x387650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x387650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387654: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x387654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x387658: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x387658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38765c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38765Cu;
    {
        const bool branch_taken_0x38765c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x387660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38765Cu;
        // 0x387660: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38765c) {
            ctx->pc = 0x387670u;
            goto label_387670;
        }
    }
    ctx->pc = 0x387664u;
    // 0x387664: 0xc0e249a  jal         func_389268
    ctx->pc = 0x387664u;
    SET_GPR_U32(ctx, 31, 0x38766Cu);
    ctx->pc = 0x387668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387664u;
    // 0x387668: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x387664u, 0x38766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38766Cu;
label_38766c:
    // 0x38766c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387670:
    // 0x387670: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x387670u;
    {
        const bool branch_taken_0x387670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387670) {
            ctx->pc = 0x387674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387670u;
            // 0x387674: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3876B8u;
            goto label_3876b8;
        }
    }
    ctx->pc = 0x387678u;
    // 0x387678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38767c: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x38767Cu;
    SET_GPR_U32(ctx, 31, 0x387684u);
    ctx->pc = 0x387680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38767Cu;
    // 0x387680: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x38767Cu, 0x387684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387684u;
label_387684:
    // 0x387684: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x387684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38768c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38768Cu;
    {
        const bool branch_taken_0x38768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38768c) {
            ctx->pc = 0x387690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38768Cu;
            // 0x387690: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3876A8u;
            goto label_3876a8;
        }
    }
    ctx->pc = 0x387694u;
    // 0x387694: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387698: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38769c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x38769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3876a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3876A0u;
    {
        const bool branch_taken_0x3876a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876A0u;
        // 0x3876a4: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876a0) {
            ctx->pc = 0x3876B4u;
            goto label_3876b4;
        }
    }
    ctx->pc = 0x3876A8u;
label_3876a8:
    // 0x3876a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3876a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3876ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3876ACu;
    {
        const bool branch_taken_0x3876ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876ACu;
        // 0x3876b0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876ac) {
            ctx->pc = 0x3876B8u;
            goto label_3876b8;
        }
    }
    ctx->pc = 0x3876B4u;
label_3876b4:
    // 0x3876b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3876b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3876b8:
    // 0x3876b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3876b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3876bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3876c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3876c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3876c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3876c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3876c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3876C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876C8u;
        // 0x3876cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3876C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3876D0u;
}
