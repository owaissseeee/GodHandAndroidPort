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

// Function: func_003525F0
// Address: 0x3525f0 - 0x3526d0
void func_003525F0_0x3525f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003525F0_0x3525f0");
#endif

    switch (ctx->pc) {
        case 0x352624u: goto label_352624;
        case 0x352660u: goto label_352660;
        case 0x352678u: goto label_352678;
        default: break;
    }

    ctx->pc = 0x3525f0u;

    // 0x3525f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3525f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3525f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3525f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3525f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3525f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3525fc: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x3525fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x352600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x352600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x352604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x352604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x352608: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x352608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35260c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x352610: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x352610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352614: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x352614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x352618: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x352618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35261c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35261Cu;
    SET_GPR_U32(ctx, 31, 0x352624u);
    ctx->pc = 0x352620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35261Cu;
    // 0x352620: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35261Cu, 0x352624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352624u;
label_352624:
    // 0x352624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x352624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352628: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x352628u;
    {
        const bool branch_taken_0x352628 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352628u;
        // 0x35262c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352628) {
            ctx->pc = 0x35267Cu;
            goto label_35267c;
        }
    }
    ctx->pc = 0x352630u;
    // 0x352630: 0x661000d  bgez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x352630u;
    {
        const bool branch_taken_0x352630 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x352634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352630u;
        // 0x352634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352630) {
            ctx->pc = 0x352668u;
            goto label_352668;
        }
    }
    ctx->pc = 0x352638u;
    // 0x352638: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x352638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x35263c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35263Cu;
    {
        const bool branch_taken_0x35263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35263Cu;
        // 0x352640: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35263c) {
            ctx->pc = 0x35266Cu;
            goto label_35266c;
        }
    }
    ctx->pc = 0x352644u;
    // 0x352644: 0x82220057  lb          $v0, 0x57($s1)
    ctx->pc = 0x352644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
    // 0x352648: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x352648u;
    {
        const bool branch_taken_0x352648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352648u;
        // 0x35264c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352648) {
            ctx->pc = 0x352670u;
            goto label_352670;
        }
    }
    ctx->pc = 0x352650u;
    // 0x352650: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x352650u;
    {
        const bool branch_taken_0x352650 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x352650) {
            ctx->pc = 0x352654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352650u;
            // 0x352654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35267Cu;
            goto label_35267c;
        }
    }
    ctx->pc = 0x352658u;
    // 0x352658: 0xc0d49b4  jal         func_3526D0
    ctx->pc = 0x352658u;
    SET_GPR_U32(ctx, 31, 0x352660u);
    ctx->pc = 0x35265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352658u;
    // 0x35265c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3526D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3526D0u, 0x352658u, 0x352660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352660u;
label_352660:
    // 0x352660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x352660u;
    {
        const bool branch_taken_0x352660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352660u;
        // 0x352664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352660) {
            ctx->pc = 0x352678u;
            goto label_352678;
        }
    }
    ctx->pc = 0x352668u;
label_352668:
    // 0x352668: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x352668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_35266c:
    // 0x35266c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35266cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352670:
    // 0x352670: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x352670u;
    SET_GPR_U32(ctx, 31, 0x352678u);
    ctx->pc = 0x352674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352670u;
    // 0x352674: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x352670u, 0x352678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352678u;
label_352678:
    // 0x352678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35267c:
    // 0x35267c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35267Cu;
    {
        const bool branch_taken_0x35267c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x352680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35267Cu;
        // 0x352680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35267c) {
            ctx->pc = 0x3526B0u;
            goto label_3526b0;
        }
    }
    ctx->pc = 0x352684u;
    // 0x352684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352688: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x352688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35268c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x352690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x352694: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x352694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x352698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35269c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x35269cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3526a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3526a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3526a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3526a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3526a8: 0x80d49e4  j           func_352790
    ctx->pc = 0x3526A8u;
    ctx->pc = 0x3526ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3526A8u;
    // 0x3526ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352790u, 0x3526A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3526B0u;
label_3526b0:
    // 0x3526b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3526b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3526b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3526b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3526b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3526b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3526bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3526bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3526c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3526c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3526c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3526C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3526C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526C4u;
        // 0x3526c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3526C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3526CCu;
    // 0x3526cc: 0x0  nop
    ctx->pc = 0x3526ccu;
    // NOP
    ctx->pc = 0x3526d0u;
}
