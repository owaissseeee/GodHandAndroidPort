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

// Function: func_00114608
// Address: 0x114608 - 0x114ac0
void func_00114608_0x114608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00114608_0x114608");
#endif

    switch (ctx->pc) {
        case 0x114608u: goto label_114608;
        case 0x11460cu: goto label_11460c;
        case 0x114610u: goto label_114610;
        case 0x114614u: goto label_114614;
        case 0x114618u: goto label_114618;
        case 0x11461cu: goto label_11461c;
        case 0x114620u: goto label_114620;
        case 0x114624u: goto label_114624;
        case 0x114628u: goto label_114628;
        case 0x11462cu: goto label_11462c;
        case 0x114630u: goto label_114630;
        case 0x114634u: goto label_114634;
        case 0x114638u: goto label_114638;
        case 0x11463cu: goto label_11463c;
        case 0x114640u: goto label_114640;
        case 0x114644u: goto label_114644;
        case 0x114648u: goto label_114648;
        case 0x11464cu: goto label_11464c;
        case 0x114650u: goto label_114650;
        case 0x114654u: goto label_114654;
        case 0x114658u: goto label_114658;
        case 0x11465cu: goto label_11465c;
        case 0x114660u: goto label_114660;
        case 0x114664u: goto label_114664;
        case 0x114668u: goto label_114668;
        case 0x11466cu: goto label_11466c;
        case 0x114670u: goto label_114670;
        case 0x114674u: goto label_114674;
        case 0x114678u: goto label_114678;
        case 0x11467cu: goto label_11467c;
        case 0x114680u: goto label_114680;
        case 0x114684u: goto label_114684;
        case 0x114688u: goto label_114688;
        case 0x11468cu: goto label_11468c;
        case 0x114690u: goto label_114690;
        case 0x114694u: goto label_114694;
        case 0x114698u: goto label_114698;
        case 0x11469cu: goto label_11469c;
        case 0x1146a0u: goto label_1146a0;
        case 0x1146a4u: goto label_1146a4;
        case 0x1146a8u: goto label_1146a8;
        case 0x1146acu: goto label_1146ac;
        case 0x1146b0u: goto label_1146b0;
        case 0x1146b4u: goto label_1146b4;
        case 0x1146b8u: goto label_1146b8;
        case 0x1146bcu: goto label_1146bc;
        case 0x1146c0u: goto label_1146c0;
        case 0x1146c4u: goto label_1146c4;
        case 0x1146c8u: goto label_1146c8;
        case 0x1146ccu: goto label_1146cc;
        case 0x1146d0u: goto label_1146d0;
        case 0x1146d4u: goto label_1146d4;
        case 0x1146d8u: goto label_1146d8;
        case 0x1146dcu: goto label_1146dc;
        case 0x1146e0u: goto label_1146e0;
        case 0x1146e4u: goto label_1146e4;
        case 0x1146e8u: goto label_1146e8;
        case 0x1146ecu: goto label_1146ec;
        case 0x1146f0u: goto label_1146f0;
        case 0x1146f4u: goto label_1146f4;
        case 0x1146f8u: goto label_1146f8;
        case 0x1146fcu: goto label_1146fc;
        case 0x114700u: goto label_114700;
        case 0x114704u: goto label_114704;
        case 0x114708u: goto label_114708;
        case 0x11470cu: goto label_11470c;
        case 0x114710u: goto label_114710;
        case 0x114714u: goto label_114714;
        case 0x114718u: goto label_114718;
        case 0x11471cu: goto label_11471c;
        case 0x114720u: goto label_114720;
        case 0x114724u: goto label_114724;
        case 0x114728u: goto label_114728;
        case 0x11472cu: goto label_11472c;
        case 0x114730u: goto label_114730;
        case 0x114734u: goto label_114734;
        case 0x114738u: goto label_114738;
        case 0x11473cu: goto label_11473c;
        case 0x114740u: goto label_114740;
        case 0x114744u: goto label_114744;
        case 0x114748u: goto label_114748;
        case 0x11474cu: goto label_11474c;
        case 0x114750u: goto label_114750;
        case 0x114754u: goto label_114754;
        case 0x114758u: goto label_114758;
        case 0x11475cu: goto label_11475c;
        case 0x114760u: goto label_114760;
        case 0x114764u: goto label_114764;
        case 0x114768u: goto label_114768;
        case 0x11476cu: goto label_11476c;
        case 0x114770u: goto label_114770;
        case 0x114774u: goto label_114774;
        case 0x114778u: goto label_114778;
        case 0x11477cu: goto label_11477c;
        case 0x114780u: goto label_114780;
        case 0x114784u: goto label_114784;
        case 0x114788u: goto label_114788;
        case 0x11478cu: goto label_11478c;
        case 0x114790u: goto label_114790;
        case 0x114794u: goto label_114794;
        case 0x114798u: goto label_114798;
        case 0x11479cu: goto label_11479c;
        case 0x1147a0u: goto label_1147a0;
        case 0x1147a4u: goto label_1147a4;
        case 0x1147a8u: goto label_1147a8;
        case 0x1147acu: goto label_1147ac;
        case 0x1147b0u: goto label_1147b0;
        case 0x1147b4u: goto label_1147b4;
        case 0x1147b8u: goto label_1147b8;
        case 0x1147bcu: goto label_1147bc;
        case 0x1147c0u: goto label_1147c0;
        case 0x1147c4u: goto label_1147c4;
        case 0x1147c8u: goto label_1147c8;
        case 0x1147ccu: goto label_1147cc;
        case 0x1147d0u: goto label_1147d0;
        case 0x1147d4u: goto label_1147d4;
        case 0x1147d8u: goto label_1147d8;
        case 0x1147dcu: goto label_1147dc;
        case 0x1147e0u: goto label_1147e0;
        case 0x1147e4u: goto label_1147e4;
        case 0x1147e8u: goto label_1147e8;
        case 0x1147ecu: goto label_1147ec;
        case 0x1147f0u: goto label_1147f0;
        case 0x1147f4u: goto label_1147f4;
        case 0x1147f8u: goto label_1147f8;
        case 0x1147fcu: goto label_1147fc;
        case 0x114800u: goto label_114800;
        case 0x114804u: goto label_114804;
        case 0x114808u: goto label_114808;
        case 0x11480cu: goto label_11480c;
        case 0x114810u: goto label_114810;
        case 0x114814u: goto label_114814;
        case 0x114818u: goto label_114818;
        case 0x11481cu: goto label_11481c;
        case 0x114820u: goto label_114820;
        case 0x114824u: goto label_114824;
        case 0x114828u: goto label_114828;
        case 0x11482cu: goto label_11482c;
        case 0x114830u: goto label_114830;
        case 0x114834u: goto label_114834;
        case 0x114838u: goto label_114838;
        case 0x11483cu: goto label_11483c;
        case 0x114840u: goto label_114840;
        case 0x114844u: goto label_114844;
        case 0x114848u: goto label_114848;
        case 0x11484cu: goto label_11484c;
        case 0x114850u: goto label_114850;
        case 0x114854u: goto label_114854;
        case 0x114858u: goto label_114858;
        case 0x11485cu: goto label_11485c;
        case 0x114860u: goto label_114860;
        case 0x114864u: goto label_114864;
        case 0x114868u: goto label_114868;
        case 0x11486cu: goto label_11486c;
        case 0x114870u: goto label_114870;
        case 0x114874u: goto label_114874;
        case 0x114878u: goto label_114878;
        case 0x11487cu: goto label_11487c;
        case 0x114880u: goto label_114880;
        case 0x114884u: goto label_114884;
        case 0x114888u: goto label_114888;
        case 0x11488cu: goto label_11488c;
        case 0x114890u: goto label_114890;
        case 0x114894u: goto label_114894;
        case 0x114898u: goto label_114898;
        case 0x11489cu: goto label_11489c;
        case 0x1148a0u: goto label_1148a0;
        case 0x1148a4u: goto label_1148a4;
        case 0x1148a8u: goto label_1148a8;
        case 0x1148acu: goto label_1148ac;
        case 0x1148b0u: goto label_1148b0;
        case 0x1148b4u: goto label_1148b4;
        case 0x1148b8u: goto label_1148b8;
        case 0x1148bcu: goto label_1148bc;
        case 0x1148c0u: goto label_1148c0;
        case 0x1148c4u: goto label_1148c4;
        case 0x1148c8u: goto label_1148c8;
        case 0x1148ccu: goto label_1148cc;
        case 0x1148d0u: goto label_1148d0;
        case 0x1148d4u: goto label_1148d4;
        case 0x1148d8u: goto label_1148d8;
        case 0x1148dcu: goto label_1148dc;
        case 0x1148e0u: goto label_1148e0;
        case 0x1148e4u: goto label_1148e4;
        case 0x1148e8u: goto label_1148e8;
        case 0x1148ecu: goto label_1148ec;
        case 0x1148f0u: goto label_1148f0;
        case 0x1148f4u: goto label_1148f4;
        case 0x1148f8u: goto label_1148f8;
        case 0x1148fcu: goto label_1148fc;
        case 0x114900u: goto label_114900;
        case 0x114904u: goto label_114904;
        case 0x114908u: goto label_114908;
        case 0x11490cu: goto label_11490c;
        case 0x114910u: goto label_114910;
        case 0x114914u: goto label_114914;
        case 0x114918u: goto label_114918;
        case 0x11491cu: goto label_11491c;
        case 0x114920u: goto label_114920;
        case 0x114924u: goto label_114924;
        case 0x114928u: goto label_114928;
        case 0x11492cu: goto label_11492c;
        case 0x114930u: goto label_114930;
        case 0x114934u: goto label_114934;
        case 0x114938u: goto label_114938;
        case 0x11493cu: goto label_11493c;
        case 0x114940u: goto label_114940;
        case 0x114944u: goto label_114944;
        case 0x114948u: goto label_114948;
        case 0x11494cu: goto label_11494c;
        case 0x114950u: goto label_114950;
        case 0x114954u: goto label_114954;
        case 0x114958u: goto label_114958;
        case 0x11495cu: goto label_11495c;
        case 0x114960u: goto label_114960;
        case 0x114964u: goto label_114964;
        case 0x114968u: goto label_114968;
        case 0x11496cu: goto label_11496c;
        case 0x114970u: goto label_114970;
        case 0x114974u: goto label_114974;
        case 0x114978u: goto label_114978;
        case 0x11497cu: goto label_11497c;
        case 0x114980u: goto label_114980;
        case 0x114984u: goto label_114984;
        case 0x114988u: goto label_114988;
        case 0x11498cu: goto label_11498c;
        case 0x114990u: goto label_114990;
        case 0x114994u: goto label_114994;
        case 0x114998u: goto label_114998;
        case 0x11499cu: goto label_11499c;
        case 0x1149a0u: goto label_1149a0;
        case 0x1149a4u: goto label_1149a4;
        case 0x1149a8u: goto label_1149a8;
        case 0x1149acu: goto label_1149ac;
        case 0x1149b0u: goto label_1149b0;
        case 0x1149b4u: goto label_1149b4;
        case 0x1149b8u: goto label_1149b8;
        case 0x1149bcu: goto label_1149bc;
        case 0x1149c0u: goto label_1149c0;
        case 0x1149c4u: goto label_1149c4;
        case 0x1149c8u: goto label_1149c8;
        case 0x1149ccu: goto label_1149cc;
        case 0x1149d0u: goto label_1149d0;
        case 0x1149d4u: goto label_1149d4;
        case 0x1149d8u: goto label_1149d8;
        case 0x1149dcu: goto label_1149dc;
        case 0x1149e0u: goto label_1149e0;
        case 0x1149e4u: goto label_1149e4;
        case 0x1149e8u: goto label_1149e8;
        case 0x1149ecu: goto label_1149ec;
        case 0x1149f0u: goto label_1149f0;
        case 0x1149f4u: goto label_1149f4;
        case 0x1149f8u: goto label_1149f8;
        case 0x1149fcu: goto label_1149fc;
        case 0x114a00u: goto label_114a00;
        case 0x114a04u: goto label_114a04;
        case 0x114a08u: goto label_114a08;
        case 0x114a0cu: goto label_114a0c;
        case 0x114a10u: goto label_114a10;
        case 0x114a14u: goto label_114a14;
        case 0x114a18u: goto label_114a18;
        case 0x114a1cu: goto label_114a1c;
        case 0x114a20u: goto label_114a20;
        case 0x114a24u: goto label_114a24;
        case 0x114a28u: goto label_114a28;
        case 0x114a2cu: goto label_114a2c;
        case 0x114a30u: goto label_114a30;
        case 0x114a34u: goto label_114a34;
        case 0x114a38u: goto label_114a38;
        case 0x114a3cu: goto label_114a3c;
        case 0x114a40u: goto label_114a40;
        case 0x114a44u: goto label_114a44;
        case 0x114a48u: goto label_114a48;
        case 0x114a4cu: goto label_114a4c;
        case 0x114a50u: goto label_114a50;
        case 0x114a54u: goto label_114a54;
        case 0x114a58u: goto label_114a58;
        case 0x114a5cu: goto label_114a5c;
        case 0x114a60u: goto label_114a60;
        case 0x114a64u: goto label_114a64;
        case 0x114a68u: goto label_114a68;
        case 0x114a6cu: goto label_114a6c;
        case 0x114a70u: goto label_114a70;
        case 0x114a74u: goto label_114a74;
        case 0x114a78u: goto label_114a78;
        case 0x114a7cu: goto label_114a7c;
        case 0x114a80u: goto label_114a80;
        case 0x114a84u: goto label_114a84;
        case 0x114a88u: goto label_114a88;
        case 0x114a8cu: goto label_114a8c;
        case 0x114a90u: goto label_114a90;
        case 0x114a94u: goto label_114a94;
        case 0x114a98u: goto label_114a98;
        case 0x114a9cu: goto label_114a9c;
        case 0x114aa0u: goto label_114aa0;
        case 0x114aa4u: goto label_114aa4;
        case 0x114aa8u: goto label_114aa8;
        case 0x114aacu: goto label_114aac;
        case 0x114ab0u: goto label_114ab0;
        case 0x114ab4u: goto label_114ab4;
        case 0x114ab8u: goto label_114ab8;
        case 0x114abcu: goto label_114abc;
        default: break;
    }

    ctx->pc = 0x114608u;

