#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: __do_global_ctors
// Address: 0x79b3b8 - 0x79b468
void ps2___do_global_ctors_0x79b3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79b3b8");
#endif

    switch (ctx->pc) {
        case 0x79b3b8u: goto label_79b3b8;
        case 0x79b3bcu: goto label_79b3bc;
        case 0x79b3c0u: goto label_79b3c0;
        case 0x79b3c4u: goto label_79b3c4;
        case 0x79b3c8u: goto label_79b3c8;
        case 0x79b3ccu: goto label_79b3cc;
        case 0x79b3d0u: goto label_79b3d0;
        case 0x79b3d4u: goto label_79b3d4;
        case 0x79b3d8u: goto label_79b3d8;
        case 0x79b3dcu: goto label_79b3dc;
        case 0x79b3e0u: goto label_79b3e0;
        case 0x79b3e4u: goto label_79b3e4;
        case 0x79b3e8u: goto label_79b3e8;
        case 0x79b3ecu: goto label_79b3ec;
        case 0x79b3f0u: goto label_79b3f0;
        case 0x79b3f4u: goto label_79b3f4;
        case 0x79b3f8u: goto label_79b3f8;
        case 0x79b3fcu: goto label_79b3fc;
        case 0x79b400u: goto label_79b400;
        case 0x79b404u: goto label_79b404;
        case 0x79b408u: goto label_79b408;
        case 0x79b40cu: goto label_79b40c;
        case 0x79b410u: goto label_79b410;
        case 0x79b414u: goto label_79b414;
        case 0x79b418u: goto label_79b418;
        case 0x79b41cu: goto label_79b41c;
        case 0x79b420u: goto label_79b420;
        case 0x79b424u: goto label_79b424;
        case 0x79b428u: goto label_79b428;
        case 0x79b42cu: goto label_79b42c;
        case 0x79b430u: goto label_79b430;
        case 0x79b434u: goto label_79b434;
        case 0x79b438u: goto label_79b438;
        case 0x79b43cu: goto label_79b43c;
        case 0x79b440u: goto label_79b440;
        case 0x79b444u: goto label_79b444;
        case 0x79b448u: goto label_79b448;
        case 0x79b44cu: goto label_79b44c;
        case 0x79b450u: goto label_79b450;
        case 0x79b454u: goto label_79b454;
        case 0x79b458u: goto label_79b458;
        case 0x79b45cu: goto label_79b45c;
        case 0x79b460u: goto label_79b460;
        case 0x79b464u: goto label_79b464;
        default: break;
    }

    ctx->pc = 0x79b3b8u;

label_79b3b8:
    // 0x79b3b8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b3bc:
    // 0x79b3bc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79b3c0:
    // 0x79b3c0: 0x8ce5b594  lw          $a1, -0x4A6C($a3)
    ctx->pc = 0x79b3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948244)));
label_79b3c4:
    // 0x79b3c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b3c8:
    // 0x79b3c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b3cc:
    // 0x79b3cc: 0x24e3b594  addiu       $v1, $a3, -0x4A6C
    ctx->pc = 0x79b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948244));
label_79b3d0:
    // 0x79b3d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79b3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79b3d4:
    // 0x79b3d4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79b3d8:
    if (ctx->pc == 0x79B3D8u) {
        ctx->pc = 0x79B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D4u;
        // 0x79b3d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3DCu;
        goto label_79b3dc;
    }
    ctx->pc = 0x79B3D4u;
    {
        const bool branch_taken_0x79b3d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D4u;
        // 0x79b3d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d4) {
            ctx->pc = 0x79B41Cu;
            goto label_79b41c;
        }
    }
    ctx->pc = 0x79B3DCu;
