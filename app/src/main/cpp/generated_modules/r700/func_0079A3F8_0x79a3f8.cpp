#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079A3F8
// Address: 0x79a3f8 - 0x79abd0
void func_0079A3F8_0x79a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A3F8_0x79a3f8");
#endif

    switch (ctx->pc) {
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a400u: goto label_79a400;
        case 0x79a404u: goto label_79a404;
        case 0x79a408u: goto label_79a408;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a410u: goto label_79a410;
        case 0x79a414u: goto label_79a414;
        case 0x79a418u: goto label_79a418;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a420u: goto label_79a420;
        case 0x79a424u: goto label_79a424;
        case 0x79a428u: goto label_79a428;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a430u: goto label_79a430;
        case 0x79a434u: goto label_79a434;
        case 0x79a438u: goto label_79a438;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a440u: goto label_79a440;
        case 0x79a444u: goto label_79a444;
        case 0x79a448u: goto label_79a448;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a450u: goto label_79a450;
        case 0x79a454u: goto label_79a454;
        case 0x79a458u: goto label_79a458;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a460u: goto label_79a460;
        case 0x79a464u: goto label_79a464;
        case 0x79a468u: goto label_79a468;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a470u: goto label_79a470;
        case 0x79a474u: goto label_79a474;
        case 0x79a478u: goto label_79a478;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a480u: goto label_79a480;
        case 0x79a484u: goto label_79a484;
        case 0x79a488u: goto label_79a488;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a490u: goto label_79a490;
        case 0x79a494u: goto label_79a494;
        case 0x79a498u: goto label_79a498;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4a0u: goto label_79a4a0;
        case 0x79a4a4u: goto label_79a4a4;
        case 0x79a4a8u: goto label_79a4a8;
        case 0x79a4acu: goto label_79a4ac;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4bcu: goto label_79a4bc;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4c4u: goto label_79a4c4;
        case 0x79a4c8u: goto label_79a4c8;
        case 0x79a4ccu: goto label_79a4cc;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4d8u: goto label_79a4d8;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4e4u: goto label_79a4e4;
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
        case 0x79a548u: goto label_79a548;
        case 0x79a54cu: goto label_79a54c;
        case 0x79a550u: goto label_79a550;
        case 0x79a554u: goto label_79a554;
        case 0x79a558u: goto label_79a558;
        case 0x79a55cu: goto label_79a55c;
        case 0x79a560u: goto label_79a560;
        case 0x79a564u: goto label_79a564;
        case 0x79a568u: goto label_79a568;
        case 0x79a56cu: goto label_79a56c;
        case 0x79a570u: goto label_79a570;
        case 0x79a574u: goto label_79a574;
        case 0x79a578u: goto label_79a578;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a580u: goto label_79a580;
        case 0x79a584u: goto label_79a584;
        case 0x79a588u: goto label_79a588;
        case 0x79a58cu: goto label_79a58c;
        case 0x79a590u: goto label_79a590;
        case 0x79a594u: goto label_79a594;
        case 0x79a598u: goto label_79a598;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5a4u: goto label_79a5a4;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5acu: goto label_79a5ac;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5b8u: goto label_79a5b8;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d4u: goto label_79a5d4;
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5dcu: goto label_79a5dc;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a5fcu: goto label_79a5fc;
        case 0x79a600u: goto label_79a600;
        case 0x79a604u: goto label_79a604;
        case 0x79a608u: goto label_79a608;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a610u: goto label_79a610;
        case 0x79a614u: goto label_79a614;
        case 0x79a618u: goto label_79a618;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a620u: goto label_79a620;
        case 0x79a624u: goto label_79a624;
        case 0x79a628u: goto label_79a628;
        case 0x79a62cu: goto label_79a62c;
        case 0x79a630u: goto label_79a630;
        case 0x79a634u: goto label_79a634;
        case 0x79a638u: goto label_79a638;
        case 0x79a63cu: goto label_79a63c;
        case 0x79a640u: goto label_79a640;
        case 0x79a644u: goto label_79a644;
        case 0x79a648u: goto label_79a648;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a650u: goto label_79a650;
        case 0x79a654u: goto label_79a654;
        case 0x79a658u: goto label_79a658;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a660u: goto label_79a660;
        case 0x79a664u: goto label_79a664;
        case 0x79a668u: goto label_79a668;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a670u: goto label_79a670;
        case 0x79a674u: goto label_79a674;
        case 0x79a678u: goto label_79a678;
        case 0x79a67cu: goto label_79a67c;
        case 0x79a680u: goto label_79a680;
        case 0x79a684u: goto label_79a684;
        case 0x79a688u: goto label_79a688;
        case 0x79a68cu: goto label_79a68c;
        case 0x79a690u: goto label_79a690;
        case 0x79a694u: goto label_79a694;
        case 0x79a698u: goto label_79a698;
        case 0x79a69cu: goto label_79a69c;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a4u: goto label_79a6a4;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6acu: goto label_79a6ac;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6b4u: goto label_79a6b4;
        case 0x79a6b8u: goto label_79a6b8;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6c4u: goto label_79a6c4;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6ccu: goto label_79a6cc;
        case 0x79a6d0u: goto label_79a6d0;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e0u: goto label_79a6e0;
        case 0x79a6e4u: goto label_79a6e4;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a6f4u: goto label_79a6f4;
        case 0x79a6f8u: goto label_79a6f8;
        case 0x79a6fcu: goto label_79a6fc;
        case 0x79a700u: goto label_79a700;
        case 0x79a704u: goto label_79a704;
        case 0x79a708u: goto label_79a708;
        case 0x79a70cu: goto label_79a70c;
        case 0x79a710u: goto label_79a710;
        case 0x79a714u: goto label_79a714;
        case 0x79a718u: goto label_79a718;
        case 0x79a71cu: goto label_79a71c;
        case 0x79a720u: goto label_79a720;
        case 0x79a724u: goto label_79a724;
        case 0x79a728u: goto label_79a728;
        case 0x79a72cu: goto label_79a72c;
        case 0x79a730u: goto label_79a730;
        case 0x79a734u: goto label_79a734;
        case 0x79a738u: goto label_79a738;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a740u: goto label_79a740;
        case 0x79a744u: goto label_79a744;
        case 0x79a748u: goto label_79a748;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a750u: goto label_79a750;
        case 0x79a754u: goto label_79a754;
        case 0x79a758u: goto label_79a758;
        case 0x79a75cu: goto label_79a75c;
        case 0x79a760u: goto label_79a760;
        case 0x79a764u: goto label_79a764;
        case 0x79a768u: goto label_79a768;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a770u: goto label_79a770;
        case 0x79a774u: goto label_79a774;
        case 0x79a778u: goto label_79a778;
        case 0x79a77cu: goto label_79a77c;
        case 0x79a780u: goto label_79a780;
        case 0x79a784u: goto label_79a784;
        case 0x79a788u: goto label_79a788;
        case 0x79a78cu: goto label_79a78c;
        case 0x79a790u: goto label_79a790;
        case 0x79a794u: goto label_79a794;
        case 0x79a798u: goto label_79a798;
        case 0x79a79cu: goto label_79a79c;
        case 0x79a7a0u: goto label_79a7a0;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7a8u: goto label_79a7a8;
        case 0x79a7acu: goto label_79a7ac;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7b8u: goto label_79a7b8;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7ccu: goto label_79a7cc;
        case 0x79a7d0u: goto label_79a7d0;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7d8u: goto label_79a7d8;
        case 0x79a7dcu: goto label_79a7dc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a7f4u: goto label_79a7f4;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a7fcu: goto label_79a7fc;
        case 0x79a800u: goto label_79a800;
        case 0x79a804u: goto label_79a804;
        case 0x79a808u: goto label_79a808;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a810u: goto label_79a810;
        case 0x79a814u: goto label_79a814;
        case 0x79a818u: goto label_79a818;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a820u: goto label_79a820;
        case 0x79a824u: goto label_79a824;
        case 0x79a828u: goto label_79a828;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a830u: goto label_79a830;
        case 0x79a834u: goto label_79a834;
        case 0x79a838u: goto label_79a838;
        case 0x79a83cu: goto label_79a83c;
        case 0x79a840u: goto label_79a840;
        case 0x79a844u: goto label_79a844;
        case 0x79a848u: goto label_79a848;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a850u: goto label_79a850;
        case 0x79a854u: goto label_79a854;
        case 0x79a858u: goto label_79a858;
        case 0x79a85cu: goto label_79a85c;
        case 0x79a860u: goto label_79a860;
        case 0x79a864u: goto label_79a864;
        case 0x79a868u: goto label_79a868;
        case 0x79a86cu: goto label_79a86c;
        case 0x79a870u: goto label_79a870;
        case 0x79a874u: goto label_79a874;
        case 0x79a878u: goto label_79a878;
        case 0x79a87cu: goto label_79a87c;
        case 0x79a880u: goto label_79a880;
        case 0x79a884u: goto label_79a884;
        case 0x79a888u: goto label_79a888;
        case 0x79a88cu: goto label_79a88c;
        case 0x79a890u: goto label_79a890;
        case 0x79a894u: goto label_79a894;
        case 0x79a898u: goto label_79a898;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8bcu: goto label_79a8bc;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        case 0x79a920u: goto label_79a920;
        case 0x79a924u: goto label_79a924;
        case 0x79a928u: goto label_79a928;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a930u: goto label_79a930;
        case 0x79a934u: goto label_79a934;
        case 0x79a938u: goto label_79a938;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a940u: goto label_79a940;
        case 0x79a944u: goto label_79a944;
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa6cu: goto label_79aa6c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa74u: goto label_79aa74;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa84u: goto label_79aa84;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa94u: goto label_79aa94;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aaa4u: goto label_79aaa4;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aaacu: goto label_79aaac;
        case 0x79aab0u: goto label_79aab0;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaecu: goto label_79aaec;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79aafcu: goto label_79aafc;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab04u: goto label_79ab04;
        case 0x79ab08u: goto label_79ab08;
        case 0x79ab0cu: goto label_79ab0c;
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab14u: goto label_79ab14;
        case 0x79ab18u: goto label_79ab18;
        case 0x79ab1cu: goto label_79ab1c;
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab24u: goto label_79ab24;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab38u: goto label_79ab38;
        case 0x79ab3cu: goto label_79ab3c;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abc8u: goto label_79abc8;
        case 0x79abccu: goto label_79abcc;
        default: break;
    }

    ctx->pc = 0x79a3f8u;

