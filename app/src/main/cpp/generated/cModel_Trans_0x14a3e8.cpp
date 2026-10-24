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

// Function: cModel_Trans
// Address: 0x14a3e8 - 0x14a910
void cModel_Trans_0x14a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_Trans_0x14a3e8");
#endif

    switch (ctx->pc) {
        case 0x14a3e8u: goto label_14a3e8;
        case 0x14a3ecu: goto label_14a3ec;
        case 0x14a3f0u: goto label_14a3f0;
        case 0x14a3f4u: goto label_14a3f4;
        case 0x14a3f8u: goto label_14a3f8;
        case 0x14a3fcu: goto label_14a3fc;
        case 0x14a400u: goto label_14a400;
        case 0x14a404u: goto label_14a404;
        case 0x14a408u: goto label_14a408;
        case 0x14a40cu: goto label_14a40c;
        case 0x14a410u: goto label_14a410;
        case 0x14a414u: goto label_14a414;
        case 0x14a418u: goto label_14a418;
        case 0x14a41cu: goto label_14a41c;
        case 0x14a420u: goto label_14a420;
        case 0x14a424u: goto label_14a424;
        case 0x14a428u: goto label_14a428;
        case 0x14a42cu: goto label_14a42c;
        case 0x14a430u: goto label_14a430;
        case 0x14a434u: goto label_14a434;
        case 0x14a438u: goto label_14a438;
        case 0x14a43cu: goto label_14a43c;
        case 0x14a440u: goto label_14a440;
        case 0x14a444u: goto label_14a444;
        case 0x14a448u: goto label_14a448;
        case 0x14a44cu: goto label_14a44c;
        case 0x14a450u: goto label_14a450;
        case 0x14a454u: goto label_14a454;
        case 0x14a458u: goto label_14a458;
        case 0x14a45cu: goto label_14a45c;
        case 0x14a460u: goto label_14a460;
        case 0x14a464u: goto label_14a464;
        case 0x14a468u: goto label_14a468;
        case 0x14a46cu: goto label_14a46c;
        case 0x14a470u: goto label_14a470;
        case 0x14a474u: goto label_14a474;
        case 0x14a478u: goto label_14a478;
        case 0x14a47cu: goto label_14a47c;
        case 0x14a480u: goto label_14a480;
        case 0x14a484u: goto label_14a484;
        case 0x14a488u: goto label_14a488;
        case 0x14a48cu: goto label_14a48c;
        case 0x14a490u: goto label_14a490;
        case 0x14a494u: goto label_14a494;
        case 0x14a498u: goto label_14a498;
        case 0x14a49cu: goto label_14a49c;
        case 0x14a4a0u: goto label_14a4a0;
        case 0x14a4a4u: goto label_14a4a4;
        case 0x14a4a8u: goto label_14a4a8;
        case 0x14a4acu: goto label_14a4ac;
        case 0x14a4b0u: goto label_14a4b0;
        case 0x14a4b4u: goto label_14a4b4;
        case 0x14a4b8u: goto label_14a4b8;
        case 0x14a4bcu: goto label_14a4bc;
        case 0x14a4c0u: goto label_14a4c0;
        case 0x14a4c4u: goto label_14a4c4;
        case 0x14a4c8u: goto label_14a4c8;
        case 0x14a4ccu: goto label_14a4cc;
        case 0x14a4d0u: goto label_14a4d0;
        case 0x14a4d4u: goto label_14a4d4;
        case 0x14a4d8u: goto label_14a4d8;
        case 0x14a4dcu: goto label_14a4dc;
        case 0x14a4e0u: goto label_14a4e0;
        case 0x14a4e4u: goto label_14a4e4;
        case 0x14a4e8u: goto label_14a4e8;
        case 0x14a4ecu: goto label_14a4ec;
        case 0x14a4f0u: goto label_14a4f0;
        case 0x14a4f4u: goto label_14a4f4;
        case 0x14a4f8u: goto label_14a4f8;
        case 0x14a4fcu: goto label_14a4fc;
        case 0x14a500u: goto label_14a500;
        case 0x14a504u: goto label_14a504;
        case 0x14a508u: goto label_14a508;
        case 0x14a50cu: goto label_14a50c;
        case 0x14a510u: goto label_14a510;
        case 0x14a514u: goto label_14a514;
        case 0x14a518u: goto label_14a518;
        case 0x14a51cu: goto label_14a51c;
        case 0x14a520u: goto label_14a520;
        case 0x14a524u: goto label_14a524;
        case 0x14a528u: goto label_14a528;
        case 0x14a52cu: goto label_14a52c;
        case 0x14a530u: goto label_14a530;
        case 0x14a534u: goto label_14a534;
        case 0x14a538u: goto label_14a538;
        case 0x14a53cu: goto label_14a53c;
        case 0x14a540u: goto label_14a540;
        case 0x14a544u: goto label_14a544;
        case 0x14a548u: goto label_14a548;
        case 0x14a54cu: goto label_14a54c;
        case 0x14a550u: goto label_14a550;
        case 0x14a554u: goto label_14a554;
        case 0x14a558u: goto label_14a558;
        case 0x14a55cu: goto label_14a55c;
        case 0x14a560u: goto label_14a560;
        case 0x14a564u: goto label_14a564;
        case 0x14a568u: goto label_14a568;
        case 0x14a56cu: goto label_14a56c;
        case 0x14a570u: goto label_14a570;
        case 0x14a574u: goto label_14a574;
        case 0x14a578u: goto label_14a578;
        case 0x14a57cu: goto label_14a57c;
        case 0x14a580u: goto label_14a580;
        case 0x14a584u: goto label_14a584;
        case 0x14a588u: goto label_14a588;
        case 0x14a58cu: goto label_14a58c;
        case 0x14a590u: goto label_14a590;
        case 0x14a594u: goto label_14a594;
        case 0x14a598u: goto label_14a598;
        case 0x14a59cu: goto label_14a59c;
        case 0x14a5a0u: goto label_14a5a0;
        case 0x14a5a4u: goto label_14a5a4;
        case 0x14a5a8u: goto label_14a5a8;
        case 0x14a5acu: goto label_14a5ac;
        case 0x14a5b0u: goto label_14a5b0;
        case 0x14a5b4u: goto label_14a5b4;
        case 0x14a5b8u: goto label_14a5b8;
        case 0x14a5bcu: goto label_14a5bc;
        case 0x14a5c0u: goto label_14a5c0;
        case 0x14a5c4u: goto label_14a5c4;
        case 0x14a5c8u: goto label_14a5c8;
        case 0x14a5ccu: goto label_14a5cc;
        case 0x14a5d0u: goto label_14a5d0;
        case 0x14a5d4u: goto label_14a5d4;
        case 0x14a5d8u: goto label_14a5d8;
        case 0x14a5dcu: goto label_14a5dc;
        case 0x14a5e0u: goto label_14a5e0;
        case 0x14a5e4u: goto label_14a5e4;
        case 0x14a5e8u: goto label_14a5e8;
        case 0x14a5ecu: goto label_14a5ec;
        case 0x14a5f0u: goto label_14a5f0;
        case 0x14a5f4u: goto label_14a5f4;
        case 0x14a5f8u: goto label_14a5f8;
        case 0x14a5fcu: goto label_14a5fc;
        case 0x14a600u: goto label_14a600;
        case 0x14a604u: goto label_14a604;
        case 0x14a608u: goto label_14a608;
        case 0x14a60cu: goto label_14a60c;
        case 0x14a610u: goto label_14a610;
        case 0x14a614u: goto label_14a614;
        case 0x14a618u: goto label_14a618;
        case 0x14a61cu: goto label_14a61c;
        case 0x14a620u: goto label_14a620;
        case 0x14a624u: goto label_14a624;
        case 0x14a628u: goto label_14a628;
        case 0x14a62cu: goto label_14a62c;
        case 0x14a630u: goto label_14a630;
        case 0x14a634u: goto label_14a634;
        case 0x14a638u: goto label_14a638;
        case 0x14a63cu: goto label_14a63c;
        case 0x14a640u: goto label_14a640;
        case 0x14a644u: goto label_14a644;
        case 0x14a648u: goto label_14a648;
        case 0x14a64cu: goto label_14a64c;
        case 0x14a650u: goto label_14a650;
        case 0x14a654u: goto label_14a654;
        case 0x14a658u: goto label_14a658;
        case 0x14a65cu: goto label_14a65c;
        case 0x14a660u: goto label_14a660;
        case 0x14a664u: goto label_14a664;
        case 0x14a668u: goto label_14a668;
        case 0x14a66cu: goto label_14a66c;
        case 0x14a670u: goto label_14a670;
        case 0x14a674u: goto label_14a674;
        case 0x14a678u: goto label_14a678;
        case 0x14a67cu: goto label_14a67c;
        case 0x14a680u: goto label_14a680;
        case 0x14a684u: goto label_14a684;
        case 0x14a688u: goto label_14a688;
        case 0x14a68cu: goto label_14a68c;
        case 0x14a690u: goto label_14a690;
        case 0x14a694u: goto label_14a694;
        case 0x14a698u: goto label_14a698;
        case 0x14a69cu: goto label_14a69c;
        case 0x14a6a0u: goto label_14a6a0;
        case 0x14a6a4u: goto label_14a6a4;
        case 0x14a6a8u: goto label_14a6a8;
        case 0x14a6acu: goto label_14a6ac;
        case 0x14a6b0u: goto label_14a6b0;
        case 0x14a6b4u: goto label_14a6b4;
        case 0x14a6b8u: goto label_14a6b8;
        case 0x14a6bcu: goto label_14a6bc;
        case 0x14a6c0u: goto label_14a6c0;
        case 0x14a6c4u: goto label_14a6c4;
        case 0x14a6c8u: goto label_14a6c8;
        case 0x14a6ccu: goto label_14a6cc;
        case 0x14a6d0u: goto label_14a6d0;
        case 0x14a6d4u: goto label_14a6d4;
        case 0x14a6d8u: goto label_14a6d8;
        case 0x14a6dcu: goto label_14a6dc;
        case 0x14a6e0u: goto label_14a6e0;
        case 0x14a6e4u: goto label_14a6e4;
        case 0x14a6e8u: goto label_14a6e8;
        case 0x14a6ecu: goto label_14a6ec;
        case 0x14a6f0u: goto label_14a6f0;
        case 0x14a6f4u: goto label_14a6f4;
        case 0x14a6f8u: goto label_14a6f8;
        case 0x14a6fcu: goto label_14a6fc;
        case 0x14a700u: goto label_14a700;
        case 0x14a704u: goto label_14a704;
        case 0x14a708u: goto label_14a708;
        case 0x14a70cu: goto label_14a70c;
        case 0x14a710u: goto label_14a710;
        case 0x14a714u: goto label_14a714;
        case 0x14a718u: goto label_14a718;
        case 0x14a71cu: goto label_14a71c;
        case 0x14a720u: goto label_14a720;
        case 0x14a724u: goto label_14a724;
        case 0x14a728u: goto label_14a728;
        case 0x14a72cu: goto label_14a72c;
        case 0x14a730u: goto label_14a730;
        case 0x14a734u: goto label_14a734;
        case 0x14a738u: goto label_14a738;
        case 0x14a73cu: goto label_14a73c;
        case 0x14a740u: goto label_14a740;
        case 0x14a744u: goto label_14a744;
        case 0x14a748u: goto label_14a748;
        case 0x14a74cu: goto label_14a74c;
        case 0x14a750u: goto label_14a750;
        case 0x14a754u: goto label_14a754;
        case 0x14a758u: goto label_14a758;
        case 0x14a75cu: goto label_14a75c;
        case 0x14a760u: goto label_14a760;
        case 0x14a764u: goto label_14a764;
        case 0x14a768u: goto label_14a768;
        case 0x14a76cu: goto label_14a76c;
        case 0x14a770u: goto label_14a770;
        case 0x14a774u: goto label_14a774;
        case 0x14a778u: goto label_14a778;
        case 0x14a77cu: goto label_14a77c;
        case 0x14a780u: goto label_14a780;
        case 0x14a784u: goto label_14a784;
        case 0x14a788u: goto label_14a788;
        case 0x14a78cu: goto label_14a78c;
        case 0x14a790u: goto label_14a790;
        case 0x14a794u: goto label_14a794;
        case 0x14a798u: goto label_14a798;
        case 0x14a79cu: goto label_14a79c;
        case 0x14a7a0u: goto label_14a7a0;
        case 0x14a7a4u: goto label_14a7a4;
        case 0x14a7a8u: goto label_14a7a8;
        case 0x14a7acu: goto label_14a7ac;
        case 0x14a7b0u: goto label_14a7b0;
        case 0x14a7b4u: goto label_14a7b4;
        case 0x14a7b8u: goto label_14a7b8;
        case 0x14a7bcu: goto label_14a7bc;
        case 0x14a7c0u: goto label_14a7c0;
        case 0x14a7c4u: goto label_14a7c4;
        case 0x14a7c8u: goto label_14a7c8;
        case 0x14a7ccu: goto label_14a7cc;
        case 0x14a7d0u: goto label_14a7d0;
        case 0x14a7d4u: goto label_14a7d4;
        case 0x14a7d8u: goto label_14a7d8;
        case 0x14a7dcu: goto label_14a7dc;
        case 0x14a7e0u: goto label_14a7e0;
        case 0x14a7e4u: goto label_14a7e4;
        case 0x14a7e8u: goto label_14a7e8;
        case 0x14a7ecu: goto label_14a7ec;
        case 0x14a7f0u: goto label_14a7f0;
        case 0x14a7f4u: goto label_14a7f4;
        case 0x14a7f8u: goto label_14a7f8;
        case 0x14a7fcu: goto label_14a7fc;
        case 0x14a800u: goto label_14a800;
        case 0x14a804u: goto label_14a804;
        case 0x14a808u: goto label_14a808;
        case 0x14a80cu: goto label_14a80c;
        case 0x14a810u: goto label_14a810;
        case 0x14a814u: goto label_14a814;
        case 0x14a818u: goto label_14a818;
        case 0x14a81cu: goto label_14a81c;
        case 0x14a820u: goto label_14a820;
        case 0x14a824u: goto label_14a824;
        case 0x14a828u: goto label_14a828;
        case 0x14a82cu: goto label_14a82c;
        case 0x14a830u: goto label_14a830;
        case 0x14a834u: goto label_14a834;
        case 0x14a838u: goto label_14a838;
        case 0x14a83cu: goto label_14a83c;
        case 0x14a840u: goto label_14a840;
        case 0x14a844u: goto label_14a844;
        case 0x14a848u: goto label_14a848;
        case 0x14a84cu: goto label_14a84c;
        case 0x14a850u: goto label_14a850;
        case 0x14a854u: goto label_14a854;
        case 0x14a858u: goto label_14a858;
        case 0x14a85cu: goto label_14a85c;
        case 0x14a860u: goto label_14a860;
        case 0x14a864u: goto label_14a864;
        case 0x14a868u: goto label_14a868;
        case 0x14a86cu: goto label_14a86c;
        case 0x14a870u: goto label_14a870;
        case 0x14a874u: goto label_14a874;
        case 0x14a878u: goto label_14a878;
        case 0x14a87cu: goto label_14a87c;
        case 0x14a880u: goto label_14a880;
        case 0x14a884u: goto label_14a884;
        case 0x14a888u: goto label_14a888;
        case 0x14a88cu: goto label_14a88c;
        case 0x14a890u: goto label_14a890;
        case 0x14a894u: goto label_14a894;
        case 0x14a898u: goto label_14a898;
        case 0x14a89cu: goto label_14a89c;
        case 0x14a8a0u: goto label_14a8a0;
        case 0x14a8a4u: goto label_14a8a4;
        case 0x14a8a8u: goto label_14a8a8;
        case 0x14a8acu: goto label_14a8ac;
        case 0x14a8b0u: goto label_14a8b0;
        case 0x14a8b4u: goto label_14a8b4;
        case 0x14a8b8u: goto label_14a8b8;
        case 0x14a8bcu: goto label_14a8bc;
        case 0x14a8c0u: goto label_14a8c0;
        case 0x14a8c4u: goto label_14a8c4;
        case 0x14a8c8u: goto label_14a8c8;
        case 0x14a8ccu: goto label_14a8cc;
        case 0x14a8d0u: goto label_14a8d0;
        case 0x14a8d4u: goto label_14a8d4;
        case 0x14a8d8u: goto label_14a8d8;
        case 0x14a8dcu: goto label_14a8dc;
        case 0x14a8e0u: goto label_14a8e0;
        case 0x14a8e4u: goto label_14a8e4;
        case 0x14a8e8u: goto label_14a8e8;
        case 0x14a8ecu: goto label_14a8ec;
        case 0x14a8f0u: goto label_14a8f0;
        case 0x14a8f4u: goto label_14a8f4;
        case 0x14a8f8u: goto label_14a8f8;
        case 0x14a8fcu: goto label_14a8fc;
        case 0x14a900u: goto label_14a900;
        case 0x14a904u: goto label_14a904;
        case 0x14a908u: goto label_14a908;
        case 0x14a90cu: goto label_14a90c;
        default: break;
    }

    ctx->pc = 0x14a3e8u;

