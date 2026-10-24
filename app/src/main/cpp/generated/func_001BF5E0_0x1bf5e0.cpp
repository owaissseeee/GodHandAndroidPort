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

// Function: func_001BF5E0
// Address: 0x1bf5e0 - 0x1bf7d8
void func_001BF5E0_0x1bf5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF5E0_0x1bf5e0");
#endif

    switch (ctx->pc) {
        case 0x1bf5e0u: goto label_1bf5e0;
        case 0x1bf5e4u: goto label_1bf5e4;
        case 0x1bf5e8u: goto label_1bf5e8;
        case 0x1bf5ecu: goto label_1bf5ec;
        case 0x1bf5f0u: goto label_1bf5f0;
        case 0x1bf5f4u: goto label_1bf5f4;
        case 0x1bf5f8u: goto label_1bf5f8;
        case 0x1bf5fcu: goto label_1bf5fc;
        case 0x1bf600u: goto label_1bf600;
        case 0x1bf604u: goto label_1bf604;
        case 0x1bf608u: goto label_1bf608;
        case 0x1bf60cu: goto label_1bf60c;
        case 0x1bf610u: goto label_1bf610;
        case 0x1bf614u: goto label_1bf614;
        case 0x1bf618u: goto label_1bf618;
        case 0x1bf61cu: goto label_1bf61c;
        case 0x1bf620u: goto label_1bf620;
        case 0x1bf624u: goto label_1bf624;
        case 0x1bf628u: goto label_1bf628;
        case 0x1bf62cu: goto label_1bf62c;
        case 0x1bf630u: goto label_1bf630;
        case 0x1bf634u: goto label_1bf634;
        case 0x1bf638u: goto label_1bf638;
        case 0x1bf63cu: goto label_1bf63c;
        case 0x1bf640u: goto label_1bf640;
        case 0x1bf644u: goto label_1bf644;
        case 0x1bf648u: goto label_1bf648;
        case 0x1bf64cu: goto label_1bf64c;
        case 0x1bf650u: goto label_1bf650;
        case 0x1bf654u: goto label_1bf654;
        case 0x1bf658u: goto label_1bf658;
        case 0x1bf65cu: goto label_1bf65c;
        case 0x1bf660u: goto label_1bf660;
        case 0x1bf664u: goto label_1bf664;
        case 0x1bf668u: goto label_1bf668;
        case 0x1bf66cu: goto label_1bf66c;
        case 0x1bf670u: goto label_1bf670;
        case 0x1bf674u: goto label_1bf674;
        case 0x1bf678u: goto label_1bf678;
        case 0x1bf67cu: goto label_1bf67c;
        case 0x1bf680u: goto label_1bf680;
        case 0x1bf684u: goto label_1bf684;
        case 0x1bf688u: goto label_1bf688;
        case 0x1bf68cu: goto label_1bf68c;
        case 0x1bf690u: goto label_1bf690;
        case 0x1bf694u: goto label_1bf694;
        case 0x1bf698u: goto label_1bf698;
        case 0x1bf69cu: goto label_1bf69c;
        case 0x1bf6a0u: goto label_1bf6a0;
        case 0x1bf6a4u: goto label_1bf6a4;
        case 0x1bf6a8u: goto label_1bf6a8;
        case 0x1bf6acu: goto label_1bf6ac;
        case 0x1bf6b0u: goto label_1bf6b0;
        case 0x1bf6b4u: goto label_1bf6b4;
        case 0x1bf6b8u: goto label_1bf6b8;
        case 0x1bf6bcu: goto label_1bf6bc;
        case 0x1bf6c0u: goto label_1bf6c0;
        case 0x1bf6c4u: goto label_1bf6c4;
        case 0x1bf6c8u: goto label_1bf6c8;
        case 0x1bf6ccu: goto label_1bf6cc;
        case 0x1bf6d0u: goto label_1bf6d0;
        case 0x1bf6d4u: goto label_1bf6d4;
        case 0x1bf6d8u: goto label_1bf6d8;
        case 0x1bf6dcu: goto label_1bf6dc;
        case 0x1bf6e0u: goto label_1bf6e0;
        case 0x1bf6e4u: goto label_1bf6e4;
        case 0x1bf6e8u: goto label_1bf6e8;
        case 0x1bf6ecu: goto label_1bf6ec;
        case 0x1bf6f0u: goto label_1bf6f0;
        case 0x1bf6f4u: goto label_1bf6f4;
        case 0x1bf6f8u: goto label_1bf6f8;
        case 0x1bf6fcu: goto label_1bf6fc;
        case 0x1bf700u: goto label_1bf700;
        case 0x1bf704u: goto label_1bf704;
        case 0x1bf708u: goto label_1bf708;
        case 0x1bf70cu: goto label_1bf70c;
        case 0x1bf710u: goto label_1bf710;
        case 0x1bf714u: goto label_1bf714;
        case 0x1bf718u: goto label_1bf718;
        case 0x1bf71cu: goto label_1bf71c;
        case 0x1bf720u: goto label_1bf720;
        case 0x1bf724u: goto label_1bf724;
        case 0x1bf728u: goto label_1bf728;
        case 0x1bf72cu: goto label_1bf72c;
        case 0x1bf730u: goto label_1bf730;
        case 0x1bf734u: goto label_1bf734;
        case 0x1bf738u: goto label_1bf738;
        case 0x1bf73cu: goto label_1bf73c;
        case 0x1bf740u: goto label_1bf740;
        case 0x1bf744u: goto label_1bf744;
        case 0x1bf748u: goto label_1bf748;
        case 0x1bf74cu: goto label_1bf74c;
        case 0x1bf750u: goto label_1bf750;
        case 0x1bf754u: goto label_1bf754;
        case 0x1bf758u: goto label_1bf758;
        case 0x1bf75cu: goto label_1bf75c;
        case 0x1bf760u: goto label_1bf760;
        case 0x1bf764u: goto label_1bf764;
        case 0x1bf768u: goto label_1bf768;
        case 0x1bf76cu: goto label_1bf76c;
        case 0x1bf770u: goto label_1bf770;
        case 0x1bf774u: goto label_1bf774;
        case 0x1bf778u: goto label_1bf778;
        case 0x1bf77cu: goto label_1bf77c;
        case 0x1bf780u: goto label_1bf780;
        case 0x1bf784u: goto label_1bf784;
        case 0x1bf788u: goto label_1bf788;
        case 0x1bf78cu: goto label_1bf78c;
        case 0x1bf790u: goto label_1bf790;
        case 0x1bf794u: goto label_1bf794;
        case 0x1bf798u: goto label_1bf798;
        case 0x1bf79cu: goto label_1bf79c;
        case 0x1bf7a0u: goto label_1bf7a0;
        case 0x1bf7a4u: goto label_1bf7a4;
        case 0x1bf7a8u: goto label_1bf7a8;
        case 0x1bf7acu: goto label_1bf7ac;
        case 0x1bf7b0u: goto label_1bf7b0;
        case 0x1bf7b4u: goto label_1bf7b4;
        case 0x1bf7b8u: goto label_1bf7b8;
        case 0x1bf7bcu: goto label_1bf7bc;
        case 0x1bf7c0u: goto label_1bf7c0;
        case 0x1bf7c4u: goto label_1bf7c4;
        case 0x1bf7c8u: goto label_1bf7c8;
        case 0x1bf7ccu: goto label_1bf7cc;
        case 0x1bf7d0u: goto label_1bf7d0;
        case 0x1bf7d4u: goto label_1bf7d4;
        default: break;
    }

    ctx->pc = 0x1bf5e0u;

