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

// Function: func_00277568
// Address: 0x277568 - 0x2777a8
void func_00277568_0x277568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277568_0x277568");
#endif

    switch (ctx->pc) {
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775ecu: goto label_2775ec;
        case 0x2775f0u: goto label_2775f0;
        case 0x2775f4u: goto label_2775f4;
        case 0x2775f8u: goto label_2775f8;
        case 0x2775fcu: goto label_2775fc;
        case 0x277600u: goto label_277600;
        case 0x277604u: goto label_277604;
        case 0x277608u: goto label_277608;
        case 0x27760cu: goto label_27760c;
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        case 0x27776cu: goto label_27776c;
        case 0x277770u: goto label_277770;
        case 0x277774u: goto label_277774;
        case 0x277778u: goto label_277778;
        case 0x27777cu: goto label_27777c;
        case 0x277780u: goto label_277780;
        case 0x277784u: goto label_277784;
        case 0x277788u: goto label_277788;
        case 0x27778cu: goto label_27778c;
        case 0x277790u: goto label_277790;
        case 0x277794u: goto label_277794;
        case 0x277798u: goto label_277798;
        case 0x27779cu: goto label_27779c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777a4u: goto label_2777a4;
        default: break;
    }

    ctx->pc = 0x277568u;

label_277568:
    // 0x277568: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27756c:
    // 0x27756c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27756cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_277570:
    // 0x277570: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x277570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_277574:
    // 0x277574: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x277574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_277578:
    // 0x277578: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x277578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_27757c:
    // 0x27757c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x27757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_277580:
    // 0x277580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x277580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277584:
    // 0x277584: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x277584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_277588:
    // 0x277588: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x277588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_27758c:
    // 0x27758c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_277590:
    // 0x277590: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_277594:
    // 0x277594: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
label_277598:
    if (ctx->pc == 0x277598u) {
        ctx->pc = 0x277598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277594u;
        // 0x277598: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27759Cu;
        goto label_27759c;
    }
    ctx->pc = 0x277594u;
    {
        const bool branch_taken_0x277594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277594u;
        // 0x277598: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277594) {
            ctx->pc = 0x277784u;
            goto label_277784;
        }
    }
    ctx->pc = 0x27759Cu;
label_27759c:
    // 0x27759c: 0xc0b6dac  jal         func_2DB6B0
label_2775a0:
    if (ctx->pc == 0x2775A0u) {
        ctx->pc = 0x2775A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27759Cu;
        // 0x2775a0: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775A4u;
        goto label_2775a4;
    }
    ctx->pc = 0x27759Cu;
    SET_GPR_U32(ctx, 31, 0x2775A4u);
    ctx->pc = 0x2775A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27759Cu;
    // 0x2775a0: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27759Cu, 0x2775A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775A4u;
label_2775a4:
    // 0x2775a4: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2775a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2775a8:
    // 0x2775a8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2775a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2775ac:
    // 0x2775ac: 0xc07dfac  jal         func_1F7EB0
label_2775b0:
    if (ctx->pc == 0x2775B0u) {
        ctx->pc = 0x2775B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775ACu;
        // 0x2775b0: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775B4u;
        goto label_2775b4;
    }
    ctx->pc = 0x2775ACu;
    SET_GPR_U32(ctx, 31, 0x2775B4u);
    ctx->pc = 0x2775B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775ACu;
    // 0x2775b0: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2775ACu, 0x2775B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775B4u;
label_2775b4:
    // 0x2775b4: 0x8e231560  lw          $v1, 0x1560($s1)
    ctx->pc = 0x2775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5472)));
label_2775b8:
    // 0x2775b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2775b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2775bc:
    // 0x2775bc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2775bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_2775c0:
    // 0x2775c0: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x2775c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_2775c4:
    // 0x2775c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2775c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2775c8:
    // 0x2775c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2775c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2775cc:
    // 0x2775cc: 0xae231560  sw          $v1, 0x1560($s1)
    ctx->pc = 0x2775ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 3));
label_2775d0:
    // 0x2775d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2775d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2775d4:
    // 0x2775d4: 0xc04d476  jal         func_1351D8
label_2775d8:
    if (ctx->pc == 0x2775D8u) {
        ctx->pc = 0x2775D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775D4u;
        // 0x2775d8: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775DCu;
        goto label_2775dc;
    }
    ctx->pc = 0x2775D4u;
    SET_GPR_U32(ctx, 31, 0x2775DCu);
    ctx->pc = 0x2775D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775D4u;
    // 0x2775d8: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2775D4u, 0x2775DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775DCu;
