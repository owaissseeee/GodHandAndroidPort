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

// Function: func_002785E0
// Address: 0x2785e0 - 0x278690
void func_002785E0_0x2785e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002785E0_0x2785e0");
#endif

    switch (ctx->pc) {
        case 0x2785e0u: goto label_2785e0;
        case 0x2785e4u: goto label_2785e4;
        case 0x2785e8u: goto label_2785e8;
        case 0x2785ecu: goto label_2785ec;
        case 0x2785f0u: goto label_2785f0;
        case 0x2785f4u: goto label_2785f4;
        case 0x2785f8u: goto label_2785f8;
        case 0x2785fcu: goto label_2785fc;
        case 0x278600u: goto label_278600;
        case 0x278604u: goto label_278604;
        case 0x278608u: goto label_278608;
        case 0x27860cu: goto label_27860c;
        case 0x278610u: goto label_278610;
        case 0x278614u: goto label_278614;
        case 0x278618u: goto label_278618;
        case 0x27861cu: goto label_27861c;
        case 0x278620u: goto label_278620;
        case 0x278624u: goto label_278624;
        case 0x278628u: goto label_278628;
        case 0x27862cu: goto label_27862c;
        case 0x278630u: goto label_278630;
        case 0x278634u: goto label_278634;
        case 0x278638u: goto label_278638;
        case 0x27863cu: goto label_27863c;
        case 0x278640u: goto label_278640;
        case 0x278644u: goto label_278644;
        case 0x278648u: goto label_278648;
        case 0x27864cu: goto label_27864c;
        case 0x278650u: goto label_278650;
        case 0x278654u: goto label_278654;
        case 0x278658u: goto label_278658;
        case 0x27865cu: goto label_27865c;
        case 0x278660u: goto label_278660;
        case 0x278664u: goto label_278664;
        case 0x278668u: goto label_278668;
        case 0x27866cu: goto label_27866c;
        case 0x278670u: goto label_278670;
        case 0x278674u: goto label_278674;
        case 0x278678u: goto label_278678;
        case 0x27867cu: goto label_27867c;
        case 0x278680u: goto label_278680;
        case 0x278684u: goto label_278684;
        case 0x278688u: goto label_278688;
        case 0x27868cu: goto label_27868c;
        default: break;
    }

    ctx->pc = 0x2785e0u;

label_2785e0:
    // 0x2785e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2785e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2785e4:
    // 0x2785e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2785e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2785e8:
    // 0x2785e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2785e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2785ec:
    // 0x2785ec: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x2785ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_2785f0:
    // 0x2785f0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2785f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2785f4:
    // 0x2785f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2785f8:
    if (ctx->pc == 0x2785F8u) {
        ctx->pc = 0x2785F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785F4u;
        // 0x2785f8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785FCu;
        goto label_2785fc;
    }
    ctx->pc = 0x2785F4u;
    {
        const bool branch_taken_0x2785f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2785f4) {
            ctx->pc = 0x2785F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2785F4u;
            // 0x2785f8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785FCu;
            goto label_2785fc;
        }
    }
    ctx->pc = 0x2785FCu;
label_2785fc:
    // 0x2785fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2785fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_278600:
    // 0x278600: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x278600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_278604:
    // 0x278604: 0x2447fb18  addiu       $a3, $v0, -0x4E8
    ctx->pc = 0x278604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966040));
label_278608:
    // 0x278608: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x278608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27860c:
    // 0x27860c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27860cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_278610:
    // 0x278610: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x278610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_278614:
    // 0x278614: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x278614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278618:
    // 0x278618: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_27861c:
    if (ctx->pc == 0x27861Cu) {
        ctx->pc = 0x27861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278618u;
        // 0x27861c: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278620u;
        goto label_278620;
    }
    ctx->pc = 0x278618u;
    {
        const bool branch_taken_0x278618 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278618u;
        // 0x27861c: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278618) {
            ctx->pc = 0x278644u;
            goto label_278644;
        }
    }
    ctx->pc = 0x278620u;
label_278620:
    // 0x278620: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x278620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_278624:
    // 0x278624: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x278624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_278628:
    // 0x278628: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x278628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27862c:
    // 0x27862c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27862cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_278630:
    // 0x278630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x278630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_278634:
    // 0x278634: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x278634u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_278638:
    // 0x278638: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x278638u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_27863c:
    // 0x27863c: 0x10000004  b           . + 4 + (0x4 << 2)
label_278640:
    if (ctx->pc == 0x278640u) {
        ctx->pc = 0x278640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27863Cu;
        // 0x278640: 0x2543fb18  addiu       $v1, $t2, -0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278644u;
        goto label_278644;
    }
    ctx->pc = 0x27863Cu;
    {
        const bool branch_taken_0x27863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27863Cu;
        // 0x278640: 0x2543fb18  addiu       $v1, $t2, -0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27863c) {
            ctx->pc = 0x278650u;
            goto label_278650;
        }
    }
    ctx->pc = 0x278644u;
label_278644:
    // 0x278644: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x278644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_278648:
    // 0x278648: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27864c:
    // 0x27864c: 0x2543fb18  addiu       $v1, $t2, -0x4E8
    ctx->pc = 0x27864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966040));
label_278650:
    // 0x278650: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x278650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_278654:
    // 0x278654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_278658:
    // 0x278658: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27865c:
    if (ctx->pc == 0x27865Cu) {
        ctx->pc = 0x27865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278658u;
        // 0x27865c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278660u;
        goto label_278660;
    }
    ctx->pc = 0x278658u;
    {
        const bool branch_taken_0x278658 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278658u;
        // 0x27865c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278658) {
            ctx->pc = 0x278674u;
            goto label_278674;
        }
    }
    ctx->pc = 0x278660u;
label_278660:
    // 0x278660: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x278660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_278664:
    // 0x278664: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x278664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_278668:
    // 0x278668: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x278668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27866c:
    // 0x27866c: 0x10000002  b           . + 4 + (0x2 << 2)
label_278670:
    if (ctx->pc == 0x278670u) {
        ctx->pc = 0x278670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27866Cu;
        // 0x278670: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278674u;
        goto label_278674;
    }
    ctx->pc = 0x27866Cu;
    {
        const bool branch_taken_0x27866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27866Cu;
        // 0x278670: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27866c) {
            ctx->pc = 0x278678u;
            goto label_278678;
        }
    }
    ctx->pc = 0x278674u;
label_278674:
    // 0x278674: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x278674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_278678:
    // 0x278678: 0xe0f809  jalr        $a3
label_27867c:
    if (ctx->pc == 0x27867Cu) {
        ctx->pc = 0x27867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278678u;
        // 0x27867c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278680u;
        goto label_278680;
    }
    ctx->pc = 0x278678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x278680u);
        ctx->pc = 0x27867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278678u;
        // 0x27867c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278678u, 0x278680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278680u;
label_278680:
    // 0x278680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_278684:
    // 0x278684: 0x3e00008  jr          $ra
label_278688:
    if (ctx->pc == 0x278688u) {
        ctx->pc = 0x278688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278684u;
        // 0x278688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27868Cu;
        goto label_27868c;
    }
    ctx->pc = 0x278684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278684u;
        // 0x278688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27868Cu;
label_27868c:
    // 0x27868c: 0x0  nop
    ctx->pc = 0x27868cu;
    // NOP
    ctx->pc = 0x278690u;
}
