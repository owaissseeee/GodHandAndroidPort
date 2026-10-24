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

// Function: func_002376D0
// Address: 0x2376d0 - 0x237ab0
void func_002376D0_0x2376d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002376D0_0x2376d0");
#endif

    switch (ctx->pc) {
        case 0x2376d0u: goto label_2376d0;
        case 0x2376d4u: goto label_2376d4;
        case 0x2376d8u: goto label_2376d8;
        case 0x2376dcu: goto label_2376dc;
        case 0x2376e0u: goto label_2376e0;
        case 0x2376e4u: goto label_2376e4;
        case 0x2376e8u: goto label_2376e8;
        case 0x2376ecu: goto label_2376ec;
        case 0x2376f0u: goto label_2376f0;
        case 0x2376f4u: goto label_2376f4;
        case 0x2376f8u: goto label_2376f8;
        case 0x2376fcu: goto label_2376fc;
        case 0x237700u: goto label_237700;
        case 0x237704u: goto label_237704;
        case 0x237708u: goto label_237708;
        case 0x23770cu: goto label_23770c;
        case 0x237710u: goto label_237710;
        case 0x237714u: goto label_237714;
        case 0x237718u: goto label_237718;
        case 0x23771cu: goto label_23771c;
        case 0x237720u: goto label_237720;
        case 0x237724u: goto label_237724;
        case 0x237728u: goto label_237728;
        case 0x23772cu: goto label_23772c;
        case 0x237730u: goto label_237730;
        case 0x237734u: goto label_237734;
        case 0x237738u: goto label_237738;
        case 0x23773cu: goto label_23773c;
        case 0x237740u: goto label_237740;
        case 0x237744u: goto label_237744;
        case 0x237748u: goto label_237748;
        case 0x23774cu: goto label_23774c;
        case 0x237750u: goto label_237750;
        case 0x237754u: goto label_237754;
        case 0x237758u: goto label_237758;
        case 0x23775cu: goto label_23775c;
        case 0x237760u: goto label_237760;
        case 0x237764u: goto label_237764;
        case 0x237768u: goto label_237768;
        case 0x23776cu: goto label_23776c;
        case 0x237770u: goto label_237770;
        case 0x237774u: goto label_237774;
        case 0x237778u: goto label_237778;
        case 0x23777cu: goto label_23777c;
        case 0x237780u: goto label_237780;
        case 0x237784u: goto label_237784;
        case 0x237788u: goto label_237788;
        case 0x23778cu: goto label_23778c;
        case 0x237790u: goto label_237790;
        case 0x237794u: goto label_237794;
        case 0x237798u: goto label_237798;
        case 0x23779cu: goto label_23779c;
        case 0x2377a0u: goto label_2377a0;
        case 0x2377a4u: goto label_2377a4;
        case 0x2377a8u: goto label_2377a8;
        case 0x2377acu: goto label_2377ac;
        case 0x2377b0u: goto label_2377b0;
        case 0x2377b4u: goto label_2377b4;
        case 0x2377b8u: goto label_2377b8;
        case 0x2377bcu: goto label_2377bc;
        case 0x2377c0u: goto label_2377c0;
        case 0x2377c4u: goto label_2377c4;
        case 0x2377c8u: goto label_2377c8;
        case 0x2377ccu: goto label_2377cc;
        case 0x2377d0u: goto label_2377d0;
        case 0x2377d4u: goto label_2377d4;
        case 0x2377d8u: goto label_2377d8;
        case 0x2377dcu: goto label_2377dc;
        case 0x2377e0u: goto label_2377e0;
        case 0x2377e4u: goto label_2377e4;
        case 0x2377e8u: goto label_2377e8;
        case 0x2377ecu: goto label_2377ec;
        case 0x2377f0u: goto label_2377f0;
        case 0x2377f4u: goto label_2377f4;
        case 0x2377f8u: goto label_2377f8;
        case 0x2377fcu: goto label_2377fc;
        case 0x237800u: goto label_237800;
        case 0x237804u: goto label_237804;
        case 0x237808u: goto label_237808;
        case 0x23780cu: goto label_23780c;
        case 0x237810u: goto label_237810;
        case 0x237814u: goto label_237814;
        case 0x237818u: goto label_237818;
        case 0x23781cu: goto label_23781c;
        case 0x237820u: goto label_237820;
        case 0x237824u: goto label_237824;
        case 0x237828u: goto label_237828;
        case 0x23782cu: goto label_23782c;
        case 0x237830u: goto label_237830;
        case 0x237834u: goto label_237834;
        case 0x237838u: goto label_237838;
        case 0x23783cu: goto label_23783c;
        case 0x237840u: goto label_237840;
        case 0x237844u: goto label_237844;
        case 0x237848u: goto label_237848;
        case 0x23784cu: goto label_23784c;
        case 0x237850u: goto label_237850;
        case 0x237854u: goto label_237854;
        case 0x237858u: goto label_237858;
        case 0x23785cu: goto label_23785c;
        case 0x237860u: goto label_237860;
        case 0x237864u: goto label_237864;
        case 0x237868u: goto label_237868;
        case 0x23786cu: goto label_23786c;
        case 0x237870u: goto label_237870;
        case 0x237874u: goto label_237874;
        case 0x237878u: goto label_237878;
        case 0x23787cu: goto label_23787c;
        case 0x237880u: goto label_237880;
        case 0x237884u: goto label_237884;
        case 0x237888u: goto label_237888;
        case 0x23788cu: goto label_23788c;
        case 0x237890u: goto label_237890;
        case 0x237894u: goto label_237894;
        case 0x237898u: goto label_237898;
        case 0x23789cu: goto label_23789c;
        case 0x2378a0u: goto label_2378a0;
        case 0x2378a4u: goto label_2378a4;
        case 0x2378a8u: goto label_2378a8;
        case 0x2378acu: goto label_2378ac;
        case 0x2378b0u: goto label_2378b0;
        case 0x2378b4u: goto label_2378b4;
        case 0x2378b8u: goto label_2378b8;
        case 0x2378bcu: goto label_2378bc;
        case 0x2378c0u: goto label_2378c0;
        case 0x2378c4u: goto label_2378c4;
        case 0x2378c8u: goto label_2378c8;
        case 0x2378ccu: goto label_2378cc;
        case 0x2378d0u: goto label_2378d0;
        case 0x2378d4u: goto label_2378d4;
        case 0x2378d8u: goto label_2378d8;
        case 0x2378dcu: goto label_2378dc;
        case 0x2378e0u: goto label_2378e0;
        case 0x2378e4u: goto label_2378e4;
        case 0x2378e8u: goto label_2378e8;
        case 0x2378ecu: goto label_2378ec;
        case 0x2378f0u: goto label_2378f0;
        case 0x2378f4u: goto label_2378f4;
        case 0x2378f8u: goto label_2378f8;
        case 0x2378fcu: goto label_2378fc;
        case 0x237900u: goto label_237900;
        case 0x237904u: goto label_237904;
        case 0x237908u: goto label_237908;
        case 0x23790cu: goto label_23790c;
        case 0x237910u: goto label_237910;
        case 0x237914u: goto label_237914;
        case 0x237918u: goto label_237918;
        case 0x23791cu: goto label_23791c;
        case 0x237920u: goto label_237920;
        case 0x237924u: goto label_237924;
        case 0x237928u: goto label_237928;
        case 0x23792cu: goto label_23792c;
        case 0x237930u: goto label_237930;
        case 0x237934u: goto label_237934;
        case 0x237938u: goto label_237938;
        case 0x23793cu: goto label_23793c;
        case 0x237940u: goto label_237940;
        case 0x237944u: goto label_237944;
        case 0x237948u: goto label_237948;
        case 0x23794cu: goto label_23794c;
        case 0x237950u: goto label_237950;
        case 0x237954u: goto label_237954;
        case 0x237958u: goto label_237958;
        case 0x23795cu: goto label_23795c;
        case 0x237960u: goto label_237960;
        case 0x237964u: goto label_237964;
        case 0x237968u: goto label_237968;
        case 0x23796cu: goto label_23796c;
        case 0x237970u: goto label_237970;
        case 0x237974u: goto label_237974;
        case 0x237978u: goto label_237978;
        case 0x23797cu: goto label_23797c;
        case 0x237980u: goto label_237980;
        case 0x237984u: goto label_237984;
        case 0x237988u: goto label_237988;
        case 0x23798cu: goto label_23798c;
        case 0x237990u: goto label_237990;
        case 0x237994u: goto label_237994;
        case 0x237998u: goto label_237998;
        case 0x23799cu: goto label_23799c;
        case 0x2379a0u: goto label_2379a0;
        case 0x2379a4u: goto label_2379a4;
        case 0x2379a8u: goto label_2379a8;
        case 0x2379acu: goto label_2379ac;
        case 0x2379b0u: goto label_2379b0;
        case 0x2379b4u: goto label_2379b4;
        case 0x2379b8u: goto label_2379b8;
        case 0x2379bcu: goto label_2379bc;
        case 0x2379c0u: goto label_2379c0;
        case 0x2379c4u: goto label_2379c4;
        case 0x2379c8u: goto label_2379c8;
        case 0x2379ccu: goto label_2379cc;
        case 0x2379d0u: goto label_2379d0;
        case 0x2379d4u: goto label_2379d4;
        case 0x2379d8u: goto label_2379d8;
        case 0x2379dcu: goto label_2379dc;
        case 0x2379e0u: goto label_2379e0;
        case 0x2379e4u: goto label_2379e4;
        case 0x2379e8u: goto label_2379e8;
        case 0x2379ecu: goto label_2379ec;
        case 0x2379f0u: goto label_2379f0;
        case 0x2379f4u: goto label_2379f4;
        case 0x2379f8u: goto label_2379f8;
        case 0x2379fcu: goto label_2379fc;
        case 0x237a00u: goto label_237a00;
        case 0x237a04u: goto label_237a04;
        case 0x237a08u: goto label_237a08;
        case 0x237a0cu: goto label_237a0c;
        case 0x237a10u: goto label_237a10;
        case 0x237a14u: goto label_237a14;
        case 0x237a18u: goto label_237a18;
        case 0x237a1cu: goto label_237a1c;
        case 0x237a20u: goto label_237a20;
        case 0x237a24u: goto label_237a24;
        case 0x237a28u: goto label_237a28;
        case 0x237a2cu: goto label_237a2c;
        case 0x237a30u: goto label_237a30;
        case 0x237a34u: goto label_237a34;
        case 0x237a38u: goto label_237a38;
        case 0x237a3cu: goto label_237a3c;
        case 0x237a40u: goto label_237a40;
        case 0x237a44u: goto label_237a44;
        case 0x237a48u: goto label_237a48;
        case 0x237a4cu: goto label_237a4c;
        case 0x237a50u: goto label_237a50;
        case 0x237a54u: goto label_237a54;
        case 0x237a58u: goto label_237a58;
        case 0x237a5cu: goto label_237a5c;
        case 0x237a60u: goto label_237a60;
        case 0x237a64u: goto label_237a64;
        case 0x237a68u: goto label_237a68;
        case 0x237a6cu: goto label_237a6c;
        case 0x237a70u: goto label_237a70;
        case 0x237a74u: goto label_237a74;
        case 0x237a78u: goto label_237a78;
        case 0x237a7cu: goto label_237a7c;
        case 0x237a80u: goto label_237a80;
        case 0x237a84u: goto label_237a84;
        case 0x237a88u: goto label_237a88;
        case 0x237a8cu: goto label_237a8c;
        case 0x237a90u: goto label_237a90;
        case 0x237a94u: goto label_237a94;
        case 0x237a98u: goto label_237a98;
        case 0x237a9cu: goto label_237a9c;
        case 0x237aa0u: goto label_237aa0;
        case 0x237aa4u: goto label_237aa4;
        case 0x237aa8u: goto label_237aa8;
        case 0x237aacu: goto label_237aac;
        default: break;
    }

    ctx->pc = 0x2376d0u;

