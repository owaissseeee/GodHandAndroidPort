#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_00799590
// Address: 0x799590 - 0x7998b0
void func_00799590_0x799590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799590_0x799590");
#endif

    switch (ctx->pc) {
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        case 0x799620u: goto label_799620;
        case 0x799624u: goto label_799624;
        case 0x799628u: goto label_799628;
        case 0x79962cu: goto label_79962c;
        case 0x799630u: goto label_799630;
        case 0x799634u: goto label_799634;
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        case 0x799660u: goto label_799660;
        case 0x799664u: goto label_799664;
        case 0x799668u: goto label_799668;
        case 0x79966cu: goto label_79966c;
        case 0x799670u: goto label_799670;
        case 0x799674u: goto label_799674;
        case 0x799678u: goto label_799678;
        case 0x79967cu: goto label_79967c;
        case 0x799680u: goto label_799680;
        case 0x799684u: goto label_799684;
        case 0x799688u: goto label_799688;
        case 0x79968cu: goto label_79968c;
        case 0x799690u: goto label_799690;
        case 0x799694u: goto label_799694;
        case 0x799698u: goto label_799698;
        case 0x79969cu: goto label_79969c;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996acu: goto label_7996ac;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        default: break;
    }

    ctx->pc = 0x799590u;

label_799590:
    // 0x799590: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_799594:
    // 0x799594: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x799594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_799598:
    // 0x799598: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_79959c:
    // 0x79959c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7995a0:
    // 0x7995a0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x7995a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_7995a4:
    // 0x7995a4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x7995a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_7995a8:
    // 0x7995a8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x7995a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_7995ac:
    // 0x7995ac: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x7995acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_7995b0:
    // 0x7995b0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x7995b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_7995b4:
    // 0x7995b4: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_7995b8:
    if (ctx->pc == 0x7995B8u) {
        ctx->pc = 0x7995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B4u;
        // 0x7995b8: 0xffbf00b0  sd          $ra, 0xB0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995BCu;
        goto label_7995bc;
    }
    ctx->pc = 0x7995B4u;
    {
        const bool branch_taken_0x7995b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B4u;
        // 0x7995b8: 0xffbf00b0  sd          $ra, 0xB0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b4) {
            ctx->pc = 0x7995D4u;
            goto label_7995d4;
        }
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7995c0:
    // 0x7995c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995c4:
    // 0x7995c4: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_7995c8:
    // 0x7995c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995cc:
    // 0x7995cc: 0xc0b016c  jal         func_2C05B0
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_7995d8:
    // 0x7995d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_7995dc:
    // 0x7995dc: 0x8ea2aac0  lw          $v0, -0x5540($s5)
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945472)));
label_7995e0:
    // 0x7995e0: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_7995e4:
    // 0x7995e4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_7995e8:
    // 0x7995e8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x7995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_7995ec:
    // 0x7995ec: 0xc0a4230  jal         func_2908C0
label_7995f0:
    if (ctx->pc == 0x7995F0u) {
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F4u;
        goto label_7995f4;
    }
    ctx->pc = 0x7995ECu;
    SET_GPR_U32(ctx, 31, 0x7995F4u);
    ctx->pc = 0x7995F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ECu;
    // 0x7995f0: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x7995ECu, 0x7995F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x2631ea60  addiu       $s1, $s1, -0x15A0
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
label_7995f8:
    // 0x7995f8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_7995fc:
    // 0x7995fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799600:
    // 0x799600: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
label_799604:
    // 0x799604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799608:
    // 0x799608: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_79960c:
    // 0x79960c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799610:
    // 0x799610: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_799614:
    // 0x799614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799618:
    // 0x799618: 0xc0a54b4  jal         func_2952D0
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    SET_GPR_U32(ctx, 31, 0x799620u);
    ctx->pc = 0x79961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799618u;
    // 0x79961c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799618u, 0x799620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799620u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799624:
    // 0x799624: 0xc0a54b4  jal         func_2952D0
label_799628:
    if (ctx->pc == 0x799628u) {
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79962Cu;
        goto label_79962c;
    }
    ctx->pc = 0x799624u;
    SET_GPR_U32(ctx, 31, 0x79962Cu);
    ctx->pc = 0x799628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799624u;
    // 0x799628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799624u, 0x79962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79962cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799630:
    // 0x799630: 0xc0a54b4  jal         func_2952D0
