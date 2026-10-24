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

// Function: func_0020F3C0
// Address: 0x20f3c0 - 0x20fbb8
void func_0020F3C0_0x20f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020F3C0_0x20f3c0");
#endif

    switch (ctx->pc) {
        case 0x20f3c0u: goto label_20f3c0;
        case 0x20f3c4u: goto label_20f3c4;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3ccu: goto label_20f3cc;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f3d4u: goto label_20f3d4;
        case 0x20f3d8u: goto label_20f3d8;
        case 0x20f3dcu: goto label_20f3dc;
        case 0x20f3e0u: goto label_20f3e0;
        case 0x20f3e4u: goto label_20f3e4;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f3ecu: goto label_20f3ec;
        case 0x20f3f0u: goto label_20f3f0;
        case 0x20f3f4u: goto label_20f3f4;
        case 0x20f3f8u: goto label_20f3f8;
        case 0x20f3fcu: goto label_20f3fc;
        case 0x20f400u: goto label_20f400;
        case 0x20f404u: goto label_20f404;
        case 0x20f408u: goto label_20f408;
        case 0x20f40cu: goto label_20f40c;
        case 0x20f410u: goto label_20f410;
        case 0x20f414u: goto label_20f414;
        case 0x20f418u: goto label_20f418;
        case 0x20f41cu: goto label_20f41c;
        case 0x20f420u: goto label_20f420;
        case 0x20f424u: goto label_20f424;
        case 0x20f428u: goto label_20f428;
        case 0x20f42cu: goto label_20f42c;
        case 0x20f430u: goto label_20f430;
        case 0x20f434u: goto label_20f434;
        case 0x20f438u: goto label_20f438;
        case 0x20f43cu: goto label_20f43c;
        case 0x20f440u: goto label_20f440;
        case 0x20f444u: goto label_20f444;
        case 0x20f448u: goto label_20f448;
        case 0x20f44cu: goto label_20f44c;
        case 0x20f450u: goto label_20f450;
        case 0x20f454u: goto label_20f454;
        case 0x20f458u: goto label_20f458;
        case 0x20f45cu: goto label_20f45c;
        case 0x20f460u: goto label_20f460;
        case 0x20f464u: goto label_20f464;
        case 0x20f468u: goto label_20f468;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f470u: goto label_20f470;
        case 0x20f474u: goto label_20f474;
        case 0x20f478u: goto label_20f478;
        case 0x20f47cu: goto label_20f47c;
        case 0x20f480u: goto label_20f480;
        case 0x20f484u: goto label_20f484;
        case 0x20f488u: goto label_20f488;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f490u: goto label_20f490;
        case 0x20f494u: goto label_20f494;
        case 0x20f498u: goto label_20f498;
        case 0x20f49cu: goto label_20f49c;
        case 0x20f4a0u: goto label_20f4a0;
        case 0x20f4a4u: goto label_20f4a4;
        case 0x20f4a8u: goto label_20f4a8;
        case 0x20f4acu: goto label_20f4ac;
        case 0x20f4b0u: goto label_20f4b0;
        case 0x20f4b4u: goto label_20f4b4;
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4bcu: goto label_20f4bc;
        case 0x20f4c0u: goto label_20f4c0;
        case 0x20f4c4u: goto label_20f4c4;
        case 0x20f4c8u: goto label_20f4c8;
        case 0x20f4ccu: goto label_20f4cc;
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        case 0x20fa2cu: goto label_20fa2c;
        case 0x20fa30u: goto label_20fa30;
        case 0x20fa34u: goto label_20fa34;
        case 0x20fa38u: goto label_20fa38;
        case 0x20fa3cu: goto label_20fa3c;
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        case 0x20fadcu: goto label_20fadc;
        case 0x20fae0u: goto label_20fae0;
        case 0x20fae4u: goto label_20fae4;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faecu: goto label_20faec;
        case 0x20faf0u: goto label_20faf0;
        case 0x20faf4u: goto label_20faf4;
        case 0x20faf8u: goto label_20faf8;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        default: break;
    }

    ctx->pc = 0x20f3c0u;

label_20f3c0:
    // 0x20f3c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x20f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_20f3c4:
    // 0x20f3c4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x20f3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_20f3c8:
    // 0x20f3c8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x20f3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_20f3cc:
    // 0x20f3cc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x20f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_20f3d0:
    // 0x20f3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20f3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f3d4:
    // 0x20f3d4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x20f3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_20f3d8:
    // 0x20f3d8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x20f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_20f3dc:
    // 0x20f3dc: 0x260464f0  addiu       $a0, $s0, 0x64F0
    ctx->pc = 0x20f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
label_20f3e0:
    // 0x20f3e0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x20f3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_20f3e4:
    // 0x20f3e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f3e8:
    // 0x20f3e8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x20f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_20f3ec:
    // 0x20f3ec: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x20f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_20f3f0:
    // 0x20f3f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_20f3f4:
    // 0x20f3f4: 0xc0a45fe  jal         func_2917F8
label_20f3f8:
    if (ctx->pc == 0x20F3F8u) {
        ctx->pc = 0x20F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F4u;
        // 0x20f3f8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3FCu;
        goto label_20f3fc;
    }
    ctx->pc = 0x20F3F4u;
    SET_GPR_U32(ctx, 31, 0x20F3FCu);
    ctx->pc = 0x20F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3F4u;
    // 0x20f3f8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2917F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2917F8u, 0x20F3F4u, 0x20F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3FCu;
label_20f3fc:
    // 0x20f3fc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20f400:
    // 0x20f400: 0xae2216d8  sw          $v0, 0x16D8($s1)
    ctx->pc = 0x20f400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
label_20f404:
    // 0x20f404: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x20f404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
label_20f408:
    // 0x20f408: 0x2c62007a  sltiu       $v0, $v1, 0x7A
    ctx->pc = 0x20f408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
label_20f40c:
    // 0x20f40c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20f410:
    if (ctx->pc == 0x20F410u) {
        ctx->pc = 0x20F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F40Cu;
        // 0x20f410: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F414u;
        goto label_20f414;
    }
    ctx->pc = 0x20F40Cu;
    {
        const bool branch_taken_0x20f40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F40Cu;
        // 0x20f410: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f40c) {
            ctx->pc = 0x20F42Cu;
            goto label_20f42c;
        }
    }
    ctx->pc = 0x20F414u;
label_20f414:
    // 0x20f414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20f418:
    // 0x20f418: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x20f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
label_20f41c:
    // 0x20f41c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f420:
    // 0x20f420: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f424:
    // 0x20f424: 0x800008  jr          $a0
label_20f428:
    if (ctx->pc == 0x20F428u) {
        ctx->pc = 0x20F42Cu;
        goto label_20f42c;
    }
    ctx->pc = 0x20F424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F42Cu: goto label_20f42c;
            case 0x20F44Cu: goto label_20f44c;
            case 0x20F468u: goto label_20f468;
            case 0x20F480u: goto label_20f480;
            case 0x20F48Cu: goto label_20f48c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F424u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F42Cu;
label_20f42c:
    // 0x20f42c: 0xc0a47f0  jal         func_291FC0
label_20f430:
    if (ctx->pc == 0x20F430u) {
        ctx->pc = 0x20F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F42Cu;
        // 0x20f430: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F434u;
        goto label_20f434;
    }
    ctx->pc = 0x20F42Cu;
    SET_GPR_U32(ctx, 31, 0x20F434u);
    ctx->pc = 0x20F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F42Cu;
    // 0x20f430: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x20F42Cu, 0x20F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F434u;
label_20f434:
    // 0x20f434: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_20f438:
    if (ctx->pc == 0x20F438u) {
        ctx->pc = 0x20F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F434u;
        // 0x20f438: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F43Cu;
        goto label_20f43c;
    }
    ctx->pc = 0x20F434u;
    {
        const bool branch_taken_0x20f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f434) {
            ctx->pc = 0x20F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F434u;
            // 0x20f438: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F494u;
            goto label_20f494;
        }
    }
    ctx->pc = 0x20F43Cu;
label_20f43c:
    // 0x20f43c: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
label_20f440:
    // 0x20f440: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x20f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_20f444:
    // 0x20f444: 0x10000012  b           . + 4 + (0x12 << 2)