label_14a3e8:
    // 0x14a3e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_14a3ec:
    // 0x14a3ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_14a3f0:
    // 0x14a3f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x14a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_14a3f4:
    // 0x14a3f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_14a3f8:
    // 0x14a3f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14a3fc:
    // 0x14a3fc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x14a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_14a400:
    // 0x14a400: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14a404:
    // 0x14a404: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x14a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_14a408:
    // 0x14a408: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14a40c:
    // 0x14a40c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x14a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_14a410:
    // 0x14a410: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x14a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_14a414:
    // 0x14a414: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x14a414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_14a418:
    // 0x14a418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14a41c:
    // 0x14a41c: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30384)));
label_14a420:
    // 0x14a420: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x14a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_14a424:
    // 0x14a424: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_14a428:
    if (ctx->pc == 0x14A428u) {
        ctx->pc = 0x14A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A424u;
        // 0x14a428: 0x30720001  andi        $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A42Cu;
        goto label_14a42c;
    }
    ctx->pc = 0x14A424u;
    {
        const bool branch_taken_0x14a424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x14A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A424u;
        // 0x14a428: 0x30720001  andi        $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a424) {
            ctx->pc = 0x14A440u;
            goto label_14a440;
        }
    }
    ctx->pc = 0x14A42Cu;