label_2376d0:
    // 0x2376d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2376d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2376d4:
    // 0x2376d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2376d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2376d8:
    // 0x2376d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2376d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2376dc:
    // 0x2376dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2376dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2376e0:
    // 0x2376e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2376e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2376e4:
    // 0x2376e4: 0xc0b6dac  jal         func_2DB6B0
label_2376e8:
    if (ctx->pc == 0x2376E8u) {
        ctx->pc = 0x2376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376E4u;
        // 0x2376e8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2376ECu;
        goto label_2376ec;
    }
    ctx->pc = 0x2376E4u;
    SET_GPR_U32(ctx, 31, 0x2376ECu);
    ctx->pc = 0x2376E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376E4u;
    // 0x2376e8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2376E4u, 0x2376ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376ECu;
label_2376ec:
    // 0x2376ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2376ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2376f0:
    // 0x2376f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2376f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2376f4:
    // 0x2376f4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2376f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_2376f8:
    // 0x2376f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2376f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2376fc:
    // 0x2376fc: 0xc04d476  jal         func_1351D8
label_237700:
    if (ctx->pc == 0x237700u) {
        ctx->pc = 0x237700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376FCu;
        // 0x237700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237704u;
        goto label_237704;
    }
    ctx->pc = 0x2376FCu;
    SET_GPR_U32(ctx, 31, 0x237704u);
    ctx->pc = 0x237700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376FCu;
    // 0x237700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2376FCu, 0x237704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237704u;
