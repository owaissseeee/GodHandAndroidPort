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

// Function: func_0010D3A8
// Address: 0x10d3a8 - 0x10de70
void func_0010D3A8_0x10d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010D3A8_0x10d3a8");
#endif

    switch (ctx->pc) {
        case 0x10d3a8u: goto label_10d3a8;
        case 0x10d3acu: goto label_10d3ac;
        case 0x10d3b0u: goto label_10d3b0;
        case 0x10d3b4u: goto label_10d3b4;
        case 0x10d3b8u: goto label_10d3b8;
        case 0x10d3bcu: goto label_10d3bc;
        case 0x10d3c0u: goto label_10d3c0;
        case 0x10d3c4u: goto label_10d3c4;
        case 0x10d3c8u: goto label_10d3c8;
        case 0x10d3ccu: goto label_10d3cc;
        case 0x10d3d0u: goto label_10d3d0;
        case 0x10d3d4u: goto label_10d3d4;
        case 0x10d3d8u: goto label_10d3d8;
        case 0x10d3dcu: goto label_10d3dc;
        case 0x10d3e0u: goto label_10d3e0;
        case 0x10d3e4u: goto label_10d3e4;
        case 0x10d3e8u: goto label_10d3e8;
        case 0x10d3ecu: goto label_10d3ec;
        case 0x10d3f0u: goto label_10d3f0;
        case 0x10d3f4u: goto label_10d3f4;
        case 0x10d3f8u: goto label_10d3f8;
        case 0x10d3fcu: goto label_10d3fc;
        case 0x10d400u: goto label_10d400;
        case 0x10d404u: goto label_10d404;
        case 0x10d408u: goto label_10d408;
        case 0x10d40cu: goto label_10d40c;
        case 0x10d410u: goto label_10d410;
        case 0x10d414u: goto label_10d414;
        case 0x10d418u: goto label_10d418;
        case 0x10d41cu: goto label_10d41c;
        case 0x10d420u: goto label_10d420;
        case 0x10d424u: goto label_10d424;
        case 0x10d428u: goto label_10d428;
        case 0x10d42cu: goto label_10d42c;
        case 0x10d430u: goto label_10d430;
        case 0x10d434u: goto label_10d434;
        case 0x10d438u: goto label_10d438;
        case 0x10d43cu: goto label_10d43c;
        case 0x10d440u: goto label_10d440;
        case 0x10d444u: goto label_10d444;
        case 0x10d448u: goto label_10d448;
        case 0x10d44cu: goto label_10d44c;
        case 0x10d450u: goto label_10d450;
        case 0x10d454u: goto label_10d454;
        case 0x10d458u: goto label_10d458;
        case 0x10d45cu: goto label_10d45c;
        case 0x10d460u: goto label_10d460;
        case 0x10d464u: goto label_10d464;
        case 0x10d468u: goto label_10d468;
        case 0x10d46cu: goto label_10d46c;
        case 0x10d470u: goto label_10d470;
        case 0x10d474u: goto label_10d474;
        case 0x10d478u: goto label_10d478;
        case 0x10d47cu: goto label_10d47c;
        case 0x10d480u: goto label_10d480;
        case 0x10d484u: goto label_10d484;
        case 0x10d488u: goto label_10d488;
        case 0x10d48cu: goto label_10d48c;
        case 0x10d490u: goto label_10d490;
        case 0x10d494u: goto label_10d494;
        case 0x10d498u: goto label_10d498;
        case 0x10d49cu: goto label_10d49c;
        case 0x10d4a0u: goto label_10d4a0;
        case 0x10d4a4u: goto label_10d4a4;
        case 0x10d4a8u: goto label_10d4a8;
        case 0x10d4acu: goto label_10d4ac;
        case 0x10d4b0u: goto label_10d4b0;
        case 0x10d4b4u: goto label_10d4b4;
        case 0x10d4b8u: goto label_10d4b8;
        case 0x10d4bcu: goto label_10d4bc;
        case 0x10d4c0u: goto label_10d4c0;
        case 0x10d4c4u: goto label_10d4c4;
        case 0x10d4c8u: goto label_10d4c8;
        case 0x10d4ccu: goto label_10d4cc;
        case 0x10d4d0u: goto label_10d4d0;
        case 0x10d4d4u: goto label_10d4d4;
        case 0x10d4d8u: goto label_10d4d8;
        case 0x10d4dcu: goto label_10d4dc;
        case 0x10d4e0u: goto label_10d4e0;
        case 0x10d4e4u: goto label_10d4e4;
        case 0x10d4e8u: goto label_10d4e8;
        case 0x10d4ecu: goto label_10d4ec;
        case 0x10d4f0u: goto label_10d4f0;
        case 0x10d4f4u: goto label_10d4f4;
        case 0x10d4f8u: goto label_10d4f8;
        case 0x10d4fcu: goto label_10d4fc;
        case 0x10d500u: goto label_10d500;
        case 0x10d504u: goto label_10d504;
        case 0x10d508u: goto label_10d508;
        case 0x10d50cu: goto label_10d50c;
        case 0x10d510u: goto label_10d510;
        case 0x10d514u: goto label_10d514;
        case 0x10d518u: goto label_10d518;
        case 0x10d51cu: goto label_10d51c;
        case 0x10d520u: goto label_10d520;
        case 0x10d524u: goto label_10d524;
        case 0x10d528u: goto label_10d528;
        case 0x10d52cu: goto label_10d52c;
        case 0x10d530u: goto label_10d530;
        case 0x10d534u: goto label_10d534;
        case 0x10d538u: goto label_10d538;
        case 0x10d53cu: goto label_10d53c;
        case 0x10d540u: goto label_10d540;
        case 0x10d544u: goto label_10d544;
        case 0x10d548u: goto label_10d548;
        case 0x10d54cu: goto label_10d54c;
        case 0x10d550u: goto label_10d550;
        case 0x10d554u: goto label_10d554;
        case 0x10d558u: goto label_10d558;
        case 0x10d55cu: goto label_10d55c;
        case 0x10d560u: goto label_10d560;
        case 0x10d564u: goto label_10d564;
        case 0x10d568u: goto label_10d568;
        case 0x10d56cu: goto label_10d56c;
        case 0x10d570u: goto label_10d570;
        case 0x10d574u: goto label_10d574;
        case 0x10d578u: goto label_10d578;
        case 0x10d57cu: goto label_10d57c;
        case 0x10d580u: goto label_10d580;
        case 0x10d584u: goto label_10d584;
        case 0x10d588u: goto label_10d588;
        case 0x10d58cu: goto label_10d58c;
        case 0x10d590u: goto label_10d590;
        case 0x10d594u: goto label_10d594;
        case 0x10d598u: goto label_10d598;
        case 0x10d59cu: goto label_10d59c;
        case 0x10d5a0u: goto label_10d5a0;
        case 0x10d5a4u: goto label_10d5a4;
        case 0x10d5a8u: goto label_10d5a8;
        case 0x10d5acu: goto label_10d5ac;
        case 0x10d5b0u: goto label_10d5b0;
        case 0x10d5b4u: goto label_10d5b4;
        case 0x10d5b8u: goto label_10d5b8;
        case 0x10d5bcu: goto label_10d5bc;
        case 0x10d5c0u: goto label_10d5c0;
        case 0x10d5c4u: goto label_10d5c4;
        case 0x10d5c8u: goto label_10d5c8;
        case 0x10d5ccu: goto label_10d5cc;
        case 0x10d5d0u: goto label_10d5d0;
        case 0x10d5d4u: goto label_10d5d4;
        case 0x10d5d8u: goto label_10d5d8;
        case 0x10d5dcu: goto label_10d5dc;
        case 0x10d5e0u: goto label_10d5e0;
        case 0x10d5e4u: goto label_10d5e4;
        case 0x10d5e8u: goto label_10d5e8;
        case 0x10d5ecu: goto label_10d5ec;
        case 0x10d5f0u: goto label_10d5f0;
        case 0x10d5f4u: goto label_10d5f4;
        case 0x10d5f8u: goto label_10d5f8;
        case 0x10d5fcu: goto label_10d5fc;
        case 0x10d600u: goto label_10d600;
        case 0x10d604u: goto label_10d604;
        case 0x10d608u: goto label_10d608;
        case 0x10d60cu: goto label_10d60c;
        case 0x10d610u: goto label_10d610;
        case 0x10d614u: goto label_10d614;
        case 0x10d618u: goto label_10d618;
        case 0x10d61cu: goto label_10d61c;
        case 0x10d620u: goto label_10d620;
        case 0x10d624u: goto label_10d624;
        case 0x10d628u: goto label_10d628;
        case 0x10d62cu: goto label_10d62c;
        case 0x10d630u: goto label_10d630;
        case 0x10d634u: goto label_10d634;
        case 0x10d638u: goto label_10d638;
        case 0x10d63cu: goto label_10d63c;
        case 0x10d640u: goto label_10d640;
        case 0x10d644u: goto label_10d644;
        case 0x10d648u: goto label_10d648;
        case 0x10d64cu: goto label_10d64c;
        case 0x10d650u: goto label_10d650;
        case 0x10d654u: goto label_10d654;
        case 0x10d658u: goto label_10d658;
        case 0x10d65cu: goto label_10d65c;
        case 0x10d660u: goto label_10d660;
        case 0x10d664u: goto label_10d664;
        case 0x10d668u: goto label_10d668;
        case 0x10d66cu: goto label_10d66c;
        case 0x10d670u: goto label_10d670;
        case 0x10d674u: goto label_10d674;
        case 0x10d678u: goto label_10d678;
        case 0x10d67cu: goto label_10d67c;
        case 0x10d680u: goto label_10d680;
        case 0x10d684u: goto label_10d684;
        case 0x10d688u: goto label_10d688;
        case 0x10d68cu: goto label_10d68c;
        case 0x10d690u: goto label_10d690;
        case 0x10d694u: goto label_10d694;
        case 0x10d698u: goto label_10d698;
        case 0x10d69cu: goto label_10d69c;
        case 0x10d6a0u: goto label_10d6a0;
        case 0x10d6a4u: goto label_10d6a4;
        case 0x10d6a8u: goto label_10d6a8;
        case 0x10d6acu: goto label_10d6ac;
        case 0x10d6b0u: goto label_10d6b0;
        case 0x10d6b4u: goto label_10d6b4;
        case 0x10d6b8u: goto label_10d6b8;
        case 0x10d6bcu: goto label_10d6bc;
        case 0x10d6c0u: goto label_10d6c0;
        case 0x10d6c4u: goto label_10d6c4;
        case 0x10d6c8u: goto label_10d6c8;
        case 0x10d6ccu: goto label_10d6cc;
        case 0x10d6d0u: goto label_10d6d0;
        case 0x10d6d4u: goto label_10d6d4;
        case 0x10d6d8u: goto label_10d6d8;
        case 0x10d6dcu: goto label_10d6dc;
        case 0x10d6e0u: goto label_10d6e0;
        case 0x10d6e4u: goto label_10d6e4;
        case 0x10d6e8u: goto label_10d6e8;
        case 0x10d6ecu: goto label_10d6ec;
        case 0x10d6f0u: goto label_10d6f0;
        case 0x10d6f4u: goto label_10d6f4;
        case 0x10d6f8u: goto label_10d6f8;
        case 0x10d6fcu: goto label_10d6fc;
        case 0x10d700u: goto label_10d700;
        case 0x10d704u: goto label_10d704;
        case 0x10d708u: goto label_10d708;
        case 0x10d70cu: goto label_10d70c;
        case 0x10d710u: goto label_10d710;
        case 0x10d714u: goto label_10d714;
        case 0x10d718u: goto label_10d718;
        case 0x10d71cu: goto label_10d71c;
        case 0x10d720u: goto label_10d720;
        case 0x10d724u: goto label_10d724;
        case 0x10d728u: goto label_10d728;
        case 0x10d72cu: goto label_10d72c;
        case 0x10d730u: goto label_10d730;
        case 0x10d734u: goto label_10d734;
        case 0x10d738u: goto label_10d738;
        case 0x10d73cu: goto label_10d73c;
        case 0x10d740u: goto label_10d740;
        case 0x10d744u: goto label_10d744;
        case 0x10d748u: goto label_10d748;
        case 0x10d74cu: goto label_10d74c;
        case 0x10d750u: goto label_10d750;
        case 0x10d754u: goto label_10d754;
        case 0x10d758u: goto label_10d758;
        case 0x10d75cu: goto label_10d75c;
        case 0x10d760u: goto label_10d760;
        case 0x10d764u: goto label_10d764;
        case 0x10d768u: goto label_10d768;
        case 0x10d76cu: goto label_10d76c;
        case 0x10d770u: goto label_10d770;
        case 0x10d774u: goto label_10d774;
        case 0x10d778u: goto label_10d778;
        case 0x10d77cu: goto label_10d77c;
        case 0x10d780u: goto label_10d780;
        case 0x10d784u: goto label_10d784;
        case 0x10d788u: goto label_10d788;
        case 0x10d78cu: goto label_10d78c;
        case 0x10d790u: goto label_10d790;
        case 0x10d794u: goto label_10d794;
        case 0x10d798u: goto label_10d798;
        case 0x10d79cu: goto label_10d79c;
        case 0x10d7a0u: goto label_10d7a0;
        case 0x10d7a4u: goto label_10d7a4;
        case 0x10d7a8u: goto label_10d7a8;
        case 0x10d7acu: goto label_10d7ac;
        case 0x10d7b0u: goto label_10d7b0;
        case 0x10d7b4u: goto label_10d7b4;
        case 0x10d7b8u: goto label_10d7b8;
        case 0x10d7bcu: goto label_10d7bc;
        case 0x10d7c0u: goto label_10d7c0;
        case 0x10d7c4u: goto label_10d7c4;
        case 0x10d7c8u: goto label_10d7c8;
        case 0x10d7ccu: goto label_10d7cc;
        case 0x10d7d0u: goto label_10d7d0;
        case 0x10d7d4u: goto label_10d7d4;
        case 0x10d7d8u: goto label_10d7d8;
        case 0x10d7dcu: goto label_10d7dc;
        case 0x10d7e0u: goto label_10d7e0;
        case 0x10d7e4u: goto label_10d7e4;
        case 0x10d7e8u: goto label_10d7e8;
        case 0x10d7ecu: goto label_10d7ec;
        case 0x10d7f0u: goto label_10d7f0;
        case 0x10d7f4u: goto label_10d7f4;
        case 0x10d7f8u: goto label_10d7f8;
        case 0x10d7fcu: goto label_10d7fc;
        case 0x10d800u: goto label_10d800;
        case 0x10d804u: goto label_10d804;
        case 0x10d808u: goto label_10d808;
        case 0x10d80cu: goto label_10d80c;
        case 0x10d810u: goto label_10d810;
        case 0x10d814u: goto label_10d814;
        case 0x10d818u: goto label_10d818;
        case 0x10d81cu: goto label_10d81c;
        case 0x10d820u: goto label_10d820;
        case 0x10d824u: goto label_10d824;
        case 0x10d828u: goto label_10d828;
        case 0x10d82cu: goto label_10d82c;
        case 0x10d830u: goto label_10d830;
        case 0x10d834u: goto label_10d834;
        case 0x10d838u: goto label_10d838;
        case 0x10d83cu: goto label_10d83c;
        case 0x10d840u: goto label_10d840;
        case 0x10d844u: goto label_10d844;
        case 0x10d848u: goto label_10d848;
        case 0x10d84cu: goto label_10d84c;
        case 0x10d850u: goto label_10d850;
        case 0x10d854u: goto label_10d854;
        case 0x10d858u: goto label_10d858;
        case 0x10d85cu: goto label_10d85c;
        case 0x10d860u: goto label_10d860;
        case 0x10d864u: goto label_10d864;
        case 0x10d868u: goto label_10d868;
        case 0x10d86cu: goto label_10d86c;
        case 0x10d870u: goto label_10d870;
        case 0x10d874u: goto label_10d874;
        case 0x10d878u: goto label_10d878;
        case 0x10d87cu: goto label_10d87c;
        case 0x10d880u: goto label_10d880;
        case 0x10d884u: goto label_10d884;
        case 0x10d888u: goto label_10d888;
        case 0x10d88cu: goto label_10d88c;
        case 0x10d890u: goto label_10d890;
        case 0x10d894u: goto label_10d894;
        case 0x10d898u: goto label_10d898;
        case 0x10d89cu: goto label_10d89c;
        case 0x10d8a0u: goto label_10d8a0;
        case 0x10d8a4u: goto label_10d8a4;
        case 0x10d8a8u: goto label_10d8a8;
        case 0x10d8acu: goto label_10d8ac;
        case 0x10d8b0u: goto label_10d8b0;
        case 0x10d8b4u: goto label_10d8b4;
        case 0x10d8b8u: goto label_10d8b8;
        case 0x10d8bcu: goto label_10d8bc;
        case 0x10d8c0u: goto label_10d8c0;
        case 0x10d8c4u: goto label_10d8c4;
        case 0x10d8c8u: goto label_10d8c8;
        case 0x10d8ccu: goto label_10d8cc;
        case 0x10d8d0u: goto label_10d8d0;
        case 0x10d8d4u: goto label_10d8d4;
        case 0x10d8d8u: goto label_10d8d8;
        case 0x10d8dcu: goto label_10d8dc;
        case 0x10d8e0u: goto label_10d8e0;
        case 0x10d8e4u: goto label_10d8e4;
        case 0x10d8e8u: goto label_10d8e8;
        case 0x10d8ecu: goto label_10d8ec;
        case 0x10d8f0u: goto label_10d8f0;
        case 0x10d8f4u: goto label_10d8f4;
        case 0x10d8f8u: goto label_10d8f8;
        case 0x10d8fcu: goto label_10d8fc;
        case 0x10d900u: goto label_10d900;
        case 0x10d904u: goto label_10d904;
        case 0x10d908u: goto label_10d908;
        case 0x10d90cu: goto label_10d90c;
        case 0x10d910u: goto label_10d910;
        case 0x10d914u: goto label_10d914;
        case 0x10d918u: goto label_10d918;
        case 0x10d91cu: goto label_10d91c;
        case 0x10d920u: goto label_10d920;
        case 0x10d924u: goto label_10d924;
        case 0x10d928u: goto label_10d928;
        case 0x10d92cu: goto label_10d92c;
        case 0x10d930u: goto label_10d930;
        case 0x10d934u: goto label_10d934;
        case 0x10d938u: goto label_10d938;
        case 0x10d93cu: goto label_10d93c;
        case 0x10d940u: goto label_10d940;
        case 0x10d944u: goto label_10d944;
        case 0x10d948u: goto label_10d948;
        case 0x10d94cu: goto label_10d94c;
        case 0x10d950u: goto label_10d950;
        case 0x10d954u: goto label_10d954;
        case 0x10d958u: goto label_10d958;
        case 0x10d95cu: goto label_10d95c;
        case 0x10d960u: goto label_10d960;
        case 0x10d964u: goto label_10d964;
        case 0x10d968u: goto label_10d968;
        case 0x10d96cu: goto label_10d96c;
        case 0x10d970u: goto label_10d970;
        case 0x10d974u: goto label_10d974;
        case 0x10d978u: goto label_10d978;
        case 0x10d97cu: goto label_10d97c;
        case 0x10d980u: goto label_10d980;
        case 0x10d984u: goto label_10d984;
        case 0x10d988u: goto label_10d988;
        case 0x10d98cu: goto label_10d98c;
        case 0x10d990u: goto label_10d990;
        case 0x10d994u: goto label_10d994;
        case 0x10d998u: goto label_10d998;
        case 0x10d99cu: goto label_10d99c;
        case 0x10d9a0u: goto label_10d9a0;
        case 0x10d9a4u: goto label_10d9a4;
        case 0x10d9a8u: goto label_10d9a8;
        case 0x10d9acu: goto label_10d9ac;
        case 0x10d9b0u: goto label_10d9b0;
        case 0x10d9b4u: goto label_10d9b4;
        case 0x10d9b8u: goto label_10d9b8;
        case 0x10d9bcu: goto label_10d9bc;
        case 0x10d9c0u: goto label_10d9c0;
        case 0x10d9c4u: goto label_10d9c4;
        case 0x10d9c8u: goto label_10d9c8;
        case 0x10d9ccu: goto label_10d9cc;
        case 0x10d9d0u: goto label_10d9d0;
        case 0x10d9d4u: goto label_10d9d4;
        case 0x10d9d8u: goto label_10d9d8;
        case 0x10d9dcu: goto label_10d9dc;
        case 0x10d9e0u: goto label_10d9e0;
        case 0x10d9e4u: goto label_10d9e4;
        case 0x10d9e8u: goto label_10d9e8;
        case 0x10d9ecu: goto label_10d9ec;
        case 0x10d9f0u: goto label_10d9f0;
        case 0x10d9f4u: goto label_10d9f4;
        case 0x10d9f8u: goto label_10d9f8;
        case 0x10d9fcu: goto label_10d9fc;
        case 0x10da00u: goto label_10da00;
        case 0x10da04u: goto label_10da04;
        case 0x10da08u: goto label_10da08;
        case 0x10da0cu: goto label_10da0c;
        case 0x10da10u: goto label_10da10;
        case 0x10da14u: goto label_10da14;
        case 0x10da18u: goto label_10da18;
        case 0x10da1cu: goto label_10da1c;
        case 0x10da20u: goto label_10da20;
        case 0x10da24u: goto label_10da24;
        case 0x10da28u: goto label_10da28;
        case 0x10da2cu: goto label_10da2c;
        case 0x10da30u: goto label_10da30;
        case 0x10da34u: goto label_10da34;
        case 0x10da38u: goto label_10da38;
        case 0x10da3cu: goto label_10da3c;
        case 0x10da40u: goto label_10da40;
        case 0x10da44u: goto label_10da44;
        case 0x10da48u: goto label_10da48;
        case 0x10da4cu: goto label_10da4c;
        case 0x10da50u: goto label_10da50;
        case 0x10da54u: goto label_10da54;
        case 0x10da58u: goto label_10da58;
        case 0x10da5cu: goto label_10da5c;
        case 0x10da60u: goto label_10da60;
        case 0x10da64u: goto label_10da64;
        case 0x10da68u: goto label_10da68;
        case 0x10da6cu: goto label_10da6c;
        case 0x10da70u: goto label_10da70;
        case 0x10da74u: goto label_10da74;
        case 0x10da78u: goto label_10da78;
        case 0x10da7cu: goto label_10da7c;
        case 0x10da80u: goto label_10da80;
        case 0x10da84u: goto label_10da84;
        case 0x10da88u: goto label_10da88;
        case 0x10da8cu: goto label_10da8c;
        case 0x10da90u: goto label_10da90;
        case 0x10da94u: goto label_10da94;
        case 0x10da98u: goto label_10da98;
        case 0x10da9cu: goto label_10da9c;
        case 0x10daa0u: goto label_10daa0;
        case 0x10daa4u: goto label_10daa4;
        case 0x10daa8u: goto label_10daa8;
        case 0x10daacu: goto label_10daac;
        case 0x10dab0u: goto label_10dab0;
        case 0x10dab4u: goto label_10dab4;
        case 0x10dab8u: goto label_10dab8;
        case 0x10dabcu: goto label_10dabc;
        case 0x10dac0u: goto label_10dac0;
        case 0x10dac4u: goto label_10dac4;
        case 0x10dac8u: goto label_10dac8;
        case 0x10daccu: goto label_10dacc;
        case 0x10dad0u: goto label_10dad0;
        case 0x10dad4u: goto label_10dad4;
        case 0x10dad8u: goto label_10dad8;
        case 0x10dadcu: goto label_10dadc;
        case 0x10dae0u: goto label_10dae0;
        case 0x10dae4u: goto label_10dae4;
        case 0x10dae8u: goto label_10dae8;
        case 0x10daecu: goto label_10daec;
        case 0x10daf0u: goto label_10daf0;
        case 0x10daf4u: goto label_10daf4;
        case 0x10daf8u: goto label_10daf8;
        case 0x10dafcu: goto label_10dafc;
        case 0x10db00u: goto label_10db00;
        case 0x10db04u: goto label_10db04;
        case 0x10db08u: goto label_10db08;
        case 0x10db0cu: goto label_10db0c;
        case 0x10db10u: goto label_10db10;
        case 0x10db14u: goto label_10db14;
        case 0x10db18u: goto label_10db18;
        case 0x10db1cu: goto label_10db1c;
        case 0x10db20u: goto label_10db20;
        case 0x10db24u: goto label_10db24;
        case 0x10db28u: goto label_10db28;
        case 0x10db2cu: goto label_10db2c;
        case 0x10db30u: goto label_10db30;
        case 0x10db34u: goto label_10db34;
        case 0x10db38u: goto label_10db38;
        case 0x10db3cu: goto label_10db3c;
        case 0x10db40u: goto label_10db40;
        case 0x10db44u: goto label_10db44;
        case 0x10db48u: goto label_10db48;
        case 0x10db4cu: goto label_10db4c;
        case 0x10db50u: goto label_10db50;
        case 0x10db54u: goto label_10db54;
        case 0x10db58u: goto label_10db58;
        case 0x10db5cu: goto label_10db5c;
        case 0x10db60u: goto label_10db60;
        case 0x10db64u: goto label_10db64;
        case 0x10db68u: goto label_10db68;
        case 0x10db6cu: goto label_10db6c;
        case 0x10db70u: goto label_10db70;
        case 0x10db74u: goto label_10db74;
        case 0x10db78u: goto label_10db78;
        case 0x10db7cu: goto label_10db7c;
        case 0x10db80u: goto label_10db80;
        case 0x10db84u: goto label_10db84;
        case 0x10db88u: goto label_10db88;
        case 0x10db8cu: goto label_10db8c;
        case 0x10db90u: goto label_10db90;
        case 0x10db94u: goto label_10db94;
        case 0x10db98u: goto label_10db98;
        case 0x10db9cu: goto label_10db9c;
        case 0x10dba0u: goto label_10dba0;
        case 0x10dba4u: goto label_10dba4;
        case 0x10dba8u: goto label_10dba8;
        case 0x10dbacu: goto label_10dbac;
        case 0x10dbb0u: goto label_10dbb0;
        case 0x10dbb4u: goto label_10dbb4;
        case 0x10dbb8u: goto label_10dbb8;
        case 0x10dbbcu: goto label_10dbbc;
        case 0x10dbc0u: goto label_10dbc0;
        case 0x10dbc4u: goto label_10dbc4;
        case 0x10dbc8u: goto label_10dbc8;
        case 0x10dbccu: goto label_10dbcc;
        case 0x10dbd0u: goto label_10dbd0;
        case 0x10dbd4u: goto label_10dbd4;
        case 0x10dbd8u: goto label_10dbd8;
        case 0x10dbdcu: goto label_10dbdc;
        case 0x10dbe0u: goto label_10dbe0;
        case 0x10dbe4u: goto label_10dbe4;
        case 0x10dbe8u: goto label_10dbe8;
        case 0x10dbecu: goto label_10dbec;
        case 0x10dbf0u: goto label_10dbf0;
        case 0x10dbf4u: goto label_10dbf4;
        case 0x10dbf8u: goto label_10dbf8;
        case 0x10dbfcu: goto label_10dbfc;
        case 0x10dc00u: goto label_10dc00;
        case 0x10dc04u: goto label_10dc04;
        case 0x10dc08u: goto label_10dc08;
        case 0x10dc0cu: goto label_10dc0c;
        case 0x10dc10u: goto label_10dc10;
        case 0x10dc14u: goto label_10dc14;
        case 0x10dc18u: goto label_10dc18;
        case 0x10dc1cu: goto label_10dc1c;
        case 0x10dc20u: goto label_10dc20;
        case 0x10dc24u: goto label_10dc24;
        case 0x10dc28u: goto label_10dc28;
        case 0x10dc2cu: goto label_10dc2c;
        case 0x10dc30u: goto label_10dc30;
        case 0x10dc34u: goto label_10dc34;
        case 0x10dc38u: goto label_10dc38;
        case 0x10dc3cu: goto label_10dc3c;
        case 0x10dc40u: goto label_10dc40;
        case 0x10dc44u: goto label_10dc44;
        case 0x10dc48u: goto label_10dc48;
        case 0x10dc4cu: goto label_10dc4c;
        case 0x10dc50u: goto label_10dc50;
        case 0x10dc54u: goto label_10dc54;
        case 0x10dc58u: goto label_10dc58;
        case 0x10dc5cu: goto label_10dc5c;
        case 0x10dc60u: goto label_10dc60;
        case 0x10dc64u: goto label_10dc64;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dc6cu: goto label_10dc6c;
        case 0x10dc70u: goto label_10dc70;
        case 0x10dc74u: goto label_10dc74;
        case 0x10dc78u: goto label_10dc78;
        case 0x10dc7cu: goto label_10dc7c;
        case 0x10dc80u: goto label_10dc80;
        case 0x10dc84u: goto label_10dc84;
        case 0x10dc88u: goto label_10dc88;
        case 0x10dc8cu: goto label_10dc8c;
        case 0x10dc90u: goto label_10dc90;
        case 0x10dc94u: goto label_10dc94;
        case 0x10dc98u: goto label_10dc98;
        case 0x10dc9cu: goto label_10dc9c;
        case 0x10dca0u: goto label_10dca0;
        case 0x10dca4u: goto label_10dca4;
        case 0x10dca8u: goto label_10dca8;
        case 0x10dcacu: goto label_10dcac;
        case 0x10dcb0u: goto label_10dcb0;
        case 0x10dcb4u: goto label_10dcb4;
        case 0x10dcb8u: goto label_10dcb8;
        case 0x10dcbcu: goto label_10dcbc;
        case 0x10dcc0u: goto label_10dcc0;
        case 0x10dcc4u: goto label_10dcc4;
        case 0x10dcc8u: goto label_10dcc8;
        case 0x10dcccu: goto label_10dccc;
        case 0x10dcd0u: goto label_10dcd0;
        case 0x10dcd4u: goto label_10dcd4;
        case 0x10dcd8u: goto label_10dcd8;
        case 0x10dcdcu: goto label_10dcdc;
        case 0x10dce0u: goto label_10dce0;
        case 0x10dce4u: goto label_10dce4;
        case 0x10dce8u: goto label_10dce8;
        case 0x10dcecu: goto label_10dcec;
        case 0x10dcf0u: goto label_10dcf0;
        case 0x10dcf4u: goto label_10dcf4;
        case 0x10dcf8u: goto label_10dcf8;
        case 0x10dcfcu: goto label_10dcfc;
        case 0x10dd00u: goto label_10dd00;
        case 0x10dd04u: goto label_10dd04;
        case 0x10dd08u: goto label_10dd08;
        case 0x10dd0cu: goto label_10dd0c;
        case 0x10dd10u: goto label_10dd10;
        case 0x10dd14u: goto label_10dd14;
        case 0x10dd18u: goto label_10dd18;
        case 0x10dd1cu: goto label_10dd1c;
        case 0x10dd20u: goto label_10dd20;
        case 0x10dd24u: goto label_10dd24;
        case 0x10dd28u: goto label_10dd28;
        case 0x10dd2cu: goto label_10dd2c;
        case 0x10dd30u: goto label_10dd30;
        case 0x10dd34u: goto label_10dd34;
        case 0x10dd38u: goto label_10dd38;
        case 0x10dd3cu: goto label_10dd3c;
        case 0x10dd40u: goto label_10dd40;
        case 0x10dd44u: goto label_10dd44;
        case 0x10dd48u: goto label_10dd48;
        case 0x10dd4cu: goto label_10dd4c;
        case 0x10dd50u: goto label_10dd50;
        case 0x10dd54u: goto label_10dd54;
        case 0x10dd58u: goto label_10dd58;
        case 0x10dd5cu: goto label_10dd5c;
        case 0x10dd60u: goto label_10dd60;
        case 0x10dd64u: goto label_10dd64;
        case 0x10dd68u: goto label_10dd68;
        case 0x10dd6cu: goto label_10dd6c;
        case 0x10dd70u: goto label_10dd70;
        case 0x10dd74u: goto label_10dd74;
        case 0x10dd78u: goto label_10dd78;
        case 0x10dd7cu: goto label_10dd7c;
        case 0x10dd80u: goto label_10dd80;
        case 0x10dd84u: goto label_10dd84;
        case 0x10dd88u: goto label_10dd88;
        case 0x10dd8cu: goto label_10dd8c;
        case 0x10dd90u: goto label_10dd90;
        case 0x10dd94u: goto label_10dd94;
        case 0x10dd98u: goto label_10dd98;
        case 0x10dd9cu: goto label_10dd9c;
        case 0x10dda0u: goto label_10dda0;
        case 0x10dda4u: goto label_10dda4;
        case 0x10dda8u: goto label_10dda8;
        case 0x10ddacu: goto label_10ddac;
        case 0x10ddb0u: goto label_10ddb0;
        case 0x10ddb4u: goto label_10ddb4;
        case 0x10ddb8u: goto label_10ddb8;
        case 0x10ddbcu: goto label_10ddbc;
        case 0x10ddc0u: goto label_10ddc0;
        case 0x10ddc4u: goto label_10ddc4;
        case 0x10ddc8u: goto label_10ddc8;
        case 0x10ddccu: goto label_10ddcc;
        case 0x10ddd0u: goto label_10ddd0;
        case 0x10ddd4u: goto label_10ddd4;
        case 0x10ddd8u: goto label_10ddd8;
        case 0x10dddcu: goto label_10dddc;
        case 0x10dde0u: goto label_10dde0;
        case 0x10dde4u: goto label_10dde4;
        case 0x10dde8u: goto label_10dde8;
        case 0x10ddecu: goto label_10ddec;
        case 0x10ddf0u: goto label_10ddf0;
        case 0x10ddf4u: goto label_10ddf4;
        case 0x10ddf8u: goto label_10ddf8;
        case 0x10ddfcu: goto label_10ddfc;
        case 0x10de00u: goto label_10de00;
        case 0x10de04u: goto label_10de04;
        case 0x10de08u: goto label_10de08;
        case 0x10de0cu: goto label_10de0c;
        case 0x10de10u: goto label_10de10;
        case 0x10de14u: goto label_10de14;
        case 0x10de18u: goto label_10de18;
        case 0x10de1cu: goto label_10de1c;
        case 0x10de20u: goto label_10de20;
        case 0x10de24u: goto label_10de24;
        case 0x10de28u: goto label_10de28;
        case 0x10de2cu: goto label_10de2c;
        case 0x10de30u: goto label_10de30;
        case 0x10de34u: goto label_10de34;
        case 0x10de38u: goto label_10de38;
        case 0x10de3cu: goto label_10de3c;
        case 0x10de40u: goto label_10de40;
        case 0x10de44u: goto label_10de44;
        case 0x10de48u: goto label_10de48;
        case 0x10de4cu: goto label_10de4c;
        case 0x10de50u: goto label_10de50;
        case 0x10de54u: goto label_10de54;
        case 0x10de58u: goto label_10de58;
        case 0x10de5cu: goto label_10de5c;
        case 0x10de60u: goto label_10de60;
        case 0x10de64u: goto label_10de64;
        case 0x10de68u: goto label_10de68;
        case 0x10de6cu: goto label_10de6c;
        default: break;
    }

    ctx->pc = 0x10d3a8u;