label_114608:
    // 0x114608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11460c:
    // 0x11460c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114610:
    // 0x114610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_114614:
    // 0x114614: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_114618:
    // 0x114618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11461c:
    // 0x11461c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_114620:
    // 0x114620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_114624:
    // 0x114624: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x114624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_114628:
    // 0x114628: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x114628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_11462c:
    // 0x11462c: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
label_114630:
    if (ctx->pc == 0x114630u) {
        ctx->pc = 0x114630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11462Cu;
        // 0x114630: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114634u;
        goto label_114634;
    }
    ctx->pc = 0x11462Cu;
    {
        const bool branch_taken_0x11462c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11462Cu;
        // 0x114630: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11462c) {
            ctx->pc = 0x11474Cu;
            goto label_11474c;
        }
    }
    ctx->pc = 0x114634u;
label_114634:
    // 0x114634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_114638:
    if (ctx->pc == 0x114638u) {
        ctx->pc = 0x114638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114634u;
        // 0x114638: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11463Cu;
        goto label_11463c;
    }
    ctx->pc = 0x114634u;
    {
        const bool branch_taken_0x114634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114634u;
        // 0x114638: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114634) {
            ctx->pc = 0x11464Cu;
            goto label_11464c;
        }
    }
    ctx->pc = 0x11463Cu;