label_237704:
    // 0x237704: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x237704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_237708:
    // 0x237708: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x237708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_23770c:
    // 0x23770c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x23770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_237710:
    // 0x237710: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x237710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_237714:
    // 0x237714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237718:
    // 0x237718: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23771c:
    // 0x23771c: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x23771cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237720:
    // 0x237720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237724:
    // 0x237724: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x237724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
label_237728:
    // 0x237728: 0x10a40039  beq         $a1, $a0, . + 4 + (0x39 << 2)
label_23772c:
    if (ctx->pc == 0x23772Cu) {
        ctx->pc = 0x23772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237728u;
        // 0x23772c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x237730u;
        goto label_237730;
    }
    ctx->pc = 0x237728u;
    {
        const bool branch_taken_0x237728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x23772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237728u;
        // 0x23772c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237728) {
            ctx->pc = 0x237810u;
            goto label_237810;
        }
    }
    ctx->pc = 0x237730u;
label_237730:
    // 0x237730: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x237730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_237734:
    // 0x237734: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237738:
    if (ctx->pc == 0x237738u) {
        ctx->pc = 0x237738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237734u;
        // 0x237738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23773Cu;
        goto label_23773c;
    }
    ctx->pc = 0x237734u;
    {
        const bool branch_taken_0x237734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237734) {
            ctx->pc = 0x237738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237734u;
            // 0x237738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23774Cu;
            goto label_23774c;
        }
    }
    ctx->pc = 0x23773Cu;
label_23773c:
    // 0x23773c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_237740:
    if (ctx->pc == 0x237740u) {
        ctx->pc = 0x237740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23773Cu;
        // 0x237740: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237744u;
        goto label_237744;
    }
    ctx->pc = 0x23773Cu;
    {
        const bool branch_taken_0x23773c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23773c) {
            ctx->pc = 0x237740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23773Cu;
            // 0x237740: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237764u;
            goto label_237764;
        }
    }
    ctx->pc = 0x237744u;
label_237744:
    // 0x237744: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_237748:
    if (ctx->pc == 0x237748u) {
        ctx->pc = 0x237748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237744u;
        // 0x237748: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23774Cu;
        goto label_23774c;
    }
    ctx->pc = 0x237744u;
    {
        const bool branch_taken_0x237744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237744u;
        // 0x237748: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237744) {
            ctx->pc = 0x237A98u;
            goto label_237a98;
        }
    }
    ctx->pc = 0x23774Cu;
label_23774c:
    // 0x23774c: 0x10a200b0  beq         $a1, $v0, . + 4 + (0xB0 << 2)
label_237750:
    if (ctx->pc == 0x237750u) {
        ctx->pc = 0x237750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23774Cu;
        // 0x237750: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237754u;
        goto label_237754;
    }
    ctx->pc = 0x23774Cu;
    {
        const bool branch_taken_0x23774c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x237750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23774Cu;
        // 0x237750: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23774c) {
            ctx->pc = 0x237A10u;
            goto label_237a10;
        }
    }
    ctx->pc = 0x237754u;
label_237754:
    // 0x237754: 0x10a200bf  beq         $a1, $v0, . + 4 + (0xBF << 2)
label_237758:
    if (ctx->pc == 0x237758u) {
        ctx->pc = 0x23775Cu;
        goto label_23775c;
    }
    ctx->pc = 0x237754u;
    {
        const bool branch_taken_0x237754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x237754) {
            ctx->pc = 0x237A54u;
            goto label_237a54;
        }
    }
    ctx->pc = 0x23775Cu;
label_23775c:
    // 0x23775c: 0x100000ce  b           . + 4 + (0xCE << 2)