label_14a42c:
    // 0x14a42c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_14a430:
    // 0x14a430: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_14a434:
    // 0x14a434: 0xc0c69ac  jal         func_31A6B0
label_14a438:
    if (ctx->pc == 0x14A438u) {
        ctx->pc = 0x14A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A434u;
        // 0x14a438: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A43Cu;
        goto label_14a43c;
    }
    ctx->pc = 0x14A434u;
    SET_GPR_U32(ctx, 31, 0x14A43Cu);
    ctx->pc = 0x14A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A434u;
    // 0x14a438: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A6B0u, 0x14A434u, 0x14A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A43Cu;
label_14a43c:
    // 0x14a43c: 0xa62202ac  sh          $v0, 0x2AC($s1)
    ctx->pc = 0x14a43cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 684), (uint16_t)GPR_U32(ctx, 2));
label_14a440:
    // 0x14a440: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_14a444:
    // 0x14a444: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_14a448:
    // 0x14a448: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_14a44c:
    // 0x14a44c: 0x40f809  jalr        $v0
label_14a450:
    if (ctx->pc == 0x14A450u) {
        ctx->pc = 0x14A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A44Cu;
        // 0x14a450: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A454u;
        goto label_14a454;
    }
    ctx->pc = 0x14A44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14A454u);
        ctx->pc = 0x14A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A44Cu;
        // 0x14a450: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A44Cu, 0x14A454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A454u;
label_14a454:
    // 0x14a454: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
label_14a458:
    if (ctx->pc == 0x14A458u) {
        ctx->pc = 0x14A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A454u;
        // 0x14a458: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A45Cu;
        goto label_14a45c;
    }
    ctx->pc = 0x14A454u;
    {
        const bool branch_taken_0x14a454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A454u;
        // 0x14a458: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a454) {
            ctx->pc = 0x14A8E4u;
            goto label_14a8e4;
        }
    }
    ctx->pc = 0x14A45Cu;
label_14a45c:
    // 0x14a45c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x14a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_14a460:
    // 0x14a460: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x14a460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_14a464:
    // 0x14a464: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14a468:
    // 0x14a468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14a46c:
    if (ctx->pc == 0x14A46Cu) {
        ctx->pc = 0x14A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A468u;
        // 0x14a46c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A470u;
        goto label_14a470;
    }
    ctx->pc = 0x14A468u;
    {
        const bool branch_taken_0x14a468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A468u;
        // 0x14a46c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a468) {
            ctx->pc = 0x14A47Cu;
            goto label_14a47c;
        }
    }
    ctx->pc = 0x14A470u;
label_14a470:
    // 0x14a470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a474:
    // 0x14a474: 0xc05360a  jal         func_14D828
label_14a478:
    if (ctx->pc == 0x14A478u) {
        ctx->pc = 0x14A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A474u;
        // 0x14a478: 0x24a54700  addiu       $a1, $a1, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A47Cu;
        goto label_14a47c;
    }
    ctx->pc = 0x14A474u;
    SET_GPR_U32(ctx, 31, 0x14A47Cu);
    ctx->pc = 0x14A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A474u;
    // 0x14a478: 0x24a54700  addiu       $a1, $a1, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D828u, 0x14A474u, 0x14A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A47Cu;
label_14a47c:
    // 0x14a47c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x14a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_14a480:
    // 0x14a480: 0x822202b5  lb          $v0, 0x2B5($s1)
    ctx->pc = 0x14a480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 693)));
label_14a484:
    // 0x14a484: 0x862602ac  lh          $a2, 0x2AC($s1)
    ctx->pc = 0x14a484u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
label_14a488:
    // 0x14a488: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x14a488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_14a48c:
    // 0x14a48c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x14a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_14a490:
    // 0x14a490: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_14a494:
    // 0x14a494: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x14a494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_14a498:
    // 0x14a498: 0xa0f809  jalr        $a1
label_14a49c:
    if (ctx->pc == 0x14A49Cu) {
        ctx->pc = 0x14A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A498u;
        // 0x14a49c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A4A0u;
        goto label_14a4a0;
    }
    ctx->pc = 0x14A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x14A4A0u);
        ctx->pc = 0x14A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A498u;
        // 0x14a49c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A498u, 0x14A4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A4A0u;
label_14a4a0:
    // 0x14a4a0: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x14a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_14a4a4:
    // 0x14a4a4: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x14a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_14a4a8:
    // 0x14a4a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14a4ac:
    // 0x14a4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a4b0:
    // 0x14a4b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14a4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14a4b4:
    // 0x14a4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a4b8:
    // 0x14a4b8: 0xc052dbe  jal         func_14B6F8