label_11463c:
    // 0x11463c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_114640:
    if (ctx->pc == 0x114640u) {
        ctx->pc = 0x114640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11463Cu;
        // 0x114640: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114644u;
        goto label_114644;
    }
    ctx->pc = 0x11463Cu;
    {
        const bool branch_taken_0x11463c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11463c) {
            ctx->pc = 0x114640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11463Cu;
            // 0x114640: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114664u;
            goto label_114664;
        }
    }
    ctx->pc = 0x114644u;
label_114644:
    // 0x114644: 0x10000106  b           . + 4 + (0x106 << 2)
label_114648:
    if (ctx->pc == 0x114648u) {
        ctx->pc = 0x114648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114644u;
        // 0x114648: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11464Cu;
        goto label_11464c;
    }
    ctx->pc = 0x114644u;
    {
        const bool branch_taken_0x114644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114644u;
        // 0x114648: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114644) {
            ctx->pc = 0x114A60u;
            goto label_114a60;
        }
    }
    ctx->pc = 0x11464Cu;
label_11464c:
    // 0x11464c: 0x106200e0  beq         $v1, $v0, . + 4 + (0xE0 << 2)
label_114650:
    if (ctx->pc == 0x114650u) {
        ctx->pc = 0x114650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11464Cu;
        // 0x114650: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114654u;
        goto label_114654;
    }
    ctx->pc = 0x11464Cu;
    {
        const bool branch_taken_0x11464c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11464Cu;
        // 0x114650: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11464c) {
            ctx->pc = 0x1149D0u;
            goto label_1149d0;
        }
    }
    ctx->pc = 0x114654u;
label_114654:
    // 0x114654: 0x106200ef  beq         $v1, $v0, . + 4 + (0xEF << 2)
label_114658:
    if (ctx->pc == 0x114658u) {
        ctx->pc = 0x11465Cu;
        goto label_11465c;
    }
    ctx->pc = 0x114654u;
    {
        const bool branch_taken_0x114654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x114654) {
            ctx->pc = 0x114A14u;
            goto label_114a14;
        }
    }
    ctx->pc = 0x11465Cu;
label_11465c:
    // 0x11465c: 0x10000100  b           . + 4 + (0x100 << 2)
label_114660:
    if (ctx->pc == 0x114660u) {
        ctx->pc = 0x114660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11465Cu;
        // 0x114660: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114664u;
        goto label_114664;
    }
    ctx->pc = 0x11465Cu;
    {
        const bool branch_taken_0x11465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11465Cu;
        // 0x114660: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11465c) {
            ctx->pc = 0x114A60u;
            goto label_114a60;
        }
    }
    ctx->pc = 0x114664u;
label_114664:
    // 0x114664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114668:
    // 0x114668: 0xc049396  jal         func_124E58
label_11466c:
    if (ctx->pc == 0x11466Cu) {
        ctx->pc = 0x11466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114668u;
        // 0x11466c: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114670u;
        goto label_114670;
    }
    ctx->pc = 0x114668u;
    SET_GPR_U32(ctx, 31, 0x114670u);
    ctx->pc = 0x11466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114668u;
    // 0x11466c: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x114668u, 0x114670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114670u;
label_114670:
    // 0x114670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114674:
    // 0x114674: 0xc049150  jal         func_124540
label_114678:
    if (ctx->pc == 0x114678u) {
        ctx->pc = 0x114678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114674u;
        // 0x114678: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11467Cu;
        goto label_11467c;
    }
    ctx->pc = 0x114674u;
    SET_GPR_U32(ctx, 31, 0x11467Cu);
    ctx->pc = 0x114678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114674u;
    // 0x114678: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x114674u, 0x11467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11467Cu;
label_11467c:
    // 0x11467c: 0x8e230640  lw          $v1, 0x640($s1)
    ctx->pc = 0x11467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_114680:
    // 0x114680: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_114684:
    if (ctx->pc == 0x114684u) {
        ctx->pc = 0x114684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114680u;
        // 0x114684: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114688u;
        goto label_114688;
    }
    ctx->pc = 0x114680u;
    {
        const bool branch_taken_0x114680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114680) {
            ctx->pc = 0x114684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114680u;
            // 0x114684: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114694u;
            goto label_114694;
        }
    }
    ctx->pc = 0x114688u;
label_114688:
    // 0x114688: 0xc0493b0  jal         func_124EC0
label_11468c:
    if (ctx->pc == 0x11468Cu) {
        ctx->pc = 0x11468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114688u;
        // 0x11468c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114690u;
        goto label_114690;
    }
    ctx->pc = 0x114688u;
    SET_GPR_U32(ctx, 31, 0x114690u);
    ctx->pc = 0x11468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114688u;
    // 0x11468c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x114688u, 0x114690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114690u;
label_114690:
    // 0x114690: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_114694:
    // 0x114694: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_114698:
    if (ctx->pc == 0x114698u) {
        ctx->pc = 0x114698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114694u;
        // 0x114698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11469Cu;
        goto label_11469c;
    }
    ctx->pc = 0x114694u;
    {
        const bool branch_taken_0x114694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x114698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114694u;
        // 0x114698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114694) {
            ctx->pc = 0x1146DCu;
            goto label_1146dc;
        }
    }
    ctx->pc = 0x11469Cu;
label_11469c:
    // 0x11469c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x11469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1146a0:
    // 0x1146a0: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x1146a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1146a4:
    // 0x1146a4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1146a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1146a8:
    // 0x1146a8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1146a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1146ac:
    // 0x1146ac: 0x40f809  jalr        $v0