label_79a3f8:
    // 0x79a3f8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_79a3fc:
    // 0x79a3fc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a400:
    // 0x79a400: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x79a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_79a404:
    // 0x79a404: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a408:
    // 0x79a408: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x79a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_79a40c:
    // 0x79a40c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_79a410:
    // 0x79a410: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x79a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_79a414:
    // 0x79a414: 0x26048658  addiu       $a0, $s0, -0x79A8
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
label_79a418:
    // 0x79a418: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x79a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_79a41c:
    // 0x79a41c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_79a420:
    // 0x79a420: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x79a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_79a424:
    // 0x79a424: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x79a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_79a428:
    // 0x79a428: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x79a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_79a42c:
    // 0x79a42c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x79a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_79a430:
    // 0x79a430: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79a430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_79a434:
    // 0x79a434: 0x2448c218  addiu       $t0, $v0, -0x3DE8
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951448));
label_79a438:
    // 0x79a438: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x79a438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_79a43c:
    // 0x79a43c: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x79a43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_79a440:
    // 0x79a440: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x79a440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_79a444:
    // 0x79a444: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x79a444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_79a448:
    // 0x79a448: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x79a448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a44c:
    // 0x79a44c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x79a44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a450:
    // 0x79a450: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x79a450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a454:
    // 0x79a454: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x79a454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a458:
    // 0x79a458: 0xc0afc42  jal         func_2BF108
label_79a45c:
    if (ctx->pc == 0x79A45Cu) {
        ctx->pc = 0x79A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A458u;
        // 0x79a45c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A460u;
        goto label_79a460;
    }
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x79a460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_79a464:
    // 0x79a464: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a468:
    // 0x79a468: 0x2463c300  addiu       $v1, $v1, -0x3D00
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951680));
label_79a46c:
    // 0x79a46c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x79a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_79a470:
    // 0x79a470: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_79a474:
    // 0x79a474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_79a478:
    // 0x79a478: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a478u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a47c:
    // 0x79a47c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a480:
    // 0x79a480: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a484:
    // 0x79a484: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x79a484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_79a488:
    // 0x79a488: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a48c:
    // 0x79a48c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79a490:
    // 0x79a490: 0x24627b00  addiu       $v0, $v1, 0x7B00
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31488));
label_79a494:
    // 0x79a494: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a498:
    // 0x79a498: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a49c:
    // 0x79a49c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_79a4a0:
    // 0x79a4a0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x79a4a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a4a4:
    // 0x79a4a4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79a4a8:
    // 0x79a4a8: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
label_79a4ac:
    // 0x79a4ac: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x79a4acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a4b0:
    // 0x79a4b0: 0xc0b0fa2  jal         func_2C3E88
label_79a4b4:
    if (ctx->pc == 0x79A4B4u) {
        ctx->pc = 0x79A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B0u;
        // 0x79a4b4: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B8u;
        goto label_79a4b8;
    }
    ctx->pc = 0x79A4B0u;
    SET_GPR_U32(ctx, 31, 0x79A4B8u);
    ctx->pc = 0x79A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B0u;
    // 0x79a4b4: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A4B0u, 0x79A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B8u;
label_79a4b8:
    // 0x79a4b8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79a4bc:
    // 0x79a4bc: 0xc0b0e6c  jal         func_2C39B0
label_79a4c0:
    if (ctx->pc == 0x79A4C0u) {
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4C4u;
        goto label_79a4c4;
    }
    ctx->pc = 0x79A4BCu;
    SET_GPR_U32(ctx, 31, 0x79A4C4u);
    ctx->pc = 0x79A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4BCu;
    // 0x79a4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x26247470  addiu       $a0, $s1, 0x7470
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 29808));
label_79a4c8:
    // 0x79a4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4cc:
    // 0x79a4cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a4d0:
    // 0x79a4d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4d4:
    // 0x79a4d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4d8:
    // 0x79a4d8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79a4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_79a4dc:
    // 0x79a4dc: 0xc0c1c82  jal         func_307208
label_79a4e0:
    if (ctx->pc == 0x79A4E0u) {
        ctx->pc = 0x79A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4DCu;
        // 0x79a4e0: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E4u;
        goto label_79a4e4;
    }
    ctx->pc = 0x79A4DCu;
    SET_GPR_U32(ctx, 31, 0x79A4E4u);
    ctx->pc = 0x79A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4DCu;
    // 0x79a4e0: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A4DCu, 0x79A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E4u;
label_79a4e4:
    // 0x79a4e4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79a4e8:
    // 0x79a4e8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a4ec:
    // 0x79a4ec: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x79a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_79a4f0:
    // 0x79a4f0: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x79a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_79a4f4:
    // 0x79a4f4: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x79a4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_79a4f8:
    // 0x79a4f8: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
label_79a4fc:
    if (ctx->pc == 0x79A4FCu) {
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A500u;
        goto label_79a500;
    }
    ctx->pc = 0x79A4F8u;
    {
        const bool branch_taken_0x79a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f8) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A500u;
label_79a500:
    // 0x79a500: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_79a504:
    // 0x79a504: 0x2442c260  addiu       $v0, $v0, -0x3DA0
    ctx->pc = 0x79a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951520));
label_79a508:
    // 0x79a508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a50c:
    // 0x79a50c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a510:
    // 0x79a510: 0x800008  jr          $a0