label_10d3a8:
    // 0x10d3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10d3ac:
    // 0x10d3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10d3b0:
    // 0x10d3b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10d3b4:
    // 0x10d3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10d3b8:
    // 0x10d3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10d3bc:
    // 0x10d3bc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10d3bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10d3c0:
    // 0x10d3c0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x10d3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_10d3c4:
    // 0x10d3c4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_10d3c8:
    if (ctx->pc == 0x10D3C8u) {
        ctx->pc = 0x10D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C4u;
        // 0x10d3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D3CCu;
        goto label_10d3cc;
    }
    ctx->pc = 0x10D3C4u;
    {
        const bool branch_taken_0x10d3c4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C4u;
        // 0x10d3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c4) {
            ctx->pc = 0x10D3D4u;
            goto label_10d3d4;
        }
    }
    ctx->pc = 0x10D3CCu;
label_10d3cc:
    // 0x10d3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d3d0:
    // 0x10d3d0: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x10d3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_10d3d4:
    // 0x10d3d4: 0xc042cba  jal         func_10B2E8
label_10d3d8:
    if (ctx->pc == 0x10D3D8u) {
        ctx->pc = 0x10D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3D4u;
        // 0x10d3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D3DCu;
        goto label_10d3dc;
    }
    ctx->pc = 0x10D3D4u;
    SET_GPR_U32(ctx, 31, 0x10D3DCu);
    ctx->pc = 0x10D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3D4u;
    // 0x10d3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x10D3D4u, 0x10D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3DCu;