label_1146b0:
    if (ctx->pc == 0x1146B0u) {
        ctx->pc = 0x1146B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146ACu;
        // 0x1146b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146B4u;
        goto label_1146b4;
    }
    ctx->pc = 0x1146ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1146B4u);
        ctx->pc = 0x1146B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146ACu;
        // 0x1146b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146ACu, 0x1146B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146B4u;
label_1146b4:
    // 0x1146b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1146b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1146b8:
    // 0x1146b8: 0xc07dfac  jal         func_1F7EB0
label_1146bc:
    if (ctx->pc == 0x1146BCu) {
        ctx->pc = 0x1146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B8u;
        // 0x1146bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146C0u;
        goto label_1146c0;
    }
    ctx->pc = 0x1146B8u;
    SET_GPR_U32(ctx, 31, 0x1146C0u);
    ctx->pc = 0x1146BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146B8u;
    // 0x1146bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1146B8u, 0x1146C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146C0u;
label_1146c0:
    // 0x1146c0: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1146c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_1146c4:
    // 0x1146c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1146c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1146c8:
    // 0x1146c8: 0x0  nop
    ctx->pc = 0x1146c8u;
    // NOP
label_1146cc:
    // 0x1146cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1146ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1146d0:
    // 0x1146d0: 0x0  nop
    ctx->pc = 0x1146d0u;
    // NOP
label_1146d4:
    // 0x1146d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1146d8:
    if (ctx->pc == 0x1146D8u) {
        ctx->pc = 0x1146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D4u;
        // 0x1146d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146DCu;
        goto label_1146dc;
    }
    ctx->pc = 0x1146D4u;
    {
        const bool branch_taken_0x1146d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1146d4) {
            ctx->pc = 0x1146D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1146D4u;
            // 0x1146d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1146DCu;
            goto label_1146dc;
        }
    }
    ctx->pc = 0x1146DCu;
label_1146dc:
    // 0x1146dc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1146e0:
    if (ctx->pc == 0x1146E0u) {
        ctx->pc = 0x1146E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146DCu;
        // 0x1146e0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146E4u;
        goto label_1146e4;
    }
    ctx->pc = 0x1146DCu;
    {
        const bool branch_taken_0x1146dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146DCu;
        // 0x1146e0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146dc) {
            ctx->pc = 0x1146F0u;
            goto label_1146f0;
        }
    }
    ctx->pc = 0x1146E4u;
label_1146e4:
    // 0x1146e4: 0x8c430228  lw          $v1, 0x228($v0)
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
label_1146e8:
    // 0x1146e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1146ec:
    if (ctx->pc == 0x1146ECu) {
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x8c44022c  lw          $a0, 0x22C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146F0u;
        goto label_1146f0;
    }
    ctx->pc = 0x1146E8u;
    {
        const bool branch_taken_0x1146e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x8c44022c  lw          $a0, 0x22C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146e8) {
            ctx->pc = 0x1146F8u;
            goto label_1146f8;
        }
    }
    ctx->pc = 0x1146F0u;
label_1146f0:
    // 0x1146f0: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
label_1146f4:
    // 0x1146f4: 0x8c440224  lw          $a0, 0x224($v0)
    ctx->pc = 0x1146f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
label_1146f8:
    // 0x1146f8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1146f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1146fc:
    // 0x1146fc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_114700:
    // 0x114700: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114704:
    // 0x114704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114708:
    // 0x114708: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11470c:
    // 0x11470c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11470cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114710:
    // 0x114710: 0xc0aa15e  jal         func_2A8578
label_114714:
    if (ctx->pc == 0x114714u) {
        ctx->pc = 0x114714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114710u;
        // 0x114714: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114718u;
        goto label_114718;
    }
    ctx->pc = 0x114710u;
    SET_GPR_U32(ctx, 31, 0x114718u);
    ctx->pc = 0x114714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114710u;
    // 0x114714: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114710u, 0x114718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114718u;
label_114718:
    // 0x114718: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x114718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_11471c:
    // 0x11471c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114720:
    // 0x114720: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x114720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_114724:
    // 0x114724: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_114728:
    // 0x114728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11472c:
    // 0x11472c: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11472cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
label_114730:
    // 0x114730: 0xae2515bc  sw          $a1, 0x15BC($s1)
    ctx->pc = 0x114730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 5));
label_114734:
    // 0x114734: 0xa6240568  sh          $a0, 0x568($s1)
    ctx->pc = 0x114734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 4));
label_114738:
    // 0x114738: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x114738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11473c:
    // 0x11473c: 0xae2515b4  sw          $a1, 0x15B4($s1)
    ctx->pc = 0x11473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 5));
label_114740:
    // 0x114740: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x114740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_114744:
    // 0x114744: 0xae20165c  sw          $zero, 0x165C($s1)
    ctx->pc = 0x114744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5724), GPR_U32(ctx, 0));
label_114748:
    // 0x114748: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x114748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
label_11474c:
    // 0x11474c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x11474cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_114750:
    // 0x114750: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x114750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_114754:
    // 0x114754: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114758:
    // 0x114758: 0xc04939a  jal         func_124E68
label_11475c:
    if (ctx->pc == 0x11475Cu) {
        ctx->pc = 0x11475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114758u;
        // 0x11475c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114760u;
        goto label_114760;
    }
    ctx->pc = 0x114758u;
    SET_GPR_U32(ctx, 31, 0x114760u);
    ctx->pc = 0x11475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114758u;
    // 0x11475c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x114758u, 0x114760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114760u;
label_114760:
    // 0x114760: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x114760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_114764:
    // 0x114764: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_114768:
    if (ctx->pc == 0x114768u) {
        ctx->pc = 0x114768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114764u;
        // 0x114768: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11476Cu;
        goto label_11476c;
    }
    ctx->pc = 0x114764u;
    {
        const bool branch_taken_0x114764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114764u;
        // 0x114768: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114764) {
            ctx->pc = 0x114788u;
            goto label_114788;
        }
    }
    ctx->pc = 0x11476Cu;
label_11476c:
    // 0x11476c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11476cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114770:
    // 0x114770: 0xc04b31c  jal         func_12CC70
label_114774:
    if (ctx->pc == 0x114774u) {
        ctx->pc = 0x114774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114770u;
        // 0x114774: 0xa2220648  sb          $v0, 0x648($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114778u;
        goto label_114778;
    }
    ctx->pc = 0x114770u;
    SET_GPR_U32(ctx, 31, 0x114778u);
    ctx->pc = 0x114774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114770u;
    // 0x114774: 0xa2220648  sb          $v0, 0x648($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CC70u, 0x114770u, 0x114778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114778u;
label_114778:
    // 0x114778: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x114778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_11477c:
    // 0x11477c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x11477cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_114780:
    // 0x114780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114784:
    // 0x114784: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x114784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_114788:
    // 0x114788: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x114788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_11478c:
    // 0x11478c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x11478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_114790:
    // 0x114790: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
label_114794:
    if (ctx->pc == 0x114794u) {
        ctx->pc = 0x114794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114790u;
        // 0x114794: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114798u;
        goto label_114798;
    }
    ctx->pc = 0x114790u;
    {
        const bool branch_taken_0x114790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114790) {
            ctx->pc = 0x114794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114790u;
            // 0x114794: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114938u;
            goto label_114938;
        }
    }
    ctx->pc = 0x114798u;
