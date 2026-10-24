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

// Function: func_001A5540
// Address: 0x1a5540 - 0x1a57a8
void func_001A5540_0x1a5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5540_0x1a5540");
#endif

    switch (ctx->pc) {
        case 0x1a5540u: goto label_1a5540;
        case 0x1a5544u: goto label_1a5544;
        case 0x1a5548u: goto label_1a5548;
        case 0x1a554cu: goto label_1a554c;
        case 0x1a5550u: goto label_1a5550;
        case 0x1a5554u: goto label_1a5554;
        case 0x1a5558u: goto label_1a5558;
        case 0x1a555cu: goto label_1a555c;
        case 0x1a5560u: goto label_1a5560;
        case 0x1a5564u: goto label_1a5564;
        case 0x1a5568u: goto label_1a5568;
        case 0x1a556cu: goto label_1a556c;
        case 0x1a5570u: goto label_1a5570;
        case 0x1a5574u: goto label_1a5574;
        case 0x1a5578u: goto label_1a5578;
        case 0x1a557cu: goto label_1a557c;
        case 0x1a5580u: goto label_1a5580;
        case 0x1a5584u: goto label_1a5584;
        case 0x1a5588u: goto label_1a5588;
        case 0x1a558cu: goto label_1a558c;
        case 0x1a5590u: goto label_1a5590;
        case 0x1a5594u: goto label_1a5594;
        case 0x1a5598u: goto label_1a5598;
        case 0x1a559cu: goto label_1a559c;
        case 0x1a55a0u: goto label_1a55a0;
        case 0x1a55a4u: goto label_1a55a4;
        case 0x1a55a8u: goto label_1a55a8;
        case 0x1a55acu: goto label_1a55ac;
        case 0x1a55b0u: goto label_1a55b0;
        case 0x1a55b4u: goto label_1a55b4;
        case 0x1a55b8u: goto label_1a55b8;
        case 0x1a55bcu: goto label_1a55bc;
        case 0x1a55c0u: goto label_1a55c0;
        case 0x1a55c4u: goto label_1a55c4;
        case 0x1a55c8u: goto label_1a55c8;
        case 0x1a55ccu: goto label_1a55cc;
        case 0x1a55d0u: goto label_1a55d0;
        case 0x1a55d4u: goto label_1a55d4;
        case 0x1a55d8u: goto label_1a55d8;
        case 0x1a55dcu: goto label_1a55dc;
        case 0x1a55e0u: goto label_1a55e0;
        case 0x1a55e4u: goto label_1a55e4;
        case 0x1a55e8u: goto label_1a55e8;
        case 0x1a55ecu: goto label_1a55ec;
        case 0x1a55f0u: goto label_1a55f0;
        case 0x1a55f4u: goto label_1a55f4;
        case 0x1a55f8u: goto label_1a55f8;
        case 0x1a55fcu: goto label_1a55fc;
        case 0x1a5600u: goto label_1a5600;
        case 0x1a5604u: goto label_1a5604;
        case 0x1a5608u: goto label_1a5608;
        case 0x1a560cu: goto label_1a560c;
        case 0x1a5610u: goto label_1a5610;
        case 0x1a5614u: goto label_1a5614;
        case 0x1a5618u: goto label_1a5618;
        case 0x1a561cu: goto label_1a561c;
        case 0x1a5620u: goto label_1a5620;
        case 0x1a5624u: goto label_1a5624;
        case 0x1a5628u: goto label_1a5628;
        case 0x1a562cu: goto label_1a562c;
        case 0x1a5630u: goto label_1a5630;
        case 0x1a5634u: goto label_1a5634;
        case 0x1a5638u: goto label_1a5638;
        case 0x1a563cu: goto label_1a563c;
        case 0x1a5640u: goto label_1a5640;
        case 0x1a5644u: goto label_1a5644;
        case 0x1a5648u: goto label_1a5648;
        case 0x1a564cu: goto label_1a564c;
        case 0x1a5650u: goto label_1a5650;
        case 0x1a5654u: goto label_1a5654;
        case 0x1a5658u: goto label_1a5658;
        case 0x1a565cu: goto label_1a565c;
        case 0x1a5660u: goto label_1a5660;
        case 0x1a5664u: goto label_1a5664;
        case 0x1a5668u: goto label_1a5668;
        case 0x1a566cu: goto label_1a566c;
        case 0x1a5670u: goto label_1a5670;
        case 0x1a5674u: goto label_1a5674;
        case 0x1a5678u: goto label_1a5678;
        case 0x1a567cu: goto label_1a567c;
        case 0x1a5680u: goto label_1a5680;
        case 0x1a5684u: goto label_1a5684;
        case 0x1a5688u: goto label_1a5688;
        case 0x1a568cu: goto label_1a568c;
        case 0x1a5690u: goto label_1a5690;
        case 0x1a5694u: goto label_1a5694;
        case 0x1a5698u: goto label_1a5698;
        case 0x1a569cu: goto label_1a569c;
        case 0x1a56a0u: goto label_1a56a0;
        case 0x1a56a4u: goto label_1a56a4;
        case 0x1a56a8u: goto label_1a56a8;
        case 0x1a56acu: goto label_1a56ac;
        case 0x1a56b0u: goto label_1a56b0;
        case 0x1a56b4u: goto label_1a56b4;
        case 0x1a56b8u: goto label_1a56b8;
        case 0x1a56bcu: goto label_1a56bc;
        case 0x1a56c0u: goto label_1a56c0;
        case 0x1a56c4u: goto label_1a56c4;
        case 0x1a56c8u: goto label_1a56c8;
        case 0x1a56ccu: goto label_1a56cc;
        case 0x1a56d0u: goto label_1a56d0;
        case 0x1a56d4u: goto label_1a56d4;
        case 0x1a56d8u: goto label_1a56d8;
        case 0x1a56dcu: goto label_1a56dc;
        case 0x1a56e0u: goto label_1a56e0;
        case 0x1a56e4u: goto label_1a56e4;
        case 0x1a56e8u: goto label_1a56e8;
        case 0x1a56ecu: goto label_1a56ec;
        case 0x1a56f0u: goto label_1a56f0;
        case 0x1a56f4u: goto label_1a56f4;
        case 0x1a56f8u: goto label_1a56f8;
        case 0x1a56fcu: goto label_1a56fc;
        case 0x1a5700u: goto label_1a5700;
        case 0x1a5704u: goto label_1a5704;
        case 0x1a5708u: goto label_1a5708;
        case 0x1a570cu: goto label_1a570c;
        case 0x1a5710u: goto label_1a5710;
        case 0x1a5714u: goto label_1a5714;
        case 0x1a5718u: goto label_1a5718;
        case 0x1a571cu: goto label_1a571c;
        case 0x1a5720u: goto label_1a5720;
        case 0x1a5724u: goto label_1a5724;
        case 0x1a5728u: goto label_1a5728;
        case 0x1a572cu: goto label_1a572c;
        case 0x1a5730u: goto label_1a5730;
        case 0x1a5734u: goto label_1a5734;
        case 0x1a5738u: goto label_1a5738;
        case 0x1a573cu: goto label_1a573c;
        case 0x1a5740u: goto label_1a5740;
        case 0x1a5744u: goto label_1a5744;
        case 0x1a5748u: goto label_1a5748;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a5750u: goto label_1a5750;
        case 0x1a5754u: goto label_1a5754;
        case 0x1a5758u: goto label_1a5758;
        case 0x1a575cu: goto label_1a575c;
        case 0x1a5760u: goto label_1a5760;
        case 0x1a5764u: goto label_1a5764;
        case 0x1a5768u: goto label_1a5768;
        case 0x1a576cu: goto label_1a576c;
        case 0x1a5770u: goto label_1a5770;
        case 0x1a5774u: goto label_1a5774;
        case 0x1a5778u: goto label_1a5778;
        case 0x1a577cu: goto label_1a577c;
        case 0x1a5780u: goto label_1a5780;
        case 0x1a5784u: goto label_1a5784;
        case 0x1a5788u: goto label_1a5788;
        case 0x1a578cu: goto label_1a578c;
        case 0x1a5790u: goto label_1a5790;
        case 0x1a5794u: goto label_1a5794;
        case 0x1a5798u: goto label_1a5798;
        case 0x1a579cu: goto label_1a579c;
        case 0x1a57a0u: goto label_1a57a0;
        case 0x1a57a4u: goto label_1a57a4;
        default: break;
    }

    ctx->pc = 0x1a5540u;