label_10d3dc:
    // 0x10d3dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_10d3e0:
    if (ctx->pc == 0x10D3E0u) {
        ctx->pc = 0x10D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3DCu;
        // 0x10d3e0: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D3E4u;
        goto label_10d3e4;
    }
    ctx->pc = 0x10D3DCu;
    {
        const bool branch_taken_0x10d3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3DCu;
        // 0x10d3e0: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3dc) {
            ctx->pc = 0x10D430u;
            goto label_10d430;
        }
    }
    ctx->pc = 0x10D3E4u;
label_10d3e4:
    // 0x10d3e4: 0x8e2305e8  lw          $v1, 0x5E8($s1)
    ctx->pc = 0x10d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d3e8:
    // 0x10d3e8: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_10d3ec:
    if (ctx->pc == 0x10D3ECu) {
        ctx->pc = 0x10D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3E8u;
        // 0x10d3ec: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D3F0u;
        goto label_10d3f0;
    }
    ctx->pc = 0x10D3E8u;
    {
        const bool branch_taken_0x10d3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d3e8) {
            ctx->pc = 0x10D3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D3E8u;
            // 0x10d3ec: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D434u;
            goto label_10d434;
        }
    }
    ctx->pc = 0x10D3F0u;
label_10d3f0:
    // 0x10d3f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_10d3f4:
    // 0x10d3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d3f8:
    // 0x10d3f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_10d3fc:
    // 0x10d3fc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_10d400:
    // 0x10d400: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10d400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d404:
    // 0x10d404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10d404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d408:
    // 0x10d408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d40c:
    // 0x10d40c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10d40cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d410:
    // 0x10d410: 0xc0b2e92  jal         func_2CBA48
label_10d414:
    if (ctx->pc == 0x10D414u) {
        ctx->pc = 0x10D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D410u;
        // 0x10d414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D418u;
        goto label_10d418;
    }
    ctx->pc = 0x10D410u;
    SET_GPR_U32(ctx, 31, 0x10D418u);
    ctx->pc = 0x10D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D410u;
    // 0x10d414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10D410u, 0x10D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D418u;
label_10d418:
    // 0x10d418: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x10d418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_10d41c:
    // 0x10d41c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x10d41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_10d420:
    // 0x10d420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10d420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10d424:
    // 0x10d424: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x10d424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_10d428:
    // 0x10d428: 0xc0aa65e  jal         func_2A9978
label_10d42c:
    if (ctx->pc == 0x10D42Cu) {
        ctx->pc = 0x10D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D428u;
        // 0x10d42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D430u;
        goto label_10d430;
    }
    ctx->pc = 0x10D428u;
    SET_GPR_U32(ctx, 31, 0x10D430u);
    ctx->pc = 0x10D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D428u;
    // 0x10d42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x10D428u, 0x10D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D430u;
label_10d430:
    // 0x10d430: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10d430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10d434:
    // 0x10d434: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_10d438:
    if (ctx->pc == 0x10D438u) {
        ctx->pc = 0x10D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D434u;
        // 0x10d438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D43Cu;
        goto label_10d43c;
    }
    ctx->pc = 0x10D434u;
    {
        const bool branch_taken_0x10d434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D434u;
        // 0x10d438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d434) {
            ctx->pc = 0x10D44Cu;
            goto label_10d44c;
        }
    }
    ctx->pc = 0x10D43Cu;
label_10d43c:
    // 0x10d43c: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
label_10d440:
    if (ctx->pc == 0x10D440u) {
        ctx->pc = 0x10D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D43Cu;
        // 0x10d440: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D444u;
        goto label_10d444;
    }
    ctx->pc = 0x10D43Cu;
    {
        const bool branch_taken_0x10d43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D43Cu;
        // 0x10d440: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d43c) {
            ctx->pc = 0x10D618u;
            goto label_10d618;
        }
    }
    ctx->pc = 0x10D444u;
label_10d444:
    // 0x10d444: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_10d448:
    if (ctx->pc == 0x10D448u) {
        ctx->pc = 0x10D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D444u;
        // 0x10d448: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D44Cu;
        goto label_10d44c;
    }
    ctx->pc = 0x10D444u;
    {
        const bool branch_taken_0x10d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D444u;
        // 0x10d448: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d444) {
            ctx->pc = 0x10DBECu;
            goto label_10dbec;
        }
    }
    ctx->pc = 0x10D44Cu;
label_10d44c:
    // 0x10d44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d450:
    // 0x10d450: 0xc049150  jal         func_124540
label_10d454:
    if (ctx->pc == 0x10D454u) {
        ctx->pc = 0x10D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D450u;
        // 0x10d454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D458u;
        goto label_10d458;
    }
    ctx->pc = 0x10D450u;
    SET_GPR_U32(ctx, 31, 0x10D458u);
    ctx->pc = 0x10D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D450u;
    // 0x10d454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10D450u, 0x10D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D458u;
label_10d458:
    // 0x10d458: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10d458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10d45c:
    // 0x10d45c: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
label_10d460:
    if (ctx->pc == 0x10D460u) {
        ctx->pc = 0x10D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D45Cu;
        // 0x10d460: 0xae201588  sw          $zero, 0x1588($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D464u;
        goto label_10d464;
    }
    ctx->pc = 0x10D45Cu;
    {
        const bool branch_taken_0x10d45c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D45Cu;
        // 0x10d460: 0xae201588  sw          $zero, 0x1588($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d45c) {
            ctx->pc = 0x10D504u;
            goto label_10d504;
        }
    }
    ctx->pc = 0x10D464u;
label_10d464:
    // 0x10d464: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10d468:
    // 0x10d468: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10d468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10d46c:
    // 0x10d46c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10d46cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10d470:
    // 0x10d470: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10d474:
    // 0x10d474: 0x40f809  jalr        $v0
label_10d478:
    if (ctx->pc == 0x10D478u) {
        ctx->pc = 0x10D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D474u;
        // 0x10d478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D47Cu;
        goto label_10d47c;
    }
    ctx->pc = 0x10D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10D47Cu);
        ctx->pc = 0x10D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D474u;
        // 0x10d478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D474u, 0x10D47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D47Cu;
label_10d47c:
    // 0x10d47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d480:
    // 0x10d480: 0xc07dfa0  jal         func_1F7E80
label_10d484:
    if (ctx->pc == 0x10D484u) {
        ctx->pc = 0x10D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D480u;
        // 0x10d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D488u;
        goto label_10d488;
    }
    ctx->pc = 0x10D480u;
    SET_GPR_U32(ctx, 31, 0x10D488u);
    ctx->pc = 0x10D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D480u;
    // 0x10d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x10D480u, 0x10D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D488u;
label_10d488:
    // 0x10d488: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10d488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_10d48c:
    // 0x10d48c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10d48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_10d490:
    // 0x10d490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d494:
    // 0x10d494: 0x962205e0  lhu         $v0, 0x5E0($s1)
    ctx->pc = 0x10d494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
label_10d498:
    // 0x10d498: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x10d498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10d49c:
    // 0x10d49c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10d49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10d4a0:
    // 0x10d4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d4a4:
    // 0x10d4a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_10d4a8:
    if (ctx->pc == 0x10D4A8u) {
        ctx->pc = 0x10D4ACu;
        goto label_10d4ac;
    }
    ctx->pc = 0x10D4A4u;
    {
        const bool branch_taken_0x10d4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d4a4) {
            ctx->pc = 0x10D4C0u;
            goto label_10d4c0;
        }
    }
    ctx->pc = 0x10D4ACu;
label_10d4ac:
    // 0x10d4ac: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x10d4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_10d4b0:
    // 0x10d4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10d4b4:
    if (ctx->pc == 0x10D4B4u) {
        ctx->pc = 0x10D4B8u;
        goto label_10d4b8;
    }
    ctx->pc = 0x10D4B0u;
    {
        const bool branch_taken_0x10d4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d4b0) {
            ctx->pc = 0x10D4C0u;
            goto label_10d4c0;
        }
    }
    ctx->pc = 0x10D4B8u;
label_10d4b8:
    // 0x10d4b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10d4bc:
    // 0x10d4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d4c0:
    // 0x10d4c0: 0x0  nop
    ctx->pc = 0x10d4c0u;
    // NOP
label_10d4c4:
    // 0x10d4c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d4c8:
    // 0x10d4c8: 0x0  nop
    ctx->pc = 0x10d4c8u;
    // NOP
label_10d4cc:
    // 0x10d4cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10d4d0:
    if (ctx->pc == 0x10D4D0u) {
        ctx->pc = 0x10D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4CCu;
        // 0x10d4d0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D4D4u;
        goto label_10d4d4;
    }
    ctx->pc = 0x10D4CCu;
    {
        const bool branch_taken_0x10d4cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d4cc) {
            ctx->pc = 0x10D4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D4CCu;
            // 0x10d4d0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D4D4u;
            goto label_10d4d4;
        }
    }
    ctx->pc = 0x10D4D4u;
label_10d4d4:
    // 0x10d4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d4d8:
    // 0x10d4d8: 0x0  nop
    ctx->pc = 0x10d4d8u;
    // NOP
label_10d4dc:
    // 0x10d4dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d4e0:
    // 0x10d4e0: 0x0  nop
    ctx->pc = 0x10d4e0u;
    // NOP
label_10d4e4:
    // 0x10d4e4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_10d4e8:
    if (ctx->pc == 0x10D4E8u) {
        ctx->pc = 0x10D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4E4u;
        // 0x10d4e8: 0x8e2205e8  lw          $v0, 0x5E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D4ECu;
        goto label_10d4ec;
    }
    ctx->pc = 0x10D4E4u;
    {
        const bool branch_taken_0x10d4e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d4e4) {
            ctx->pc = 0x10D4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D4E4u;
            // 0x10d4e8: 0x8e2205e8  lw          $v0, 0x5E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D508u;
            goto label_10d508;
        }
    }
    ctx->pc = 0x10D4ECu;
label_10d4ec:
    // 0x10d4ec: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x10d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_10d4f0:
    // 0x10d4f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10d4f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_10d4f4:
    // 0x10d4f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d4f8:
    // 0x10d4f8: 0x0  nop
    ctx->pc = 0x10d4f8u;
    // NOP
label_10d4fc:
    // 0x10d4fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10d4fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10d500:
    // 0x10d500: 0xe6201588  swc1        $f0, 0x1588($s1)
    ctx->pc = 0x10d500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10d504:
    // 0x10d504: 0x8e2205e8  lw          $v0, 0x5E8($s1)
    ctx->pc = 0x10d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d508:
    // 0x10d508: 0x962305e0  lhu         $v1, 0x5E0($s1)
    ctx->pc = 0x10d508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
label_10d50c:
    // 0x10d50c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10d510:
    if (ctx->pc == 0x10D510u) {
        ctx->pc = 0x10D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D50Cu;
        // 0x10d510: 0xae2205ec  sw          $v0, 0x5EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D514u;
        goto label_10d514;
    }
    ctx->pc = 0x10D50Cu;
    {
        const bool branch_taken_0x10d50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D50Cu;
        // 0x10d510: 0xae2205ec  sw          $v0, 0x5EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d50c) {
            ctx->pc = 0x10D51Cu;
            goto label_10d51c;
        }
    }
    ctx->pc = 0x10D514u;
label_10d514:
    // 0x10d514: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x10d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_10d518:
    // 0x10d518: 0xae2205ec  sw          $v0, 0x5EC($s1)
    ctx->pc = 0x10d518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1516), GPR_U32(ctx, 2));
label_10d51c:
    // 0x10d51c: 0xc049a46  jal         func_126918
label_10d520:
    if (ctx->pc == 0x10D520u) {
        ctx->pc = 0x10D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D51Cu;
        // 0x10d520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D524u;
        goto label_10d524;
    }
    ctx->pc = 0x10D51Cu;
    SET_GPR_U32(ctx, 31, 0x10D524u);
    ctx->pc = 0x10D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D51Cu;
    // 0x10d520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126918u, 0x10D51Cu, 0x10D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D524u;
label_10d524:
    // 0x10d524: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10d524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10d528:
    // 0x10d528: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x10d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10d52c:
    // 0x10d52c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_10d530:
    if (ctx->pc == 0x10D530u) {
        ctx->pc = 0x10D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D52Cu;
        // 0x10d530: 0xae2205e8  sw          $v0, 0x5E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D534u;
        goto label_10d534;
    }
    ctx->pc = 0x10D52Cu;
    {
        const bool branch_taken_0x10d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D52Cu;
        // 0x10d530: 0xae2205e8  sw          $v0, 0x5E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d52c) {
            ctx->pc = 0x10D54Cu;
            goto label_10d54c;
        }
    }
    ctx->pc = 0x10D534u;
label_10d534:
    // 0x10d534: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10d534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_10d538:
    // 0x10d538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d53c:
    // 0x10d53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d540:
    // 0x10d540: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x10d540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_10d544:
    // 0x10d544: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x10d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_10d548:
    // 0x10d548: 0xae201588  sw          $zero, 0x1588($s1)
    ctx->pc = 0x10d548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5512), GPR_U32(ctx, 0));
label_10d54c:
    // 0x10d54c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10d550:
    // 0x10d550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d554:
    // 0x10d554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d558:
    // 0x10d558: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10d55c:
    // 0x10d55c: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x10d55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_10d560:
    // 0x10d560: 0x8e2505e8  lw          $a1, 0x5E8($s1)
    ctx->pc = 0x10d560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d564:
    // 0x10d564: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x10d564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_10d568:
    // 0x10d568: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10d568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10d56c:
    // 0x10d56c: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x10d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_10d570:
    // 0x10d570: 0xa62305f0  sh          $v1, 0x5F0($s1)
    ctx->pc = 0x10d570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1520), (uint16_t)GPR_U32(ctx, 3));
label_10d574:
    // 0x10d574: 0xae2015c4  sw          $zero, 0x15C4($s1)
    ctx->pc = 0x10d574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5572), GPR_U32(ctx, 0));
label_10d578:
    // 0x10d578: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x10d578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_10d57c:
    // 0x10d57c: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x10d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_10d580:
    // 0x10d580: 0xa6260568  sh          $a2, 0x568($s1)
    ctx->pc = 0x10d580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 6));
label_10d584:
    // 0x10d584: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
label_10d588:
    if (ctx->pc == 0x10D588u) {
        ctx->pc = 0x10D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D584u;
        // 0x10d588: 0xa620056a  sh          $zero, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D58Cu;
        goto label_10d58c;
    }
    ctx->pc = 0x10D584u;
    {
        const bool branch_taken_0x10d584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x10D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D584u;
        // 0x10d588: 0xa620056a  sh          $zero, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d584) {
            ctx->pc = 0x10D5BCu;
            goto label_10d5bc;
        }
    }
    ctx->pc = 0x10D58Cu;
label_10d58c:
    // 0x10d58c: 0x2ca20056  sltiu       $v0, $a1, 0x56
    ctx->pc = 0x10d58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)86) ? 1 : 0);
label_10d590:
    // 0x10d590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10d594:
    if (ctx->pc == 0x10D594u) {
        ctx->pc = 0x10D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D590u;
        // 0x10d594: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D598u;
        goto label_10d598;
    }
    ctx->pc = 0x10D590u;
    {
        const bool branch_taken_0x10d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D590u;
        // 0x10d594: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d590) {
            ctx->pc = 0x10D5A8u;
            goto label_10d5a8;
        }
    }
    ctx->pc = 0x10D598u;
label_10d598:
    // 0x10d598: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