label_237760:
    if (ctx->pc == 0x237760u) {
        ctx->pc = 0x237760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23775Cu;
        // 0x237760: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237764u;
        goto label_237764;
    }
    ctx->pc = 0x23775Cu;
    {
        const bool branch_taken_0x23775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23775Cu;
        // 0x237760: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23775c) {
            ctx->pc = 0x237A98u;
            goto label_237a98;
        }
    }
    ctx->pc = 0x237764u;
label_237764:
    // 0x237764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237768:
    // 0x237768: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_23776c:
    // 0x23776c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23776cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237770:
    // 0x237770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237774:
    // 0x237774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237778:
    // 0x237778: 0x8c4520fc  lw          $a1, 0x20FC($v0)
    ctx->pc = 0x237778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8444)));
label_23777c:
    // 0x23777c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23777cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237780:
    // 0x237780: 0x8c462100  lw          $a2, 0x2100($v0)
    ctx->pc = 0x237780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8448)));
label_237784:
    // 0x237784: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_237788:
    // 0x237788: 0xc0aa15e  jal         func_2A8578
label_23778c:
    if (ctx->pc == 0x23778Cu) {
        ctx->pc = 0x23778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237788u;
        // 0x23778c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237790u;
        goto label_237790;
    }
    ctx->pc = 0x237788u;
    SET_GPR_U32(ctx, 31, 0x237790u);
    ctx->pc = 0x23778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237788u;
    // 0x23778c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x237788u, 0x237790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237790u;
label_237790:
    // 0x237790: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x237790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_237794:
    // 0x237794: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x237794u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
label_237798:
    // 0x237798: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_23779c:
    // 0x23779c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x23779cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_2377a0:
    // 0x2377a0: 0xc07e804  jal         func_1FA010
label_2377a4:
    if (ctx->pc == 0x2377A4u) {
        ctx->pc = 0x2377A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377A0u;
        // 0x2377a4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377A8u;
        goto label_2377a8;
    }
    ctx->pc = 0x2377A0u;
    SET_GPR_U32(ctx, 31, 0x2377A8u);
    ctx->pc = 0x2377A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377A0u;
    // 0x2377a4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2377A0u, 0x2377A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377A8u;
label_2377a8:
    // 0x2377a8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2377ac:
    // 0x2377ac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2377acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2377b0:
    // 0x2377b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2377b4:
    if (ctx->pc == 0x2377B4u) {
        ctx->pc = 0x2377B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377B0u;
        // 0x2377b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377B8u;
        goto label_2377b8;
    }
    ctx->pc = 0x2377B0u;
    {
        const bool branch_taken_0x2377b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377B0u;
        // 0x2377b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377b0) {
            ctx->pc = 0x2377D0u;
            goto label_2377d0;
        }
    }
    ctx->pc = 0x2377B8u;
label_2377b8:
    // 0x2377b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2377b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2377bc:
    // 0x2377bc: 0x2442a300  addiu       $v0, $v0, -0x5D00
    ctx->pc = 0x2377bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943488));
label_2377c0:
    // 0x2377c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2377c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2377c4:
    // 0x2377c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2377c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2377c8:
    // 0x2377c8: 0x800008  jr          $a0
label_2377cc:
    if (ctx->pc == 0x2377CCu) {
        ctx->pc = 0x2377D0u;
        goto label_2377d0;
    }
    ctx->pc = 0x2377C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2377D0u: goto label_2377d0;
            case 0x2377D8u: goto label_2377d8;
            case 0x2377E0u: goto label_2377e0;
            case 0x2377E8u: goto label_2377e8;
            case 0x2377F0u: goto label_2377f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2377D0u;
label_2377d0:
    // 0x2377d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2377d4:
    if (ctx->pc == 0x2377D4u) {
        ctx->pc = 0x2377D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D0u;
        // 0x2377d4: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377D8u;
        goto label_2377d8;
    }
    ctx->pc = 0x2377D0u;
    {
        const bool branch_taken_0x2377d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D0u;
        // 0x2377d4: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d0) {
            ctx->pc = 0x2377F4u;
            goto label_2377f4;
        }
    }
    ctx->pc = 0x2377D8u;
label_2377d8:
    // 0x2377d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2377dc:
    if (ctx->pc == 0x2377DCu) {
        ctx->pc = 0x2377DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D8u;
        // 0x2377dc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377E0u;
        goto label_2377e0;
    }
    ctx->pc = 0x2377D8u;
    {
        const bool branch_taken_0x2377d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D8u;
        // 0x2377dc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d8) {
            ctx->pc = 0x2377F4u;
            goto label_2377f4;
        }
    }
    ctx->pc = 0x2377E0u;
label_2377e0:
    // 0x2377e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2377e4:
    if (ctx->pc == 0x2377E4u) {
        ctx->pc = 0x2377E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E0u;
        // 0x2377e4: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377E8u;
        goto label_2377e8;
    }
    ctx->pc = 0x2377E0u;
    {
        const bool branch_taken_0x2377e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E0u;
        // 0x2377e4: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377e0) {
            ctx->pc = 0x2377F4u;
            goto label_2377f4;
        }
    }
    ctx->pc = 0x2377E8u;
label_2377e8:
    // 0x2377e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2377ec:
    if (ctx->pc == 0x2377ECu) {
        ctx->pc = 0x2377ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E8u;
        // 0x2377ec: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377F0u;
        goto label_2377f0;
    }
    ctx->pc = 0x2377E8u;
    {
        const bool branch_taken_0x2377e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E8u;
        // 0x2377ec: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377e8) {
            ctx->pc = 0x2377F4u;
            goto label_2377f4;
        }
    }
    ctx->pc = 0x2377F0u;
label_2377f0:
    // 0x2377f0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2377f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2377f4:
    // 0x2377f4: 0xc0c73f8  jal         func_31CFE0