label_1a5540:
    // 0x1a5540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a5544:
    // 0x1a5544: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a5544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a5548:
    // 0x1a5548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a554c:
    // 0x1a554c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a5550:
    // 0x1a5550: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1a5554:
    // 0x1a5554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a5558:
    // 0x1a5558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a555c:
    // 0x1a555c: 0xc0a4bd4  jal         func_292F50
label_1a5560:
    if (ctx->pc == 0x1A5560u) {
        ctx->pc = 0x1A5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A555Cu;
        // 0x1a5560: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5564u;
        goto label_1a5564;
    }
    ctx->pc = 0x1A555Cu;
    SET_GPR_U32(ctx, 31, 0x1A5564u);
    ctx->pc = 0x1A5560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A555Cu;
    // 0x1a5560: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A555Cu, 0x1A5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5564u;
label_1a5564:
    // 0x1a5564: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a5564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5568:
    // 0x1a5568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a556c:
    // 0x1a556c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a556cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a5570:
    // 0x1a5570: 0xc0560a2  jal         func_158288
label_1a5574:
    if (ctx->pc == 0x1A5574u) {
        ctx->pc = 0x1A5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5570u;
        // 0x1a5574: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5578u;
        goto label_1a5578;
    }
    ctx->pc = 0x1A5570u;
    SET_GPR_U32(ctx, 31, 0x1A5578u);
    ctx->pc = 0x1A5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5570u;
    // 0x1a5574: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1A5570u, 0x1A5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5578u;
