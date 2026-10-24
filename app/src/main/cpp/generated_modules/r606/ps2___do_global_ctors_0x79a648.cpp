#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: __do_global_ctors
// Address: 0x79a648 - 0x79a6f8
void ps2___do_global_ctors_0x79a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a648");
#endif

    switch (ctx->pc) {
        case 0x79a648u: goto label_79a648;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a650u: goto label_79a650;
        case 0x79a654u: goto label_79a654;
        case 0x79a658u: goto label_79a658;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a660u: goto label_79a660;
        case 0x79a664u: goto label_79a664;
        case 0x79a668u: goto label_79a668;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a670u: goto label_79a670;
        case 0x79a674u: goto label_79a674;
        case 0x79a678u: goto label_79a678;
        case 0x79a67cu: goto label_79a67c;
        case 0x79a680u: goto label_79a680;
        case 0x79a684u: goto label_79a684;
        case 0x79a688u: goto label_79a688;
        case 0x79a68cu: goto label_79a68c;
        case 0x79a690u: goto label_79a690;
        case 0x79a694u: goto label_79a694;
        case 0x79a698u: goto label_79a698;
        case 0x79a69cu: goto label_79a69c;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a4u: goto label_79a6a4;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6acu: goto label_79a6ac;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6b4u: goto label_79a6b4;
        case 0x79a6b8u: goto label_79a6b8;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6c4u: goto label_79a6c4;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6ccu: goto label_79a6cc;
        case 0x79a6d0u: goto label_79a6d0;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e0u: goto label_79a6e0;
        case 0x79a6e4u: goto label_79a6e4;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a6f4u: goto label_79a6f4;
        default: break;
    }

    ctx->pc = 0x79a648u;

label_79a648:
    // 0x79a648: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a648u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a64c:
    // 0x79a64c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a650:
    // 0x79a650: 0x8ce5a900  lw          $a1, -0x5700($a3)
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945024)));
label_79a654:
    // 0x79a654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a658:
    // 0x79a658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a65c:
    // 0x79a65c: 0x24e3a900  addiu       $v1, $a3, -0x5700
    ctx->pc = 0x79a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945024));
label_79a660:
    // 0x79a660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a664:
    // 0x79a664: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a668:
    if (ctx->pc == 0x79A668u) {
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A66Cu;
        goto label_79a66c;
    }
    ctx->pc = 0x79A664u;
    {
        const bool branch_taken_0x79a664 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a664) {
            ctx->pc = 0x79A6ACu;
            goto label_79a6ac;
        }
    }
    ctx->pc = 0x79A66Cu;
label_79a66c:
    // 0x79a66c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a670:
    // 0x79a670: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a674:
    if (ctx->pc == 0x79A674u) {
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A678u;
        goto label_79a678;
    }
    ctx->pc = 0x79A670u;
    {
        const bool branch_taken_0x79a670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a670) {
            ctx->pc = 0x79A6ACu;
            goto label_79a6ac;
        }
    }
    ctx->pc = 0x79A678u;
label_79a678:
    // 0x79a678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a67c:
    // 0x79a67c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a680:
    // 0x79a680: 0x24e4a900  addiu       $a0, $a3, -0x5700
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945024));
label_79a684:
    // 0x79a684: 0x0  nop
    ctx->pc = 0x79a684u;
    // NOP
label_79a688:
    // 0x79a688: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a688u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a68c:
    // 0x79a68c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a690:
    // 0x79a690: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a694:
    // 0x79a694: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a694u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a698:
    // 0x79a698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a69c:
    // 0x79a69c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a6a0:
    // 0x79a6a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a6a4:
    // 0x79a6a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a6a8:
    if (ctx->pc == 0x79A6A8u) {
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6ACu;
        goto label_79a6ac;
    }
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6A4u;
            // 0x79a6a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a688;
        }
    }
    ctx->pc = 0x79A6ACu;
label_79a6ac:
    // 0x79a6ac: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a6acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a6b0:
    // 0x79a6b0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a6b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a6b4:
    // 0x79a6b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a6b8:
    if (ctx->pc == 0x79A6B8u) {
        ctx->pc = 0x79A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B4u;
        // 0x79a6b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6BCu;
        goto label_79a6bc;
    }
    ctx->pc = 0x79A6B4u;
    {
        const bool branch_taken_0x79a6b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B4u;
        // 0x79a6b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6b4) {
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a6c0:
    // 0x79a6c0: 0x2442a900  addiu       $v0, $v0, -0x5700
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
label_79a6c4:
    // 0x79a6c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a6c8:
    // 0x79a6c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a6cc:
    // 0x79a6cc: 0x0  nop
    ctx->pc = 0x79a6ccu;
    // NOP
label_79a6d0:
    // 0x79a6d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a6d4:
    // 0x79a6d4: 0x40f809  jalr        $v0
label_79a6d8:
    if (ctx->pc == 0x79A6D8u) {
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6DCu;
        goto label_79a6dc;
    }
    ctx->pc = 0x79A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A6DCu);
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6D4u, 0x79A6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a6e0:
    if (ctx->pc == 0x79A6E0u) {
        ctx->pc = 0x79A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6DCu;
        // 0x79a6e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6E4u;
        goto label_79a6e4;
    }
    ctx->pc = 0x79A6DCu;
    {
        const bool branch_taken_0x79a6dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6dc) {
            ctx->pc = 0x79A6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6DCu;
            // 0x79a6e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6d0;
        }
    }
    ctx->pc = 0x79A6E4u;
label_79a6e4:
    // 0x79a6e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a6e8:
    // 0x79a6e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a6ec:
    // 0x79a6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a6f0:
    // 0x79a6f0: 0x3e00008  jr          $ra
label_79a6f4:
    if (ctx->pc == 0x79A6F4u) {
        ctx->pc = 0x79A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F0u;
        // 0x79a6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6F8u;
        goto label_fallthrough_0x79a6f0;
    }
    ctx->pc = 0x79A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F0u;
        // 0x79a6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a6f0:
    ctx->pc = 0x79A6F8u;
}
} // namespace gh_r606
