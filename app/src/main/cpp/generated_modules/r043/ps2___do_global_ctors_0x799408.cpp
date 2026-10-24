#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r043_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r043
{
// Function: __do_global_ctors
// Address: 0x799408 - 0x7994b8
void ps2___do_global_ctors_0x799408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799408");
#endif

    switch (ctx->pc) {
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
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
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
        default: break;
    }

    ctx->pc = 0x799408u;

label_799408:
    // 0x799408: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79940c:
    // 0x79940c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799410:
    // 0x799410: 0x8ce59600  lw          $a1, -0x6A00($a3)
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940160)));
label_799414:
    // 0x799414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799418:
    // 0x799418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79941c:
    // 0x79941c: 0x24e39600  addiu       $v1, $a3, -0x6A00
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940160));
label_799420:
    // 0x799420: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799424:
    // 0x799424: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799428:
    if (ctx->pc == 0x799428u) {
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79942Cu;
        goto label_79942c;
    }
    ctx->pc = 0x799424u;
    {
        const bool branch_taken_0x799424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799424) {
            ctx->pc = 0x79946Cu;
            goto label_79946c;
        }
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799430:
    // 0x799430: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799434:
    if (ctx->pc == 0x799434u) {
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799438u;
        goto label_799438;
    }
    ctx->pc = 0x799430u;
    {
        const bool branch_taken_0x799430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799430) {
            ctx->pc = 0x79946Cu;
            goto label_79946c;
        }
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79943c:
    // 0x79943c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799440:
    // 0x799440: 0x24e49600  addiu       $a0, $a3, -0x6A00
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940160));
label_799444:
    // 0x799444: 0x0  nop
    ctx->pc = 0x799444u;
    // NOP
label_799448:
    // 0x799448: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799448u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79944c:
    // 0x79944c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799450:
    // 0x799450: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799454:
    // 0x799454: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799458:
    // 0x799458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79945c:
    // 0x79945c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799460:
    // 0x799460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799464:
    // 0x799464: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799468:
    if (ctx->pc == 0x799468u) {
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79946Cu;
        goto label_79946c;
    }
    ctx->pc = 0x799464u;
    {
        const bool branch_taken_0x799464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799464) {
            ctx->pc = 0x799468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799464u;
            // 0x799468: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799448;
        }
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799470:
    // 0x799470: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799470u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799474:
    // 0x799474: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799478:
    if (ctx->pc == 0x799478u) {
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79947Cu;
        goto label_79947c;
    }
    ctx->pc = 0x799474u;
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799474) {
            ctx->pc = 0x7994A4u;
            goto label_7994a4;
        }
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799480:
    // 0x799480: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
label_799484:
    // 0x799484: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799488:
    // 0x799488: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79948c:
    // 0x79948c: 0x0  nop
    ctx->pc = 0x79948cu;
    // NOP
label_799490:
    // 0x799490: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799494:
    // 0x799494: 0x40f809  jalr        $v0
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79949Cu);
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7994a0:
    if (ctx->pc == 0x7994A0u) {
        ctx->pc = 0x7994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79949Cu;
        // 0x7994a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A4u;
        goto label_7994a4;
    }
    ctx->pc = 0x79949Cu;
    {
        const bool branch_taken_0x79949c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79949c) {
            ctx->pc = 0x7994A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79949Cu;
            // 0x7994a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799490;
        }
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7994a8:
    // 0x7994a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7994ac:
    // 0x7994ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7994b0:
    // 0x7994b0: 0x3e00008  jr          $ra
label_7994b4:
    if (ctx->pc == 0x7994B4u) {
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B8u;
        goto label_fallthrough_0x7994b0;
    }
    ctx->pc = 0x7994B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7994b0:
    ctx->pc = 0x7994B8u;
}
} // namespace gh_r043