label_79a514:
    if (ctx->pc == 0x79A514u) {
        ctx->pc = 0x79A518u;
        goto label_79a518;
    }
    ctx->pc = 0x79A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A518u: goto label_79a518;
            case 0x79A66Cu: goto label_79a66c;
            case 0x79A6CCu: goto label_79a6cc;
            case 0x79A734u: goto label_79a734;
            case 0x79A75Cu: goto label_79a75c;
            case 0x79A85Cu: goto label_79a85c;
            case 0x79A8F4u: goto label_79a8f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0x26e37470  addiu       $v1, $s7, 0x7470
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
label_79a51c:
    // 0x79a51c: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x79a51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_79a520:
    // 0x79a520: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_79a524:
    // 0x79a524: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79a528:
    // 0x79a528: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
label_79a52c:
    if (ctx->pc == 0x79A52Cu) {
        ctx->pc = 0x79A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A528u;
        // 0x79a52c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A530u;
        goto label_79a530;
    }
    ctx->pc = 0x79A528u;
    {
        const bool branch_taken_0x79a528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A528u;
        // 0x79a52c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a528) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a534:
    // 0x79a534: 0x2442c118  addiu       $v0, $v0, -0x3EE8
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
label_79a538:
    // 0x79a538: 0x26540001  addiu       $s4, $s2, 0x1
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79a53c:
    // 0x79a53c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_79a540:
    // 0x79a540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a544:
    // 0x79a544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a548:
    // 0x79a548: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_79a54c:
    // 0x79a54c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a550:
    // 0x79a550: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79a550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
label_79a554:
    // 0x79a554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a558:
    // 0x79a558: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_79a55c:
    // 0x79a55c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a560:
    if (ctx->pc == 0x79A560u) {
        ctx->pc = 0x79A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A55Cu;
        // 0x79a560: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A564u;
        goto label_79a564;
    }
    ctx->pc = 0x79A55Cu;
    {
        const bool branch_taken_0x79a55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A55Cu;
        // 0x79a560: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a55c) {
            ctx->pc = 0x79A598u;
            goto label_79a598;
        }
    }
    ctx->pc = 0x79A564u;
label_79a564:
    // 0x79a564: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a568:
    // 0x79a568: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a56c:
    // 0x79a56c: 0x0  nop
    ctx->pc = 0x79a56cu;
    // NOP
label_79a570:
    // 0x79a570: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a574:
    // 0x79a574: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a578:
    // 0x79a578: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a57c:
    // 0x79a57c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a580:
    // 0x79a580: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a584:
    // 0x79a584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a588:
    if (ctx->pc == 0x79A588u) {
        ctx->pc = 0x79A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A584u;
        // 0x79a588: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A58Cu;
        goto label_79a58c;
    }
    ctx->pc = 0x79A584u;
    {
        const bool branch_taken_0x79a584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A584u;
        // 0x79a588: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a584) {
            ctx->pc = 0x79A598u;
            goto label_79a598;
        }
    }
    ctx->pc = 0x79A58Cu;
label_79a58c:
    // 0x79a58c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a58cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a590:
    // 0x79a590: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a594:
    if (ctx->pc == 0x79A594u) {
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A598u;
        goto label_79a598;
    }
    ctx->pc = 0x79A590u;
    {
        const bool branch_taken_0x79a590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a590) {
            ctx->pc = 0x79A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A590u;
            // 0x79a594: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A598u;
label_79a598:
    // 0x79a598: 0xc053f66  jal         func_14FD98
label_79a59c:
    if (ctx->pc == 0x79A59Cu) {
        ctx->pc = 0x79A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A598u;
        // 0x79a59c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5A0u;
        goto label_79a5a0;
    }
    ctx->pc = 0x79A598u;
    SET_GPR_U32(ctx, 31, 0x79A5A0u);
    ctx->pc = 0x79A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A598u;
    // 0x79a59c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A598u, 0x79A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A0u;
label_79a5a0:
    // 0x79a5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_79a5a4:
    if (ctx->pc == 0x79A5A4u) {
        ctx->pc = 0x79A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A0u;
        // 0x79a5a4: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5A8u;
        goto label_79a5a8;
    }
    ctx->pc = 0x79A5A0u;
    {
        const bool branch_taken_0x79a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A0u;
        // 0x79a5a4: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a0) {
            ctx->pc = 0x79A5B4u;
            goto label_79a5b4;
        }
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0xc0c49c2  jal         func_312708
label_79a5ac:
    if (ctx->pc == 0x79A5ACu) {
        ctx->pc = 0x79A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A8u;
        // 0x79a5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5B0u;
        goto label_79a5b0;
    }
    ctx->pc = 0x79A5A8u;
    SET_GPR_U32(ctx, 31, 0x79A5B0u);
    ctx->pc = 0x79A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A8u;
    // 0x79a5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x79A5A8u, 0x79A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B0u;
label_79a5b0:
    // 0x79a5b0: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
label_79a5b4:
    // 0x79a5b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_79a5b8:
    // 0x79a5b8: 0x8cc27a8c  lw          $v0, 0x7A8C($a2)
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31372)));
label_79a5bc:
    // 0x79a5bc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_79a5c0:
    // 0x79a5c0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_79a5c4:
    // 0x79a5c4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a5c8:
    // 0x79a5c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79a5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79a5cc:
    // 0x79a5cc: 0x24754c38  addiu       $s5, $v1, 0x4C38
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_79a5d0:
    // 0x79a5d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79a5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_79a5d4:
    // 0x79a5d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a5d8:
    // 0x79a5d8: 0xacc27a8c  sw          $v0, 0x7A8C($a2)
    ctx->pc = 0x79a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 2));
label_79a5dc:
    // 0x79a5dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_79a5e0:
    // 0x79a5e0: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_79a5e4:
    // 0x79a5e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_79a5e8:
    // 0x79a5e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a5ec:
    // 0x79a5ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a5f0:
    // 0x79a5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a5f4:
    // 0x79a5f4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_79a5f8:
    // 0x79a5f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79a5fc:
    if (ctx->pc == 0x79A5FCu) {
        ctx->pc = 0x79A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F8u;
        // 0x79a5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A600u;
        goto label_79a600;
    }
    ctx->pc = 0x79A5F8u;
    {
        const bool branch_taken_0x79a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F8u;
        // 0x79a5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5f8) {
            ctx->pc = 0x79A630u;
            goto label_79a630;
        }
    }
    ctx->pc = 0x79A600u;
label_79a600:
    // 0x79a600: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a604:
    // 0x79a604: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a608:
    // 0x79a608: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a60c:
    // 0x79a60c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a610:
    // 0x79a610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a614:
    // 0x79a614: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a618:
    // 0x79a618: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a61c:
    // 0x79a61c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a620:
    if (ctx->pc == 0x79A620u) {
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A624u;
        goto label_79a624;
    }
    ctx->pc = 0x79A61Cu;
    {
        const bool branch_taken_0x79a61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a61c) {
            ctx->pc = 0x79A630u;
            goto label_79a630;
        }
    }
    ctx->pc = 0x79A624u;
label_79a624:
    // 0x79a624: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a628:
    // 0x79a628: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a62c:
    if (ctx->pc == 0x79A62Cu) {
        ctx->pc = 0x79A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A628u;
        // 0x79a62c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A630u;
        goto label_79a630;
    }
    ctx->pc = 0x79A628u;
    {
        const bool branch_taken_0x79a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a628) {
            ctx->pc = 0x79A62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A628u;
            // 0x79a62c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a608;
        }
    }
    ctx->pc = 0x79A630u;
label_79a630:
    // 0x79a630: 0xc0b1508  jal         func_2C5420
label_79a634:
    if (ctx->pc == 0x79A634u) {
        ctx->pc = 0x79A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A630u;
        // 0x79a634: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A638u;
        goto label_79a638;
    }
    ctx->pc = 0x79A630u;
    SET_GPR_U32(ctx, 31, 0x79A638u);
    ctx->pc = 0x79A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A630u;
    // 0x79a634: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A630u, 0x79A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A638u;
