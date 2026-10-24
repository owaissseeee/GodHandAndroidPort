#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0017F5F0
// Address: 0x17f5f0 - 0x17f6b0
void func_0017F5F0_0x17f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017F5F0_0x17f5f0");
#endif

    switch (ctx->pc) {
        case 0x17f5f0u: goto label_17f5f0;
        case 0x17f5f4u: goto label_17f5f4;
        case 0x17f5f8u: goto label_17f5f8;
        case 0x17f5fcu: goto label_17f5fc;
        case 0x17f600u: goto label_17f600;
        case 0x17f604u: goto label_17f604;
        case 0x17f608u: goto label_17f608;
        case 0x17f60cu: goto label_17f60c;
        case 0x17f610u: goto label_17f610;
        case 0x17f614u: goto label_17f614;
        case 0x17f618u: goto label_17f618;
        case 0x17f61cu: goto label_17f61c;
        case 0x17f620u: goto label_17f620;
        case 0x17f624u: goto label_17f624;
        case 0x17f628u: goto label_17f628;
        case 0x17f62cu: goto label_17f62c;
        case 0x17f630u: goto label_17f630;
        case 0x17f634u: goto label_17f634;
        case 0x17f638u: goto label_17f638;
        case 0x17f63cu: goto label_17f63c;
        case 0x17f640u: goto label_17f640;
        case 0x17f644u: goto label_17f644;
        case 0x17f648u: goto label_17f648;
        case 0x17f64cu: goto label_17f64c;
        case 0x17f650u: goto label_17f650;
        case 0x17f654u: goto label_17f654;
        case 0x17f658u: goto label_17f658;
        case 0x17f65cu: goto label_17f65c;
        case 0x17f660u: goto label_17f660;
        case 0x17f664u: goto label_17f664;
        case 0x17f668u: goto label_17f668;
        case 0x17f66cu: goto label_17f66c;
        case 0x17f670u: goto label_17f670;
        case 0x17f674u: goto label_17f674;
        case 0x17f678u: goto label_17f678;
        case 0x17f67cu: goto label_17f67c;
        case 0x17f680u: goto label_17f680;
        case 0x17f684u: goto label_17f684;
        case 0x17f688u: goto label_17f688;
        case 0x17f68cu: goto label_17f68c;
        case 0x17f690u: goto label_17f690;
        case 0x17f694u: goto label_17f694;
        case 0x17f698u: goto label_17f698;
        case 0x17f69cu: goto label_17f69c;
        case 0x17f6a0u: goto label_17f6a0;
        case 0x17f6a4u: goto label_17f6a4;
        case 0x17f6a8u: goto label_17f6a8;
        case 0x17f6acu: goto label_17f6ac;
        default: break;
    }

    ctx->pc = 0x17f5f0u;

label_17f5f0:
    // 0x17f5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17f5f4:
    // 0x17f5f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17f5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17f5f8:
    // 0x17f5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17f5fc:
    // 0x17f5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17f600:
    // 0x17f600: 0xc06ddac  jal         func_1B76B0
label_17f604:
    if (ctx->pc == 0x17F604u) {
        ctx->pc = 0x17F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F600u;
        // 0x17f604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F608u;
        goto label_17f608;
    }
    ctx->pc = 0x17F600u;
    SET_GPR_U32(ctx, 31, 0x17F608u);
    ctx->pc = 0x17F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F600u;
    // 0x17f604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17F600u, 0x17F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F608u;
label_17f608:
    // 0x17f608: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_17f60c:
    if (ctx->pc == 0x17F60Cu) {
        ctx->pc = 0x17F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F608u;
        // 0x17f60c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F610u;
        goto label_17f610;
    }
    ctx->pc = 0x17F608u;
    {
        const bool branch_taken_0x17f608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F608u;
        // 0x17f60c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f608) {
            ctx->pc = 0x17F698u;
            goto label_17f698;
        }
    }
    ctx->pc = 0x17F610u;
label_17f610:
    // 0x17f610: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17f610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17f614:
    // 0x17f614: 0x2446dab0  addiu       $a2, $v0, -0x2550
    ctx->pc = 0x17f614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