label_20f448:
    if (ctx->pc == 0x20F448u) {
        ctx->pc = 0x20F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F444u;
        // 0x20f448: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F44Cu;
        goto label_20f44c;
    }
    ctx->pc = 0x20F444u;
    {
        const bool branch_taken_0x20f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F444u;
        // 0x20f448: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f444) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F44Cu;
label_20f44c:
    // 0x20f44c: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x20f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
label_20f450:
    // 0x20f450: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x20f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_20f454:
    // 0x20f454: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x20f454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_20f458:
    // 0x20f458: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20f45c:
    if (ctx->pc == 0x20F45Cu) {
        ctx->pc = 0x20F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F458u;
        // 0x20f45c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F460u;
        goto label_20f460;
    }
    ctx->pc = 0x20F458u;
    {
        const bool branch_taken_0x20f458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F458u;
        // 0x20f45c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f458) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F460u;
label_20f460:
    // 0x20f460: 0x1000000b  b           . + 4 + (0xB << 2)
label_20f464:
    if (ctx->pc == 0x20F464u) {
        ctx->pc = 0x20F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F460u;
        // 0x20f464: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F468u;
        goto label_20f468;
    }
    ctx->pc = 0x20F460u;
    {
        const bool branch_taken_0x20f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F460u;
        // 0x20f464: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f460) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F468u;
label_20f468:
    // 0x20f468: 0x8e2316d8  lw          $v1, 0x16D8($s1)
    ctx->pc = 0x20f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
label_20f46c:
    // 0x20f46c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x20f46cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_20f470:
    // 0x20f470: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20f474:
    if (ctx->pc == 0x20F474u) {
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0x24620006  addiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F478u;
        goto label_20f478;
    }
    ctx->pc = 0x20F470u;
    {
        const bool branch_taken_0x20f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0x24620006  addiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f470) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F478u;
label_20f478:
    // 0x20f478: 0x10000005  b           . + 4 + (0x5 << 2)
label_20f47c:
    if (ctx->pc == 0x20F47Cu) {
        ctx->pc = 0x20F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F478u;
        // 0x20f47c: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F480u;
        goto label_20f480;
    }
    ctx->pc = 0x20F478u;
    {
        const bool branch_taken_0x20f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F478u;
        // 0x20f47c: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f478) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F480u;
label_20f480:
    // 0x20f480: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20f484:
    // 0x20f484: 0x10000002  b           . + 4 + (0x2 << 2)
label_20f488:
    if (ctx->pc == 0x20F488u) {
        ctx->pc = 0x20F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F484u;
        // 0x20f488: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F48Cu;
        goto label_20f48c;
    }
    ctx->pc = 0x20F484u;
    {
        const bool branch_taken_0x20f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F484u;
        // 0x20f488: 0xae2216d8  sw          $v0, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f484) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F48Cu;
label_20f48c:
    // 0x20f48c: 0xae2016d8  sw          $zero, 0x16D8($s1)
    ctx->pc = 0x20f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 0));
label_20f490:
    // 0x20f490: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20f490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20f494:
    // 0x20f494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f498:
    // 0x20f498: 0xc07e804  jal         func_1FA010
label_20f49c:
    if (ctx->pc == 0x20F49Cu) {
        ctx->pc = 0x20F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F498u;
        // 0x20f49c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4A0u;
        goto label_20f4a0;
    }
    ctx->pc = 0x20F498u;
    SET_GPR_U32(ctx, 31, 0x20F4A0u);
    ctx->pc = 0x20F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F498u;
    // 0x20f49c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20F498u, 0x20F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4A0u;
label_20f4a0:
    // 0x20f4a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20f4a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f4a4:
    // 0x20f4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f4a8:
    // 0x20f4a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_20f4ac:
    if (ctx->pc == 0x20F4ACu) {
        ctx->pc = 0x20F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4A8u;
        // 0x20f4ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4B0u;
        goto label_20f4b0;
    }
    ctx->pc = 0x20F4A8u;
    {
        const bool branch_taken_0x20f4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4A8u;
        // 0x20f4ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4a8) {
            ctx->pc = 0x20F4C0u;
            goto label_20f4c0;
        }
    }
    ctx->pc = 0x20F4B0u;
label_20f4b0:
    // 0x20f4b0: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_20f4b4:
    if (ctx->pc == 0x20F4B4u) {
        ctx->pc = 0x20F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4B0u;
        // 0x20f4b4: 0xc6201760  lwc1        $f0, 0x1760($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4B8u;
        goto label_20f4b8;
    }
    ctx->pc = 0x20F4B0u;
    {
        const bool branch_taken_0x20f4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f4b0) {
            ctx->pc = 0x20F4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F4B0u;
            // 0x20f4b4: 0xc6201760  lwc1        $f0, 0x1760($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F4F0u;
            goto label_20f4f0;
        }
    }
    ctx->pc = 0x20F4B8u;
label_20f4b8:
    // 0x20f4b8: 0x10000024  b           . + 4 + (0x24 << 2)
label_20f4bc:
    if (ctx->pc == 0x20F4BCu) {
        ctx->pc = 0x20F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4B8u;
        // 0x20f4bc: 0xae20175c  sw          $zero, 0x175C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4C0u;
        goto label_20f4c0;
    }
    ctx->pc = 0x20F4B8u;
    {
        const bool branch_taken_0x20f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4B8u;
        // 0x20f4bc: 0xae20175c  sw          $zero, 0x175C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4b8) {
            ctx->pc = 0x20F54Cu;
            goto label_20f54c;
        }
    }
    ctx->pc = 0x20F4C0u;
label_20f4c0:
    // 0x20f4c0: 0xc6201760  lwc1        $f0, 0x1760($s1)
    ctx->pc = 0x20f4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f4c4:
    // 0x20f4c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20f4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20f4c8:
    // 0x20f4c8: 0x0  nop
    ctx->pc = 0x20f4c8u;
    // NOP
label_20f4cc:
    // 0x20f4cc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x20f4ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f4d0:
    // 0x20f4d0: 0x0  nop
    ctx->pc = 0x20f4d0u;
    // NOP
label_20f4d4:
    // 0x20f4d4: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_20f4d8:
    if (ctx->pc == 0x20F4D8u) {
        ctx->pc = 0x20F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4D4u;
        // 0x20f4d8: 0xae2016d8  sw          $zero, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4DCu;
        goto label_20f4dc;
    }
    ctx->pc = 0x20F4D4u;
    {
        const bool branch_taken_0x20f4d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f4d4) {
            ctx->pc = 0x20F4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F4D4u;
            // 0x20f4d8: 0xae2016d8  sw          $zero, 0x16D8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F54Cu;
            goto label_20f54c;
        }
    }
    ctx->pc = 0x20F4DCu;
label_20f4dc:
    // 0x20f4dc: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x20f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
label_20f4e0:
    // 0x20f4e0: 0x5043000e  beql        $v0, $v1, . + 4 + (0xE << 2)
label_20f4e4:
    if (ctx->pc == 0x20F4E4u) {
        ctx->pc = 0x20F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4E0u;
        // 0x20f4e4: 0xc620175c  lwc1        $f0, 0x175C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4E8u;
        goto label_20f4e8;
    }
    ctx->pc = 0x20F4E0u;
    {
        const bool branch_taken_0x20f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20f4e0) {
            ctx->pc = 0x20F4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F4E0u;
            // 0x20f4e4: 0xc620175c  lwc1        $f0, 0x175C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F51Cu;
            goto label_20f51c;
        }
    }
    ctx->pc = 0x20F4E8u;
label_20f4e8:
    // 0x20f4e8: 0x10000018  b           . + 4 + (0x18 << 2)
label_20f4ec:
    if (ctx->pc == 0x20F4ECu) {
        ctx->pc = 0x20F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4E8u;
        // 0x20f4ec: 0xe623175c  swc1        $f3, 0x175C($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4F0u;
        goto label_20f4f0;
    }
    ctx->pc = 0x20F4E8u;
    {
        const bool branch_taken_0x20f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4E8u;
        // 0x20f4ec: 0xe623175c  swc1        $f3, 0x175C($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4e8) {
            ctx->pc = 0x20F54Cu;
            goto label_20f54c;
        }
    }
    ctx->pc = 0x20F4F0u;
label_20f4f0:
    // 0x20f4f0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20f4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20f4f4:
    // 0x20f4f4: 0x0  nop
    ctx->pc = 0x20f4f4u;
    // NOP
label_20f4f8:
    // 0x20f4f8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x20f4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f4fc:
    // 0x20f4fc: 0x0  nop
    ctx->pc = 0x20f4fcu;
    // NOP
label_20f500:
    // 0x20f500: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_20f504:
    if (ctx->pc == 0x20F504u) {
        ctx->pc = 0x20F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F500u;
        // 0x20f504: 0x8e2216d8  lw          $v0, 0x16D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F508u;
        goto label_20f508;
    }
    ctx->pc = 0x20F500u;
    {
        const bool branch_taken_0x20f500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f500) {
            ctx->pc = 0x20F504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F500u;
            // 0x20f504: 0x8e2216d8  lw          $v0, 0x16D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F510u;
            goto label_20f510;
        }
    }
    ctx->pc = 0x20F508u;
label_20f508:
    // 0x20f508: 0x10000010  b           . + 4 + (0x10 << 2)
label_20f50c:
    if (ctx->pc == 0x20F50Cu) {
        ctx->pc = 0x20F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F508u;
        // 0x20f50c: 0xae2016d8  sw          $zero, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F510u;
        goto label_20f510;
    }
    ctx->pc = 0x20F508u;
    {
        const bool branch_taken_0x20f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F508u;
        // 0x20f50c: 0xae2016d8  sw          $zero, 0x16D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f508) {
            ctx->pc = 0x20F54Cu;
            goto label_20f54c;
        }
    }
    ctx->pc = 0x20F510u;