label_79a638:
    // 0x79a638: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_79a63c:
    // 0x79a63c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a640:
    // 0x79a640: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a644:
    // 0x79a644: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x79a644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_79a648:
    // 0x79a648: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_79a64c:
    if (ctx->pc == 0x79A64Cu) {
        ctx->pc = 0x79A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A648u;
        // 0x79a64c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A650u;
        goto label_79a650;
    }
    ctx->pc = 0x79A648u;
    {
        const bool branch_taken_0x79a648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A648u;
        // 0x79a64c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a648) {
            ctx->pc = 0x79A5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5e0;
        }
    }
    ctx->pc = 0x79A650u;
label_79a650:
    // 0x79a650: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_79a654:
    // 0x79a654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a658:
    // 0x79a658: 0x329200ff  andi        $s2, $s4, 0xFF
    ctx->pc = 0x79a658u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_79a65c:
    // 0x79a65c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_79a660:
    // 0x79a660: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x79a660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79a664:
    // 0x79a664: 0x100000fc  b           . + 4 + (0xFC << 2)
label_79a668:
    if (ctx->pc == 0x79A668u) {
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A66Cu;
        goto label_79a66c;
    }
    ctx->pc = 0x79A664u;
    {
        const bool branch_taken_0x79a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a664) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A66Cu;
label_79a66c:
    // 0x79a66c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a670:
    // 0x79a670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a674:
    // 0x79a674: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_79a678:
    // 0x79a678: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a67c:
    // 0x79a67c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79a680:
    // 0x79a680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a684:
    // 0x79a684: 0xc0c1c82  jal         func_307208
label_79a688:
    if (ctx->pc == 0x79A688u) {
        ctx->pc = 0x79A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A684u;
        // 0x79a688: 0x26e47470  addiu       $a0, $s7, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A68Cu;
        goto label_79a68c;
    }
    ctx->pc = 0x79A684u;
    SET_GPR_U32(ctx, 31, 0x79A68Cu);
    ctx->pc = 0x79A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A684u;
    // 0x79a688: 0x26e47470  addiu       $a0, $s7, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A684u, 0x79A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A68Cu;
label_79a68c:
    // 0x79a68c: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79a690:
    // 0x79a690: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a694:
    // 0x79a694: 0xc0b0fb6  jal         func_2C3ED8
label_79a698:
    if (ctx->pc == 0x79A698u) {
        ctx->pc = 0x79A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A694u;
        // 0x79a698: 0x24a5c248  addiu       $a1, $a1, -0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A69Cu;
        goto label_79a69c;
    }
    ctx->pc = 0x79A694u;
    SET_GPR_U32(ctx, 31, 0x79A69Cu);
    ctx->pc = 0x79A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A694u;
    // 0x79a698: 0x24a5c248  addiu       $a1, $a1, -0x3DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A694u, 0x79A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A69Cu;
label_79a69c:
    // 0x79a69c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79a6a0:
    // 0x79a6a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a6a4:
    // 0x79a6a4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79a6a8:
    // 0x79a6a8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_79a6ac:
    // 0x79a6ac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a6b0:
    // 0x79a6b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a6b4:
    // 0x79a6b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a6b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a6b8:
    // 0x79a6b8: 0xc0b2e28  jal         func_2CB8A0
label_79a6bc:
    if (ctx->pc == 0x79A6BCu) {
        ctx->pc = 0x79A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B8u;
        // 0x79a6bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6C0u;
        goto label_79a6c0;
    }
    ctx->pc = 0x79A6B8u;
    SET_GPR_U32(ctx, 31, 0x79A6C0u);
    ctx->pc = 0x79A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B8u;
    // 0x79a6bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A6B8u, 0x79A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79a6c4:
    // 0x79a6c4: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_79a6c8:
    if (ctx->pc == 0x79A6C8u) {
        ctx->pc = 0x79A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C4u;
        // 0x79a6c8: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6CCu;
        goto label_79a6cc;
    }
    ctx->pc = 0x79A6C4u;
    {
        const bool branch_taken_0x79a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C4u;
        // 0x79a6c8: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c4) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A6CCu;
label_79a6cc:
    // 0x79a6cc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a6d0:
    // 0x79a6d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a6d4:
    // 0x79a6d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a6d8:
    // 0x79a6d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a6dc:
    // 0x79a6dc: 0x0  nop
    ctx->pc = 0x79a6dcu;
    // NOP
label_79a6e0:
    // 0x79a6e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a6e4:
    // 0x79a6e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_79a6e8:
    if (ctx->pc == 0x79A6E8u) {
        ctx->pc = 0x79A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6E4u;
        // 0x79a6e8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6ECu;
        goto label_79a6ec;
    }
    ctx->pc = 0x79A6E4u;
    {
        const bool branch_taken_0x79a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6e4) {
            ctx->pc = 0x79A6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6E4u;
            // 0x79a6e8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A704u;
            goto label_79a704;
        }
    }
    ctx->pc = 0x79A6ECu;
label_79a6ec:
    // 0x79a6ec: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79a6f0:
    // 0x79a6f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a6f4:
    // 0x79a6f4: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x79a6f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_79a6f8:
    // 0x79a6f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79a6fc:
    // 0x79a6fc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a700:
    // 0x79a700: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_79a704:
    // 0x79a704: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
label_79a708:
    if (ctx->pc == 0x79A708u) {
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A70Cu;
        goto label_79a70c;
    }
    ctx->pc = 0x79A704u;
    {
        const bool branch_taken_0x79a704 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a704) {
            ctx->pc = 0x79A6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6e0;
        }
    }
    ctx->pc = 0x79A70Cu;
label_79a70c:
    // 0x79a70c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a70cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a710:
    // 0x79a710: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x79a710u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79a714:
    // 0x79a714: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79a718:
    // 0x79a718: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a71c:
    // 0x79a71c: 0xc0b1010  jal         func_2C4040
label_79a720:
    if (ctx->pc == 0x79A720u) {
        ctx->pc = 0x79A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A71Cu;
        // 0x79a720: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A724u;
        goto label_79a724;
    }
    ctx->pc = 0x79A71Cu;
    SET_GPR_U32(ctx, 31, 0x79A724u);
    ctx->pc = 0x79A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A71Cu;
    // 0x79a720: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4040u, 0x79A71Cu, 0x79A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A724u;
label_79a724:
    // 0x79a724: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_79a728:
    if (ctx->pc == 0x79A728u) {
        ctx->pc = 0x79A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A724u;
        // 0x79a728: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A72Cu;
        goto label_79a72c;
    }
    ctx->pc = 0x79A724u;
    {
        const bool branch_taken_0x79a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A724u;
        // 0x79a728: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a724) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A72Cu;
label_79a72c:
    // 0x79a72c: 0x100000ca  b           . + 4 + (0xCA << 2)
label_79a730:
    if (ctx->pc == 0x79A730u) {
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A734u;
        goto label_79a734;
    }
    ctx->pc = 0x79A72Cu;
    {
        const bool branch_taken_0x79a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a72c) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A734u;
label_79a734:
    // 0x79a734: 0x26e47470  addiu       $a0, $s7, 0x7470
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
label_79a738:
    // 0x79a738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a73c:
    // 0x79a73c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a740:
    // 0x79a740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a744:
    // 0x79a744: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a748:
    // 0x79a748: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_79a74c:
    // 0x79a74c: 0xc0c1c82  jal         func_307208
label_79a750:
    if (ctx->pc == 0x79A750u) {
        ctx->pc = 0x79A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A74Cu;
        // 0x79a750: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A754u;
        goto label_79a754;
    }
    ctx->pc = 0x79A74Cu;
    SET_GPR_U32(ctx, 31, 0x79A754u);
    ctx->pc = 0x79A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A74Cu;
    // 0x79a750: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A74Cu, 0x79A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A754u;
label_79a754:
    // 0x79a754: 0x10000065  b           . + 4 + (0x65 << 2)
label_79a758:
    if (ctx->pc == 0x79A758u) {
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A75Cu;
        goto label_79a75c;
    }
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A8ECu;
            goto label_79a8ec;
        }
    }
    ctx->pc = 0x79A75Cu;