label_114798:
    // 0x114798: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x114798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_11479c:
    // 0x11479c: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_1147a0:
    if (ctx->pc == 0x1147A0u) {
        ctx->pc = 0x1147A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11479Cu;
        // 0x1147a0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147A4u;
        goto label_1147a4;
    }
    ctx->pc = 0x11479Cu;
    {
        const bool branch_taken_0x11479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11479c) {
            ctx->pc = 0x1147A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11479Cu;
            // 0x1147a0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148C0u;
            goto label_1148c0;
        }
    }
    ctx->pc = 0x1147A4u;
label_1147a4:
    // 0x1147a4: 0x8e22165c  lw          $v0, 0x165C($s1)
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5724)));
label_1147a8:
    // 0x1147a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1147ac:
    if (ctx->pc == 0x1147ACu) {
        ctx->pc = 0x1147ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147A8u;
        // 0x1147ac: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147B0u;
        goto label_1147b0;
    }
    ctx->pc = 0x1147A8u;
    {
        const bool branch_taken_0x1147a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1147a8) {
            ctx->pc = 0x1147ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1147A8u;
            // 0x1147ac: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1147C0u;
            goto label_1147c0;
        }
    }
    ctx->pc = 0x1147B0u;
label_1147b0:
    // 0x1147b0: 0xc049412  jal         func_125048
label_1147b4:
    if (ctx->pc == 0x1147B4u) {
        ctx->pc = 0x1147B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147B0u;
        // 0x1147b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147B8u;
        goto label_1147b8;
    }
    ctx->pc = 0x1147B0u;
    SET_GPR_U32(ctx, 31, 0x1147B8u);
    ctx->pc = 0x1147B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147B0u;
    // 0x1147b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125048u, 0x1147B0u, 0x1147B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147B8u;
label_1147b8:
    // 0x1147b8: 0xae22165c  sw          $v0, 0x165C($s1)
    ctx->pc = 0x1147b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5724), GPR_U32(ctx, 2));
label_1147bc:
    // 0x1147bc: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1147bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_1147c0:
    // 0x1147c0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1147c4:
    if (ctx->pc == 0x1147C4u) {
        ctx->pc = 0x1147C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147C0u;
        // 0x1147c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147C8u;
        goto label_1147c8;
    }
    ctx->pc = 0x1147C0u;
    {
        const bool branch_taken_0x1147c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147C0u;
        // 0x1147c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147c0) {
            ctx->pc = 0x1148BCu;
            goto label_1148bc;
        }
    }
    ctx->pc = 0x1147C8u;
label_1147c8:
    // 0x1147c8: 0x8e23161c  lw          $v1, 0x161C($s1)
    ctx->pc = 0x1147c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
label_1147cc:
    // 0x1147cc: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x1147ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_1147d0:
    // 0x1147d0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1147d4:
    if (ctx->pc == 0x1147D4u) {
        ctx->pc = 0x1147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147D0u;
        // 0x1147d4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147D8u;
        goto label_1147d8;
    }
    ctx->pc = 0x1147D0u;
    {
        const bool branch_taken_0x1147d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147D0u;
        // 0x1147d4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147d0) {
            ctx->pc = 0x114800u;
            goto label_114800;
        }
    }
    ctx->pc = 0x1147D8u;
label_1147d8:
    // 0x1147d8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1147d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1147dc:
    // 0x1147dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1147dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1147e0:
    // 0x1147e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1147e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1147e4:
    // 0x1147e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1147e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1147e8:
    // 0x1147e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1147e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1147ec:
    // 0x1147ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1147ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1147f0:
    // 0x1147f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1147f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1147f4:
    // 0x1147f4: 0xc0b2e92  jal         func_2CBA48
label_1147f8:
    if (ctx->pc == 0x1147F8u) {
        ctx->pc = 0x1147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147F4u;
        // 0x1147f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1147FCu;
        goto label_1147fc;
    }
    ctx->pc = 0x1147F4u;
    SET_GPR_U32(ctx, 31, 0x1147FCu);
    ctx->pc = 0x1147F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147F4u;
    // 0x1147f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1147F4u, 0x1147FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147FCu;
label_1147fc:
    // 0x1147fc: 0xae22161c  sw          $v0, 0x161C($s1)
    ctx->pc = 0x1147fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 2));
label_114800:
    // 0x114800: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x114800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_114804:
    // 0x114804: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x114804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_114808:
    // 0x114808: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11480c:
    // 0x11480c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11480cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_114810:
    // 0x114810: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x114810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_114814:
    // 0x114814: 0xc0a4bce  jal         func_292F38
label_114818:
    if (ctx->pc == 0x114818u) {
        ctx->pc = 0x114818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114814u;
        // 0x114818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11481Cu;
        goto label_11481c;
    }
    ctx->pc = 0x114814u;
    SET_GPR_U32(ctx, 31, 0x11481Cu);
    ctx->pc = 0x114818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114814u;
    // 0x114818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x114814u, 0x11481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11481Cu;
label_11481c:
    // 0x11481c: 0xe63405a8  swc1        $f20, 0x5A8($s1)
    ctx->pc = 0x11481cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_114820:
    // 0x114820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114824:
    // 0x114824: 0xc0560a2  jal         func_158288
label_114828:
    if (ctx->pc == 0x114828u) {
        ctx->pc = 0x114828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114824u;
        // 0x114828: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11482Cu;
        goto label_11482c;
    }
    ctx->pc = 0x114824u;
    SET_GPR_U32(ctx, 31, 0x11482Cu);
    ctx->pc = 0x114828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114824u;
    // 0x114828: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x114824u, 0x11482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11482Cu;
label_11482c:
    // 0x11482c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x11482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_114830:
    // 0x114830: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x114830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_114834:
    // 0x114834: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x114834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_114838:
    // 0x114838: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x114838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_11483c:
    // 0x11483c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_114840:
    // 0x114840: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x114840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_114844:
    // 0x114844: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x114844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
label_114848:
    // 0x114848: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x114848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
label_11484c:
    // 0x11484c: 0x8e2215bc  lw          $v0, 0x15BC($s1)
    ctx->pc = 0x11484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
label_114850:
    // 0x114850: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_114854:
    if (ctx->pc == 0x114854u) {
        ctx->pc = 0x114854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114850u;
        // 0x114854: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114858u;
        goto label_114858;
    }
    ctx->pc = 0x114850u;
    {
        const bool branch_taken_0x114850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114850) {
            ctx->pc = 0x114854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114850u;
            // 0x114854: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148C0u;
            goto label_1148c0;
        }
    }
    ctx->pc = 0x114858u;
label_114858:
    // 0x114858: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_11485c:
    // 0x11485c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x11485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_114860:
    // 0x114860: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_114864:
    if (ctx->pc == 0x114864u) {
        ctx->pc = 0x114864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114860u;
        // 0x114864: 0xae2015bc  sw          $zero, 0x15BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114868u;
        goto label_114868;
    }
    ctx->pc = 0x114860u;
    {
        const bool branch_taken_0x114860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114860u;
        // 0x114864: 0xae2015bc  sw          $zero, 0x15BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114860) {
            ctx->pc = 0x1148BCu;
            goto label_1148bc;
        }
    }
    ctx->pc = 0x114868u;