label_20f510:
    // 0x20f510: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_20f514:
    if (ctx->pc == 0x20F514u) {
        ctx->pc = 0x20F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F510u;
        // 0x20f514: 0xe623175c  swc1        $f3, 0x175C($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F518u;
        goto label_20f518;
    }
    ctx->pc = 0x20F510u;
    {
        const bool branch_taken_0x20f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20f510) {
            ctx->pc = 0x20F514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F510u;
            // 0x20f514: 0xe623175c  swc1        $f3, 0x175C($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F54Cu;
            goto label_20f54c;
        }
    }
    ctx->pc = 0x20F518u;
label_20f518:
    // 0x20f518: 0xc620175c  lwc1        $f0, 0x175C($s1)
    ctx->pc = 0x20f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f51c:
    // 0x20f51c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x20f51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f520:
    // 0x20f520: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x20f520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_20f524:
    // 0x20f524: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20f524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f528:
    // 0x20f528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f52c:
    // 0x20f52c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f52cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f530:
    // 0x20f530: 0x0  nop
    ctx->pc = 0x20f530u;
    // NOP
label_20f534:
    // 0x20f534: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_20f538:
    if (ctx->pc == 0x20F538u) {
        ctx->pc = 0x20F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F534u;
        // 0x20f538: 0xe620175c  swc1        $f0, 0x175C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F53Cu;
        goto label_20f53c;
    }
    ctx->pc = 0x20F534u;
    {
        const bool branch_taken_0x20f534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F534u;
        // 0x20f538: 0xe620175c  swc1        $f0, 0x175C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f534) {
            ctx->pc = 0x20F54Cu;
            goto label_20f54c;
        }
    }
    ctx->pc = 0x20F53Cu;
label_20f53c:
    // 0x20f53c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x20f53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_20f540:
    // 0x20f540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f544:
    // 0x20f544: 0xe623175c  swc1        $f3, 0x175C($s1)
    ctx->pc = 0x20f544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5980), bits); }
label_20f548:
    // 0x20f548: 0xe6201760  swc1        $f0, 0x1760($s1)
    ctx->pc = 0x20f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5984), bits); }
label_20f54c:
    // 0x20f54c: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x20f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_20f550:
    // 0x20f550: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x20f550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_20f554:
    // 0x20f554: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_20f558:
    if (ctx->pc == 0x20F558u) {
        ctx->pc = 0x20F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F554u;
        // 0x20f558: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F55Cu;
        goto label_20f55c;
    }
    ctx->pc = 0x20F554u;
    {
        const bool branch_taken_0x20f554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f554) {
            ctx->pc = 0x20F558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F554u;
            // 0x20f558: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F5CCu;
            goto label_20f5cc;
        }
    }
    ctx->pc = 0x20F55Cu;
label_20f55c:
    // 0x20f55c: 0xc62016c0  lwc1        $f0, 0x16C0($s1)
    ctx->pc = 0x20f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f560:
    // 0x20f560: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_20f564:
    // 0x20f564: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20f564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f568:
    // 0x20f568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20f568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20f56c:
    // 0x20f56c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20f56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20f570:
    // 0x20f570: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f574:
    // 0x20f574: 0x0  nop
    ctx->pc = 0x20f574u;
    // NOP
label_20f578:
    // 0x20f578: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_20f57c:
    if (ctx->pc == 0x20F57Cu) {
        ctx->pc = 0x20F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F578u;
        // 0x20f57c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F580u;
        goto label_20f580;
    }
    ctx->pc = 0x20F578u;
    {
        const bool branch_taken_0x20f578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F578u;
        // 0x20f57c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f578) {
            ctx->pc = 0x20F598u;
            goto label_20f598;
        }
    }
    ctx->pc = 0x20F580u;
label_20f580:
    // 0x20f580: 0x262316a0  addiu       $v1, $s1, 0x16A0
    ctx->pc = 0x20f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
label_20f584:
    // 0x20f584: 0x262216b0  addiu       $v0, $s1, 0x16B0
    ctx->pc = 0x20f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
label_20f588:
    // 0x20f588: 0x50620137  beql        $v1, $v0, . + 4 + (0x137 << 2)
label_20f58c:
    if (ctx->pc == 0x20F58Cu) {
        ctx->pc = 0x20F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F588u;
        // 0x20f58c: 0x922202f5  lbu         $v0, 0x2F5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F590u;
        goto label_20f590;
    }
    ctx->pc = 0x20F588u;
    {
        const bool branch_taken_0x20f588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f588) {
            ctx->pc = 0x20F58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F588u;
            // 0x20f58c: 0x922202f5  lbu         $v0, 0x2F5($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA68u;
            goto label_20fa68;
        }
    }
    ctx->pc = 0x20F590u;
label_20f590:
    // 0x20f590: 0x10000008  b           . + 4 + (0x8 << 2)
label_20f594:
    if (ctx->pc == 0x20F594u) {
        ctx->pc = 0x20F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F590u;
        // 0x20f594: 0xc62016b0  lwc1        $f0, 0x16B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F598u;
        goto label_20f598;
    }
    ctx->pc = 0x20F590u;
    {
        const bool branch_taken_0x20f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F590u;
        // 0x20f594: 0xc62016b0  lwc1        $f0, 0x16B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f590) {
            ctx->pc = 0x20F5B4u;
            goto label_20f5b4;
        }
    }
    ctx->pc = 0x20F598u;
label_20f598:
    // 0x20f598: 0xc0b6dac  jal         func_2DB6B0
label_20f59c:
    if (ctx->pc == 0x20F59Cu) {
        ctx->pc = 0x20F5A0u;
        goto label_20f5a0;
    }
    ctx->pc = 0x20F598u;
    SET_GPR_U32(ctx, 31, 0x20F5A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20F598u, 0x20F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5A0u;
label_20f5a0:
    // 0x20f5a0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x20f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_20f5a4:
    // 0x20f5a4: 0x262316a0  addiu       $v1, $s1, 0x16A0
    ctx->pc = 0x20f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
label_20f5a8:
    // 0x20f5a8: 0x5062012f  beql        $v1, $v0, . + 4 + (0x12F << 2)
label_20f5ac:
    if (ctx->pc == 0x20F5ACu) {
        ctx->pc = 0x20F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A8u;
        // 0x20f5ac: 0x922202f5  lbu         $v0, 0x2F5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5B0u;
        goto label_20f5b0;
    }
    ctx->pc = 0x20F5A8u;
    {
        const bool branch_taken_0x20f5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f5a8) {
            ctx->pc = 0x20F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F5A8u;
            // 0x20f5ac: 0x922202f5  lbu         $v0, 0x2F5($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA68u;
            goto label_20fa68;
        }
    }
    ctx->pc = 0x20F5B0u;
label_20f5b0:
    // 0x20f5b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f5b4:
    // 0x20f5b4: 0xe62016a0  swc1        $f0, 0x16A0($s1)
    ctx->pc = 0x20f5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5792), bits); }
label_20f5b8:
    // 0x20f5b8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f5bc:
    // 0x20f5bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x20f5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_20f5c0:
    // 0x20f5c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f5c4:
    // 0x20f5c4: 0x10000127  b           . + 4 + (0x127 << 2)
label_20f5c8:
    if (ctx->pc == 0x20F5C8u) {
        ctx->pc = 0x20F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5C4u;
        // 0x20f5c8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5CCu;
        goto label_20f5cc;
    }
    ctx->pc = 0x20F5C4u;
    {
        const bool branch_taken_0x20f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5C4u;
        // 0x20f5c8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5c4) {
            ctx->pc = 0x20FA64u;
            goto label_20fa64;
        }
    }
    ctx->pc = 0x20F5CCu;
label_20f5cc:
    // 0x20f5cc: 0x8e2217d0  lw          $v0, 0x17D0($s1)
    ctx->pc = 0x20f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6096)));
label_20f5d0:
    // 0x20f5d0: 0x8c6476b0  lw          $a0, 0x76B0($v1)
    ctx->pc = 0x20f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
label_20f5d4:
    // 0x20f5d4: 0x8e250564  lw          $a1, 0x564($s1)
    ctx->pc = 0x20f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20f5d8:
    // 0x20f5d8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x20f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_20f5dc:
    // 0x20f5dc: 0x24a5fdf8  addiu       $a1, $a1, -0x208
    ctx->pc = 0x20f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966776));
label_20f5e0:
    // 0x20f5e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_20f5e4:
    // 0x20f5e4: 0x2ca30077  sltiu       $v1, $a1, 0x77
    ctx->pc = 0x20f5e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
label_20f5e8:
    // 0x20f5e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_20f5ec:
    if (ctx->pc == 0x20F5ECu) {
        ctx->pc = 0x20F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E8u;
        // 0x20f5ec: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5F0u;
        goto label_20f5f0;
    }
    ctx->pc = 0x20F5E8u;
    {
        const bool branch_taken_0x20f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E8u;
        // 0x20f5ec: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5e8) {
            ctx->pc = 0x20F610u;
            goto label_20f610;
        }
    }
    ctx->pc = 0x20F5F0u;