label_79a75c:
    // 0x79a75c: 0x26e37470  addiu       $v1, $s7, 0x7470
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
label_79a760:
    // 0x79a760: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x79a760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_79a764:
    // 0x79a764: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79a764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_79a768:
    // 0x79a768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79a76c:
    // 0x79a76c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_79a770:
    if (ctx->pc == 0x79A770u) {
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A774u;
        goto label_79a774;
    }
    ctx->pc = 0x79A76Cu;
    {
        const bool branch_taken_0x79a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a76c) {
            ctx->pc = 0x79A818u;
            goto label_79a818;
        }
    }
    ctx->pc = 0x79A774u;
label_79a774:
    // 0x79a774: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_79a778:
    // 0x79a778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a77c:
    // 0x79a77c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79a77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a780:
    // 0x79a780: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79a784:
    // 0x79a784: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a788:
    // 0x79a788: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a78c:
    // 0x79a78c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a790:
    // 0x79a790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a794:
    // 0x79a794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_79a798:
    if (ctx->pc == 0x79A798u) {
        ctx->pc = 0x79A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A794u;
        // 0x79a798: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A79Cu;
        goto label_79a79c;
    }
    ctx->pc = 0x79A794u;
    {
        const bool branch_taken_0x79a794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A794u;
        // 0x79a798: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a794) {
            ctx->pc = 0x79A7A4u;
            goto label_79a7a4;
        }
    }
    ctx->pc = 0x79A79Cu;
label_79a79c:
    // 0x79a79c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79a7a0:
    // 0x79a7a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79a7a4:
    // 0x79a7a4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_79a7a8:
    if (ctx->pc == 0x79A7A8u) {
        ctx->pc = 0x79A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A4u;
        // 0x79a7a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7ACu;
        goto label_79a7ac;
    }
    ctx->pc = 0x79A7A4u;
    {
        const bool branch_taken_0x79a7a4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A4u;
        // 0x79a7a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7a4) {
            ctx->pc = 0x79A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a790;
        }
    }
    ctx->pc = 0x79A7ACu;
label_79a7ac:
    // 0x79a7ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_79a7b0:
    // 0x79a7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a7b4:
    // 0x79a7b4: 0x27c27b00  addiu       $v0, $fp, 0x7B00
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31488));
label_79a7b8:
    // 0x79a7b8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x79a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_79a7bc:
    // 0x79a7bc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x79a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_79a7c0:
    // 0x79a7c0: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
label_79a7c4:
    if (ctx->pc == 0x79A7C4u) {
        ctx->pc = 0x79A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C0u;
        // 0x79a7c4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7C8u;
        goto label_79a7c8;
    }
    ctx->pc = 0x79A7C0u;
    {
        const bool branch_taken_0x79a7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C0u;
        // 0x79a7c4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c0) {
            ctx->pc = 0x79A7E0u;
            goto label_79a7e0;
        }
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a7cc:
    // 0x79a7cc: 0xc7c17b00  lwc1        $f1, 0x7B00($fp)
    ctx->pc = 0x79a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 31488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79a7d0:
    // 0x79a7d0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x79a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79a7d4:
    // 0x79a7d4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x79a7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_79a7d8:
    // 0x79a7d8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x79a7d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_79a7dc:
    // 0x79a7dc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x79a7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_79a7e0:
    // 0x79a7e0: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79a7e4:
    // 0x79a7e4: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x79a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
label_79a7e8:
    // 0x79a7e8: 0xc0b0fb6  jal         func_2C3ED8
label_79a7ec:
    if (ctx->pc == 0x79A7ECu) {
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x329200ff  andi        $s2, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7F0u;
        goto label_79a7f0;
    }
    ctx->pc = 0x79A7E8u;
    SET_GPR_U32(ctx, 31, 0x79A7F0u);
    ctx->pc = 0x79A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E8u;
    // 0x79a7ec: 0x329200ff  andi        $s2, $s4, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A7E8u, 0x79A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F0u;
label_79a7f0:
    // 0x79a7f0: 0x26e47470  addiu       $a0, $s7, 0x7470
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 29808));
label_79a7f4:
    // 0x79a7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a7f8:
    // 0x79a7f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a7fc:
    // 0x79a7fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a800:
    // 0x79a800: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_79a804:
    // 0x79a804: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a808:
    // 0x79a808: 0xc0c1c82  jal         func_307208
label_79a80c:
    if (ctx->pc == 0x79A80Cu) {
        ctx->pc = 0x79A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A808u;
        // 0x79a80c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A810u;
        goto label_79a810;
    }
    ctx->pc = 0x79A808u;
    SET_GPR_U32(ctx, 31, 0x79A810u);
    ctx->pc = 0x79A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A808u;
    // 0x79a80c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A808u, 0x79A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A810u;
label_79a810:
    // 0x79a810: 0x10000092  b           . + 4 + (0x92 << 2)
label_79a814:
    if (ctx->pc == 0x79A814u) {
        ctx->pc = 0x79A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A810u;
        // 0x79a814: 0x8fa70074  lw          $a3, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A818u;
        goto label_79a818;
    }
    ctx->pc = 0x79A810u;
    {
        const bool branch_taken_0x79a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A810u;
        // 0x79a814: 0x8fa70074  lw          $a3, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a810) {
            ctx->pc = 0x79AA5Cu;
            goto label_79aa5c;
        }
    }
    ctx->pc = 0x79A818u;
label_79a818:
    // 0x79a818: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x79a818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a81c:
    // 0x79a81c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a820:
    // 0x79a820: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a824:
    // 0x79a824: 0x0  nop
    ctx->pc = 0x79a824u;
    // NOP
label_79a828:
    // 0x79a828: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a82c:
    // 0x79a82c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_79a830:
    if (ctx->pc == 0x79A830u) {
        ctx->pc = 0x79A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A82Cu;
        // 0x79a830: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A834u;
        goto label_79a834;
    }
    ctx->pc = 0x79A82Cu;
    {
        const bool branch_taken_0x79a82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a82c) {
            ctx->pc = 0x79A830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A82Cu;
            // 0x79a830: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A84Cu;
            goto label_79a84c;
        }
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79a838:
    // 0x79a838: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a83c:
    // 0x79a83c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x79a83cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_79a840:
    // 0x79a840: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79a844:
    // 0x79a844: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a844u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a848:
    // 0x79a848: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_79a84c:
    // 0x79a84c: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
label_79a850:
    if (ctx->pc == 0x79A850u) {
        ctx->pc = 0x79A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A84Cu;
        // 0x79a850: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A854u;
        goto label_79a854;
    }
    ctx->pc = 0x79A84Cu;
    {
        const bool branch_taken_0x79a84c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A84Cu;
        // 0x79a850: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a84c) {
            ctx->pc = 0x79A828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a828;
        }
    }
    ctx->pc = 0x79A854u;
label_79a854:
    // 0x79a854: 0x10000081  b           . + 4 + (0x81 << 2)
label_79a858:
    if (ctx->pc == 0x79A858u) {
        ctx->pc = 0x79A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A854u;
        // 0x79a858: 0x8fa70074  lw          $a3, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A85Cu;
        goto label_79a85c;
    }
    ctx->pc = 0x79A854u;
    {
        const bool branch_taken_0x79a854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A854u;
        // 0x79a858: 0x8fa70074  lw          $a3, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a854) {
            ctx->pc = 0x79AA5Cu;
            goto label_79aa5c;
        }
    }
    ctx->pc = 0x79A85Cu;
label_79a85c:
    // 0x79a85c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79a85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a860:
    // 0x79a860: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79a864:
    // 0x79a864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a868:
    // 0x79a868: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a86c:
    // 0x79a86c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a870:
    // 0x79a870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a874:
    // 0x79a874: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_79a878:
    if (ctx->pc == 0x79A878u) {
        ctx->pc = 0x79A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A874u;
        // 0x79a878: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A87Cu;
        goto label_79a87c;
    }
    ctx->pc = 0x79A874u;
    {
        const bool branch_taken_0x79a874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a874) {
            ctx->pc = 0x79A878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A874u;
            // 0x79a878: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A894u;
            goto label_79a894;
        }
    }
    ctx->pc = 0x79A87Cu;