label_1bf5e0:
    // 0x1bf5e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bf5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bf5e4:
    // 0x1bf5e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bf5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1bf5e8:
    // 0x1bf5e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bf5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1bf5ec:
    // 0x1bf5ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bf5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5f0:
    // 0x1bf5f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bf5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1bf5f4:
    // 0x1bf5f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bf5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bf5f8:
    // 0x1bf5f8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1bf5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1bf5fc:
    // 0x1bf5fc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1bf5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1bf600:
    // 0x1bf600: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1bf600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1bf604:
    // 0x1bf604: 0x40f809  jalr        $v0
label_1bf608:
    if (ctx->pc == 0x1BF608u) {
        ctx->pc = 0x1BF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF604u;
        // 0x1bf608: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF60Cu;
        goto label_1bf60c;
    }
    ctx->pc = 0x1BF604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF60Cu);
        ctx->pc = 0x1BF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF604u;
        // 0x1bf608: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF604u, 0x1BF60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF60Cu;
label_1bf60c:
    // 0x1bf60c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bf60cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf610:
    // 0x1bf610: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bf610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bf614:
    // 0x1bf614: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1bf614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf618:
    // 0x1bf618: 0x3c013dd6  lui         $at, 0x3DD6
    ctx->pc = 0x1bf618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15830 << 16));