label_10d59c:
    if (ctx->pc == 0x10D59Cu) {
        ctx->pc = 0x10D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D598u;
        // 0x10d59c: 0xa626056a  sh          $a2, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5A0u;
        goto label_10d5a0;
    }
    ctx->pc = 0x10D598u;
    {
        const bool branch_taken_0x10d598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10d598) {
            ctx->pc = 0x10D59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D598u;
            // 0x10d59c: 0xa626056a  sh          $a2, 0x56A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D5E0u;
            goto label_10d5e0;
        }
    }
    ctx->pc = 0x10D5A0u;
label_10d5a0:
    // 0x10d5a0: 0x10000017  b           . + 4 + (0x17 << 2)
label_10d5a4:
    if (ctx->pc == 0x10D5A4u) {
        ctx->pc = 0x10D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5A0u;
        // 0x10d5a4: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5A8u;
        goto label_10d5a8;
    }
    ctx->pc = 0x10D5A0u;
    {
        const bool branch_taken_0x10d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5A0u;
        // 0x10d5a4: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5a0) {
            ctx->pc = 0x10D600u;
            goto label_10d600;
        }
    }
    ctx->pc = 0x10D5A8u;
label_10d5a8:
    // 0x10d5a8: 0x2ca20072  sltiu       $v0, $a1, 0x72
    ctx->pc = 0x10d5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
label_10d5ac:
    // 0x10d5ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_10d5b0:
    if (ctx->pc == 0x10D5B0u) {
        ctx->pc = 0x10D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5ACu;
        // 0x10d5b0: 0x2ca2006e  sltiu       $v0, $a1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5B4u;
        goto label_10d5b4;
    }
    ctx->pc = 0x10D5ACu;
    {
        const bool branch_taken_0x10d5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5ACu;
        // 0x10d5b0: 0x2ca2006e  sltiu       $v0, $a1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5ac) {
            ctx->pc = 0x10D5FCu;
            goto label_10d5fc;
        }
    }
    ctx->pc = 0x10D5B4u;
label_10d5b4:
    // 0x10d5b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_10d5b8:
    if (ctx->pc == 0x10D5B8u) {
        ctx->pc = 0x10D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5B4u;
        // 0x10d5b8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5BCu;
        goto label_10d5bc;
    }
    ctx->pc = 0x10D5B4u;
    {
        const bool branch_taken_0x10d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d5b4) {
            ctx->pc = 0x10D5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D5B4u;
            // 0x10d5b8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D600u;
            goto label_10d600;
        }
    }
    ctx->pc = 0x10D5BCu;
label_10d5bc:
    // 0x10d5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d5c0:
    // 0x10d5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d5c4:
    // 0x10d5c4: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x10d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_10d5c8:
    // 0x10d5c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10d5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d5cc:
    // 0x10d5cc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10d5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d5d0:
    // 0x10d5d0: 0xc0aa182  jal         func_2A8608
label_10d5d4:
    if (ctx->pc == 0x10D5D4u) {
        ctx->pc = 0x10D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5D0u;
        // 0x10d5d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5D8u;
        goto label_10d5d8;
    }
    ctx->pc = 0x10D5D0u;
    SET_GPR_U32(ctx, 31, 0x10D5D8u);
    ctx->pc = 0x10D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5D0u;
    // 0x10d5d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x10D5D0u, 0x10D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5D8u;
label_10d5d8:
    // 0x10d5d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_10d5dc:
    if (ctx->pc == 0x10D5DCu) {
        ctx->pc = 0x10D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5D8u;
        // 0x10d5dc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5E0u;
        goto label_10d5e0;
    }
    ctx->pc = 0x10D5D8u;
    {
        const bool branch_taken_0x10d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5D8u;
        // 0x10d5dc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5d8) {
            ctx->pc = 0x10D600u;
            goto label_10d600;
        }
    }
    ctx->pc = 0x10D5E0u;
label_10d5e0:
    // 0x10d5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d5e4:
    // 0x10d5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d5e8:
    // 0x10d5e8: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x10d5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_10d5ec:
    // 0x10d5ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10d5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d5f0:
    // 0x10d5f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10d5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d5f4:
    // 0x10d5f4: 0xc0aa182  jal         func_2A8608
label_10d5f8:
    if (ctx->pc == 0x10D5F8u) {
        ctx->pc = 0x10D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5F4u;
        // 0x10d5f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D5FCu;
        goto label_10d5fc;
    }
    ctx->pc = 0x10D5F4u;
    SET_GPR_U32(ctx, 31, 0x10D5FCu);
    ctx->pc = 0x10D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5F4u;
    // 0x10d5f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x10D5F4u, 0x10D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5FCu;
label_10d5fc:
    // 0x10d5fc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10d5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10d600:
    // 0x10d600: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10d600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10d604:
    // 0x10d604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d608:
    // 0x10d608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10d60c:
    // 0x10d60c: 0xe6201598  swc1        $f0, 0x1598($s1)
    ctx->pc = 0x10d60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5528), bits); }
label_10d610:
    // 0x10d610: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10d610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10d614:
    // 0x10d614: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10d614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10d618:
    // 0x10d618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10d61c:
    // 0x10d61c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_10d620:
    if (ctx->pc == 0x10D620u) {
        ctx->pc = 0x10D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D61Cu;
        // 0x10d620: 0xa620056a  sh          $zero, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D624u;
        goto label_10d624;
    }
    ctx->pc = 0x10D61Cu;
    {
        const bool branch_taken_0x10d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d61c) {
            ctx->pc = 0x10D620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D61Cu;
            // 0x10d620: 0xa620056a  sh          $zero, 0x56A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D624u;
            goto label_10d624;
        }
    }
    ctx->pc = 0x10D624u;
label_10d624:
    // 0x10d624: 0x8622056a  lh          $v0, 0x56A($s1)
    ctx->pc = 0x10d624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
label_10d628:
    // 0x10d628: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10d62c:
    if (ctx->pc == 0x10D62Cu) {
        ctx->pc = 0x10D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D628u;
        // 0x10d62c: 0x9623056a  lhu         $v1, 0x56A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D630u;
        goto label_10d630;
    }
    ctx->pc = 0x10D628u;
    {
        const bool branch_taken_0x10d628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D628u;
        // 0x10d62c: 0x9623056a  lhu         $v1, 0x56A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d628) {
            ctx->pc = 0x10D644u;
            goto label_10d644;
        }
    }
    ctx->pc = 0x10D630u;
label_10d630:
    // 0x10d630: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x10d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_10d634:
    // 0x10d634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10d638:
    // 0x10d638: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x10d638u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
label_10d63c:
    // 0x10d63c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x10d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_10d640:
    // 0x10d640: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x10d640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_10d644:
    // 0x10d644: 0x8e2205e8  lw          $v0, 0x5E8($s1)
    ctx->pc = 0x10d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d648:
    // 0x10d648: 0x24100044  addiu       $s0, $zero, 0x44
    ctx->pc = 0x10d648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_10d64c:
    // 0x10d64c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_10d650:
    if (ctx->pc == 0x10D650u) {
        ctx->pc = 0x10D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D64Cu;
        // 0x10d650: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D654u;
        goto label_10d654;
    }
    ctx->pc = 0x10D64Cu;
    {
        const bool branch_taken_0x10d64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10d64c) {
            ctx->pc = 0x10D650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D64Cu;
            // 0x10d650: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D660u;
            goto label_10d660;
        }
    }
    ctx->pc = 0x10D654u;
label_10d654:
    // 0x10d654: 0xc0493b0  jal         func_124EC0
label_10d658:
    if (ctx->pc == 0x10D658u) {
        ctx->pc = 0x10D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D654u;
        // 0x10d658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D65Cu;
        goto label_10d65c;
    }
    ctx->pc = 0x10D654u;
    SET_GPR_U32(ctx, 31, 0x10D65Cu);
    ctx->pc = 0x10D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D654u;
    // 0x10d658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x10D654u, 0x10D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D65Cu;
label_10d65c:
    // 0x10d65c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x10d65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_10d660:
    // 0x10d660: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10d664:
    if (ctx->pc == 0x10D664u) {
        ctx->pc = 0x10D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D660u;
        // 0x10d664: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D668u;
        goto label_10d668;
    }
    ctx->pc = 0x10D660u;
    {
        const bool branch_taken_0x10d660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D660u;
        // 0x10d664: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d660) {
            ctx->pc = 0x10D684u;
            goto label_10d684;
        }
    }
    ctx->pc = 0x10D668u;
label_10d668:
    // 0x10d668: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10d66c:
    // 0x10d66c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10d66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_10d670:
    // 0x10d670: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10d670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_10d674:
    // 0x10d674: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10d674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10d678:
    // 0x10d678: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x10d678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_10d67c:
    // 0x10d67c: 0xc04939a  jal         func_124E68
label_10d680:
    if (ctx->pc == 0x10D680u) {
        ctx->pc = 0x10D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D67Cu;
        // 0x10d680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D684u;
        goto label_10d684;
    }
    ctx->pc = 0x10D67Cu;
    SET_GPR_U32(ctx, 31, 0x10D684u);
    ctx->pc = 0x10D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D67Cu;
    // 0x10d680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10D67Cu, 0x10D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D684u;
label_10d684:
    // 0x10d684: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10d688:
    // 0x10d688: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10d68c:
    if (ctx->pc == 0x10D68Cu) {
        ctx->pc = 0x10D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D688u;
        // 0x10d68c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D690u;
        goto label_10d690;
    }
    ctx->pc = 0x10D688u;
    {
        const bool branch_taken_0x10d688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D688u;
        // 0x10d68c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d688) {
            ctx->pc = 0x10D694u;
            goto label_10d694;
        }
    }
    ctx->pc = 0x10D690u;
label_10d690:
    // 0x10d690: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10d690u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10d694:
    // 0x10d694: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10d698:
    // 0x10d698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d69c:
    // 0x10d69c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10d69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10d6a0:
    { float f = (rdram && rdram[0x00747A09u] == 0x01u) ? (ctx->f[0] * 0.5f) : ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_10d6a4:
    // 0x10d6a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x10d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_10d6a8:
    // 0x10d6a8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_10d6ac:
    if (ctx->pc == 0x10D6ACu) {
        ctx->pc = 0x10D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6A8u;
        // 0x10d6ac: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6B0u;
        goto label_10d6b0;
    }
    ctx->pc = 0x10D6A8u;
    {
        const bool branch_taken_0x10d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6A8u;
        // 0x10d6ac: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6a8) {
            ctx->pc = 0x10D770u;
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D6B0u;
label_10d6b0:
    // 0x10d6b0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10d6b4:
    // 0x10d6b4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_10d6b8:
    if (ctx->pc == 0x10D6B8u) {
        ctx->pc = 0x10D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6B4u;
        // 0x10d6b8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6BCu;
        goto label_10d6bc;
    }
    ctx->pc = 0x10D6B4u;
    {
        const bool branch_taken_0x10d6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6B4u;
        // 0x10d6b8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6b4) {
            ctx->pc = 0x10D770u;
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D6BCu;
label_10d6bc:
    // 0x10d6bc: 0x8e2305e8  lw          $v1, 0x5E8($s1)
    ctx->pc = 0x10d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d6c0:
    // 0x10d6c0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_10d6c4:
    if (ctx->pc == 0x10D6C4u) {
        ctx->pc = 0x10D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6C0u;
        // 0x10d6c4: 0x2c620064  sltiu       $v0, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6C8u;
        goto label_10d6c8;
    }
    ctx->pc = 0x10D6C0u;
    {
        const bool branch_taken_0x10d6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6C0u;
        // 0x10d6c4: 0x2c620064  sltiu       $v0, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6c0) {
            ctx->pc = 0x10D71Cu;
            goto label_10d71c;
        }
    }
    ctx->pc = 0x10D6C8u;
label_10d6c8:
    // 0x10d6c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_10d6cc:
    if (ctx->pc == 0x10D6CCu) {
        ctx->pc = 0x10D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6C8u;
        // 0x10d6cc: 0x2c620072  sltiu       $v0, $v1, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6D0u;
        goto label_10d6d0;
    }
    ctx->pc = 0x10D6C8u;
    {
        const bool branch_taken_0x10d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6C8u;
        // 0x10d6cc: 0x2c620072  sltiu       $v0, $v1, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6c8) {
            ctx->pc = 0x10D704u;
            goto label_10d704;
        }
    }
    ctx->pc = 0x10D6D0u;
label_10d6d0:
    // 0x10d6d0: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
label_10d6d4:
    if (ctx->pc == 0x10D6D4u) {
        ctx->pc = 0x10D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6D0u;
        // 0x10d6d4: 0x2c620045  sltiu       $v0, $v1, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6D8u;
        goto label_10d6d8;
    }
    ctx->pc = 0x10D6D0u;
    {
        const bool branch_taken_0x10d6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x10D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6D0u;
        // 0x10d6d4: 0x2c620045  sltiu       $v0, $v1, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6d0) {
            ctx->pc = 0x10D71Cu;
            goto label_10d71c;
        }
    }
    ctx->pc = 0x10D6D8u;
label_10d6d8:
    // 0x10d6d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10d6dc:
    if (ctx->pc == 0x10D6DCu) {
        ctx->pc = 0x10D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6D8u;
        // 0x10d6dc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6E0u;
        goto label_10d6e0;
    }
    ctx->pc = 0x10D6D8u;
    {
        const bool branch_taken_0x10d6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6D8u;
        // 0x10d6dc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6d8) {
            ctx->pc = 0x10D6F0u;
            goto label_10d6f0;
        }
    }
    ctx->pc = 0x10D6E0u;
label_10d6e0:
    // 0x10d6e0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_10d6e4:
    if (ctx->pc == 0x10D6E4u) {
        ctx->pc = 0x10D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6E0u;
        // 0x10d6e4: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6E8u;
        goto label_10d6e8;
    }
    ctx->pc = 0x10D6E0u;
    {
        const bool branch_taken_0x10d6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6E0u;
        // 0x10d6e4: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6e0) {
            ctx->pc = 0x10D720u;
            goto label_10d720;
        }
    }
    ctx->pc = 0x10D6E8u;
label_10d6e8:
    // 0x10d6e8: 0x10000022  b           . + 4 + (0x22 << 2)
label_10d6ec:
    if (ctx->pc == 0x10D6ECu) {
        ctx->pc = 0x10D6F0u;
        goto label_10d6f0;
    }
    ctx->pc = 0x10D6E8u;
    {
        const bool branch_taken_0x10d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d6e8) {
            ctx->pc = 0x10D774u;
            goto label_10d774;
        }
    }
    ctx->pc = 0x10D6F0u;
label_10d6f0:
    // 0x10d6f0: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_10d6f4:
    // 0x10d6f4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_10d6f8:
    if (ctx->pc == 0x10D6F8u) {
        ctx->pc = 0x10D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6F4u;
        // 0x10d6f8: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D6FCu;
        goto label_10d6fc;
    }
    ctx->pc = 0x10D6F4u;
    {
        const bool branch_taken_0x10d6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6F4u;
        // 0x10d6f8: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6f4) {
            ctx->pc = 0x10D748u;
            goto label_10d748;
        }
    }
    ctx->pc = 0x10D6FCu;
label_10d6fc:
    // 0x10d6fc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_10d700:
    if (ctx->pc == 0x10D700u) {
        ctx->pc = 0x10D704u;
        goto label_10d704;
    }
    ctx->pc = 0x10D6FCu;
    {
        const bool branch_taken_0x10d6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d6fc) {
            ctx->pc = 0x10D774u;
            goto label_10d774;
        }
    }
    ctx->pc = 0x10D704u;
label_10d704:
    // 0x10d704: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_10d708:
    if (ctx->pc == 0x10D708u) {
        ctx->pc = 0x10D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D704u;
        // 0x10d708: 0x2c62006e  sltiu       $v0, $v1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D70Cu;
        goto label_10d70c;
    }
    ctx->pc = 0x10D704u;
    {
        const bool branch_taken_0x10d704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D704u;
        // 0x10d708: 0x2c62006e  sltiu       $v0, $v1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d704) {
            ctx->pc = 0x10D770u;
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D70Cu;
label_10d70c:
    // 0x10d70c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_10d710:
    if (ctx->pc == 0x10D710u) {
        ctx->pc = 0x10D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D70Cu;
        // 0x10d710: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D714u;
        goto label_10d714;
    }
    ctx->pc = 0x10D70Cu;
    {
        const bool branch_taken_0x10d70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D70Cu;
        // 0x10d710: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d70c) {
            ctx->pc = 0x10D748u;
            goto label_10d748;
        }
    }
    ctx->pc = 0x10D714u;
label_10d714:
    // 0x10d714: 0x10000017  b           . + 4 + (0x17 << 2)
label_10d718:
    if (ctx->pc == 0x10D718u) {
        ctx->pc = 0x10D71Cu;
        goto label_10d71c;
    }
    ctx->pc = 0x10D714u;
    {
        const bool branch_taken_0x10d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d714) {
            ctx->pc = 0x10D774u;
            goto label_10d774;
        }
    }
    ctx->pc = 0x10D71Cu;
label_10d71c:
    // 0x10d71c: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d720:
    // 0x10d720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d724:
    // 0x10d724: 0x0  nop
    ctx->pc = 0x10d724u;
    // NOP
label_10d728:
    // 0x10d728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10d728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d72c:
    // 0x10d72c: 0x0  nop
    ctx->pc = 0x10d72cu;
    // NOP
label_10d730:
    // 0x10d730: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_10d734:
    if (ctx->pc == 0x10D734u) {
        ctx->pc = 0x10D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D730u;
        // 0x10d734: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D738u;
        goto label_10d738;
    }
    ctx->pc = 0x10D730u;
    {
        const bool branch_taken_0x10d730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d730) {
            ctx->pc = 0x10D734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D730u;
            // 0x10d734: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D778u;
            goto label_10d778;
        }
    }
    ctx->pc = 0x10D738u;