label_79a87c:
    // 0x79a87c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79a880:
    // 0x79a880: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a884:
    // 0x79a884: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x79a884u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_79a888:
    // 0x79a888: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79a88c:
    // 0x79a88c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a890:
    // 0x79a890: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_79a894:
    // 0x79a894: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
label_79a898:
    if (ctx->pc == 0x79A898u) {
        ctx->pc = 0x79A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A894u;
        // 0x79a898: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A89Cu;
        goto label_79a89c;
    }
    ctx->pc = 0x79A894u;
    {
        const bool branch_taken_0x79a894 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A894u;
        // 0x79a898: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a894) {
            ctx->pc = 0x79A870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a870;
        }
    }
    ctx->pc = 0x79A89Cu;
label_79a89c:
    // 0x79a89c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a89cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a8a0:
    // 0x79a8a0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x79a8a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79a8a4:
    // 0x79a8a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79a8a8:
    // 0x79a8a8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a8ac:
    // 0x79a8ac: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x79a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79a8b0:
    // 0x79a8b0: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_79a8b4:
    // 0x79a8b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a8b8:
    // 0x79a8b8: 0x0  nop
    ctx->pc = 0x79a8b8u;
    // NOP
label_79a8bc:
    // 0x79a8bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x79a8bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79a8c0:
    // 0x79a8c0: 0x0  nop
    ctx->pc = 0x79a8c0u;
    // NOP
label_79a8c4:
    // 0x79a8c4: 0x45000064  bc1f        . + 4 + (0x64 << 2)
label_79a8c8:
    if (ctx->pc == 0x79A8C8u) {
        ctx->pc = 0x79A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C4u;
        // 0x79a8c8: 0x27c27b00  addiu       $v0, $fp, 0x7B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8CCu;
        goto label_79a8cc;
    }
    ctx->pc = 0x79A8C4u;
    {
        const bool branch_taken_0x79a8c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C4u;
        // 0x79a8c8: 0x27c27b00  addiu       $v0, $fp, 0x7B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c4) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A8CCu;
label_79a8cc:
    // 0x79a8cc: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
label_79a8d0:
    if (ctx->pc == 0x79A8D0u) {
        ctx->pc = 0x79A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8CCu;
        // 0x79a8d0: 0xc7c17b00  lwc1        $f1, 0x7B00($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 31488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8D4u;
        goto label_79a8d4;
    }
    ctx->pc = 0x79A8CCu;
    {
        const bool branch_taken_0x79a8cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8CCu;
        // 0x79a8d0: 0xc7c17b00  lwc1        $f1, 0x7B00($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 31488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8cc) {
            ctx->pc = 0x79A8E8u;
            goto label_79a8e8;
        }
    }
    ctx->pc = 0x79A8D4u;
label_79a8d4:
    // 0x79a8d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a8d8:
    // 0x79a8d8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x79a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79a8dc:
    // 0x79a8dc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x79a8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_79a8e0:
    // 0x79a8e0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x79a8e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_79a8e4:
    // 0x79a8e4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x79a8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_79a8e8:
    // 0x79a8e8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79a8ec:
    // 0x79a8ec: 0x1000005a  b           . + 4 + (0x5A << 2)
label_79a8f0:
    if (ctx->pc == 0x79A8F0u) {
        ctx->pc = 0x79A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8ECu;
        // 0x79a8f0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8F4u;
        goto label_79a8f4;
    }
    ctx->pc = 0x79A8ECu;
    {
        const bool branch_taken_0x79a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8ECu;
        // 0x79a8f0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8ec) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79a8f8:
    // 0x79a8f8: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
label_79a8fc:
    // 0x79a8fc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_79a900:
    // 0x79a900: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_79a904:
    // 0x79a904: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_79a908:
    // 0x79a908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a90c:
    // 0x79a90c: 0x3c014245  lui         $at, 0x4245
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16965 << 16));
label_79a910:
    // 0x79a910: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79a914:
    // 0x79a914: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a918:
    // 0x79a918: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_79a91c:
    // 0x79a91c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a920:
    // 0x79a920: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a924:
    // 0x79a924: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a928:
    // 0x79a928: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a92c:
    // 0x79a92c: 0x0  nop
    ctx->pc = 0x79a92cu;
    // NOP
label_79a930:
    // 0x79a930: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a934:
    // 0x79a934: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_79a938:
    if (ctx->pc == 0x79A938u) {
        ctx->pc = 0x79A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A934u;
        // 0x79a938: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A93Cu;
        goto label_79a93c;
    }
    ctx->pc = 0x79A934u;
    {
        const bool branch_taken_0x79a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a934) {
            ctx->pc = 0x79A938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A934u;
            // 0x79a938: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A970u;
            goto label_79a970;
        }
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x79a93cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_79a940:
    // 0x79a940: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x79a940u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_79a944:
    // 0x79a944: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x79a944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_79a948:
    // 0x79a948: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x79a948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_79a94c:
    // 0x79a94c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79a950:
    // 0x79a950: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_79a954:
    if (ctx->pc == 0x79A954u) {
        ctx->pc = 0x79A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A950u;
        // 0x79a954: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A958u;
        goto label_79a958;
    }
    ctx->pc = 0x79A950u;
    {
        const bool branch_taken_0x79a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A950u;
        // 0x79a954: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a950) {
            ctx->pc = 0x79A96Cu;
            goto label_79a96c;
        }
    }
    ctx->pc = 0x79A958u;
label_79a958:
    // 0x79a958: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79a95c:
    // 0x79a95c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x79a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79a960:
    // 0x79a960: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79a964:
    // 0x79a964: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x79a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a968:
    // 0x79a968: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a96c:
    // 0x79a96c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_79a970:
    // 0x79a970: 0x481ffef  bgez        $a0, . + 4 + (-0x11 << 2)
label_79a974:
    if (ctx->pc == 0x79A974u) {
        ctx->pc = 0x79A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A970u;
        // 0x79a974: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A978u;
        goto label_79a978;
    }
    ctx->pc = 0x79A970u;
    {
        const bool branch_taken_0x79a970 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A970u;
        // 0x79a974: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a970) {
            ctx->pc = 0x79A930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a930;
        }
    }
    ctx->pc = 0x79A978u;
label_79a978:
    // 0x79a978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a97c:
    // 0x79a97c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79a980:
    // 0x79a980: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x79a980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_79a984:
    // 0x79a984: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a988:
    // 0x79a988: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a98c:
    // 0x79a98c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x79a98cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_79a990:
    // 0x79a990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a994:
    // 0x79a994: 0xc0c194a  jal         func_306528
label_79a998:
    if (ctx->pc == 0x79A998u) {
        ctx->pc = 0x79A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A994u;
        // 0x79a998: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A99Cu;
        goto label_79a99c;
    }
    ctx->pc = 0x79A994u;
    SET_GPR_U32(ctx, 31, 0x79A99Cu);
    ctx->pc = 0x79A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A994u;
    // 0x79a998: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A994u, 0x79A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A99Cu;
label_79a99c:
    // 0x79a99c: 0x8ec32f84  lw          $v1, 0x2F84($s6)
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79a9a0:
    // 0x79a9a0: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_79a9a4:
    // 0x79a9a4: 0xc0b56a8  jal         func_2D5AA0
label_79a9a8:
    if (ctx->pc == 0x79A9A8u) {
        ctx->pc = 0x79A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A4u;
        // 0x79a9a8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ACu;
        goto label_79a9ac;
    }
    ctx->pc = 0x79A9A4u;
    SET_GPR_U32(ctx, 31, 0x79A9ACu);
    ctx->pc = 0x79A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A4u;
    // 0x79a9a8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9A4u, 0x79A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9ACu;
label_79a9ac:
    // 0x79a9ac: 0xc0b0f04  jal         func_2C3C10
label_79a9b0:
    if (ctx->pc == 0x79A9B0u) {
        ctx->pc = 0x79A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9ACu;
        // 0x79a9b0: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9B4u;
        goto label_79a9b4;
    }
    ctx->pc = 0x79A9ACu;
    SET_GPR_U32(ctx, 31, 0x79A9B4u);
    ctx->pc = 0x79A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9ACu;
    // 0x79a9b0: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A9ACu, 0x79A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B4u;
