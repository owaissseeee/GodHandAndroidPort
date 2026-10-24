#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: __do_global_ctors
// Address: 0x79a848 - 0x79a8f8
void ps2___do_global_ctors_0x79a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a848");
#endif

    switch (ctx->pc) {
        case 0x79a848u: goto label_79a848;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a850u: goto label_79a850;
        case 0x79a854u: goto label_79a854;
        case 0x79a858u: goto label_79a858;
        case 0x79a85cu: goto label_79a85c;
        case 0x79a860u: goto label_79a860;
        case 0x79a864u: goto label_79a864;
        case 0x79a868u: goto label_79a868;
        case 0x79a86cu: goto label_79a86c;
        case 0x79a870u: goto label_79a870;
        case 0x79a874u: goto label_79a874;
        case 0x79a878u: goto label_79a878;
        case 0x79a87cu: goto label_79a87c;
        case 0x79a880u: goto label_79a880;
        case 0x79a884u: goto label_79a884;
        case 0x79a888u: goto label_79a888;
        case 0x79a88cu: goto label_79a88c;
        case 0x79a890u: goto label_79a890;
        case 0x79a894u: goto label_79a894;
        case 0x79a898u: goto label_79a898;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8bcu: goto label_79a8bc;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        default: break;
    }

    ctx->pc = 0x79a848u;

label_79a848:
    // 0x79a848: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a84c:
    // 0x79a84c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a850:
    // 0x79a850: 0x8ce5aa04  lw          $a1, -0x55FC($a3)
    ctx->pc = 0x79a850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945284)));
label_79a854:
    // 0x79a854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a858:
    // 0x79a858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a85c:
    // 0x79a85c: 0x24e3aa04  addiu       $v1, $a3, -0x55FC
    ctx->pc = 0x79a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945284));
label_79a860:
    // 0x79a860: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a864:
    // 0x79a864: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a868:
    if (ctx->pc == 0x79A868u) {
        ctx->pc = 0x79A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A864u;
        // 0x79a868: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A86Cu;
        goto label_79a86c;
    }
    ctx->pc = 0x79A864u;
    {
        const bool branch_taken_0x79a864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A864u;
        // 0x79a868: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a864) {
            ctx->pc = 0x79A8ACu;
            goto label_79a8ac;
        }
    }
    ctx->pc = 0x79A86Cu;
label_79a86c:
    // 0x79a86c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a870:
    // 0x79a870: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a874:
    if (ctx->pc == 0x79A874u) {
        ctx->pc = 0x79A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A870u;
        // 0x79a874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A878u;
        goto label_79a878;
    }
    ctx->pc = 0x79A870u;
    {
        const bool branch_taken_0x79a870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A870u;
        // 0x79a874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a870) {
            ctx->pc = 0x79A8ACu;
            goto label_79a8ac;
        }
    }
    ctx->pc = 0x79A878u;
label_79a878:
    // 0x79a878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a87c:
    // 0x79a87c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a880:
    // 0x79a880: 0x24e4aa04  addiu       $a0, $a3, -0x55FC
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945284));
label_79a884:
    // 0x79a884: 0x0  nop
    ctx->pc = 0x79a884u;
    // NOP
label_79a888:
    // 0x79a888: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a888u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a88c:
    // 0x79a88c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a890:
    // 0x79a890: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a894:
    // 0x79a894: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a898:
    // 0x79a898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a89c:
    // 0x79a89c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a8a0:
    // 0x79a8a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a8a4:
    // 0x79a8a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a8a8:
    if (ctx->pc == 0x79A8A8u) {
        ctx->pc = 0x79A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A4u;
        // 0x79a8a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8ACu;
        goto label_79a8ac;
    }
    ctx->pc = 0x79A8A4u;
    {
        const bool branch_taken_0x79a8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8a4) {
            ctx->pc = 0x79A8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8A4u;
            // 0x79a8a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a888;
        }
    }
    ctx->pc = 0x79A8ACu;
label_79a8ac:
    // 0x79a8ac: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a8acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a8b0:
    // 0x79a8b0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a8b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a8b4:
    // 0x79a8b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a8b8:
    if (ctx->pc == 0x79A8B8u) {
        ctx->pc = 0x79A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B4u;
        // 0x79a8b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8BCu;
        goto label_79a8bc;
    }
    ctx->pc = 0x79A8B4u;
    {
        const bool branch_taken_0x79a8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B4u;
        // 0x79a8b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8b4) {
            ctx->pc = 0x79A8E4u;
            goto label_79a8e4;
        }
    }
    ctx->pc = 0x79A8BCu;
label_79a8bc:
    // 0x79a8bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a8c0:
    // 0x79a8c0: 0x2442aa04  addiu       $v0, $v0, -0x55FC
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945284));
label_79a8c4:
    // 0x79a8c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a8c8:
    // 0x79a8c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a8cc:
    // 0x79a8cc: 0x0  nop
    ctx->pc = 0x79a8ccu;
    // NOP
label_79a8d0:
    // 0x79a8d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a8d4:
    // 0x79a8d4: 0x40f809  jalr        $v0
label_79a8d8:
    if (ctx->pc == 0x79A8D8u) {
        ctx->pc = 0x79A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D4u;
        // 0x79a8d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8DCu;
        goto label_79a8dc;
    }
    ctx->pc = 0x79A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A8DCu);
        ctx->pc = 0x79A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D4u;
        // 0x79a8d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8D4u, 0x79A8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A8DCu;
label_79a8dc:
    // 0x79a8dc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a8e0:
    if (ctx->pc == 0x79A8E0u) {
        ctx->pc = 0x79A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8DCu;
        // 0x79a8e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8E4u;
        goto label_79a8e4;
    }
    ctx->pc = 0x79A8DCu;
    {
        const bool branch_taken_0x79a8dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8dc) {
            ctx->pc = 0x79A8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8DCu;
            // 0x79a8e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8d0;
        }
    }
    ctx->pc = 0x79A8E4u;
label_79a8e4:
    // 0x79a8e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a8e8:
    // 0x79a8e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a8ec:
    // 0x79a8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a8f0:
    // 0x79a8f0: 0x3e00008  jr          $ra
label_79a8f4:
    if (ctx->pc == 0x79A8F4u) {
        ctx->pc = 0x79A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F0u;
        // 0x79a8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8F8u;
        goto label_fallthrough_0x79a8f0;
    }
    ctx->pc = 0x79A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F0u;
        // 0x79a8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a8f0:
    ctx->pc = 0x79A8F8u;
}
} // namespace gh_r701