label_114868:
    // 0x114868: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x114868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_11486c:
    // 0x11486c: 0xc07f02a  jal         func_1FC0A8
label_114870:
    if (ctx->pc == 0x114870u) {
        ctx->pc = 0x114870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11486Cu;
        // 0x114870: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114874u;
        goto label_114874;
    }
    ctx->pc = 0x11486Cu;
    SET_GPR_U32(ctx, 31, 0x114874u);
    ctx->pc = 0x114870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11486Cu;
    // 0x114870: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x11486Cu, 0x114874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114874u;
label_114874:
    // 0x114874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x114874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114878:
    // 0x114878: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x114878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_11487c:
    // 0x11487c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_114880:
    if (ctx->pc == 0x114880u) {
        ctx->pc = 0x114880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11487Cu;
        // 0x114880: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114884u;
        goto label_114884;
    }
    ctx->pc = 0x11487Cu;
    {
        const bool branch_taken_0x11487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11487Cu;
        // 0x114880: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11487c) {
            ctx->pc = 0x11489Cu;
            goto label_11489c;
        }
    }
    ctx->pc = 0x114884u;
label_114884:
    // 0x114884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_114888:
    // 0x114888: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x114888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
label_11488c:
    // 0x11488c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_114890:
    // 0x114890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_114894:
    // 0x114894: 0x800008  jr          $a0
label_114898:
    if (ctx->pc == 0x114898u) {
        ctx->pc = 0x11489Cu;
        goto label_11489c;
    }
    ctx->pc = 0x114894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11489Cu: goto label_11489c;
            case 0x1148BCu: goto label_1148bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114894u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11489Cu;
label_11489c:
    // 0x11489c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1148a0:
    // 0x1148a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1148a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1148a4:
    // 0x1148a4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1148a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1148a8:
    // 0x1148a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1148a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1148ac:
    // 0x1148ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1148acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1148b0:
    // 0x1148b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1148b4:
    // 0x1148b4: 0xc0c194a  jal         func_306528
label_1148b8:
    if (ctx->pc == 0x1148B8u) {
        ctx->pc = 0x1148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148B4u;
        // 0x1148b8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148BCu;
        goto label_1148bc;
    }
    ctx->pc = 0x1148B4u;
    SET_GPR_U32(ctx, 31, 0x1148BCu);
    ctx->pc = 0x1148B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148B4u;
    // 0x1148b8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1148B4u, 0x1148BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148BCu;
label_1148bc:
    // 0x1148bc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1148bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1148c0:
    // 0x1148c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1148c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1148c4:
    // 0x1148c4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1148c8:
    if (ctx->pc == 0x1148C8u) {
        ctx->pc = 0x1148C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C4u;
        // 0x1148c8: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148CCu;
        goto label_1148cc;
    }
    ctx->pc = 0x1148C4u;
    {
        const bool branch_taken_0x1148c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1148c4) {
            ctx->pc = 0x1148C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148C4u;
            // 0x1148c8: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114938u;
            goto label_114938;
        }
    }
    ctx->pc = 0x1148CCu;
label_1148cc:
    // 0x1148cc: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x1148ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_1148d0:
    // 0x1148d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1148d4:
    if (ctx->pc == 0x1148D4u) {
        ctx->pc = 0x1148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148D0u;
        // 0x1148d4: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148D8u;
        goto label_1148d8;
    }
    ctx->pc = 0x1148D0u;
    {
        const bool branch_taken_0x1148d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148D0u;
        // 0x1148d4: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148d0) {
            ctx->pc = 0x1148E4u;
            goto label_1148e4;
        }
    }
    ctx->pc = 0x1148D8u;
label_1148d8:
    // 0x1148d8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1148d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1148dc:
    // 0x1148dc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1148e0:
    if (ctx->pc == 0x1148E0u) {
        ctx->pc = 0x1148E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148DCu;
        // 0x1148e0: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148E4u;
        goto label_1148e4;
    }
    ctx->pc = 0x1148DCu;
    {
        const bool branch_taken_0x1148dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148DCu;
        // 0x1148e0: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148dc) {
            ctx->pc = 0x114934u;
            goto label_114934;
        }
    }
    ctx->pc = 0x1148E4u;
label_1148e4:
    // 0x1148e4: 0x82220626  lb          $v0, 0x626($s1)
    ctx->pc = 0x1148e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1574)));
label_1148e8:
    // 0x1148e8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1148ec:
    if (ctx->pc == 0x1148ECu) {
        ctx->pc = 0x1148ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148E8u;
        // 0x1148ec: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148F0u;
        goto label_1148f0;
    }
    ctx->pc = 0x1148E8u;
    {
        const bool branch_taken_0x1148e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1148e8) {
            ctx->pc = 0x1148ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148E8u;
            // 0x1148ec: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114938u;
            goto label_114938;
        }
    }
    ctx->pc = 0x1148F0u;
label_1148f0:
    // 0x1148f0: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x1148f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_1148f4:
    // 0x1148f4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1148f8:
    if (ctx->pc == 0x1148F8u) {
        ctx->pc = 0x1148F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F4u;
        // 0x1148f8: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1148FCu;
        goto label_1148fc;
    }
    ctx->pc = 0x1148F4u;
    {
        const bool branch_taken_0x1148f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148f4) {
            ctx->pc = 0x1148F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148F4u;
            // 0x1148f8: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114938u;
            goto label_114938;
        }
    }
    ctx->pc = 0x1148FCu;
label_1148fc:
    // 0x1148fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114900:
    // 0x114900: 0xa2200626  sb          $zero, 0x626($s1)
    ctx->pc = 0x114900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1574), (uint8_t)GPR_U32(ctx, 0));
label_114904:
    // 0x114904: 0xa2200621  sb          $zero, 0x621($s1)
    ctx->pc = 0x114904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1569), (uint8_t)GPR_U32(ctx, 0));
label_114908:
    // 0x114908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11490c:
    // 0x11490c: 0xa2200622  sb          $zero, 0x622($s1)
    ctx->pc = 0x11490cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1570), (uint8_t)GPR_U32(ctx, 0));
label_114910:
    // 0x114910: 0xa2200623  sb          $zero, 0x623($s1)
    ctx->pc = 0x114910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1571), (uint8_t)GPR_U32(ctx, 0));
label_114914:
    // 0x114914: 0xc0499dc  jal         func_126770
label_114918:
    if (ctx->pc == 0x114918u) {
        ctx->pc = 0x114918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114914u;
        // 0x114918: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11491Cu;
        goto label_11491c;
    }
    ctx->pc = 0x114914u;
    SET_GPR_U32(ctx, 31, 0x11491Cu);
    ctx->pc = 0x114918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114914u;
    // 0x114918: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x114914u, 0x11491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11491Cu;
label_11491c:
    // 0x11491c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114920:
    // 0x114920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114924:
    // 0x114924: 0xc0493d8  jal         func_124F60