label_2377f8:
    if (ctx->pc == 0x2377F8u) {
        ctx->pc = 0x2377F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377F4u;
        // 0x2377f8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377FCu;
        goto label_2377fc;
    }
    ctx->pc = 0x2377F4u;
    SET_GPR_U32(ctx, 31, 0x2377FCu);
    ctx->pc = 0x2377F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377F4u;
    // 0x2377f8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2377F4u, 0x2377FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377FCu;
label_2377fc:
    // 0x2377fc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2377fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237800:
    // 0x237800: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x237800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_237804:
    // 0x237804: 0xa602056c  sh          $v0, 0x56C($s0)
    ctx->pc = 0x237804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1388), (uint16_t)GPR_U32(ctx, 2));
label_237808:
    // 0x237808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x237808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23780c:
    // 0x23780c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x23780cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_237810:
    // 0x237810: 0xc055f06  jal         func_157C18
label_237814:
    if (ctx->pc == 0x237814u) {
        ctx->pc = 0x237814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237810u;
        // 0x237814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237818u;
        goto label_237818;
    }
    ctx->pc = 0x237810u;
    SET_GPR_U32(ctx, 31, 0x237818u);
    ctx->pc = 0x237814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237810u;
    // 0x237814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x237810u, 0x237818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237818u;
label_237818:
    // 0x237818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23781c:
    if (ctx->pc == 0x23781Cu) {
        ctx->pc = 0x23781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237818u;
        // 0x23781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237820u;
        goto label_237820;
    }
    ctx->pc = 0x237818u;
    {
        const bool branch_taken_0x237818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237818u;
        // 0x23781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237818) {
            ctx->pc = 0x237830u;
            goto label_237830;
        }
    }
    ctx->pc = 0x237820u;
label_237820:
    // 0x237820: 0xc09d3fa  jal         func_274FE8
label_237824:
    if (ctx->pc == 0x237824u) {
        ctx->pc = 0x237824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237820u;
        // 0x237824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237828u;
        goto label_237828;
    }
    ctx->pc = 0x237820u;
    SET_GPR_U32(ctx, 31, 0x237828u);
    ctx->pc = 0x237824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237820u;
    // 0x237824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x237820u, 0x237828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237828u;
label_237828:
    // 0x237828: 0x1000009b  b           . + 4 + (0x9B << 2)
label_23782c:
    if (ctx->pc == 0x23782Cu) {
        ctx->pc = 0x23782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237828u;
        // 0x23782c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237830u;
        goto label_237830;
    }
    ctx->pc = 0x237828u;
    {
        const bool branch_taken_0x237828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237828u;
        // 0x23782c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237828) {
            ctx->pc = 0x237A98u;
            goto label_237a98;
        }
    }
    ctx->pc = 0x237830u;
label_237830:
    // 0x237830: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237834:
    // 0x237834: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_237838:
    // 0x237838: 0xc053e7c  jal         func_14F9F0
label_23783c:
    if (ctx->pc == 0x23783Cu) {
        ctx->pc = 0x23783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237838u;
        // 0x23783c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237840u;
        goto label_237840;
    }
    ctx->pc = 0x237838u;
    SET_GPR_U32(ctx, 31, 0x237840u);
    ctx->pc = 0x23783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237838u;
    // 0x23783c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237838u, 0x237840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237840u;
label_237840:
    // 0x237840: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x237840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_237844:
    // 0x237844: 0xc053e4a  jal         func_14F928
label_237848:
    if (ctx->pc == 0x237848u) {
        ctx->pc = 0x237848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237844u;
        // 0x237848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23784Cu;
        goto label_23784c;
    }
    ctx->pc = 0x237844u;
    SET_GPR_U32(ctx, 31, 0x23784Cu);
    ctx->pc = 0x237848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237844u;
    // 0x237848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237844u, 0x23784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23784Cu;
label_23784c:
    // 0x23784c: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x23784cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_237850:
    // 0x237850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_237854:
    if (ctx->pc == 0x237854u) {
        ctx->pc = 0x237854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237850u;
        // 0x237854: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237858u;
        goto label_237858;
    }
    ctx->pc = 0x237850u;
    {
        const bool branch_taken_0x237850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237850u;
        // 0x237854: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237850) {
            ctx->pc = 0x237864u;
            goto label_237864;
        }
    }
    ctx->pc = 0x237858u;
label_237858:
    // 0x237858: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x237858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23785c:
    // 0x23785c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_237860:
    if (ctx->pc == 0x237860u) {
        ctx->pc = 0x237860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23785Cu;
        // 0x237860: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237864u;
        goto label_237864;
    }
    ctx->pc = 0x23785Cu;
    {
        const bool branch_taken_0x23785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23785Cu;
        // 0x237860: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23785c) {
            ctx->pc = 0x237988u;
            goto label_237988;
        }
    }
    ctx->pc = 0x237864u;
label_237864:
    // 0x237864: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_237868:
    // 0x237868: 0x58400048  blezl       $v0, . + 4 + (0x48 << 2)
label_23786c:
    if (ctx->pc == 0x23786Cu) {
        ctx->pc = 0x23786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237868u;
        // 0x23786c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237870u;
        goto label_237870;
    }
    ctx->pc = 0x237868u;
    {
        const bool branch_taken_0x237868 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x237868) {
            ctx->pc = 0x23786Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237868u;
            // 0x23786c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x237870u;
label_237870:
    // 0x237870: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_237874:
    // 0x237874: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_237878:
    if (ctx->pc == 0x237878u) {
        ctx->pc = 0x237878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237874u;
        // 0x237878: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23787Cu;
        goto label_23787c;
    }
    ctx->pc = 0x237874u;
    {
        const bool branch_taken_0x237874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237874) {
            ctx->pc = 0x237878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237874u;
            // 0x237878: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x23787Cu;
label_23787c:
    // 0x23787c: 0x8603056c  lh          $v1, 0x56C($s0)
    ctx->pc = 0x23787cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1388)));