label_20f5f0:
    // 0x20f5f0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_20f5f4:
    // 0x20f5f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20f5f8:
    // 0x20f5f8: 0x24422f50  addiu       $v0, $v0, 0x2F50
    ctx->pc = 0x20f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12112));
label_20f5fc:
    // 0x20f5fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f600:
    // 0x20f600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f604:
    // 0x20f604: 0x800008  jr          $a0
label_20f608:
    if (ctx->pc == 0x20F608u) {
        ctx->pc = 0x20F60Cu;
        goto label_20f60c;
    }
    ctx->pc = 0x20F604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F60Cu: goto label_20f60c;
            case 0x20F610u: goto label_20f610;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F60Cu;
label_20f60c:
    // 0x20f60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f610:
    // 0x20f610: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_20f614:
    // 0x20f614: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_20f618:
    // 0x20f618: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x20f618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_20f61c:
    // 0x20f61c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f620:
    // 0x20f620: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x20f620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20f624:
    // 0x20f624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20f628:
    // 0x20f628: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x20f628u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_20f62c:
    // 0x20f62c: 0x10c0010d  beqz        $a2, . + 4 + (0x10D << 2)
label_20f630:
    if (ctx->pc == 0x20F630u) {
        ctx->pc = 0x20F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F62Cu;
        // 0x20f630: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F634u;
        goto label_20f634;
    }
    ctx->pc = 0x20F62Cu;
    {
        const bool branch_taken_0x20f62c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F62Cu;
        // 0x20f630: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f62c) {
            ctx->pc = 0x20FA64u;
            goto label_20fa64;
        }
    }
    ctx->pc = 0x20F634u;
label_20f634:
    // 0x20f634: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20f634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20f638:
    // 0x20f638: 0xc09bcca  jal         func_26F328
label_20f63c:
    if (ctx->pc == 0x20F63Cu) {
        ctx->pc = 0x20F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F638u;
        // 0x20f63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F640u;
        goto label_20f640;
    }
    ctx->pc = 0x20F638u;
    SET_GPR_U32(ctx, 31, 0x20F640u);
    ctx->pc = 0x20F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F638u;
    // 0x20f63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F328u, 0x20F638u, 0x20F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F640u;
label_20f640:
    // 0x20f640: 0xc62016c0  lwc1        $f0, 0x16C0($s1)
    ctx->pc = 0x20f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f644:
    // 0x20f644: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20f644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f648:
    // 0x20f648: 0x0  nop
    ctx->pc = 0x20f648u;
    // NOP
label_20f64c:
    // 0x20f64c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_20f650:
    if (ctx->pc == 0x20F650u) {
        ctx->pc = 0x20F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F64Cu;
        // 0x20f650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F654u;
        goto label_20f654;
    }
    ctx->pc = 0x20F64Cu;
    {
        const bool branch_taken_0x20f64c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F64Cu;
        // 0x20f650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f64c) {
            ctx->pc = 0x20F66Cu;
            goto label_20f66c;
        }
    }
    ctx->pc = 0x20F654u;
label_20f654:
    // 0x20f654: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x20f654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_20f658:
    // 0x20f658: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x20f658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_20f65c:
    // 0x20f65c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20f660:
    // 0x20f660: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20f660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20f664:
    // 0x20f664: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_20f668:
    if (ctx->pc == 0x20F668u) {
        ctx->pc = 0x20F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F664u;
        // 0x20f668: 0x262516b0  addiu       $a1, $s1, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F66Cu;
        goto label_20f66c;
    }
    ctx->pc = 0x20F664u;
    {
        const bool branch_taken_0x20f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F664u;
        // 0x20f668: 0x262516b0  addiu       $a1, $s1, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f664) {
            ctx->pc = 0x20FA38u;
            goto label_20fa38;
        }
    }
    ctx->pc = 0x20F66Cu;
label_20f66c:
    // 0x20f66c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x20f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f670:
    // 0x20f670: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x20f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f674:
    // 0x20f674: 0xc0b6dac  jal         func_2DB6B0
label_20f678:
    if (ctx->pc == 0x20F678u) {
        ctx->pc = 0x20F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F674u;
        // 0x20f678: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F67Cu;
        goto label_20f67c;
    }
    ctx->pc = 0x20F674u;
    SET_GPR_U32(ctx, 31, 0x20F67Cu);
    ctx->pc = 0x20F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F674u;
    // 0x20f678: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20F674u, 0x20F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F67Cu;
label_20f67c:
    // 0x20f67c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x20f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_20f680:
    // 0x20f680: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x20f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_20f684:
    // 0x20f684: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f688:
    // 0x20f688: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f68c:
    // 0x20f68c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x20f68cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20f690:
    // 0x20f690: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x20f690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f694:
    // 0x20f694: 0x0  nop
    ctx->pc = 0x20f694u;
    // NOP
label_20f698:
    // 0x20f698: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20f69c:
    if (ctx->pc == 0x20F69Cu) {
        ctx->pc = 0x20F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F698u;
        // 0x20f69c: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6A0u;
        goto label_20f6a0;
    }
    ctx->pc = 0x20F698u;
    {
        const bool branch_taken_0x20f698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f698) {
            ctx->pc = 0x20F69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F698u;
            // 0x20f69c: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F6A0u;
            goto label_20f6a0;
        }
    }
    ctx->pc = 0x20F6A0u;
label_20f6a0:
    // 0x20f6a0: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x20f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f6a4:
    // 0x20f6a4: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_20f6a8:
    // 0x20f6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f6ac:
    // 0x20f6ac: 0x0  nop
    ctx->pc = 0x20f6acu;
    // NOP
label_20f6b0:
    // 0x20f6b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f6b4:
    // 0x20f6b4: 0x0  nop
    ctx->pc = 0x20f6b4u;
    // NOP
label_20f6b8:
    // 0x20f6b8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_20f6bc:
    if (ctx->pc == 0x20F6BCu) {
        ctx->pc = 0x20F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6B8u;
        // 0x20f6bc: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6C0u;
        goto label_20f6c0;
    }
    ctx->pc = 0x20F6B8u;
    {
        const bool branch_taken_0x20f6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6B8u;
        // 0x20f6bc: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6b8) {
            ctx->pc = 0x20F70Cu;
            goto label_20f70c;
        }
    }
    ctx->pc = 0x20F6C0u;
label_20f6c0:
    // 0x20f6c0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_20f6c4:
    // 0x20f6c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f6c8:
    // 0x20f6c8: 0x0  nop
    ctx->pc = 0x20f6c8u;
    // NOP
label_20f6cc:
    // 0x20f6cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f6d0:
    // 0x20f6d0: 0x0  nop
    ctx->pc = 0x20f6d0u;
    // NOP
label_20f6d4:
    // 0x20f6d4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_20f6d8:
    if (ctx->pc == 0x20F6D8u) {
        ctx->pc = 0x20F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6D4u;
        // 0x20f6d8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6DCu;
        goto label_20f6dc;
    }
    ctx->pc = 0x20F6D4u;
    {
        const bool branch_taken_0x20f6d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f6d4) {
            ctx->pc = 0x20F6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6D4u;
            // 0x20f6d8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F710u;
            goto label_20f710;
        }
    }
    ctx->pc = 0x20F6DCu;
label_20f6dc:
    // 0x20f6dc: 0xc0b6dac  jal         func_2DB6B0
label_20f6e0:
    if (ctx->pc == 0x20F6E0u) {
        ctx->pc = 0x20F6E4u;
        goto label_20f6e4;
    }
    ctx->pc = 0x20F6DCu;
    SET_GPR_U32(ctx, 31, 0x20F6E4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20F6DCu, 0x20F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6E4u;
label_20f6e4:
    // 0x20f6e4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x20f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_20f6e8:
    // 0x20f6e8: 0x528200ce  beql        $s4, $v0, . + 4 + (0xCE << 2)
label_20f6ec:
    if (ctx->pc == 0x20F6ECu) {
        ctx->pc = 0x20F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6E8u;
        // 0x20f6ec: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6F0u;
        goto label_20f6f0;
    }
    ctx->pc = 0x20F6E8u;
    {
        const bool branch_taken_0x20f6e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f6e8) {
            ctx->pc = 0x20F6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6E8u;
            // 0x20f6ec: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA24u;
            goto label_20fa24;
        }
    }
    ctx->pc = 0x20F6F0u;
label_20f6f0:
    // 0x20f6f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f6f4:
    // 0x20f6f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20f6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20f6f8:
    // 0x20f6f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f6fc:
    // 0x20f6fc: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x20f6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_20f700:
    // 0x20f700: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f704:
    // 0x20f704: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_20f708:
    if (ctx->pc == 0x20F708u) {
        ctx->pc = 0x20F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F704u;
        // 0x20f708: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F70Cu;
        goto label_20f70c;
    }
    ctx->pc = 0x20F704u;
    {
        const bool branch_taken_0x20f704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F704u;
        // 0x20f708: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f704) {
            ctx->pc = 0x20FA20u;
            goto label_20fa20;
        }
    }
    ctx->pc = 0x20F70Cu;