label_799634:
    if (ctx->pc == 0x799634u) {
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799638u;
        goto label_799638;
    }
    ctx->pc = 0x799630u;
    SET_GPR_U32(ctx, 31, 0x799638u);
    ctx->pc = 0x799634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799630u;
    // 0x799634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799630u, 0x799638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79963c:
    // 0x79963c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799640:
    // 0x799640: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x799640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_799644:
    // 0x799644: 0xc0a54b4  jal         func_2952D0
label_799648:
    if (ctx->pc == 0x799648u) {
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79964Cu;
        goto label_79964c;
    }
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_799650:
    // 0x799650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799654:
    // 0x799654: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x799654u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_799658:
    // 0x799658: 0xc0a54b4  jal         func_2952D0
label_79965c:
    if (ctx->pc == 0x79965Cu) {
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799660u;
        goto label_799660;
    }
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_799664:
    // 0x799664: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_799668:
    // 0x799668: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x799668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
label_79966c:
    // 0x79966c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799670:
    // 0x799670: 0xa3a20060  sb          $v0, 0x60($sp)
    ctx->pc = 0x799670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
label_799674:
    // 0x799674: 0xc0a54b4  jal         func_2952D0
label_799678:
    if (ctx->pc == 0x799678u) {
        ctx->pc = 0x799678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799674u;
        // 0x799678: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79967Cu;
        goto label_79967c;
    }
    ctx->pc = 0x799674u;
    SET_GPR_U32(ctx, 31, 0x79967Cu);
    ctx->pc = 0x799678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799674u;
    // 0x799678: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799674u, 0x79967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79967Cu;
label_79967c:
    // 0x79967c: 0x93a50060  lbu         $a1, 0x60($sp)
    ctx->pc = 0x79967cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_799680:
    // 0x799680: 0xc0a54b4  jal         func_2952D0
label_799684:
    if (ctx->pc == 0x799684u) {
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799688u;
        goto label_799688;
    }
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79968c:
    // 0x79968c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_799690:
    // 0x799690: 0xa3a30070  sb          $v1, 0x70($sp)
    ctx->pc = 0x799690u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 3));
label_799694:
    // 0x799694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799698:
    // 0x799698: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x799698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
label_79969c:
    // 0x79969c: 0xc0a54b4  jal         func_2952D0
label_7996a0:
    if (ctx->pc == 0x7996A0u) {
        ctx->pc = 0x7996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79969Cu;
        // 0x7996a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A4u;
        goto label_7996a4;
    }
    ctx->pc = 0x79969Cu;
    SET_GPR_U32(ctx, 31, 0x7996A4u);
    ctx->pc = 0x7996A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79969Cu;
    // 0x7996a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79969Cu, 0x7996A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x93a50080  lbu         $a1, 0x80($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_7996a8:
    // 0x7996a8: 0xc0a54b4  jal         func_2952D0
label_7996ac:
    if (ctx->pc == 0x7996ACu) {
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B0u;
        goto label_7996b0;
    }
    ctx->pc = 0x7996A8u;
    SET_GPR_U32(ctx, 31, 0x7996B0u);
    ctx->pc = 0x7996ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A8u;
    // 0x7996ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7996A8u, 0x7996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B0u;
label_7996b0:
    // 0x7996b0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_7996b4:
    // 0x7996b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_7996b8:
    // 0x7996b8: 0xa3a30090  sb          $v1, 0x90($sp)
    ctx->pc = 0x7996b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 3));
label_7996bc:
    // 0x7996bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996c0:
    // 0x7996c0: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x7996c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
label_7996c4:
    // 0x7996c4: 0xc0a54b4  jal         func_2952D0
label_7996c8:
    if (ctx->pc == 0x7996C8u) {
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996CCu;
        goto label_7996cc;
    }
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x93a500a0  lbu         $a1, 0xA0($sp)
    ctx->pc = 0x7996ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_7996d0:
    // 0x7996d0: 0xc0a54b4  jal         func_2952D0