label_1bf61c:
    // 0x1bf61c: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1bf61cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_1bf620:
    // 0x1bf620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf624:
    // 0x1bf624: 0x0  nop
    ctx->pc = 0x1bf624u;
    // NOP
label_1bf628:
    // 0x1bf628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bf628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bf62c:
    // 0x1bf62c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1bf62cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1bf630:
    // 0x1bf630: 0xc07df52  jal         func_1F7D48
label_1bf634:
    if (ctx->pc == 0x1BF634u) {
        ctx->pc = 0x1BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF630u;
        // 0x1bf634: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF638u;
        goto label_1bf638;
    }
    ctx->pc = 0x1BF630u;
    SET_GPR_U32(ctx, 31, 0x1BF638u);
    ctx->pc = 0x1BF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF630u;
    // 0x1bf634: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BF630u, 0x1BF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF638u;
label_1bf638:
    // 0x1bf638: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1bf63c:
    // 0x1bf63c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bf63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf640:
    // 0x1bf640: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bf640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bf644:
    // 0x1bf644: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1bf644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1bf648:
    // 0x1bf648: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1bf648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1bf64c:
    // 0x1bf64c: 0x40f809  jalr        $v0
label_1bf650:
    if (ctx->pc == 0x1BF650u) {
        ctx->pc = 0x1BF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF64Cu;
        // 0x1bf650: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF654u;
        goto label_1bf654;
    }
    ctx->pc = 0x1BF64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF654u);
        ctx->pc = 0x1BF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF64Cu;
        // 0x1bf650: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF64Cu, 0x1BF654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF654u;
label_1bf654:
    // 0x1bf654: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1bf654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_1bf658:
    // 0x1bf658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf65c:
    // 0x1bf65c: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
label_1bf660:
    if (ctx->pc == 0x1BF660u) {
        ctx->pc = 0x1BF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF65Cu;
        // 0x1bf660: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF664u;
        goto label_1bf664;
    }
    ctx->pc = 0x1BF65Cu;
    {
        const bool branch_taken_0x1bf65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF65Cu;
        // 0x1bf660: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf65c) {
            ctx->pc = 0x1BF7C0u;
            goto label_1bf7c0;
        }
    }
    ctx->pc = 0x1BF664u;
label_1bf664:
    // 0x1bf664: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf668:
    if (ctx->pc == 0x1BF668u) {
        ctx->pc = 0x1BF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF664u;
        // 0x1bf668: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF66Cu;
        goto label_1bf66c;
    }
    ctx->pc = 0x1BF664u;
    {
        const bool branch_taken_0x1bf664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf664) {
            ctx->pc = 0x1BF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF664u;
            // 0x1bf668: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF67Cu;
            goto label_1bf67c;
        }
    }
    ctx->pc = 0x1BF66Cu;
label_1bf66c:
    // 0x1bf66c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1bf670:
    if (ctx->pc == 0x1BF670u) {
        ctx->pc = 0x1BF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF66Cu;
        // 0x1bf670: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF674u;
        goto label_1bf674;
    }
    ctx->pc = 0x1BF66Cu;
    {
        const bool branch_taken_0x1bf66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF66Cu;
        // 0x1bf670: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf66c) {
            ctx->pc = 0x1BF68Cu;
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF674u;
label_1bf674:
    // 0x1bf674: 0x10000054  b           . + 4 + (0x54 << 2)
label_1bf678:
    if (ctx->pc == 0x1BF678u) {
        ctx->pc = 0x1BF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF674u;
        // 0x1bf678: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF67Cu;
        goto label_1bf67c;
    }
    ctx->pc = 0x1BF674u;
    {
        const bool branch_taken_0x1bf674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF674u;
        // 0x1bf678: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf674) {
            ctx->pc = 0x1BF7C8u;
            goto label_1bf7c8;
        }
    }
    ctx->pc = 0x1BF67Cu;