label_20f70c:
    // 0x20f70c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x20f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_20f710:
    // 0x20f710: 0xc07e804  jal         func_1FA010
label_20f714:
    if (ctx->pc == 0x20F714u) {
        ctx->pc = 0x20F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F710u;
        // 0x20f714: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F718u;
        goto label_20f718;
    }
    ctx->pc = 0x20F710u;
    SET_GPR_U32(ctx, 31, 0x20F718u);
    ctx->pc = 0x20F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F710u;
    // 0x20f714: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20F710u, 0x20F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F718u;
label_20f718:
    // 0x20f718: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x20f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20f71c:
    // 0x20f71c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20f71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_20f720:
    // 0x20f720: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20f724:
    if (ctx->pc == 0x20F724u) {
        ctx->pc = 0x20F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F720u;
        // 0x20f724: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F728u;
        goto label_20f728;
    }
    ctx->pc = 0x20F720u;
    {
        const bool branch_taken_0x20f720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F720u;
        // 0x20f724: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f720) {
            ctx->pc = 0x20F740u;
            goto label_20f740;
        }
    }
    ctx->pc = 0x20F728u;
label_20f728:
    // 0x20f728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20f72c:
    // 0x20f72c: 0x24423130  addiu       $v0, $v0, 0x3130
    ctx->pc = 0x20f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12592));
label_20f730:
    // 0x20f730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f734:
    // 0x20f734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f738:
    // 0x20f738: 0x800008  jr          $a0
label_20f73c:
    if (ctx->pc == 0x20F73Cu) {
        ctx->pc = 0x20F740u;
        goto label_20f740;
    }
    ctx->pc = 0x20F738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F740u: goto label_20f740;
            case 0x20F74Cu: goto label_20f74c;
            case 0x20F758u: goto label_20f758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F738u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F740u;
label_20f740:
    // 0x20f740: 0x8e2417d0  lw          $a0, 0x17D0($s1)
    ctx->pc = 0x20f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6096)));
label_20f744:
    // 0x20f744: 0x10000006  b           . + 4 + (0x6 << 2)
label_20f748:
    if (ctx->pc == 0x20F748u) {
        ctx->pc = 0x20F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F744u;
        // 0x20f748: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F74Cu;
        goto label_20f74c;
    }
    ctx->pc = 0x20F744u;
    {
        const bool branch_taken_0x20f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F744u;
        // 0x20f748: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f744) {
            ctx->pc = 0x20F760u;
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F74Cu;
label_20f74c:
    // 0x20f74c: 0x8e2417d0  lw          $a0, 0x17D0($s1)
    ctx->pc = 0x20f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6096)));
label_20f750:
    // 0x20f750: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f754:
    if (ctx->pc == 0x20F754u) {
        ctx->pc = 0x20F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F750u;
        // 0x20f754: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F758u;
        goto label_20f758;
    }
    ctx->pc = 0x20F750u;
    {
        const bool branch_taken_0x20f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F750u;
        // 0x20f754: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f750) {
            ctx->pc = 0x20F760u;
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F758u;
label_20f758:
    // 0x20f758: 0x8e2417d0  lw          $a0, 0x17D0($s1)
    ctx->pc = 0x20f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6096)));
label_20f75c:
    // 0x20f75c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x20f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20f760:
    // 0x20f760: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_20f764:
    if (ctx->pc == 0x20F764u) {
        ctx->pc = 0x20F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F760u;
        // 0x20f764: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F768u;
        goto label_20f768;
    }
    ctx->pc = 0x20F760u;
    {
        const bool branch_taken_0x20f760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f760) {
            ctx->pc = 0x20F764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F760u;
            // 0x20f764: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F768u;
            goto label_20f768;
        }
    }
    ctx->pc = 0x20F768u;
label_20f768:
    // 0x20f768: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x20f768u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_20f76c:
    // 0x20f76c: 0x1810  mfhi        $v1
    ctx->pc = 0x20f76cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_20f770:
    // 0x20f770: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x20f770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_20f774:
    // 0x20f774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20f778:
    if (ctx->pc == 0x20F778u) {
        ctx->pc = 0x20F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F774u;
        // 0x20f778: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F77Cu;
        goto label_20f77c;
    }
    ctx->pc = 0x20F774u;
    {
        const bool branch_taken_0x20f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F774u;
        // 0x20f778: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f774) {
            ctx->pc = 0x20F794u;
            goto label_20f794;
        }
    }
    ctx->pc = 0x20F77Cu;
label_20f77c:
    // 0x20f77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20f780:
    // 0x20f780: 0x24423150  addiu       $v0, $v0, 0x3150
    ctx->pc = 0x20f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12624));
label_20f784:
    // 0x20f784: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f788:
    // 0x20f788: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f78c:
    // 0x20f78c: 0x800008  jr          $a0
label_20f790:
    if (ctx->pc == 0x20F790u) {
        ctx->pc = 0x20F794u;
        goto label_20f794;
    }
    ctx->pc = 0x20F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F794u: goto label_20f794;
            case 0x20F79Cu: goto label_20f79c;
            case 0x20F7ACu: goto label_20f7ac;
            case 0x20F7C4u: goto label_20f7c4;
            case 0x20F7D4u: goto label_20f7d4;
            case 0x20F7ECu: goto label_20f7ec;
            case 0x20F804u: goto label_20f804;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F78Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F794u;
label_20f794:
    // 0x20f794: 0x10000021  b           . + 4 + (0x21 << 2)
label_20f798:
    if (ctx->pc == 0x20F798u) {
        ctx->pc = 0x20F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F794u;
        // 0x20f798: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F79Cu;
        goto label_20f79c;
    }
    ctx->pc = 0x20F794u;
    {
        const bool branch_taken_0x20f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F794u;
        // 0x20f798: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f794) {
            ctx->pc = 0x20F81Cu;
            goto label_20f81c;
        }
    }
    ctx->pc = 0x20F79Cu;
label_20f79c:
    // 0x20f79c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f7a0:
    // 0x20f7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f7a4:
    // 0x20f7a4: 0x10000015  b           . + 4 + (0x15 << 2)
label_20f7a8:
    if (ctx->pc == 0x20F7A8u) {
        ctx->pc = 0x20F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7A4u;
        // 0x20f7a8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7ACu;
        goto label_20f7ac;
    }
    ctx->pc = 0x20F7A4u;
    {
        const bool branch_taken_0x20f7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7A4u;
        // 0x20f7a8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7a4) {
            ctx->pc = 0x20F7FCu;
            goto label_20f7fc;
        }
    }
    ctx->pc = 0x20F7ACu;
label_20f7ac:
    // 0x20f7ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_20f7b0:
    // 0x20f7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f7b4:
    // 0x20f7b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f7b8:
    // 0x20f7b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f7bc:
    // 0x20f7bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_20f7c0:
    if (ctx->pc == 0x20F7C0u) {
        ctx->pc = 0x20F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7BCu;
        // 0x20f7c0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7C4u;
        goto label_20f7c4;
    }
    ctx->pc = 0x20F7BCu;
    {
        const bool branch_taken_0x20f7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7BCu;
        // 0x20f7c0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7bc) {
            ctx->pc = 0x20F818u;
            goto label_20f818;
        }
    }
    ctx->pc = 0x20F7C4u;
label_20f7c4:
    // 0x20f7c4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x20f7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_20f7c8:
    // 0x20f7c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f7cc:
    // 0x20f7cc: 0x1000000b  b           . + 4 + (0xB << 2)
label_20f7d0:
    if (ctx->pc == 0x20F7D0u) {
        ctx->pc = 0x20F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7CCu;
        // 0x20f7d0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7D4u;
        goto label_20f7d4;
    }
    ctx->pc = 0x20F7CCu;
    {
        const bool branch_taken_0x20f7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7CCu;
        // 0x20f7d0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7cc) {
            ctx->pc = 0x20F7FCu;
            goto label_20f7fc;
        }
    }
    ctx->pc = 0x20F7D4u;
label_20f7d4:
    // 0x20f7d4: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x20f7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_20f7d8:
    // 0x20f7d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f7dc:
    // 0x20f7dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x20f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_20f7e0:
    // 0x20f7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f7e4:
    // 0x20f7e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_20f7e8:
    if (ctx->pc == 0x20F7E8u) {
        ctx->pc = 0x20F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7E4u;
        // 0x20f7e8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7ECu;
        goto label_20f7ec;
    }
    ctx->pc = 0x20F7E4u;
    {
        const bool branch_taken_0x20f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7E4u;
        // 0x20f7e8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7e4) {
            ctx->pc = 0x20F818u;
            goto label_20f818;
        }
    }
    ctx->pc = 0x20F7ECu;
label_20f7ec:
    // 0x20f7ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20f7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_20f7f0:
    // 0x20f7f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f7f4:
    // 0x20f7f4: 0x0  nop
    ctx->pc = 0x20f7f4u;
    // NOP