label_7996d4:
    if (ctx->pc == 0x7996D4u) {
        ctx->pc = 0x7996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D0u;
        // 0x7996d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D8u;
        goto label_7996d8;
    }
    ctx->pc = 0x7996D0u;
    SET_GPR_U32(ctx, 31, 0x7996D8u);
    ctx->pc = 0x7996D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D0u;
    // 0x7996d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7996D0u, 0x7996D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7996dc:
    // 0x7996dc: 0xc0b0a7e  jal         func_2C29F8
label_7996e0:
    if (ctx->pc == 0x7996E0u) {
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E4u;
        goto label_7996e4;
    }
    ctx->pc = 0x7996DCu;
    SET_GPR_U32(ctx, 31, 0x7996E4u);
    ctx->pc = 0x7996E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996DCu;
    // 0x7996e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7996DCu, 0x7996E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E4u;
label_7996e4:
    // 0x7996e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7996e8:
    // 0x7996e8: 0xc0b0a7e  jal         func_2C29F8
label_7996ec:
    if (ctx->pc == 0x7996ECu) {
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F0u;
        goto label_7996f0;
    }
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7996f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7996f4:
    // 0x7996f4: 0xc0b0a54  jal         func_2C2950
label_7996f8:
    if (ctx->pc == 0x7996F8u) {
        ctx->pc = 0x7996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F4u;
        // 0x7996f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996FCu;
        goto label_7996fc;
    }
    ctx->pc = 0x7996F4u;
    SET_GPR_U32(ctx, 31, 0x7996FCu);
    ctx->pc = 0x7996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F4u;
    // 0x7996f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7996F4u, 0x7996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996FCu;
label_7996fc:
    // 0x7996fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799700:
    // 0x799700: 0xc0b0a54  jal         func_2C2950
label_799704:
    if (ctx->pc == 0x799704u) {
        ctx->pc = 0x799704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799700u;
        // 0x799704: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799708u;
        goto label_799708;
    }
    ctx->pc = 0x799700u;
    SET_GPR_U32(ctx, 31, 0x799708u);
    ctx->pc = 0x799704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799700u;
    // 0x799704: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799700u, 0x799708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799708u;
label_799708:
    // 0x799708: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_79970c:
    // 0x79970c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_799710:
    // 0x799710: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_799714:
    // 0x799714: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799718:
    // 0x799718: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_79971c:
    // 0x79971c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_799720:
    if (ctx->pc == 0x799720u) {
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799724u;
        goto label_799724;
    }
    ctx->pc = 0x79971Cu;
    {
        const bool branch_taken_0x79971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79971c) {
            ctx->pc = 0x799730u;
            goto label_799730;
        }
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799728:
    // 0x799728: 0xc0b0a7e  jal         func_2C29F8
label_79972c:
    if (ctx->pc == 0x79972Cu) {
        ctx->pc = 0x79972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799728u;
        // 0x79972c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799730u;
        goto label_799730;
    }
    ctx->pc = 0x799728u;
    SET_GPR_U32(ctx, 31, 0x799730u);
    ctx->pc = 0x79972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799728u;
    // 0x79972c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799728u, 0x799730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799730u;
label_799730:
    // 0x799730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799734:
    // 0x799734: 0xc0b0a7e  jal         func_2C29F8
label_799738:
    if (ctx->pc == 0x799738u) {
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79973Cu;
        goto label_79973c;
    }
    ctx->pc = 0x799734u;
    SET_GPR_U32(ctx, 31, 0x79973Cu);
    ctx->pc = 0x799738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799734u;
    // 0x799738: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799734u, 0x79973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_799740:
    // 0x799740: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799744:
    // 0x799744: 0xc0b0a7e  jal         func_2C29F8
label_799748:
    if (ctx->pc == 0x799748u) {
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79974Cu;
        goto label_79974c;
    }
    ctx->pc = 0x799744u;
    SET_GPR_U32(ctx, 31, 0x79974Cu);
    ctx->pc = 0x799748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799744u;
    // 0x799748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799744u, 0x79974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79974Cu;
label_79974c:
    // 0x79974c: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_799750:
    // 0x799750: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_799754:
    // 0x799754: 0x8ca37a8c  lw          $v1, 0x7A8C($a1)
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31372)));
label_799758:
    // 0x799758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_79975c:
    // 0x79975c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_799760:
    // 0x799760: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799764:
    // 0x799764: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_799768:
    // 0x799768: 0x16600031  bnez        $s3, . + 4 + (0x31 << 2)