label_237880:
    // 0x237880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237884:
    // 0x237884: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_237888:
    if (ctx->pc == 0x237888u) {
        ctx->pc = 0x237888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237884u;
        // 0x237888: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23788Cu;
        goto label_23788c;
    }
    ctx->pc = 0x237884u;
    {
        const bool branch_taken_0x237884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237884u;
        // 0x237888: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237884) {
            ctx->pc = 0x2378D8u;
            goto label_2378d8;
        }
    }
    ctx->pc = 0x23788Cu;
label_23788c:
    // 0x23788c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_237890:
    if (ctx->pc == 0x237890u) {
        ctx->pc = 0x237890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23788Cu;
        // 0x237890: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237894u;
        goto label_237894;
    }
    ctx->pc = 0x23788Cu;
    {
        const bool branch_taken_0x23788c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23788c) {
            ctx->pc = 0x237890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23788Cu;
            // 0x237890: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378A8u;
            goto label_2378a8;
        }
    }
    ctx->pc = 0x237894u;
label_237894:
    // 0x237894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x237894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237898:
    // 0x237898: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_23789c:
    if (ctx->pc == 0x23789Cu) {
        ctx->pc = 0x23789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237898u;
        // 0x23789c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378A0u;
        goto label_2378a0;
    }
    ctx->pc = 0x237898u;
    {
        const bool branch_taken_0x237898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237898u;
        // 0x23789c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237898) {
            ctx->pc = 0x23790Cu;
            goto label_23790c;
        }
    }
    ctx->pc = 0x2378A0u;
label_2378a0:
    // 0x2378a0: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_2378a4:
    if (ctx->pc == 0x2378A4u) {
        ctx->pc = 0x2378A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A0u;
        // 0x2378a4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378A8u;
        goto label_2378a8;
    }
    ctx->pc = 0x2378A0u;
    {
        const bool branch_taken_0x2378a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2378A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A0u;
        // 0x2378a4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a0) {
            ctx->pc = 0x237950u;
            goto label_237950;
        }
    }
    ctx->pc = 0x2378A8u;
label_2378a8:
    // 0x2378a8: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x2378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_2378ac:
    // 0x2378ac: 0x304200d0  andi        $v0, $v0, 0xD0
    ctx->pc = 0x2378acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)208);
label_2378b0:
    // 0x2378b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2378b4:
    if (ctx->pc == 0x2378B4u) {
        ctx->pc = 0x2378B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378B0u;
        // 0x2378b4: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378B8u;
        goto label_2378b8;
    }
    ctx->pc = 0x2378B0u;
    {
        const bool branch_taken_0x2378b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2378b0) {
            ctx->pc = 0x2378B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2378B0u;
            // 0x2378b4: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378B8u;
            goto label_2378b8;
        }
    }
    ctx->pc = 0x2378B8u;
label_2378b8:
    // 0x2378b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2378bc:
    // 0x2378bc: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x2378bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_2378c0:
    // 0x2378c0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2378c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2378c4:
    // 0x2378c4: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x2378c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_2378c8:
    // 0x2378c8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2378cc:
    // 0x2378cc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2378ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2378d0:
    // 0x2378d0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2378d4:
    if (ctx->pc == 0x2378D4u) {
        ctx->pc = 0x2378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378D0u;
        // 0x2378d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378D8u;
        goto label_2378d8;
    }
    ctx->pc = 0x2378D0u;
    {
        const bool branch_taken_0x2378d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378D0u;
        // 0x2378d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378d0) {
            ctx->pc = 0x23793Cu;
            goto label_23793c;
        }
    }
    ctx->pc = 0x2378D8u;
label_2378d8:
    // 0x2378d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2378dc:
    // 0x2378dc: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_2378e0:
    // 0x2378e0: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x2378e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
label_2378e4:
    // 0x2378e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2378e8:
    if (ctx->pc == 0x2378E8u) {
        ctx->pc = 0x2378E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378E4u;
        // 0x2378e8: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378ECu;
        goto label_2378ec;
    }
    ctx->pc = 0x2378E4u;
    {
        const bool branch_taken_0x2378e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2378e4) {
            ctx->pc = 0x2378E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2378E4u;
            // 0x2378e8: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378ECu;
            goto label_2378ec;
        }
    }
    ctx->pc = 0x2378ECu;
label_2378ec:
    // 0x2378ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2378ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2378f0:
    // 0x2378f0: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x2378f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_2378f4:
    // 0x2378f4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2378f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2378f8:
    // 0x2378f8: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x2378f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_2378fc:
    // 0x2378fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2378fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237900:
    // 0x237900: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237904:
    // 0x237904: 0x1000000d  b           . + 4 + (0xD << 2)
label_237908:
    if (ctx->pc == 0x237908u) {
        ctx->pc = 0x237908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237904u;
        // 0x237908: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23790Cu;
        goto label_23790c;
    }
    ctx->pc = 0x237904u;
    {
        const bool branch_taken_0x237904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237904u;
        // 0x237908: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237904) {
            ctx->pc = 0x23793Cu;
            goto label_23793c;
        }
    }
    ctx->pc = 0x23790Cu;
label_23790c:
    // 0x23790c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_237910:
    // 0x237910: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_237914:
    // 0x237914: 0x304200b0  andi        $v0, $v0, 0xB0
    ctx->pc = 0x237914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)176);
label_237918:
    // 0x237918: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23791c:
    if (ctx->pc == 0x23791Cu) {
        ctx->pc = 0x23791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237918u;
        // 0x23791c: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237920u;
        goto label_237920;
    }
    ctx->pc = 0x237918u;
    {
        const bool branch_taken_0x237918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237918) {
            ctx->pc = 0x23791Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237918u;
            // 0x23791c: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237920u;
            goto label_237920;
        }
    }
    ctx->pc = 0x237920u;
