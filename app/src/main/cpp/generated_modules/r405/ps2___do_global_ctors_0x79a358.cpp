#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: __do_global_ctors
// Address: 0x79a358 - 0x79a408
void ps2___do_global_ctors_0x79a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a358");
#endif

    switch (ctx->pc) {
        case 0x79a358u: goto label_79a358;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a360u: goto label_79a360;
        case 0x79a364u: goto label_79a364;
        case 0x79a368u: goto label_79a368;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a370u: goto label_79a370;
        case 0x79a374u: goto label_79a374;
        case 0x79a378u: goto label_79a378;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a380u: goto label_79a380;
        case 0x79a384u: goto label_79a384;
        case 0x79a388u: goto label_79a388;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a390u: goto label_79a390;
        case 0x79a394u: goto label_79a394;
        case 0x79a398u: goto label_79a398;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3ccu: goto label_79a3cc;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3dcu: goto label_79a3dc;
        case 0x79a3e0u: goto label_79a3e0;
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a3f4u: goto label_79a3f4;
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a400u: goto label_79a400;
        case 0x79a404u: goto label_79a404;
        default: break;
    }

    ctx->pc = 0x79a358u;

label_79a358:
    // 0x79a358: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a35c:
    // 0x79a35c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a360:
    // 0x79a360: 0x8ce5a780  lw          $a1, -0x5880($a3)
    ctx->pc = 0x79a360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944640)));
label_79a364:
    // 0x79a364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a368:
    // 0x79a368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a36c:
    // 0x79a36c: 0x24e3a780  addiu       $v1, $a3, -0x5880
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944640));
label_79a370:
    // 0x79a370: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a374:
    // 0x79a374: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a378:
    if (ctx->pc == 0x79A378u) {
        ctx->pc = 0x79A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A374u;
        // 0x79a378: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A37Cu;
        goto label_79a37c;
    }
    ctx->pc = 0x79A374u;
    {
        const bool branch_taken_0x79a374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A374u;
        // 0x79a378: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a374) {
            ctx->pc = 0x79A3BCu;
            goto label_79a3bc;
        }
    }
    ctx->pc = 0x79A37Cu;
label_79a37c:
    // 0x79a37c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a380:
    // 0x79a380: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a384:
    if (ctx->pc == 0x79A384u) {
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A388u;
        goto label_79a388;
    }
    ctx->pc = 0x79A380u;
    {
        const bool branch_taken_0x79a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a380) {
            ctx->pc = 0x79A3BCu;
            goto label_79a3bc;
        }
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a38c:
    // 0x79a38c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a390:
    // 0x79a390: 0x24e4a780  addiu       $a0, $a3, -0x5880
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944640));
label_79a394:
    // 0x79a394: 0x0  nop
    ctx->pc = 0x79a394u;
    // NOP
label_79a398:
    // 0x79a398: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a398u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a39c:
    // 0x79a39c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a3a0:
    // 0x79a3a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a3a4:
    // 0x79a3a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a3a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a3a8:
    // 0x79a3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a3ac:
    // 0x79a3ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a3b0:
    // 0x79a3b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a3b4:
    // 0x79a3b4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a3b8:
    if (ctx->pc == 0x79A3B8u) {
        ctx->pc = 0x79A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B4u;
        // 0x79a3b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3BCu;
        goto label_79a3bc;
    }
    ctx->pc = 0x79A3B4u;
    {
        const bool branch_taken_0x79a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3b4) {
            ctx->pc = 0x79A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3B4u;
            // 0x79a3b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a398;
        }
    }
    ctx->pc = 0x79A3BCu;
label_79a3bc:
    // 0x79a3bc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a3bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a3c0:
    // 0x79a3c0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a3c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a3c4:
    // 0x79a3c4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a3c8:
    if (ctx->pc == 0x79A3C8u) {
        ctx->pc = 0x79A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C4u;
        // 0x79a3c8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3CCu;
        goto label_79a3cc;
    }
    ctx->pc = 0x79A3C4u;
    {
        const bool branch_taken_0x79a3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C4u;
        // 0x79a3c8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c4) {
            ctx->pc = 0x79A3F4u;
            goto label_79a3f4;
        }
    }
    ctx->pc = 0x79A3CCu;
label_79a3cc:
    // 0x79a3cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a3d0:
    // 0x79a3d0: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
label_79a3d4:
    // 0x79a3d4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a3d8:
    // 0x79a3d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a3dc:
    // 0x79a3dc: 0x0  nop
    ctx->pc = 0x79a3dcu;
    // NOP
label_79a3e0:
    // 0x79a3e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a3e4:
    // 0x79a3e4: 0x40f809  jalr        $v0
label_79a3e8:
    if (ctx->pc == 0x79A3E8u) {
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3ECu;
        goto label_79a3ec;
    }
    ctx->pc = 0x79A3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A3ECu);
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3E4u, 0x79A3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A3ECu;
label_79a3ec:
    // 0x79a3ec: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a3f0:
    if (ctx->pc == 0x79A3F0u) {
        ctx->pc = 0x79A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ECu;
        // 0x79a3f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3F4u;
        goto label_79a3f4;
    }
    ctx->pc = 0x79A3ECu;
    {
        const bool branch_taken_0x79a3ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3ec) {
            ctx->pc = 0x79A3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3ECu;
            // 0x79a3f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A3F4u;
label_79a3f4:
    // 0x79a3f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a3f8:
    // 0x79a3f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a3fc:
    // 0x79a3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a400:
    // 0x79a400: 0x3e00008  jr          $ra
label_79a404:
    if (ctx->pc == 0x79A404u) {
        ctx->pc = 0x79A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A400u;
        // 0x79a404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A408u;
        goto label_fallthrough_0x79a400;
    }
    ctx->pc = 0x79A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A400u;
        // 0x79a404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a400:
    ctx->pc = 0x79A408u;
}
} // namespace gh_r405