label_17f618:
    // 0x17f618: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17f618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17f61c:
    // 0x17f61c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17f620:
    // 0x17f620: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17f620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17f624:
    // 0x17f624: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17f624u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17f628:
    // 0x17f628: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17f62c:
    if (ctx->pc == 0x17F62Cu) {
        ctx->pc = 0x17F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F628u;
        // 0x17f62c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F630u;
        goto label_17f630;
    }
    ctx->pc = 0x17F628u;
    {
        const bool branch_taken_0x17f628 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F628u;
        // 0x17f62c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f628) {
            ctx->pc = 0x17F654u;
            goto label_17f654;
        }
    }
    ctx->pc = 0x17F630u;
label_17f630:
    // 0x17f630: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17f630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17f634:
    // 0x17f634: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17f634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17f638:
    // 0x17f638: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17f63c:
    // 0x17f63c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17f640:
    // 0x17f640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17f644:
    // 0x17f644: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17f644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17f648:
    // 0x17f648: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17f648u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17f64c:
    // 0x17f64c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17f650:
    if (ctx->pc == 0x17F650u) {
        ctx->pc = 0x17F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F64Cu;
        // 0x17f650: 0x2503dab0  addiu       $v1, $t0, -0x2550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F654u;
        goto label_17f654;
    }
    ctx->pc = 0x17F64Cu;
    {
        const bool branch_taken_0x17f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F64Cu;
        // 0x17f650: 0x2503dab0  addiu       $v1, $t0, -0x2550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f64c) {
            ctx->pc = 0x17F660u;
            goto label_17f660;
        }
    }
    ctx->pc = 0x17F654u;
label_17f654:
    // 0x17f654: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17f658:
    // 0x17f658: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17f658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17f65c:
    // 0x17f65c: 0x2503dab0  addiu       $v1, $t0, -0x2550
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957744));
label_17f660:
    // 0x17f660: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17f664:
    // 0x17f664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17f668:
    // 0x17f668: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17f66c:
    if (ctx->pc == 0x17F66Cu) {
        ctx->pc = 0x17F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F668u;
        // 0x17f66c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F670u;
        goto label_17f670;
    }
    ctx->pc = 0x17F668u;
    {
        const bool branch_taken_0x17f668 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F668u;
        // 0x17f66c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f668) {
            ctx->pc = 0x17F684u;
            goto label_17f684;
        }
    }
    ctx->pc = 0x17F670u;
label_17f670:
    // 0x17f670: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17f674:
    // 0x17f674: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17f678:
    // 0x17f678: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17f678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17f67c:
    // 0x17f67c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17f680:
    if (ctx->pc == 0x17F680u) {
        ctx->pc = 0x17F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F67Cu;
        // 0x17f680: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F684u;
        goto label_17f684;
    }
    ctx->pc = 0x17F67Cu;
    {
        const bool branch_taken_0x17f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F67Cu;
        // 0x17f680: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f67c) {
            ctx->pc = 0x17F688u;
            goto label_17f688;
        }
    }
    ctx->pc = 0x17F684u;
label_17f684:
    // 0x17f684: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17f684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17f688:
    // 0x17f688: 0xc0f809  jalr        $a2
label_17f68c:
    if (ctx->pc == 0x17F68Cu) {
        ctx->pc = 0x17F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F688u;
        // 0x17f68c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F690u;
        goto label_17f690;
    }
    ctx->pc = 0x17F688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17F690u);
        ctx->pc = 0x17F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F688u;
        // 0x17f68c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F688u, 0x17F690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F690u;
label_17f690:
    // 0x17f690: 0xc06ddb6  jal         func_1B76D8
label_17f694:
    if (ctx->pc == 0x17F694u) {
        ctx->pc = 0x17F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F690u;
        // 0x17f694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F698u;
        goto label_17f698;
    }
    ctx->pc = 0x17F690u;
    SET_GPR_U32(ctx, 31, 0x17F698u);
    ctx->pc = 0x17F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F690u;
    // 0x17f694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17F690u, 0x17F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F698u;
label_17f698:
    // 0x17f698: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17f698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f69c:
    // 0x17f69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f6a0:
    // 0x17f6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f6a4:
    // 0x17f6a4: 0x3e00008  jr          $ra
label_17f6a8:
    if (ctx->pc == 0x17F6A8u) {
        ctx->pc = 0x17F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6A4u;
        // 0x17f6a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F6ACu;
        goto label_17f6ac;
    }
    ctx->pc = 0x17F6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6A4u;
        // 0x17f6a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6ACu;
label_17f6ac:
    // 0x17f6ac: 0x0  nop
    ctx->pc = 0x17f6acu;
    // NOP
    ctx->pc = 0x17f6b0u;
}