label_237920:
    // 0x237920: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237924:
    // 0x237924: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x237924u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_237928:
    // 0x237928: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x237928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_23792c:
    // 0x23792c: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x23792cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_237930:
    // 0x237930: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x237930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237934:
    // 0x237934: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237938:
    // 0x237938: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23793c:
    // 0x23793c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x23793cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237940:
    // 0x237940: 0xc07de16  jal         func_1F7858
label_237944:
    if (ctx->pc == 0x237944u) {
        ctx->pc = 0x237944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237940u;
        // 0x237944: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237948u;
        goto label_237948;
    }
    ctx->pc = 0x237940u;
    SET_GPR_U32(ctx, 31, 0x237948u);
    ctx->pc = 0x237944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237940u;
    // 0x237944: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x237940u, 0x237948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237948u;
label_237948:
    // 0x237948: 0x10000010  b           . + 4 + (0x10 << 2)
label_23794c:
    if (ctx->pc == 0x23794Cu) {
        ctx->pc = 0x23794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237948u;
        // 0x23794c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237950u;
        goto label_237950;
    }
    ctx->pc = 0x237948u;
    {
        const bool branch_taken_0x237948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237948u;
        // 0x23794c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237948) {
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x237950u;
label_237950:
    // 0x237950: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x237950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_237954:
    // 0x237954: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x237954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_237958:
    // 0x237958: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23795c:
    if (ctx->pc == 0x23795Cu) {
        ctx->pc = 0x23795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237958u;
        // 0x23795c: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237960u;
        goto label_237960;
    }
    ctx->pc = 0x237958u;
    {
        const bool branch_taken_0x237958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237958) {
            ctx->pc = 0x23795Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237958u;
            // 0x23795c: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237960u;
            goto label_237960;
        }
    }
    ctx->pc = 0x237960u;
label_237960:
    // 0x237960: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237964:
    // 0x237964: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x237964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_237968:
    // 0x237968: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_23796c:
    // 0x23796c: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x23796cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_237970:
    // 0x237970: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x237970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237974:
    // 0x237974: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237978:
    // 0x237978: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x237978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23797c:
    // 0x23797c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x23797cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237980:
    // 0x237980: 0xc07de16  jal         func_1F7858
label_237984:
    if (ctx->pc == 0x237984u) {
        ctx->pc = 0x237984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237980u;
        // 0x237984: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237988u;
        goto label_237988;
    }
    ctx->pc = 0x237980u;
    SET_GPR_U32(ctx, 31, 0x237988u);
    ctx->pc = 0x237984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237980u;
    // 0x237984: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x237980u, 0x237988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237988u;
label_237988:
    // 0x237988: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x237988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_23798c:
    // 0x23798c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_237990:
    // 0x237990: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_237994:
    if (ctx->pc == 0x237994u) {
        ctx->pc = 0x237994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237990u;
        // 0x237994: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237998u;
        goto label_237998;
    }
    ctx->pc = 0x237990u;
    {
        const bool branch_taken_0x237990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237990u;
        // 0x237994: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237990) {
            ctx->pc = 0x2379C8u;
            goto label_2379c8;
        }
    }
    ctx->pc = 0x237998u;
label_237998:
    // 0x237998: 0x86030568  lh          $v1, 0x568($s0)
    ctx->pc = 0x237998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_23799c:
    // 0x23799c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2379a0:
    if (ctx->pc == 0x2379A0u) {
        ctx->pc = 0x2379A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23799Cu;
        // 0x2379a0: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379A4u;
        goto label_2379a4;
    }
    ctx->pc = 0x23799Cu;
    {
        const bool branch_taken_0x23799c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23799Cu;
        // 0x2379a0: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23799c) {
            ctx->pc = 0x2379B0u;
            goto label_2379b0;
        }
    }
    ctx->pc = 0x2379A4u;
label_2379a4:
    // 0x2379a4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2379a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_2379a8:
    // 0x2379a8: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_2379ac:
    if (ctx->pc == 0x2379ACu) {
        ctx->pc = 0x2379ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379A8u;
        // 0x2379ac: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379B0u;
        goto label_2379b0;
    }
    ctx->pc = 0x2379A8u;
    {
        const bool branch_taken_0x2379a8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2379a8) {
            ctx->pc = 0x2379ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379A8u;
            // 0x2379ac: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2379CCu;
            goto label_2379cc;
        }
    }
    ctx->pc = 0x2379B0u;
label_2379b0:
    // 0x2379b0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2379b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2379b4:
    // 0x2379b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2379b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2379b8:
    // 0x2379b8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2379b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2379bc:
    // 0x2379bc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2379bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2379c0:
    // 0x2379c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2379c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2379c4:
    // 0x2379c4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2379c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2379c8:
    // 0x2379c8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2379c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2379cc:
    // 0x2379cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2379ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2379d0:
    // 0x2379d0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2379d4:
    if (ctx->pc == 0x2379D4u) {
        ctx->pc = 0x2379D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379D0u;
        // 0x2379d4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379D8u;
        goto label_2379d8;
    }
    ctx->pc = 0x2379D0u;
    {
        const bool branch_taken_0x2379d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379D0u;
        // 0x2379d4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379d0) {
            ctx->pc = 0x237A94u;
            goto label_237a94;
        }
    }
    ctx->pc = 0x2379D8u;
label_2379d8:
    // 0x2379d8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x2379d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2379dc:
    // 0x2379dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2379dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2379e0:
    // 0x2379e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2379e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2379e4:
    // 0x2379e4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x2379e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2379e8:
    // 0x2379e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2379e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2379ec:
    // 0x2379ec: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2379ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2379f0:
    // 0x2379f0: 0x40f809  jalr        $v0