label_14a4bc:
    if (ctx->pc == 0x14A4BCu) {
        ctx->pc = 0x14A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4B8u;
        // 0x14a4bc: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A4C0u;
        goto label_14a4c0;
    }
    ctx->pc = 0x14A4B8u;
    SET_GPR_U32(ctx, 31, 0x14A4C0u);
    ctx->pc = 0x14A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4B8u;
    // 0x14a4bc: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14A4B8u, 0x14A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4C0u;
label_14a4c0:
    // 0x14a4c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x14a4c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a4c4:
    // 0x14a4c4: 0x51000107  beql        $t0, $zero, . + 4 + (0x107 << 2)
label_14a4c8:
    if (ctx->pc == 0x14A4C8u) {
        ctx->pc = 0x14A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4C4u;
        // 0x14a4c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A4CCu;
        goto label_14a4cc;
    }
    ctx->pc = 0x14A4C4u;
    {
        const bool branch_taken_0x14a4c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a4c4) {
            ctx->pc = 0x14A4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A4C4u;
            // 0x14a4c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8E4u;
            goto label_14a8e4;
        }
    }
    ctx->pc = 0x14A4CCu;
label_14a4cc:
    // 0x14a4cc: 0x8d020380  lw          $v0, 0x380($t0)
    ctx->pc = 0x14a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
label_14a4d0:
    // 0x14a4d0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_14a4d4:
    // 0x14a4d4: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
label_14a4d8:
    if (ctx->pc == 0x14A4D8u) {
        ctx->pc = 0x14A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4D4u;
        // 0x14a4d8: 0x962302b2  lhu         $v1, 0x2B2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A4DCu;
        goto label_14a4dc;
    }
    ctx->pc = 0x14A4D4u;
    {
        const bool branch_taken_0x14a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4d4) {
            ctx->pc = 0x14A4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A4D4u;
            // 0x14a4d8: 0x962302b2  lhu         $v1, 0x2B2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A620u;
            goto label_14a620;
        }
    }
    ctx->pc = 0x14A4DCu;
label_14a4dc:
    // 0x14a4dc: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_14a4e0:
    // 0x14a4e0: 0x443002b  bgezl       $v0, . + 4 + (0x2B << 2)
label_14a4e4:
    if (ctx->pc == 0x14A4E4u) {
        ctx->pc = 0x14A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4E0u;
        // 0x14a4e4: 0x862202ae  lh          $v0, 0x2AE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 686)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A4E8u;
        goto label_14a4e8;
    }
    ctx->pc = 0x14A4E0u;
    {
        const bool branch_taken_0x14a4e0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x14a4e0) {
            ctx->pc = 0x14A4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A4E0u;
            // 0x14a4e4: 0x862202ae  lh          $v0, 0x2AE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 686)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A590u;
            goto label_14a590;
        }
    }
    ctx->pc = 0x14A4E8u;
label_14a4e8:
    // 0x14a4e8: 0x862302ae  lh          $v1, 0x2AE($s1)
    ctx->pc = 0x14a4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 686)));
label_14a4ec:
    // 0x14a4ec: 0x922402b0  lbu         $a0, 0x2B0($s1)
    ctx->pc = 0x14a4ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 688)));
label_14a4f0:
    // 0x14a4f0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14a4f4:
    // 0x14a4f4: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x14a4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_14a4f8:
    // 0x14a4f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_14a4fc:
    if (ctx->pc == 0x14A4FCu) {
        ctx->pc = 0x14A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F8u;
        // 0x14a4fc: 0x2031023  subu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A500u;
        goto label_14a500;
    }
    ctx->pc = 0x14A4F8u;
    {
        const bool branch_taken_0x14a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F8u;
        // 0x14a4fc: 0x2031023  subu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f8) {
            ctx->pc = 0x14A55Cu;
            goto label_14a55c;
        }
    }
    ctx->pc = 0x14A500u;
label_14a500:
    // 0x14a500: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x14a500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_14a504:
    // 0x14a504: 0x0  nop
    ctx->pc = 0x14a504u;
    // NOP
label_14a508:
    // 0x14a508: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14a508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_14a50c:
    // 0x14a50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a510:
    // 0x14a510: 0x0  nop
    ctx->pc = 0x14a510u;
    // NOP
label_14a514:
    // 0x14a514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14a518:
    // 0x14a518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14a518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14a51c:
    // 0x14a51c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a520:
    // 0x14a520: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14a520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_14a524:
    // 0x14a524: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14a528:
    // 0x14a528: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x14a528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14a52c:
    // 0x14a52c: 0x0  nop
    ctx->pc = 0x14a52cu;
    // NOP
label_14a530:
    // 0x14a530: 0x0  nop
    ctx->pc = 0x14a530u;
    // NOP
label_14a534:
    // 0x14a534: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x14a534u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
label_14a538:
    // 0x14a538: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14a538u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14a53c:
    // 0x14a53c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14a53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_14a540:
    // 0x14a540: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x14a540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a544:
    // 0x14a544: 0x0  nop
    ctx->pc = 0x14a544u;
    // NOP
label_14a548:
    // 0x14a548: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14a54c:
    if (ctx->pc == 0x14A54Cu) {
        ctx->pc = 0x14A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A548u;
        // 0x14a54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A550u;
        goto label_14a550;
    }
    ctx->pc = 0x14A548u;
    {
        const bool branch_taken_0x14a548 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A548u;
        // 0x14a54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a548) {
            ctx->pc = 0x14A558u;
            goto label_14a558;
        }
    }
    ctx->pc = 0x14A550u;
label_14a550:
    // 0x14a550: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_14a554:
    // 0x14a554: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14a554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14a558:
    // 0x14a558: 0xa22202b7  sb          $v0, 0x2B7($s1)
    ctx->pc = 0x14a558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
label_14a55c:
    // 0x14a55c: 0x862202ae  lh          $v0, 0x2AE($s1)
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 686)));
label_14a560:
    // 0x14a560: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x14a560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_14a564:
    // 0x14a564: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_14a568:
    if (ctx->pc == 0x14A568u) {
        ctx->pc = 0x14A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A564u;
        // 0x14a568: 0xa22002b7  sb          $zero, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A56Cu;
        goto label_14a56c;
    }
    ctx->pc = 0x14A564u;
    {
        const bool branch_taken_0x14a564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a564) {
            ctx->pc = 0x14A568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A564u;
            // 0x14a568: 0xa22002b7  sb          $zero, 0x2B7($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A56Cu;
            goto label_14a56c;
        }
    }
    ctx->pc = 0x14A56Cu;
label_14a56c:
    // 0x14a56c: 0x862202ae  lh          $v0, 0x2AE($s1)
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 686)));
label_14a570:
    // 0x14a570: 0x922302b0  lbu         $v1, 0x2B0($s1)
    ctx->pc = 0x14a570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 688)));
label_14a574:
    // 0x14a574: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14a574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14a578:
    // 0x14a578: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x14a578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_14a57c:
    // 0x14a57c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_14a580:
    if (ctx->pc == 0x14A580u) {
        ctx->pc = 0x14A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A57Cu;
        // 0x14a580: 0x962302b2  lhu         $v1, 0x2B2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A584u;
        goto label_14a584;
    }
    ctx->pc = 0x14A57Cu;
    {
        const bool branch_taken_0x14a57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a57c) {
            ctx->pc = 0x14A580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A57Cu;
            // 0x14a580: 0x962302b2  lhu         $v1, 0x2B2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A620u;
            goto label_14a620;
        }
    }
    ctx->pc = 0x14A584u;
label_14a584:
    // 0x14a584: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14a588:
    // 0x14a588: 0x10000024  b           . + 4 + (0x24 << 2)
