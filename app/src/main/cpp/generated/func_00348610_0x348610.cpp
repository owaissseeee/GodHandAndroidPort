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

// Function: func_00348610
// Address: 0x348610 - 0x348670
void func_00348610_0x348610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348610_0x348610");
#endif

    switch (ctx->pc) {
        case 0x348610u: goto label_348610;
        case 0x348614u: goto label_348614;
        case 0x348618u: goto label_348618;
        case 0x34861cu: goto label_34861c;
        case 0x348620u: goto label_348620;
        case 0x348624u: goto label_348624;
        case 0x348628u: goto label_348628;
        case 0x34862cu: goto label_34862c;
        case 0x348630u: goto label_348630;
        case 0x348634u: goto label_348634;
        case 0x348638u: goto label_348638;
        case 0x34863cu: goto label_34863c;
        case 0x348640u: goto label_348640;
        case 0x348644u: goto label_348644;
        case 0x348648u: goto label_348648;
        case 0x34864cu: goto label_34864c;
        case 0x348650u: goto label_348650;
        case 0x348654u: goto label_348654;
        case 0x348658u: goto label_348658;
        case 0x34865cu: goto label_34865c;
        case 0x348660u: goto label_348660;
        case 0x348664u: goto label_348664;
        case 0x348668u: goto label_348668;
        case 0x34866cu: goto label_34866c;
        default: break;
    }

    ctx->pc = 0x348610u;

label_348610:
    // 0x348610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348614:
    // 0x348614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348618:
    // 0x348618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34861c:
    // 0x34861c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_348620:
    // 0x348620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_348624:
    // 0x348624: 0xc0d225a  jal         func_348968
label_348628:
    if (ctx->pc == 0x348628u) {
        ctx->pc = 0x348628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348624u;
        // 0x348628: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34862Cu;
        goto label_34862c;
    }
    ctx->pc = 0x348624u;
    SET_GPR_U32(ctx, 31, 0x34862Cu);
    ctx->pc = 0x348628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348624u;
    // 0x348628: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x348624u, 0x34862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34862Cu;
label_34862c:
    // 0x34862c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348630:
    // 0x348630: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_348634:
    if (ctx->pc == 0x348634u) {
        ctx->pc = 0x348634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348630u;
        // 0x348634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348638u;
        goto label_348638;
    }
    ctx->pc = 0x348630u;
    {
        const bool branch_taken_0x348630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x348630) {
            ctx->pc = 0x348634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348630u;
            // 0x348634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34865Cu;
            goto label_34865c;
        }
    }
    ctx->pc = 0x348638u;
label_348638:
    // 0x348638: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x348638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_34863c:
    // 0x34863c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_348640:
    if (ctx->pc == 0x348640u) {
        ctx->pc = 0x348640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34863Cu;
        // 0x348640: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348644u;
        goto label_348644;
    }
    ctx->pc = 0x34863Cu;
    {
        const bool branch_taken_0x34863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34863Cu;
        // 0x348640: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34863c) {
            ctx->pc = 0x348658u;
            goto label_348658;
        }
    }
    ctx->pc = 0x348644u;
label_348644:
    // 0x348644: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x348644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_348648:
    // 0x348648: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_34864c:
    if (ctx->pc == 0x34864Cu) {
        ctx->pc = 0x34864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348648u;
        // 0x34864c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348650u;
        goto label_348650;
    }
    ctx->pc = 0x348648u;
    {
        const bool branch_taken_0x348648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348648) {
            ctx->pc = 0x34864Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348648u;
            // 0x34864c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34865Cu;
            goto label_34865c;
        }
    }
    ctx->pc = 0x348650u;
label_348650:
    // 0x348650: 0x40f809  jalr        $v0
label_348654:
    if (ctx->pc == 0x348654u) {
        ctx->pc = 0x348654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348650u;
        // 0x348654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348658u;
        goto label_348658;
    }
    ctx->pc = 0x348650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348658u);
        ctx->pc = 0x348654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348650u;
        // 0x348654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348650u, 0x348658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348658u;
label_348658:
    // 0x348658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34865c:
    // 0x34865c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34865cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348660:
    // 0x348660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348664:
    // 0x348664: 0x3e00008  jr          $ra
label_348668:
    if (ctx->pc == 0x348668u) {
        ctx->pc = 0x348668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348664u;
        // 0x348668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34866Cu;
        goto label_34866c;
    }
    ctx->pc = 0x348664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348664u;
        // 0x348668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34866Cu;
label_34866c:
    // 0x34866c: 0x0  nop
    ctx->pc = 0x34866cu;
    // NOP
    ctx->pc = 0x348670u;
}