label_20f7f8:
    // 0x20f7f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20f7fc:
    // 0x20f7fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_20f800:
    if (ctx->pc == 0x20F800u) {
        ctx->pc = 0x20F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7FCu;
        // 0x20f800: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F804u;
        goto label_20f804;
    }
    ctx->pc = 0x20F7FCu;
    {
        const bool branch_taken_0x20f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7FCu;
        // 0x20f800: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7fc) {
            ctx->pc = 0x20F81Cu;
            goto label_20f81c;
        }
    }
    ctx->pc = 0x20F804u;
label_20f804:
    // 0x20f804: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x20f804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_20f808:
    // 0x20f808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f80c:
    // 0x20f80c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_20f810:
    // 0x20f810: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f814:
    // 0x20f814: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20f814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20f818:
    // 0x20f818: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x20f818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20f81c:
    // 0x20f81c: 0xc0b6dac  jal         func_2DB6B0
label_20f820:
    if (ctx->pc == 0x20F820u) {
        ctx->pc = 0x20F824u;
        goto label_20f824;
    }
    ctx->pc = 0x20F81Cu;
    SET_GPR_U32(ctx, 31, 0x20F824u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20F81Cu, 0x20F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F824u;
label_20f824:
    // 0x20f824: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x20f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_20f828:
    // 0x20f828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f82c:
    // 0x20f82c: 0xc0c28ac  jal         func_30A2B0
label_20f830:
    if (ctx->pc == 0x20F830u) {
        ctx->pc = 0x20F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F82Cu;
        // 0x20f830: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F834u;
        goto label_20f834;
    }
    ctx->pc = 0x20F82Cu;
    SET_GPR_U32(ctx, 31, 0x20F834u);
    ctx->pc = 0x20F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F82Cu;
    // 0x20f830: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x20F82Cu, 0x20F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F834u;
label_20f834:
    // 0x20f834: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x20f834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f838:
    // 0x20f838: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x20f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f83c:
    // 0x20f83c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x20f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f840:
    // 0x20f840: 0xc0b6dac  jal         func_2DB6B0
label_20f844:
    if (ctx->pc == 0x20F844u) {
        ctx->pc = 0x20F848u;
        goto label_20f848;
    }
    ctx->pc = 0x20F840u;
    SET_GPR_U32(ctx, 31, 0x20F848u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20F840u, 0x20F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F848u;
label_20f848:
    // 0x20f848: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_20f84c:
    // 0x20f84c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20f850:
    // 0x20f850: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_20f854:
    if (ctx->pc == 0x20F854u) {
        ctx->pc = 0x20F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F850u;
        // 0x20f854: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F858u;
        goto label_20f858;
    }
    ctx->pc = 0x20F850u;
    {
        const bool branch_taken_0x20f850 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F850u;
        // 0x20f854: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f850) {
            ctx->pc = 0x20F870u;
            goto label_20f870;
        }
    }
    ctx->pc = 0x20F858u;
label_20f858:
    // 0x20f858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f85c:
    // 0x20f85c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x20f85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_20f860:
    // 0x20f860: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f864:
    // 0x20f864: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x20f864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_20f868:
    // 0x20f868: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f86c:
    // 0x20f86c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20f86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_20f870:
    // 0x20f870: 0x10b40006  beq         $a1, $s4, . + 4 + (0x6 << 2)
label_20f874:
    if (ctx->pc == 0x20F874u) {
        ctx->pc = 0x20F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F870u;
        // 0x20f874: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F878u;
        goto label_20f878;
    }
    ctx->pc = 0x20F870u;
    {
        const bool branch_taken_0x20f870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        ctx->pc = 0x20F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F870u;
        // 0x20f874: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f870) {
            ctx->pc = 0x20F88Cu;
            goto label_20f88c;
        }
    }
    ctx->pc = 0x20F878u;
label_20f878:
    // 0x20f878: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x20f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f87c:
    // 0x20f87c: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x20f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f880:
    // 0x20f880: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x20f880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20f884:
    // 0x20f884: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x20f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20f888:
    // 0x20f888: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x20f888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_20f88c:
    // 0x20f88c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x20f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f890:
    // 0x20f890: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20f890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f894:
    // 0x20f894: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20f894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20f898:
    // 0x20f898: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20f898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20f89c:
    // 0x20f89c: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x20f89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20f8a0:
    // 0x20f8a0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x20f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f8a4:
    // 0x20f8a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20f8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f8a8:
    // 0x20f8a8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20f8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20f8ac:
    // 0x20f8ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20f8b0:
    // 0x20f8b0: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x20f8b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_20f8b4:
    // 0x20f8b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_20f8b8:
    // 0x20f8b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x20f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_20f8bc:
    // 0x20f8bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20f8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20f8c0:
    // 0x20f8c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x20f8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_20f8c4:
    // 0x20f8c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f8c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f8c8:
    // 0x20f8c8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x20f8c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20f8cc:
    // 0x20f8cc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x20f8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20f8d0:
    // 0x20f8d0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x20f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_20f8d4:
    // 0x20f8d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f8d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f8d8:
    // 0x20f8d8: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x20f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_20f8dc:
    // 0x20f8dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20f8dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f8e0:
    // 0x20f8e0: 0xc04c784  jal         func_131E10
label_20f8e4:
    if (ctx->pc == 0x20F8E4u) {
        ctx->pc = 0x20F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8E0u;
        // 0x20f8e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8E8u;
        goto label_20f8e8;
    }
    ctx->pc = 0x20F8E0u;
    SET_GPR_U32(ctx, 31, 0x20F8E8u);
    ctx->pc = 0x20F8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F8E0u;
    // 0x20f8e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x20F8E0u, 0x20F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F8E8u;
label_20f8e8:
    // 0x20f8e8: 0x5450004e  bnel        $v0, $s0, . + 4 + (0x4E << 2)
label_20f8ec:
    if (ctx->pc == 0x20F8ECu) {
        ctx->pc = 0x20F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8E8u;
        // 0x20f8ec: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8F0u;
        goto label_20f8f0;
    }
    ctx->pc = 0x20F8E8u;
    {
        const bool branch_taken_0x20f8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20f8e8) {
            ctx->pc = 0x20F8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F8E8u;
            // 0x20f8ec: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA24u;
            goto label_20fa24;
        }
    }
    ctx->pc = 0x20F8F0u;
label_20f8f0:
    // 0x20f8f0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x20f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f8f4:
    // 0x20f8f4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20f8f8:
    // 0x20f8f8: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_20f8fc:
    // 0x20f8fc: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x20f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f900:
    // 0x20f900: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x20f900u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_20f904:
    // 0x20f904: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x20f904u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_20f908:
    // 0x20f908: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20f908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20f90c:
    // 0x20f90c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x20f90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f910:
    // 0x20f910: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x20f910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20f914:
    // 0x20f914: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x20f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f918:
    // 0x20f918: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f91c:
    // 0x20f91c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x20f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f920:
    // 0x20f920: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x20f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f924:
    // 0x20f924: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x20f924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_20f928:
    // 0x20f928: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x20f928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20f92c:
    // 0x20f92c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x20f92cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_20f930:
    // 0x20f930: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x20f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_20f934:
    // 0x20f934: 0xc04078a  jal         func_101E28
label_20f938:
    if (ctx->pc == 0x20F938u) {
        ctx->pc = 0x20F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F934u;
        // 0x20f938: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F93Cu;
        goto label_20f93c;
    }
    ctx->pc = 0x20F934u;
    SET_GPR_U32(ctx, 31, 0x20F93Cu);
    ctx->pc = 0x20F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F934u;
    // 0x20f938: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x20F934u, 0x20F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F93Cu;
label_20f93c:
    // 0x20f93c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x20f93cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_20f940:
    // 0x20f940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f944:
    // 0x20f944: 0x0  nop
    ctx->pc = 0x20f944u;
    // NOP
label_20f948:
    // 0x20f948: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20f948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f94c:
    // 0x20f94c: 0x0  nop
    ctx->pc = 0x20f94cu;
    // NOP
label_20f950:
    // 0x20f950: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_20f954:
    if (ctx->pc == 0x20F954u) {
        ctx->pc = 0x20F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F950u;
        // 0x20f954: 0xc7a40070  lwc1        $f4, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F958u;
        goto label_20f958;
    }
    ctx->pc = 0x20F950u;
    {
        const bool branch_taken_0x20f950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F950u;
        // 0x20f954: 0xc7a40070  lwc1        $f4, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f950) {
            ctx->pc = 0x20F994u;
            goto label_20f994;
        }
    }
    ctx->pc = 0x20F958u;
label_20f958:
    // 0x20f958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f95c:
    // 0x20f95c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f960:
    // 0x20f960: 0x0  nop
    ctx->pc = 0x20f960u;
    // NOP
label_20f964:
    // 0x20f964: 0x0  nop
    ctx->pc = 0x20f964u;
    // NOP