label_114928:
    if (ctx->pc == 0x114928u) {
        ctx->pc = 0x114928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114924u;
        // 0x114928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11492Cu;
        goto label_11492c;
    }
    ctx->pc = 0x114924u;
    SET_GPR_U32(ctx, 31, 0x11492Cu);
    ctx->pc = 0x114928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114924u;
    // 0x114928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x114924u, 0x11492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11492Cu;
label_11492c:
    // 0x11492c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114930:
    // 0x114930: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x114930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_114934:
    // 0x114934: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x114934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_114938:
    // 0x114938: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_11493c:
    if (ctx->pc == 0x11493Cu) {
        ctx->pc = 0x114940u;
        goto label_114940;
    }
    ctx->pc = 0x114938u;
    {
        const bool branch_taken_0x114938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114938) {
            ctx->pc = 0x114954u;
            goto label_114954;
        }
    }
    ctx->pc = 0x114940u;
label_114940:
    // 0x114940: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_114944:
    // 0x114944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_114948:
    if (ctx->pc == 0x114948u) {
        ctx->pc = 0x11494Cu;
        goto label_11494c;
    }
    ctx->pc = 0x114944u;
    {
        const bool branch_taken_0x114944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114944) {
            ctx->pc = 0x114954u;
            goto label_114954;
        }
    }
    ctx->pc = 0x11494Cu;
label_11494c:
    // 0x11494c: 0xc0499fe  jal         func_1267F8
label_114950:
    if (ctx->pc == 0x114950u) {
        ctx->pc = 0x114950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11494Cu;
        // 0x114950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114954u;
        goto label_114954;
    }
    ctx->pc = 0x11494Cu;
    SET_GPR_U32(ctx, 31, 0x114954u);
    ctx->pc = 0x114950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11494Cu;
    // 0x114950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267F8u, 0x11494Cu, 0x114954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114954u;
label_114954:
    // 0x114954: 0xc055f06  jal         func_157C18
label_114958:
    if (ctx->pc == 0x114958u) {
        ctx->pc = 0x114958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114954u;
        // 0x114958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11495Cu;
        goto label_11495c;
    }
    ctx->pc = 0x114954u;
    SET_GPR_U32(ctx, 31, 0x11495Cu);
    ctx->pc = 0x114958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114954u;
    // 0x114958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x114954u, 0x11495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11495Cu;
label_11495c:
    // 0x11495c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_114960:
    if (ctx->pc == 0x114960u) {
        ctx->pc = 0x114960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11495Cu;
        // 0x114960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114964u;
        goto label_114964;
    }
    ctx->pc = 0x11495Cu;
    {
        const bool branch_taken_0x11495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11495Cu;
        // 0x114960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11495c) {
            ctx->pc = 0x114988u;
            goto label_114988;
        }
    }
    ctx->pc = 0x114964u;
label_114964:
    // 0x114964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114968:
    // 0x114968: 0xc0493d8  jal         func_124F60
label_11496c:
    if (ctx->pc == 0x11496Cu) {
        ctx->pc = 0x11496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114968u;
        // 0x11496c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114970u;
        goto label_114970;
    }
    ctx->pc = 0x114968u;
    SET_GPR_U32(ctx, 31, 0x114970u);
    ctx->pc = 0x11496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114968u;
    // 0x11496c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x114968u, 0x114970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114970u;
label_114970:
    // 0x114970: 0xc0499dc  jal         func_126770
label_114974:
    if (ctx->pc == 0x114974u) {
        ctx->pc = 0x114974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114970u;
        // 0x114974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114978u;
        goto label_114978;
    }
    ctx->pc = 0x114970u;
    SET_GPR_U32(ctx, 31, 0x114978u);
    ctx->pc = 0x114974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114970u;
    // 0x114974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x114970u, 0x114978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114978u;
label_114978:
    // 0x114978: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x114978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_11497c:
    // 0x11497c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11497cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_114980:
    // 0x114980: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x114980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_114984:
    // 0x114984: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x114984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_114988:
    // 0x114988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11498c:
    // 0x11498c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11498cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_114990:
    // 0x114990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114994:
    // 0x114994: 0xc053e7c  jal         func_14F9F0
label_114998:
    if (ctx->pc == 0x114998u) {
        ctx->pc = 0x114998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114994u;
        // 0x114998: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11499Cu;
        goto label_11499c;
    }
    ctx->pc = 0x114994u;
    SET_GPR_U32(ctx, 31, 0x11499Cu);
    ctx->pc = 0x114998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114994u;
    // 0x114998: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114994u, 0x11499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11499Cu;
label_11499c:
    // 0x11499c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11499cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1149a0:
    // 0x1149a0: 0xc053e4a  jal         func_14F928
label_1149a4:
    if (ctx->pc == 0x1149A4u) {
        ctx->pc = 0x1149A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149A0u;
        // 0x1149a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149A8u;
        goto label_1149a8;
    }
    ctx->pc = 0x1149A0u;
    SET_GPR_U32(ctx, 31, 0x1149A8u);
    ctx->pc = 0x1149A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149A0u;
    // 0x1149a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1149A0u, 0x1149A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149A8u;
label_1149a8:
    // 0x1149a8: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x1149a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1149ac:
    // 0x1149ac: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1149acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1149b0:
    // 0x1149b0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1149b4:
    if (ctx->pc == 0x1149B4u) {
        ctx->pc = 0x1149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149B0u;
        // 0x1149b4: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149B8u;
        goto label_1149b8;
    }
    ctx->pc = 0x1149B0u;
    {
        const bool branch_taken_0x1149b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149B0u;
        // 0x1149b4: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149b0) {
            ctx->pc = 0x114A5Cu;
            goto label_114a5c;
        }
    }
    ctx->pc = 0x1149B8u;
label_1149b8:
    // 0x1149b8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1149b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1149bc:
    // 0x1149bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1149bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1149c0:
    // 0x1149c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1149c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1149c4:
    // 0x1149c4: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x1149c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
label_1149c8:
    // 0x1149c8: 0x10000024  b           . + 4 + (0x24 << 2)
label_1149cc:
    if (ctx->pc == 0x1149CCu) {
        ctx->pc = 0x1149CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149C8u;
        // 0x1149cc: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149D0u;
        goto label_1149d0;
    }
    ctx->pc = 0x1149C8u;
    {
        const bool branch_taken_0x1149c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149C8u;
        // 0x1149cc: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149c8) {
            ctx->pc = 0x114A5Cu;
            goto label_114a5c;
        }
    }
    ctx->pc = 0x1149D0u;
label_1149d0:
    // 0x1149d0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1149d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1149d4:
    // 0x1149d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1149d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1149d8:
    // 0x1149d8: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1149d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_1149dc:
    // 0x1149dc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1149dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1149e0:
    // 0x1149e0: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x1149e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_1149e4:
    // 0x1149e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1149e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1149e8:
    // 0x1149e8: 0x3c0141a8  lui         $at, 0x41A8
    ctx->pc = 0x1149e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16808 << 16));
label_1149ec:
    // 0x1149ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1149ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1149f0:
    // 0x1149f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1149f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1149f4:
    // 0x1149f4: 0x8c450220  lw          $a1, 0x220($v0)
    ctx->pc = 0x1149f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