label_1a5578:
    // 0x1a5578: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1a5578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1a557c:
    // 0x1a557c: 0x10720037  beq         $v1, $s2, . + 4 + (0x37 << 2)
label_1a5580:
    if (ctx->pc == 0x1A5580u) {
        ctx->pc = 0x1A5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A557Cu;
        // 0x1a5580: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5584u;
        goto label_1a5584;
    }
    ctx->pc = 0x1A557Cu;
    {
        const bool branch_taken_0x1a557c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A557Cu;
        // 0x1a5580: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a557c) {
            ctx->pc = 0x1A565Cu;
            goto label_1a565c;
        }
    }
    ctx->pc = 0x1A5584u;
label_1a5584:
    // 0x1a5584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a5588:
    if (ctx->pc == 0x1A5588u) {
        ctx->pc = 0x1A5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5584u;
        // 0x1a5588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A558Cu;
        goto label_1a558c;
    }
    ctx->pc = 0x1A5584u;
    {
        const bool branch_taken_0x1a5584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5584u;
        // 0x1a5588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5584) {
            ctx->pc = 0x1A559Cu;
            goto label_1a559c;
        }
    }
    ctx->pc = 0x1A558Cu;
label_1a558c:
    // 0x1a558c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_1a5590:
    if (ctx->pc == 0x1A5590u) {
        ctx->pc = 0x1A5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A558Cu;
        // 0x1a5590: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5594u;
        goto label_1a5594;
    }
    ctx->pc = 0x1A558Cu;
    {
        const bool branch_taken_0x1a558c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a558c) {
            ctx->pc = 0x1A5590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A558Cu;
            // 0x1a5590: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A55B4u;
            goto label_1a55b4;
        }
    }
    ctx->pc = 0x1A5594u;
label_1a5594:
    // 0x1a5594: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1a5598:
    if (ctx->pc == 0x1A5598u) {
        ctx->pc = 0x1A5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5594u;
        // 0x1a5598: 0x8e250624  lw          $a1, 0x624($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A559Cu;
        goto label_1a559c;
    }
    ctx->pc = 0x1A5594u;
    {
        const bool branch_taken_0x1a5594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5594u;
        // 0x1a5598: 0x8e250624  lw          $a1, 0x624($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5594) {
            ctx->pc = 0x1A5750u;
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A559Cu;
label_1a559c:
    // 0x1a559c: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_1a55a0:
    if (ctx->pc == 0x1A55A0u) {
        ctx->pc = 0x1A55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A559Cu;
        // 0x1a55a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55A4u;
        goto label_1a55a4;
    }
    ctx->pc = 0x1A559Cu;
    {
        const bool branch_taken_0x1a559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A559Cu;
        // 0x1a55a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a559c) {
            ctx->pc = 0x1A56A0u;
            goto label_1a56a0;
        }
    }
    ctx->pc = 0x1A55A4u;
label_1a55a4:
    // 0x1a55a4: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