label_14a58c:
    if (ctx->pc == 0x14A58Cu) {
        ctx->pc = 0x14A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A588u;
        // 0x14a58c: 0xa22202b7  sb          $v0, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A590u;
        goto label_14a590;
    }
    ctx->pc = 0x14A588u;
    {
        const bool branch_taken_0x14a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A588u;
        // 0x14a58c: 0xa22202b7  sb          $v0, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a588) {
            ctx->pc = 0x14A61Cu;
            goto label_14a61c;
        }
    }
    ctx->pc = 0x14A590u;
label_14a590:
    // 0x14a590: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_14a594:
    // 0x14a594: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14a594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14a598:
    // 0x14a598: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14a598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14a59c:
    // 0x14a59c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_14a5a0:
    if (ctx->pc == 0x14A5A0u) {
        ctx->pc = 0x14A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A59Cu;
        // 0x14a5a0: 0x922202b7  lbu         $v0, 0x2B7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 695)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A5A4u;
        goto label_14a5a4;
    }
    ctx->pc = 0x14A59Cu;
    {
        const bool branch_taken_0x14a59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A59Cu;
        // 0x14a5a0: 0x922202b7  lbu         $v0, 0x2B7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 695)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a59c) {
            ctx->pc = 0x14A5A8u;
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A5A4u;
label_14a5a4:
    // 0x14a5a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x14a5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14a5a8:
    // 0x14a5a8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x14a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14a5ac:
    // 0x14a5ac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_14a5b0:
    // 0x14a5b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14a5b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_14a5b4:
    // 0x14a5b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14a5b8:
    // 0x14a5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a5bc:
    // 0x14a5bc: 0x0  nop
    ctx->pc = 0x14a5bcu;
    // NOP
label_14a5c0:
    // 0x14a5c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14a5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14a5c4:
    // 0x14a5c4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_14a5c8:
    // 0x14a5c8: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x14a5c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_14a5cc:
    // 0x14a5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14a5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a5d0:
    // 0x14a5d0: 0x0  nop
    ctx->pc = 0x14a5d0u;
    // NOP
label_14a5d4:
    // 0x14a5d4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14a5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_14a5d8:
    // 0x14a5d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14a5d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_14a5dc:
    // 0x14a5dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14a5dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14a5e0:
    // 0x14a5e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14a5e4:
    // 0x14a5e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14a5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14a5e8:
    // 0x14a5e8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x14a5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_14a5ec:
    // 0x14a5ec: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x14a5ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_14a5f0:
    // 0x14a5f0: 0x284400ff  slti        $a0, $v0, 0xFF
    ctx->pc = 0x14a5f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_14a5f4:
    // 0x14a5f4: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x14a5f4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_14a5f8:
    // 0x14a5f8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14a5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14a5fc:
    // 0x14a5fc: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x14a5fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_14a600:
    // 0x14a600: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14a604:
    if (ctx->pc == 0x14A604u) {
        ctx->pc = 0x14A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A600u;
        // 0x14a604: 0xa22202b7  sb          $v0, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A608u;
        goto label_14a608;
    }
    ctx->pc = 0x14A600u;
    {
        const bool branch_taken_0x14a600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A600u;
        // 0x14a604: 0xa22202b7  sb          $v0, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a600) {
            ctx->pc = 0x14A610u;
            goto label_14a610;
        }
    }
    ctx->pc = 0x14A608u;
label_14a608:
    // 0x14a608: 0x10000004  b           . + 4 + (0x4 << 2)
label_14a60c:
    if (ctx->pc == 0x14A60Cu) {
        ctx->pc = 0x14A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A608u;
        // 0x14a60c: 0xa22002b7  sb          $zero, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A610u;
        goto label_14a610;
    }
    ctx->pc = 0x14A608u;
    {
        const bool branch_taken_0x14a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A608u;
        // 0x14a60c: 0xa22002b7  sb          $zero, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a608) {
            ctx->pc = 0x14A61Cu;
            goto label_14a61c;
        }
    }
    ctx->pc = 0x14A610u;
label_14a610:
    // 0x14a610: 0x2c8200fa  sltiu       $v0, $a0, 0xFA
    ctx->pc = 0x14a610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
label_14a614:
    // 0x14a614: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_14a618:
    if (ctx->pc == 0x14A618u) {
        ctx->pc = 0x14A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A614u;
        // 0x14a618: 0xa22502b7  sb          $a1, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A61Cu;
        goto label_14a61c;
    }
    ctx->pc = 0x14A614u;
    {
        const bool branch_taken_0x14a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a614) {
            ctx->pc = 0x14A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A614u;
            // 0x14a618: 0xa22502b7  sb          $a1, 0x2B7($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A61Cu;
            goto label_14a61c;
        }
    }
    ctx->pc = 0x14A61Cu;
label_14a61c:
    // 0x14a61c: 0x962302b2  lhu         $v1, 0x2B2($s1)
    ctx->pc = 0x14a61cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
label_14a620:
    // 0x14a620: 0x8d020380  lw          $v0, 0x380($t0)
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
label_14a624:
    // 0x14a624: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_14a628:
    // 0x14a628: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_14a62c:
    if (ctx->pc == 0x14A62Cu) {
        ctx->pc = 0x14A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A628u;
        // 0x14a62c: 0x70302a  slt         $a2, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A630u;
        goto label_14a630;
    }
    ctx->pc = 0x14A628u;
    {
        const bool branch_taken_0x14a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A628u;
        // 0x14a62c: 0x70302a  slt         $a2, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a628) {
            ctx->pc = 0x14A6F8u;
            goto label_14a6f8;
        }
    }
    ctx->pc = 0x14A630u;
label_14a630:
    // 0x14a630: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x14a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_14a634:
    // 0x14a634: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14a634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_14a638:
    // 0x14a638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14a638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14a63c:
    // 0x14a63c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_14a640:
    if (ctx->pc == 0x14A640u) {
        ctx->pc = 0x14A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A63Cu;
        // 0x14a640: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A644u;
        goto label_14a644;
    }
    ctx->pc = 0x14A63Cu;
    {
        const bool branch_taken_0x14a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A63Cu;
        // 0x14a640: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a63c) {
            ctx->pc = 0x14A6FCu;
            goto label_14a6fc;
        }
    }
    ctx->pc = 0x14A644u;
label_14a644:
    // 0x14a644: 0xc62302b8  lwc1        $f3, 0x2B8($s1)
    ctx->pc = 0x14a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14a648:
    // 0x14a648: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x14a648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_14a64c:
    // 0x14a64c: 0x0  nop
    ctx->pc = 0x14a64cu;
    // NOP
label_14a650:
    // 0x14a650: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x14a650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a654:
    // 0x14a654: 0x0  nop
    ctx->pc = 0x14a654u;
    // NOP
label_14a658:
    // 0x14a658: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_14a65c:
    if (ctx->pc == 0x14A65Cu) {
        ctx->pc = 0x14A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A658u;
        // 0x14a65c: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A660u;
        goto label_14a660;
    }
    ctx->pc = 0x14A658u;
    {
        const bool branch_taken_0x14a658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A658u;
        // 0x14a65c: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a658) {
            ctx->pc = 0x14A6FCu;
            goto label_14a6fc;
        }
    }
    ctx->pc = 0x14A660u;
label_14a660:
    // 0x14a660: 0x862202ac  lh          $v0, 0x2AC($s1)
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
label_14a664:
    // 0x14a664: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14a664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_14a668:
    // 0x14a668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14a668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14a66c:
    // 0x14a66c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14a66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14a670:
    // 0x14a670: 0x0  nop
    ctx->pc = 0x14a670u;
    // NOP
label_14a674:
    // 0x14a674: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14a674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_14a678:
    // 0x14a678: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14a678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_14a67c:
    // 0x14a67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a680:
    // 0x14a680: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x14a680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a684:
    // 0x14a684: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x14a684u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_14a688:
    // 0x14a688: 0x0  nop
    ctx->pc = 0x14a688u;
    // NOP
label_14a68c:
    // 0x14a68c: 0x0  nop
    ctx->pc = 0x14a68cu;
    // NOP