label_2775dc:
    // 0x2775dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2775dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2775e0:
    // 0x2775e0: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x2775e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_2775e4:
    // 0x2775e4: 0x2446fac0  addiu       $a2, $v0, -0x540
    ctx->pc = 0x2775e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965952));
label_2775e8:
    // 0x2775e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2775e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2775ec:
    // 0x2775ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2775ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2775f0:
    // 0x2775f0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2775f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2775f4:
    // 0x2775f4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x2775f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2775f8:
    // 0x2775f8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_2775fc:
    if (ctx->pc == 0x2775FCu) {
        ctx->pc = 0x2775FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775F8u;
        // 0x2775fc: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277600u;
        goto label_277600;
    }
    ctx->pc = 0x2775F8u;
    {
        const bool branch_taken_0x2775f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2775FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775F8u;
        // 0x2775fc: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775f8) {
            ctx->pc = 0x277624u;
            goto label_277624;
        }
    }
    ctx->pc = 0x277600u;
label_277600:
    // 0x277600: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x277600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_277604:
    // 0x277604: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x277604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_277608:
    // 0x277608: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x277608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27760c:
    // 0x27760c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277610:
    // 0x277610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277614:
    // 0x277614: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x277614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_277618:
    // 0x277618: 0x12303f  dsra32      $a2, $s2, 0
    ctx->pc = 0x277618u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 18) >> (32 + 0));
label_27761c:
    // 0x27761c: 0x10000003  b           . + 4 + (0x3 << 2)
label_277620:
    if (ctx->pc == 0x277620u) {
        ctx->pc = 0x277620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27761Cu;
        // 0x277620: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277624u;
        goto label_277624;
    }
    ctx->pc = 0x27761Cu;
    {
        const bool branch_taken_0x27761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27761Cu;
        // 0x277620: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27761c) {
            ctx->pc = 0x27762Cu;
            goto label_27762c;
        }
    }
    ctx->pc = 0x277624u;
label_277624:
    // 0x277624: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x277624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_277628:
    // 0x277628: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x277628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_27762c:
    // 0x27762c: 0x24e3fac0  addiu       $v1, $a3, -0x540
    ctx->pc = 0x27762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965952));
label_277630:
    // 0x277630: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x277630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_277634:
    // 0x277634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_277638:
    // 0x277638: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27763c:
    if (ctx->pc == 0x27763Cu) {
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277638u;
        // 0x27763c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277640u;
        goto label_277640;
    }
    ctx->pc = 0x277638u;
    {
        const bool branch_taken_0x277638 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277638u;
        // 0x27763c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277638) {
            ctx->pc = 0x277654u;
            goto label_277654;
        }
    }
    ctx->pc = 0x277640u;
label_277640:
    // 0x277640: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x277640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_277644:
    // 0x277644: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x277644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_277648:
    // 0x277648: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x277648u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27764c:
    // 0x27764c: 0x10000002  b           . + 4 + (0x2 << 2)
label_277650:
    if (ctx->pc == 0x277650u) {
        ctx->pc = 0x277650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27764Cu;
        // 0x277650: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277654u;
        goto label_277654;
    }
    ctx->pc = 0x27764Cu;
    {
        const bool branch_taken_0x27764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27764Cu;
        // 0x277650: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27764c) {
            ctx->pc = 0x277658u;
            goto label_277658;
        }
    }
    ctx->pc = 0x277654u;
label_277654:
    // 0x277654: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x277654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_277658:
    // 0x277658: 0xc0f809  jalr        $a2
label_27765c:
    if (ctx->pc == 0x27765Cu) {
        ctx->pc = 0x27765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277658u;
        // 0x27765c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277660u;
        goto label_277660;
    }
    ctx->pc = 0x277658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x277660u);
        ctx->pc = 0x27765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277658u;
        // 0x27765c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277658u, 0x277660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277660u;
label_277660:
    // 0x277660: 0xc053ed2  jal         func_14FB48
label_277664:
    if (ctx->pc == 0x277664u) {
        ctx->pc = 0x277664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277660u;
        // 0x277664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277668u;
        goto label_277668;
    }
    ctx->pc = 0x277660u;
    SET_GPR_U32(ctx, 31, 0x277668u);
    ctx->pc = 0x277664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277660u;
    // 0x277664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x277660u, 0x277668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277668u;
label_277668:
    // 0x277668: 0xc0527ae  jal         func_149EB8