label_1a55a8:
    if (ctx->pc == 0x1A55A8u) {
        ctx->pc = 0x1A55ACu;
        goto label_1a55ac;
    }
    ctx->pc = 0x1A55A4u;
    {
        const bool branch_taken_0x1a55a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a55a4) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A55ACu;
label_1a55ac:
    // 0x1a55ac: 0x10000068  b           . + 4 + (0x68 << 2)
label_1a55b0:
    if (ctx->pc == 0x1A55B0u) {
        ctx->pc = 0x1A55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55ACu;
        // 0x1a55b0: 0x8e250624  lw          $a1, 0x624($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55B4u;
        goto label_1a55b4;
    }
    ctx->pc = 0x1A55ACu;
    {
        const bool branch_taken_0x1a55ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55ACu;
        // 0x1a55b0: 0x8e250624  lw          $a1, 0x624($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55ac) {
            ctx->pc = 0x1A5750u;
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A55B4u;
label_1a55b4:
    // 0x1a55b4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x1a55b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
label_1a55b8:
    // 0x1a55b8: 0x26107b00  addiu       $s0, $s0, 0x7B00
    ctx->pc = 0x1a55b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31488));
label_1a55bc:
    // 0x1a55bc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1a55bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1a55c0:
    // 0x1a55c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a55c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a55c4:
    // 0x1a55c4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1a55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1a55c8:
    // 0x1a55c8: 0x40f809  jalr        $v0
label_1a55cc:
    if (ctx->pc == 0x1A55CCu) {
        ctx->pc = 0x1A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55C8u;
        // 0x1a55cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55D0u;
        goto label_1a55d0;
    }
    ctx->pc = 0x1A55C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A55D0u);
        ctx->pc = 0x1A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55C8u;
        // 0x1a55cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55C8u, 0x1A55D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A55D0u;
label_1a55d0:
    // 0x1a55d0: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1a55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1a55d4:
    // 0x1a55d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a55d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a55d8:
    // 0x1a55d8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1a55d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1a55dc:
    // 0x1a55dc: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x1a55dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1a55e0:
    // 0x1a55e0: 0xc0f809  jalr        $a2
label_1a55e4:
    if (ctx->pc == 0x1A55E4u) {
        ctx->pc = 0x1A55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E0u;
        // 0x1a55e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55E8u;
        goto label_1a55e8;
    }
    ctx->pc = 0x1A55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A55E8u);
        ctx->pc = 0x1A55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E0u;
        // 0x1a55e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55E0u, 0x1A55E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A55E8u;
label_1a55e8:
    // 0x1a55e8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1a55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1a55ec:
    // 0x1a55ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a55f0:
    // 0x1a55f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a55f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a55f4:
    // 0x1a55f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a55f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a55f8:
    // 0x1a55f8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1a55f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a55fc:
    // 0x1a55fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a55fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5600:
    // 0x1a5600: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a5604:
    // 0x1a5604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a5604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5608:
    // 0x1a5608: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a5608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a560c:
    // 0x1a560c: 0xc0aa15e  jal         func_2A8578
label_1a5610:
    if (ctx->pc == 0x1A5610u) {
        ctx->pc = 0x1A5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A560Cu;
        // 0x1a5610: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5614u;
        goto label_1a5614;
    }
    ctx->pc = 0x1A560Cu;
    SET_GPR_U32(ctx, 31, 0x1A5614u);
    ctx->pc = 0x1A5610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A560Cu;
    // 0x1a5610: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1A560Cu, 0x1A5614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5614u;
label_1a5614:
    // 0x1a5614: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1a5618:
    // 0x1a5618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a5618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a561c:
    // 0x1a561c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5620:
    // 0x1a5620: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a5620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5624:
    // 0x1a5624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5628:
    // 0x1a5628: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a562c:
    // 0x1a562c: 0xc0c194a  jal         func_306528
label_1a5630:
    if (ctx->pc == 0x1A5630u) {
        ctx->pc = 0x1A5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A562Cu;
        // 0x1a5630: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5634u;
        goto label_1a5634;
    }
    ctx->pc = 0x1A562Cu;
    SET_GPR_U32(ctx, 31, 0x1A5634u);
    ctx->pc = 0x1A5630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A562Cu;
    // 0x1a5630: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1A562Cu, 0x1A5634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5634u;
