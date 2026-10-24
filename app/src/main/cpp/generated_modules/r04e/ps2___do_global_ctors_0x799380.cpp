#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04e_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04e
{
// Function: __do_global_ctors
// Address: 0x799380 - 0x799430
void ps2___do_global_ctors_0x799380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799380");
#endif

    switch (ctx->pc) {
        case 0x799380u: goto label_799380;
        case 0x799384u: goto label_799384;
        case 0x799388u: goto label_799388;
        case 0x79938cu: goto label_79938c;
        case 0x799390u: goto label_799390;
        case 0x799394u: goto label_799394;
        case 0x799398u: goto label_799398;
        case 0x79939cu: goto label_79939c;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993acu: goto label_7993ac;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993f8u: goto label_7993f8;
        case 0x7993fcu: goto label_7993fc;
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        case 0x799408u: goto label_799408;
        case 0x79940cu: goto label_79940c;
        case 0x799410u: goto label_799410;
        case 0x799414u: goto label_799414;
        case 0x799418u: goto label_799418;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        default: break;
    }

    ctx->pc = 0x799380u;

label_799380:
    // 0x799380: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799384:
    // 0x799384: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799388:
    // 0x799388: 0x8ce59580  lw          $a1, -0x6A80($a3)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940032)));
label_79938c:
    // 0x79938c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799390:
    // 0x799390: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799394:
    // 0x799394: 0x24e39580  addiu       $v1, $a3, -0x6A80
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940032));
label_799398:
    // 0x799398: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79939c:
    // 0x79939c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7993a0:
    if (ctx->pc == 0x7993A0u) {
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A4u;
        goto label_7993a4;
    }
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993E4u;
            goto label_7993e4;
        }
    }
    ctx->pc = 0x7993A4u;
label_7993a4:
    // 0x7993a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7993a8:
    // 0x7993a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7993ac:
    if (ctx->pc == 0x7993ACu) {
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B0u;
        goto label_7993b0;
    }
    ctx->pc = 0x7993A8u;
    {
        const bool branch_taken_0x7993a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a8) {
            ctx->pc = 0x7993E4u;
            goto label_7993e4;
        }
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7993b4:
    // 0x7993b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7993b8:
    // 0x7993b8: 0x24e49580  addiu       $a0, $a3, -0x6A80
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940032));
label_7993bc:
    // 0x7993bc: 0x0  nop
    ctx->pc = 0x7993bcu;
    // NOP
label_7993c0:
    // 0x7993c0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7993c0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7993c4:
    // 0x7993c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7993c8:
    // 0x7993c8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7993cc:
    // 0x7993cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7993ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_7993d0:
    // 0x7993d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_7993d4:
    // 0x7993d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7993d8:
    // 0x7993d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7993dc:
    // 0x7993dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7993e0:
    if (ctx->pc == 0x7993E0u) {
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E4u;
        goto label_7993e4;
    }
    ctx->pc = 0x7993DCu;
    {
        const bool branch_taken_0x7993dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993dc) {
            ctx->pc = 0x7993E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993DCu;
            // 0x7993e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993c0;
        }
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_7993e8:
    // 0x7993e8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x7993e8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_7993ec:
    // 0x7993ec: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7993f0:
    if (ctx->pc == 0x7993F0u) {
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F4u;
        goto label_7993f4;
    }
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x79941Cu;
            goto label_79941c;
        }
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7993f8:
    // 0x7993f8: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
label_7993fc:
    // 0x7993fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799400:
    // 0x799400: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799404:
    // 0x799404: 0x0  nop
    ctx->pc = 0x799404u;
    // NOP
label_799408:
    // 0x799408: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79940c:
    // 0x79940c: 0x40f809  jalr        $v0
label_799410:
    if (ctx->pc == 0x799410u) {
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799414u;
        goto label_799414;
    }
    ctx->pc = 0x79940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799414u);
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799418:
    if (ctx->pc == 0x799418u) {
        ctx->pc = 0x799418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799414u;
        // 0x799418: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79941Cu;
        goto label_79941c;
    }
    ctx->pc = 0x799414u;
    {
        const bool branch_taken_0x799414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799414) {
            ctx->pc = 0x799418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799414u;
            // 0x799418: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799408;
        }
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799420:
    // 0x799420: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799424:
    // 0x799424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799428:
    // 0x799428: 0x3e00008  jr          $ra
label_79942c:
    if (ctx->pc == 0x79942Cu) {
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799430u;
        goto label_fallthrough_0x799428;
    }
    ctx->pc = 0x799428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799428:
    ctx->pc = 0x799430u;
}
} // namespace gh_r04e