label_10d738:
    // 0x10d738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10d73c:
    // 0x10d73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d740:
    // 0x10d740: 0x1000000b  b           . + 4 + (0xB << 2)
label_10d744:
    if (ctx->pc == 0x10D744u) {
        ctx->pc = 0x10D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D740u;
        // 0x10d744: 0xe62015c4  swc1        $f0, 0x15C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D748u;
        goto label_10d748;
    }
    ctx->pc = 0x10D740u;
    {
        const bool branch_taken_0x10d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D740u;
        // 0x10d744: 0xe62015c4  swc1        $f0, 0x15C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d740) {
            ctx->pc = 0x10D770u;
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D748u;
label_10d748:
    // 0x10d748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d74c:
    // 0x10d74c: 0x0  nop
    ctx->pc = 0x10d74cu;
    // NOP
label_10d750:
    // 0x10d750: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10d750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d754:
    // 0x10d754: 0x0  nop
    ctx->pc = 0x10d754u;
    // NOP
label_10d758:
    // 0x10d758: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_10d75c:
    if (ctx->pc == 0x10D75Cu) {
        ctx->pc = 0x10D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D758u;
        // 0x10d75c: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D760u;
        goto label_10d760;
    }
    ctx->pc = 0x10D758u;
    {
        const bool branch_taken_0x10d758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d758) {
            ctx->pc = 0x10D75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D758u;
            // 0x10d75c: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D778u;
            goto label_10d778;
        }
    }
    ctx->pc = 0x10D760u;
label_10d760:
    // 0x10d760: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x10d760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_10d764:
    // 0x10d764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d768:
    // 0x10d768: 0x0  nop
    ctx->pc = 0x10d768u;
    // NOP
label_10d76c:
    // 0x10d76c: 0xe62015c4  swc1        $f0, 0x15C4($s1)
    ctx->pc = 0x10d76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
label_10d770:
    // 0x10d770: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d774:
    // 0x10d774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d778:
    // 0x10d778: 0x0  nop
    ctx->pc = 0x10d778u;
    // NOP
label_10d77c:
    // 0x10d77c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d780:
    // 0x10d780: 0x0  nop
    ctx->pc = 0x10d780u;
    // NOP
label_10d784:
    // 0x10d784: 0x4502008c  bc1fl       . + 4 + (0x8C << 2)
label_10d788:
    if (ctx->pc == 0x10D788u) {
        ctx->pc = 0x10D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D784u;
        // 0x10d788: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D78Cu;
        goto label_10d78c;
    }
    ctx->pc = 0x10D784u;
    {
        const bool branch_taken_0x10d784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d784) {
            ctx->pc = 0x10D788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D784u;
            // 0x10d788: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D9B8u;
            goto label_10d9b8;
        }
    }
    ctx->pc = 0x10D78Cu;
label_10d78c:
    // 0x10d78c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10d790:
    // 0x10d790: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
label_10d794:
    if (ctx->pc == 0x10D794u) {
        ctx->pc = 0x10D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D790u;
        // 0x10d794: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D798u;
        goto label_10d798;
    }
    ctx->pc = 0x10D790u;
    {
        const bool branch_taken_0x10d790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d790) {
            ctx->pc = 0x10D794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D790u;
            // 0x10d794: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D9B8u;
            goto label_10d9b8;
        }
    }
    ctx->pc = 0x10D798u;
label_10d798:
    // 0x10d798: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10d79c:
    // 0x10d79c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_10d7a0:
    if (ctx->pc == 0x10D7A0u) {
        ctx->pc = 0x10D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D79Cu;
        // 0x10d7a0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7A4u;
        goto label_10d7a4;
    }
    ctx->pc = 0x10D79Cu;
    {
        const bool branch_taken_0x10d79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D79Cu;
        // 0x10d7a0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d79c) {
            ctx->pc = 0x10D824u;
            goto label_10d824;
        }
    }
    ctx->pc = 0x10D7A4u;
label_10d7a4:
    // 0x10d7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d7a8:
    // 0x10d7a8: 0x8e2405e8  lw          $a0, 0x5E8($s1)
    ctx->pc = 0x10d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d7ac:
    // 0x10d7ac: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x10d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_10d7b0:
    // 0x10d7b0: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_10d7b4:
    if (ctx->pc == 0x10D7B4u) {
        ctx->pc = 0x10D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7B0u;
        // 0x10d7b4: 0xae2315b4  sw          $v1, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7B8u;
        goto label_10d7b8;
    }
    ctx->pc = 0x10D7B0u;
    {
        const bool branch_taken_0x10d7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7B0u;
        // 0x10d7b4: 0xae2315b4  sw          $v1, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7b0) {
            ctx->pc = 0x10D804u;
            goto label_10d804;
        }
    }
    ctx->pc = 0x10D7B8u;
label_10d7b8:
    // 0x10d7b8: 0x2c820045  sltiu       $v0, $a0, 0x45
    ctx->pc = 0x10d7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
label_10d7bc:
    // 0x10d7bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10d7c0:
    if (ctx->pc == 0x10D7C0u) {
        ctx->pc = 0x10D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7BCu;
        // 0x10d7c0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7C4u;
        goto label_10d7c4;
    }
    ctx->pc = 0x10D7BCu;
    {
        const bool branch_taken_0x10d7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7BCu;
        // 0x10d7c0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7bc) {
            ctx->pc = 0x10D7D4u;
            goto label_10d7d4;
        }
    }
    ctx->pc = 0x10D7C4u;
label_10d7c4:
    // 0x10d7c4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_10d7c8:
    if (ctx->pc == 0x10D7C8u) {
        ctx->pc = 0x10D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7C4u;
        // 0x10d7c8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7CCu;
        goto label_10d7cc;
    }
    ctx->pc = 0x10D7C4u;
    {
        const bool branch_taken_0x10d7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7C4u;
        // 0x10d7c8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7c4) {
            ctx->pc = 0x10D7E0u;
            goto label_10d7e0;
        }
    }
    ctx->pc = 0x10D7CCu;
label_10d7cc:
    // 0x10d7cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_10d7d0:
    if (ctx->pc == 0x10D7D0u) {
        ctx->pc = 0x10D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7CCu;
        // 0x10d7d0: 0x8c6274a0  lw          $v0, 0x74A0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7D4u;
        goto label_10d7d4;
    }
    ctx->pc = 0x10D7CCu;
    {
        const bool branch_taken_0x10d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7CCu;
        // 0x10d7d0: 0x8c6274a0  lw          $v0, 0x74A0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7cc) {
            ctx->pc = 0x10D828u;
            goto label_10d828;
        }
    }
    ctx->pc = 0x10D7D4u;
label_10d7d4:
    // 0x10d7d4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x10d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_10d7d8:
    // 0x10d7d8: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_10d7dc:
    if (ctx->pc == 0x10D7DCu) {
        ctx->pc = 0x10D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7D8u;
        // 0x10d7dc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7E0u;
        goto label_10d7e0;
    }
    ctx->pc = 0x10D7D8u;
    {
        const bool branch_taken_0x10d7d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7D8u;
        // 0x10d7dc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7d8) {
            ctx->pc = 0x10D824u;
            goto label_10d824;
        }
    }
    ctx->pc = 0x10D7E0u;
label_10d7e0:
    // 0x10d7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d7e4:
    // 0x10d7e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d7e8:
    // 0x10d7e8: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x10d7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_10d7ec:
    // 0x10d7ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10d7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d7f0:
    // 0x10d7f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10d7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d7f4:
    // 0x10d7f4: 0xc0aa182  jal         func_2A8608
label_10d7f8:
    if (ctx->pc == 0x10D7F8u) {
        ctx->pc = 0x10D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7F4u;
        // 0x10d7f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D7FCu;
        goto label_10d7fc;
    }
    ctx->pc = 0x10D7F4u;
    SET_GPR_U32(ctx, 31, 0x10D7FCu);
    ctx->pc = 0x10D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7F4u;
    // 0x10d7f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x10D7F4u, 0x10D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7FCu;
label_10d7fc:
    // 0x10d7fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_10d800:
    if (ctx->pc == 0x10D800u) {
        ctx->pc = 0x10D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7FCu;
        // 0x10d800: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D804u;
        goto label_10d804;
    }
    ctx->pc = 0x10D7FCu;
    {
        const bool branch_taken_0x10d7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7FCu;
        // 0x10d800: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7fc) {
            ctx->pc = 0x10D824u;
            goto label_10d824;
        }
    }
    ctx->pc = 0x10D804u;
label_10d804:
    // 0x10d804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d808:
    // 0x10d808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d80c:
    // 0x10d80c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x10d80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_10d810:
    // 0x10d810: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10d810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d814:
    // 0x10d814: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10d814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d818:
    // 0x10d818: 0xc0aa182  jal         func_2A8608
label_10d81c:
    if (ctx->pc == 0x10D81Cu) {
        ctx->pc = 0x10D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D818u;
        // 0x10d81c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D820u;
        goto label_10d820;
    }
    ctx->pc = 0x10D818u;
    SET_GPR_U32(ctx, 31, 0x10D820u);
    ctx->pc = 0x10D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D818u;
    // 0x10d81c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x10D818u, 0x10D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D820u;
label_10d820:
    // 0x10d820: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x10d820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_10d824:
    // 0x10d824: 0x8c6274a0  lw          $v0, 0x74A0($v1)
    ctx->pc = 0x10d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29856)));
label_10d828:
    // 0x10d828: 0x304200d0  andi        $v0, $v0, 0xD0
    ctx->pc = 0x10d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)208);
label_10d82c:
    // 0x10d82c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_10d830:
    if (ctx->pc == 0x10D830u) {
        ctx->pc = 0x10D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D82Cu;
        // 0x10d830: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D834u;
        goto label_10d834;
    }
    ctx->pc = 0x10D82Cu;
    {
        const bool branch_taken_0x10d82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D82Cu;
        // 0x10d830: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d82c) {
            ctx->pc = 0x10D98Cu;
            goto label_10d98c;
        }
    }
    ctx->pc = 0x10D834u;
label_10d834:
    // 0x10d834: 0x8e2305e8  lw          $v1, 0x5E8($s1)
    ctx->pc = 0x10d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10d838:
    // 0x10d838: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_10d83c:
    if (ctx->pc == 0x10D83Cu) {
        ctx->pc = 0x10D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D838u;
        // 0x10d83c: 0x2c620064  sltiu       $v0, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D840u;
        goto label_10d840;
    }
    ctx->pc = 0x10D838u;
    {
        const bool branch_taken_0x10d838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D838u;
        // 0x10d83c: 0x2c620064  sltiu       $v0, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d838) {
            ctx->pc = 0x10D87Cu;
            goto label_10d87c;
        }
    }
    ctx->pc = 0x10D840u;
label_10d840:
    // 0x10d840: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10d844:
    if (ctx->pc == 0x10D844u) {
        ctx->pc = 0x10D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D840u;
        // 0x10d844: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D848u;
        goto label_10d848;
    }
    ctx->pc = 0x10D840u;
    {
        const bool branch_taken_0x10d840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D840u;
        // 0x10d844: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d840) {
            ctx->pc = 0x10D868u;
            goto label_10d868;
        }
    }
    ctx->pc = 0x10D848u;
label_10d848:
    // 0x10d848: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_10d84c:
    if (ctx->pc == 0x10D84Cu) {
        ctx->pc = 0x10D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D848u;
        // 0x10d84c: 0x2c620045  sltiu       $v0, $v1, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D850u;
        goto label_10d850;
    }
    ctx->pc = 0x10D848u;
    {
        const bool branch_taken_0x10d848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D848u;
        // 0x10d84c: 0x2c620045  sltiu       $v0, $v1, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d848) {
            ctx->pc = 0x10D890u;
            goto label_10d890;
        }
    }
    ctx->pc = 0x10D850u;
label_10d850:
    // 0x10d850: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_10d854:
    if (ctx->pc == 0x10D854u) {
        ctx->pc = 0x10D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D850u;
        // 0x10d854: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D858u;
        goto label_10d858;
    }
    ctx->pc = 0x10D850u;
    {
        const bool branch_taken_0x10d850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D850u;
        // 0x10d854: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d850) {
            ctx->pc = 0x10D87Cu;
            goto label_10d87c;
        }
    }
    ctx->pc = 0x10D858u;
label_10d858:
    // 0x10d858: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_10d85c:
    if (ctx->pc == 0x10D85Cu) {
        ctx->pc = 0x10D860u;
        goto label_10d860;
    }
    ctx->pc = 0x10D858u;
    {
        const bool branch_taken_0x10d858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10d858) {
            ctx->pc = 0x10D8C0u;
            goto label_10d8c0;
        }
    }
    ctx->pc = 0x10D860u;
label_10d860:
    // 0x10d860: 0x10000006  b           . + 4 + (0x6 << 2)
label_10d864:
    if (ctx->pc == 0x10D864u) {
        ctx->pc = 0x10D868u;
        goto label_10d868;
    }
    ctx->pc = 0x10D860u;
    {
        const bool branch_taken_0x10d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d860) {
            ctx->pc = 0x10D87Cu;
            goto label_10d87c;
        }
    }
    ctx->pc = 0x10D868u;
label_10d868:
    // 0x10d868: 0x2c620072  sltiu       $v0, $v1, 0x72
    ctx->pc = 0x10d868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
label_10d86c:
    // 0x10d86c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10d870:
    if (ctx->pc == 0x10D870u) {
        ctx->pc = 0x10D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D86Cu;
        // 0x10d870: 0x2c62006e  sltiu       $v0, $v1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D874u;
        goto label_10d874;
    }
    ctx->pc = 0x10D86Cu;
    {
        const bool branch_taken_0x10d86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D86Cu;
        // 0x10d870: 0x2c62006e  sltiu       $v0, $v1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d86c) {
            ctx->pc = 0x10D87Cu;
            goto label_10d87c;
        }
    }
    ctx->pc = 0x10D874u;
label_10d874:
    // 0x10d874: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_10d878:
    if (ctx->pc == 0x10D878u) {
        ctx->pc = 0x10D87Cu;
        goto label_10d87c;
    }
    ctx->pc = 0x10D874u;
    {
        const bool branch_taken_0x10d874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d874) {
            ctx->pc = 0x10D8C0u;
            goto label_10d8c0;
        }
    }
    ctx->pc = 0x10D87Cu;
label_10d87c:
    // 0x10d87c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x10d87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_10d880:
    // 0x10d880: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10d880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10d884:
    // 0x10d884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d888:
    // 0x10d888: 0x10000011  b           . + 4 + (0x11 << 2)
label_10d88c:
    if (ctx->pc == 0x10D88Cu) {
        ctx->pc = 0x10D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D888u;
        // 0x10d88c: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D890u;
        goto label_10d890;
    }
    ctx->pc = 0x10D888u;
    {
        const bool branch_taken_0x10d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D888u;
        // 0x10d88c: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d888) {
            ctx->pc = 0x10D8D0u;
            goto label_10d8d0;
        }
    }
    ctx->pc = 0x10D890u;
label_10d890:
    // 0x10d890: 0xc62015c4  lwc1        $f0, 0x15C4($s1)
    ctx->pc = 0x10d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d894:
    // 0x10d894: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x10d894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_10d898:
    // 0x10d898: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10d898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10d89c:
    // 0x10d89c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d8a0:
    // 0x10d8a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10d8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_10d8a4:
    // 0x10d8a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10d8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10d8a8:
    // 0x10d8a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10d8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10d8ac:
    // 0x10d8ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x10d8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10d8b0:
    // 0x10d8b0: 0xe62205dc  swc1        $f2, 0x5DC($s1)
    ctx->pc = 0x10d8b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_10d8b4:
    // 0x10d8b4: 0xe62205a8  swc1        $f2, 0x5A8($s1)
    ctx->pc = 0x10d8b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_10d8b8:
    // 0x10d8b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_10d8bc:
    if (ctx->pc == 0x10D8BCu) {
        ctx->pc = 0x10D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8B8u;
        // 0x10d8bc: 0xe62015c4  swc1        $f0, 0x15C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D8C0u;
        goto label_10d8c0;
    }
    ctx->pc = 0x10D8B8u;
    {
        const bool branch_taken_0x10d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8B8u;
        // 0x10d8bc: 0xe62015c4  swc1        $f0, 0x15C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8b8) {
            ctx->pc = 0x10D8E0u;
            goto label_10d8e0;
        }
    }
    ctx->pc = 0x10D8C0u;
label_10d8c0:
    // 0x10d8c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10d8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_10d8c4:
    // 0x10d8c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10d8c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10d8c8:
    // 0x10d8c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d8cc:
    // 0x10d8cc: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d8d0:
    // 0x10d8d0: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x10d8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_10d8d4:
    // 0x10d8d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10d8d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10d8d8:
    // 0x10d8d8: 0xe62005dc  swc1        $f0, 0x5DC($s1)
    ctx->pc = 0x10d8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_10d8dc:
    // 0x10d8dc: 0xe62115c4  swc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10d8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
label_10d8e0:
    // 0x10d8e0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x10d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10d8e4:
    // 0x10d8e4: 0xc0560a2  jal         func_158288
label_10d8e8:
    if (ctx->pc == 0x10D8E8u) {
        ctx->pc = 0x10D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8E4u;
        // 0x10d8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D8ECu;
        goto label_10d8ec;
    }
    ctx->pc = 0x10D8E4u;
    SET_GPR_U32(ctx, 31, 0x10D8ECu);
    ctx->pc = 0x10D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D8E4u;
    // 0x10d8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10D8E4u, 0x10D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8ECu;