label_79976c:
    if (ctx->pc == 0x79976Cu) {
        ctx->pc = 0x79976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799768u;
        // 0x79976c: 0xaca37a8c  sw          $v1, 0x7A8C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799770u;
        goto label_799770;
    }
    ctx->pc = 0x799768u;
    {
        const bool branch_taken_0x799768 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x79976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799768u;
        // 0x79976c: 0xaca37a8c  sw          $v1, 0x7A8C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799768) {
            ctx->pc = 0x799830u;
            goto label_799830;
        }
    }
    ctx->pc = 0x799770u;
label_799770:
    // 0x799770: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_799774:
    // 0x799774: 0x8e848658  lw          $a0, -0x79A8($s4)
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799778:
    // 0x799778: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_79977c:
    // 0x79977c: 0xaca27a8c  sw          $v0, 0x7A8C($a1)
    ctx->pc = 0x79977cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31372), GPR_U32(ctx, 2));
label_799780:
    // 0x799780: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799784:
    // 0x799784: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_799788:
    // 0x799788: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_79978c:
    if (ctx->pc == 0x79978Cu) {
        ctx->pc = 0x79978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799788u;
        // 0x79978c: 0x8eb0aac0  lw          $s0, -0x5540($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799790u;
        goto label_799790;
    }
    ctx->pc = 0x799788u;
    {
        const bool branch_taken_0x799788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799788u;
        // 0x79978c: 0x8eb0aac0  lw          $s0, -0x5540($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799788) {
            ctx->pc = 0x79981Cu;
            goto label_79981c;
        }
    }
    ctx->pc = 0x799790u;
label_799790:
    // 0x799790: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799794:
    // 0x799794: 0x240403bd  addiu       $a0, $zero, 0x3BD
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 957));
label_799798:
    // 0x799798: 0xc0c3ea6  jal         func_30FA98
label_79979c:
    if (ctx->pc == 0x79979Cu) {
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A0u;
        goto label_7997a0;
    }
    ctx->pc = 0x799798u;
    SET_GPR_U32(ctx, 31, 0x7997A0u);
    ctx->pc = 0x79979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799798u;
    // 0x79979c: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799798u, 0x7997A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A0u;
label_7997a0:
    // 0x7997a0: 0x2651aa80  addiu       $s1, $s2, -0x5580
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945408));
label_7997a4:
    // 0x7997a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7997a8:
    // 0x7997a8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_7997ac:
    if (ctx->pc == 0x7997ACu) {
        ctx->pc = 0x7997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A8u;
        // 0x7997ac: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B0u;
        goto label_7997b0;
    }
    ctx->pc = 0x7997A8u;
    {
        const bool branch_taken_0x7997a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A8u;
        // 0x7997ac: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a8) {
            ctx->pc = 0x7997FCu;
            goto label_7997fc;
        }
    }
    ctx->pc = 0x7997B0u;
label_7997b0:
    // 0x7997b0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_7997b4:
    // 0x7997b4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7997b8:
    // 0x7997b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7997bc:
    // 0x7997bc: 0x40f809  jalr        $v0
label_7997c0:
    if (ctx->pc == 0x7997C0u) {
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C4u;
        goto label_7997c4;
    }
    ctx->pc = 0x7997BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7997C4u);
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997BCu, 0x7997C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7997c8:
    // 0x7997c8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_7997cc:
    // 0x7997cc: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_7997d0:
    if (ctx->pc == 0x7997D0u) {
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0xc640aa80  lwc1        $f0, -0x5580($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294945408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D4u;
        goto label_7997d4;
    }
    ctx->pc = 0x7997CCu;
    {
        const bool branch_taken_0x7997cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0xc640aa80  lwc1        $f0, -0x5580($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294945408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997cc) {
            ctx->pc = 0x7997E8u;
            goto label_7997e8;
        }
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x7997d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_7997d8:
    // 0x7997d8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x7997d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7997dc:
    // 0x7997dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7997dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_7997e0:
    // 0x7997e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x7997e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7997e4:
    // 0x7997e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7997e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7997e8:
    // 0x7997e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7997ec:
    // 0x7997ec: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x7997ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_7997f0:
    // 0x7997f0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_7997f4:
    // 0x7997f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x7997f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_7997f8:
    // 0x7997f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x7997f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_7997fc:
    // 0x7997fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_799800:
    // 0x799800: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_799804:
    // 0x799804: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x799804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_799808:
    // 0x799808: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_79980c:
    // 0x79980c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x79980cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_799810:
    // 0x799810: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_799814:
    // 0x799814: 0x10000006  b           . + 4 + (0x6 << 2)
label_799818:
    if (ctx->pc == 0x799818u) {
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79981Cu;
        goto label_79981c;
    }
    ctx->pc = 0x799814u;
    {
        const bool branch_taken_0x799814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799814) {
            ctx->pc = 0x799830u;
            goto label_799830;
        }
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799820:
    // 0x799820: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799824:
    // 0x799824: 0x24a5a0a0  addiu       $a1, $a1, -0x5F60
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942880));
label_799828:
    // 0x799828: 0xc0b0e24  jal         func_2C3890