label_1bf67c:
    // 0x1bf67c: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_1bf680:
    if (ctx->pc == 0x1BF680u) {
        ctx->pc = 0x1BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF67Cu;
        // 0x1bf680: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF684u;
        goto label_1bf684;
    }
    ctx->pc = 0x1BF67Cu;
    {
        const bool branch_taken_0x1bf67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF67Cu;
        // 0x1bf680: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf67c) {
            ctx->pc = 0x1BF7A8u;
            goto label_1bf7a8;
        }
    }
    ctx->pc = 0x1BF684u;
label_1bf684:
    // 0x1bf684: 0x10000050  b           . + 4 + (0x50 << 2)
label_1bf688:
    if (ctx->pc == 0x1BF688u) {
        ctx->pc = 0x1BF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF684u;
        // 0x1bf688: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF68Cu;
        goto label_1bf68c;
    }
    ctx->pc = 0x1BF684u;
    {
        const bool branch_taken_0x1bf684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF684u;
        // 0x1bf688: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf684) {
            ctx->pc = 0x1BF7C8u;
            goto label_1bf7c8;
        }
    }
    ctx->pc = 0x1BF68Cu;
label_1bf68c:
    // 0x1bf68c: 0xc0b6dac  jal         func_2DB6B0
label_1bf690:
    if (ctx->pc == 0x1BF690u) {
        ctx->pc = 0x1BF694u;
        goto label_1bf694;
    }
    ctx->pc = 0x1BF68Cu;
    SET_GPR_U32(ctx, 31, 0x1BF694u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BF68Cu, 0x1BF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF694u;
label_1bf694:
    // 0x1bf694: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1bf698:
    // 0x1bf698: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bf69c:
    // 0x1bf69c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1bf69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bf6a0:
    // 0x1bf6a0: 0xa0f809  jalr        $a1
label_1bf6a4:
    if (ctx->pc == 0x1BF6A4u) {
        ctx->pc = 0x1BF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6A0u;
        // 0x1bf6a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6A8u;
        goto label_1bf6a8;
    }
    ctx->pc = 0x1BF6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1BF6A8u);
        ctx->pc = 0x1BF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6A0u;
        // 0x1bf6a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF6A0u, 0x1BF6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF6A8u;
label_1bf6a8:
    // 0x1bf6a8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1bf6ac:
    // 0x1bf6ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf6b0:
    // 0x1bf6b0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bf6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bf6b4:
    // 0x1bf6b4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bf6b8:
    // 0x1bf6b8: 0x40f809  jalr        $v0
label_1bf6bc:
    if (ctx->pc == 0x1BF6BCu) {
        ctx->pc = 0x1BF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6B8u;
        // 0x1bf6bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6C0u;
        goto label_1bf6c0;
    }
    ctx->pc = 0x1BF6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF6C0u);
        ctx->pc = 0x1BF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6B8u;
        // 0x1bf6bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF6B8u, 0x1BF6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF6C0u;
label_1bf6c0:
    // 0x1bf6c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1bf6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bf6c4:
    // 0x1bf6c4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1bf6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bf6c8:
    // 0x1bf6c8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1bf6c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf6cc:
    // 0x1bf6cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1bf6ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf6d0:
    // 0x1bf6d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1bf6d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1bf6d4:
    // 0x1bf6d4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bf6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bf6d8:
    // 0x1bf6d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1bf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bf6dc:
    // 0x1bf6dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bf6dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf6e0:
    // 0x1bf6e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bf6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1bf6e4:
    // 0x1bf6e4: 0xc07df8a  jal         func_1F7E28
label_1bf6e8:
    if (ctx->pc == 0x1BF6E8u) {
        ctx->pc = 0x1BF6ECu;
        goto label_1bf6ec;
    }
    ctx->pc = 0x1BF6E4u;
    SET_GPR_U32(ctx, 31, 0x1BF6ECu);
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1BF6E4u, 0x1BF6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6ECu;
label_1bf6ec:
    // 0x1bf6ec: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_1bf6f0:
    // 0x1bf6f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf6f4:
    // 0x1bf6f4: 0x0  nop
    ctx->pc = 0x1bf6f4u;
    // NOP