label_27766c:
    if (ctx->pc == 0x27766Cu) {
        ctx->pc = 0x27766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277668u;
        // 0x27766c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277670u;
        goto label_277670;
    }
    ctx->pc = 0x277668u;
    SET_GPR_U32(ctx, 31, 0x277670u);
    ctx->pc = 0x27766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277668u;
    // 0x27766c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x277668u, 0x277670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277670u;
label_277670:
    // 0x277670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x277670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277674:
    // 0x277674: 0xc054a88  jal         func_152A20
label_277678:
    if (ctx->pc == 0x277678u) {
        ctx->pc = 0x277678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277674u;
        // 0x277678: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27767Cu;
        goto label_27767c;
    }
    ctx->pc = 0x277674u;
    SET_GPR_U32(ctx, 31, 0x27767Cu);
    ctx->pc = 0x277678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277674u;
    // 0x277678: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x277674u, 0x27767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27767Cu;
label_27767c:
    // 0x27767c: 0xc05280e  jal         func_14A038
label_277680:
    if (ctx->pc == 0x277680u) {
        ctx->pc = 0x277680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27767Cu;
        // 0x277680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277684u;
        goto label_277684;
    }
    ctx->pc = 0x27767Cu;
    SET_GPR_U32(ctx, 31, 0x277684u);
    ctx->pc = 0x277680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27767Cu;
    // 0x277680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27767Cu, 0x277684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277684u;
label_277684:
    // 0x277684: 0x26642fc0  addiu       $a0, $s3, 0x2FC0
    ctx->pc = 0x277684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
label_277688:
    // 0x277688: 0xc04d23a  jal         func_1348E8
label_27768c:
    if (ctx->pc == 0x27768Cu) {
        ctx->pc = 0x27768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277688u;
        // 0x27768c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277690u;
        goto label_277690;
    }
    ctx->pc = 0x277688u;
    SET_GPR_U32(ctx, 31, 0x277690u);
    ctx->pc = 0x27768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277688u;
    // 0x27768c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x277688u, 0x277690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277690u;
label_277690:
    // 0x277690: 0x8e231560  lw          $v1, 0x1560($s1)
    ctx->pc = 0x277690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5472)));
label_277694:
    // 0x277694: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x277694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_277698:
    // 0x277698: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
label_27769c:
    if (ctx->pc == 0x27769Cu) {
        ctx->pc = 0x27769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277698u;
        // 0x27769c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776A0u;
        goto label_2776a0;
    }
    ctx->pc = 0x277698u;
    {
        const bool branch_taken_0x277698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x277698) {
            ctx->pc = 0x27769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277698u;
            // 0x27769c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277760u;
            goto label_277760;
        }
    }
    ctx->pc = 0x2776A0u;
label_2776a0:
    // 0x2776a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2776a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_2776a4:
    // 0x2776a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2776a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2776a8:
    // 0x2776a8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2776a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2776ac:
    // 0x2776ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2776acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2776b0:
    // 0x2776b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2776b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2776b4:
    // 0x2776b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2776b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2776b8:
    // 0x2776b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2776b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2776bc:
    // 0x2776bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2776bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2776c0:
    // 0x2776c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2776c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2776c4:
    // 0x2776c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2776c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2776c8:
    // 0x2776c8: 0xc04cb68  jal         func_132DA0
label_2776cc:
    if (ctx->pc == 0x2776CCu) {
        ctx->pc = 0x2776CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776C8u;
        // 0x2776cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776D0u;
        goto label_2776d0;
    }
    ctx->pc = 0x2776C8u;
    SET_GPR_U32(ctx, 31, 0x2776D0u);
    ctx->pc = 0x2776CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776C8u;
    // 0x2776cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x2776C8u, 0x2776D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776D0u;
label_2776d0:
    // 0x2776d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2776d4:
    if (ctx->pc == 0x2776D4u) {
        ctx->pc = 0x2776D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776D0u;
        // 0x2776d4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776D8u;
        goto label_2776d8;
    }
    ctx->pc = 0x2776D0u;
    {
        const bool branch_taken_0x2776d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2776D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776D0u;
        // 0x2776d4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776d0) {
            ctx->pc = 0x2776ECu;
            goto label_2776ec;
        }
    }
    ctx->pc = 0x2776D8u;
