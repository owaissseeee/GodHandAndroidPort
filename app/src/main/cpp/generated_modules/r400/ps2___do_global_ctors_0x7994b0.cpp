#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: __do_global_ctors
// Address: 0x7994b0 - 0x799560
void ps2___do_global_ctors_0x7994b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7994b0");
#endif

    switch (ctx->pc) {
        case 0x7994b0u: goto label_7994b0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f0u: goto label_7994f0;
        case 0x7994f4u: goto label_7994f4;
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        default: break;
    }

    ctx->pc = 0x7994b0u;

label_7994b0:
    // 0x7994b0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7994b4:
    // 0x7994b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7994b8:
    // 0x7994b8: 0x8ce59780  lw          $a1, -0x6880($a3)
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940544)));
label_7994bc:
    // 0x7994bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7994c0:
    // 0x7994c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7994c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7994c4:
    // 0x7994c4: 0x24e39780  addiu       $v1, $a3, -0x6880
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940544));
label_7994c8:
    // 0x7994c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7994c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7994cc:
    // 0x7994cc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    {
        const bool branch_taken_0x7994cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994cc) {
            ctx->pc = 0x799514u;
            goto label_799514;
        }
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7994d8:
    // 0x7994d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7994dc:
    if (ctx->pc == 0x7994DCu) {
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E0u;
        goto label_7994e0;
    }
    ctx->pc = 0x7994D8u;
    {
        const bool branch_taken_0x7994d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d8) {
            ctx->pc = 0x799514u;
            goto label_799514;
        }
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994e4:
    // 0x7994e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7994e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7994e8:
    // 0x7994e8: 0x24e49780  addiu       $a0, $a3, -0x6880
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940544));
label_7994ec:
    // 0x7994ec: 0x0  nop
    ctx->pc = 0x7994ecu;
    // NOP
label_7994f0:
    // 0x7994f0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7994f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7994f4:
    // 0x7994f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7994f8:
    // 0x7994f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7994fc:
    // 0x7994fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7994fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799500:
    // 0x799500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799504:
    // 0x799504: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799508:
    // 0x799508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79950c:
    // 0x79950c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799510:
    if (ctx->pc == 0x799510u) {
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799514u;
        goto label_799514;
    }
    ctx->pc = 0x79950Cu;
    {
        const bool branch_taken_0x79950c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79950c) {
            ctx->pc = 0x799510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79950Cu;
            // 0x799510: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f0;
        }
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799518:
    // 0x799518: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799518u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79951c:
    // 0x79951c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799520:
    if (ctx->pc == 0x799520u) {
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799524u;
        goto label_799524;
    }
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x79954Cu;
            goto label_79954c;
        }
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799528:
    // 0x799528: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
label_79952c:
    // 0x79952c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799530:
    // 0x799530: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799534:
    // 0x799534: 0x0  nop
    ctx->pc = 0x799534u;
    // NOP
label_799538:
    // 0x799538: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79953c:
    // 0x79953c: 0x40f809  jalr        $v0
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799544u);
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799548:
    if (ctx->pc == 0x799548u) {
        ctx->pc = 0x799548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799544u;
        // 0x799548: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79954Cu;
        goto label_79954c;
    }
    ctx->pc = 0x799544u;
    {
        const bool branch_taken_0x799544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799544) {
            ctx->pc = 0x799548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799544u;
            // 0x799548: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799538;
        }
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799550:
    // 0x799550: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799554:
    // 0x799554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799558:
    // 0x799558: 0x3e00008  jr          $ra
label_79955c:
    if (ctx->pc == 0x79955Cu) {
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799560u;
        goto label_fallthrough_0x799558;
    }
    ctx->pc = 0x799558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799558:
    ctx->pc = 0x799560u;
}
} // namespace gh_r400