label_14a690:
    // 0x14a690: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x14a690u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
label_14a694:
    // 0x14a694: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_14a698:
    if (ctx->pc == 0x14A698u) {
        ctx->pc = 0x14A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A694u;
        // 0x14a698: 0x46002146  mov.s       $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A69Cu;
        goto label_14a69c;
    }
    ctx->pc = 0x14A694u;
    {
        const bool branch_taken_0x14a694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a694) {
            ctx->pc = 0x14A698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A694u;
            // 0x14a698: 0x46002146  mov.s       $f5, $f4 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A69Cu;
            goto label_14a69c;
        }
    }
    ctx->pc = 0x14A69Cu;
label_14a69c:
    // 0x14a69c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14a69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_14a6a0:
    // 0x14a6a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14a6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14a6a4:
    // 0x14a6a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a6a8:
    // 0x14a6a8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x14a6a8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[5]);
label_14a6ac:
    // 0x14a6ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14a6b0:
    // 0x14a6b0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x14a6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a6b4:
    // 0x14a6b4: 0x0  nop
    ctx->pc = 0x14a6b4u;
    // NOP
label_14a6b8:
    // 0x14a6b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_14a6bc:
    if (ctx->pc == 0x14A6BCu) {
        ctx->pc = 0x14A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6B8u;
        // 0x14a6bc: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A6C0u;
        goto label_14a6c0;
    }
    ctx->pc = 0x14A6B8u;
    {
        const bool branch_taken_0x14a6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6B8u;
        // 0x14a6bc: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6b8) {
            ctx->pc = 0x14A6C4u;
            goto label_14a6c4;
        }
    }
    ctx->pc = 0x14A6C0u;
label_14a6c0:
    // 0x14a6c0: 0x46003006  mov.s       $f0, $f6
    ctx->pc = 0x14a6c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
label_14a6c4:
    // 0x14a6c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14a6c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a6c8:
    // 0x14a6c8: 0x0  nop
    ctx->pc = 0x14a6c8u;
    // NOP
label_14a6cc:
    // 0x14a6cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_14a6d0:
    if (ctx->pc == 0x14A6D0u) {
        ctx->pc = 0x14A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6CCu;
        // 0x14a6d0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A6D4u;
        goto label_14a6d4;
    }
    ctx->pc = 0x14A6CCu;
    {
        const bool branch_taken_0x14a6cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6CCu;
        // 0x14a6d0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6cc) {
            ctx->pc = 0x14A6D8u;
            goto label_14a6d8;
        }
    }
    ctx->pc = 0x14A6D4u;
label_14a6d4:
    // 0x14a6d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x14a6d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_14a6d8:
    // 0x14a6d8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x14a6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_14a6dc:
    // 0x14a6dc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_14a6e0:
    // 0x14a6e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a6e4:
    // 0x14a6e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14a6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_14a6e8:
    // 0x14a6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14a6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14a6ec:
    // 0x14a6ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a6ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_14a6f0:
    // 0x14a6f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14a6f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14a6f4:
    // 0x14a6f4: 0xa22202bc  sb          $v0, 0x2BC($s1)
    ctx->pc = 0x14a6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 700), (uint8_t)GPR_U32(ctx, 2));
label_14a6f8:
    // 0x14a6f8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_14a6fc:
    // 0x14a6fc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x14a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_14a700:
    // 0x14a700: 0x24497a2c  addiu       $t1, $v0, 0x7A2C
    ctx->pc = 0x14a700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
label_14a704:
    // 0x14a704: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_14a708:
    // 0x14a708: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14a708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_14a70c:
    // 0x14a70c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x14a70cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14a710:
    // 0x14a710: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_14a714:
    if (ctx->pc == 0x14A714u) {
        ctx->pc = 0x14A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A710u;
        // 0x14a714: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A718u;
        goto label_14a718;
    }
    ctx->pc = 0x14A710u;
    {
        const bool branch_taken_0x14a710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A710u;
        // 0x14a714: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a710) {
            ctx->pc = 0x14A7A0u;
            goto label_14a7a0;
        }
    }
    ctx->pc = 0x14A718u;
label_14a718:
    // 0x14a718: 0x8d020380  lw          $v0, 0x380($t0)
    ctx->pc = 0x14a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
label_14a71c:
    // 0x14a71c: 0x30472000  andi        $a3, $v0, 0x2000
    ctx->pc = 0x14a71cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_14a720:
    // 0x14a720: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_14a724:
    if (ctx->pc == 0x14A724u) {
        ctx->pc = 0x14A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A720u;
        // 0x14a724: 0x70202a  slt         $a0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A728u;
        goto label_14a728;
    }
    ctx->pc = 0x14A720u;
    {
        const bool branch_taken_0x14a720 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A720u;
        // 0x14a724: 0x70202a  slt         $a0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a720) {
            ctx->pc = 0x14A738u;
            goto label_14a738;
        }
    }
    ctx->pc = 0x14A728u;
label_14a728:
    // 0x14a728: 0x2a02ffce  slti        $v0, $s0, -0x32
    ctx->pc = 0x14a728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967246) ? 1 : 0);
label_14a72c:
    // 0x14a72c: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
label_14a730:
    if (ctx->pc == 0x14A730u) {
        ctx->pc = 0x14A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A72Cu;
        // 0x14a730: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A734u;
        goto label_14a734;
    }
    ctx->pc = 0x14A72Cu;
    {
        const bool branch_taken_0x14a72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a72c) {
            ctx->pc = 0x14A730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A72Cu;
            // 0x14a730: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8E4u;
            goto label_14a8e4;
        }
    }
    ctx->pc = 0x14A734u;
label_14a734:
    // 0x14a734: 0x70202a  slt         $a0, $v1, $s0
    ctx->pc = 0x14a734u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_14a738:
    // 0x14a738: 0x862502ae  lh          $a1, 0x2AE($s1)
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 686)));
label_14a73c:
    // 0x14a73c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a740:
    // 0x14a740: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x14a740u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_14a744:
    // 0x14a744: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x14a744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_14a748:
    // 0x14a748: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_14a74c:
    if (ctx->pc == 0x14A74Cu) {
        ctx->pc = 0x14A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A748u;
        // 0x14a74c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A750u;
        goto label_14a750;
    }
    ctx->pc = 0x14A748u;
    {
        const bool branch_taken_0x14a748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A748u;
        // 0x14a74c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a748) {
            ctx->pc = 0x14A774u;
            goto label_14a774;
        }
    }
    ctx->pc = 0x14A750u;
label_14a750:
    // 0x14a750: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
label_14a754:
    // 0x14a754: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14a754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14a758:
    // 0x14a758: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_14a75c:
    if (ctx->pc == 0x14A75Cu) {
        ctx->pc = 0x14A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A758u;
        // 0x14a75c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A760u;
        goto label_14a760;
    }
    ctx->pc = 0x14A758u;
    {
        const bool branch_taken_0x14a758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a758) {
            ctx->pc = 0x14A75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A758u;
            // 0x14a75c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A778u;
            goto label_14a778;
        }
    }
    ctx->pc = 0x14A760u;
label_14a760:
    // 0x14a760: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_14a764:
    if (ctx->pc == 0x14A764u) {
        ctx->pc = 0x14A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A760u;
        // 0x14a764: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A768u;
        goto label_14a768;
    }
    ctx->pc = 0x14A760u;
    {
        const bool branch_taken_0x14a760 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A760u;
        // 0x14a764: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a760) {
            ctx->pc = 0x14A774u;
            goto label_14a774;
        }
    }
    ctx->pc = 0x14A768u;
label_14a768:
    // 0x14a768: 0x922202b7  lbu         $v0, 0x2B7($s1)
    ctx->pc = 0x14a768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 695)));
