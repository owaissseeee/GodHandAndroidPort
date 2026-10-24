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

// Function: mpvhdec_GetCurDelim
// Address: 0x36a5f8 - 0x36a668
void mpvhdec_GetCurDelim_0x36a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpvhdec_GetCurDelim_0x36a5f8");
#endif

    switch (ctx->pc) {
        case 0x36a5f8u: goto label_36a5f8;
        case 0x36a5fcu: goto label_36a5fc;
        case 0x36a600u: goto label_36a600;
        case 0x36a604u: goto label_36a604;
        case 0x36a608u: goto label_36a608;
        case 0x36a60cu: goto label_36a60c;
        case 0x36a610u: goto label_36a610;
        case 0x36a614u: goto label_36a614;
        case 0x36a618u: goto label_36a618;
        case 0x36a61cu: goto label_36a61c;
        case 0x36a620u: goto label_36a620;
        case 0x36a624u: goto label_36a624;
        case 0x36a628u: goto label_36a628;
        case 0x36a62cu: goto label_36a62c;
        case 0x36a630u: goto label_36a630;
        case 0x36a634u: goto label_36a634;
        case 0x36a638u: goto label_36a638;
        case 0x36a63cu: goto label_36a63c;
        case 0x36a640u: goto label_36a640;
        case 0x36a644u: goto label_36a644;
        case 0x36a648u: goto label_36a648;
        case 0x36a64cu: goto label_36a64c;
        case 0x36a650u: goto label_36a650;
        case 0x36a654u: goto label_36a654;
        case 0x36a658u: goto label_36a658;
        case 0x36a65cu: goto label_36a65c;
        case 0x36a660u: goto label_36a660;
        case 0x36a664u: goto label_36a664;
        default: break;
    }

    ctx->pc = 0x36a5f8u;

label_36a5f8:
    // 0x36a5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36a5fc:
    // 0x36a5fc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36a5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36a600:
    // 0x36a600: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36a604:
    // 0x36a604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36a608:
    // 0x36a608: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_36a60c:
    // 0x36a60c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a610:
    // 0x36a610: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x36a610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_36a614:
    // 0x36a614: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36a618:
    // 0x36a618: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36a61c:
    // 0x36a61c: 0x40f809  jalr        $v0
label_36a620:
    if (ctx->pc == 0x36A620u) {
        ctx->pc = 0x36A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A61Cu;
        // 0x36a620: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A624u;
        goto label_36a624;
    }
    ctx->pc = 0x36A61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A624u);
        ctx->pc = 0x36A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A61Cu;
        // 0x36a620: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A61Cu, 0x36A624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A624u;
label_36a624:
    // 0x36a624: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36a628:
    // 0x36a628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36a62c:
    // 0x36a62c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a630:
    // 0x36a630: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36a634:
    // 0x36a634: 0x40f809  jalr        $v0
label_36a638:
    if (ctx->pc == 0x36A638u) {
        ctx->pc = 0x36A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A634u;
        // 0x36a638: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A63Cu;
        goto label_36a63c;
    }
    ctx->pc = 0x36A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A63Cu);
        ctx->pc = 0x36A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A634u;
        // 0x36a638: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A634u, 0x36A63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A63Cu;
label_36a63c:
    // 0x36a63c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x36a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36a640:
    // 0x36a640: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x36a640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_36a644:
    // 0x36a644: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_36a648:
    if (ctx->pc == 0x36A648u) {
        ctx->pc = 0x36A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A644u;
        // 0x36a648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A64Cu;
        goto label_36a64c;
    }
    ctx->pc = 0x36A644u;
    {
        const bool branch_taken_0x36a644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A644u;
        // 0x36a648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a644) {
            ctx->pc = 0x36A654u;
            goto label_36a654;
        }
    }
    ctx->pc = 0x36A64Cu;
label_36a64c:
    // 0x36a64c: 0xc0da476  jal         func_3691D8
label_36a650:
    if (ctx->pc == 0x36A650u) {
        ctx->pc = 0x36A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A64Cu;
        // 0x36a650: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A654u;
        goto label_36a654;
    }
    ctx->pc = 0x36A64Cu;
    SET_GPR_U32(ctx, 31, 0x36A654u);
    ctx->pc = 0x36A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A64Cu;
    // 0x36a650: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x36A64Cu, 0x36A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A654u;
label_36a654:
    // 0x36a654: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36a654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36a658:
    // 0x36a658: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36a658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36a65c:
    // 0x36a65c: 0x3e00008  jr          $ra
label_36a660:
    if (ctx->pc == 0x36A660u) {
        ctx->pc = 0x36A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A65Cu;
        // 0x36a660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A664u;
        goto label_36a664;
    }
    ctx->pc = 0x36A65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A65Cu;
        // 0x36a660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A664u;
label_36a664:
    // 0x36a664: 0x0  nop
    ctx->pc = 0x36a664u;
    // NOP
    ctx->pc = 0x36a668u;
}