label_79b3dc:
    // 0x79b3dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79b3e0:
    // 0x79b3e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79b3e4:
    if (ctx->pc == 0x79B3E4u) {
        ctx->pc = 0x79B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3E0u;
        // 0x79b3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3E8u;
        goto label_79b3e8;
    }
    ctx->pc = 0x79B3E0u;
    {
        const bool branch_taken_0x79b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3E0u;
        // 0x79b3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3e0) {
            ctx->pc = 0x79B41Cu;
            goto label_79b41c;
        }
    }
    ctx->pc = 0x79B3E8u;
label_79b3e8:
    // 0x79b3e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b3ec:
    // 0x79b3ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79b3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79b3f0:
    // 0x79b3f0: 0x24e4b594  addiu       $a0, $a3, -0x4A6C
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948244));
label_79b3f4:
    // 0x79b3f4: 0x0  nop
    ctx->pc = 0x79b3f4u;
    // NOP
label_79b3f8:
    // 0x79b3f8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79b3f8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79b3fc:
    // 0x79b3fc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b400:
    // 0x79b400: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79b400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79b404:
    // 0x79b404: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79b404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79b408:
    // 0x79b408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79b40c:
    // 0x79b40c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79b410:
    // 0x79b410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b414:
    // 0x79b414: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79b418:
    if (ctx->pc == 0x79B418u) {
        ctx->pc = 0x79B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B414u;
        // 0x79b418: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B41Cu;
        goto label_79b41c;
    }
    ctx->pc = 0x79B414u;
    {
        const bool branch_taken_0x79b414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b414) {
            ctx->pc = 0x79B418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B414u;
            // 0x79b418: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b3f8;
        }
    }
    ctx->pc = 0x79B41Cu;
label_79b41c:
    // 0x79b41c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79b41cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79b420:
    // 0x79b420: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79b420u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79b424:
    // 0x79b424: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79b428:
    if (ctx->pc == 0x79B428u) {
        ctx->pc = 0x79B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B424u;
        // 0x79b428: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B42Cu;
        goto label_79b42c;
    }
    ctx->pc = 0x79B424u;
    {
        const bool branch_taken_0x79b424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B424u;
        // 0x79b428: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b424) {
            ctx->pc = 0x79B454u;
            goto label_79b454;
        }
    }
    ctx->pc = 0x79B42Cu;
label_79b42c:
    // 0x79b42c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79b430:
    // 0x79b430: 0x2442b594  addiu       $v0, $v0, -0x4A6C
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948244));
label_79b434:
    // 0x79b434: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79b434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b438:
    // 0x79b438: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b43c:
    // 0x79b43c: 0x0  nop
    ctx->pc = 0x79b43cu;
    // NOP
label_79b440:
    // 0x79b440: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79b444:
    // 0x79b444: 0x40f809  jalr        $v0
label_79b448:
    if (ctx->pc == 0x79B448u) {
        ctx->pc = 0x79B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B444u;
        // 0x79b448: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B44Cu;
        goto label_79b44c;
    }
    ctx->pc = 0x79B444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B44Cu);
        ctx->pc = 0x79B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B444u;
        // 0x79b448: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B444u, 0x79B44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B44Cu;
label_79b44c:
    // 0x79b44c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79b450:
    if (ctx->pc == 0x79B450u) {
        ctx->pc = 0x79B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B44Cu;
        // 0x79b450: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B454u;
        goto label_79b454;
    }
    ctx->pc = 0x79B44Cu;
    {
        const bool branch_taken_0x79b44c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b44c) {
            ctx->pc = 0x79B450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B44Cu;
            // 0x79b450: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b440;
        }
    }
    ctx->pc = 0x79B454u;
label_79b454:
    // 0x79b454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b458:
    // 0x79b458: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79b458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b45c:
    // 0x79b45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b460:
    // 0x79b460: 0x3e00008  jr          $ra
label_79b464:
    if (ctx->pc == 0x79B464u) {
        ctx->pc = 0x79B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B460u;
        // 0x79b464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B468u;
        goto label_fallthrough_0x79b460;
    }
    ctx->pc = 0x79B460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B460u;
        // 0x79b464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b460:
    ctx->pc = 0x79B468u;
}
} // namespace gh_r607