label_20f968:
    // 0x20f968: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x20f968u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_20f96c:
    // 0x20f96c: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x20f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20f970:
    // 0x20f970: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x20f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f974:
    // 0x20f974: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x20f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f978:
    // 0x20f978: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x20f978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_20f97c:
    // 0x20f97c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x20f97cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_20f980:
    // 0x20f980: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x20f980u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_20f984:
    // 0x20f984: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x20f984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_20f988:
    // 0x20f988: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x20f988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_20f98c:
    // 0x20f98c: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x20f98cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_20f990:
    // 0x20f990: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x20f990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_20f994:
    // 0x20f994: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x20f994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20f998:
    // 0x20f998: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x20f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f99c:
    // 0x20f99c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x20f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f9a0:
    // 0x20f9a0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_20f9a4:
    // 0x20f9a4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x20f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f9a8:
    // 0x20f9a8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x20f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f9ac:
    // 0x20f9ac: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20f9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20f9b0:
    // 0x20f9b0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x20f9b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_20f9b4:
    // 0x20f9b4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x20f9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_20f9b8:
    // 0x20f9b8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_20f9bc:
    // 0x20f9bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20f9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20f9c0:
    // 0x20f9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f9c4:
    // 0x20f9c4: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x20f9c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20f9c8:
    // 0x20f9c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20f9c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_20f9cc:
    // 0x20f9cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x20f9ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_20f9d0:
    // 0x20f9d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x20f9d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20f9d4:
    // 0x20f9d4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x20f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f9d8:
    // 0x20f9d8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x20f9d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_20f9dc:
    // 0x20f9dc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x20f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f9e0:
    // 0x20f9e0: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x20f9e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20f9e4:
    // 0x20f9e4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20f9e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20f9e8:
    // 0x20f9e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20f9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20f9ec:
    // 0x20f9ec: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x20f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f9f0:
    // 0x20f9f0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x20f9f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20f9f4:
    // 0x20f9f4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x20f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f9f8:
    // 0x20f9f8: 0x12950006  beq         $s4, $s5, . + 4 + (0x6 << 2)
label_20f9fc:
    if (ctx->pc == 0x20F9FCu) {
        ctx->pc = 0x20F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F8u;
        // 0x20f9fc: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA00u;
        goto label_20fa00;
    }
    ctx->pc = 0x20F9F8u;
    {
        const bool branch_taken_0x20f9f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x20F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F8u;
        // 0x20f9fc: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9f8) {
            ctx->pc = 0x20FA14u;
            goto label_20fa14;
        }
    }
    ctx->pc = 0x20FA00u;
label_20fa00:
    // 0x20fa00: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x20fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20fa04:
    // 0x20fa04: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x20fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20fa08:
    // 0x20fa08: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20fa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20fa0c:
    // 0x20fa0c: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x20fa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_20fa10:
    // 0x20fa10: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x20fa10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_20fa14:
    // 0x20fa14: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x20fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20fa18:
    // 0x20fa18: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20fa18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20fa1c:
    // 0x20fa1c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20fa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_20fa20:
    // 0x20fa20: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_20fa24:
    // 0x20fa24: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x20fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_20fa28:
    // 0x20fa28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20fa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20fa2c:
    // 0x20fa2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20fa30:
    // 0x20fa30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20fa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20fa34:
    // 0x20fa34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20fa38:
    // 0x20fa38: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x20fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_20fa3c:
    // 0x20fa3c: 0xc0a9d38  jal         func_2A74E0
label_20fa40:
    if (ctx->pc == 0x20FA40u) {
        ctx->pc = 0x20FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA3Cu;
        // 0x20fa40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA44u;
        goto label_20fa44;
    }
    ctx->pc = 0x20FA3Cu;
    SET_GPR_U32(ctx, 31, 0x20FA44u);
    ctx->pc = 0x20FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA3Cu;
    // 0x20fa40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x20FA3Cu, 0x20FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA44u;
label_20fa44:
    // 0x20fa44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20fa48:
    // 0x20fa48: 0xc0a9f28  jal         func_2A7CA0
label_20fa4c:
    if (ctx->pc == 0x20FA4Cu) {
        ctx->pc = 0x20FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA48u;
        // 0x20fa4c: 0x262516a0  addiu       $a1, $s1, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA50u;
        goto label_20fa50;
    }
    ctx->pc = 0x20FA48u;
    SET_GPR_U32(ctx, 31, 0x20FA50u);
    ctx->pc = 0x20FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA48u;
    // 0x20fa4c: 0x262516a0  addiu       $a1, $s1, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x20FA48u, 0x20FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA50u;
label_20fa50:
    // 0x20fa50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20fa54:
    if (ctx->pc == 0x20FA54u) {
        ctx->pc = 0x20FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA50u;
        // 0x20fa54: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA58u;
        goto label_20fa58;
    }
    ctx->pc = 0x20FA50u;
    {
        const bool branch_taken_0x20fa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA50u;
        // 0x20fa54: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa50) {
            ctx->pc = 0x20FA64u;
            goto label_20fa64;
        }
    }
    ctx->pc = 0x20FA58u;
label_20fa58:
    // 0x20fa58: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_20fa5c:
    // 0x20fa5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20fa60:
    // 0x20fa60: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x20fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
label_20fa64:
    // 0x20fa64: 0x922202f5  lbu         $v0, 0x2F5($s1)
    ctx->pc = 0x20fa64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_20fa68:
    // 0x20fa68: 0x2c4200ae  sltiu       $v0, $v0, 0xAE
    ctx->pc = 0x20fa68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)174) ? 1 : 0);
label_20fa6c:
    // 0x20fa6c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_20fa70:
    if (ctx->pc == 0x20FA70u) {
        ctx->pc = 0x20FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA6Cu;
        // 0x20fa70: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA74u;
        goto label_20fa74;
    }
    ctx->pc = 0x20FA6Cu;
    {
        const bool branch_taken_0x20fa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa6c) {
            ctx->pc = 0x20FA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FA6Cu;
            // 0x20fa70: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA74u;
            goto label_20fa74;
        }
    }
    ctx->pc = 0x20FA74u;
label_20fa74:
    // 0x20fa74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_20fa78:
    // 0x20fa78: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x20fa78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_20fa7c:
    // 0x20fa7c: 0x2446f1c8  addiu       $a2, $v0, -0xE38
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963656));
label_20fa80:
    // 0x20fa80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20fa80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20fa84:
    // 0x20fa84: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20fa88:
    // 0x20fa88: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x20fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20fa8c:
    // 0x20fa8c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_20fa90:
    // 0x20fa90: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_20fa94:
    if (ctx->pc == 0x20FA94u) {
        ctx->pc = 0x20FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA90u;
        // 0x20fa94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA98u;
        goto label_20fa98;
    }
    ctx->pc = 0x20FA90u;
    {
        const bool branch_taken_0x20fa90 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x20FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA90u;
        // 0x20fa94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa90) {
            ctx->pc = 0x20FABCu;
            goto label_20fabc;
        }
    }
    ctx->pc = 0x20FA98u;
label_20fa98:
    // 0x20fa98: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_20fa9c:
    // 0x20fa9c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x20fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20faa0:
    // 0x20faa0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20faa4:
    // 0x20faa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20faa8:
    // 0x20faa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20faac:
    // 0x20faac: 0xdc76fff8  ld          $s6, -0x8($v1)
    ctx->pc = 0x20faacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_20fab0:
    // 0x20fab0: 0x16303f  dsra32      $a2, $s6, 0
    ctx->pc = 0x20fab0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 22) >> (32 + 0));
label_20fab4:
    // 0x20fab4: 0x10000004  b           . + 4 + (0x4 << 2)
label_20fab8:
    if (ctx->pc == 0x20FAB8u) {
        ctx->pc = 0x20FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB4u;
        // 0x20fab8: 0x2503f1c8  addiu       $v1, $t0, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FABCu;
        goto label_20fabc;
    }
    ctx->pc = 0x20FAB4u;
    {
        const bool branch_taken_0x20fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB4u;
        // 0x20fab8: 0x2503f1c8  addiu       $v1, $t0, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fab4) {
            ctx->pc = 0x20FAC8u;
            goto label_20fac8;
        }
    }
    ctx->pc = 0x20FABCu;
label_20fabc:
    // 0x20fabc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20fac0:
    // 0x20fac0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x20fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20fac4:
    // 0x20fac4: 0x2503f1c8  addiu       $v1, $t0, -0xE38
    ctx->pc = 0x20fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963656));
label_20fac8:
    // 0x20fac8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x20fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20facc:
    // 0x20facc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20fad0:
    // 0x20fad0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_20fad4:
    if (ctx->pc == 0x20FAD4u) {
        ctx->pc = 0x20FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD0u;
        // 0x20fad4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAD8u;
        goto label_20fad8;
    }
    ctx->pc = 0x20FAD0u;
    {
        const bool branch_taken_0x20fad0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x20FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD0u;
        // 0x20fad4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fad0) {
            ctx->pc = 0x20FAECu;
            goto label_20faec;
        }
    }
    ctx->pc = 0x20FAD8u;