label_79a9b4:
    // 0x79a9b4: 0xc0b6dac  jal         func_2DB6B0
label_79a9b8:
    if (ctx->pc == 0x79A9B8u) {
        ctx->pc = 0x79A9BCu;
        goto label_79a9bc;
    }
    ctx->pc = 0x79A9B4u;
    SET_GPR_U32(ctx, 31, 0x79A9BCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A9B4u, 0x79A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9BCu;
label_79a9bc:
    // 0x79a9bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a9c0:
    // 0x79a9c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9c4:
    // 0x79a9c4: 0xc0493d8  jal         func_124F60
label_79a9c8:
    if (ctx->pc == 0x79A9C8u) {
        ctx->pc = 0x79A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C4u;
        // 0x79a9c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9CCu;
        goto label_79a9cc;
    }
    ctx->pc = 0x79A9C4u;
    SET_GPR_U32(ctx, 31, 0x79A9CCu);
    ctx->pc = 0x79A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C4u;
    // 0x79a9c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x79A9C4u, 0x79A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9CCu;
label_79a9cc:
    // 0x79a9cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9d0:
    // 0x79a9d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a9d4:
    // 0x79a9d4: 0xc0c185a  jal         func_306168
label_79a9d8:
    if (ctx->pc == 0x79A9D8u) {
        ctx->pc = 0x79A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D4u;
        // 0x79a9d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9DCu;
        goto label_79a9dc;
    }
    ctx->pc = 0x79A9D4u;
    SET_GPR_U32(ctx, 31, 0x79A9DCu);
    ctx->pc = 0x79A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D4u;
    // 0x79a9d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x79A9D4u, 0x79A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9DCu;
label_79a9dc:
    // 0x79a9dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79a9e0:
    // 0x79a9e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9e4:
    // 0x79a9e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9e8:
    // 0x79a9e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a9ec:
    // 0x79a9ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x79a9ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_79a9f0:
    // 0x79a9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9f4:
    // 0x79a9f4: 0xc0c194a  jal         func_306528
label_79a9f8:
    if (ctx->pc == 0x79A9F8u) {
        ctx->pc = 0x79A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F4u;
        // 0x79a9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9FCu;
        goto label_79a9fc;
    }
    ctx->pc = 0x79A9F4u;
    SET_GPR_U32(ctx, 31, 0x79A9FCu);
    ctx->pc = 0x79A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F4u;
    // 0x79a9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A9F4u, 0x79A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9FCu;
label_79a9fc:
    // 0x79a9fc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x79a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_79aa00:
    // 0x79aa00: 0xc0b6cac  jal         func_2DB2B0
label_79aa04:
    if (ctx->pc == 0x79AA04u) {
        ctx->pc = 0x79AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA00u;
        // 0x79aa04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA08u;
        goto label_79aa08;
    }
    ctx->pc = 0x79AA00u;
    SET_GPR_U32(ctx, 31, 0x79AA08u);
    ctx->pc = 0x79AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA00u;
    // 0x79aa04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AA00u, 0x79AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA08u;
label_79aa08:
    // 0x79aa08: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
label_79aa0c:
    // 0x79aa0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79aa0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79aa10:
    // 0x79aa10: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
label_79aa14:
    // 0x79aa14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_79aa18:
    // 0x79aa18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79aa18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79aa1c:
    // 0x79aa1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x79aa1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa20:
    // 0x79aa20: 0x3c014245  lui         $at, 0x4245
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16965 << 16));
label_79aa24:
    // 0x79aa24: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79aa24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79aa28:
    // 0x79aa28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79aa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79aa2c:
    // 0x79aa2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79aa30:
    // 0x79aa30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79aa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79aa34:
    // 0x79aa34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79aa34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79aa38:
    // 0x79aa38: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_79aa3c:
    // 0x79aa3c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x79aa3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_79aa40:
    // 0x79aa40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79aa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aa44:
    // 0x79aa44: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x79aa44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79aa48:
    // 0x79aa48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79aa48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aa4c:
    // 0x79aa4c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x79aa4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79aa50:
    // 0x79aa50: 0xc0b2e5a  jal         func_2CB968
label_79aa54:
    if (ctx->pc == 0x79AA54u) {
        ctx->pc = 0x79AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA50u;
        // 0x79aa54: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA58u;
        goto label_79aa58;
    }
    ctx->pc = 0x79AA50u;
    SET_GPR_U32(ctx, 31, 0x79AA58u);
    ctx->pc = 0x79AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA50u;
    // 0x79aa54: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79AA50u, 0x79AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA58u;
label_79aa58:
    // 0x79aa58: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x79aa58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_79aa5c:
    // 0x79aa5c: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
label_79aa60:
    if (ctx->pc == 0x79AA60u) {
        ctx->pc = 0x79AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA5Cu;
        // 0x79aa60: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA64u;
        goto label_79aa64;
    }
    ctx->pc = 0x79AA5Cu;
    {
        const bool branch_taken_0x79aa5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA5Cu;
        // 0x79aa60: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa5c) {
            ctx->pc = 0x79AA78u;
            goto label_79aa78;
        }
    }
    ctx->pc = 0x79AA64u;
label_79aa64:
    // 0x79aa64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aa68:
    // 0x79aa68: 0xc0b56a8  jal         func_2D5AA0
label_79aa6c:
    if (ctx->pc == 0x79AA6Cu) {
        ctx->pc = 0x79AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA68u;
        // 0x79aa6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA70u;
        goto label_79aa70;
    }
    ctx->pc = 0x79AA68u;
    SET_GPR_U32(ctx, 31, 0x79AA70u);
    ctx->pc = 0x79AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA68u;
    // 0x79aa6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x1000fea1  b           . + 4 + (-0x15F << 2)
label_79aa74:
    if (ctx->pc == 0x79AA74u) {
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA78u;
        goto label_79aa78;
    }
    ctx->pc = 0x79AA70u;
    {
        const bool branch_taken_0x79aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa70) {
            ctx->pc = 0x79A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4f8;
        }
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79aa78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_79aa7c:
    // 0x79aa7c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79aa80:
    // 0x79aa80: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_79aa84:
    // 0x79aa84: 0xc0b0a54  jal         func_2C2950
label_79aa88:
    if (ctx->pc == 0x79AA88u) {
        ctx->pc = 0x79AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA84u;
        // 0x79aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA8Cu;
        goto label_79aa8c;
    }
    ctx->pc = 0x79AA84u;
    SET_GPR_U32(ctx, 31, 0x79AA8Cu);
    ctx->pc = 0x79AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA84u;
    // 0x79aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79AA84u, 0x79AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA8Cu;
label_79aa8c:
    // 0x79aa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa90:
    // 0x79aa90: 0xc0b0a7e  jal         func_2C29F8
label_79aa94:
    if (ctx->pc == 0x79AA94u) {
        ctx->pc = 0x79AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA90u;
        // 0x79aa94: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA98u;
        goto label_79aa98;
    }
    ctx->pc = 0x79AA90u;
    SET_GPR_U32(ctx, 31, 0x79AA98u);
    ctx->pc = 0x79AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA90u;
    // 0x79aa94: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79AA90u, 0x79AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA98u;
label_79aa98:
    // 0x79aa98: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
label_79aa9c:
    // 0x79aa9c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_79aaa0:
    // 0x79aaa0: 0x8d048658  lw          $a0, -0x79A8($t0)
    ctx->pc = 0x79aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294936152)));
label_79aaa4:
    // 0x79aaa4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79aaa8:
    // 0x79aaa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79aaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79aaac:
    // 0x79aaac: 0xc0b6dac  jal         func_2DB6B0
label_79aab0:
    if (ctx->pc == 0x79AAB0u) {
        ctx->pc = 0x79AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAACu;
        // 0x79aab0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAB4u;
        goto label_79aab4;
    }
    ctx->pc = 0x79AAACu;
    SET_GPR_U32(ctx, 31, 0x79AAB4u);
    ctx->pc = 0x79AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAACu;
    // 0x79aab0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AAACu, 0x79AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAB4u;
