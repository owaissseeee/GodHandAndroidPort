#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: __do_global_ctors
// Address: 0x79a3c0 - 0x79a470
void ps2___do_global_ctors_0x79a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a3c0");
#endif

    switch (ctx->pc) {
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
        case 0x79a408u: goto label_79a408;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a410u: goto label_79a410;
        case 0x79a414u: goto label_79a414;
        case 0x79a418u: goto label_79a418;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a420u: goto label_79a420;
        case 0x79a424u: goto label_79a424;
        case 0x79a428u: goto label_79a428;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a430u: goto label_79a430;
        case 0x79a434u: goto label_79a434;
        case 0x79a438u: goto label_79a438;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a440u: goto label_79a440;
        case 0x79a444u: goto label_79a444;
        case 0x79a448u: goto label_79a448;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a450u: goto label_79a450;
        case 0x79a454u: goto label_79a454;
        case 0x79a458u: goto label_79a458;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a460u: goto label_79a460;
        case 0x79a464u: goto label_79a464;
        case 0x79a468u: goto label_79a468;
        case 0x79a46cu: goto label_79a46c;
        default: break;
    }

    ctx->pc = 0x79a3c0u;

label_79a3c0:
    // 0x79a3c0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a3c4:
    // 0x79a3c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a3c8:
    // 0x79a3c8: 0x8ce5aa80  lw          $a1, -0x5580($a3)
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945408)));
label_79a3cc:
    // 0x79a3cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a3d0:
    // 0x79a3d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a3d4:
    // 0x79a3d4: 0x24e3aa80  addiu       $v1, $a3, -0x5580
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945408));
label_79a3d8:
    // 0x79a3d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a3dc:
    // 0x79a3dc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a3e0:
    if (ctx->pc == 0x79A3E0u) {
        ctx->pc = 0x79A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3DCu;
        // 0x79a3e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3E4u;
        goto label_79a3e4;
    }
    ctx->pc = 0x79A3DCu;
    {
        const bool branch_taken_0x79a3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3DCu;
        // 0x79a3e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3dc) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A3E4u;
label_79a3e4:
    // 0x79a3e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a3e8:
    // 0x79a3e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a3ec:
    if (ctx->pc == 0x79A3ECu) {
        ctx->pc = 0x79A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E8u;
        // 0x79a3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3F0u;
        goto label_79a3f0;
    }
    ctx->pc = 0x79A3E8u;
    {
        const bool branch_taken_0x79a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E8u;
        // 0x79a3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e8) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A3F0u;
label_79a3f0:
    // 0x79a3f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a3f4:
    // 0x79a3f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a3f8:
    // 0x79a3f8: 0x24e4aa80  addiu       $a0, $a3, -0x5580
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945408));
label_79a3fc:
    // 0x79a3fc: 0x0  nop
    ctx->pc = 0x79a3fcu;
    // NOP
label_79a400:
    // 0x79a400: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a400u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a404:
    // 0x79a404: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a408:
    // 0x79a408: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a40c:
    // 0x79a40c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a40cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a410:
    // 0x79a410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a414:
    // 0x79a414: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a418:
    // 0x79a418: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a41c:
    // 0x79a41c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a420:
    if (ctx->pc == 0x79A420u) {
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A424u;
        goto label_79a424;
    }
    ctx->pc = 0x79A41Cu;
    {
        const bool branch_taken_0x79a41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a41c) {
            ctx->pc = 0x79A420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A41Cu;
            // 0x79a420: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a400;
        }
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a428:
    // 0x79a428: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a428u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a42c:
    // 0x79a42c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a430:
    if (ctx->pc == 0x79A430u) {
        ctx->pc = 0x79A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A42Cu;
        // 0x79a430: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A434u;
        goto label_79a434;
    }
    ctx->pc = 0x79A42Cu;
    {
        const bool branch_taken_0x79a42c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A42Cu;
        // 0x79a430: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a42c) {
            ctx->pc = 0x79A45Cu;
            goto label_79a45c;
        }
    }
    ctx->pc = 0x79A434u;
label_79a434:
    // 0x79a434: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a438:
    // 0x79a438: 0x2442aa80  addiu       $v0, $v0, -0x5580
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
label_79a43c:
    // 0x79a43c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a440:
    // 0x79a440: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a444:
    // 0x79a444: 0x0  nop
    ctx->pc = 0x79a444u;
    // NOP
label_79a448:
    // 0x79a448: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a44c:
    // 0x79a44c: 0x40f809  jalr        $v0
label_79a450:
    if (ctx->pc == 0x79A450u) {
        ctx->pc = 0x79A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A44Cu;
        // 0x79a450: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A454u;
        goto label_79a454;
    }
    ctx->pc = 0x79A44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A454u);
        ctx->pc = 0x79A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A44Cu;
        // 0x79a450: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A44Cu, 0x79A454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A454u;
label_79a454:
    // 0x79a454: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a458:
    if (ctx->pc == 0x79A458u) {
        ctx->pc = 0x79A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A454u;
        // 0x79a458: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A45Cu;
        goto label_79a45c;
    }
    ctx->pc = 0x79A454u;
    {
        const bool branch_taken_0x79a454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a454) {
            ctx->pc = 0x79A458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A454u;
            // 0x79a458: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a448;
        }
    }
    ctx->pc = 0x79A45Cu;
label_79a45c:
    // 0x79a45c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a460:
    // 0x79a460: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a464:
    // 0x79a464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a468:
    // 0x79a468: 0x3e00008  jr          $ra
label_79a46c:
    if (ctx->pc == 0x79A46Cu) {
        ctx->pc = 0x79A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A468u;
        // 0x79a46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A470u;
        goto label_fallthrough_0x79a468;
    }
    ctx->pc = 0x79A468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A468u;
        // 0x79a46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a468:
    ctx->pc = 0x79A470u;
}
} // namespace gh_r006
