#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r004_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r004
{
// Function: __do_global_ctors
// Address: 0x799478 - 0x799528
void ps2___do_global_ctors_0x799478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799478");
#endif

    switch (ctx->pc) {
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
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
        default: break;
    }

    ctx->pc = 0x799478u;

label_799478:
    // 0x799478: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79947c:
    // 0x79947c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799480:
    // 0x799480: 0x8ce59700  lw          $a1, -0x6900($a3)
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940416)));
label_799484:
    // 0x799484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799488:
    // 0x799488: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79948c:
    // 0x79948c: 0x24e39700  addiu       $v1, $a3, -0x6900
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940416));
label_799490:
    // 0x799490: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799494:
    // 0x799494: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const bool branch_taken_0x799494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799494) {
            ctx->pc = 0x7994DCu;
            goto label_7994dc;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7994a0:
    // 0x7994a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    {
        const bool branch_taken_0x7994a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a0) {
            ctx->pc = 0x7994DCu;
            goto label_7994dc;
        }
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994ac:
    // 0x7994ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7994b0:
    // 0x7994b0: 0x24e49700  addiu       $a0, $a3, -0x6900
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940416));
label_7994b4:
    // 0x7994b4: 0x0  nop
    ctx->pc = 0x7994b4u;
    // NOP
label_7994b8:
    // 0x7994b8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7994b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7994bc:
    // 0x7994bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7994c0:
    // 0x7994c0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7994c4:
    // 0x7994c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7994c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_7994c8:
    // 0x7994c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_7994cc:
    // 0x7994cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7994d0:
    // 0x7994d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7994d4:
    // 0x7994d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7994d8:
    if (ctx->pc == 0x7994D8u) {
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994DCu;
        goto label_7994dc;
    }
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x7994D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994D4u;
            // 0x7994d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994b8;
        }
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_7994e0:
    // 0x7994e0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x7994e0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_7994e4:
    // 0x7994e4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7994e8:
    if (ctx->pc == 0x7994E8u) {
        ctx->pc = 0x7994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E4u;
        // 0x7994e8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ECu;
        goto label_7994ec;
    }
    ctx->pc = 0x7994E4u;
    {
        const bool branch_taken_0x7994e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E4u;
        // 0x7994e8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994e4) {
            ctx->pc = 0x799514u;
            goto label_799514;
        }
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7994f0:
    // 0x7994f0: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
label_7994f4:
    // 0x7994f4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7994f8:
    // 0x7994f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7994fc:
    // 0x7994fc: 0x0  nop
    ctx->pc = 0x7994fcu;
    // NOP
label_799500:
    // 0x799500: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799504:
    // 0x799504: 0x40f809  jalr        $v0
label_799508:
    if (ctx->pc == 0x799508u) {
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79950Cu;
        goto label_79950c;
    }
    ctx->pc = 0x799504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79950Cu);
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799510:
    if (ctx->pc == 0x799510u) {
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799514u;
        goto label_799514;
    }
    ctx->pc = 0x79950Cu;
    {
        const bool branch_taken_0x79950c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79950c) {
            ctx->pc = 0x799510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79950Cu;
            // 0x799510: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799500;
        }
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799518:
    // 0x799518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79951c:
    // 0x79951c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79951cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799520:
    // 0x799520: 0x3e00008  jr          $ra
label_799524:
    if (ctx->pc == 0x799524u) {
        ctx->pc = 0x799524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799520u;
        // 0x799524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799528u;
        goto label_fallthrough_0x799520;
    }
    ctx->pc = 0x799520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799520u;
        // 0x799524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799520:
    ctx->pc = 0x799528u;
}
} // namespace gh_r004