label_10d8ec:
    // 0x10d8ec: 0xc62215c0  lwc1        $f2, 0x15C0($s1)
    ctx->pc = 0x10d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10d8f0:
    // 0x10d8f0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x10d8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_10d8f4:
    // 0x10d8f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10d8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10d8f8:
    // 0x10d8f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d8fc:
    // 0x10d8fc: 0xc62315c4  lwc1        $f3, 0x15C4($s1)
    ctx->pc = 0x10d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_10d900:
    // 0x10d900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d904:
    // 0x10d904: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x10d904u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_10d908:
    // 0x10d908: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x10d908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d90c:
    // 0x10d90c: 0x0  nop
    ctx->pc = 0x10d90cu;
    // NOP
label_10d910:
    // 0x10d910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_10d914:
    if (ctx->pc == 0x10D914u) {
        ctx->pc = 0x10D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D910u;
        // 0x10d914: 0xe62215c0  swc1        $f2, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D918u;
        goto label_10d918;
    }
    ctx->pc = 0x10D910u;
    {
        const bool branch_taken_0x10d910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D910u;
        // 0x10d914: 0xe62215c0  swc1        $f2, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d910) {
            ctx->pc = 0x10D92Cu;
            goto label_10d92c;
        }
    }
    ctx->pc = 0x10D918u;
label_10d918:
    // 0x10d918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10d91c:
    // 0x10d91c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d920:
    // 0x10d920: 0x0  nop
    ctx->pc = 0x10d920u;
    // NOP
label_10d924:
    // 0x10d924: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x10d924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_10d928:
    // 0x10d928: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10d92c:
    // 0x10d92c: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x10d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d930:
    // 0x10d930: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x10d930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_10d934:
    // 0x10d934: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10d934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10d938:
    // 0x10d938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d93c:
    // 0x10d93c: 0x0  nop
    ctx->pc = 0x10d93cu;
    // NOP
label_10d940:
    // 0x10d940: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10d940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d944:
    // 0x10d944: 0x0  nop
    ctx->pc = 0x10d944u;
    // NOP
label_10d948:
    // 0x10d948: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_10d94c:
    if (ctx->pc == 0x10D94Cu) {
        ctx->pc = 0x10D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D948u;
        // 0x10d94c: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D950u;
        goto label_10d950;
    }
    ctx->pc = 0x10D948u;
    {
        const bool branch_taken_0x10d948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d948) {
            ctx->pc = 0x10D94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D948u;
            // 0x10d94c: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D998u;
            goto label_10d998;
        }
    }
    ctx->pc = 0x10D950u;
label_10d950:
    // 0x10d950: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x10d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_10d954:
    // 0x10d954: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_10d958:
    if (ctx->pc == 0x10D958u) {
        ctx->pc = 0x10D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D954u;
        // 0x10d958: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D95Cu;
        goto label_10d95c;
    }
    ctx->pc = 0x10D954u;
    {
        const bool branch_taken_0x10d954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D954u;
        // 0x10d958: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d954) {
            ctx->pc = 0x10D994u;
            goto label_10d994;
        }
    }
    ctx->pc = 0x10D95Cu;
label_10d95c:
    // 0x10d95c: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x10d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_10d960:
    // 0x10d960: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10d960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_10d964:
    // 0x10d964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d968:
    // 0x10d968: 0x2406011b  addiu       $a2, $zero, 0x11B
    ctx->pc = 0x10d968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_10d96c:
    // 0x10d96c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10d96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d970:
    // 0x10d970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10d970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d974:
    // 0x10d974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d978:
    // 0x10d978: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10d978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d97c:
    // 0x10d97c: 0xc0b2e92  jal         func_2CBA48
label_10d980:
    if (ctx->pc == 0x10D980u) {
        ctx->pc = 0x10D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D97Cu;
        // 0x10d980: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D984u;
        goto label_10d984;
    }
    ctx->pc = 0x10D97Cu;
    SET_GPR_U32(ctx, 31, 0x10D984u);
    ctx->pc = 0x10D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D97Cu;
    // 0x10d980: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10D97Cu, 0x10D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D984u;
label_10d984:
    // 0x10d984: 0x10000003  b           . + 4 + (0x3 << 2)
label_10d988:
    if (ctx->pc == 0x10D988u) {
        ctx->pc = 0x10D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D984u;
        // 0x10d988: 0xae221620  sw          $v0, 0x1620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D98Cu;
        goto label_10d98c;
    }
    ctx->pc = 0x10D984u;
    {
        const bool branch_taken_0x10d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D984u;
        // 0x10d988: 0xae221620  sw          $v0, 0x1620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d984) {
            ctx->pc = 0x10D994u;
            goto label_10d994;
        }
    }
    ctx->pc = 0x10D98Cu;
label_10d98c:
    // 0x10d98c: 0xae2015c4  sw          $zero, 0x15C4($s1)
    ctx->pc = 0x10d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5572), GPR_U32(ctx, 0));
label_10d990:
    // 0x10d990: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x10d990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
label_10d994:
    // 0x10d994: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d998:
    // 0x10d998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d99c:
    // 0x10d99c: 0x0  nop
    ctx->pc = 0x10d99cu;
    // NOP
label_10d9a0:
    // 0x10d9a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10d9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d9a4:
    // 0x10d9a4: 0x0  nop
    ctx->pc = 0x10d9a4u;
    // NOP
label_10d9a8:
    // 0x10d9a8: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_10d9ac:
    if (ctx->pc == 0x10D9ACu) {
        ctx->pc = 0x10D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9A8u;
        // 0x10d9ac: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D9B0u;
        goto label_10d9b0;
    }
    ctx->pc = 0x10D9A8u;
    {
        const bool branch_taken_0x10d9a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d9a8) {
            ctx->pc = 0x10D9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D9A8u;
            // 0x10d9ac: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DAC0u;
            goto label_10dac0;
        }
    }
    ctx->pc = 0x10D9B0u;
label_10d9b0:
    // 0x10d9b0: 0x10000043  b           . + 4 + (0x43 << 2)
label_10d9b4:
    if (ctx->pc == 0x10D9B4u) {
        ctx->pc = 0x10D9B8u;
        goto label_10d9b8;
    }
    ctx->pc = 0x10D9B0u;
    {
        const bool branch_taken_0x10d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d9b0) {
            ctx->pc = 0x10DAC0u;
            goto label_10dac0;
        }
    }
    ctx->pc = 0x10D9B8u;
label_10d9b8:
    // 0x10d9b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_10d9bc:
    // 0x10d9bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_10d9c0:
    if (ctx->pc == 0x10D9C0u) {
        ctx->pc = 0x10D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9BCu;
        // 0x10d9c0: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D9C4u;
        goto label_10d9c4;
    }
    ctx->pc = 0x10D9BCu;
    {
        const bool branch_taken_0x10d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d9bc) {
            ctx->pc = 0x10D9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D9BCu;
            // 0x10d9c0: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D9E0u;
            goto label_10d9e0;
        }
    }
    ctx->pc = 0x10D9C4u;
label_10d9c4:
    // 0x10d9c4: 0xc0b6dac  jal         func_2DB6B0
label_10d9c8:
    if (ctx->pc == 0x10D9C8u) {
        ctx->pc = 0x10D9CCu;
        goto label_10d9cc;
    }
    ctx->pc = 0x10D9C4u;
    SET_GPR_U32(ctx, 31, 0x10D9CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10D9C4u, 0x10D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9CCu;
label_10d9cc:
    // 0x10d9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d9d0:
    // 0x10d9d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10d9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d9d4:
    // 0x10d9d4: 0xc0c1880  jal         func_306200
label_10d9d8:
    if (ctx->pc == 0x10D9D8u) {
        ctx->pc = 0x10D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9D4u;
        // 0x10d9d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D9DCu;
        goto label_10d9dc;
    }
    ctx->pc = 0x10D9D4u;
    SET_GPR_U32(ctx, 31, 0x10D9DCu);
    ctx->pc = 0x10D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9D4u;
    // 0x10d9d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x10D9D4u, 0x10D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9DCu;
label_10d9dc:
    // 0x10d9dc: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10d9e0:
    // 0x10d9e0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_10d9e4:
    if (ctx->pc == 0x10D9E4u) {
        ctx->pc = 0x10D9E8u;
        goto label_10d9e8;
    }
    ctx->pc = 0x10D9E0u;
    {
        const bool branch_taken_0x10d9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d9e0) {
            ctx->pc = 0x10DAC0u;
            goto label_10dac0;
        }
    }
    ctx->pc = 0x10D9E8u;
label_10d9e8:
    // 0x10d9e8: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x10d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d9ec:
    // 0x10d9ec: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10d9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_10d9f0:
    // 0x10d9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10d9f4:
    // 0x10d9f4: 0x0  nop
    ctx->pc = 0x10d9f4u;
    // NOP
label_10d9f8:
    // 0x10d9f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10d9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d9fc:
    // 0x10d9fc: 0x0  nop
    ctx->pc = 0x10d9fcu;
    // NOP
label_10da00:
    // 0x10da00: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_10da04:
    if (ctx->pc == 0x10DA04u) {
        ctx->pc = 0x10DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA00u;
        // 0x10da04: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DA08u;
        goto label_10da08;
    }
    ctx->pc = 0x10DA00u;
    {
        const bool branch_taken_0x10da00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA00u;
        // 0x10da04: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da00) {
            ctx->pc = 0x10DAACu;
            goto label_10daac;
        }
    }
    ctx->pc = 0x10DA08u;
label_10da08:
    // 0x10da08: 0x8e2205e8  lw          $v0, 0x5E8($s1)
    ctx->pc = 0x10da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10da0c:
    // 0x10da0c: 0x2444ffd2  addiu       $a0, $v0, -0x2E
    ctx->pc = 0x10da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967250));
label_10da10:
    // 0x10da10: 0x2c830044  sltiu       $v1, $a0, 0x44
    ctx->pc = 0x10da10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)68) ? 1 : 0);
label_10da14:
    // 0x10da14: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_10da18:
    if (ctx->pc == 0x10DA18u) {
        ctx->pc = 0x10DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA14u;
        // 0x10da18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DA1Cu;
        goto label_10da1c;
    }
    ctx->pc = 0x10DA14u;
    {
        const bool branch_taken_0x10da14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA14u;
        // 0x10da18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da14) {
            ctx->pc = 0x10DAACu;
            goto label_10daac;
        }
    }
    ctx->pc = 0x10DA1Cu;
label_10da1c:
    // 0x10da1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10da20:
    // 0x10da20: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x10da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
label_10da24:
    // 0x10da24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10da28:
    // 0x10da28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10da2c:
    // 0x10da2c: 0x800008  jr          $a0
label_10da30:
    if (ctx->pc == 0x10DA30u) {
        ctx->pc = 0x10DA34u;
        goto label_10da34;
    }
    ctx->pc = 0x10DA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10DA34u: goto label_10da34;
            case 0x10DA74u: goto label_10da74;
            case 0x10DAACu: goto label_10daac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DA2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10DA34u;
label_10da34:
    // 0x10da34: 0xc0b6dac  jal         func_2DB6B0
label_10da38:
    if (ctx->pc == 0x10DA38u) {
        ctx->pc = 0x10DA3Cu;
        goto label_10da3c;
    }
    ctx->pc = 0x10DA34u;
    SET_GPR_U32(ctx, 31, 0x10DA3Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10DA34u, 0x10DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA3Cu;
label_10da3c:
    // 0x10da3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10da3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10da40:
    // 0x10da40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10da44:
    // 0x10da44: 0xc0c1880  jal         func_306200
label_10da48:
    if (ctx->pc == 0x10DA48u) {
        ctx->pc = 0x10DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA44u;
        // 0x10da48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DA4Cu;
        goto label_10da4c;
    }
    ctx->pc = 0x10DA44u;
    SET_GPR_U32(ctx, 31, 0x10DA4Cu);
    ctx->pc = 0x10DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA44u;
    // 0x10da48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x10DA44u, 0x10DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA4Cu;
label_10da4c:
    // 0x10da4c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10da4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_10da50:
    // 0x10da50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10da54:
    // 0x10da54: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x10da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_10da58:
    // 0x10da58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10da58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10da5c:
    // 0x10da5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10da5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10da60:
    // 0x10da60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10da64:
    // 0x10da64: 0xc0c194a  jal         func_306528
label_10da68:
    if (ctx->pc == 0x10DA68u) {
        ctx->pc = 0x10DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA64u;
        // 0x10da68: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DA6Cu;
        goto label_10da6c;
    }
    ctx->pc = 0x10DA64u;
    SET_GPR_U32(ctx, 31, 0x10DA6Cu);
    ctx->pc = 0x10DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA64u;
    // 0x10da68: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10DA64u, 0x10DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA6Cu;
label_10da6c:
    // 0x10da6c: 0x10000010  b           . + 4 + (0x10 << 2)
label_10da70:
    if (ctx->pc == 0x10DA70u) {
        ctx->pc = 0x10DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA6Cu;
        // 0x10da70: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DA74u;
        goto label_10da74;
    }
    ctx->pc = 0x10DA6Cu;
    {
        const bool branch_taken_0x10da6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA6Cu;
        // 0x10da70: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da6c) {
            ctx->pc = 0x10DAB0u;
            goto label_10dab0;
        }
    }
    ctx->pc = 0x10DA74u;
label_10da74:
    // 0x10da74: 0xc0b6dac  jal         func_2DB6B0
label_10da78:
    if (ctx->pc == 0x10DA78u) {
        ctx->pc = 0x10DA7Cu;
        goto label_10da7c;
    }
    ctx->pc = 0x10DA74u;
    SET_GPR_U32(ctx, 31, 0x10DA7Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10DA74u, 0x10DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA7Cu;
label_10da7c:
    // 0x10da7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10da7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10da80:
    // 0x10da80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10da84:
    // 0x10da84: 0xc0c1880  jal         func_306200
label_10da88:
    if (ctx->pc == 0x10DA88u) {
        ctx->pc = 0x10DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA84u;
        // 0x10da88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DA8Cu;
        goto label_10da8c;
    }
    ctx->pc = 0x10DA84u;
    SET_GPR_U32(ctx, 31, 0x10DA8Cu);
    ctx->pc = 0x10DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA84u;
    // 0x10da88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x10DA84u, 0x10DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA8Cu;
label_10da8c:
    // 0x10da8c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10da8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_10da90:
    // 0x10da90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10da90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10da94:
    // 0x10da94: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x10da94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_10da98:
    // 0x10da98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10da98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10da9c:
    // 0x10da9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10da9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10daa0:
    // 0x10daa0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10daa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10daa4:
    // 0x10daa4: 0xc0c194a  jal         func_306528
label_10daa8:
    if (ctx->pc == 0x10DAA8u) {
        ctx->pc = 0x10DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAA4u;
        // 0x10daa8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DAACu;
        goto label_10daac;
    }
    ctx->pc = 0x10DAA4u;
    SET_GPR_U32(ctx, 31, 0x10DAACu);
    ctx->pc = 0x10DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAA4u;
    // 0x10daa8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10DAA4u, 0x10DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAACu;
label_10daac:
    // 0x10daac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10daacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_10dab0:
    // 0x10dab0: 0x8e251620  lw          $a1, 0x1620($s1)
    ctx->pc = 0x10dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5664)));
label_10dab4:
    // 0x10dab4: 0xc0b2ee8  jal         func_2CBBA0
label_10dab8:
    if (ctx->pc == 0x10DAB8u) {
        ctx->pc = 0x10DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAB4u;
        // 0x10dab8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DABCu;
        goto label_10dabc;
    }
    ctx->pc = 0x10DAB4u;
    SET_GPR_U32(ctx, 31, 0x10DABCu);
    ctx->pc = 0x10DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAB4u;
    // 0x10dab8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x10DAB4u, 0x10DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DABCu;
label_10dabc:
    // 0x10dabc: 0xae201620  sw          $zero, 0x1620($s1)
    ctx->pc = 0x10dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
label_10dac0:
    // 0x10dac0: 0xc055f06  jal         func_157C18
label_10dac4:
    if (ctx->pc == 0x10DAC4u) {
        ctx->pc = 0x10DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAC0u;
        // 0x10dac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DAC8u;
        goto label_10dac8;
    }
    ctx->pc = 0x10DAC0u;
    SET_GPR_U32(ctx, 31, 0x10DAC8u);
    ctx->pc = 0x10DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAC0u;
    // 0x10dac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10DAC0u, 0x10DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAC8u;
label_10dac8:
    // 0x10dac8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10dacc:
    if (ctx->pc == 0x10DACCu) {
        ctx->pc = 0x10DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAC8u;
        // 0x10dacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DAD0u;
        goto label_10dad0;
    }
    ctx->pc = 0x10DAC8u;
    {
        const bool branch_taken_0x10dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAC8u;
        // 0x10dacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dac8) {
            ctx->pc = 0x10DAECu;
            goto label_10daec;
        }
    }
    ctx->pc = 0x10DAD0u;
label_10dad0:
    // 0x10dad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10dad4:
    // 0x10dad4: 0xc0493d8  jal         func_124F60
label_10dad8:
    if (ctx->pc == 0x10DAD8u) {
        ctx->pc = 0x10DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAD4u;
        // 0x10dad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DADCu;
        goto label_10dadc;
    }
    ctx->pc = 0x10DAD4u;
    SET_GPR_U32(ctx, 31, 0x10DADCu);
    ctx->pc = 0x10DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAD4u;
    // 0x10dad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10DAD4u, 0x10DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DADCu;
