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

// Function: func_00340580
// Address: 0x340580 - 0x340680
void func_00340580_0x340580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340580_0x340580");
#endif

    switch (ctx->pc) {
        case 0x3405b8u: goto label_3405b8;
        case 0x340610u: goto label_340610;
        case 0x34063cu: goto label_34063c;
        case 0x340660u: goto label_340660;
        default: break;
    }

    ctx->pc = 0x340580u;

    // 0x340580: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x340584: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340588: 0x2442c420  addiu       $v0, $v0, -0x3BE0
    ctx->pc = 0x340588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951968));
    // 0x34058c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x340590: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x340590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x340594: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x340594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340598: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x340598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34059c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3405a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3405a4: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x3405a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x3405a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3405a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3405ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3405acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3405b0: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3405B0u;
    SET_GPR_U32(ctx, 31, 0x3405B8u);
    ctx->pc = 0x3405B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3405B0u;
    // 0x3405b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3405B0u, 0x3405B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405B8u;
label_3405b8:
    // 0x3405b8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3405B8u;
    {
        const bool branch_taken_0x3405b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3405b8) {
            ctx->pc = 0x3405BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3405B8u;
            // 0x3405bc: 0x2a620400  slti        $v0, $s3, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3405D0u;
            goto label_3405d0;
        }
    }
    ctx->pc = 0x3405C0u;
    // 0x3405c0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3405c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3405c4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3405C4u;
    {
        const bool branch_taken_0x3405c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405C4u;
        // 0x3405c8: 0x24846f18  addiu       $a0, $a0, 0x6F18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405c4) {
            ctx->pc = 0x340658u;
            goto label_340658;
        }
    }
    ctx->pc = 0x3405CCu;
    // 0x3405cc: 0x0  nop
    ctx->pc = 0x3405ccu;
    // NOP
label_3405d0:
    // 0x3405d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3405D0u;
    {
        const bool branch_taken_0x3405d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405d0) {
            ctx->pc = 0x3405D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3405D0u;
            // 0x3405d4: 0x32420003  andi        $v0, $s2, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3405E8u;
            goto label_3405e8;
        }
    }
    ctx->pc = 0x3405D8u;
    // 0x3405d8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3405d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3405dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3405DCu;
    {
        const bool branch_taken_0x3405dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405DCu;
        // 0x3405e0: 0x24846f40  addiu       $a0, $a0, 0x6F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405dc) {
            ctx->pc = 0x340658u;
            goto label_340658;
        }
    }
    ctx->pc = 0x3405E4u;
    // 0x3405e4: 0x0  nop
    ctx->pc = 0x3405e4u;
    // NOP
label_3405e8:
    // 0x3405e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3405E8u;
    {
        const bool branch_taken_0x3405e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405E8u;
        // 0x3405ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405e8) {
            ctx->pc = 0x3405F8u;
            goto label_3405f8;
        }
    }
    ctx->pc = 0x3405F0u;
    // 0x3405f0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x3405f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3405f4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3405f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3405f8:
    // 0x3405f8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3405f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3405fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340604: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x340604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x340608: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x340608u;
    SET_GPR_U32(ctx, 31, 0x340610u);
    ctx->pc = 0x34060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340608u;
    // 0x34060c: 0x2630002c  addiu       $s0, $s1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x340608u, 0x340610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340610u;
label_340610:
    // 0x340610: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x340610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x340614: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x340614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x340618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340618u;
    {
        const bool branch_taken_0x340618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340618u;
        // 0x34061c: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340618) {
            ctx->pc = 0x340628u;
            goto label_340628;
        }
    }
    ctx->pc = 0x340620u;
    // 0x340620: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x340620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x340624: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x340624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_340628:
    // 0x340628: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x340628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x34062c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x34062cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x340630: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x340630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x340634: 0xc0d01c0  jal         func_340700
    ctx->pc = 0x340634u;
    SET_GPR_U32(ctx, 31, 0x34063Cu);
    ctx->pc = 0x340638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340634u;
    // 0x340638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x340634u, 0x34063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34063Cu;
label_34063c:
    // 0x34063c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x34063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x340640: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x340640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x340644: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x340644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x340648: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x340648u;
    {
        const bool branch_taken_0x340648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340648) {
            ctx->pc = 0x34064Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340648u;
            // 0x34064c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340664u;
            goto label_340664;
        }
    }
    ctx->pc = 0x340650u;
    // 0x340650: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x340650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x340654: 0x24846f68  addiu       $a0, $a0, 0x6F68
    ctx->pc = 0x340654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28520));
label_340658:
    // 0x340658: 0xc0d0114  jal         func_340450
    ctx->pc = 0x340658u;
    SET_GPR_U32(ctx, 31, 0x340660u);
    ctx->pc = 0x340450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340450u, 0x340658u, 0x340660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340660u;
label_340660:
    // 0x340660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340664:
    // 0x340664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34066c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34066cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x340670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340678: 0x3e00008  jr          $ra
    ctx->pc = 0x340678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340678u;
        // 0x34067c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340680u;
}