label_14a76c:
    // 0x14a76c: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_14a770:
    if (ctx->pc == 0x14A770u) {
        ctx->pc = 0x14A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A76Cu;
        // 0x14a770: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A774u;
        goto label_14a774;
    }
    ctx->pc = 0x14A76Cu;
    {
        const bool branch_taken_0x14a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a76c) {
            ctx->pc = 0x14A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A76Cu;
            // 0x14a770: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8E4u;
            goto label_14a8e4;
        }
    }
    ctx->pc = 0x14A774u;
label_14a774:
    // 0x14a774: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_14a778:
    // 0x14a778: 0x2a0503ff  slti        $a1, $s0, 0x3FF
    ctx->pc = 0x14a778u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1023) ? 1 : 0);
label_14a77c:
    // 0x14a77c: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x14a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_14a780:
    // 0x14a780: 0x240403fe  addiu       $a0, $zero, 0x3FE
    ctx->pc = 0x14a780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
label_14a784:
    // 0x14a784: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14a784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_14a788:
    // 0x14a788: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14a78c:
    // 0x14a78c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14a790:
    if (ctx->pc == 0x14A790u) {
        ctx->pc = 0x14A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A78Cu;
        // 0x14a790: 0x85800a  movz        $s0, $a0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A794u;
        goto label_14a794;
    }
    ctx->pc = 0x14A78Cu;
    {
        const bool branch_taken_0x14a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A78Cu;
        // 0x14a790: 0x85800a  movz        $s0, $a0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a78c) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A794u;
label_14a794:
    // 0x14a794: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14a798:
    // 0x14a798: 0x10000005  b           . + 4 + (0x5 << 2)
label_14a79c:
    if (ctx->pc == 0x14A79Cu) {
        ctx->pc = 0x14A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A798u;
        // 0x14a79c: 0xa22202b7  sb          $v0, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A7A0u;
        goto label_14a7a0;
    }
    ctx->pc = 0x14A798u;
    {
        const bool branch_taken_0x14a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A798u;
        // 0x14a79c: 0xa22202b7  sb          $v0, 0x2B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a798) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A7A0u;
label_14a7a0:
    // 0x14a7a0: 0x2a0403ff  slti        $a0, $s0, 0x3FF
    ctx->pc = 0x14a7a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1023) ? 1 : 0);
label_14a7a4:
    // 0x14a7a4: 0x240303fe  addiu       $v1, $zero, 0x3FE
    ctx->pc = 0x14a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
label_14a7a8:
    // 0x14a7a8: 0xa22202b7  sb          $v0, 0x2B7($s1)
    ctx->pc = 0x14a7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 695), (uint8_t)GPR_U32(ctx, 2));
label_14a7ac:
    // 0x14a7ac: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x14a7acu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_14a7b0:
    // 0x14a7b0: 0x8d030388  lw          $v1, 0x388($t0)
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 904)));
label_14a7b4:
    // 0x14a7b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_14a7b8:
    // 0x14a7b8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x14a7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_14a7bc:
    // 0x14a7bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14a7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14a7c0:
    // 0x14a7c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14a7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_14a7c4:
    // 0x14a7c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_14a7c8:
    if (ctx->pc == 0x14A7C8u) {
        ctx->pc = 0x14A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7C4u;
        // 0x14a7c8: 0x8d020380  lw          $v0, 0x380($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A7CCu;
        goto label_14a7cc;
    }
    ctx->pc = 0x14A7C4u;
    {
        const bool branch_taken_0x14a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7c4) {
            ctx->pc = 0x14A7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A7C4u;
            // 0x14a7c8: 0x8d020380  lw          $v0, 0x380($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A7ECu;
            goto label_14a7ec;
        }
    }
    ctx->pc = 0x14A7CCu;
label_14a7cc:
    // 0x14a7cc: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x14a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_14a7d0:
    // 0x14a7d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14a7d4:
    // 0x14a7d4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_14a7d8:
    // 0x14a7d8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x14a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_14a7dc:
    // 0x14a7dc: 0x60f809  jalr        $v1
label_14a7e0:
    if (ctx->pc == 0x14A7E0u) {
        ctx->pc = 0x14A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7DCu;
        // 0x14a7e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A7E4u;
        goto label_14a7e4;
    }
    ctx->pc = 0x14A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A7E4u);
        ctx->pc = 0x14A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7DCu;
        // 0x14a7e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A7DCu, 0x14A7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A7E4u;
label_14a7e4:
    // 0x14a7e4: 0x10000018  b           . + 4 + (0x18 << 2)
label_14a7e8:
    if (ctx->pc == 0x14A7E8u) {
        ctx->pc = 0x14A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7E4u;
        // 0x14a7e8: 0x12b080  sll         $s6, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A7ECu;
        goto label_14a7ec;
    }
    ctx->pc = 0x14A7E4u;
    {
        const bool branch_taken_0x14a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7E4u;
        // 0x14a7e8: 0x12b080  sll         $s6, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7e4) {
            ctx->pc = 0x14A848u;
            goto label_14a848;
        }
    }
    ctx->pc = 0x14A7ECu;
label_14a7ec:
    // 0x14a7ec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14a7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_14a7f0:
    // 0x14a7f0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_14a7f4:
    if (ctx->pc == 0x14A7F4u) {
        ctx->pc = 0x14A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7F0u;
        // 0x14a7f4: 0x8e220214  lw          $v0, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A7F8u;
        goto label_14a7f8;
    }
    ctx->pc = 0x14A7F0u;
    {
        const bool branch_taken_0x14a7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7f0) {
            ctx->pc = 0x14A7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A7F0u;
            // 0x14a7f4: 0x8e220214  lw          $v0, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A830u;
            goto label_14a830;
        }
    }
    ctx->pc = 0x14A7F8u;
label_14a7f8:
    // 0x14a7f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_14a7fc:
    // 0x14a7fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14a7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_14a800:
    // 0x14a800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14a804:
    // 0x14a804: 0xc4404714  lwc1        $f0, 0x4714($v0)
    ctx->pc = 0x14a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a808:
    // 0x14a808: 0x862302ac  lh          $v1, 0x2AC($s1)
    ctx->pc = 0x14a808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
label_14a80c:
    // 0x14a80c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14a80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_14a810:
    // 0x14a810: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14a810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14a814:
    // 0x14a814: 0x0  nop
    ctx->pc = 0x14a814u;
    // NOP
label_14a818:
    // 0x14a818: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14a818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14a81c:
    // 0x14a81c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14a81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14a820:
    // 0x14a820: 0x0  nop
    ctx->pc = 0x14a820u;
    // NOP
label_14a824:
    // 0x14a824: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
label_14a828:
    if (ctx->pc == 0x14A828u) {
        ctx->pc = 0x14A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A824u;
        // 0x14a828: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A82Cu;
        goto label_14a82c;
    }
    ctx->pc = 0x14A824u;
    {
        const bool branch_taken_0x14a824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a824) {
            ctx->pc = 0x14A828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A824u;
            // 0x14a828: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8E4u;
            goto label_14a8e4;
        }
    }
    ctx->pc = 0x14A82Cu;
label_14a82c:
    // 0x14a82c: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x14a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_14a830:
    // 0x14a830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14a834:
    // 0x14a834: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x14a834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_14a838:
    // 0x14a838: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x14a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_14a83c:
    // 0x14a83c: 0x60f809  jalr        $v1
label_14a840:
    if (ctx->pc == 0x14A840u) {
        ctx->pc = 0x14A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A83Cu;
        // 0x14a840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A844u;
        goto label_14a844;
    }
    ctx->pc = 0x14A83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A844u);
        ctx->pc = 0x14A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A83Cu;
        // 0x14a840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A83Cu, 0x14A844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A844u;