label_1a5634:
    // 0x1a5634: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a5638:
    // 0x1a5638: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a563c:
    if (ctx->pc == 0x1A563Cu) {
        ctx->pc = 0x1A563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5638u;
        // 0x1a563c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5640u;
        goto label_1a5640;
    }
    ctx->pc = 0x1A5638u;
    {
        const bool branch_taken_0x1a5638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5638u;
        // 0x1a563c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5638) {
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A5640u;
label_1a5640:
    // 0x1a5640: 0xc07f59a  jal         func_1FD668
label_1a5644:
    if (ctx->pc == 0x1A5644u) {
        ctx->pc = 0x1A5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5640u;
        // 0x1a5644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5648u;
        goto label_1a5648;
    }
    ctx->pc = 0x1A5640u;
    SET_GPR_U32(ctx, 31, 0x1A5648u);
    ctx->pc = 0x1A5644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5640u;
    // 0x1a5644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A5640u, 0x1A5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5648u;
label_1a5648:
    // 0x1a5648: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a5648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a564c:
    // 0x1a564c: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x1a564cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
label_1a5650:
    // 0x1a5650: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1a5650u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1a5654:
    // 0x1a5654: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a5654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a5658:
    // 0x1a5658: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a5658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a565c:
    // 0x1a565c: 0xc055f06  jal         func_157C18
label_1a5660:
    if (ctx->pc == 0x1A5660u) {
        ctx->pc = 0x1A5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A565Cu;
        // 0x1a5660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5664u;
        goto label_1a5664;
    }
    ctx->pc = 0x1A565Cu;
    SET_GPR_U32(ctx, 31, 0x1A5664u);
    ctx->pc = 0x1A5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A565Cu;
    // 0x1a5660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1A565Cu, 0x1A5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5664u;
label_1a5664:
    // 0x1a5664: 0x96230628  lhu         $v1, 0x628($s1)
    ctx->pc = 0x1a5664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1a5668:
    // 0x1a5668: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a566c:
    // 0x1a566c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a566cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1a5670:
    // 0x1a5670: 0x4410036  bgez        $v0, . + 4 + (0x36 << 2)
label_1a5674:
    if (ctx->pc == 0x1A5674u) {
        ctx->pc = 0x1A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5670u;
        // 0x1a5674: 0xa6230628  sh          $v1, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5678u;
        goto label_1a5678;
    }
    ctx->pc = 0x1A5670u;
    {
        const bool branch_taken_0x1a5670 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5670u;
        // 0x1a5674: 0xa6230628  sh          $v1, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5670) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A5678u;
label_1a5678:
    // 0x1a5678: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a567c:
    // 0x1a567c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a5680:
    if (ctx->pc == 0x1A5680u) {
        ctx->pc = 0x1A5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A567Cu;
        // 0x1a5680: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5684u;
        goto label_1a5684;
    }
    ctx->pc = 0x1A567Cu;
    {
        const bool branch_taken_0x1a567c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A567Cu;
        // 0x1a5680: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a567c) {
            ctx->pc = 0x1A5690u;
            goto label_1a5690;
        }
    }
    ctx->pc = 0x1A5684u;
label_1a5684:
    // 0x1a5684: 0xc07f59a  jal         func_1FD668
label_1a5688:
    if (ctx->pc == 0x1A5688u) {
        ctx->pc = 0x1A5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5684u;
        // 0x1a5688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A568Cu;
        goto label_1a568c;
    }
    ctx->pc = 0x1A5684u;
    SET_GPR_U32(ctx, 31, 0x1A568Cu);
    ctx->pc = 0x1A5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5684u;
    // 0x1a5688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A5684u, 0x1A568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A568Cu;
label_1a568c:
    // 0x1a568c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_1a5690:
    // 0x1a5690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5694:
    // 0x1a5694: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1a5694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1a5698:
    // 0x1a5698: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a569c:
    if (ctx->pc == 0x1A569Cu) {
        ctx->pc = 0x1A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5698u;
        // 0x1a569c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56A0u;
        goto label_1a56a0;
    }
    ctx->pc = 0x1A5698u;
    {
        const bool branch_taken_0x1a5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5698u;
        // 0x1a569c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5698) {
            ctx->pc = 0x1A5744u;
            goto label_1a5744;
        }
    }
    ctx->pc = 0x1A56A0u;
label_1a56a0:
    // 0x1a56a0: 0xc055f06  jal         func_157C18