label_79982c:
    if (ctx->pc == 0x79982Cu) {
        ctx->pc = 0x79982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799828u;
        // 0x79982c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799830u;
        goto label_799830;
    }
    ctx->pc = 0x799828u;
    SET_GPR_U32(ctx, 31, 0x799830u);
    ctx->pc = 0x79982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799828u;
    // 0x79982c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799828u, 0x799830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799830u;
label_799830:
    // 0x799830: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799834:
    // 0x799834: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_799838:
    // 0x799838: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79983c:
    // 0x79983c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799840:
    // 0x799840: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_799844:
    if (ctx->pc == 0x799844u) {
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x26d0ea60  addiu       $s0, $s6, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799848u;
        goto label_799848;
    }
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x26d0ea60  addiu       $s0, $s6, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799840) {
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79984c:
    // 0x79984c: 0xc0b0ab8  jal         func_2C2AE0
label_799850:
    if (ctx->pc == 0x799850u) {
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799854u;
        goto label_799854;
    }
    ctx->pc = 0x79984Cu;
    SET_GPR_U32(ctx, 31, 0x799854u);
    ctx->pc = 0x799850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79984Cu;
    // 0x799850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79984Cu, 0x799854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799854u;
label_799854:
    // 0x799854: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799858:
    // 0x799858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79985c:
    // 0x79985c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799860:
    // 0x799860: 0x24e7a288  addiu       $a3, $a3, -0x5D78
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943368));
label_799864:
    // 0x799864: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799868:
    // 0x799868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79986c:
    // 0x79986c: 0xc0b09d4  jal         func_2C2750
label_799870:
    if (ctx->pc == 0x799870u) {
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799874u;
        goto label_799874;
    }
    ctx->pc = 0x79986Cu;
    SET_GPR_U32(ctx, 31, 0x799874u);
    ctx->pc = 0x799870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79986Cu;
    // 0x799870: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x79986Cu, 0x799874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0xc1e697e  jal         func_79A5F8
label_799878:
    if (ctx->pc == 0x799878u) {
        ctx->pc = 0x79987Cu;
        goto label_79987c;
    }
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x79A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5F8u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799880:
    // 0x799880: 0xc0b5692  jal         func_2D5A48
label_799884:
    if (ctx->pc == 0x799884u) {
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799888u;
        goto label_799888;
    }
    ctx->pc = 0x799880u;
    SET_GPR_U32(ctx, 31, 0x799888u);
    ctx->pc = 0x799884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799880u;
    // 0x799884: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799880u, 0x799888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x799888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79988c:
    // 0x79988c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x79988cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_799890:
    // 0x799890: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x799890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_799894:
    // 0x799894: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x799894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_799898:
    // 0x799898: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x799898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79989c:
    // 0x79989c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x79989cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_7998a0:
    // 0x7998a0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x7998a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7998a4:
    // 0x7998a4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_7998a8:
    // 0x7998a8: 0x3e00008  jr          $ra
label_7998ac:
    if (ctx->pc == 0x7998ACu) {
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B0u;
        goto label_fallthrough_0x7998a8;
    }
    ctx->pc = 0x7998A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7998a8:
    ctx->pc = 0x7998B0u;
}
} // namespace gh_r200