label_14a844:
    // 0x14a844: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x14a844u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_14a848:
    // 0x14a848: 0x10ac00  sll         $s5, $s0, 16
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_14a84c:
    // 0x14a84c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14a850:
    // 0x14a850: 0x2634028c  addiu       $s4, $s1, 0x28C
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
label_14a854:
    // 0x14a854: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x14a854u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14a858:
    // 0x14a858: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x14a858u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
label_14a85c:
    // 0x14a85c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14a860:
    // 0x14a860: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a864:
    // 0x14a864: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14a864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_14a868:
    // 0x14a868: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x14a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_14a86c:
    // 0x14a86c: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x14a86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_14a870:
    // 0x14a870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14a874:
    // 0x14a874: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_14a878:
    if (ctx->pc == 0x14A878u) {
        ctx->pc = 0x14A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A874u;
        // 0x14a878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A87Cu;
        goto label_14a87c;
    }
    ctx->pc = 0x14A874u;
    {
        const bool branch_taken_0x14a874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A874u;
        // 0x14a878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a874) {
            ctx->pc = 0x14A8D4u;
            goto label_14a8d4;
        }
    }
    ctx->pc = 0x14A87Cu;
label_14a87c:
    // 0x14a87c: 0xc052dbe  jal         func_14B6F8
label_14a880:
    if (ctx->pc == 0x14A880u) {
        ctx->pc = 0x14A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A87Cu;
        // 0x14a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A884u;
        goto label_14a884;
    }
    ctx->pc = 0x14A87Cu;
    SET_GPR_U32(ctx, 31, 0x14A884u);
    ctx->pc = 0x14A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A87Cu;
    // 0x14a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14A87Cu, 0x14A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A884u;
label_14a884:
    // 0x14a884: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x14a884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_14a888:
    // 0x14a888: 0x153403  sra         $a2, $s5, 16
    ctx->pc = 0x14a888u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 21), 16));
label_14a88c:
    // 0x14a88c: 0x8c420380  lw          $v0, 0x380($v0)
    ctx->pc = 0x14a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_14a890:
    // 0x14a890: 0x14b7000d  bne         $a1, $s7, . + 4 + (0xD << 2)
label_14a894:
    if (ctx->pc == 0x14A894u) {
        ctx->pc = 0x14A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A890u;
        // 0x14a894: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A898u;
        goto label_14a898;
    }
    ctx->pc = 0x14A890u;
    {
        const bool branch_taken_0x14a890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        ctx->pc = 0x14A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A890u;
        // 0x14a894: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a890) {
            ctx->pc = 0x14A8C8u;
            goto label_14a8c8;
        }
    }
    ctx->pc = 0x14A898u;
label_14a898:
    // 0x14a898: 0x30424080  andi        $v0, $v0, 0x4080
    ctx->pc = 0x14a898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16512);
label_14a89c:
    // 0x14a89c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14a8a0:
    if (ctx->pc == 0x14A8A0u) {
        ctx->pc = 0x14A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A89Cu;
        // 0x14a8a0: 0x26644c80  addiu       $a0, $s3, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8A4u;
        goto label_14a8a4;
    }
    ctx->pc = 0x14A89Cu;
    {
        const bool branch_taken_0x14a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A89Cu;
        // 0x14a8a0: 0x26644c80  addiu       $a0, $s3, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a89c) {
            ctx->pc = 0x14A8B4u;
            goto label_14a8b4;
        }
    }
    ctx->pc = 0x14A8A4u;
label_14a8a4:
    // 0x14a8a4: 0xc0c6980  jal         func_31A600
label_14a8a8:
    if (ctx->pc == 0x14A8A8u) {
        ctx->pc = 0x14A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8A4u;
        // 0x14a8a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8ACu;
        goto label_14a8ac;
    }
    ctx->pc = 0x14A8A4u;
    SET_GPR_U32(ctx, 31, 0x14A8ACu);
    ctx->pc = 0x14A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8A4u;
    // 0x14a8a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14A8A4u, 0x14A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8ACu;
label_14a8ac:
    // 0x14a8ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_14a8b0:
    if (ctx->pc == 0x14A8B0u) {
        ctx->pc = 0x14A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8ACu;
        // 0x14a8b0: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8B4u;
        goto label_14a8b4;
    }
    ctx->pc = 0x14A8ACu;
    {
        const bool branch_taken_0x14a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8ACu;
        // 0x14a8b0: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8ac) {
            ctx->pc = 0x14A8D8u;
            goto label_14a8d8;
        }
    }
    ctx->pc = 0x14A8B4u;
label_14a8b4:
    // 0x14a8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a8b8:
    // 0x14a8b8: 0xc0c6980  jal         func_31A600
label_14a8bc:
    if (ctx->pc == 0x14A8BCu) {
        ctx->pc = 0x14A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8B8u;
        // 0x14a8bc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8C0u;
        goto label_14a8c0;
    }
    ctx->pc = 0x14A8B8u;
    SET_GPR_U32(ctx, 31, 0x14A8C0u);
    ctx->pc = 0x14A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8B8u;
    // 0x14a8bc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14A8B8u, 0x14A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8C0u;
label_14a8c0:
    // 0x14a8c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_14a8c4:
    if (ctx->pc == 0x14A8C4u) {
        ctx->pc = 0x14A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8C0u;
        // 0x14a8c4: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8C8u;
        goto label_14a8c8;
    }
    ctx->pc = 0x14A8C0u;
    {
        const bool branch_taken_0x14a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8C0u;
        // 0x14a8c4: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8c0) {
            ctx->pc = 0x14A8D8u;
            goto label_14a8d8;
        }
    }
    ctx->pc = 0x14A8C8u;
label_14a8c8:
    // 0x14a8c8: 0x862602ac  lh          $a2, 0x2AC($s1)
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
label_14a8cc:
    // 0x14a8cc: 0xc0c6980  jal         func_31A600
label_14a8d0:
    if (ctx->pc == 0x14A8D0u) {
        ctx->pc = 0x14A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8CCu;
        // 0x14a8d0: 0x26644c80  addiu       $a0, $s3, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8D4u;
        goto label_14a8d4;
    }
    ctx->pc = 0x14A8CCu;
    SET_GPR_U32(ctx, 31, 0x14A8D4u);
    ctx->pc = 0x14A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8CCu;
    // 0x14a8d0: 0x26644c80  addiu       $a0, $s3, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14A8CCu, 0x14A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8D4u;
label_14a8d4:
    // 0x14a8d4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14a8d8:
    // 0x14a8d8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_14a8dc:
    if (ctx->pc == 0x14A8DCu) {
        ctx->pc = 0x14A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8D8u;
        // 0x14a8dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8E0u;
        goto label_14a8e0;
    }
    ctx->pc = 0x14A8D8u;
    {
        const bool branch_taken_0x14a8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a8d8) {
            ctx->pc = 0x14A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A8D8u;
            // 0x14a8dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a860;
        }
    }
    ctx->pc = 0x14A8E0u;
label_14a8e0:
    // 0x14a8e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x14a8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_14a8e4:
    // 0x14a8e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x14a8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_14a8e8:
    // 0x14a8e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14a8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14a8ec:
    // 0x14a8ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14a8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14a8f0:
    // 0x14a8f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14a8f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14a8f4:
    // 0x14a8f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x14a8f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14a8f8:
    // 0x14a8f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x14a8f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14a8fc:
    // 0x14a8fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x14a8fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14a900:
    // 0x14a900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14a904:
    // 0x14a904: 0x3e00008  jr          $ra
label_14a908:
    if (ctx->pc == 0x14A908u) {
        ctx->pc = 0x14A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A904u;
        // 0x14a908: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A90Cu;
        goto label_14a90c;
    }
    ctx->pc = 0x14A904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A904u;
        // 0x14a908: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A90Cu;
label_14a90c:
    // 0x14a90c: 0x0  nop
    ctx->pc = 0x14a90cu;
    // NOP
    ctx->pc = 0x14a910u;
}