label_1149f8:
    // 0x1149f8: 0x8c460224  lw          $a2, 0x224($v0)
    ctx->pc = 0x1149f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
label_1149fc:
    // 0x1149fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1149fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_114a00:
    // 0x114a00: 0xc0aa15e  jal         func_2A8578
label_114a04:
    if (ctx->pc == 0x114A04u) {
        ctx->pc = 0x114A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A00u;
        // 0x114a04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A08u;
        goto label_114a08;
    }
    ctx->pc = 0x114A00u;
    SET_GPR_U32(ctx, 31, 0x114A08u);
    ctx->pc = 0x114A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A00u;
    // 0x114a04: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114A00u, 0x114A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A08u;
label_114a08:
    // 0x114a08: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x114a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_114a0c:
    // 0x114a0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114a10:
    // 0x114a10: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x114a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_114a14:
    // 0x114a14: 0xc055f06  jal         func_157C18
label_114a18:
    if (ctx->pc == 0x114A18u) {
        ctx->pc = 0x114A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A14u;
        // 0x114a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A1Cu;
        goto label_114a1c;
    }
    ctx->pc = 0x114A14u;
    SET_GPR_U32(ctx, 31, 0x114A1Cu);
    ctx->pc = 0x114A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A14u;
    // 0x114a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x114A14u, 0x114A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A1Cu;
label_114a1c:
    // 0x114a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_114a20:
    if (ctx->pc == 0x114A20u) {
        ctx->pc = 0x114A24u;
        goto label_114a24;
    }
    ctx->pc = 0x114A1Cu;
    {
        const bool branch_taken_0x114a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114a1c) {
            ctx->pc = 0x114A3Cu;
            goto label_114a3c;
        }
    }
    ctx->pc = 0x114A24u;
label_114a24:
    // 0x114a24: 0xc0499dc  jal         func_126770
label_114a28:
    if (ctx->pc == 0x114A28u) {
        ctx->pc = 0x114A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A24u;
        // 0x114a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A2Cu;
        goto label_114a2c;
    }
    ctx->pc = 0x114A24u;
    SET_GPR_U32(ctx, 31, 0x114A2Cu);
    ctx->pc = 0x114A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A24u;
    // 0x114a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x114A24u, 0x114A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A2Cu;
label_114a2c:
    // 0x114a2c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x114a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_114a30:
    // 0x114a30: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x114a30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_114a34:
    // 0x114a34: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x114a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_114a38:
    // 0x114a38: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x114a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_114a3c:
    // 0x114a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_114a40:
    // 0x114a40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_114a44:
    // 0x114a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114a48:
    // 0x114a48: 0xc053e7c  jal         func_14F9F0
label_114a4c:
    if (ctx->pc == 0x114A4Cu) {
        ctx->pc = 0x114A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A48u;
        // 0x114a4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A50u;
        goto label_114a50;
    }
    ctx->pc = 0x114A48u;
    SET_GPR_U32(ctx, 31, 0x114A50u);
    ctx->pc = 0x114A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A48u;
    // 0x114a4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114A48u, 0x114A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A50u;
label_114a50:
    // 0x114a50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_114a54:
    // 0x114a54: 0xc053e4a  jal         func_14F928
label_114a58:
    if (ctx->pc == 0x114A58u) {
        ctx->pc = 0x114A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A54u;
        // 0x114a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A5Cu;
        goto label_114a5c;
    }
    ctx->pc = 0x114A54u;
    SET_GPR_U32(ctx, 31, 0x114A5Cu);
    ctx->pc = 0x114A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A54u;
    // 0x114a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x114A54u, 0x114A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A5Cu;
label_114a5c:
    // 0x114a5c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x114a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_114a60:
    // 0x114a60: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x114a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_114a64:
    // 0x114a64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_114a68:
    if (ctx->pc == 0x114A68u) {
        ctx->pc = 0x114A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A64u;
        // 0x114a68: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A6Cu;
        goto label_114a6c;
    }
    ctx->pc = 0x114A64u;
    {
        const bool branch_taken_0x114a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A64u;
        // 0x114a68: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a64) {
            ctx->pc = 0x114A78u;
            goto label_114a78;
        }
    }
    ctx->pc = 0x114A6Cu;
label_114a6c:
    // 0x114a6c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x114a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_114a70:
    // 0x114a70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114a74:
    // 0x114a74: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x114a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_114a78:
    // 0x114a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114a7c:
    // 0x114a7c: 0xc048e4e  jal         func_123938
label_114a80:
    if (ctx->pc == 0x114A80u) {
        ctx->pc = 0x114A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A7Cu;
        // 0x114a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A84u;
        goto label_114a84;
    }
    ctx->pc = 0x114A7Cu;
    SET_GPR_U32(ctx, 31, 0x114A84u);
    ctx->pc = 0x114A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A7Cu;
    // 0x114a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x114A7Cu, 0x114A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A84u;
label_114a84:
    // 0x114a84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_114a88:
    if (ctx->pc == 0x114A88u) {
        ctx->pc = 0x114A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A84u;
        // 0x114a88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A8Cu;
        goto label_114a8c;
    }
    ctx->pc = 0x114A84u;
    {
        const bool branch_taken_0x114a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A84u;
        // 0x114a88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a84) {
            ctx->pc = 0x114AA8u;
            goto label_114aa8;
        }
    }
    ctx->pc = 0x114A8Cu;
label_114a8c:
    // 0x114a8c: 0xc0499dc  jal         func_126770
label_114a90:
    if (ctx->pc == 0x114A90u) {
        ctx->pc = 0x114A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A8Cu;
        // 0x114a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114A94u;
        goto label_114a94;
    }
    ctx->pc = 0x114A8Cu;
    SET_GPR_U32(ctx, 31, 0x114A94u);
    ctx->pc = 0x114A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A8Cu;
    // 0x114a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x114A8Cu, 0x114A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A94u;
label_114a94:
    // 0x114a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114a98:
    // 0x114a98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114a9c:
    // 0x114a9c: 0xc0493d8  jal         func_124F60
label_114aa0:
    if (ctx->pc == 0x114AA0u) {
        ctx->pc = 0x114AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A9Cu;
        // 0x114aa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114AA4u;
        goto label_114aa4;
    }
    ctx->pc = 0x114A9Cu;
    SET_GPR_U32(ctx, 31, 0x114AA4u);
    ctx->pc = 0x114AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A9Cu;
    // 0x114aa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x114A9Cu, 0x114AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AA4u;
label_114aa4:
    // 0x114aa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x114aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_114aa8:
    // 0x114aa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x114aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_114aac:
    // 0x114aac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x114aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_114ab0:
    // 0x114ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114ab4:
    // 0x114ab4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x114ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_114ab8:
    // 0x114ab8: 0x3e00008  jr          $ra
label_114abc:
    if (ctx->pc == 0x114ABCu) {
        ctx->pc = 0x114ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB8u;
        // 0x114abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114AC0u;
        goto label_fallthrough_0x114ab8;
    }
    ctx->pc = 0x114AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB8u;
        // 0x114abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x114ab8:
    ctx->pc = 0x114AC0u;
}