label_20fad8:
    // 0x20fad8: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x20fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_20fadc:
    // 0x20fadc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_20fae0:
    // 0x20fae0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_20fae4:
    // 0x20fae4: 0x10000002  b           . + 4 + (0x2 << 2)
label_20fae8:
    if (ctx->pc == 0x20FAE8u) {
        ctx->pc = 0x20FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAE4u;
        // 0x20fae8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAECu;
        goto label_20faec;
    }
    ctx->pc = 0x20FAE4u;
    {
        const bool branch_taken_0x20fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAE4u;
        // 0x20fae8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fae4) {
            ctx->pc = 0x20FAF0u;
            goto label_20faf0;
        }
    }
    ctx->pc = 0x20FAECu;
label_20faec:
    // 0x20faec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20faecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20faf0:
    // 0x20faf0: 0xc0f809  jalr        $a2
label_20faf4:
    if (ctx->pc == 0x20FAF4u) {
        ctx->pc = 0x20FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAF0u;
        // 0x20faf4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAF8u;
        goto label_20faf8;
    }
    ctx->pc = 0x20FAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x20FAF8u);
        ctx->pc = 0x20FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAF0u;
        // 0x20faf4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FAF0u, 0x20FAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FAF8u;
label_20faf8:
    // 0x20faf8: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x20faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_20fafc:
    // 0x20fafc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x20fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_20fb00:
    // 0x20fb00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x20fb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_20fb04:
    // 0x20fb04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20fb08:
    // 0x20fb08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_20fb0c:
    if (ctx->pc == 0x20FB0Cu) {
        ctx->pc = 0x20FB10u;
        goto label_20fb10;
    }
    ctx->pc = 0x20FB08u;
    {
        const bool branch_taken_0x20fb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb08) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20FB10u;
label_20fb10:
    // 0x20fb10: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x20fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20fb14:
    // 0x20fb14: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_20fb18:
    // 0x20fb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20fb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fb1c:
    // 0x20fb1c: 0x0  nop
    ctx->pc = 0x20fb1cu;
    // NOP
label_20fb20:
    // 0x20fb20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20fb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20fb24:
    // 0x20fb24: 0x0  nop
    ctx->pc = 0x20fb24u;
    // NOP
label_20fb28:
    // 0x20fb28: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_20fb2c:
    if (ctx->pc == 0x20FB2Cu) {
        ctx->pc = 0x20FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB28u;
        // 0x20fb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB30u;
        goto label_20fb30;
    }
    ctx->pc = 0x20FB28u;
    {
        const bool branch_taken_0x20fb28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB28u;
        // 0x20fb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb28) {
            ctx->pc = 0x20FB78u;
            goto label_20fb78;
        }
    }
    ctx->pc = 0x20FB30u;
label_20fb30:
    // 0x20fb30: 0xc0aa1fa  jal         func_2A87E8
label_20fb34:
    if (ctx->pc == 0x20FB34u) {
        ctx->pc = 0x20FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB30u;
        // 0x20fb34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB38u;
        goto label_20fb38;
    }
    ctx->pc = 0x20FB30u;
    SET_GPR_U32(ctx, 31, 0x20FB38u);
    ctx->pc = 0x20FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB30u;
    // 0x20fb34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x20FB30u, 0x20FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB38u;
label_20fb38:
    // 0x20fb38: 0x10000010  b           . + 4 + (0x10 << 2)
label_20fb3c:
    if (ctx->pc == 0x20FB3Cu) {
        ctx->pc = 0x20FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB38u;
        // 0x20fb3c: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB40u;
        goto label_20fb40;
    }
    ctx->pc = 0x20FB38u;
    {
        const bool branch_taken_0x20fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB38u;
        // 0x20fb3c: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb38) {
            ctx->pc = 0x20FB7Cu;
            goto label_20fb7c;
        }
    }
    ctx->pc = 0x20FB40u;
label_20fb40:
    // 0x20fb40: 0xc09ba94  jal         func_26EA50
label_20fb44:
    if (ctx->pc == 0x20FB44u) {
        ctx->pc = 0x20FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB40u;
        // 0x20fb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB48u;
        goto label_20fb48;
    }
    ctx->pc = 0x20FB40u;
    SET_GPR_U32(ctx, 31, 0x20FB48u);
    ctx->pc = 0x20FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB40u;
    // 0x20fb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EA50u, 0x20FB40u, 0x20FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB48u;
label_20fb48:
    // 0x20fb48: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_20fb4c:
    if (ctx->pc == 0x20FB4Cu) {
        ctx->pc = 0x20FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB48u;
        // 0x20fb4c: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB50u;
        goto label_20fb50;
    }
    ctx->pc = 0x20FB48u;
    {
        const bool branch_taken_0x20fb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb48) {
            ctx->pc = 0x20FB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FB48u;
            // 0x20fb4c: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FB7Cu;
            goto label_20fb7c;
        }
    }
    ctx->pc = 0x20FB50u;
label_20fb50:
    // 0x20fb50: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20fb54:
    // 0x20fb54: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_20fb58:
    // 0x20fb58: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_20fb5c:
    if (ctx->pc == 0x20FB5Cu) {
        ctx->pc = 0x20FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB58u;
        // 0x20fb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB60u;
        goto label_20fb60;
    }
    ctx->pc = 0x20FB58u;
    {
        const bool branch_taken_0x20fb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB58u;
        // 0x20fb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb58) {
            ctx->pc = 0x20FB70u;
            goto label_20fb70;
        }
    }
    ctx->pc = 0x20FB60u;
label_20fb60:
    // 0x20fb60: 0xc09d91e  jal         func_276478
label_20fb64:
    if (ctx->pc == 0x20FB64u) {
        ctx->pc = 0x20FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB60u;
        // 0x20fb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB68u;
        goto label_20fb68;
    }
    ctx->pc = 0x20FB60u;
    SET_GPR_U32(ctx, 31, 0x20FB68u);
    ctx->pc = 0x20FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB60u;
    // 0x20fb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276478u, 0x20FB60u, 0x20FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB68u;
label_20fb68:
    // 0x20fb68: 0x10000004  b           . + 4 + (0x4 << 2)
label_20fb6c:
    if (ctx->pc == 0x20FB6Cu) {
        ctx->pc = 0x20FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB68u;
        // 0x20fb6c: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB70u;
        goto label_20fb70;
    }
    ctx->pc = 0x20FB68u;
    {
        const bool branch_taken_0x20fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB68u;
        // 0x20fb6c: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb68) {
            ctx->pc = 0x20FB7Cu;
            goto label_20fb7c;
        }
    }
    ctx->pc = 0x20FB70u;
label_20fb70:
    // 0x20fb70: 0xc0aa1fa  jal         func_2A87E8
label_20fb74:
    if (ctx->pc == 0x20FB74u) {
        ctx->pc = 0x20FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB70u;
        // 0x20fb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB78u;
        goto label_20fb78;
    }
    ctx->pc = 0x20FB70u;
    SET_GPR_U32(ctx, 31, 0x20FB78u);
    ctx->pc = 0x20FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB70u;
    // 0x20fb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x20FB70u, 0x20FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB78u;
label_20fb78:
    // 0x20fb78: 0xa2201866  sb          $zero, 0x1866($s1)
    ctx->pc = 0x20fb78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
label_20fb7c:
    // 0x20fb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20fb80:
    // 0x20fb80: 0xc0a3b5e  jal         func_28ED78
label_20fb84:
    if (ctx->pc == 0x20FB84u) {
        ctx->pc = 0x20FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB80u;
        // 0x20fb84: 0xa2201867  sb          $zero, 0x1867($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6247), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB88u;
        goto label_20fb88;
    }
    ctx->pc = 0x20FB80u;
    SET_GPR_U32(ctx, 31, 0x20FB88u);
    ctx->pc = 0x20FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB80u;
    // 0x20fb84: 0xa2201867  sb          $zero, 0x1867($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 6247), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED78u, 0x20FB80u, 0x20FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB88u;
label_20fb88:
    // 0x20fb88: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x20fb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_20fb8c:
    // 0x20fb8c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x20fb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_20fb90:
    // 0x20fb90: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x20fb90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_20fb94:
    // 0x20fb94: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x20fb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_20fb98:
    // 0x20fb98: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x20fb98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20fb9c:
    // 0x20fb9c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x20fb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20fba0:
    // 0x20fba0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x20fba0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20fba4:
    // 0x20fba4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20fba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20fba8:
    // 0x20fba8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x20fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20fbac:
    // 0x20fbac: 0x3e00008  jr          $ra
label_20fbb0:
    if (ctx->pc == 0x20FBB0u) {
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBB4u;
        goto label_20fbb4;
    }
    ctx->pc = 0x20FBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FBB4u;
label_20fbb4:
    // 0x20fbb4: 0x0  nop
    ctx->pc = 0x20fbb4u;
    // NOP
    ctx->pc = 0x20fbb8u;
}
