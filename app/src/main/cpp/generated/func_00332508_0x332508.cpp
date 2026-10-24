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

// Function: func_00332508
// Address: 0x332508 - 0x3325f8
void func_00332508_0x332508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332508_0x332508");
#endif

    switch (ctx->pc) {
        case 0x332548u: goto label_332548;
        case 0x332554u: goto label_332554;
        case 0x332564u: goto label_332564;
        case 0x332568u: goto label_332568;
        case 0x3325a0u: goto label_3325a0;
        default: break;
    }

    ctx->pc = 0x332508u;

    // 0x332508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33250c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332510: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x332510u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x332514: 0x8e6284bc  lw          $v0, -0x7B44($s3)
    ctx->pc = 0x332514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D84BCu));
    // 0x332518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33251c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332524: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x332524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x332528: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x332528u;
    {
        const bool branch_taken_0x332528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332528u;
        // 0x33252c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332528) {
            ctx->pc = 0x3325C8u;
            goto label_3325c8;
        }
    }
    ctx->pc = 0x332530u;
    // 0x332530: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x332530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x332534: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x332534u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x332538: 0x3c140045  lui         $s4, 0x45
    ctx->pc = 0x332538u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
    // 0x33253c: 0x26118d40  addiu       $s1, $s0, -0x72C0
    ctx->pc = 0x33253cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937920));
    // 0x332540: 0x8e4584a4  lw          $a1, -0x7B5C($s2)
    ctx->pc = 0x332540u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3D84A4u));
    // 0x332544: 0x0  nop
    ctx->pc = 0x332544u;
    // NOP
label_332548:
    // 0x332548: 0x26048d40  addiu       $a0, $s0, -0x72C0
    ctx->pc = 0x332548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937920));
    // 0x33254c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x33254Cu;
    SET_GPR_U32(ctx, 31, 0x332554u);
    ctx->pc = 0x332550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33254Cu;
    // 0x332550: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x33254Cu, 0x332554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332554u;
label_332554:
    // 0x332554: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x332554u;
    {
        const bool branch_taken_0x332554 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x332554) {
            ctx->pc = 0x332558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332554u;
            // 0x332558: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332588u;
            goto label_332588;
        }
    }
    ctx->pc = 0x33255Cu;
    // 0x33255c: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x33255Cu;
    SET_GPR_U32(ctx, 31, 0x332564u);
    ctx->pc = 0x332560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33255Cu;
    // 0x332560: 0x26844270  addiu       $a0, $s4, 0x4270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33255Cu, 0x332564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332564u;
label_332564:
    // 0x332564: 0x0  nop
    ctx->pc = 0x332564u;
    // NOP
label_332568:
    // 0x332568: 0x0  nop
    ctx->pc = 0x332568u;
    // NOP
    // 0x33256c: 0x0  nop
    ctx->pc = 0x33256cu;
    // NOP
    // 0x332570: 0x0  nop
    ctx->pc = 0x332570u;
    // NOP
    // 0x332574: 0x0  nop
    ctx->pc = 0x332574u;
    // NOP
    // 0x332578: 0x0  nop
    ctx->pc = 0x332578u;
    // NOP
    // 0x33257c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x33257Cu;
    {
        const bool branch_taken_0x33257c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33257c) {
            ctx->pc = 0x332568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332568;
        }
    }
    ctx->pc = 0x332584u;
    // 0x332584: 0x0  nop
    ctx->pc = 0x332584u;
    // NOP
label_332588:
    // 0x332588: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x332588u;
    {
        const bool branch_taken_0x332588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332588u;
        // 0x33258c: 0x266384bc  addiu       $v1, $s3, -0x7B44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332588) {
            ctx->pc = 0x3325CCu;
            goto label_3325cc;
        }
    }
    ctx->pc = 0x332590u;
    // 0x332590: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x332590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332594: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x332594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x332598: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x332598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x33259c: 0x0  nop
    ctx->pc = 0x33259cu;
    // NOP
label_3325a0:
    // 0x3325a0: 0x0  nop
    ctx->pc = 0x3325a0u;
    // NOP
    // 0x3325a4: 0x0  nop
    ctx->pc = 0x3325a4u;
    // NOP
    // 0x3325a8: 0x0  nop
    ctx->pc = 0x3325a8u;
    // NOP
    // 0x3325ac: 0x0  nop
    ctx->pc = 0x3325acu;
    // NOP
    // 0x3325b0: 0x0  nop
    ctx->pc = 0x3325b0u;
    // NOP
    // 0x3325b4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3325B4u;
    {
        const bool branch_taken_0x3325b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3325b4) {
            ctx->pc = 0x3325B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3325B4u;
            // 0x3325b8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3325A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3325a0;
        }
    }
    ctx->pc = 0x3325BCu;
    // 0x3325bc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x3325BCu;
    {
        const bool branch_taken_0x3325bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3325C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325BCu;
        // 0x3325c0: 0x8e4584a4  lw          $a1, -0x7B5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3325bc) {
            ctx->pc = 0x332548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332548;
        }
    }
    ctx->pc = 0x3325C4u;
    // 0x3325c4: 0x0  nop
    ctx->pc = 0x3325c4u;
    // NOP
label_3325c8:
    // 0x3325c8: 0x266384bc  addiu       $v1, $s3, -0x7B44
    ctx->pc = 0x3325c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935740));
label_3325cc:
    // 0x3325cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3325ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3325d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3325d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3325d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3325d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3325d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3325d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3325dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3325dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3325e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3325e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3325e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3325e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3325e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3325e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3325ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3325ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3325f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3325F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3325F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325F0u;
        // 0x3325f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3325F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3325F8u;
}
