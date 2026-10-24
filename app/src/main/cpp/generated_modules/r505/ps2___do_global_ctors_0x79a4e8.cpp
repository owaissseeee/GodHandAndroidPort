#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __do_global_ctors
// Address: 0x79a4e8 - 0x79a598
void ps2___do_global_ctors_0x79a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a4e8");
#endif

    switch (ctx->pc) {
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
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
        default: break;
    }

    ctx->pc = 0x79a4e8u;

label_79a4e8:
    // 0x79a4e8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a4ec:
    // 0x79a4ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a4f0:
    // 0x79a4f0: 0x8ce5c200  lw          $a1, -0x3E00($a3)
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951424)));
label_79a4f4:
    // 0x79a4f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a4f8:
    // 0x79a4f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a4fc:
    // 0x79a4fc: 0x24e3c200  addiu       $v1, $a3, -0x3E00
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951424));
label_79a500:
    // 0x79a500: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a504:
    // 0x79a504: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a508:
    if (ctx->pc == 0x79A508u) {
        ctx->pc = 0x79A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A504u;
        // 0x79a508: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A50Cu;
        goto label_79a50c;
    }
    ctx->pc = 0x79A504u;
    {
        const bool branch_taken_0x79a504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A504u;
        // 0x79a508: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a504) {
            ctx->pc = 0x79A54Cu;
            goto label_79a54c;
        }
    }
    ctx->pc = 0x79A50Cu;
label_79a50c:
    // 0x79a50c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a510:
    // 0x79a510: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a514:
    if (ctx->pc == 0x79A514u) {
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A518u;
        goto label_79a518;
    }
    ctx->pc = 0x79A510u;
    {
        const bool branch_taken_0x79a510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a510) {
            ctx->pc = 0x79A54Cu;
            goto label_79a54c;
        }
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a51c:
    // 0x79a51c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a520:
    // 0x79a520: 0x24e4c200  addiu       $a0, $a3, -0x3E00
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951424));
label_79a524:
    // 0x79a524: 0x0  nop
    ctx->pc = 0x79a524u;
    // NOP
label_79a528:
    // 0x79a528: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a528u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a52c:
    // 0x79a52c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a530:
    // 0x79a530: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a534:
    // 0x79a534: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a538:
    // 0x79a538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a53c:
    // 0x79a53c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a540:
    // 0x79a540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a544:
    // 0x79a544: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a548:
    if (ctx->pc == 0x79A548u) {
        ctx->pc = 0x79A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A544u;
        // 0x79a548: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A54Cu;
        goto label_79a54c;
    }
    ctx->pc = 0x79A544u;
    {
        const bool branch_taken_0x79a544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a544) {
            ctx->pc = 0x79A548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A544u;
            // 0x79a548: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a528;
        }
    }
    ctx->pc = 0x79A54Cu;
label_79a54c:
    // 0x79a54c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a550:
    // 0x79a550: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a550u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a554:
    // 0x79a554: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a558:
    if (ctx->pc == 0x79A558u) {
        ctx->pc = 0x79A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A554u;
        // 0x79a558: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A55Cu;
        goto label_79a55c;
    }
    ctx->pc = 0x79A554u;
    {
        const bool branch_taken_0x79a554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A554u;
        // 0x79a558: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a554) {
            ctx->pc = 0x79A584u;
            goto label_79a584;
        }
    }
    ctx->pc = 0x79A55Cu;
label_79a55c:
    // 0x79a55c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a560:
    // 0x79a560: 0x2442c200  addiu       $v0, $v0, -0x3E00
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951424));
label_79a564:
    // 0x79a564: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a568:
    // 0x79a568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a56c:
    // 0x79a56c: 0x0  nop
    ctx->pc = 0x79a56cu;
    // NOP
label_79a570:
    // 0x79a570: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a574:
    // 0x79a574: 0x40f809  jalr        $v0
label_79a578:
    if (ctx->pc == 0x79A578u) {
        ctx->pc = 0x79A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A574u;
        // 0x79a578: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A57Cu;
        goto label_79a57c;
    }
    ctx->pc = 0x79A574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A57Cu);
        ctx->pc = 0x79A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A574u;
        // 0x79a578: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A574u, 0x79A57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A57Cu;
label_79a57c:
    // 0x79a57c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a580:
    if (ctx->pc == 0x79A580u) {
        ctx->pc = 0x79A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A57Cu;
        // 0x79a580: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A584u;
        goto label_79a584;
    }
    ctx->pc = 0x79A57Cu;
    {
        const bool branch_taken_0x79a57c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a57c) {
            ctx->pc = 0x79A580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A57Cu;
            // 0x79a580: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A584u;
label_79a584:
    // 0x79a584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a588:
    // 0x79a588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a58c:
    // 0x79a58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a590:
    // 0x79a590: 0x3e00008  jr          $ra
label_79a594:
    if (ctx->pc == 0x79A594u) {
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A598u;
        goto label_fallthrough_0x79a590;
    }
    ctx->pc = 0x79A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a590:
    ctx->pc = 0x79A598u;
}
} // namespace gh_r505