label_2776d8:
    // 0x2776d8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2776d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_2776dc:
    // 0x2776dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2776dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2776e0:
    // 0x2776e0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2776e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_2776e4:
    // 0x2776e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2776e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2776e8:
    // 0x2776e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2776e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2776ec:
    // 0x2776ec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2776ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_2776f0:
    // 0x2776f0: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x2776f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2776f4:
    // 0x2776f4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2776f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_2776f8:
    // 0x2776f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2776f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2776fc:
    // 0x2776fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2776fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_277700:
    // 0x277700: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x277700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277704:
    // 0x277704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277708:
    // 0x277708: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x277708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27770c:
    // 0x27770c: 0xc04ca70  jal         func_1329C0
label_277710:
    if (ctx->pc == 0x277710u) {
        ctx->pc = 0x277710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27770Cu;
        // 0x277710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277714u;
        goto label_277714;
    }
    ctx->pc = 0x27770Cu;
    SET_GPR_U32(ctx, 31, 0x277714u);
    ctx->pc = 0x277710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27770Cu;
    // 0x277710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x27770Cu, 0x277714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277714u;
label_277714:
    // 0x277714: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_277718:
    if (ctx->pc == 0x277718u) {
        ctx->pc = 0x277718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277714u;
        // 0x277718: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27771Cu;
        goto label_27771c;
    }
    ctx->pc = 0x277714u;
    {
        const bool branch_taken_0x277714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277714) {
            ctx->pc = 0x277718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277714u;
            // 0x277718: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27771Cu;
            goto label_27771c;
        }
    }
    ctx->pc = 0x27771Cu;
label_27771c:
    // 0x27771c: 0xc6211568  lwc1        $f1, 0x1568($s1)
    ctx->pc = 0x27771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277720:
    // 0x277720: 0xc6201564  lwc1        $f0, 0x1564($s1)
    ctx->pc = 0x277720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277724:
    // 0x277724: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x277724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_277728:
    // 0x277728: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x277728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27772c:
    // 0x27772c: 0xe6211568  swc1        $f1, 0x1568($s1)
    ctx->pc = 0x27772cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5480), bits); }
label_277730:
    // 0x277730: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x277730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277734:
    // 0x277734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x277734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_277738:
    // 0x277738: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x277738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27773c:
    // 0x27773c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x27773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_277740:
    // 0x277740: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x277740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277744:
    // 0x277744: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x277744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277748:
    // 0x277748: 0x0  nop
    ctx->pc = 0x277748u;
    // NOP
label_27774c:
    // 0x27774c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277750:
    if (ctx->pc == 0x277750u) {
        ctx->pc = 0x277750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27774Cu;
        // 0x277750: 0x26230490  addiu       $v1, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277754u;
        goto label_277754;
    }
    ctx->pc = 0x27774Cu;
    {
        const bool branch_taken_0x27774c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27774Cu;
        // 0x277750: 0x26230490  addiu       $v1, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27774c) {
            ctx->pc = 0x277764u;
            goto label_277764;
        }
    }
    ctx->pc = 0x277754u;
label_277754:
    // 0x277754: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x277754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_277758:
    // 0x277758: 0xae201568  sw          $zero, 0x1568($s1)
    ctx->pc = 0x277758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 0));
label_27775c:
    // 0x27775c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x27775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_277760:
    // 0x277760: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x277760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_277764:
    // 0x277764: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_277768:
    if (ctx->pc == 0x277768u) {
        ctx->pc = 0x277768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277764u;
        // 0x277768: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27776Cu;
        goto label_27776c;
    }
    ctx->pc = 0x277764u;
    {
        const bool branch_taken_0x277764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x277768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277764u;
        // 0x277768: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277764) {
            ctx->pc = 0x277788u;
            goto label_277788;
        }
    }
    ctx->pc = 0x27776Cu;
label_27776c:
    // 0x27776c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277770:
    // 0x277770: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x277770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_277774:
    // 0x277774: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x277774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277778:
    // 0x277778: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x277778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27777c:
    // 0x27777c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277780:
    // 0x277780: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x277780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_277784:
    // 0x277784: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x277784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_277788:
    // 0x277788: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x277788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27778c:
    // 0x27778c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x27778cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_277790:
    // 0x277790: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x277790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_277794:
    // 0x277794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x277794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_277798:
    // 0x277798: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x277798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27779c:
    // 0x27779c: 0x3e00008  jr          $ra
label_2777a0:
    if (ctx->pc == 0x2777A0u) {
        ctx->pc = 0x2777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27779Cu;
        // 0x2777a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777A4u;
        goto label_2777a4;
    }
    ctx->pc = 0x27779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27779Cu;
        // 0x2777a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2777A4u;
label_2777a4:
    // 0x2777a4: 0x0  nop
    ctx->pc = 0x2777a4u;
    // NOP
    ctx->pc = 0x2777a8u;
}