label_1bf6f8:
    // 0x1bf6f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf6fc:
    // 0x1bf6fc: 0x0  nop
    ctx->pc = 0x1bf6fcu;
    // NOP
label_1bf700:
    // 0x1bf700: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_1bf704:
    if (ctx->pc == 0x1BF704u) {
        ctx->pc = 0x1BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF700u;
        // 0x1bf704: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF708u;
        goto label_1bf708;
    }
    ctx->pc = 0x1BF700u;
    {
        const bool branch_taken_0x1bf700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF700u;
        // 0x1bf704: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf700) {
            ctx->pc = 0x1BF7C4u;
            goto label_1bf7c4;
        }
    }
    ctx->pc = 0x1BF708u;
label_1bf708:
    // 0x1bf708: 0xc0b6dac  jal         func_2DB6B0
label_1bf70c:
    if (ctx->pc == 0x1BF70Cu) {
        ctx->pc = 0x1BF710u;
        goto label_1bf710;
    }
    ctx->pc = 0x1BF708u;
    SET_GPR_U32(ctx, 31, 0x1BF710u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BF708u, 0x1BF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF710u;
label_1bf710:
    // 0x1bf710: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1bf710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1bf714:
    // 0x1bf714: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bf714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bf718:
    // 0x1bf718: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1bf718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bf71c:
    // 0x1bf71c: 0xa0f809  jalr        $a1
label_1bf720:
    if (ctx->pc == 0x1BF720u) {
        ctx->pc = 0x1BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF71Cu;
        // 0x1bf720: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF724u;
        goto label_1bf724;
    }
    ctx->pc = 0x1BF71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1BF724u);
        ctx->pc = 0x1BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF71Cu;
        // 0x1bf720: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF71Cu, 0x1BF724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF724u;
label_1bf724:
    // 0x1bf724: 0xc0b6dac  jal         func_2DB6B0
label_1bf728:
    if (ctx->pc == 0x1BF728u) {
        ctx->pc = 0x1BF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF724u;
        // 0x1bf728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF72Cu;
        goto label_1bf72c;
    }
    ctx->pc = 0x1BF724u;
    SET_GPR_U32(ctx, 31, 0x1BF72Cu);
    ctx->pc = 0x1BF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF724u;
    // 0x1bf728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BF724u, 0x1BF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF72Cu;
label_1bf72c:
    // 0x1bf72c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1bf72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1bf730:
    // 0x1bf730: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1bf734:
    // 0x1bf734: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x1bf734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1bf738:
    // 0x1bf738: 0xa0f809  jalr        $a1
label_1bf73c:
    if (ctx->pc == 0x1BF73Cu) {
        ctx->pc = 0x1BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF738u;
        // 0x1bf73c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF740u;
        goto label_1bf740;
    }
    ctx->pc = 0x1BF738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1BF740u);
        ctx->pc = 0x1BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF738u;
        // 0x1bf73c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF738u, 0x1BF740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF740u;
label_1bf740:
    // 0x1bf740: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1bf740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1bf744:
    // 0x1bf744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf748:
    // 0x1bf748: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bf748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bf74c:
    // 0x1bf74c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bf750:
    // 0x1bf750: 0x40f809  jalr        $v0
label_1bf754:
    if (ctx->pc == 0x1BF754u) {
        ctx->pc = 0x1BF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF750u;
        // 0x1bf754: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF758u;
        goto label_1bf758;
    }
    ctx->pc = 0x1BF750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF758u);
        ctx->pc = 0x1BF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF750u;
        // 0x1bf754: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF750u, 0x1BF758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF758u;
label_1bf758:
    // 0x1bf758: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1bf758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf75c:
    // 0x1bf75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf760:
    // 0x1bf760: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x1bf760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
label_1bf764:
    // 0x1bf764: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bf764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_1bf768:
    // 0x1bf768: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bf768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bf76c:
    // 0x1bf76c: 0xc0b68b4  jal         func_2DA2D0
label_1bf770:
    if (ctx->pc == 0x1BF770u) {
        ctx->pc = 0x1BF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF76Cu;
        // 0x1bf770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF774u;
        goto label_1bf774;
    }
    ctx->pc = 0x1BF76Cu;
    SET_GPR_U32(ctx, 31, 0x1BF774u);
    ctx->pc = 0x1BF770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF76Cu;
    // 0x1bf770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x1BF76Cu, 0x1BF774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF774u;