label_10dadc:
    // 0x10dadc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10dadcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10dae0:
    // 0x10dae0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10dae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_10dae4:
    // 0x10dae4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10dae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10dae8:
    // 0x10dae8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10dae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10daec:
    // 0x10daec: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x10daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10daf0:
    // 0x10daf0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x10daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_10daf4:
    // 0x10daf4: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x10daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10daf8:
    // 0x10daf8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10daf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_10dafc:
    // 0x10dafc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10dafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_10db00:
    // 0x10db00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10db00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10db04:
    // 0x10db04: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x10db04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10db08:
    // 0x10db08: 0x8e2205e8  lw          $v0, 0x5E8($s1)
    ctx->pc = 0x10db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10db0c:
    // 0x10db0c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x10db0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_10db10:
    // 0x10db10: 0xe6220338  swc1        $f2, 0x338($s1)
    ctx->pc = 0x10db10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_10db14:
    // 0x10db14: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_10db18:
    if (ctx->pc == 0x10DB18u) {
        ctx->pc = 0x10DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB14u;
        // 0x10db18: 0xe6201588  swc1        $f0, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB1Cu;
        goto label_10db1c;
    }
    ctx->pc = 0x10DB14u;
    {
        const bool branch_taken_0x10db14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB14u;
        // 0x10db18: 0xe6201588  swc1        $f0, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db14) {
            ctx->pc = 0x10DB40u;
            goto label_10db40;
        }
    }
    ctx->pc = 0x10DB1Cu;
label_10db1c:
    // 0x10db1c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10db1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10db20:
    // 0x10db20: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x10db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_10db24:
    // 0x10db24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_10db28:
    if (ctx->pc == 0x10DB28u) {
        ctx->pc = 0x10DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB24u;
        // 0x10db28: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB2Cu;
        goto label_10db2c;
    }
    ctx->pc = 0x10DB24u;
    {
        const bool branch_taken_0x10db24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10db24) {
            ctx->pc = 0x10DB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DB24u;
            // 0x10db28: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DB44u;
            goto label_10db44;
        }
    }
    ctx->pc = 0x10DB2Cu;
label_10db2c:
    // 0x10db2c: 0xc6201598  lwc1        $f0, 0x1598($s1)
    ctx->pc = 0x10db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10db30:
    // 0x10db30: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x10db30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_10db34:
    // 0x10db34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x10db34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_10db38:
    // 0x10db38: 0xe6211598  swc1        $f1, 0x1598($s1)
    ctx->pc = 0x10db38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5528), bits); }
label_10db3c:
    // 0x10db3c: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x10db3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_10db40:
    // 0x10db40: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10db40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10db44:
    // 0x10db44: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_10db48:
    if (ctx->pc == 0x10DB48u) {
        ctx->pc = 0x10DB4Cu;
        goto label_10db4c;
    }
    ctx->pc = 0x10DB44u;
    {
        const bool branch_taken_0x10db44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10db44) {
            ctx->pc = 0x10DBA4u;
            goto label_10dba4;
        }
    }
    ctx->pc = 0x10DB4Cu;
label_10db4c:
    // 0x10db4c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x10db4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_10db50:
    // 0x10db50: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_10db54:
    if (ctx->pc == 0x10DB54u) {
        ctx->pc = 0x10DB58u;
        goto label_10db58;
    }
    ctx->pc = 0x10DB50u;
    {
        const bool branch_taken_0x10db50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10db50) {
            ctx->pc = 0x10DBA4u;
            goto label_10dba4;
        }
    }
    ctx->pc = 0x10DB58u;
label_10db58:
    // 0x10db58: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10db58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10db5c:
    // 0x10db5c: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10db5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10db60:
    // 0x10db60: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10db60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10db64:
    // 0x10db64: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10db68:
    // 0x10db68: 0x40f809  jalr        $v0
label_10db6c:
    if (ctx->pc == 0x10DB6Cu) {
        ctx->pc = 0x10DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB68u;
        // 0x10db6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB70u;
        goto label_10db70;
    }
    ctx->pc = 0x10DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10DB70u);
        ctx->pc = 0x10DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB68u;
        // 0x10db6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB68u, 0x10DB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DB70u;
label_10db70:
    // 0x10db70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10db74:
    // 0x10db74: 0xc07dfac  jal         func_1F7EB0
label_10db78:
    if (ctx->pc == 0x10DB78u) {
        ctx->pc = 0x10DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB74u;
        // 0x10db78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB7Cu;
        goto label_10db7c;
    }
    ctx->pc = 0x10DB74u;
    SET_GPR_U32(ctx, 31, 0x10DB7Cu);
    ctx->pc = 0x10DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB74u;
    // 0x10db78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x10DB74u, 0x10DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB7Cu;
label_10db7c:
    // 0x10db7c: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x10db7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_10db80:
    // 0x10db80: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x10db80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_10db84:
    // 0x10db84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10db84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10db88:
    // 0x10db88: 0x0  nop
    ctx->pc = 0x10db88u;
    // NOP
label_10db8c:
    // 0x10db8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10db8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10db90:
    // 0x10db90: 0x0  nop
    ctx->pc = 0x10db90u;
    // NOP
label_10db94:
    // 0x10db94: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_10db98:
    if (ctx->pc == 0x10DB98u) {
        ctx->pc = 0x10DB9Cu;
        goto label_10db9c;
    }
    ctx->pc = 0x10DB94u;
    {
        const bool branch_taken_0x10db94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10db94) {
            ctx->pc = 0x10DBA4u;
            goto label_10dba4;
        }
    }
    ctx->pc = 0x10DB9Cu;
label_10db9c:
    // 0x10db9c: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x10db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_10dba0:
    // 0x10dba0: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x10dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_10dba4:
    // 0x10dba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10dba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10dba8:
    // 0x10dba8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10dba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10dbac:
    // 0x10dbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dbb0:
    // 0x10dbb0: 0xc053e7c  jal         func_14F9F0
label_10dbb4:
    if (ctx->pc == 0x10DBB4u) {
        ctx->pc = 0x10DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBB0u;
        // 0x10dbb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBB8u;
        goto label_10dbb8;
    }
    ctx->pc = 0x10DBB0u;
    SET_GPR_U32(ctx, 31, 0x10DBB8u);
    ctx->pc = 0x10DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBB0u;
    // 0x10dbb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10DBB0u, 0x10DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBB8u;
label_10dbb8:
    // 0x10dbb8: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x10dbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_10dbbc:
    // 0x10dbbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10dbc0:
    if (ctx->pc == 0x10DBC0u) {
        ctx->pc = 0x10DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBBCu;
        // 0x10dbc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBC4u;
        goto label_10dbc4;
    }
    ctx->pc = 0x10DBBCu;
    {
        const bool branch_taken_0x10dbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBBCu;
        // 0x10dbc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbbc) {
            ctx->pc = 0x10DBDCu;
            goto label_10dbdc;
        }
    }
    ctx->pc = 0x10DBC4u;
label_10dbc4:
    // 0x10dbc4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10dbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_10dbc8:
    // 0x10dbc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10dbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10dbcc:
    // 0x10dbcc: 0xc053e4a  jal         func_14F928
label_10dbd0:
    if (ctx->pc == 0x10DBD0u) {
        ctx->pc = 0x10DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBCCu;
        // 0x10dbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBD4u;
        goto label_10dbd4;
    }
    ctx->pc = 0x10DBCCu;
    SET_GPR_U32(ctx, 31, 0x10DBD4u);
    ctx->pc = 0x10DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBCCu;
    // 0x10dbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10DBCCu, 0x10DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBD4u;
label_10dbd4:
    // 0x10dbd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_10dbd8:
    if (ctx->pc == 0x10DBD8u) {
        ctx->pc = 0x10DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBD4u;
        // 0x10dbd8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBDCu;
        goto label_10dbdc;
    }
    ctx->pc = 0x10DBD4u;
    {
        const bool branch_taken_0x10dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBD4u;
        // 0x10dbd8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbd4) {
            ctx->pc = 0x10DBE8u;
            goto label_10dbe8;
        }
    }
    ctx->pc = 0x10DBDCu;
label_10dbdc:
    // 0x10dbdc: 0xc053e4a  jal         func_14F928
label_10dbe0:
    if (ctx->pc == 0x10DBE0u) {
        ctx->pc = 0x10DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBDCu;
        // 0x10dbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBE4u;
        goto label_10dbe4;
    }
    ctx->pc = 0x10DBDCu;
    SET_GPR_U32(ctx, 31, 0x10DBE4u);
    ctx->pc = 0x10DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBDCu;
    // 0x10dbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10DBDCu, 0x10DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBE4u;
label_10dbe4:
    // 0x10dbe4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10dbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10dbe8:
    // 0x10dbe8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x10dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_10dbec:
    // 0x10dbec: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_10dbf0:
    if (ctx->pc == 0x10DBF0u) {
        ctx->pc = 0x10DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBECu;
        // 0x10dbf0: 0xc62015c0  lwc1        $f0, 0x15C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBF4u;
        goto label_10dbf4;
    }
    ctx->pc = 0x10DBECu;
    {
        const bool branch_taken_0x10dbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dbec) {
            ctx->pc = 0x10DBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DBECu;
            // 0x10dbf0: 0xc62015c0  lwc1        $f0, 0x15C0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DC18u;
            goto label_10dc18;
        }
    }
    ctx->pc = 0x10DBF4u;
label_10dbf4:
    // 0x10dbf4: 0x862205f0  lh          $v0, 0x5F0($s1)
    ctx->pc = 0x10dbf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1520)));
label_10dbf8:
    // 0x10dbf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10dbfc:
    if (ctx->pc == 0x10DBFCu) {
        ctx->pc = 0x10DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF8u;
        // 0x10dbfc: 0x962305f0  lhu         $v1, 0x5F0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC00u;
        goto label_10dc00;
    }
    ctx->pc = 0x10DBF8u;
    {
        const bool branch_taken_0x10dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF8u;
        // 0x10dbfc: 0x962305f0  lhu         $v1, 0x5F0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf8) {
            ctx->pc = 0x10DC0Cu;
            goto label_10dc0c;
        }
    }
    ctx->pc = 0x10DC00u;
label_10dc00:
    // 0x10dc00: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10dc04:
    // 0x10dc04: 0x10000003  b           . + 4 + (0x3 << 2)
label_10dc08:
    if (ctx->pc == 0x10DC08u) {
        ctx->pc = 0x10DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC04u;
        // 0x10dc08: 0xa62205f0  sh          $v0, 0x5F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC0Cu;
        goto label_10dc0c;
    }
    ctx->pc = 0x10DC04u;
    {
        const bool branch_taken_0x10dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC04u;
        // 0x10dc08: 0xa62205f0  sh          $v0, 0x5F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc04) {
            ctx->pc = 0x10DC14u;
            goto label_10dc14;
        }
    }
    ctx->pc = 0x10DC0Cu;
label_10dc0c:
    // 0x10dc0c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10dc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10dc10:
    // 0x10dc10: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10dc10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_10dc14:
    // 0x10dc14: 0xc62015c0  lwc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10dc18:
    // 0x10dc18: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x10dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_10dc1c:
    // 0x10dc1c: 0x8e2305e8  lw          $v1, 0x5E8($s1)
    ctx->pc = 0x10dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10dc20:
    // 0x10dc20: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_10dc24:
    if (ctx->pc == 0x10DC24u) {
        ctx->pc = 0x10DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC20u;
        // 0x10dc24: 0xe6201610  swc1        $f0, 0x1610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5648), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC28u;
        goto label_10dc28;
    }
    ctx->pc = 0x10DC20u;
    {
        const bool branch_taken_0x10dc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC20u;
        // 0x10dc24: 0xe6201610  swc1        $f0, 0x1610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc20) {
            ctx->pc = 0x10DC68u;
            goto label_10dc68;
        }
    }
    ctx->pc = 0x10DC28u;
label_10dc28:
    // 0x10dc28: 0x2c620064  sltiu       $v0, $v1, 0x64
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_10dc2c:
    // 0x10dc2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10dc30:
    if (ctx->pc == 0x10DC30u) {
        ctx->pc = 0x10DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC2Cu;
        // 0x10dc30: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC34u;
        goto label_10dc34;
    }
    ctx->pc = 0x10DC2Cu;
    {
        const bool branch_taken_0x10dc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC2Cu;
        // 0x10dc30: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc2c) {
            ctx->pc = 0x10DC4Cu;
            goto label_10dc4c;
        }
    }
    ctx->pc = 0x10DC34u;
label_10dc34:
    // 0x10dc34: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_10dc38:
    if (ctx->pc == 0x10DC38u) {
        ctx->pc = 0x10DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC34u;
        // 0x10dc38: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC3Cu;
        goto label_10dc3c;
    }
    ctx->pc = 0x10DC34u;
    {
        const bool branch_taken_0x10dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC34u;
        // 0x10dc38: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc34) {
            ctx->pc = 0x10DC68u;
            goto label_10dc68;
        }
    }
    ctx->pc = 0x10DC3Cu;
label_10dc3c:
    // 0x10dc3c: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
label_10dc40:
    if (ctx->pc == 0x10DC40u) {
        ctx->pc = 0x10DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC3Cu;
        // 0x10dc40: 0x8e251668  lw          $a1, 0x1668($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC44u;
        goto label_10dc44;
    }
    ctx->pc = 0x10DC3Cu;
    {
        const bool branch_taken_0x10dc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10dc3c) {
            ctx->pc = 0x10DC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DC3Cu;
            // 0x10dc40: 0x8e251668  lw          $a1, 0x1668($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DCC4u;
            goto label_10dcc4;
        }
    }
    ctx->pc = 0x10DC44u;
label_10dc44:
    // 0x10dc44: 0x10000056  b           . + 4 + (0x56 << 2)
label_10dc48:
    if (ctx->pc == 0x10DC48u) {
        ctx->pc = 0x10DC4Cu;
        goto label_10dc4c;
    }
    ctx->pc = 0x10DC44u;
    {
        const bool branch_taken_0x10dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc44) {
            ctx->pc = 0x10DDA0u;
            goto label_10dda0;
        }
    }
    ctx->pc = 0x10DC4Cu;
label_10dc4c:
    // 0x10dc4c: 0x2c620072  sltiu       $v0, $v1, 0x72
    ctx->pc = 0x10dc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
label_10dc50:
    // 0x10dc50: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_10dc54:
    if (ctx->pc == 0x10DC54u) {
        ctx->pc = 0x10DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC50u;
        // 0x10dc54: 0x2c62006e  sltiu       $v0, $v1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC58u;
        goto label_10dc58;
    }
    ctx->pc = 0x10DC50u;
    {
        const bool branch_taken_0x10dc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC50u;
        // 0x10dc54: 0x2c62006e  sltiu       $v0, $v1, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc50) {
            ctx->pc = 0x10DDA0u;
            goto label_10dda0;
        }
    }
    ctx->pc = 0x10DC58u;
label_10dc58:
    // 0x10dc58: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_10dc5c:
    if (ctx->pc == 0x10DC5Cu) {
        ctx->pc = 0x10DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC58u;
        // 0x10dc5c: 0x8e251668  lw          $a1, 0x1668($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC60u;
        goto label_10dc60;
    }
    ctx->pc = 0x10DC58u;
    {
        const bool branch_taken_0x10dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc58) {
            ctx->pc = 0x10DC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DC58u;
            // 0x10dc5c: 0x8e251668  lw          $a1, 0x1668($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DCC4u;
            goto label_10dcc4;
        }
    }
    ctx->pc = 0x10DC60u;
label_10dc60:
    // 0x10dc60: 0x1000004f  b           . + 4 + (0x4F << 2)
label_10dc64:
    if (ctx->pc == 0x10DC64u) {
        ctx->pc = 0x10DC68u;
        goto label_10dc68;
    }
    ctx->pc = 0x10DC60u;
    {
        const bool branch_taken_0x10dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc60) {
            ctx->pc = 0x10DDA0u;
            goto label_10dda0;
        }
    }
    ctx->pc = 0x10DC68u;
label_10dc68:
    // 0x10dc68: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x10dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10dc6c:
    // 0x10dc6c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_10dc70:
    // 0x10dc70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10dc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10dc74:
    // 0x10dc74: 0x0  nop
    ctx->pc = 0x10dc74u;
    // NOP
label_10dc78:
    // 0x10dc78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10dc78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10dc7c:
    // 0x10dc7c: 0x0  nop
    ctx->pc = 0x10dc7cu;
    // NOP
label_10dc80:
    // 0x10dc80: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_10dc84:
    if (ctx->pc == 0x10DC84u) {
        ctx->pc = 0x10DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC80u;
        // 0x10dc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC88u;
        goto label_10dc88;
    }
    ctx->pc = 0x10DC80u;
    {
        const bool branch_taken_0x10dc80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC80u;
        // 0x10dc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc80) {
            ctx->pc = 0x10DDA0u;
            goto label_10dda0;
        }
    }
    ctx->pc = 0x10DC88u;
label_10dc88:
    // 0x10dc88: 0x8e251668  lw          $a1, 0x1668($s1)
    ctx->pc = 0x10dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
label_10dc8c:
    // 0x10dc8c: 0x8e261660  lw          $a2, 0x1660($s1)
    ctx->pc = 0x10dc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5728)));
label_10dc90:
    // 0x10dc90: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x10dc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_10dc94:
    // 0x10dc94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dc94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dc98:
    // 0x10dc98: 0xc042902  jal         func_10A408
