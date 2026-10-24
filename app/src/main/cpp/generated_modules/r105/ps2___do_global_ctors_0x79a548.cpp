#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: __do_global_ctors
// Address: 0x79a548 - 0x79a5f8
void ps2___do_global_ctors_0x79a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a548");
#endif

    switch (ctx->pc) {
        case 0x79a548u: goto label_79a548;
        case 0x79a54cu: goto label_79a54c;
        case 0x79a550u: goto label_79a550;
        case 0x79a554u: goto label_79a554;
        case 0x79a558u: goto label_79a558;
        case 0x79a55cu: goto label_79a55c;
        case 0x79a560u: goto label_79a560;
        case 0x79a564u: goto label_79a564;
        case 0x79a568u: goto label_79a568;
        case 0x79a56cu: goto label_79a56c;
        case 0x79a570u: goto label_79a570;
        case 0x79a574u: goto label_79a574;
        case 0x79a578u: goto label_79a578;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a580u: goto label_79a580;
        case 0x79a584u: goto label_79a584;
        case 0x79a588u: goto label_79a588;
        case 0x79a58cu: goto label_79a58c;
        case 0x79a590u: goto label_79a590;
        case 0x79a594u: goto label_79a594;
        case 0x79a598u: goto label_79a598;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5a4u: goto label_79a5a4;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5acu: goto label_79a5ac;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5b8u: goto label_79a5b8;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d4u: goto label_79a5d4;
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5dcu: goto label_79a5dc;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        default: break;
    }

    ctx->pc = 0x79a548u;

label_79a548:
    // 0x79a548: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a54c:
    // 0x79a54c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a550:
    // 0x79a550: 0x8ce5a880  lw          $a1, -0x5780($a3)
    ctx->pc = 0x79a550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944896)));
label_79a554:
    // 0x79a554: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a558:
    // 0x79a558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a55c:
    // 0x79a55c: 0x24e3a880  addiu       $v1, $a3, -0x5780
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944896));
label_79a560:
    // 0x79a560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a564:
    // 0x79a564: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a568:
    if (ctx->pc == 0x79A568u) {
        ctx->pc = 0x79A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A564u;
        // 0x79a568: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A56Cu;
        goto label_79a56c;
    }
    ctx->pc = 0x79A564u;
    {
        const bool branch_taken_0x79a564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A564u;
        // 0x79a568: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a564) {
            ctx->pc = 0x79A5ACu;
            goto label_79a5ac;
        }
    }
    ctx->pc = 0x79A56Cu;
label_79a56c:
    // 0x79a56c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a570:
    // 0x79a570: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a574:
    if (ctx->pc == 0x79A574u) {
        ctx->pc = 0x79A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A570u;
        // 0x79a574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A578u;
        goto label_79a578;
    }
    ctx->pc = 0x79A570u;
    {
        const bool branch_taken_0x79a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A570u;
        // 0x79a574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a570) {
            ctx->pc = 0x79A5ACu;
            goto label_79a5ac;
        }
    }
    ctx->pc = 0x79A578u;
label_79a578:
    // 0x79a578: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a57c:
    // 0x79a57c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a580:
    // 0x79a580: 0x24e4a880  addiu       $a0, $a3, -0x5780
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944896));
label_79a584:
    // 0x79a584: 0x0  nop
    ctx->pc = 0x79a584u;
    // NOP
label_79a588:
    // 0x79a588: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a588u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a58c:
    // 0x79a58c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a590:
    // 0x79a590: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a594:
    // 0x79a594: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a598:
    // 0x79a598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a59c:
    // 0x79a59c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a5a0:
    // 0x79a5a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a5a4:
    // 0x79a5a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a5a8:
    if (ctx->pc == 0x79A5A8u) {
        ctx->pc = 0x79A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A4u;
        // 0x79a5a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5ACu;
        goto label_79a5ac;
    }
    ctx->pc = 0x79A5A4u;
    {
        const bool branch_taken_0x79a5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5a4) {
            ctx->pc = 0x79A5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A5A4u;
            // 0x79a5a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a588;
        }
    }
    ctx->pc = 0x79A5ACu;
label_79a5ac:
    // 0x79a5ac: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a5acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a5b0:
    // 0x79a5b0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a5b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a5b4:
    // 0x79a5b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a5b8:
    if (ctx->pc == 0x79A5B8u) {
        ctx->pc = 0x79A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B4u;
        // 0x79a5b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5BCu;
        goto label_79a5bc;
    }
    ctx->pc = 0x79A5B4u;
    {
        const bool branch_taken_0x79a5b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B4u;
        // 0x79a5b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5b4) {
            ctx->pc = 0x79A5E4u;
            goto label_79a5e4;
        }
    }
    ctx->pc = 0x79A5BCu;
label_79a5bc:
    // 0x79a5bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a5c0:
    // 0x79a5c0: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
label_79a5c4:
    // 0x79a5c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a5c8:
    // 0x79a5c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a5cc:
    // 0x79a5cc: 0x0  nop
    ctx->pc = 0x79a5ccu;
    // NOP
label_79a5d0:
    // 0x79a5d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a5d4:
    // 0x79a5d4: 0x40f809  jalr        $v0
label_79a5d8:
    if (ctx->pc == 0x79A5D8u) {
        ctx->pc = 0x79A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D4u;
        // 0x79a5d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5DCu;
        goto label_79a5dc;
    }
    ctx->pc = 0x79A5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A5DCu);
        ctx->pc = 0x79A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D4u;
        // 0x79a5d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5D4u, 0x79A5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A5DCu;
label_79a5dc:
    // 0x79a5dc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a5e0:
    if (ctx->pc == 0x79A5E0u) {
        ctx->pc = 0x79A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5DCu;
        // 0x79a5e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5E4u;
        goto label_79a5e4;
    }
    ctx->pc = 0x79A5DCu;
    {
        const bool branch_taken_0x79a5dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5dc) {
            ctx->pc = 0x79A5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A5DCu;
            // 0x79a5e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5d0;
        }
    }
    ctx->pc = 0x79A5E4u;
label_79a5e4:
    // 0x79a5e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a5e8:
    // 0x79a5e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a5ec:
    // 0x79a5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a5f0:
    // 0x79a5f0: 0x3e00008  jr          $ra
label_79a5f4:
    if (ctx->pc == 0x79A5F4u) {
        ctx->pc = 0x79A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F0u;
        // 0x79a5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5F8u;
        goto label_fallthrough_0x79a5f0;
    }
    ctx->pc = 0x79A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F0u;
        // 0x79a5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a5f0:
    ctx->pc = 0x79A5F8u;
}
} // namespace gh_r105