label_2379f4:
    if (ctx->pc == 0x2379F4u) {
        ctx->pc = 0x2379F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379F0u;
        // 0x2379f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379F8u;
        goto label_2379f8;
    }
    ctx->pc = 0x2379F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2379F8u);
        ctx->pc = 0x2379F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379F0u;
        // 0x2379f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2379F0u, 0x2379F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2379F8u;
label_2379f8:
    // 0x2379f8: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x2379f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_2379fc:
    // 0x2379fc: 0x5c600026  bgtzl       $v1, . + 4 + (0x26 << 2)
label_237a00:
    if (ctx->pc == 0x237A00u) {
        ctx->pc = 0x237A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379FCu;
        // 0x237a00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A04u;
        goto label_237a04;
    }
    ctx->pc = 0x2379FCu;
    {
        const bool branch_taken_0x2379fc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2379fc) {
            ctx->pc = 0x237A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379FCu;
            // 0x237a00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A98u;
            goto label_237a98;
        }
    }
    ctx->pc = 0x237A04u;
label_237a04:
    // 0x237a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237a08:
    // 0x237a08: 0x10000022  b           . + 4 + (0x22 << 2)
label_237a0c:
    if (ctx->pc == 0x237A0Cu) {
        ctx->pc = 0x237A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A08u;
        // 0x237a0c: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A10u;
        goto label_237a10;
    }
    ctx->pc = 0x237A08u;
    {
        const bool branch_taken_0x237a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A08u;
        // 0x237a0c: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a08) {
            ctx->pc = 0x237A94u;
            goto label_237a94;
        }
    }
    ctx->pc = 0x237A10u;
label_237a10:
    // 0x237a10: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x237a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_237a14:
    // 0x237a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237a18:
    // 0x237a18: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_237a1c:
    // 0x237a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237a20:
    // 0x237a20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237a24:
    // 0x237a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237a28:
    // 0x237a28: 0x8c452104  lw          $a1, 0x2104($v0)
    ctx->pc = 0x237a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8452)));
label_237a2c:
    // 0x237a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237a30:
    // 0x237a30: 0x8c462108  lw          $a2, 0x2108($v0)
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8456)));
label_237a34:
    // 0x237a34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_237a38:
    // 0x237a38: 0xc0aa15e  jal         func_2A8578
label_237a3c:
    if (ctx->pc == 0x237A3Cu) {
        ctx->pc = 0x237A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A38u;
        // 0x237a3c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A40u;
        goto label_237a40;
    }
    ctx->pc = 0x237A38u;
    SET_GPR_U32(ctx, 31, 0x237A40u);
    ctx->pc = 0x237A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A38u;
    // 0x237a3c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x237A38u, 0x237A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A40u;
label_237a40:
    // 0x237a40: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x237a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237a44:
    // 0x237a44: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x237a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_237a48:
    // 0x237a48: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x237a48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
label_237a4c:
    // 0x237a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_237a50:
    // 0x237a50: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x237a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_237a54:
    // 0x237a54: 0xc055f06  jal         func_157C18
label_237a58:
    if (ctx->pc == 0x237A58u) {
        ctx->pc = 0x237A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A54u;
        // 0x237a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A5Cu;
        goto label_237a5c;
    }
    ctx->pc = 0x237A54u;
    SET_GPR_U32(ctx, 31, 0x237A5Cu);
    ctx->pc = 0x237A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A54u;
    // 0x237a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x237A54u, 0x237A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A5Cu;
label_237a5c:
    // 0x237a5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_237a60:
    if (ctx->pc == 0x237A60u) {
        ctx->pc = 0x237A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A5Cu;
        // 0x237a60: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A64u;
        goto label_237a64;
    }
    ctx->pc = 0x237A5Cu;
    {
        const bool branch_taken_0x237a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A5Cu;
        // 0x237a60: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a5c) {
            ctx->pc = 0x237A74u;
            goto label_237a74;
        }
    }
    ctx->pc = 0x237A64u;
label_237a64:
    // 0x237a64: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x237a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_237a68:
    // 0x237a68: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x237a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_237a6c:
    // 0x237a6c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x237a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_237a70:
    // 0x237a70: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x237a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_237a74:
    // 0x237a74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237a78:
    // 0x237a78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_237a7c:
    // 0x237a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237a80:
    // 0x237a80: 0xc053e7c  jal         func_14F9F0
label_237a84:
    if (ctx->pc == 0x237A84u) {
        ctx->pc = 0x237A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A80u;
        // 0x237a84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A88u;
        goto label_237a88;
    }
    ctx->pc = 0x237A80u;
    SET_GPR_U32(ctx, 31, 0x237A88u);
    ctx->pc = 0x237A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A80u;
    // 0x237a84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237A80u, 0x237A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A88u;
label_237a88:
    // 0x237a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237a8c:
    // 0x237a8c: 0xc053e4a  jal         func_14F928
label_237a90:
    if (ctx->pc == 0x237A90u) {
        ctx->pc = 0x237A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A8Cu;
        // 0x237a90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A94u;
        goto label_237a94;
    }
    ctx->pc = 0x237A8Cu;
    SET_GPR_U32(ctx, 31, 0x237A94u);
    ctx->pc = 0x237A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A8Cu;
    // 0x237a90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237A8Cu, 0x237A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A94u;
label_237a94:
    // 0x237a94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237a98:
    // 0x237a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237a9c:
    // 0x237a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237aa0:
    // 0x237aa0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x237aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_237aa4:
    // 0x237aa4: 0x3e00008  jr          $ra
label_237aa8:
    if (ctx->pc == 0x237AA8u) {
        ctx->pc = 0x237AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AA4u;
        // 0x237aa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237AACu;
        goto label_237aac;
    }
    ctx->pc = 0x237AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AA4u;
        // 0x237aa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237AACu;
label_237aac:
    // 0x237aac: 0x0  nop
    ctx->pc = 0x237aacu;
    // NOP
    ctx->pc = 0x237ab0u;
}