label_1a56a4:
    if (ctx->pc == 0x1A56A4u) {
        ctx->pc = 0x1A56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56A0u;
        // 0x1a56a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56A8u;
        goto label_1a56a8;
    }
    ctx->pc = 0x1A56A0u;
    SET_GPR_U32(ctx, 31, 0x1A56A8u);
    ctx->pc = 0x1A56A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56A0u;
    // 0x1a56a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1A56A0u, 0x1A56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56A8u;
label_1a56a8:
    // 0x1a56a8: 0x96230628  lhu         $v1, 0x628($s1)
    ctx->pc = 0x1a56a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1a56ac:
    // 0x1a56ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a56acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a56b0:
    // 0x1a56b0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1a56b4:
    // 0x1a56b4: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
label_1a56b8:
    if (ctx->pc == 0x1A56B8u) {
        ctx->pc = 0x1A56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56B4u;
        // 0x1a56b8: 0xa6230628  sh          $v1, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56BCu;
        goto label_1a56bc;
    }
    ctx->pc = 0x1A56B4u;
    {
        const bool branch_taken_0x1a56b4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56B4u;
        // 0x1a56b8: 0xa6230628  sh          $v1, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56b4) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A56BCu;
label_1a56bc:
    // 0x1a56bc: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1a56bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a56c0:
    // 0x1a56c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a56c4:
    if (ctx->pc == 0x1A56C4u) {
        ctx->pc = 0x1A56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56C0u;
        // 0x1a56c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56C8u;
        goto label_1a56c8;
    }
    ctx->pc = 0x1A56C0u;
    {
        const bool branch_taken_0x1a56c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56C0u;
        // 0x1a56c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56c0) {
            ctx->pc = 0x1A56D4u;
            goto label_1a56d4;
        }
    }
    ctx->pc = 0x1A56C8u;
label_1a56c8:
    // 0x1a56c8: 0xc07f59a  jal         func_1FD668
label_1a56cc:
    if (ctx->pc == 0x1A56CCu) {
        ctx->pc = 0x1A56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56C8u;
        // 0x1a56cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56D0u;
        goto label_1a56d0;
    }
    ctx->pc = 0x1A56C8u;
    SET_GPR_U32(ctx, 31, 0x1A56D0u);
    ctx->pc = 0x1A56CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56C8u;
    // 0x1a56cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A56C8u, 0x1A56D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56D0u;
label_1a56d0:
    // 0x1a56d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a56d4:
    // 0x1a56d4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a56d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a56d8:
    // 0x1a56d8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a56dc:
    if (ctx->pc == 0x1A56DCu) {
        ctx->pc = 0x1A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56D8u;
        // 0x1a56dc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56E0u;
        goto label_1a56e0;
    }
    ctx->pc = 0x1A56D8u;
    {
        const bool branch_taken_0x1a56d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56D8u;
        // 0x1a56dc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56d8) {
            ctx->pc = 0x1A5748u;
            goto label_1a5748;
        }
    }
    ctx->pc = 0x1A56E0u;
label_1a56e0:
    // 0x1a56e0: 0xc055f06  jal         func_157C18
label_1a56e4:
    if (ctx->pc == 0x1A56E4u) {
        ctx->pc = 0x1A56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E0u;
        // 0x1a56e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56E8u;
        goto label_1a56e8;
    }
    ctx->pc = 0x1A56E0u;
    SET_GPR_U32(ctx, 31, 0x1A56E8u);
    ctx->pc = 0x1A56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56E0u;
    // 0x1a56e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1A56E0u, 0x1A56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56E8u;
label_1a56e8:
    // 0x1a56e8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a56ec:
    if (ctx->pc == 0x1A56ECu) {
        ctx->pc = 0x1A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E8u;
        // 0x1a56ec: 0x262205c0  addiu       $v0, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56F0u;
        goto label_1a56f0;
    }
    ctx->pc = 0x1A56E8u;
    {
        const bool branch_taken_0x1a56e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E8u;
        // 0x1a56ec: 0x262205c0  addiu       $v0, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56e8) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A56F0u;
label_1a56f0:
    // 0x1a56f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1a56f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1a56f4:
    // 0x1a56f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a56f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a56f8:
    // 0x1a56f8: 0xae2005c0  sw          $zero, 0x5C0($s1)
    ctx->pc = 0x1a56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 0));
label_1a56fc:
    // 0x1a56fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a56fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5700:
    // 0x1a5700: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x1a5700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