label_1bf774:
    // 0x1bf774: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1bf778:
    if (ctx->pc == 0x1BF778u) {
        ctx->pc = 0x1BF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF774u;
        // 0x1bf778: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF77Cu;
        goto label_1bf77c;
    }
    ctx->pc = 0x1BF774u;
    {
        const bool branch_taken_0x1bf774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF774u;
        // 0x1bf778: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf774) {
            ctx->pc = 0x1BF7C0u;
            goto label_1bf7c0;
        }
    }
    ctx->pc = 0x1BF77Cu;
label_1bf77c:
    // 0x1bf77c: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1bf77cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1bf780:
    // 0x1bf780: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1bf780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1bf784:
    // 0x1bf784: 0x2508f7d8  addiu       $t0, $t0, -0x828
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965208));
label_1bf788:
    // 0x1bf788: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1bf788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf78c:
    // 0x1bf78c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bf78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bf790:
    // 0x1bf790: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1bf790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1bf794:
    // 0x1bf794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf798:
    // 0x1bf798: 0xc07de16  jal         func_1F7858
label_1bf79c:
    if (ctx->pc == 0x1BF79Cu) {
        ctx->pc = 0x1BF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF798u;
        // 0x1bf79c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7A0u;
        goto label_1bf7a0;
    }
    ctx->pc = 0x1BF798u;
    SET_GPR_U32(ctx, 31, 0x1BF7A0u);
    ctx->pc = 0x1BF79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF798u;
    // 0x1bf79c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1BF798u, 0x1BF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7A0u;
label_1bf7a0:
    // 0x1bf7a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bf7a4:
    if (ctx->pc == 0x1BF7A4u) {
        ctx->pc = 0x1BF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7A0u;
        // 0x1bf7a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7A8u;
        goto label_1bf7a8;
    }
    ctx->pc = 0x1BF7A0u;
    {
        const bool branch_taken_0x1bf7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7A0u;
        // 0x1bf7a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7a0) {
            ctx->pc = 0x1BF7C4u;
            goto label_1bf7c4;
        }
    }
    ctx->pc = 0x1BF7A8u;
label_1bf7a8:
    // 0x1bf7a8: 0x86420602  lh          $v0, 0x602($s2)
    ctx->pc = 0x1bf7a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1538)));
label_1bf7ac:
    // 0x1bf7ac: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
label_1bf7b0:
    if (ctx->pc == 0x1BF7B0u) {
        ctx->pc = 0x1BF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7ACu;
        // 0x1bf7b0: 0xa24002f5  sb          $zero, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7B4u;
        goto label_1bf7b4;
    }
    ctx->pc = 0x1BF7ACu;
    {
        const bool branch_taken_0x1bf7ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1bf7ac) {
            ctx->pc = 0x1BF7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF7ACu;
            // 0x1bf7b0: 0xa24002f5  sb          $zero, 0x2F5($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF7B4u;
            goto label_1bf7b4;
        }
    }
    ctx->pc = 0x1BF7B4u;
label_1bf7b4:
    // 0x1bf7b4: 0x96420602  lhu         $v0, 0x602($s2)
    ctx->pc = 0x1bf7b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1538)));
label_1bf7b8:
    // 0x1bf7b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bf7bc:
    // 0x1bf7bc: 0xa6420602  sh          $v0, 0x602($s2)
    ctx->pc = 0x1bf7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1538), (uint16_t)GPR_U32(ctx, 2));
label_1bf7c0:
    // 0x1bf7c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bf7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bf7c4:
    // 0x1bf7c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bf7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf7c8:
    // 0x1bf7c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bf7c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bf7cc:
    // 0x1bf7cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bf7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf7d0:
    // 0x1bf7d0: 0x3e00008  jr          $ra
label_1bf7d4:
    if (ctx->pc == 0x1BF7D4u) {
        ctx->pc = 0x1BF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D0u;
        // 0x1bf7d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7D8u;
        goto label_fallthrough_0x1bf7d0;
    }
    ctx->pc = 0x1BF7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D0u;
        // 0x1bf7d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bf7d0:
    ctx->pc = 0x1BF7D8u;
}