label_10dc9c:
    if (ctx->pc == 0x10DC9Cu) {
        ctx->pc = 0x10DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC98u;
        // 0x10dc9c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCA0u;
        goto label_10dca0;
    }
    ctx->pc = 0x10DC98u;
    SET_GPR_U32(ctx, 31, 0x10DCA0u);
    ctx->pc = 0x10DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC98u;
    // 0x10dc9c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10DC98u, 0x10DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCA0u;
label_10dca0:
    // 0x10dca0: 0x8e25166c  lw          $a1, 0x166C($s1)
    ctx->pc = 0x10dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5740)));
label_10dca4:
    // 0x10dca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dca8:
    // 0x10dca8: 0x8e261664  lw          $a2, 0x1664($s1)
    ctx->pc = 0x10dca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5732)));
label_10dcac:
    // 0x10dcac: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x10dcacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_10dcb0:
    // 0x10dcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dcb4:
    // 0x10dcb4: 0xc042908  jal         func_10A420
label_10dcb8:
    if (ctx->pc == 0x10DCB8u) {
        ctx->pc = 0x10DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCB4u;
        // 0x10dcb8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCBCu;
        goto label_10dcbc;
    }
    ctx->pc = 0x10DCB4u;
    SET_GPR_U32(ctx, 31, 0x10DCBCu);
    ctx->pc = 0x10DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCB4u;
    // 0x10dcb8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10DCB4u, 0x10DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCBCu;
label_10dcbc:
    // 0x10dcbc: 0x10000038  b           . + 4 + (0x38 << 2)
label_10dcc0:
    if (ctx->pc == 0x10DCC0u) {
        ctx->pc = 0x10DCC4u;
        goto label_10dcc4;
    }
    ctx->pc = 0x10DCBCu;
    {
        const bool branch_taken_0x10dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dcbc) {
            ctx->pc = 0x10DDA0u;
            goto label_10dda0;
        }
    }
    ctx->pc = 0x10DCC4u;
label_10dcc4:
    // 0x10dcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dcc8:
    // 0x10dcc8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10dcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dccc:
    // 0x10dccc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10dcccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dcd0:
    // 0x10dcd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dcd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dcd4:
    // 0x10dcd4: 0xc042902  jal         func_10A408
label_10dcd8:
    if (ctx->pc == 0x10DCD8u) {
        ctx->pc = 0x10DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCD4u;
        // 0x10dcd8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCDCu;
        goto label_10dcdc;
    }
    ctx->pc = 0x10DCD4u;
    SET_GPR_U32(ctx, 31, 0x10DCDCu);
    ctx->pc = 0x10DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCD4u;
    // 0x10dcd8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10DCD4u, 0x10DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCDCu;
label_10dcdc:
    // 0x10dcdc: 0x8e25166c  lw          $a1, 0x166C($s1)
    ctx->pc = 0x10dcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5740)));
label_10dce0:
    // 0x10dce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dce4:
    // 0x10dce4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10dce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dce8:
    // 0x10dce8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dcec:
    // 0x10dcec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dcecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dcf0:
    // 0x10dcf0: 0xc042908  jal         func_10A420
label_10dcf4:
    if (ctx->pc == 0x10DCF4u) {
        ctx->pc = 0x10DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCF0u;
        // 0x10dcf4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCF8u;
        goto label_10dcf8;
    }
    ctx->pc = 0x10DCF0u;
    SET_GPR_U32(ctx, 31, 0x10DCF8u);
    ctx->pc = 0x10DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCF0u;
    // 0x10dcf4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10DCF0u, 0x10DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCF8u;
label_10dcf8:
    // 0x10dcf8: 0xc6211610  lwc1        $f1, 0x1610($s1)
    ctx->pc = 0x10dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10dcfc:
    // 0x10dcfc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10dcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_10dd00:
    // 0x10dd00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10dd00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10dd04:
    // 0x10dd04: 0x0  nop
    ctx->pc = 0x10dd04u;
    // NOP
label_10dd08:
    // 0x10dd08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10dd08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10dd0c:
    // 0x10dd0c: 0x0  nop
    ctx->pc = 0x10dd0cu;
    // NOP
label_10dd10:
    // 0x10dd10: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_10dd14:
    if (ctx->pc == 0x10DD14u) {
        ctx->pc = 0x10DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD10u;
        // 0x10dd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD18u;
        goto label_10dd18;
    }
    ctx->pc = 0x10DD10u;
    {
        const bool branch_taken_0x10dd10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD10u;
        // 0x10dd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd10) {
            ctx->pc = 0x10DD50u;
            goto label_10dd50;
        }
    }
    ctx->pc = 0x10DD18u;
label_10dd18:
    // 0x10dd18: 0x8e251668  lw          $a1, 0x1668($s1)
    ctx->pc = 0x10dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
label_10dd1c:
    // 0x10dd1c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10dd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dd20:
    // 0x10dd20: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x10dd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10dd24:
    // 0x10dd24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dd24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dd28:
    // 0x10dd28: 0xc042902  jal         func_10A408
label_10dd2c:
    if (ctx->pc == 0x10DD2Cu) {
        ctx->pc = 0x10DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD28u;
        // 0x10dd2c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD30u;
        goto label_10dd30;
    }
    ctx->pc = 0x10DD28u;
    SET_GPR_U32(ctx, 31, 0x10DD30u);
    ctx->pc = 0x10DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD28u;
    // 0x10dd2c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10DD28u, 0x10DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD30u;
label_10dd30:
    // 0x10dd30: 0x8e25166c  lw          $a1, 0x166C($s1)
    ctx->pc = 0x10dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5740)));
label_10dd34:
    // 0x10dd34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dd38:
    // 0x10dd38: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dd3c:
    // 0x10dd3c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x10dd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10dd40:
    // 0x10dd40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dd40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dd44:
    // 0x10dd44: 0xc042908  jal         func_10A420
label_10dd48:
    if (ctx->pc == 0x10DD48u) {
        ctx->pc = 0x10DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD44u;
        // 0x10dd48: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD4Cu;
        goto label_10dd4c;
    }
    ctx->pc = 0x10DD44u;
    SET_GPR_U32(ctx, 31, 0x10DD4Cu);
    ctx->pc = 0x10DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD44u;
    // 0x10dd48: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10DD44u, 0x10DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD4Cu;
label_10dd4c:
    // 0x10dd4c: 0xc6211610  lwc1        $f1, 0x1610($s1)
    ctx->pc = 0x10dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10dd50:
    // 0x10dd50: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10dd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_10dd54:
    // 0x10dd54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10dd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10dd58:
    // 0x10dd58: 0x0  nop
    ctx->pc = 0x10dd58u;
    // NOP
label_10dd5c:
    // 0x10dd5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10dd5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10dd60:
    // 0x10dd60: 0x0  nop
    ctx->pc = 0x10dd60u;
    // NOP
label_10dd64:
    // 0x10dd64: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_10dd68:
    if (ctx->pc == 0x10DD68u) {
        ctx->pc = 0x10DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD64u;
        // 0x10dd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD6Cu;
        goto label_10dd6c;
    }
    ctx->pc = 0x10DD64u;
    {
        const bool branch_taken_0x10dd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD64u;
        // 0x10dd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd64) {
            ctx->pc = 0x10DDA0u;
            goto label_10dda0;
        }
    }
    ctx->pc = 0x10DD6Cu;
label_10dd6c:
    // 0x10dd6c: 0x8e251668  lw          $a1, 0x1668($s1)
    ctx->pc = 0x10dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5736)));
label_10dd70:
    // 0x10dd70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10dd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dd74:
    // 0x10dd74: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x10dd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_10dd78:
    // 0x10dd78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dd7c:
    // 0x10dd7c: 0xc042902  jal         func_10A408
label_10dd80:
    if (ctx->pc == 0x10DD80u) {
        ctx->pc = 0x10DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD7Cu;
        // 0x10dd80: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD84u;
        goto label_10dd84;
    }
    ctx->pc = 0x10DD7Cu;
    SET_GPR_U32(ctx, 31, 0x10DD84u);
    ctx->pc = 0x10DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD7Cu;
    // 0x10dd80: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10DD7Cu, 0x10DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD84u;
label_10dd84:
    // 0x10dd84: 0x8e25166c  lw          $a1, 0x166C($s1)
    ctx->pc = 0x10dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5740)));
label_10dd88:
    // 0x10dd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dd8c:
    // 0x10dd8c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10dd90:
    // 0x10dd90: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x10dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_10dd94:
    // 0x10dd94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dd94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dd98:
    // 0x10dd98: 0xc042908  jal         func_10A420
label_10dd9c:
    if (ctx->pc == 0x10DD9Cu) {
        ctx->pc = 0x10DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD98u;
        // 0x10dd9c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDA0u;
        goto label_10dda0;
    }
    ctx->pc = 0x10DD98u;
    SET_GPR_U32(ctx, 31, 0x10DDA0u);
    ctx->pc = 0x10DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD98u;
    // 0x10dd9c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10DD98u, 0x10DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDA0u;
label_10dda0:
    // 0x10dda0: 0xc04290e  jal         func_10A438
label_10dda4:
    if (ctx->pc == 0x10DDA4u) {
        ctx->pc = 0x10DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA0u;
        // 0x10dda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDA8u;
        goto label_10dda8;
    }
    ctx->pc = 0x10DDA0u;
    SET_GPR_U32(ctx, 31, 0x10DDA8u);
    ctx->pc = 0x10DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDA0u;
    // 0x10dda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10DDA0u, 0x10DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDA8u;
label_10dda8:
    // 0x10dda8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10dda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10ddac:
    // 0x10ddac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10ddacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_10ddb0:
    // 0x10ddb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ddb4:
    if (ctx->pc == 0x10DDB4u) {
        ctx->pc = 0x10DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDB0u;
        // 0x10ddb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDB8u;
        goto label_10ddb8;
    }
    ctx->pc = 0x10DDB0u;
    {
        const bool branch_taken_0x10ddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDB0u;
        // 0x10ddb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddb0) {
            ctx->pc = 0x10DDC0u;
            goto label_10ddc0;
        }
    }
    ctx->pc = 0x10DDB8u;
label_10ddb8:
    // 0x10ddb8: 0x10000019  b           . + 4 + (0x19 << 2)
label_10ddbc:
    if (ctx->pc == 0x10DDBCu) {
        ctx->pc = 0x10DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDB8u;
        // 0x10ddbc: 0xa62205e6  sh          $v0, 0x5E6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1510), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDC0u;
        goto label_10ddc0;
    }
    ctx->pc = 0x10DDB8u;
    {
        const bool branch_taken_0x10ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDB8u;
        // 0x10ddbc: 0xa62205e6  sh          $v0, 0x5E6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1510), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddb8) {
            ctx->pc = 0x10DE20u;
            goto label_10de20;
        }
    }
    ctx->pc = 0x10DDC0u;
label_10ddc0:
    // 0x10ddc0: 0x962205e6  lhu         $v0, 0x5E6($s1)
    ctx->pc = 0x10ddc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1510)));
label_10ddc4:
    // 0x10ddc4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_10ddc8:
    if (ctx->pc == 0x10DDC8u) {
        ctx->pc = 0x10DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDC4u;
        // 0x10ddc8: 0xa62005e6  sh          $zero, 0x5E6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1510), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDCCu;
        goto label_10ddcc;
    }
    ctx->pc = 0x10DDC4u;
    {
        const bool branch_taken_0x10ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ddc4) {
            ctx->pc = 0x10DDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DDC4u;
            // 0x10ddc8: 0xa62005e6  sh          $zero, 0x5E6($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1510), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DE20u;
            goto label_10de20;
        }
    }
    ctx->pc = 0x10DDCCu;
label_10ddcc:
    // 0x10ddcc: 0x962205e4  lhu         $v0, 0x5E4($s1)
    ctx->pc = 0x10ddccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1508)));
label_10ddd0:
    // 0x10ddd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10ddd4:
    // 0x10ddd4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x10ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_10ddd8:
    // 0x10ddd8: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x10ddd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_10dddc:
    // 0x10dddc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10dde0:
    if (ctx->pc == 0x10DDE0u) {
        ctx->pc = 0x10DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDDCu;
        // 0x10dde0: 0xa62205e4  sh          $v0, 0x5E4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1508), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDE4u;
        goto label_10dde4;
    }
    ctx->pc = 0x10DDDCu;
    {
        const bool branch_taken_0x10dddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDDCu;
        // 0x10dde0: 0xa62205e4  sh          $v0, 0x5E4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1508), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dddc) {
            ctx->pc = 0x10DDECu;
            goto label_10ddec;
        }
    }
    ctx->pc = 0x10DDE4u;
label_10dde4:
    // 0x10dde4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10dde8:
    // 0x10dde8: 0xa62205e4  sh          $v0, 0x5E4($s1)
    ctx->pc = 0x10dde8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1508), (uint16_t)GPR_U32(ctx, 2));
label_10ddec:
    // 0x10ddec: 0x8e2405e8  lw          $a0, 0x5E8($s1)
    ctx->pc = 0x10ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_10ddf0:
    // 0x10ddf0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10ddf4:
    // 0x10ddf4: 0x962205e4  lhu         $v0, 0x5E4($s1)
    ctx->pc = 0x10ddf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1508)));
label_10ddf8:
    // 0x10ddf8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x10ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_10ddfc:
    // 0x10ddfc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x10ddfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10de00:
    // 0x10de00: 0x2463c7d0  addiu       $v1, $v1, -0x3830
    ctx->pc = 0x10de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952912));
label_10de04:
    // 0x10de04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10de04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10de08:
    // 0x10de08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10de0c:
    // 0x10de0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10de10:
    // 0x10de10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10de10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10de14:
    // 0x10de14: 0xae241668  sw          $a0, 0x1668($s1)
    ctx->pc = 0x10de14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5736), GPR_U32(ctx, 4));
label_10de18:
    // 0x10de18: 0xae24166c  sw          $a0, 0x166C($s1)
    ctx->pc = 0x10de18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5740), GPR_U32(ctx, 4));
label_10de1c:
    // 0x10de1c: 0xa62005e6  sh          $zero, 0x5E6($s1)
    ctx->pc = 0x10de1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1510), (uint16_t)GPR_U32(ctx, 0));
label_10de20:
    // 0x10de20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10de20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10de24:
    // 0x10de24: 0xc048e4e  jal         func_123938
label_10de28:
    if (ctx->pc == 0x10DE28u) {
        ctx->pc = 0x10DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE24u;
        // 0x10de28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE2Cu;
        goto label_10de2c;
    }
    ctx->pc = 0x10DE24u;
    SET_GPR_U32(ctx, 31, 0x10DE2Cu);
    ctx->pc = 0x10DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE24u;
    // 0x10de28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10DE24u, 0x10DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE2Cu;
label_10de2c:
    // 0x10de2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10de30:
    if (ctx->pc == 0x10DE30u) {
        ctx->pc = 0x10DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE2Cu;
        // 0x10de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE34u;
        goto label_10de34;
    }
    ctx->pc = 0x10DE2Cu;
    {
        const bool branch_taken_0x10de2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE2Cu;
        // 0x10de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de2c) {
            ctx->pc = 0x10DE48u;
            goto label_10de48;
        }
    }
    ctx->pc = 0x10DE34u;
label_10de34:
    // 0x10de34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10de34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10de38:
    // 0x10de38: 0xc0493d8  jal         func_124F60
label_10de3c:
    if (ctx->pc == 0x10DE3Cu) {
        ctx->pc = 0x10DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE38u;
        // 0x10de3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE40u;
        goto label_10de40;
    }
    ctx->pc = 0x10DE38u;
    SET_GPR_U32(ctx, 31, 0x10DE40u);
    ctx->pc = 0x10DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE38u;
    // 0x10de3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10DE38u, 0x10DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE40u;
label_10de40:
    // 0x10de40: 0x10000006  b           . + 4 + (0x6 << 2)
label_10de44:
    if (ctx->pc == 0x10DE44u) {
        ctx->pc = 0x10DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE40u;
        // 0x10de44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE48u;
        goto label_10de48;
    }
    ctx->pc = 0x10DE40u;
    {
        const bool branch_taken_0x10de40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE40u;
        // 0x10de44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de40) {
            ctx->pc = 0x10DE5Cu;
            goto label_10de5c;
        }
    }
    ctx->pc = 0x10DE48u;
label_10de48:
    // 0x10de48: 0x86221618  lh          $v0, 0x1618($s1)
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5656)));
label_10de4c:
    // 0x10de4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10de50:
    if (ctx->pc == 0x10DE50u) {
        ctx->pc = 0x10DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE4Cu;
        // 0x10de50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE54u;
        goto label_10de54;
    }
    ctx->pc = 0x10DE4Cu;
    {
        const bool branch_taken_0x10de4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE4Cu;
        // 0x10de50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de4c) {
            ctx->pc = 0x10DE58u;
            goto label_10de58;
        }
    }
    ctx->pc = 0x10DE54u;
label_10de54:
    // 0x10de54: 0xa2221603  sb          $v0, 0x1603($s1)
    ctx->pc = 0x10de54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 2));
label_10de58:
    // 0x10de58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10de58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10de5c:
    // 0x10de5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10de5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10de60:
    // 0x10de60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10de60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10de64:
    // 0x10de64: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10de68:
    // 0x10de68: 0x3e00008  jr          $ra
label_10de6c:
    if (ctx->pc == 0x10DE6Cu) {
        ctx->pc = 0x10DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE68u;
        // 0x10de6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE70u;
        goto label_fallthrough_0x10de68;
    }
    ctx->pc = 0x10DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE68u;
        // 0x10de6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10de68:
    ctx->pc = 0x10DE70u;
}