label_1a5704:
    // 0x1a5704: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1a5704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1a5708:
    // 0x1a5708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a5708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a570c:
    // 0x1a570c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5710:
    // 0x1a5710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a5714:
    // 0x1a5714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5718:
    // 0x1a5718: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a5718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a571c:
    // 0x1a571c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1a571cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a5720:
    // 0x1a5720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5724:
    // 0x1a5724: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a5724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1a5728:
    // 0x1a5728: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a5728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a572c:
    // 0x1a572c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a5730:
    // 0x1a5730: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a5730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a5734:
    // 0x1a5734: 0xc05420c  jal         func_150830
label_1a5738:
    if (ctx->pc == 0x1A5738u) {
        ctx->pc = 0x1A5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5734u;
        // 0x1a5738: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A573Cu;
        goto label_1a573c;
    }
    ctx->pc = 0x1A5734u;
    SET_GPR_U32(ctx, 31, 0x1A573Cu);
    ctx->pc = 0x1A5738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5734u;
    // 0x1a5738: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x1A5734u, 0x1A573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A573Cu;
label_1a573c:
    // 0x1a573c: 0xa23202f4  sb          $s2, 0x2F4($s1)
    ctx->pc = 0x1a573cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 18));
label_1a5740:
    // 0x1a5740: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a5740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1a5744:
    // 0x1a5744: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a5744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a5748:
    // 0x1a5748: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a5748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a574c:
    // 0x1a574c: 0x8e250624  lw          $a1, 0x624($s1)
    ctx->pc = 0x1a574cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1a5750:
    // 0x1a5750: 0xc06dce0  jal         func_1B7380
label_1a5754:
    if (ctx->pc == 0x1A5754u) {
        ctx->pc = 0x1A5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5750u;
        // 0x1a5754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5758u;
        goto label_1a5758;
    }
    ctx->pc = 0x1A5750u;
    SET_GPR_U32(ctx, 31, 0x1A5758u);
    ctx->pc = 0x1A5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5750u;
    // 0x1a5754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1A5750u, 0x1A5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5758u;
label_1a5758:
    // 0x1a5758: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a5758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a575c:
    // 0x1a575c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5760:
    // 0x1a5760: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1a5764:
    if (ctx->pc == 0x1A5764u) {
        ctx->pc = 0x1A5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5760u;
        // 0x1a5764: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5768u;
        goto label_1a5768;
    }
    ctx->pc = 0x1A5760u;
    {
        const bool branch_taken_0x1a5760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5760u;
        // 0x1a5764: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5760) {
            ctx->pc = 0x1A5794u;
            goto label_1a5794;
        }
    }
    ctx->pc = 0x1A5768u;
label_1a5768:
    // 0x1a5768: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_1a576c:
    // 0x1a576c: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_1a5770:
    if (ctx->pc == 0x1A5770u) {
        ctx->pc = 0x1A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A576Cu;
        // 0x1a5770: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5774u;
        goto label_1a5774;
    }
    ctx->pc = 0x1A576Cu;
    {
        const bool branch_taken_0x1a576c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1a576c) {
            ctx->pc = 0x1A5770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A576Cu;
            // 0x1a5770: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5798u;
            goto label_1a5798;
        }
    }
    ctx->pc = 0x1A5774u;
label_1a5774:
    // 0x1a5774: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x1a5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_1a5778:
    // 0x1a5778: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x1a5778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_1a577c:
    // 0x1a577c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a5780:
    // 0x1a5780: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a5780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1a5784:
    // 0x1a5784: 0xae2205b0  sw          $v0, 0x5B0($s1)
    ctx->pc = 0x1a5784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 2));
label_1a5788:
    // 0x1a5788: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a5788u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a578c:
    // 0x1a578c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a578cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a5790:
    // 0x1a5790: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a5790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5794:
    // 0x1a5794: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5798:
    // 0x1a5798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a579c:
    // 0x1a579c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a579cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a57a0:
    // 0x1a57a0: 0x3e00008  jr          $ra
label_1a57a4:
    if (ctx->pc == 0x1A57A4u) {
        ctx->pc = 0x1A57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57A0u;
        // 0x1a57a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A57A8u;
        goto label_fallthrough_0x1a57a0;
    }
    ctx->pc = 0x1A57A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57A0u;
        // 0x1a57a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A57A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a57a0:
    ctx->pc = 0x1A57A8u;
}