label_79aab4:
    // 0x79aab4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79aab8:
    // 0x79aab8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79aabc:
    // 0x79aabc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79aac0:
    // 0x79aac0: 0xa0f809  jalr        $a1
label_79aac4:
    if (ctx->pc == 0x79AAC4u) {
        ctx->pc = 0x79AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC0u;
        // 0x79aac4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAC8u;
        goto label_79aac8;
    }
    ctx->pc = 0x79AAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79AAC8u);
        ctx->pc = 0x79AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC0u;
        // 0x79aac4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAC0u, 0x79AAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AAC8u;
label_79aac8:
    // 0x79aac8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_79aacc:
    // 0x79aacc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_79aad0:
    if (ctx->pc == 0x79AAD0u) {
        ctx->pc = 0x79AAD4u;
        goto label_79aad4;
    }
    ctx->pc = 0x79AACCu;
    {
        const bool branch_taken_0x79aacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x79aacc) {
            ctx->pc = 0x79AAECu;
            goto label_79aaec;
        }
    }
    ctx->pc = 0x79AAD4u;
label_79aad4:
    // 0x79aad4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79aad8:
    // 0x79aad8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x79aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_79aadc:
    // 0x79aadc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79aae0:
    // 0x79aae0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x79aae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79aae4:
    // 0x79aae4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79aae8:
    // 0x79aae8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x79aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_79aaec:
    // 0x79aaec: 0xc0b6dac  jal         func_2DB6B0
label_79aaf0:
    if (ctx->pc == 0x79AAF0u) {
        ctx->pc = 0x79AAF4u;
        goto label_79aaf4;
    }
    ctx->pc = 0x79AAECu;
    SET_GPR_U32(ctx, 31, 0x79AAF4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AAECu, 0x79AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF4u;
label_79aaf4:
    // 0x79aaf4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79aaf8:
    // 0x79aaf8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x79aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_79aafc:
    // 0x79aafc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79ab00:
    // 0x79ab00: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79ab04:
    // 0x79ab04: 0xc0f809  jalr        $a2
label_79ab08:
    if (ctx->pc == 0x79AB08u) {
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB0Cu;
        goto label_79ab0c;
    }
    ctx->pc = 0x79AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79AB0Cu);
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB04u, 0x79AB0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AB0Cu;
label_79ab0c:
    // 0x79ab0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79ab10:
    // 0x79ab10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ab10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ab14:
    // 0x79ab14: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_79ab18:
    // 0x79ab18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ab18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ab1c:
    // 0x79ab1c: 0xc0b016c  jal         func_2C05B0
label_79ab20:
    if (ctx->pc == 0x79AB20u) {
        ctx->pc = 0x79AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB1Cu;
        // 0x79ab20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB24u;
        goto label_79ab24;
    }
    ctx->pc = 0x79AB1Cu;
    SET_GPR_U32(ctx, 31, 0x79AB24u);
    ctx->pc = 0x79AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB1Cu;
    // 0x79ab20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79AB1Cu, 0x79AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB24u;
label_79ab24:
    // 0x79ab24: 0xc0b6dac  jal         func_2DB6B0
label_79ab28:
    if (ctx->pc == 0x79AB28u) {
        ctx->pc = 0x79AB2Cu;
        goto label_79ab2c;
    }
    ctx->pc = 0x79AB24u;
    SET_GPR_U32(ctx, 31, 0x79AB2Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AB24u, 0x79AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB2Cu;
label_79ab2c:
    // 0x79ab2c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79ab30:
    // 0x79ab30: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_79ab34:
    // 0x79ab34: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79ab38:
    // 0x79ab38: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x79ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79ab3c:
    // 0x79ab3c: 0xc0f809  jalr        $a2
label_79ab40:
    if (ctx->pc == 0x79AB40u) {
        ctx->pc = 0x79AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB3Cu;
        // 0x79ab40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB44u;
        goto label_79ab44;
    }
    ctx->pc = 0x79AB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79AB44u);
        ctx->pc = 0x79AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB3Cu;
        // 0x79ab40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB3Cu, 0x79AB44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AB44u;
label_79ab44:
    // 0x79ab44: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_79ab48:
    // 0x79ab48: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_79ab4c:
    // 0x79ab4c: 0x8c857a8c  lw          $a1, 0x7A8C($a0)
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31372)));
label_79ab50:
    // 0x79ab50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79ab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_79ab54:
    // 0x79ab54: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_79ab58:
    // 0x79ab58: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x79ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
label_79ab5c:
    // 0x79ab5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79ab5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_79ab60:
    // 0x79ab60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79ab60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_79ab64:
    // 0x79ab64: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79ab64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_79ab68:
    // 0x79ab68: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79ab6c:
    // 0x79ab6c: 0xacc57a8c  sw          $a1, 0x7A8C($a2)
    ctx->pc = 0x79ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 5));
label_79ab70:
    // 0x79ab70: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ab70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79ab74:
    // 0x79ab74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79ab74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ab78:
    // 0x79ab78: 0xc0b0e24  jal         func_2C3890
label_79ab7c:
    if (ctx->pc == 0x79AB7Cu) {
        ctx->pc = 0x79AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB78u;
        // 0x79ab7c: 0x24a59a90  addiu       $a1, $a1, -0x6570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB80u;
        goto label_79ab80;
    }
    ctx->pc = 0x79AB78u;
    SET_GPR_U32(ctx, 31, 0x79AB80u);
    ctx->pc = 0x79AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB78u;
    // 0x79ab7c: 0x24a59a90  addiu       $a1, $a1, -0x6570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AB78u, 0x79AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB80u;
label_79ab80:
    // 0x79ab80: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79ab84:
    // 0x79ab84: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79ab88:
    // 0x79ab88: 0x24a59ce8  addiu       $a1, $a1, -0x6318
    ctx->pc = 0x79ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941928));
label_79ab8c:
    // 0x79ab8c: 0xc0b0e24  jal         func_2C3890
label_79ab90:
    if (ctx->pc == 0x79AB90u) {
        ctx->pc = 0x79AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB8Cu;
        // 0x79ab90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB94u;
        goto label_79ab94;
    }
    ctx->pc = 0x79AB8Cu;
    SET_GPR_U32(ctx, 31, 0x79AB94u);
    ctx->pc = 0x79AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB8Cu;
    // 0x79ab90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AB8Cu, 0x79AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB94u;
label_79ab94:
    // 0x79ab94: 0x8ec32f84  lw          $v1, 0x2F84($s6)
    ctx->pc = 0x79ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79ab98:
    // 0x79ab98: 0xc0b5692  jal         func_2D5A48
label_79ab9c:
    if (ctx->pc == 0x79AB9Cu) {
        ctx->pc = 0x79AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB98u;
        // 0x79ab9c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABA0u;
        goto label_79aba0;
    }
    ctx->pc = 0x79AB98u;
    SET_GPR_U32(ctx, 31, 0x79ABA0u);
    ctx->pc = 0x79AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB98u;
    // 0x79ab9c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AB98u, 0x79ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABA0u;
label_79aba0:
    // 0x79aba0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x79aba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79aba4:
    // 0x79aba4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x79aba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79aba8:
    // 0x79aba8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x79aba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79abac:
    // 0x79abac: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x79abacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79abb0:
    // 0x79abb0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x79abb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79abb4:
    // 0x79abb4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x79abb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79abb8:
    // 0x79abb8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x79abb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79abbc:
    // 0x79abbc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x79abbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79abc0:
    // 0x79abc0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x79abc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79abc4:
    // 0x79abc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79abc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_79abc8:
    // 0x79abc8: 0x3e00008  jr          $ra
label_79abcc:
    if (ctx->pc == 0x79ABCCu) {
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABD0u;
        goto label_fallthrough_0x79abc8;
    }
    ctx->pc = 0x79ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79abc8:
    ctx->pc = 0x79ABD0u;
}
} // namespace gh_r700
