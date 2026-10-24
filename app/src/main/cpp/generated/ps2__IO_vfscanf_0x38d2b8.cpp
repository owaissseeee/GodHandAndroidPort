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

// Function: _IO_vfscanf
// Address: 0x38d2b8 - 0x38e030
void ps2__IO_vfscanf_0x38d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_vfscanf_0x38d2b8");
#endif

    switch (ctx->pc) {
        case 0x38d2b8u: goto label_38d2b8;
        case 0x38d2bcu: goto label_38d2bc;
        case 0x38d2c0u: goto label_38d2c0;
        case 0x38d2c4u: goto label_38d2c4;
        case 0x38d2c8u: goto label_38d2c8;
        case 0x38d2ccu: goto label_38d2cc;
        case 0x38d2d0u: goto label_38d2d0;
        case 0x38d2d4u: goto label_38d2d4;
        case 0x38d2d8u: goto label_38d2d8;
        case 0x38d2dcu: goto label_38d2dc;
        case 0x38d2e0u: goto label_38d2e0;
        case 0x38d2e4u: goto label_38d2e4;
        case 0x38d2e8u: goto label_38d2e8;
        case 0x38d2ecu: goto label_38d2ec;
        case 0x38d2f0u: goto label_38d2f0;
        case 0x38d2f4u: goto label_38d2f4;
        case 0x38d2f8u: goto label_38d2f8;
        case 0x38d2fcu: goto label_38d2fc;
        case 0x38d300u: goto label_38d300;
        case 0x38d304u: goto label_38d304;
        case 0x38d308u: goto label_38d308;
        case 0x38d30cu: goto label_38d30c;
        case 0x38d310u: goto label_38d310;
        case 0x38d314u: goto label_38d314;
        case 0x38d318u: goto label_38d318;
        case 0x38d31cu: goto label_38d31c;
        case 0x38d320u: goto label_38d320;
        case 0x38d324u: goto label_38d324;
        case 0x38d328u: goto label_38d328;
        case 0x38d32cu: goto label_38d32c;
        case 0x38d330u: goto label_38d330;
        case 0x38d334u: goto label_38d334;
        case 0x38d338u: goto label_38d338;
        case 0x38d33cu: goto label_38d33c;
        case 0x38d340u: goto label_38d340;
        case 0x38d344u: goto label_38d344;
        case 0x38d348u: goto label_38d348;
        case 0x38d34cu: goto label_38d34c;
        case 0x38d350u: goto label_38d350;
        case 0x38d354u: goto label_38d354;
        case 0x38d358u: goto label_38d358;
        case 0x38d35cu: goto label_38d35c;
        case 0x38d360u: goto label_38d360;
        case 0x38d364u: goto label_38d364;
        case 0x38d368u: goto label_38d368;
        case 0x38d36cu: goto label_38d36c;
        case 0x38d370u: goto label_38d370;
        case 0x38d374u: goto label_38d374;
        case 0x38d378u: goto label_38d378;
        case 0x38d37cu: goto label_38d37c;
        case 0x38d380u: goto label_38d380;
        case 0x38d384u: goto label_38d384;
        case 0x38d388u: goto label_38d388;
        case 0x38d38cu: goto label_38d38c;
        case 0x38d390u: goto label_38d390;
        case 0x38d394u: goto label_38d394;
        case 0x38d398u: goto label_38d398;
        case 0x38d39cu: goto label_38d39c;
        case 0x38d3a0u: goto label_38d3a0;
        case 0x38d3a4u: goto label_38d3a4;
        case 0x38d3a8u: goto label_38d3a8;
        case 0x38d3acu: goto label_38d3ac;
        case 0x38d3b0u: goto label_38d3b0;
        case 0x38d3b4u: goto label_38d3b4;
        case 0x38d3b8u: goto label_38d3b8;
        case 0x38d3bcu: goto label_38d3bc;
        case 0x38d3c0u: goto label_38d3c0;
        case 0x38d3c4u: goto label_38d3c4;
        case 0x38d3c8u: goto label_38d3c8;
        case 0x38d3ccu: goto label_38d3cc;
        case 0x38d3d0u: goto label_38d3d0;
        case 0x38d3d4u: goto label_38d3d4;
        case 0x38d3d8u: goto label_38d3d8;
        case 0x38d3dcu: goto label_38d3dc;
        case 0x38d3e0u: goto label_38d3e0;
        case 0x38d3e4u: goto label_38d3e4;
        case 0x38d3e8u: goto label_38d3e8;
        case 0x38d3ecu: goto label_38d3ec;
        case 0x38d3f0u: goto label_38d3f0;
        case 0x38d3f4u: goto label_38d3f4;
        case 0x38d3f8u: goto label_38d3f8;
        case 0x38d3fcu: goto label_38d3fc;
        case 0x38d400u: goto label_38d400;
        case 0x38d404u: goto label_38d404;
        case 0x38d408u: goto label_38d408;
        case 0x38d40cu: goto label_38d40c;
        case 0x38d410u: goto label_38d410;
        case 0x38d414u: goto label_38d414;
        case 0x38d418u: goto label_38d418;
        case 0x38d41cu: goto label_38d41c;
        case 0x38d420u: goto label_38d420;
        case 0x38d424u: goto label_38d424;
        case 0x38d428u: goto label_38d428;
        case 0x38d42cu: goto label_38d42c;
        case 0x38d430u: goto label_38d430;
        case 0x38d434u: goto label_38d434;
        case 0x38d438u: goto label_38d438;
        case 0x38d43cu: goto label_38d43c;
        case 0x38d440u: goto label_38d440;
        case 0x38d444u: goto label_38d444;
        case 0x38d448u: goto label_38d448;
        case 0x38d44cu: goto label_38d44c;
        case 0x38d450u: goto label_38d450;
        case 0x38d454u: goto label_38d454;
        case 0x38d458u: goto label_38d458;
        case 0x38d45cu: goto label_38d45c;
        case 0x38d460u: goto label_38d460;
        case 0x38d464u: goto label_38d464;
        case 0x38d468u: goto label_38d468;
        case 0x38d46cu: goto label_38d46c;
        case 0x38d470u: goto label_38d470;
        case 0x38d474u: goto label_38d474;
        case 0x38d478u: goto label_38d478;
        case 0x38d47cu: goto label_38d47c;
        case 0x38d480u: goto label_38d480;
        case 0x38d484u: goto label_38d484;
        case 0x38d488u: goto label_38d488;
        case 0x38d48cu: goto label_38d48c;
        case 0x38d490u: goto label_38d490;
        case 0x38d494u: goto label_38d494;
        case 0x38d498u: goto label_38d498;
        case 0x38d49cu: goto label_38d49c;
        case 0x38d4a0u: goto label_38d4a0;
        case 0x38d4a4u: goto label_38d4a4;
        case 0x38d4a8u: goto label_38d4a8;
        case 0x38d4acu: goto label_38d4ac;
        case 0x38d4b0u: goto label_38d4b0;
        case 0x38d4b4u: goto label_38d4b4;
        case 0x38d4b8u: goto label_38d4b8;
        case 0x38d4bcu: goto label_38d4bc;
        case 0x38d4c0u: goto label_38d4c0;
        case 0x38d4c4u: goto label_38d4c4;
        case 0x38d4c8u: goto label_38d4c8;
        case 0x38d4ccu: goto label_38d4cc;
        case 0x38d4d0u: goto label_38d4d0;
        case 0x38d4d4u: goto label_38d4d4;
        case 0x38d4d8u: goto label_38d4d8;
        case 0x38d4dcu: goto label_38d4dc;
        case 0x38d4e0u: goto label_38d4e0;
        case 0x38d4e4u: goto label_38d4e4;
        case 0x38d4e8u: goto label_38d4e8;
        case 0x38d4ecu: goto label_38d4ec;
        case 0x38d4f0u: goto label_38d4f0;
        case 0x38d4f4u: goto label_38d4f4;
        case 0x38d4f8u: goto label_38d4f8;
        case 0x38d4fcu: goto label_38d4fc;
        case 0x38d500u: goto label_38d500;
        case 0x38d504u: goto label_38d504;
        case 0x38d508u: goto label_38d508;
        case 0x38d50cu: goto label_38d50c;
        case 0x38d510u: goto label_38d510;
        case 0x38d514u: goto label_38d514;
        case 0x38d518u: goto label_38d518;
        case 0x38d51cu: goto label_38d51c;
        case 0x38d520u: goto label_38d520;
        case 0x38d524u: goto label_38d524;
        case 0x38d528u: goto label_38d528;
        case 0x38d52cu: goto label_38d52c;
        case 0x38d530u: goto label_38d530;
        case 0x38d534u: goto label_38d534;
        case 0x38d538u: goto label_38d538;
        case 0x38d53cu: goto label_38d53c;
        case 0x38d540u: goto label_38d540;
        case 0x38d544u: goto label_38d544;
        case 0x38d548u: goto label_38d548;
        case 0x38d54cu: goto label_38d54c;
        case 0x38d550u: goto label_38d550;
        case 0x38d554u: goto label_38d554;
        case 0x38d558u: goto label_38d558;
        case 0x38d55cu: goto label_38d55c;
        case 0x38d560u: goto label_38d560;
        case 0x38d564u: goto label_38d564;
        case 0x38d568u: goto label_38d568;
        case 0x38d56cu: goto label_38d56c;
        case 0x38d570u: goto label_38d570;
        case 0x38d574u: goto label_38d574;
        case 0x38d578u: goto label_38d578;
        case 0x38d57cu: goto label_38d57c;
        case 0x38d580u: goto label_38d580;
        case 0x38d584u: goto label_38d584;
        case 0x38d588u: goto label_38d588;
        case 0x38d58cu: goto label_38d58c;
        case 0x38d590u: goto label_38d590;
        case 0x38d594u: goto label_38d594;
        case 0x38d598u: goto label_38d598;
        case 0x38d59cu: goto label_38d59c;
        case 0x38d5a0u: goto label_38d5a0;
        case 0x38d5a4u: goto label_38d5a4;
        case 0x38d5a8u: goto label_38d5a8;
        case 0x38d5acu: goto label_38d5ac;
        case 0x38d5b0u: goto label_38d5b0;
        case 0x38d5b4u: goto label_38d5b4;
        case 0x38d5b8u: goto label_38d5b8;
        case 0x38d5bcu: goto label_38d5bc;
        case 0x38d5c0u: goto label_38d5c0;
        case 0x38d5c4u: goto label_38d5c4;
        case 0x38d5c8u: goto label_38d5c8;
        case 0x38d5ccu: goto label_38d5cc;
        case 0x38d5d0u: goto label_38d5d0;
        case 0x38d5d4u: goto label_38d5d4;
        case 0x38d5d8u: goto label_38d5d8;
        case 0x38d5dcu: goto label_38d5dc;
        case 0x38d5e0u: goto label_38d5e0;
        case 0x38d5e4u: goto label_38d5e4;
        case 0x38d5e8u: goto label_38d5e8;
        case 0x38d5ecu: goto label_38d5ec;
        case 0x38d5f0u: goto label_38d5f0;
        case 0x38d5f4u: goto label_38d5f4;
        case 0x38d5f8u: goto label_38d5f8;
        case 0x38d5fcu: goto label_38d5fc;
        case 0x38d600u: goto label_38d600;
        case 0x38d604u: goto label_38d604;
        case 0x38d608u: goto label_38d608;
        case 0x38d60cu: goto label_38d60c;
        case 0x38d610u: goto label_38d610;
        case 0x38d614u: goto label_38d614;
        case 0x38d618u: goto label_38d618;
        case 0x38d61cu: goto label_38d61c;
        case 0x38d620u: goto label_38d620;
        case 0x38d624u: goto label_38d624;
        case 0x38d628u: goto label_38d628;
        case 0x38d62cu: goto label_38d62c;
        case 0x38d630u: goto label_38d630;
        case 0x38d634u: goto label_38d634;
        case 0x38d638u: goto label_38d638;
        case 0x38d63cu: goto label_38d63c;
        case 0x38d640u: goto label_38d640;
        case 0x38d644u: goto label_38d644;
        case 0x38d648u: goto label_38d648;
        case 0x38d64cu: goto label_38d64c;
        case 0x38d650u: goto label_38d650;
        case 0x38d654u: goto label_38d654;
        case 0x38d658u: goto label_38d658;
        case 0x38d65cu: goto label_38d65c;
        case 0x38d660u: goto label_38d660;
        case 0x38d664u: goto label_38d664;
        case 0x38d668u: goto label_38d668;
        case 0x38d66cu: goto label_38d66c;
        case 0x38d670u: goto label_38d670;
        case 0x38d674u: goto label_38d674;
        case 0x38d678u: goto label_38d678;
        case 0x38d67cu: goto label_38d67c;
        case 0x38d680u: goto label_38d680;
        case 0x38d684u: goto label_38d684;
        case 0x38d688u: goto label_38d688;
        case 0x38d68cu: goto label_38d68c;
        case 0x38d690u: goto label_38d690;
        case 0x38d694u: goto label_38d694;
        case 0x38d698u: goto label_38d698;
        case 0x38d69cu: goto label_38d69c;
        case 0x38d6a0u: goto label_38d6a0;
        case 0x38d6a4u: goto label_38d6a4;
        case 0x38d6a8u: goto label_38d6a8;
        case 0x38d6acu: goto label_38d6ac;
        case 0x38d6b0u: goto label_38d6b0;
        case 0x38d6b4u: goto label_38d6b4;
        case 0x38d6b8u: goto label_38d6b8;
        case 0x38d6bcu: goto label_38d6bc;
        case 0x38d6c0u: goto label_38d6c0;
        case 0x38d6c4u: goto label_38d6c4;
        case 0x38d6c8u: goto label_38d6c8;
        case 0x38d6ccu: goto label_38d6cc;
        case 0x38d6d0u: goto label_38d6d0;
        case 0x38d6d4u: goto label_38d6d4;
        case 0x38d6d8u: goto label_38d6d8;
        case 0x38d6dcu: goto label_38d6dc;
        case 0x38d6e0u: goto label_38d6e0;
        case 0x38d6e4u: goto label_38d6e4;
        case 0x38d6e8u: goto label_38d6e8;
        case 0x38d6ecu: goto label_38d6ec;
        case 0x38d6f0u: goto label_38d6f0;
        case 0x38d6f4u: goto label_38d6f4;
        case 0x38d6f8u: goto label_38d6f8;
        case 0x38d6fcu: goto label_38d6fc;
        case 0x38d700u: goto label_38d700;
        case 0x38d704u: goto label_38d704;
        case 0x38d708u: goto label_38d708;
        case 0x38d70cu: goto label_38d70c;
        case 0x38d710u: goto label_38d710;
        case 0x38d714u: goto label_38d714;
        case 0x38d718u: goto label_38d718;
        case 0x38d71cu: goto label_38d71c;
        case 0x38d720u: goto label_38d720;
        case 0x38d724u: goto label_38d724;
        case 0x38d728u: goto label_38d728;
        case 0x38d72cu: goto label_38d72c;
        case 0x38d730u: goto label_38d730;
        case 0x38d734u: goto label_38d734;
        case 0x38d738u: goto label_38d738;
        case 0x38d73cu: goto label_38d73c;
        case 0x38d740u: goto label_38d740;
        case 0x38d744u: goto label_38d744;
        case 0x38d748u: goto label_38d748;
        case 0x38d74cu: goto label_38d74c;
        case 0x38d750u: goto label_38d750;
        case 0x38d754u: goto label_38d754;
        case 0x38d758u: goto label_38d758;
        case 0x38d75cu: goto label_38d75c;
        case 0x38d760u: goto label_38d760;
        case 0x38d764u: goto label_38d764;
        case 0x38d768u: goto label_38d768;
        case 0x38d76cu: goto label_38d76c;
        case 0x38d770u: goto label_38d770;
        case 0x38d774u: goto label_38d774;
        case 0x38d778u: goto label_38d778;
        case 0x38d77cu: goto label_38d77c;
        case 0x38d780u: goto label_38d780;
        case 0x38d784u: goto label_38d784;
        case 0x38d788u: goto label_38d788;
        case 0x38d78cu: goto label_38d78c;
        case 0x38d790u: goto label_38d790;
        case 0x38d794u: goto label_38d794;
        case 0x38d798u: goto label_38d798;
        case 0x38d79cu: goto label_38d79c;
        case 0x38d7a0u: goto label_38d7a0;
        case 0x38d7a4u: goto label_38d7a4;
        case 0x38d7a8u: goto label_38d7a8;
        case 0x38d7acu: goto label_38d7ac;
        case 0x38d7b0u: goto label_38d7b0;
        case 0x38d7b4u: goto label_38d7b4;
        case 0x38d7b8u: goto label_38d7b8;
        case 0x38d7bcu: goto label_38d7bc;
        case 0x38d7c0u: goto label_38d7c0;
        case 0x38d7c4u: goto label_38d7c4;
        case 0x38d7c8u: goto label_38d7c8;
        case 0x38d7ccu: goto label_38d7cc;
        case 0x38d7d0u: goto label_38d7d0;
        case 0x38d7d4u: goto label_38d7d4;
        case 0x38d7d8u: goto label_38d7d8;
        case 0x38d7dcu: goto label_38d7dc;
        case 0x38d7e0u: goto label_38d7e0;
        case 0x38d7e4u: goto label_38d7e4;
        case 0x38d7e8u: goto label_38d7e8;
        case 0x38d7ecu: goto label_38d7ec;
        case 0x38d7f0u: goto label_38d7f0;
        case 0x38d7f4u: goto label_38d7f4;
        case 0x38d7f8u: goto label_38d7f8;
        case 0x38d7fcu: goto label_38d7fc;
        case 0x38d800u: goto label_38d800;
        case 0x38d804u: goto label_38d804;
        case 0x38d808u: goto label_38d808;
        case 0x38d80cu: goto label_38d80c;
        case 0x38d810u: goto label_38d810;
        case 0x38d814u: goto label_38d814;
        case 0x38d818u: goto label_38d818;
        case 0x38d81cu: goto label_38d81c;
        case 0x38d820u: goto label_38d820;
        case 0x38d824u: goto label_38d824;
        case 0x38d828u: goto label_38d828;
        case 0x38d82cu: goto label_38d82c;
        case 0x38d830u: goto label_38d830;
        case 0x38d834u: goto label_38d834;
        case 0x38d838u: goto label_38d838;
        case 0x38d83cu: goto label_38d83c;
        case 0x38d840u: goto label_38d840;
        case 0x38d844u: goto label_38d844;
        case 0x38d848u: goto label_38d848;
        case 0x38d84cu: goto label_38d84c;
        case 0x38d850u: goto label_38d850;
        case 0x38d854u: goto label_38d854;
        case 0x38d858u: goto label_38d858;
        case 0x38d85cu: goto label_38d85c;
        case 0x38d860u: goto label_38d860;
        case 0x38d864u: goto label_38d864;
        case 0x38d868u: goto label_38d868;
        case 0x38d86cu: goto label_38d86c;
        case 0x38d870u: goto label_38d870;
        case 0x38d874u: goto label_38d874;
        case 0x38d878u: goto label_38d878;
        case 0x38d87cu: goto label_38d87c;
        case 0x38d880u: goto label_38d880;
        case 0x38d884u: goto label_38d884;
        case 0x38d888u: goto label_38d888;
        case 0x38d88cu: goto label_38d88c;
        case 0x38d890u: goto label_38d890;
        case 0x38d894u: goto label_38d894;
        case 0x38d898u: goto label_38d898;
        case 0x38d89cu: goto label_38d89c;
        case 0x38d8a0u: goto label_38d8a0;
        case 0x38d8a4u: goto label_38d8a4;
        case 0x38d8a8u: goto label_38d8a8;
        case 0x38d8acu: goto label_38d8ac;
        case 0x38d8b0u: goto label_38d8b0;
        case 0x38d8b4u: goto label_38d8b4;
        case 0x38d8b8u: goto label_38d8b8;
        case 0x38d8bcu: goto label_38d8bc;
        case 0x38d8c0u: goto label_38d8c0;
        case 0x38d8c4u: goto label_38d8c4;
        case 0x38d8c8u: goto label_38d8c8;
        case 0x38d8ccu: goto label_38d8cc;
        case 0x38d8d0u: goto label_38d8d0;
        case 0x38d8d4u: goto label_38d8d4;
        case 0x38d8d8u: goto label_38d8d8;
        case 0x38d8dcu: goto label_38d8dc;
        case 0x38d8e0u: goto label_38d8e0;
        case 0x38d8e4u: goto label_38d8e4;
        case 0x38d8e8u: goto label_38d8e8;
        case 0x38d8ecu: goto label_38d8ec;
        case 0x38d8f0u: goto label_38d8f0;
        case 0x38d8f4u: goto label_38d8f4;
        case 0x38d8f8u: goto label_38d8f8;
        case 0x38d8fcu: goto label_38d8fc;
        case 0x38d900u: goto label_38d900;
        case 0x38d904u: goto label_38d904;
        case 0x38d908u: goto label_38d908;
        case 0x38d90cu: goto label_38d90c;
        case 0x38d910u: goto label_38d910;
        case 0x38d914u: goto label_38d914;
        case 0x38d918u: goto label_38d918;
        case 0x38d91cu: goto label_38d91c;
        case 0x38d920u: goto label_38d920;
        case 0x38d924u: goto label_38d924;
        case 0x38d928u: goto label_38d928;
        case 0x38d92cu: goto label_38d92c;
        case 0x38d930u: goto label_38d930;
        case 0x38d934u: goto label_38d934;
        case 0x38d938u: goto label_38d938;
        case 0x38d93cu: goto label_38d93c;
        case 0x38d940u: goto label_38d940;
        case 0x38d944u: goto label_38d944;
        case 0x38d948u: goto label_38d948;
        case 0x38d94cu: goto label_38d94c;
        case 0x38d950u: goto label_38d950;
        case 0x38d954u: goto label_38d954;
        case 0x38d958u: goto label_38d958;
        case 0x38d95cu: goto label_38d95c;
        case 0x38d960u: goto label_38d960;
        case 0x38d964u: goto label_38d964;
        case 0x38d968u: goto label_38d968;
        case 0x38d96cu: goto label_38d96c;
        case 0x38d970u: goto label_38d970;
        case 0x38d974u: goto label_38d974;
        case 0x38d978u: goto label_38d978;
        case 0x38d97cu: goto label_38d97c;
        case 0x38d980u: goto label_38d980;
        case 0x38d984u: goto label_38d984;
        case 0x38d988u: goto label_38d988;
        case 0x38d98cu: goto label_38d98c;
        case 0x38d990u: goto label_38d990;
        case 0x38d994u: goto label_38d994;
        case 0x38d998u: goto label_38d998;
        case 0x38d99cu: goto label_38d99c;
        case 0x38d9a0u: goto label_38d9a0;
        case 0x38d9a4u: goto label_38d9a4;
        case 0x38d9a8u: goto label_38d9a8;
        case 0x38d9acu: goto label_38d9ac;
        case 0x38d9b0u: goto label_38d9b0;
        case 0x38d9b4u: goto label_38d9b4;
        case 0x38d9b8u: goto label_38d9b8;
        case 0x38d9bcu: goto label_38d9bc;
        case 0x38d9c0u: goto label_38d9c0;
        case 0x38d9c4u: goto label_38d9c4;
        case 0x38d9c8u: goto label_38d9c8;
        case 0x38d9ccu: goto label_38d9cc;
        case 0x38d9d0u: goto label_38d9d0;
        case 0x38d9d4u: goto label_38d9d4;
        case 0x38d9d8u: goto label_38d9d8;
        case 0x38d9dcu: goto label_38d9dc;
        case 0x38d9e0u: goto label_38d9e0;
        case 0x38d9e4u: goto label_38d9e4;
        case 0x38d9e8u: goto label_38d9e8;
        case 0x38d9ecu: goto label_38d9ec;
        case 0x38d9f0u: goto label_38d9f0;
        case 0x38d9f4u: goto label_38d9f4;
        case 0x38d9f8u: goto label_38d9f8;
        case 0x38d9fcu: goto label_38d9fc;
        case 0x38da00u: goto label_38da00;
        case 0x38da04u: goto label_38da04;
        case 0x38da08u: goto label_38da08;
        case 0x38da0cu: goto label_38da0c;
        case 0x38da10u: goto label_38da10;
        case 0x38da14u: goto label_38da14;
        case 0x38da18u: goto label_38da18;
        case 0x38da1cu: goto label_38da1c;
        case 0x38da20u: goto label_38da20;
        case 0x38da24u: goto label_38da24;
        case 0x38da28u: goto label_38da28;
        case 0x38da2cu: goto label_38da2c;
        case 0x38da30u: goto label_38da30;
        case 0x38da34u: goto label_38da34;
        case 0x38da38u: goto label_38da38;
        case 0x38da3cu: goto label_38da3c;
        case 0x38da40u: goto label_38da40;
        case 0x38da44u: goto label_38da44;
        case 0x38da48u: goto label_38da48;
        case 0x38da4cu: goto label_38da4c;
        case 0x38da50u: goto label_38da50;
        case 0x38da54u: goto label_38da54;
        case 0x38da58u: goto label_38da58;
        case 0x38da5cu: goto label_38da5c;
        case 0x38da60u: goto label_38da60;
        case 0x38da64u: goto label_38da64;
        case 0x38da68u: goto label_38da68;
        case 0x38da6cu: goto label_38da6c;
        case 0x38da70u: goto label_38da70;
        case 0x38da74u: goto label_38da74;
        case 0x38da78u: goto label_38da78;
        case 0x38da7cu: goto label_38da7c;
        case 0x38da80u: goto label_38da80;
        case 0x38da84u: goto label_38da84;
        case 0x38da88u: goto label_38da88;
        case 0x38da8cu: goto label_38da8c;
        case 0x38da90u: goto label_38da90;
        case 0x38da94u: goto label_38da94;
        case 0x38da98u: goto label_38da98;
        case 0x38da9cu: goto label_38da9c;
        case 0x38daa0u: goto label_38daa0;
        case 0x38daa4u: goto label_38daa4;
        case 0x38daa8u: goto label_38daa8;
        case 0x38daacu: goto label_38daac;
        case 0x38dab0u: goto label_38dab0;
        case 0x38dab4u: goto label_38dab4;
        case 0x38dab8u: goto label_38dab8;
        case 0x38dabcu: goto label_38dabc;
        case 0x38dac0u: goto label_38dac0;
        case 0x38dac4u: goto label_38dac4;
        case 0x38dac8u: goto label_38dac8;
        case 0x38daccu: goto label_38dacc;
        case 0x38dad0u: goto label_38dad0;
        case 0x38dad4u: goto label_38dad4;
        case 0x38dad8u: goto label_38dad8;
        case 0x38dadcu: goto label_38dadc;
        case 0x38dae0u: goto label_38dae0;
        case 0x38dae4u: goto label_38dae4;
        case 0x38dae8u: goto label_38dae8;
        case 0x38daecu: goto label_38daec;
        case 0x38daf0u: goto label_38daf0;
        case 0x38daf4u: goto label_38daf4;
        case 0x38daf8u: goto label_38daf8;
        case 0x38dafcu: goto label_38dafc;
        case 0x38db00u: goto label_38db00;
        case 0x38db04u: goto label_38db04;
        case 0x38db08u: goto label_38db08;
        case 0x38db0cu: goto label_38db0c;
        case 0x38db10u: goto label_38db10;
        case 0x38db14u: goto label_38db14;
        case 0x38db18u: goto label_38db18;
        case 0x38db1cu: goto label_38db1c;
        case 0x38db20u: goto label_38db20;
        case 0x38db24u: goto label_38db24;
        case 0x38db28u: goto label_38db28;
        case 0x38db2cu: goto label_38db2c;
        case 0x38db30u: goto label_38db30;
        case 0x38db34u: goto label_38db34;
        case 0x38db38u: goto label_38db38;
        case 0x38db3cu: goto label_38db3c;
        case 0x38db40u: goto label_38db40;
        case 0x38db44u: goto label_38db44;
        case 0x38db48u: goto label_38db48;
        case 0x38db4cu: goto label_38db4c;
        case 0x38db50u: goto label_38db50;
        case 0x38db54u: goto label_38db54;
        case 0x38db58u: goto label_38db58;
        case 0x38db5cu: goto label_38db5c;
        case 0x38db60u: goto label_38db60;
        case 0x38db64u: goto label_38db64;
        case 0x38db68u: goto label_38db68;
        case 0x38db6cu: goto label_38db6c;
        case 0x38db70u: goto label_38db70;
        case 0x38db74u: goto label_38db74;
        case 0x38db78u: goto label_38db78;
        case 0x38db7cu: goto label_38db7c;
        case 0x38db80u: goto label_38db80;
        case 0x38db84u: goto label_38db84;
        case 0x38db88u: goto label_38db88;
        case 0x38db8cu: goto label_38db8c;
        case 0x38db90u: goto label_38db90;
        case 0x38db94u: goto label_38db94;
        case 0x38db98u: goto label_38db98;
        case 0x38db9cu: goto label_38db9c;
        case 0x38dba0u: goto label_38dba0;
        case 0x38dba4u: goto label_38dba4;
        case 0x38dba8u: goto label_38dba8;
        case 0x38dbacu: goto label_38dbac;
        case 0x38dbb0u: goto label_38dbb0;
        case 0x38dbb4u: goto label_38dbb4;
        case 0x38dbb8u: goto label_38dbb8;
        case 0x38dbbcu: goto label_38dbbc;
        case 0x38dbc0u: goto label_38dbc0;
        case 0x38dbc4u: goto label_38dbc4;
        case 0x38dbc8u: goto label_38dbc8;
        case 0x38dbccu: goto label_38dbcc;
        case 0x38dbd0u: goto label_38dbd0;
        case 0x38dbd4u: goto label_38dbd4;
        case 0x38dbd8u: goto label_38dbd8;
        case 0x38dbdcu: goto label_38dbdc;
        case 0x38dbe0u: goto label_38dbe0;
        case 0x38dbe4u: goto label_38dbe4;
        case 0x38dbe8u: goto label_38dbe8;
        case 0x38dbecu: goto label_38dbec;
        case 0x38dbf0u: goto label_38dbf0;
        case 0x38dbf4u: goto label_38dbf4;
        case 0x38dbf8u: goto label_38dbf8;
        case 0x38dbfcu: goto label_38dbfc;
        case 0x38dc00u: goto label_38dc00;
        case 0x38dc04u: goto label_38dc04;
        case 0x38dc08u: goto label_38dc08;
        case 0x38dc0cu: goto label_38dc0c;
        case 0x38dc10u: goto label_38dc10;
        case 0x38dc14u: goto label_38dc14;
        case 0x38dc18u: goto label_38dc18;
        case 0x38dc1cu: goto label_38dc1c;
        case 0x38dc20u: goto label_38dc20;
        case 0x38dc24u: goto label_38dc24;
        case 0x38dc28u: goto label_38dc28;
        case 0x38dc2cu: goto label_38dc2c;
        case 0x38dc30u: goto label_38dc30;
        case 0x38dc34u: goto label_38dc34;
        case 0x38dc38u: goto label_38dc38;
        case 0x38dc3cu: goto label_38dc3c;
        case 0x38dc40u: goto label_38dc40;
        case 0x38dc44u: goto label_38dc44;
        case 0x38dc48u: goto label_38dc48;
        case 0x38dc4cu: goto label_38dc4c;
        case 0x38dc50u: goto label_38dc50;
        case 0x38dc54u: goto label_38dc54;
        case 0x38dc58u: goto label_38dc58;
        case 0x38dc5cu: goto label_38dc5c;
        case 0x38dc60u: goto label_38dc60;
        case 0x38dc64u: goto label_38dc64;
        case 0x38dc68u: goto label_38dc68;
        case 0x38dc6cu: goto label_38dc6c;
        case 0x38dc70u: goto label_38dc70;
        case 0x38dc74u: goto label_38dc74;
        case 0x38dc78u: goto label_38dc78;
        case 0x38dc7cu: goto label_38dc7c;
        case 0x38dc80u: goto label_38dc80;
        case 0x38dc84u: goto label_38dc84;
        case 0x38dc88u: goto label_38dc88;
        case 0x38dc8cu: goto label_38dc8c;
        case 0x38dc90u: goto label_38dc90;
        case 0x38dc94u: goto label_38dc94;
        case 0x38dc98u: goto label_38dc98;
        case 0x38dc9cu: goto label_38dc9c;
        case 0x38dca0u: goto label_38dca0;
        case 0x38dca4u: goto label_38dca4;
        case 0x38dca8u: goto label_38dca8;
        case 0x38dcacu: goto label_38dcac;
        case 0x38dcb0u: goto label_38dcb0;
        case 0x38dcb4u: goto label_38dcb4;
        case 0x38dcb8u: goto label_38dcb8;
        case 0x38dcbcu: goto label_38dcbc;
        case 0x38dcc0u: goto label_38dcc0;
        case 0x38dcc4u: goto label_38dcc4;
        case 0x38dcc8u: goto label_38dcc8;
        case 0x38dcccu: goto label_38dccc;
        case 0x38dcd0u: goto label_38dcd0;
        case 0x38dcd4u: goto label_38dcd4;
        case 0x38dcd8u: goto label_38dcd8;
        case 0x38dcdcu: goto label_38dcdc;
        case 0x38dce0u: goto label_38dce0;
        case 0x38dce4u: goto label_38dce4;
        case 0x38dce8u: goto label_38dce8;
        case 0x38dcecu: goto label_38dcec;
        case 0x38dcf0u: goto label_38dcf0;
        case 0x38dcf4u: goto label_38dcf4;
        case 0x38dcf8u: goto label_38dcf8;
        case 0x38dcfcu: goto label_38dcfc;
        case 0x38dd00u: goto label_38dd00;
        case 0x38dd04u: goto label_38dd04;
        case 0x38dd08u: goto label_38dd08;
        case 0x38dd0cu: goto label_38dd0c;
        case 0x38dd10u: goto label_38dd10;
        case 0x38dd14u: goto label_38dd14;
        case 0x38dd18u: goto label_38dd18;
        case 0x38dd1cu: goto label_38dd1c;
        case 0x38dd20u: goto label_38dd20;
        case 0x38dd24u: goto label_38dd24;
        case 0x38dd28u: goto label_38dd28;
        case 0x38dd2cu: goto label_38dd2c;
        case 0x38dd30u: goto label_38dd30;
        case 0x38dd34u: goto label_38dd34;
        case 0x38dd38u: goto label_38dd38;
        case 0x38dd3cu: goto label_38dd3c;
        case 0x38dd40u: goto label_38dd40;
        case 0x38dd44u: goto label_38dd44;
        case 0x38dd48u: goto label_38dd48;
        case 0x38dd4cu: goto label_38dd4c;
        case 0x38dd50u: goto label_38dd50;
        case 0x38dd54u: goto label_38dd54;
        case 0x38dd58u: goto label_38dd58;
        case 0x38dd5cu: goto label_38dd5c;
        case 0x38dd60u: goto label_38dd60;
        case 0x38dd64u: goto label_38dd64;
        case 0x38dd68u: goto label_38dd68;
        case 0x38dd6cu: goto label_38dd6c;
        case 0x38dd70u: goto label_38dd70;
        case 0x38dd74u: goto label_38dd74;
        case 0x38dd78u: goto label_38dd78;
        case 0x38dd7cu: goto label_38dd7c;
        case 0x38dd80u: goto label_38dd80;
        case 0x38dd84u: goto label_38dd84;
        case 0x38dd88u: goto label_38dd88;
        case 0x38dd8cu: goto label_38dd8c;
        case 0x38dd90u: goto label_38dd90;
        case 0x38dd94u: goto label_38dd94;
        case 0x38dd98u: goto label_38dd98;
        case 0x38dd9cu: goto label_38dd9c;
        case 0x38dda0u: goto label_38dda0;
        case 0x38dda4u: goto label_38dda4;
        case 0x38dda8u: goto label_38dda8;
        case 0x38ddacu: goto label_38ddac;
        case 0x38ddb0u: goto label_38ddb0;
        case 0x38ddb4u: goto label_38ddb4;
        case 0x38ddb8u: goto label_38ddb8;
        case 0x38ddbcu: goto label_38ddbc;
        case 0x38ddc0u: goto label_38ddc0;
        case 0x38ddc4u: goto label_38ddc4;
        case 0x38ddc8u: goto label_38ddc8;
        case 0x38ddccu: goto label_38ddcc;
        case 0x38ddd0u: goto label_38ddd0;
        case 0x38ddd4u: goto label_38ddd4;
        case 0x38ddd8u: goto label_38ddd8;
        case 0x38dddcu: goto label_38dddc;
        case 0x38dde0u: goto label_38dde0;
        case 0x38dde4u: goto label_38dde4;
        case 0x38dde8u: goto label_38dde8;
        case 0x38ddecu: goto label_38ddec;
        case 0x38ddf0u: goto label_38ddf0;
        case 0x38ddf4u: goto label_38ddf4;
        case 0x38ddf8u: goto label_38ddf8;
        case 0x38ddfcu: goto label_38ddfc;
        case 0x38de00u: goto label_38de00;
        case 0x38de04u: goto label_38de04;
        case 0x38de08u: goto label_38de08;
        case 0x38de0cu: goto label_38de0c;
        case 0x38de10u: goto label_38de10;
        case 0x38de14u: goto label_38de14;
        case 0x38de18u: goto label_38de18;
        case 0x38de1cu: goto label_38de1c;
        case 0x38de20u: goto label_38de20;
        case 0x38de24u: goto label_38de24;
        case 0x38de28u: goto label_38de28;
        case 0x38de2cu: goto label_38de2c;
        case 0x38de30u: goto label_38de30;
        case 0x38de34u: goto label_38de34;
        case 0x38de38u: goto label_38de38;
        case 0x38de3cu: goto label_38de3c;
        case 0x38de40u: goto label_38de40;
        case 0x38de44u: goto label_38de44;
        case 0x38de48u: goto label_38de48;
        case 0x38de4cu: goto label_38de4c;
        case 0x38de50u: goto label_38de50;
        case 0x38de54u: goto label_38de54;
        case 0x38de58u: goto label_38de58;
        case 0x38de5cu: goto label_38de5c;
        case 0x38de60u: goto label_38de60;
        case 0x38de64u: goto label_38de64;
        case 0x38de68u: goto label_38de68;
        case 0x38de6cu: goto label_38de6c;
        case 0x38de70u: goto label_38de70;
        case 0x38de74u: goto label_38de74;
        case 0x38de78u: goto label_38de78;
        case 0x38de7cu: goto label_38de7c;
        case 0x38de80u: goto label_38de80;
        case 0x38de84u: goto label_38de84;
        case 0x38de88u: goto label_38de88;
        case 0x38de8cu: goto label_38de8c;
        case 0x38de90u: goto label_38de90;
        case 0x38de94u: goto label_38de94;
        case 0x38de98u: goto label_38de98;
        case 0x38de9cu: goto label_38de9c;
        case 0x38dea0u: goto label_38dea0;
        case 0x38dea4u: goto label_38dea4;
        case 0x38dea8u: goto label_38dea8;
        case 0x38deacu: goto label_38deac;
        case 0x38deb0u: goto label_38deb0;
        case 0x38deb4u: goto label_38deb4;
        case 0x38deb8u: goto label_38deb8;
        case 0x38debcu: goto label_38debc;
        case 0x38dec0u: goto label_38dec0;
        case 0x38dec4u: goto label_38dec4;
        case 0x38dec8u: goto label_38dec8;
        case 0x38deccu: goto label_38decc;
        case 0x38ded0u: goto label_38ded0;
        case 0x38ded4u: goto label_38ded4;
        case 0x38ded8u: goto label_38ded8;
        case 0x38dedcu: goto label_38dedc;
        case 0x38dee0u: goto label_38dee0;
        case 0x38dee4u: goto label_38dee4;
        case 0x38dee8u: goto label_38dee8;
        case 0x38deecu: goto label_38deec;
        case 0x38def0u: goto label_38def0;
        case 0x38def4u: goto label_38def4;
        case 0x38def8u: goto label_38def8;
        case 0x38defcu: goto label_38defc;
        case 0x38df00u: goto label_38df00;
        case 0x38df04u: goto label_38df04;
        case 0x38df08u: goto label_38df08;
        case 0x38df0cu: goto label_38df0c;
        case 0x38df10u: goto label_38df10;
        case 0x38df14u: goto label_38df14;
        case 0x38df18u: goto label_38df18;
        case 0x38df1cu: goto label_38df1c;
        case 0x38df20u: goto label_38df20;
        case 0x38df24u: goto label_38df24;
        case 0x38df28u: goto label_38df28;
        case 0x38df2cu: goto label_38df2c;
        case 0x38df30u: goto label_38df30;
        case 0x38df34u: goto label_38df34;
        case 0x38df38u: goto label_38df38;
        case 0x38df3cu: goto label_38df3c;
        case 0x38df40u: goto label_38df40;
        case 0x38df44u: goto label_38df44;
        case 0x38df48u: goto label_38df48;
        case 0x38df4cu: goto label_38df4c;
        case 0x38df50u: goto label_38df50;
        case 0x38df54u: goto label_38df54;
        case 0x38df58u: goto label_38df58;
        case 0x38df5cu: goto label_38df5c;
        case 0x38df60u: goto label_38df60;
        case 0x38df64u: goto label_38df64;
        case 0x38df68u: goto label_38df68;
        case 0x38df6cu: goto label_38df6c;
        case 0x38df70u: goto label_38df70;
        case 0x38df74u: goto label_38df74;
        case 0x38df78u: goto label_38df78;
        case 0x38df7cu: goto label_38df7c;
        case 0x38df80u: goto label_38df80;
        case 0x38df84u: goto label_38df84;
        case 0x38df88u: goto label_38df88;
        case 0x38df8cu: goto label_38df8c;
        case 0x38df90u: goto label_38df90;
        case 0x38df94u: goto label_38df94;
        case 0x38df98u: goto label_38df98;
        case 0x38df9cu: goto label_38df9c;
        case 0x38dfa0u: goto label_38dfa0;
        case 0x38dfa4u: goto label_38dfa4;
        case 0x38dfa8u: goto label_38dfa8;
        case 0x38dfacu: goto label_38dfac;
        case 0x38dfb0u: goto label_38dfb0;
        case 0x38dfb4u: goto label_38dfb4;
        case 0x38dfb8u: goto label_38dfb8;
        case 0x38dfbcu: goto label_38dfbc;
        case 0x38dfc0u: goto label_38dfc0;
        case 0x38dfc4u: goto label_38dfc4;
        case 0x38dfc8u: goto label_38dfc8;
        case 0x38dfccu: goto label_38dfcc;
        case 0x38dfd0u: goto label_38dfd0;
        case 0x38dfd4u: goto label_38dfd4;
        case 0x38dfd8u: goto label_38dfd8;
        case 0x38dfdcu: goto label_38dfdc;
        case 0x38dfe0u: goto label_38dfe0;
        case 0x38dfe4u: goto label_38dfe4;
        case 0x38dfe8u: goto label_38dfe8;
        case 0x38dfecu: goto label_38dfec;
        case 0x38dff0u: goto label_38dff0;
        case 0x38dff4u: goto label_38dff4;
        case 0x38dff8u: goto label_38dff8;
        case 0x38dffcu: goto label_38dffc;
        case 0x38e000u: goto label_38e000;
        case 0x38e004u: goto label_38e004;
        case 0x38e008u: goto label_38e008;
        case 0x38e00cu: goto label_38e00c;
        case 0x38e010u: goto label_38e010;
        case 0x38e014u: goto label_38e014;
        case 0x38e018u: goto label_38e018;
        case 0x38e01cu: goto label_38e01c;
        case 0x38e020u: goto label_38e020;
        case 0x38e024u: goto label_38e024;
        case 0x38e028u: goto label_38e028;
        case 0x38e02cu: goto label_38e02c;
        default: break;
    }

    ctx->pc = 0x38d2b8u;

label_38d2b8:
    // 0x38d2b8: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x38d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_38d2bc:
    // 0x38d2bc: 0xffb702f0  sd          $s7, 0x2F0($sp)
    ctx->pc = 0x38d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 23));
label_38d2c0:
    // 0x38d2c0: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x38d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
label_38d2c4:
    // 0x38d2c4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x38d2c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38d2c8:
    // 0x38d2c8: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x38d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
label_38d2cc:
    // 0x38d2cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x38d2ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38d2d0:
    // 0x38d2d0: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x38d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
label_38d2d4:
    // 0x38d2d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38d2d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d2d8:
    // 0x38d2d8: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x38d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
label_38d2dc:
    // 0x38d2dc: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d2e0:
    // 0x38d2e0: 0xffbe0300  sd          $fp, 0x300($sp)
    ctx->pc = 0x38d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 30));
label_38d2e4:
    // 0x38d2e4: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x38d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
label_38d2e8:
    // 0x38d2e8: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x38d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_38d2ec:
    // 0x38d2ec: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x38d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
label_38d2f0:
    // 0x38d2f0: 0xffb00280  sd          $s0, 0x280($sp)
    ctx->pc = 0x38d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
label_38d2f4:
    // 0x38d2f4: 0xafa70260  sw          $a3, 0x260($sp)
    ctx->pc = 0x38d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 7));
label_38d2f8:
    // 0x38d2f8: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x38d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_38d2fc:
    // 0x38d2fc: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x38d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_38d300:
    // 0x38d300: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x38d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_38d304:
    // 0x38d304: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x38d304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_38d308:
    // 0x38d308: 0x10000008  b           . + 4 + (0x8 << 2)
label_38d30c:
    if (ctx->pc == 0x38D30Cu) {
        ctx->pc = 0x38D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D308u;
        // 0x38d30c: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D310u;
        goto label_38d310;
    }
    ctx->pc = 0x38D308u;
    {
        const bool branch_taken_0x38d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D308u;
        // 0x38d30c: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d308) {
            ctx->pc = 0x38D32Cu;
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D310u;
label_38d310:
    // 0x38d310: 0x10000278  b           . + 4 + (0x278 << 2)
label_38d314:
    if (ctx->pc == 0x38D314u) {
        ctx->pc = 0x38D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D310u;
        // 0x38d314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D318u;
        goto label_38d318;
    }
    ctx->pc = 0x38D310u;
    {
        const bool branch_taken_0x38d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D310u;
        // 0x38d314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d310) {
            ctx->pc = 0x38DCF4u;
            goto label_38dcf4;
        }
    }
    ctx->pc = 0x38D318u;
label_38d318:
    // 0x38d318: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x38d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_38d31c:
    // 0x38d31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d320:
    // 0x38d320: 0x10000002  b           . + 4 + (0x2 << 2)
label_38d324:
    if (ctx->pc == 0x38D324u) {
        ctx->pc = 0x38D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D320u;
        // 0x38d324: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D328u;
        goto label_38d328;
    }
    ctx->pc = 0x38D320u;
    {
        const bool branch_taken_0x38d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D320u;
        // 0x38d324: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d320) {
            ctx->pc = 0x38D32Cu;
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D328u;
label_38d328:
    // 0x38d328: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d32c:
    // 0x38d32c: 0x92f10000  lbu         $s1, 0x0($s7)
    ctx->pc = 0x38d32cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_38d330:
    // 0x38d330: 0x12200329  beqz        $s1, . + 4 + (0x329 << 2)
label_38d334:
    if (ctx->pc == 0x38D334u) {
        ctx->pc = 0x38D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D330u;
        // 0x38d334: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D338u;
        goto label_38d338;
    }
    ctx->pc = 0x38D330u;
    {
        const bool branch_taken_0x38d330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D330u;
        // 0x38d334: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d330) {
            ctx->pc = 0x38DFD8u;
            goto label_38dfd8;
        }
    }
    ctx->pc = 0x38D338u;
label_38d338:
    // 0x38d338: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x38d338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_38d33c:
    // 0x38d33c: 0x2462f039  addiu       $v0, $v1, -0xFC7
    ctx->pc = 0x38d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963257));
label_38d340:
    // 0x38d340: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38d344:
    // 0x38d344: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38d344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38d348:
    // 0x38d348: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x38d348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_38d34c:
    // 0x38d34c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38d350:
    if (ctx->pc == 0x38D350u) {
        ctx->pc = 0x38D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D34Cu;
        // 0x38d350: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D354u;
        goto label_38d354;
    }
    ctx->pc = 0x38D34Cu;
    {
        const bool branch_taken_0x38d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D34Cu;
        // 0x38d350: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d34c) {
            ctx->pc = 0x38D3ACu;
            goto label_38d3ac;
        }
    }
    ctx->pc = 0x38D354u;
label_38d354:
    // 0x38d354: 0x10000004  b           . + 4 + (0x4 << 2)
label_38d358:
    if (ctx->pc == 0x38D358u) {
        ctx->pc = 0x38D35Cu;
        goto label_38d35c;
    }
    ctx->pc = 0x38D354u;
    {
        const bool branch_taken_0x38d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d354) {
            ctx->pc = 0x38D368u;
            goto label_38d368;
        }
    }
    ctx->pc = 0x38D35Cu;
label_38d35c:
    // 0x38d35c: 0x0  nop
    ctx->pc = 0x38d35cu;
    // NOP
label_38d360:
    // 0x38d360: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38d360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38d364:
    // 0x38d364: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x38d364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_38d368:
    // 0x38d368: 0xc0e3ab8  jal         func_38EAE0
label_38d36c:
    if (ctx->pc == 0x38D36Cu) {
        ctx->pc = 0x38D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D368u;
        // 0x38d36c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D370u;
        goto label_38d370;
    }
    ctx->pc = 0x38D368u;
    SET_GPR_U32(ctx, 31, 0x38D370u);
    ctx->pc = 0x38D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D368u;
    // 0x38d36c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x38D368u, 0x38D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D370u;
label_38d370:
    // 0x38d370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38d370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d374:
    // 0x38d374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d378:
    // 0x38d378: 0x1222ffe7  beq         $s1, $v0, . + 4 + (-0x19 << 2)
label_38d37c:
    if (ctx->pc == 0x38D37Cu) {
        ctx->pc = 0x38D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D378u;
        // 0x38d37c: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D380u;
        goto label_38d380;
    }
    ctx->pc = 0x38D378u;
    {
        const bool branch_taken_0x38d378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D378u;
        // 0x38d37c: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d378) {
            ctx->pc = 0x38D318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d318;
        }
    }
    ctx->pc = 0x38D380u;
label_38d380:
    // 0x38d380: 0x2462f039  addiu       $v0, $v1, -0xFC7
    ctx->pc = 0x38d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963257));
label_38d384:
    // 0x38d384: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38d388:
    // 0x38d388: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38d388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38d38c:
    // 0x38d38c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x38d38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_38d390:
    // 0x38d390: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_38d394:
    if (ctx->pc == 0x38D394u) {
        ctx->pc = 0x38D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D390u;
        // 0x38d394: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D398u;
        goto label_38d398;
    }
    ctx->pc = 0x38D390u;
    {
        const bool branch_taken_0x38d390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D390u;
        // 0x38d394: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d390) {
            ctx->pc = 0x38D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d360;
        }
    }
    ctx->pc = 0x38D398u;
label_38d398:
    // 0x38d398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38d39c:
    // 0x38d39c: 0xc0e3aac  jal         func_38EAB0
label_38d3a0:
    if (ctx->pc == 0x38D3A0u) {
        ctx->pc = 0x38D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D39Cu;
        // 0x38d3a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3A4u;
        goto label_38d3a4;
    }
    ctx->pc = 0x38D39Cu;
    SET_GPR_U32(ctx, 31, 0x38D3A4u);
    ctx->pc = 0x38D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D39Cu;
    // 0x38d3a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAB0u, 0x38D39Cu, 0x38D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D3A4u;
label_38d3a4:
    // 0x38d3a4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_38d3a8:
    if (ctx->pc == 0x38D3A8u) {
        ctx->pc = 0x38D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3A4u;
        // 0x38d3a8: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3ACu;
        goto label_38d3ac;
    }
    ctx->pc = 0x38D3A4u;
    {
        const bool branch_taken_0x38d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3A4u;
        // 0x38d3a8: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3a4) {
            ctx->pc = 0x38D330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d330;
        }
    }
    ctx->pc = 0x38D3ACu;
label_38d3ac:
    // 0x38d3ac: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x38d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_38d3b0:
    // 0x38d3b0: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_38d3b4:
    if (ctx->pc == 0x38D3B4u) {
        ctx->pc = 0x38D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3B0u;
        // 0x38d3b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3B8u;
        goto label_38d3b8;
    }
    ctx->pc = 0x38D3B0u;
    {
        const bool branch_taken_0x38d3b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x38D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3B0u;
        // 0x38d3b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3b0) {
            ctx->pc = 0x38D3E8u;
            goto label_38d3e8;
        }
    }
    ctx->pc = 0x38D3B8u;
label_38d3b8:
    // 0x38d3b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38d3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d3bc:
    // 0x38d3bc: 0x92f10000  lbu         $s1, 0x0($s7)
    ctx->pc = 0x38d3bcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_38d3c0:
    // 0x38d3c0: 0x2e220079  sltiu       $v0, $s1, 0x79
    ctx->pc = 0x38d3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_38d3c4:
    // 0x38d3c4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_38d3c8:
    if (ctx->pc == 0x38D3C8u) {
        ctx->pc = 0x38D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3C4u;
        // 0x38d3c8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3CCu;
        goto label_38d3cc;
    }
    ctx->pc = 0x38D3C4u;
    {
        const bool branch_taken_0x38d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3C4u;
        // 0x38d3c8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3c4) {
            ctx->pc = 0x38D5F4u;
            goto label_38d5f4;
        }
    }
    ctx->pc = 0x38D3CCu;
label_38d3cc:
    // 0x38d3cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38d3d0:
    // 0x38d3d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x38d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38d3d4:
    // 0x38d3d4: 0x2442d3a0  addiu       $v0, $v0, -0x2C60
    ctx->pc = 0x38d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955936));
label_38d3d8:
    // 0x38d3d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38d3dc:
    // 0x38d3dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38d3e0:
    // 0x38d3e0: 0x800008  jr          $a0
label_38d3e4:
    if (ctx->pc == 0x38D3E4u) {
        ctx->pc = 0x38D3E8u;
        goto label_38d3e8;
    }
    ctx->pc = 0x38D3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38D3E8u: goto label_38d3e8;
            case 0x38D418u: goto label_38d418;
            case 0x38D428u: goto label_38d428;
            case 0x38D440u: goto label_38d440;
            case 0x38D458u: goto label_38d458;
            case 0x38D470u: goto label_38d470;
            case 0x38D498u: goto label_38d498;
            case 0x38D49Cu: goto label_38d49c;
            case 0x38D4B8u: goto label_38d4b8;
            case 0x38D4D0u: goto label_38d4d0;
            case 0x38D4D4u: goto label_38d4d4;
            case 0x38D4F0u: goto label_38d4f0;
            case 0x38D50Cu: goto label_38d50c;
            case 0x38D52Cu: goto label_38d52c;
            case 0x38D534u: goto label_38d534;
            case 0x38D53Cu: goto label_38d53c;
            case 0x38D558u: goto label_38d558;
            case 0x38D564u: goto label_38d564;
            case 0x38D584u: goto label_38d584;
            case 0x38D5E8u: goto label_38d5e8;
            case 0x38D5F4u: goto label_38d5f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D3E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38D3E8u;
label_38d3e8:
    // 0x38d3e8: 0xc0e3ab8  jal         func_38EAE0
label_38d3ec:
    if (ctx->pc == 0x38D3ECu) {
        ctx->pc = 0x38D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3E8u;
        // 0x38d3ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3F0u;
        goto label_38d3f0;
    }
    ctx->pc = 0x38D3E8u;
    SET_GPR_U32(ctx, 31, 0x38D3F0u);
    ctx->pc = 0x38D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D3E8u;
    // 0x38d3ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x38D3E8u, 0x38D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D3F0u;
label_38d3f0:
    // 0x38d3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38d3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d3f4:
    // 0x38d3f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d3f8:
    // 0x38d3f8: 0x120202eb  beq         $s0, $v0, . + 4 + (0x2EB << 2)
label_38d3fc:
    if (ctx->pc == 0x38D3FCu) {
        ctx->pc = 0x38D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3F8u;
        // 0x38d3fc: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D400u;
        goto label_38d400;
    }
    ctx->pc = 0x38D3F8u;
    {
        const bool branch_taken_0x38d3f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3F8u;
        // 0x38d3fc: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3f8) {
            ctx->pc = 0x38DFA8u;
            goto label_38dfa8;
        }
    }
    ctx->pc = 0x38D400u;
label_38d400:
    // 0x38d400: 0x1611ffc3  bne         $s0, $s1, . + 4 + (-0x3D << 2)
label_38d404:
    if (ctx->pc == 0x38D404u) {
        ctx->pc = 0x38D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D400u;
        // 0x38d404: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D408u;
        goto label_38d408;
    }
    ctx->pc = 0x38D400u;
    {
        const bool branch_taken_0x38d400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x38D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D400u;
        // 0x38d404: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d400) {
            ctx->pc = 0x38D310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d310;
        }
    }
    ctx->pc = 0x38D408u;
label_38d408:
    // 0x38d408: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d40c:
    // 0x38d40c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38d410:
    // 0x38d410: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_38d414:
    if (ctx->pc == 0x38D414u) {
        ctx->pc = 0x38D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D410u;
        // 0x38d414: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D418u;
        goto label_38d418;
    }
    ctx->pc = 0x38D410u;
    {
        const bool branch_taken_0x38d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D410u;
        // 0x38d414: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d410) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D418u;
label_38d418:
    // 0x38d418: 0x166002e9  bnez        $s3, . + 4 + (0x2E9 << 2)
label_38d41c:
    if (ctx->pc == 0x38D41Cu) {
        ctx->pc = 0x38D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D418u;
        // 0x38d41c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D420u;
        goto label_38d420;
    }
    ctx->pc = 0x38D418u;
    {
        const bool branch_taken_0x38d418 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D418u;
        // 0x38d41c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d418) {
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38D420u;
label_38d420:
    // 0x38d420: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_38d424:
    if (ctx->pc == 0x38D424u) {
        ctx->pc = 0x38D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D420u;
        // 0x38d424: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D428u;
        goto label_38d428;
    }
    ctx->pc = 0x38D420u;
    {
        const bool branch_taken_0x38d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D420u;
        // 0x38d424: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d420) {
            ctx->pc = 0x38D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3c0;
        }
    }
    ctx->pc = 0x38D428u;
label_38d428:
    // 0x38d428: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x38d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_38d42c:
    // 0x38d42c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x38d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38d430:
    // 0x38d430: 0x144002e3  bnez        $v0, . + 4 + (0x2E3 << 2)
label_38d434:
    if (ctx->pc == 0x38D434u) {
        ctx->pc = 0x38D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D430u;
        // 0x38d434: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D438u;
        goto label_38d438;
    }
    ctx->pc = 0x38D430u;
    {
        const bool branch_taken_0x38d430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D430u;
        // 0x38d434: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d430) {
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38D438u;
label_38d438:
    // 0x38d438: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_38d43c:
    if (ctx->pc == 0x38D43Cu) {
        ctx->pc = 0x38D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D438u;
        // 0x38d43c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D440u;
        goto label_38d440;
    }
    ctx->pc = 0x38D438u;
    {
        const bool branch_taken_0x38d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D438u;
        // 0x38d43c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d438) {
            ctx->pc = 0x38D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3c0;
        }
    }
    ctx->pc = 0x38D440u;
label_38d440:
    // 0x38d440: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x38d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_38d444:
    // 0x38d444: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x38d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38d448:
    // 0x38d448: 0x144002dd  bnez        $v0, . + 4 + (0x2DD << 2)
label_38d44c:
    if (ctx->pc == 0x38D44Cu) {
        ctx->pc = 0x38D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D448u;
        // 0x38d44c: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D450u;
        goto label_38d450;
    }
    ctx->pc = 0x38D448u;
    {
        const bool branch_taken_0x38d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D448u;
        // 0x38d44c: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d448) {
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38D450u;
label_38d450:
    // 0x38d450: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_38d454:
    if (ctx->pc == 0x38D454u) {
        ctx->pc = 0x38D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D450u;
        // 0x38d454: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D458u;
        goto label_38d458;
    }
    ctx->pc = 0x38D450u;
    {
        const bool branch_taken_0x38d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D450u;
        // 0x38d454: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d450) {
            ctx->pc = 0x38D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3c0;
        }
    }
    ctx->pc = 0x38D458u;
label_38d458:
    // 0x38d458: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x38d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_38d45c:
    // 0x38d45c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x38d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38d460:
    // 0x38d460: 0x144002d7  bnez        $v0, . + 4 + (0x2D7 << 2)
label_38d464:
    if (ctx->pc == 0x38D464u) {
        ctx->pc = 0x38D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D460u;
        // 0x38d464: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D468u;
        goto label_38d468;
    }
    ctx->pc = 0x38D460u;
    {
        const bool branch_taken_0x38d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D460u;
        // 0x38d464: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d460) {
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38D468u;
label_38d468:
    // 0x38d468: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_38d46c:
    if (ctx->pc == 0x38D46Cu) {
        ctx->pc = 0x38D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D468u;
        // 0x38d46c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D470u;
        goto label_38d470;
    }
    ctx->pc = 0x38D468u;
    {
        const bool branch_taken_0x38d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D468u;
        // 0x38d46c: 0x92f10000  lbu         $s1, 0x0($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d468) {
            ctx->pc = 0x38D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3c0;
        }
    }
    ctx->pc = 0x38D470u;
label_38d470:
    // 0x38d470: 0x2402ffb7  addiu       $v0, $zero, -0x49
    ctx->pc = 0x38d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967223));
label_38d474:
    // 0x38d474: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x38d474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38d478:
    // 0x38d478: 0x144002d1  bnez        $v0, . + 4 + (0x2D1 << 2)
label_38d47c:
    if (ctx->pc == 0x38D47Cu) {
        ctx->pc = 0x38D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D478u;
        // 0x38d47c: 0x1510b8  dsll        $v0, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D480u;
        goto label_38d480;
    }
    ctx->pc = 0x38D478u;
    {
        const bool branch_taken_0x38d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D478u;
        // 0x38d47c: 0x1510b8  dsll        $v0, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d478) {
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38D480u;
label_38d480:
    // 0x38d480: 0x36730040  ori         $s3, $s3, 0x40
    ctx->pc = 0x38d480u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)64);
label_38d484:
    // 0x38d484: 0x55102d  daddu       $v0, $v0, $s5
    ctx->pc = 0x38d484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 21));
label_38d488:
    // 0x38d488: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x38d488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_38d48c:
    // 0x38d48c: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x38d48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_38d490:
    // 0x38d490: 0x1000ffca  b           . + 4 + (-0x36 << 2)
label_38d494:
    if (ctx->pc == 0x38D494u) {
        ctx->pc = 0x38D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D490u;
        // 0x38d494: 0x6455ffd0  daddiu      $s5, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D498u;
        goto label_38d498;
    }
    ctx->pc = 0x38D490u;
    {
        const bool branch_taken_0x38d490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D490u;
        // 0x38d494: 0x6455ffd0  daddiu      $s5, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d490) {
            ctx->pc = 0x38D3BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3bc;
        }
    }
    ctx->pc = 0x38D498u;
label_38d498:
    // 0x38d498: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x38d498u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_38d49c:
    // 0x38d49c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x38d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_38d4a0:
    // 0x38d4a0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d4a4:
    // 0x38d4a4: 0x2442d0c0  addiu       $v0, $v0, -0x2F40
    ctx->pc = 0x38d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
label_38d4a8:
    // 0x38d4a8: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x38d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_38d4ac:
    // 0x38d4ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x38d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38d4b0:
    // 0x38d4b0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_38d4b4:
    if (ctx->pc == 0x38D4B4u) {
        ctx->pc = 0x38D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4B0u;
        // 0x38d4b4: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4B8u;
        goto label_38d4b8;
    }
    ctx->pc = 0x38D4B0u;
    {
        const bool branch_taken_0x38d4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4B0u;
        // 0x38d4b4: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d4b0) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D4B8u;
label_38d4b8:
    // 0x38d4b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x38d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_38d4bc:
    // 0x38d4bc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d4c0:
    // 0x38d4c0: 0x2442d0c0  addiu       $v0, $v0, -0x2F40
    ctx->pc = 0x38d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
label_38d4c4:
    // 0x38d4c4: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x38d4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_38d4c8:
    // 0x38d4c8: 0x10000056  b           . + 4 + (0x56 << 2)
label_38d4cc:
    if (ctx->pc == 0x38D4CCu) {
        ctx->pc = 0x38D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4C8u;
        // 0x38d4cc: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4D0u;
        goto label_38d4d0;
    }
    ctx->pc = 0x38D4C8u;
    {
        const bool branch_taken_0x38d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4C8u;
        // 0x38d4cc: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d4c8) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D4D0u;
label_38d4d0:
    // 0x38d4d0: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x38d4d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_38d4d4:
    // 0x38d4d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x38d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_38d4d8:
    // 0x38d4d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38d4dc:
    // 0x38d4dc: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x38d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_38d4e0:
    // 0x38d4e0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d4e4:
    // 0x38d4e4: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x38d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_38d4e8:
    // 0x38d4e8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_38d4ec:
    if (ctx->pc == 0x38D4ECu) {
        ctx->pc = 0x38D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4E8u;
        // 0x38d4ec: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4F0u;
        goto label_38d4f0;
    }
    ctx->pc = 0x38D4E8u;
    {
        const bool branch_taken_0x38d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4E8u;
        // 0x38d4ec: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d4e8) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D4F0u;
label_38d4f0:
    // 0x38d4f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x38d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_38d4f4:
    // 0x38d4f4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x38d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38d4f8:
    // 0x38d4f8: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x38d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_38d4fc:
    // 0x38d4fc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d500:
    // 0x38d500: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x38d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_38d504:
    // 0x38d504: 0x10000047  b           . + 4 + (0x47 << 2)
label_38d508:
    if (ctx->pc == 0x38D508u) {
        ctx->pc = 0x38D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D504u;
        // 0x38d508: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D50Cu;
        goto label_38d50c;
    }
    ctx->pc = 0x38D504u;
    {
        const bool branch_taken_0x38d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D504u;
        // 0x38d508: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d504) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D50Cu;
label_38d50c:
    // 0x38d50c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x38d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_38d510:
    // 0x38d510: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x38d510u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_38d514:
    // 0x38d514: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x38d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_38d518:
    // 0x38d518: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d51c:
    // 0x38d51c: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x38d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_38d520:
    // 0x38d520: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38d524:
    // 0x38d524: 0x1000003f  b           . + 4 + (0x3F << 2)
label_38d528:
    if (ctx->pc == 0x38D528u) {
        ctx->pc = 0x38D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D524u;
        // 0x38d528: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D52Cu;
        goto label_38d52c;
    }
    ctx->pc = 0x38D524u;
    {
        const bool branch_taken_0x38d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D524u;
        // 0x38d528: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d524) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D52Cu;
label_38d52c:
    // 0x38d52c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_38d530:
    if (ctx->pc == 0x38D530u) {
        ctx->pc = 0x38D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D52Cu;
        // 0x38d530: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D534u;
        goto label_38d534;
    }
    ctx->pc = 0x38D52Cu;
    {
        const bool branch_taken_0x38d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D52Cu;
        // 0x38d530: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d52c) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D534u;
label_38d534:
    // 0x38d534: 0x1000003b  b           . + 4 + (0x3B << 2)
label_38d538:
    if (ctx->pc == 0x38D538u) {
        ctx->pc = 0x38D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D534u;
        // 0x38d538: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D53Cu;
        goto label_38d53c;
    }
    ctx->pc = 0x38D534u;
    {
        const bool branch_taken_0x38d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D534u;
        // 0x38d538: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d534) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D53Cu;
label_38d53c:
    // 0x38d53c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x38d53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38d540:
    // 0x38d540: 0xc0e380c  jal         func_38E030
label_38d544:
    if (ctx->pc == 0x38D544u) {
        ctx->pc = 0x38D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D540u;
        // 0x38d544: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D548u;
        goto label_38d548;
    }
    ctx->pc = 0x38D540u;
    SET_GPR_U32(ctx, 31, 0x38D548u);
    ctx->pc = 0x38D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D540u;
    // 0x38d544: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E030u, 0x38D540u, 0x38D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D548u;
label_38d548:
    // 0x38d548: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x38d548u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_38d54c:
    // 0x38d54c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x38d54cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d550:
    // 0x38d550: 0x10000034  b           . + 4 + (0x34 << 2)
label_38d554:
    if (ctx->pc == 0x38D554u) {
        ctx->pc = 0x38D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D550u;
        // 0x38d554: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D558u;
        goto label_38d558;
    }
    ctx->pc = 0x38D550u;
    {
        const bool branch_taken_0x38d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D550u;
        // 0x38d554: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d550) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D558u;
label_38d558:
    // 0x38d558: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x38d558u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_38d55c:
    // 0x38d55c: 0x10000031  b           . + 4 + (0x31 << 2)
label_38d560:
    if (ctx->pc == 0x38D560u) {
        ctx->pc = 0x38D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D55Cu;
        // 0x38d560: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D564u;
        goto label_38d564;
    }
    ctx->pc = 0x38D55Cu;
    {
        const bool branch_taken_0x38d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D55Cu;
        // 0x38d560: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d55c) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D564u;
label_38d564:
    // 0x38d564: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x38d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_38d568:
    // 0x38d568: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x38d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38d56c:
    // 0x38d56c: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x38d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_38d570:
    // 0x38d570: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x38d570u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_38d574:
    // 0x38d574: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x38d574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_38d578:
    // 0x38d578: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d57c:
    // 0x38d57c: 0x10000029  b           . + 4 + (0x29 << 2)
label_38d580:
    if (ctx->pc == 0x38D580u) {
        ctx->pc = 0x38D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D57Cu;
        // 0x38d580: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D584u;
        goto label_38d584;
    }
    ctx->pc = 0x38D57Cu;
    {
        const bool branch_taken_0x38d57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D57Cu;
        // 0x38d580: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d57c) {
            ctx->pc = 0x38D624u;
            goto label_38d624;
        }
    }
    ctx->pc = 0x38D584u;
label_38d584:
    // 0x38d584: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x38d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38d588:
    // 0x38d588: 0x5440ff68  bnel        $v0, $zero, . + 4 + (-0x98 << 2)
label_38d58c:
    if (ctx->pc == 0x38D58Cu) {
        ctx->pc = 0x38D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D588u;
        // 0x38d58c: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D590u;
        goto label_38d590;
    }
    ctx->pc = 0x38D588u;
    {
        const bool branch_taken_0x38d588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d588) {
            ctx->pc = 0x38D58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D588u;
            // 0x38d58c: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D590u;
label_38d590:
    // 0x38d590: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x38d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_38d594:
    // 0x38d594: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38d598:
    if (ctx->pc == 0x38D598u) {
        ctx->pc = 0x38D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D594u;
        // 0x38d598: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D59Cu;
        goto label_38d59c;
    }
    ctx->pc = 0x38D594u;
    {
        const bool branch_taken_0x38d594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D594u;
        // 0x38d598: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d594) {
            ctx->pc = 0x38D5B0u;
            goto label_38d5b0;
        }
    }
    ctx->pc = 0x38D59Cu;
label_38d59c:
    // 0x38d59c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38d59cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38d5a0:
    // 0x38d5a0: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38d5a4:
    // 0x38d5a4: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d5a8:
    // 0x38d5a8: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
label_38d5ac:
    if (ctx->pc == 0x38D5ACu) {
        ctx->pc = 0x38D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5A8u;
        // 0x38d5ac: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5B0u;
        goto label_38d5b0;
    }
    ctx->pc = 0x38D5A8u;
    {
        const bool branch_taken_0x38d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5A8u;
        // 0x38d5ac: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5a8) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D5B0u;
label_38d5b0:
    // 0x38d5b0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x38d5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_38d5b4:
    // 0x38d5b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38d5b8:
    if (ctx->pc == 0x38D5B8u) {
        ctx->pc = 0x38D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5B4u;
        // 0x38d5b8: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5BCu;
        goto label_38d5bc;
    }
    ctx->pc = 0x38D5B4u;
    {
        const bool branch_taken_0x38d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5B4u;
        // 0x38d5b8: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5b4) {
            ctx->pc = 0x38D5D0u;
            goto label_38d5d0;
        }
    }
    ctx->pc = 0x38D5BCu;
label_38d5bc:
    // 0x38d5bc: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38d5bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38d5c0:
    // 0x38d5c0: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38d5c4:
    // 0x38d5c4: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d5c8:
    // 0x38d5c8: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_38d5cc:
    if (ctx->pc == 0x38D5CCu) {
        ctx->pc = 0x38D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5C8u;
        // 0x38d5cc: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5D0u;
        goto label_38d5d0;
    }
    ctx->pc = 0x38D5C8u;
    {
        const bool branch_taken_0x38d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5C8u;
        // 0x38d5cc: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5c8) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D5D0u;
label_38d5d0:
    // 0x38d5d0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38d5d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38d5d4:
    // 0x38d5d4: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x38d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38d5d8:
    // 0x38d5d8: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38d5dc:
    // 0x38d5dc: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d5e0:
    // 0x38d5e0: 0x1000ff52  b           . + 4 + (-0xAE << 2)
label_38d5e4:
    if (ctx->pc == 0x38D5E4u) {
        ctx->pc = 0x38D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5E0u;
        // 0x38d5e4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5E8u;
        goto label_38d5e8;
    }
    ctx->pc = 0x38D5E0u;
    {
        const bool branch_taken_0x38d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5E0u;
        // 0x38d5e4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5e0) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D5E8u;
label_38d5e8:
    // 0x38d5e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d5ec:
    // 0x38d5ec: 0x1000027a  b           . + 4 + (0x27A << 2)
label_38d5f0:
    if (ctx->pc == 0x38D5F0u) {
        ctx->pc = 0x38D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5ECu;
        // 0x38d5f0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5F4u;
        goto label_38d5f4;
    }
    ctx->pc = 0x38D5ECu;
    {
        const bool branch_taken_0x38d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5ECu;
        // 0x38d5f0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5ec) {
            ctx->pc = 0x38DFD8u;
            goto label_38dfd8;
        }
    }
    ctx->pc = 0x38D5F4u;
label_38d5f4:
    // 0x38d5f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x38d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_38d5f8:
    // 0x38d5f8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x38d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_38d5fc:
    // 0x38d5fc: 0x2484d0c0  addiu       $a0, $a0, -0x2F40
    ctx->pc = 0x38d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955200));
label_38d600:
    // 0x38d600: 0x2462f039  addiu       $v0, $v1, -0xFC7
    ctx->pc = 0x38d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963257));
label_38d604:
    // 0x38d604: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x38d604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_38d608:
    // 0x38d608: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38d60c:
    // 0x38d60c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x38d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38d610:
    // 0x38d610: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x38d610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d614:
    // 0x38d614: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38d614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38d618:
    // 0x38d618: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x38d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_38d61c:
    // 0x38d61c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x38d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_38d620:
    // 0x38d620: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x38d620u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_38d624:
    // 0x38d624: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d628:
    // 0x38d628: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x38d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38d62c:
    // 0x38d62c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38d62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38d630:
    // 0x38d630: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_38d634:
    if (ctx->pc == 0x38D634u) {
        ctx->pc = 0x38D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D630u;
        // 0x38d634: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D638u;
        goto label_38d638;
    }
    ctx->pc = 0x38D630u;
    {
        const bool branch_taken_0x38d630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d630) {
            ctx->pc = 0x38D634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D630u;
            // 0x38d634: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D654u;
            goto label_38d654;
        }
    }
    ctx->pc = 0x38D638u;
label_38d638:
    // 0x38d638: 0xc0e316e  jal         func_38C5B8
label_38d63c:
    if (ctx->pc == 0x38D63Cu) {
        ctx->pc = 0x38D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D638u;
        // 0x38d63c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D640u;
        goto label_38d640;
    }
    ctx->pc = 0x38D638u;
    SET_GPR_U32(ctx, 31, 0x38D640u);
    ctx->pc = 0x38D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D638u;
    // 0x38d63c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38D638u, 0x38D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D640u;
label_38d640:
    // 0x38d640: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d644:
    // 0x38d644: 0x50430257  beql        $v0, $v1, . + 4 + (0x257 << 2)
label_38d648:
    if (ctx->pc == 0x38D648u) {
        ctx->pc = 0x38D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D644u;
        // 0x38d648: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D64Cu;
        goto label_38d64c;
    }
    ctx->pc = 0x38D644u;
    {
        const bool branch_taken_0x38d644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x38d644) {
            ctx->pc = 0x38D648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D644u;
            // 0x38d648: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DFA4u;
            goto label_38dfa4;
        }
    }
    ctx->pc = 0x38D64Cu;
label_38d64c:
    // 0x38d64c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d650:
    // 0x38d650: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38d650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d654:
    // 0x38d654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d658:
    // 0x38d658: 0x10620251  beq         $v1, $v0, . + 4 + (0x251 << 2)
label_38d65c:
    if (ctx->pc == 0x38D65Cu) {
        ctx->pc = 0x38D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D658u;
        // 0x38d65c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D660u;
        goto label_38d660;
    }
    ctx->pc = 0x38D658u;
    {
        const bool branch_taken_0x38d658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D658u;
        // 0x38d65c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d658) {
            ctx->pc = 0x38DFA0u;
            goto label_38dfa0;
        }
    }
    ctx->pc = 0x38D660u;
label_38d660:
    // 0x38d660: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_38d664:
    if (ctx->pc == 0x38D664u) {
        ctx->pc = 0x38D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D660u;
        // 0x38d664: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D668u;
        goto label_38d668;
    }
    ctx->pc = 0x38D660u;
    {
        const bool branch_taken_0x38d660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D660u;
        // 0x38d664: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d660) {
            ctx->pc = 0x38D6E4u;
            goto label_38d6e4;
        }
    }
    ctx->pc = 0x38D668u;
label_38d668:
    // 0x38d668: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38d66c:
    // 0x38d66c: 0x2444f039  addiu       $a0, $v0, -0xFC7
    ctx->pc = 0x38d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
label_38d670:
    // 0x38d670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38d670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38d674:
    // 0x38d674: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38d674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38d678:
    // 0x38d678: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38d67c:
    // 0x38d67c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_38d680:
    if (ctx->pc == 0x38D680u) {
        ctx->pc = 0x38D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D67Cu;
        // 0x38d680: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D684u;
        goto label_38d684;
    }
    ctx->pc = 0x38D67Cu;
    {
        const bool branch_taken_0x38d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D67Cu;
        // 0x38d680: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d67c) {
            ctx->pc = 0x38D6E4u;
            goto label_38d6e4;
        }
    }
    ctx->pc = 0x38D684u;
label_38d684:
    // 0x38d684: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x38d684u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d688:
    // 0x38d688: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x38d688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d68c:
    // 0x38d68c: 0x0  nop
    ctx->pc = 0x38d68cu;
    // NOP
label_38d690:
    // 0x38d690: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x38d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38d694:
    // 0x38d694: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x38d694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38d698:
    // 0x38d698: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38d698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38d69c:
    // 0x38d69c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x38d69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38d6a0:
    // 0x38d6a0: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x38d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38d6a4:
    // 0x38d6a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38d6a8:
    // 0x38d6a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_38d6ac:
    if (ctx->pc == 0x38D6ACu) {
        ctx->pc = 0x38D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6A8u;
        // 0x38d6ac: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D6B0u;
        goto label_38d6b0;
    }
    ctx->pc = 0x38D6A8u;
    {
        const bool branch_taken_0x38d6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6A8u;
        // 0x38d6ac: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6a8) {
            ctx->pc = 0x38D6C0u;
            goto label_38d6c0;
        }
    }
    ctx->pc = 0x38D6B0u;
label_38d6b0:
    // 0x38d6b0: 0xc0e316e  jal         func_38C5B8
label_38d6b4:
    if (ctx->pc == 0x38D6B4u) {
        ctx->pc = 0x38D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6B0u;
        // 0x38d6b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D6B8u;
        goto label_38d6b8;
    }
    ctx->pc = 0x38D6B0u;
    SET_GPR_U32(ctx, 31, 0x38D6B8u);
    ctx->pc = 0x38D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6B0u;
    // 0x38d6b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38D6B0u, 0x38D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6B8u;
label_38d6b8:
    // 0x38d6b8: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
label_38d6bc:
    if (ctx->pc == 0x38D6BCu) {
        ctx->pc = 0x38D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6B8u;
        // 0x38d6bc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D6C0u;
        goto label_38d6c0;
    }
    ctx->pc = 0x38D6B8u;
    {
        const bool branch_taken_0x38d6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x38D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6B8u;
        // 0x38d6bc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6b8) {
            ctx->pc = 0x38D6C8u;
            goto label_38d6c8;
        }
    }
    ctx->pc = 0x38D6C0u;
label_38d6c0:
    // 0x38d6c0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d6c4:
    // 0x38d6c4: 0x90b00000  lbu         $s0, 0x0($a1)
    ctx->pc = 0x38d6c4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d6c8:
    // 0x38d6c8: 0x12120235  beq         $s0, $s2, . + 4 + (0x235 << 2)
label_38d6cc:
    if (ctx->pc == 0x38D6CCu) {
        ctx->pc = 0x38D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6C8u;
        // 0x38d6cc: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D6D0u;
        goto label_38d6d0;
    }
    ctx->pc = 0x38D6C8u;
    {
        const bool branch_taken_0x38d6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x38D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6C8u;
        // 0x38d6cc: 0x21e1821  addu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6c8) {
            ctx->pc = 0x38DFA0u;
            goto label_38dfa0;
        }
    }
    ctx->pc = 0x38D6D0u;
label_38d6d0:
    // 0x38d6d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38d6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38d6d4:
    // 0x38d6d4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38d6d8:
    // 0x38d6d8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_38d6dc:
    if (ctx->pc == 0x38D6DCu) {
        ctx->pc = 0x38D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6D8u;
        // 0x38d6dc: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D6E0u;
        goto label_38d6e0;
    }
    ctx->pc = 0x38D6D8u;
    {
        const bool branch_taken_0x38d6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d6d8) {
            ctx->pc = 0x38D6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D6D8u;
            // 0x38d6dc: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d690;
        }
    }
    ctx->pc = 0x38D6E0u;
label_38d6e0:
    // 0x38d6e0: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x38d6e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_38d6e4:
    // 0x38d6e4: 0x1040ff10  beqz        $v0, . + 4 + (-0xF0 << 2)
label_38d6e8:
    if (ctx->pc == 0x38D6E8u) {
        ctx->pc = 0x38D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6E4u;
        // 0x38d6e8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D6ECu;
        goto label_38d6ec;
    }
    ctx->pc = 0x38D6E4u;
    {
        const bool branch_taken_0x38d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6E4u;
        // 0x38d6e8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6e4) {
            ctx->pc = 0x38D328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d328;
        }
    }
    ctx->pc = 0x38D6ECu;
label_38d6ec:
    // 0x38d6ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x38d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38d6f0:
    // 0x38d6f0: 0x2442d590  addiu       $v0, $v0, -0x2A70
    ctx->pc = 0x38d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956432));
label_38d6f4:
    // 0x38d6f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38d6f8:
    // 0x38d6f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38d6fc:
    // 0x38d6fc: 0x800008  jr          $a0
label_38d700:
    if (ctx->pc == 0x38D700u) {
        ctx->pc = 0x38D704u;
        goto label_38d704;
    }
    ctx->pc = 0x38D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38D704u: goto label_38d704;
            case 0x38D7DCu: goto label_38d7dc;
            case 0x38D970u: goto label_38d970;
            case 0x38DB58u: goto label_38db58;
            case 0x38DDB4u: goto label_38ddb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D6FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38D704u;
label_38d704:
    // 0x38d704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d708:
    // 0x38d708: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x38d708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38d70c:
    // 0x38d70c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_38d710:
    if (ctx->pc == 0x38D710u) {
        ctx->pc = 0x38D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D70Cu;
        // 0x38d710: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D714u;
        goto label_38d714;
    }
    ctx->pc = 0x38D70Cu;
    {
        const bool branch_taken_0x38d70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D70Cu;
        // 0x38d710: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d70c) {
            ctx->pc = 0x38D78Cu;
            goto label_38d78c;
        }
    }
    ctx->pc = 0x38D714u;
label_38d714:
    // 0x38d714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38d714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d718:
    // 0x38d718: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x38d718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d71c:
    // 0x38d71c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x38d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38d720:
    // 0x38d720: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x38d720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_38d724:
    // 0x38d724: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38d724u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_38d728:
    // 0x38d728: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d72c:
    // 0x38d72c: 0x658023  subu        $s0, $v1, $a1
    ctx->pc = 0x38d72cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38d730:
    // 0x38d730: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x38d730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_38d734:
    // 0x38d734: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_38d738:
    if (ctx->pc == 0x38D738u) {
        ctx->pc = 0x38D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D734u;
        // 0x38d738: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D73Cu;
        goto label_38d73c;
    }
    ctx->pc = 0x38D734u;
    {
        const bool branch_taken_0x38d734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D734u;
        // 0x38d738: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d734) {
            ctx->pc = 0x38D76Cu;
            goto label_38d76c;
        }
    }
    ctx->pc = 0x38D73Cu;
label_38d73c:
    // 0x38d73c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x38d73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_38d740:
    // 0x38d740: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38d740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38d744:
    // 0x38d744: 0x2b0a82f  dsubu       $s5, $s5, $s0
    ctx->pc = 0x38d744u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 16));
label_38d748:
    // 0x38d748: 0xc0e316e  jal         func_38C5B8
label_38d74c:
    if (ctx->pc == 0x38D74Cu) {
        ctx->pc = 0x38D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D748u;
        // 0x38d74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D750u;
        goto label_38d750;
    }
    ctx->pc = 0x38D748u;
    SET_GPR_U32(ctx, 31, 0x38D750u);
    ctx->pc = 0x38D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D748u;
    // 0x38d74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38D748u, 0x38D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D750u;
label_38d750:
    // 0x38d750: 0x5452fff3  bnel        $v0, $s2, . + 4 + (-0xD << 2)
label_38d754:
    if (ctx->pc == 0x38D754u) {
        ctx->pc = 0x38D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D750u;
        // 0x38d754: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D758u;
        goto label_38d758;
    }
    ctx->pc = 0x38D750u;
    {
        const bool branch_taken_0x38d750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x38d750) {
            ctx->pc = 0x38D754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D750u;
            // 0x38d754: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d720;
        }
    }
    ctx->pc = 0x38D758u;
label_38d758:
    // 0x38d758: 0x12200211  beqz        $s1, . + 4 + (0x211 << 2)
label_38d75c:
    if (ctx->pc == 0x38D75Cu) {
        ctx->pc = 0x38D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D758u;
        // 0x38d75c: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D760u;
        goto label_38d760;
    }
    ctx->pc = 0x38D758u;
    {
        const bool branch_taken_0x38d758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D758u;
        // 0x38d75c: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d758) {
            ctx->pc = 0x38DFA0u;
            goto label_38dfa0;
        }
    }
    ctx->pc = 0x38D760u;
label_38d760:
    // 0x38d760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d764:
    // 0x38d764: 0x10000004  b           . + 4 + (0x4 << 2)
label_38d768:
    if (ctx->pc == 0x38D768u) {
        ctx->pc = 0x38D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D764u;
        // 0x38d768: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D76Cu;
        goto label_38d76c;
    }
    ctx->pc = 0x38D764u;
    {
        const bool branch_taken_0x38d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D764u;
        // 0x38d768: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d764) {
            ctx->pc = 0x38D778u;
            goto label_38d778;
        }
    }
    ctx->pc = 0x38D76Cu;
label_38d76c:
    // 0x38d76c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x38d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_38d770:
    // 0x38d770: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x38d770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_38d774:
    // 0x38d774: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38d774u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38d778:
    // 0x38d778: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x38d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38d77c:
    // 0x38d77c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d780:
    // 0x38d780: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x38d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_38d784:
    // 0x38d784: 0x1000fee9  b           . + 4 + (-0x117 << 2)
label_38d788:
    if (ctx->pc == 0x38D788u) {
        ctx->pc = 0x38D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D784u;
        // 0x38d788: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D78Cu;
        goto label_38d78c;
    }
    ctx->pc = 0x38D784u;
    {
        const bool branch_taken_0x38d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D784u;
        // 0x38d788: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d784) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D78Cu;
label_38d78c:
    // 0x38d78c: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x38d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_38d790:
    // 0x38d790: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38d790u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38d794:
    // 0x38d794: 0x8ec5fff8  lw          $a1, -0x8($s6)
    ctx->pc = 0x38d794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38d798:
    // 0x38d798: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x38d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_38d79c:
    // 0x38d79c: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x38d79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_38d7a0:
    // 0x38d7a0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38d7a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_38d7a4:
    // 0x38d7a4: 0x40f809  jalr        $v0
label_38d7a8:
    if (ctx->pc == 0x38D7A8u) {
        ctx->pc = 0x38D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7A4u;
        // 0x38d7a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D7ACu;
        goto label_38d7ac;
    }
    ctx->pc = 0x38D7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D7ACu);
        ctx->pc = 0x38D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7A4u;
        // 0x38d7a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D7A4u, 0x38D7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D7ACu;
label_38d7ac:
    // 0x38d7ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38d7acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d7b0:
    // 0x38d7b0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x38d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_38d7b4:
    // 0x38d7b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x38d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_38d7b8:
    // 0x38d7b8: 0x145501f9  bne         $v0, $s5, . + 4 + (0x1F9 << 2)
label_38d7bc:
    if (ctx->pc == 0x38D7BCu) {
        ctx->pc = 0x38D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7B8u;
        // 0x38d7bc: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D7C0u;
        goto label_38d7c0;
    }
    ctx->pc = 0x38D7B8u;
    {
        const bool branch_taken_0x38d7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x38D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7B8u;
        // 0x38d7bc: 0x8fa40268  lw          $a0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7b8) {
            ctx->pc = 0x38DFA0u;
            goto label_38dfa0;
        }
    }
    ctx->pc = 0x38D7C0u;
label_38d7c0:
    // 0x38d7c0: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d7c4:
    // 0x38d7c4: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x38d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38d7c8:
    // 0x38d7c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_38d7cc:
    // 0x38d7cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d7d0:
    // 0x38d7d0: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x38d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_38d7d4:
    // 0x38d7d4: 0x1000fed5  b           . + 4 + (-0x12B << 2)
label_38d7d8:
    if (ctx->pc == 0x38D7D8u) {
        ctx->pc = 0x38D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7D4u;
        // 0x38d7d8: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D7DCu;
        goto label_38d7dc;
    }
    ctx->pc = 0x38D7D4u;
    {
        const bool branch_taken_0x38d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7D4u;
        // 0x38d7d8: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7d4) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D7DCu;
label_38d7dc:
    // 0x38d7dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d7e0:
    // 0x38d7e0: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x38d7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38d7e4:
    // 0x38d7e4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_38d7e8:
    if (ctx->pc == 0x38D7E8u) {
        ctx->pc = 0x38D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7E4u;
        // 0x38d7e8: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D7ECu;
        goto label_38d7ec;
    }
    ctx->pc = 0x38D7E4u;
    {
        const bool branch_taken_0x38d7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7E4u;
        // 0x38d7e8: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7e4) {
            ctx->pc = 0x38D898u;
            goto label_38d898;
        }
    }
    ctx->pc = 0x38D7ECu;
label_38d7ec:
    // 0x38d7ec: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d7f0:
    // 0x38d7f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x38d7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d7f4:
    // 0x38d7f4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x38d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_38d7f8:
    // 0x38d7f8: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x38d7f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38d7fc:
    // 0x38d7fc: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_38d800:
    if (ctx->pc == 0x38D800u) {
        ctx->pc = 0x38D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7FCu;
        // 0x38d800: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D804u;
        goto label_38d804;
    }
    ctx->pc = 0x38D7FCu;
    {
        const bool branch_taken_0x38d7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7FCu;
        // 0x38d800: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7fc) {
            ctx->pc = 0x38D888u;
            goto label_38d888;
        }
    }
    ctx->pc = 0x38D804u;
label_38d804:
    // 0x38d804: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x38d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38d808:
    // 0x38d808: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38d808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d80c:
    // 0x38d80c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38d80cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38d810:
    // 0x38d810: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_38d814:
    if (ctx->pc == 0x38D814u) {
        ctx->pc = 0x38D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D810u;
        // 0x38d814: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D818u;
        goto label_38d818;
    }
    ctx->pc = 0x38D810u;
    {
        const bool branch_taken_0x38d810 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D810u;
        // 0x38d814: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d810) {
            ctx->pc = 0x38D888u;
            goto label_38d888;
        }
    }
    ctx->pc = 0x38D818u;
label_38d818:
    // 0x38d818: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x38d818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d81c:
    // 0x38d81c: 0x0  nop
    ctx->pc = 0x38d81cu;
    // NOP
label_38d820:
    // 0x38d820: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d824:
    // 0x38d824: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x38d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38d828:
    // 0x38d828: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38d828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38d82c:
    // 0x38d82c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_38d830:
    if (ctx->pc == 0x38D830u) {
        ctx->pc = 0x38D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D82Cu;
        // 0x38d830: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D834u;
        goto label_38d834;
    }
    ctx->pc = 0x38D82Cu;
    {
        const bool branch_taken_0x38d82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d82c) {
            ctx->pc = 0x38D830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D82Cu;
            // 0x38d830: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D84Cu;
            goto label_38d84c;
        }
    }
    ctx->pc = 0x38D834u;
label_38d834:
    // 0x38d834: 0xc0e316e  jal         func_38C5B8
label_38d838:
    if (ctx->pc == 0x38D838u) {
        ctx->pc = 0x38D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D834u;
        // 0x38d838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D83Cu;
        goto label_38d83c;
    }
    ctx->pc = 0x38D834u;
    SET_GPR_U32(ctx, 31, 0x38D83Cu);
    ctx->pc = 0x38D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D834u;
    // 0x38d838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38D834u, 0x38D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D83Cu;
label_38d83c:
    // 0x38d83c: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_38d840:
    if (ctx->pc == 0x38D840u) {
        ctx->pc = 0x38D844u;
        goto label_38d844;
    }
    ctx->pc = 0x38D83Cu;
    {
        const bool branch_taken_0x38d83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x38d83c) {
            ctx->pc = 0x38D854u;
            goto label_38d854;
        }
    }
    ctx->pc = 0x38D844u;
label_38d844:
    // 0x38d844: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d848:
    // 0x38d848: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x38d848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d84c:
    // 0x38d84c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_38d850:
    if (ctx->pc == 0x38D850u) {
        ctx->pc = 0x38D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D84Cu;
        // 0x38d850: 0x3a21021  addu        $v0, $sp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D854u;
        goto label_38d854;
    }
    ctx->pc = 0x38D84Cu;
    {
        const bool branch_taken_0x38d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x38d84c) {
            ctx->pc = 0x38D850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D84Cu;
            // 0x38d850: 0x3a21021  addu        $v0, $sp, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D868u;
            goto label_38d868;
        }
    }
    ctx->pc = 0x38D854u;
label_38d854:
    // 0x38d854: 0x120001d2  beqz        $s0, . + 4 + (0x1D2 << 2)
label_38d858:
    if (ctx->pc == 0x38D858u) {
        ctx->pc = 0x38D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D854u;
        // 0x38d858: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D85Cu;
        goto label_38d85c;
    }
    ctx->pc = 0x38D854u;
    {
        const bool branch_taken_0x38d854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D854u;
        // 0x38d858: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d854) {
            ctx->pc = 0x38DFA0u;
            goto label_38dfa0;
        }
    }
    ctx->pc = 0x38D85Cu;
label_38d85c:
    // 0x38d85c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38d860:
    // 0x38d860: 0x10000009  b           . + 4 + (0x9 << 2)
label_38d864:
    if (ctx->pc == 0x38D864u) {
        ctx->pc = 0x38D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D860u;
        // 0x38d864: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D868u;
        goto label_38d868;
    }
    ctx->pc = 0x38D860u;
    {
        const bool branch_taken_0x38d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D860u;
        // 0x38d864: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d860) {
            ctx->pc = 0x38D888u;
            goto label_38d888;
        }
    }
    ctx->pc = 0x38D868u;
label_38d868:
    // 0x38d868: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x38d868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38d86c:
    // 0x38d86c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_38d870:
    if (ctx->pc == 0x38D870u) {
        ctx->pc = 0x38D874u;
        goto label_38d874;
    }
    ctx->pc = 0x38D86Cu;
    {
        const bool branch_taken_0x38d86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d86c) {
            ctx->pc = 0x38D888u;
            goto label_38d888;
        }
    }
    ctx->pc = 0x38D874u;
label_38d874:
    // 0x38d874: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x38d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38d878:
    // 0x38d878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38d878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38d87c:
    // 0x38d87c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38d87cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38d880:
    // 0x38d880: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
label_38d884:
    if (ctx->pc == 0x38D884u) {
        ctx->pc = 0x38D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D880u;
        // 0x38d884: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D888u;
        goto label_38d888;
    }
    ctx->pc = 0x38D880u;
    {
        const bool branch_taken_0x38d880 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D880u;
        // 0x38d884: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d880) {
            ctx->pc = 0x38D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d820;
        }
    }
    ctx->pc = 0x38D888u;
label_38d888:
    // 0x38d888: 0x120001cd  beqz        $s0, . + 4 + (0x1CD << 2)
label_38d88c:
    if (ctx->pc == 0x38D88Cu) {
        ctx->pc = 0x38D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D888u;
        // 0x38d88c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D890u;
        goto label_38d890;
    }
    ctx->pc = 0x38D888u;
    {
        const bool branch_taken_0x38d888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D888u;
        // 0x38d88c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d888) {
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38D890u;
label_38d890:
    // 0x38d890: 0x10000034  b           . + 4 + (0x34 << 2)
label_38d894:
    if (ctx->pc == 0x38D894u) {
        ctx->pc = 0x38D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D890u;
        // 0x38d894: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D898u;
        goto label_38d898;
    }
    ctx->pc = 0x38D890u;
    {
        const bool branch_taken_0x38d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D890u;
        // 0x38d894: 0x26f30001  addiu       $s3, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d890) {
            ctx->pc = 0x38D964u;
            goto label_38d964;
        }
    }
    ctx->pc = 0x38D898u;
label_38d898:
    // 0x38d898: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d89c:
    // 0x38d89c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38d89cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38d8a0:
    // 0x38d8a0: 0x8ed2fff8  lw          $s2, -0x8($s6)
    ctx->pc = 0x38d8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38d8a4:
    // 0x38d8a4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x38d8a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d8a8:
    // 0x38d8a8: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x38d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_38d8ac:
    // 0x38d8ac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x38d8acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38d8b0:
    // 0x38d8b0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_38d8b4:
    if (ctx->pc == 0x38D8B4u) {
        ctx->pc = 0x38D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8B0u;
        // 0x38d8b4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8B8u;
        goto label_38d8b8;
    }
    ctx->pc = 0x38D8B0u;
    {
        const bool branch_taken_0x38d8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8B0u;
        // 0x38d8b4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d8b0) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D8B8u;
label_38d8b8:
    // 0x38d8b8: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x38d8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_38d8bc:
    // 0x38d8bc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x38d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38d8c0:
    // 0x38d8c0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38d8c4:
    // 0x38d8c4: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38d8c4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38d8c8:
    // 0x38d8c8: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_38d8cc:
    if (ctx->pc == 0x38D8CCu) {
        ctx->pc = 0x38D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8C8u;
        // 0x38d8cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8D0u;
        goto label_38d8d0;
    }
    ctx->pc = 0x38D8C8u;
    {
        const bool branch_taken_0x38d8c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8C8u;
        // 0x38d8cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d8c8) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D8D0u;
label_38d8d0:
    // 0x38d8d0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x38d8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d8d4:
    // 0x38d8d4: 0x0  nop
    ctx->pc = 0x38d8d4u;
    // NOP
label_38d8d8:
    // 0x38d8d8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d8dc:
    // 0x38d8dc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x38d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38d8e0:
    // 0x38d8e0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38d8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38d8e4:
    // 0x38d8e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_38d8e8:
    if (ctx->pc == 0x38D8E8u) {
        ctx->pc = 0x38D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8E4u;
        // 0x38d8e8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8ECu;
        goto label_38d8ec;
    }
    ctx->pc = 0x38D8E4u;
    {
        const bool branch_taken_0x38d8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d8e4) {
            ctx->pc = 0x38D8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D8E4u;
            // 0x38d8e8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D904u;
            goto label_38d904;
        }
    }
    ctx->pc = 0x38D8ECu;
label_38d8ec:
    // 0x38d8ec: 0xc0e316e  jal         func_38C5B8
label_38d8f0:
    if (ctx->pc == 0x38D8F0u) {
        ctx->pc = 0x38D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8ECu;
        // 0x38d8f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8F4u;
        goto label_38d8f4;
    }
    ctx->pc = 0x38D8ECu;
    SET_GPR_U32(ctx, 31, 0x38D8F4u);
    ctx->pc = 0x38D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8ECu;
    // 0x38d8f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38D8ECu, 0x38D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8F4u;
label_38d8f4:
    // 0x38d8f4: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_38d8f8:
    if (ctx->pc == 0x38D8F8u) {
        ctx->pc = 0x38D8FCu;
        goto label_38d8fc;
    }
    ctx->pc = 0x38D8F4u;
    {
        const bool branch_taken_0x38d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x38d8f4) {
            ctx->pc = 0x38D90Cu;
            goto label_38d90c;
        }
    }
    ctx->pc = 0x38D8FCu;
label_38d8fc:
    // 0x38d8fc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d900:
    // 0x38d900: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x38d900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d904:
    // 0x38d904: 0x14900006  bne         $a0, $s0, . + 4 + (0x6 << 2)
label_38d908:
    if (ctx->pc == 0x38D908u) {
        ctx->pc = 0x38D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D904u;
        // 0x38d908: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D90Cu;
        goto label_38d90c;
    }
    ctx->pc = 0x38D904u;
    {
        const bool branch_taken_0x38d904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x38D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D904u;
        // 0x38d908: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d904) {
            ctx->pc = 0x38D920u;
            goto label_38d920;
        }
    }
    ctx->pc = 0x38D90Cu;
label_38d90c:
    // 0x38d90c: 0x125101a4  beq         $s2, $s1, . + 4 + (0x1A4 << 2)
label_38d910:
    if (ctx->pc == 0x38D910u) {
        ctx->pc = 0x38D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D90Cu;
        // 0x38d910: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D914u;
        goto label_38d914;
    }
    ctx->pc = 0x38D90Cu;
    {
        const bool branch_taken_0x38d90c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x38D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D90Cu;
        // 0x38d910: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d90c) {
            ctx->pc = 0x38DFA0u;
            goto label_38dfa0;
        }
    }
    ctx->pc = 0x38D914u;
label_38d914:
    // 0x38d914: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38d918:
    // 0x38d918: 0x10000009  b           . + 4 + (0x9 << 2)
label_38d91c:
    if (ctx->pc == 0x38D91Cu) {
        ctx->pc = 0x38D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D918u;
        // 0x38d91c: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D920u;
        goto label_38d920;
    }
    ctx->pc = 0x38D918u;
    {
        const bool branch_taken_0x38d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D918u;
        // 0x38d91c: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d918) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D920u;
label_38d920:
    // 0x38d920: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x38d920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38d924:
    // 0x38d924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_38d928:
    if (ctx->pc == 0x38D928u) {
        ctx->pc = 0x38D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D924u;
        // 0x38d928: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D92Cu;
        goto label_38d92c;
    }
    ctx->pc = 0x38D924u;
    {
        const bool branch_taken_0x38d924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D924u;
        // 0x38d928: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d924) {
            ctx->pc = 0x38D940u;
            goto label_38d940;
        }
    }
    ctx->pc = 0x38D92Cu;
label_38d92c:
    // 0x38d92c: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x38d92cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_38d930:
    // 0x38d930: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38d930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38d934:
    // 0x38d934: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38d934u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38d938:
    // 0x38d938: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
label_38d93c:
    if (ctx->pc == 0x38D93Cu) {
        ctx->pc = 0x38D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D938u;
        // 0x38d93c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D940u;
        goto label_38d940;
    }
    ctx->pc = 0x38D938u;
    {
        const bool branch_taken_0x38d938 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D938u;
        // 0x38d93c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d938) {
            ctx->pc = 0x38D8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d8d8;
        }
    }
    ctx->pc = 0x38D940u;
label_38d940:
    // 0x38d940: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x38d940u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_38d944:
    // 0x38d944: 0x1200019f  beqz        $s0, . + 4 + (0x19F << 2)
label_38d948:
    if (ctx->pc == 0x38D948u) {
        ctx->pc = 0x38D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D944u;
        // 0x38d948: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D94Cu;
        goto label_38d94c;
    }
    ctx->pc = 0x38D944u;
    {
        const bool branch_taken_0x38d944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D944u;
        // 0x38d948: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d944) {
            ctx->pc = 0x38DFC4u;
            goto label_38dfc4;
        }
    }
    ctx->pc = 0x38D94Cu;
label_38d94c:
    // 0x38d94c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x38d94cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_38d950:
    // 0x38d950: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x38d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38d954:
    // 0x38d954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d958:
    // 0x38d958: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x38d958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_38d95c:
    // 0x38d95c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x38d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38d960:
    // 0x38d960: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d964:
    // 0x38d964: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x38d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_38d968:
    // 0x38d968: 0x1000fe70  b           . + 4 + (-0x190 << 2)
label_38d96c:
    if (ctx->pc == 0x38D96Cu) {
        ctx->pc = 0x38D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D968u;
        // 0x38d96c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D970u;
        goto label_38d970;
    }
    ctx->pc = 0x38D968u;
    {
        const bool branch_taken_0x38d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D968u;
        // 0x38d96c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d968) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38D970u;
label_38d970:
    // 0x38d970: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d974:
    // 0x38d974: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x38d974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38d978:
    // 0x38d978: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_38d97c:
    if (ctx->pc == 0x38D97Cu) {
        ctx->pc = 0x38D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D978u;
        // 0x38d97c: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D980u;
        goto label_38d980;
    }
    ctx->pc = 0x38D978u;
    {
        const bool branch_taken_0x38d978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D978u;
        // 0x38d97c: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d978) {
            ctx->pc = 0x38DA50u;
            goto label_38da50;
        }
    }
    ctx->pc = 0x38D980u;
label_38d980:
    // 0x38d980: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d984:
    // 0x38d984: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x38d984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_38d988:
    // 0x38d988: 0x2482f039  addiu       $v0, $a0, -0xFC7
    ctx->pc = 0x38d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963257));
label_38d98c:
    // 0x38d98c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38d98cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d990:
    // 0x38d990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38d994:
    // 0x38d994: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x38d994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38d998:
    // 0x38d998: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x38d998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_38d99c:
    // 0x38d99c: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
label_38d9a0:
    if (ctx->pc == 0x38D9A0u) {
        ctx->pc = 0x38D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D99Cu;
        // 0x38d9a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D9A4u;
        goto label_38d9a4;
    }
    ctx->pc = 0x38D99Cu;
    {
        const bool branch_taken_0x38d99c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D99Cu;
        // 0x38d9a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d99c) {
            ctx->pc = 0x38DA3Cu;
            goto label_38da3c;
        }
    }
    ctx->pc = 0x38D9A4u;
label_38d9a4:
    // 0x38d9a4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x38d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38d9a8:
    // 0x38d9a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38d9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d9ac:
    // 0x38d9ac: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38d9acu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38d9b0:
    // 0x38d9b0: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_38d9b4:
    if (ctx->pc == 0x38D9B4u) {
        ctx->pc = 0x38D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9B0u;
        // 0x38d9b4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D9B8u;
        goto label_38d9b8;
    }
    ctx->pc = 0x38D9B0u;
    {
        const bool branch_taken_0x38d9b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9B0u;
        // 0x38d9b4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9b0) {
            ctx->pc = 0x38DA3Cu;
            goto label_38da3c;
        }
    }
    ctx->pc = 0x38D9B8u;
label_38d9b8:
    // 0x38d9b8: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38d9b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38d9bc:
    // 0x38d9bc: 0x0  nop
    ctx->pc = 0x38d9bcu;
    // NOP
label_38d9c0:
    // 0x38d9c0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d9c4:
    // 0x38d9c4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x38d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38d9c8:
    // 0x38d9c8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38d9c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38d9cc:
    // 0x38d9cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_38d9d0:
    if (ctx->pc == 0x38D9D0u) {
        ctx->pc = 0x38D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9CCu;
        // 0x38d9d0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D9D4u;
        goto label_38d9d4;
    }
    ctx->pc = 0x38D9CCu;
    {
        const bool branch_taken_0x38d9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d9cc) {
            ctx->pc = 0x38D9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D9CCu;
            // 0x38d9d0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D9F0u;
            goto label_38d9f0;
        }
    }
    ctx->pc = 0x38D9D4u;
label_38d9d4:
    // 0x38d9d4: 0xc0e316e  jal         func_38C5B8
label_38d9d8:
    if (ctx->pc == 0x38D9D8u) {
        ctx->pc = 0x38D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9D4u;
        // 0x38d9d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D9DCu;
        goto label_38d9dc;
    }
    ctx->pc = 0x38D9D4u;
    SET_GPR_U32(ctx, 31, 0x38D9DCu);
    ctx->pc = 0x38D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D9D4u;
    // 0x38d9d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38D9D4u, 0x38D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D9DCu;
label_38d9dc:
    // 0x38d9dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d9e0:
    // 0x38d9e0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_38d9e4:
    if (ctx->pc == 0x38D9E4u) {
        ctx->pc = 0x38D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9E0u;
        // 0x38d9e4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D9E8u;
        goto label_38d9e8;
    }
    ctx->pc = 0x38D9E0u;
    {
        const bool branch_taken_0x38d9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9E0u;
        // 0x38d9e4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9e0) {
            ctx->pc = 0x38DA00u;
            goto label_38da00;
        }
    }
    ctx->pc = 0x38D9E8u;
label_38d9e8:
    // 0x38d9e8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38d9ec:
    // 0x38d9ec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38d9ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38d9f0:
    // 0x38d9f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d9f4:
    // 0x38d9f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_38d9f8:
    if (ctx->pc == 0x38D9F8u) {
        ctx->pc = 0x38D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9F4u;
        // 0x38d9f8: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D9FCu;
        goto label_38d9fc;
    }
    ctx->pc = 0x38D9F4u;
    {
        const bool branch_taken_0x38d9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9F4u;
        // 0x38d9f8: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9f4) {
            ctx->pc = 0x38DA0Cu;
            goto label_38da0c;
        }
    }
    ctx->pc = 0x38D9FCu;
label_38d9fc:
    // 0x38d9fc: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x38d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_38da00:
    // 0x38da00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38da04:
    // 0x38da04: 0x1000000e  b           . + 4 + (0xE << 2)
label_38da08:
    if (ctx->pc == 0x38DA08u) {
        ctx->pc = 0x38DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA04u;
        // 0x38da08: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA0Cu;
        goto label_38da0c;
    }
    ctx->pc = 0x38DA04u;
    {
        const bool branch_taken_0x38da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA04u;
        // 0x38da08: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da04) {
            ctx->pc = 0x38DA40u;
            goto label_38da40;
        }
    }
    ctx->pc = 0x38DA0Cu;
label_38da0c:
    // 0x38da0c: 0x2482f039  addiu       $v0, $a0, -0xFC7
    ctx->pc = 0x38da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963257));
label_38da10:
    // 0x38da10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38da14:
    // 0x38da14: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38da14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38da18:
    // 0x38da18: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x38da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_38da1c:
    // 0x38da1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_38da20:
    if (ctx->pc == 0x38DA20u) {
        ctx->pc = 0x38DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA1Cu;
        // 0x38da20: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA24u;
        goto label_38da24;
    }
    ctx->pc = 0x38DA1Cu;
    {
        const bool branch_taken_0x38da1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA1Cu;
        // 0x38da20: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da1c) {
            ctx->pc = 0x38DA40u;
            goto label_38da40;
        }
    }
    ctx->pc = 0x38DA24u;
label_38da24:
    // 0x38da24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38da24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38da28:
    // 0x38da28: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38da28u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38da2c:
    // 0x38da2c: 0x16a0ffe4  bnez        $s5, . + 4 + (-0x1C << 2)
label_38da30:
    if (ctx->pc == 0x38DA30u) {
        ctx->pc = 0x38DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA2Cu;
        // 0x38da30: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA34u;
        goto label_38da34;
    }
    ctx->pc = 0x38DA2Cu;
    {
        const bool branch_taken_0x38da2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA2Cu;
        // 0x38da30: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da2c) {
            ctx->pc = 0x38D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d9c0;
        }
    }
    ctx->pc = 0x38DA34u;
label_38da34:
    // 0x38da34: 0x10000003  b           . + 4 + (0x3 << 2)
label_38da38:
    if (ctx->pc == 0x38DA38u) {
        ctx->pc = 0x38DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA34u;
        // 0x38da38: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA3Cu;
        goto label_38da3c;
    }
    ctx->pc = 0x38DA34u;
    {
        const bool branch_taken_0x38da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA34u;
        // 0x38da38: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da34) {
            ctx->pc = 0x38DA44u;
            goto label_38da44;
        }
    }
    ctx->pc = 0x38DA3Cu;
label_38da3c:
    // 0x38da3c: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38da3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38da40:
    // 0x38da40: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x38da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38da44:
    // 0x38da44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_38da48:
    // 0x38da48: 0x1000fe38  b           . + 4 + (-0x1C8 << 2)
label_38da4c:
    if (ctx->pc == 0x38DA4Cu) {
        ctx->pc = 0x38DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA48u;
        // 0x38da4c: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA50u;
        goto label_38da50;
    }
    ctx->pc = 0x38DA48u;
    {
        const bool branch_taken_0x38da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA48u;
        // 0x38da4c: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da48) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38DA50u;
label_38da50:
    // 0x38da50: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x38da50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_38da54:
    // 0x38da54: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38da54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38da58:
    // 0x38da58: 0x2483f039  addiu       $v1, $a0, -0xFC7
    ctx->pc = 0x38da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963257));
label_38da5c:
    // 0x38da5c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38da5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38da60:
    // 0x38da60: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x38da60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38da64:
    // 0x38da64: 0x8ed2fff8  lw          $s2, -0x8($s6)
    ctx->pc = 0x38da64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38da68:
    // 0x38da68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x38da68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_38da6c:
    // 0x38da6c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38da6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38da70:
    // 0x38da70: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38da74:
    // 0x38da74: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_38da78:
    if (ctx->pc == 0x38DA78u) {
        ctx->pc = 0x38DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA74u;
        // 0x38da78: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA7Cu;
        goto label_38da7c;
    }
    ctx->pc = 0x38DA74u;
    {
        const bool branch_taken_0x38da74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA74u;
        // 0x38da78: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da74) {
            ctx->pc = 0x38DB20u;
            goto label_38db20;
        }
    }
    ctx->pc = 0x38DA7Cu;
label_38da7c:
    // 0x38da7c: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x38da7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_38da80:
    // 0x38da80: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x38da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38da84:
    // 0x38da84: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38da84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38da88:
    // 0x38da88: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38da88u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38da8c:
    // 0x38da8c: 0x12a00028  beqz        $s5, . + 4 + (0x28 << 2)
label_38da90:
    if (ctx->pc == 0x38DA90u) {
        ctx->pc = 0x38DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA8Cu;
        // 0x38da90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA94u;
        goto label_38da94;
    }
    ctx->pc = 0x38DA8Cu;
    {
        const bool branch_taken_0x38da8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA8Cu;
        // 0x38da90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da8c) {
            ctx->pc = 0x38DB30u;
            goto label_38db30;
        }
    }
    ctx->pc = 0x38DA94u;
label_38da94:
    // 0x38da94: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x38da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38da98:
    // 0x38da98: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38da98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38da9c:
    // 0x38da9c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x38da9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38daa0:
    // 0x38daa0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38daa4:
    // 0x38daa4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x38daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38daa8:
    // 0x38daa8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38daa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38daac:
    // 0x38daac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_38dab0:
    if (ctx->pc == 0x38DAB0u) {
        ctx->pc = 0x38DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAACu;
        // 0x38dab0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DAB4u;
        goto label_38dab4;
    }
    ctx->pc = 0x38DAACu;
    {
        const bool branch_taken_0x38daac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38daac) {
            ctx->pc = 0x38DAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DAACu;
            // 0x38dab0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DAD0u;
            goto label_38dad0;
        }
    }
    ctx->pc = 0x38DAB4u;
label_38dab4:
    // 0x38dab4: 0xc0e316e  jal         func_38C5B8
label_38dab8:
    if (ctx->pc == 0x38DAB8u) {
        ctx->pc = 0x38DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAB4u;
        // 0x38dab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DABCu;
        goto label_38dabc;
    }
    ctx->pc = 0x38DAB4u;
    SET_GPR_U32(ctx, 31, 0x38DABCu);
    ctx->pc = 0x38DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DAB4u;
    // 0x38dab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38DAB4u, 0x38DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DABCu;
label_38dabc:
    // 0x38dabc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38dac0:
    // 0x38dac0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_38dac4:
    if (ctx->pc == 0x38DAC4u) {
        ctx->pc = 0x38DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAC0u;
        // 0x38dac4: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DAC8u;
        goto label_38dac8;
    }
    ctx->pc = 0x38DAC0u;
    {
        const bool branch_taken_0x38dac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAC0u;
        // 0x38dac4: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dac0) {
            ctx->pc = 0x38DAE0u;
            goto label_38dae0;
        }
    }
    ctx->pc = 0x38DAC8u;
label_38dac8:
    // 0x38dac8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38dac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38dacc:
    // 0x38dacc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x38daccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38dad0:
    // 0x38dad0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38dad4:
    // 0x38dad4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_38dad8:
    if (ctx->pc == 0x38DAD8u) {
        ctx->pc = 0x38DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAD4u;
        // 0x38dad8: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DADCu;
        goto label_38dadc;
    }
    ctx->pc = 0x38DAD4u;
    {
        const bool branch_taken_0x38dad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAD4u;
        // 0x38dad8: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dad4) {
            ctx->pc = 0x38DAECu;
            goto label_38daec;
        }
    }
    ctx->pc = 0x38DADCu;
label_38dadc:
    // 0x38dadc: 0x8fa30274  lw          $v1, 0x274($sp)
    ctx->pc = 0x38dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_38dae0:
    // 0x38dae0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38dae4:
    // 0x38dae4: 0x10000015  b           . + 4 + (0x15 << 2)
label_38dae8:
    if (ctx->pc == 0x38DAE8u) {
        ctx->pc = 0x38DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAE4u;
        // 0x38dae8: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DAECu;
        goto label_38daec;
    }
    ctx->pc = 0x38DAE4u;
    {
        const bool branch_taken_0x38dae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAE4u;
        // 0x38dae8: 0xafa30274  sw          $v1, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dae4) {
            ctx->pc = 0x38DB3Cu;
            goto label_38db3c;
        }
    }
    ctx->pc = 0x38DAECu;
label_38daec:
    // 0x38daec: 0x2462f039  addiu       $v0, $v1, -0xFC7
    ctx->pc = 0x38daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963257));
label_38daf0:
    // 0x38daf0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x38daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38daf4:
    // 0x38daf4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38daf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_38daf8:
    // 0x38daf8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x38daf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_38dafc:
    // 0x38dafc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_38db00:
    if (ctx->pc == 0x38DB00u) {
        ctx->pc = 0x38DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAFCu;
        // 0x38db00: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB04u;
        goto label_38db04;
    }
    ctx->pc = 0x38DAFCu;
    {
        const bool branch_taken_0x38dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAFCu;
        // 0x38db00: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dafc) {
            ctx->pc = 0x38DB3Cu;
            goto label_38db3c;
        }
    }
    ctx->pc = 0x38DB04u;
label_38db04:
    // 0x38db04: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x38db04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_38db08:
    // 0x38db08: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38db08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38db0c:
    // 0x38db0c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x38db0cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
label_38db10:
    // 0x38db10: 0x16a0ffe3  bnez        $s5, . + 4 + (-0x1D << 2)
label_38db14:
    if (ctx->pc == 0x38DB14u) {
        ctx->pc = 0x38DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB10u;
        // 0x38db14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB18u;
        goto label_38db18;
    }
    ctx->pc = 0x38DB10u;
    {
        const bool branch_taken_0x38db10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB10u;
        // 0x38db14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db10) {
            ctx->pc = 0x38DAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38daa0;
        }
    }
    ctx->pc = 0x38DB18u;
label_38db18:
    // 0x38db18: 0x10000009  b           . + 4 + (0x9 << 2)
label_38db1c:
    if (ctx->pc == 0x38DB1Cu) {
        ctx->pc = 0x38DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB18u;
        // 0x38db1c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB20u;
        goto label_38db20;
    }
    ctx->pc = 0x38DB18u;
    {
        const bool branch_taken_0x38db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB18u;
        // 0x38db1c: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db18) {
            ctx->pc = 0x38DB40u;
            goto label_38db40;
        }
    }
    ctx->pc = 0x38DB20u;
label_38db20:
    // 0x38db20: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x38db20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38db24:
    // 0x38db24: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38db24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38db28:
    // 0x38db28: 0x10000004  b           . + 4 + (0x4 << 2)
label_38db2c:
    if (ctx->pc == 0x38DB2Cu) {
        ctx->pc = 0x38DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB28u;
        // 0x38db2c: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB30u;
        goto label_38db30;
    }
    ctx->pc = 0x38DB28u;
    {
        const bool branch_taken_0x38db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB28u;
        // 0x38db2c: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db28) {
            ctx->pc = 0x38DB3Cu;
            goto label_38db3c;
        }
    }
    ctx->pc = 0x38DB30u;
label_38db30:
    // 0x38db30: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x38db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38db34:
    // 0x38db34: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38db34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38db38:
    // 0x38db38: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x38db38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38db3c:
    // 0x38db3c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x38db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38db40:
    // 0x38db40: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x38db40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_38db44:
    // 0x38db44: 0xafb00264  sw          $s0, 0x264($sp)
    ctx->pc = 0x38db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 16));
label_38db48:
    // 0x38db48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38db4c:
    // 0x38db4c: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x38db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
label_38db50:
    // 0x38db50: 0x1000fdf6  b           . + 4 + (-0x20A << 2)
label_38db54:
    if (ctx->pc == 0x38DB54u) {
        ctx->pc = 0x38DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB50u;
        // 0x38db54: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB58u;
        goto label_38db58;
    }
    ctx->pc = 0x38DB50u;
    {
        const bool branch_taken_0x38db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB50u;
        // 0x38db54: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db50) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38DB58u;
label_38db58:
    // 0x38db58: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_38db5c:
    if (ctx->pc == 0x38DB5Cu) {
        ctx->pc = 0x38DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB58u;
        // 0x38db5c: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB60u;
        goto label_38db60;
    }
    ctx->pc = 0x38DB58u;
    {
        const bool branch_taken_0x38db58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB58u;
        // 0x38db5c: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db58) {
            ctx->pc = 0x38DB68u;
            goto label_38db68;
        }
    }
    ctx->pc = 0x38DB60u;
label_38db60:
    // 0x38db60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38db64:
    if (ctx->pc == 0x38DB64u) {
        ctx->pc = 0x38DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB60u;
        // 0x38db64: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB68u;
        goto label_38db68;
    }
    ctx->pc = 0x38DB60u;
    {
        const bool branch_taken_0x38db60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB60u;
        // 0x38db64: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db60) {
            ctx->pc = 0x38DB70u;
            goto label_38db70;
        }
    }
    ctx->pc = 0x38DB68u;
label_38db68:
    // 0x38db68: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x38db68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_38db6c:
    // 0x38db6c: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x38db6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_38db70:
    // 0x38db70: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x38db70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_38db74:
    // 0x38db74: 0x12a00059  beqz        $s5, . + 4 + (0x59 << 2)
label_38db78:
    if (ctx->pc == 0x38DB78u) {
        ctx->pc = 0x38DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB74u;
        // 0x38db78: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB7Cu;
        goto label_38db7c;
    }
    ctx->pc = 0x38DB74u;
    {
        const bool branch_taken_0x38db74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB74u;
        // 0x38db78: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db74) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DB7Cu;
label_38db7c:
    // 0x38db7c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38db80:
    // 0x38db80: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x38db80u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38db84:
    // 0x38db84: 0x0  nop
    ctx->pc = 0x38db84u;
    // NOP
label_38db88:
    // 0x38db88: 0x2623ffd5  addiu       $v1, $s1, -0x2B
    ctx->pc = 0x38db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967253));
label_38db8c:
    // 0x38db8c: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x38db8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_38db90:
    // 0x38db90: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_38db94:
    if (ctx->pc == 0x38DB94u) {
        ctx->pc = 0x38DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB90u;
        // 0x38db94: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DB98u;
        goto label_38db98;
    }
    ctx->pc = 0x38DB90u;
    {
        const bool branch_taken_0x38db90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB90u;
        // 0x38db94: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db90) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DB98u;
label_38db98:
    // 0x38db98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38db98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38db9c:
    // 0x38db9c: 0x2442d5b0  addiu       $v0, $v0, -0x2A50
    ctx->pc = 0x38db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956464));
label_38dba0:
    // 0x38dba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38dba4:
    // 0x38dba4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38dba8:
    // 0x38dba8: 0x800008  jr          $a0
label_38dbac:
    if (ctx->pc == 0x38DBACu) {
        ctx->pc = 0x38DBB0u;
        goto label_38dbb0;
    }
    ctx->pc = 0x38DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38DBB0u: goto label_38dbb0;
            case 0x38DBDCu: goto label_38dbdc;
            case 0x38DC04u: goto label_38dc04;
            case 0x38DC30u: goto label_38dc30;
            case 0x38DC48u: goto label_38dc48;
            case 0x38DC5Cu: goto label_38dc5c;
            case 0x38DCDCu: goto label_38dcdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DBA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38DBB0u;
label_38dbb0:
    // 0x38dbb0: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x38dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_38dbb4:
    // 0x38dbb4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_38dbb8:
    if (ctx->pc == 0x38DBB8u) {
        ctx->pc = 0x38DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBB4u;
        // 0x38dbb8: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DBBCu;
        goto label_38dbbc;
    }
    ctx->pc = 0x38DBB4u;
    {
        const bool branch_taken_0x38dbb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBB4u;
        // 0x38dbb8: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbb4) {
            ctx->pc = 0x38DBCCu;
            goto label_38dbcc;
        }
    }
    ctx->pc = 0x38DBBCu;
label_38dbbc:
    // 0x38dbbc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38dbc0:
    // 0x38dbc0: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x38dbc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_38dbc4:
    // 0x38dbc4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x38dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_38dbc8:
    // 0x38dbc8: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x38dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_38dbcc:
    // 0x38dbcc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_38dbd0:
    if (ctx->pc == 0x38DBD0u) {
        ctx->pc = 0x38DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBCCu;
        // 0x38dbd0: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DBD4u;
        goto label_38dbd4;
    }
    ctx->pc = 0x38DBCCu;
    {
        const bool branch_taken_0x38dbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBCCu;
        // 0x38dbd0: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbcc) {
            ctx->pc = 0x38DC78u;
            goto label_38dc78;
        }
    }
    ctx->pc = 0x38DBD4u;
label_38dbd4:
    // 0x38dbd4: 0x10000028  b           . + 4 + (0x28 << 2)
label_38dbd8:
    if (ctx->pc == 0x38DBD8u) {
        ctx->pc = 0x38DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBD4u;
        // 0x38dbd8: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DBDCu;
        goto label_38dbdc;
    }
    ctx->pc = 0x38DBD4u;
    {
        const bool branch_taken_0x38dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBD4u;
        // 0x38dbd8: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbd4) {
            ctx->pc = 0x38DC78u;
            goto label_38dc78;
        }
    }
    ctx->pc = 0x38DBDCu;
label_38dbdc:
    // 0x38dbdc: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x38dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_38dbe0:
    // 0x38dbe0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38dbe4:
    // 0x38dbe4: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x38dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
label_38dbe8:
    // 0x38dbe8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x38dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_38dbec:
    // 0x38dbec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38dbf0:
    // 0x38dbf0: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x38dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_38dbf4:
    // 0x38dbf4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x38dbf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_38dbf8:
    // 0x38dbf8: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x38dbf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_38dbfc:
    // 0x38dbfc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_38dc00:
    if (ctx->pc == 0x38DC00u) {
        ctx->pc = 0x38DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBFCu;
        // 0x38dc00: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC04u;
        goto label_38dc04;
    }
    ctx->pc = 0x38DBFCu;
    {
        const bool branch_taken_0x38dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBFCu;
        // 0x38dc00: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbfc) {
            ctx->pc = 0x38DC7Cu;
            goto label_38dc7c;
        }
    }
    ctx->pc = 0x38DC04u;
label_38dc04:
    // 0x38dc04: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x38dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_38dc08:
    // 0x38dc08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38dc0c:
    // 0x38dc0c: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x38dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
label_38dc10:
    // 0x38dc10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x38dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_38dc14:
    // 0x38dc14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38dc18:
    // 0x38dc18: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x38dc18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_38dc1c:
    // 0x38dc1c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x38dc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_38dc20:
    // 0x38dc20: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_38dc24:
    if (ctx->pc == 0x38DC24u) {
        ctx->pc = 0x38DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC20u;
        // 0x38dc24: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC28u;
        goto label_38dc28;
    }
    ctx->pc = 0x38DC20u;
    {
        const bool branch_taken_0x38dc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC20u;
        // 0x38dc24: 0xafa3026c  sw          $v1, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc20) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DC28u;
label_38dc28:
    // 0x38dc28: 0x10000013  b           . + 4 + (0x13 << 2)
label_38dc2c:
    if (ctx->pc == 0x38DC2Cu) {
        ctx->pc = 0x38DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC28u;
        // 0x38dc2c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC30u;
        goto label_38dc30;
    }
    ctx->pc = 0x38DC28u;
    {
        const bool branch_taken_0x38dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC28u;
        // 0x38dc2c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc28) {
            ctx->pc = 0x38DC78u;
            goto label_38dc78;
        }
    }
    ctx->pc = 0x38DC30u;
label_38dc30:
    // 0x38dc30: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x38dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_38dc34:
    // 0x38dc34: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x38dc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_38dc38:
    // 0x38dc38: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_38dc3c:
    if (ctx->pc == 0x38DC3Cu) {
        ctx->pc = 0x38DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC38u;
        // 0x38dc3c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC40u;
        goto label_38dc40;
    }
    ctx->pc = 0x38DC38u;
    {
        const bool branch_taken_0x38dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC38u;
        // 0x38dc3c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc38) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DC40u;
label_38dc40:
    // 0x38dc40: 0x1000000e  b           . + 4 + (0xE << 2)
label_38dc44:
    if (ctx->pc == 0x38DC44u) {
        ctx->pc = 0x38DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC40u;
        // 0x38dc44: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC48u;
        goto label_38dc48;
    }
    ctx->pc = 0x38DC40u;
    {
        const bool branch_taken_0x38dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC40u;
        // 0x38dc44: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc40) {
            ctx->pc = 0x38DC7Cu;
            goto label_38dc7c;
        }
    }
    ctx->pc = 0x38DC48u;
label_38dc48:
    // 0x38dc48: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x38dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_38dc4c:
    // 0x38dc4c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_38dc50:
    if (ctx->pc == 0x38DC50u) {
        ctx->pc = 0x38DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC4Cu;
        // 0x38dc50: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC54u;
        goto label_38dc54;
    }
    ctx->pc = 0x38DC4Cu;
    {
        const bool branch_taken_0x38dc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC4Cu;
        // 0x38dc50: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc4c) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DC54u;
label_38dc54:
    // 0x38dc54: 0x10000009  b           . + 4 + (0x9 << 2)
label_38dc58:
    if (ctx->pc == 0x38DC58u) {
        ctx->pc = 0x38DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC54u;
        // 0x38dc58: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC5Cu;
        goto label_38dc5c;
    }
    ctx->pc = 0x38DC54u;
    {
        const bool branch_taken_0x38dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC54u;
        // 0x38dc58: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc54) {
            ctx->pc = 0x38DC7Cu;
            goto label_38dc7c;
        }
    }
    ctx->pc = 0x38DC5Cu;
label_38dc5c:
    // 0x38dc5c: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x38dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_38dc60:
    // 0x38dc60: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_38dc64:
    if (ctx->pc == 0x38DC64u) {
        ctx->pc = 0x38DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC60u;
        // 0x38dc64: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC68u;
        goto label_38dc68;
    }
    ctx->pc = 0x38DC60u;
    {
        const bool branch_taken_0x38dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC60u;
        // 0x38dc64: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc60) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DC68u;
label_38dc68:
    // 0x38dc68: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
label_38dc6c:
    if (ctx->pc == 0x38DC6Cu) {
        ctx->pc = 0x38DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC68u;
        // 0x38dc6c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC70u;
        goto label_38dc70;
    }
    ctx->pc = 0x38DC68u;
    {
        const bool branch_taken_0x38dc68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC68u;
        // 0x38dc6c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc68) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DC70u;
label_38dc70:
    // 0x38dc70: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x38dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_38dc74:
    // 0x38dc74: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x38dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_38dc78:
    // 0x38dc78: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x38dc78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38dc7c:
    // 0x38dc7c: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x38dc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
label_38dc80:
    // 0x38dc80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38dc80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38dc84:
    // 0x38dc84: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x38dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38dc88:
    // 0x38dc88: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x38dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38dc8c:
    // 0x38dc8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38dc90:
    // 0x38dc90: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x38dc90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38dc94:
    // 0x38dc94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_38dc98:
    if (ctx->pc == 0x38DC98u) {
        ctx->pc = 0x38DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC94u;
        // 0x38dc98: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DC9Cu;
        goto label_38dc9c;
    }
    ctx->pc = 0x38DC94u;
    {
        const bool branch_taken_0x38dc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC94u;
        // 0x38dc98: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc94) {
            ctx->pc = 0x38DCB0u;
            goto label_38dcb0;
        }
    }
    ctx->pc = 0x38DC9Cu;
label_38dc9c:
    // 0x38dc9c: 0xc0e316e  jal         func_38C5B8
label_38dca0:
    if (ctx->pc == 0x38DCA0u) {
        ctx->pc = 0x38DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC9Cu;
        // 0x38dca0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCA4u;
        goto label_38dca4;
    }
    ctx->pc = 0x38DC9Cu;
    SET_GPR_U32(ctx, 31, 0x38DCA4u);
    ctx->pc = 0x38DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DC9Cu;
    // 0x38dca0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38DC9Cu, 0x38DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DCA4u;
label_38dca4:
    // 0x38dca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38dca8:
    // 0x38dca8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_38dcac:
    if (ctx->pc == 0x38DCACu) {
        ctx->pc = 0x38DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCA8u;
        // 0x38dcac: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCB0u;
        goto label_38dcb0;
    }
    ctx->pc = 0x38DCA8u;
    {
        const bool branch_taken_0x38dca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCA8u;
        // 0x38dcac: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dca8) {
            ctx->pc = 0x38DCC8u;
            goto label_38dcc8;
        }
    }
    ctx->pc = 0x38DCB0u;
label_38dcb0:
    // 0x38dcb0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38dcb4:
    // 0x38dcb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38dcb8:
    // 0x38dcb8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x38dcb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38dcbc:
    // 0x38dcbc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_38dcc0:
    if (ctx->pc == 0x38DCC0u) {
        ctx->pc = 0x38DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCBCu;
        // 0x38dcc0: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCC4u;
        goto label_38dcc4;
    }
    ctx->pc = 0x38DCBCu;
    {
        const bool branch_taken_0x38dcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38dcbc) {
            ctx->pc = 0x38DCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DCBCu;
            // 0x38dcc0: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DCD4u;
            goto label_38dcd4;
        }
    }
    ctx->pc = 0x38DCC4u;
label_38dcc4:
    // 0x38dcc4: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x38dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_38dcc8:
    // 0x38dcc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38dccc:
    // 0x38dccc: 0x10000003  b           . + 4 + (0x3 << 2)
label_38dcd0:
    if (ctx->pc == 0x38DCD0u) {
        ctx->pc = 0x38DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCCCu;
        // 0x38dcd0: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCD4u;
        goto label_38dcd4;
    }
    ctx->pc = 0x38DCCCu;
    {
        const bool branch_taken_0x38dccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCCCu;
        // 0x38dcd0: 0xafa20274  sw          $v0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dccc) {
            ctx->pc = 0x38DCDCu;
            goto label_38dcdc;
        }
    }
    ctx->pc = 0x38DCD4u;
label_38dcd4:
    // 0x38dcd4: 0x56a0ffac  bnel        $s5, $zero, . + 4 + (-0x54 << 2)
label_38dcd8:
    if (ctx->pc == 0x38DCD8u) {
        ctx->pc = 0x38DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCD4u;
        // 0x38dcd8: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCDCu;
        goto label_38dcdc;
    }
    ctx->pc = 0x38DCD4u;
    {
        const bool branch_taken_0x38dcd4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x38dcd4) {
            ctx->pc = 0x38DCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DCD4u;
            // 0x38dcd8: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38db88;
        }
    }
    ctx->pc = 0x38DCDCu;
label_38dcdc:
    // 0x38dcdc: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x38dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_38dce0:
    // 0x38dce0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38dce4:
    if (ctx->pc == 0x38DCE4u) {
        ctx->pc = 0x38DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCE0u;
        // 0x38dce4: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCE8u;
        goto label_38dce8;
    }
    ctx->pc = 0x38DCE0u;
    {
        const bool branch_taken_0x38dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCE0u;
        // 0x38dce4: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dce0) {
            ctx->pc = 0x38DD04u;
            goto label_38dd04;
        }
    }
    ctx->pc = 0x38DCE8u;
label_38dce8:
    // 0x38dce8: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_38dcec:
    if (ctx->pc == 0x38DCECu) {
        ctx->pc = 0x38DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCE8u;
        // 0x38dcec: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCF0u;
        goto label_38dcf0;
    }
    ctx->pc = 0x38DCE8u;
    {
        const bool branch_taken_0x38dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCE8u;
        // 0x38dcec: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dce8) {
            ctx->pc = 0x38DFC4u;
            goto label_38dfc4;
        }
    }
    ctx->pc = 0x38DCF0u;
label_38dcf0:
    // 0x38dcf0: 0x9244ffff  lbu         $a0, -0x1($s2)
    ctx->pc = 0x38dcf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_38dcf4:
    // 0x38dcf4: 0xc0e3aac  jal         func_38EAB0
label_38dcf8:
    if (ctx->pc == 0x38DCF8u) {
        ctx->pc = 0x38DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCF4u;
        // 0x38dcf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DCFCu;
        goto label_38dcfc;
    }
    ctx->pc = 0x38DCF4u;
    SET_GPR_U32(ctx, 31, 0x38DCFCu);
    ctx->pc = 0x38DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DCF4u;
    // 0x38dcf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAB0u, 0x38DCF4u, 0x38DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DCFCu;
label_38dcfc:
    // 0x38dcfc: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_38dd00:
    if (ctx->pc == 0x38DD00u) {
        ctx->pc = 0x38DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCFCu;
        // 0x38dd00: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD04u;
        goto label_38dd04;
    }
    ctx->pc = 0x38DCFCu;
    {
        const bool branch_taken_0x38dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCFCu;
        // 0x38dd00: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dcfc) {
            ctx->pc = 0x38DFC4u;
            goto label_38dfc4;
        }
    }
    ctx->pc = 0x38DD04u;
label_38dd04:
    // 0x38dd04: 0x9251ffff  lbu         $s1, -0x1($s2)
    ctx->pc = 0x38dd04u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_38dd08:
    // 0x38dd08: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x38dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_38dd0c:
    // 0x38dd0c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_38dd10:
    if (ctx->pc == 0x38DD10u) {
        ctx->pc = 0x38DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD0Cu;
        // 0x38dd10: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD14u;
        goto label_38dd14;
    }
    ctx->pc = 0x38DD0Cu;
    {
        const bool branch_taken_0x38dd0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD0Cu;
        // 0x38dd10: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd0c) {
            ctx->pc = 0x38DD1Cu;
            goto label_38dd1c;
        }
    }
    ctx->pc = 0x38DD14u;
label_38dd14:
    // 0x38dd14: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_38dd18:
    if (ctx->pc == 0x38DD18u) {
        ctx->pc = 0x38DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD14u;
        // 0x38dd18: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD1Cu;
        goto label_38dd1c;
    }
    ctx->pc = 0x38DD14u;
    {
        const bool branch_taken_0x38dd14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD14u;
        // 0x38dd18: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd14) {
            ctx->pc = 0x38DD30u;
            goto label_38dd30;
        }
    }
    ctx->pc = 0x38DD1Cu;
label_38dd1c:
    // 0x38dd1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38dd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38dd20:
    // 0x38dd20: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x38dd20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_38dd24:
    // 0x38dd24: 0xc0e3aac  jal         func_38EAB0
label_38dd28:
    if (ctx->pc == 0x38DD28u) {
        ctx->pc = 0x38DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD24u;
        // 0x38dd28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD2Cu;
        goto label_38dd2c;
    }
    ctx->pc = 0x38DD24u;
    SET_GPR_U32(ctx, 31, 0x38DD2Cu);
    ctx->pc = 0x38DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DD24u;
    // 0x38dd28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAB0u, 0x38DD24u, 0x38DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DD2Cu;
label_38dd2c:
    // 0x38dd2c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x38dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38dd30:
    // 0x38dd30: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_38dd34:
    if (ctx->pc == 0x38DD34u) {
        ctx->pc = 0x38DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD30u;
        // 0x38dd34: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD38u;
        goto label_38dd38;
    }
    ctx->pc = 0x38DD30u;
    {
        const bool branch_taken_0x38dd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD30u;
        // 0x38dd34: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd30) {
            ctx->pc = 0x38DF8Cu;
            goto label_38df8c;
        }
    }
    ctx->pc = 0x38DD38u;
label_38dd38:
    // 0x38dd38: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x38dd38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_38dd3c:
    // 0x38dd3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x38dd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38dd40:
    // 0x38dd40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38dd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38dd44:
    // 0x38dd44: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x38dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_38dd48:
    // 0x38dd48: 0x60f809  jalr        $v1
label_38dd4c:
    if (ctx->pc == 0x38DD4Cu) {
        ctx->pc = 0x38DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD48u;
        // 0x38dd4c: 0x8fa6026c  lw          $a2, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD50u;
        goto label_38dd50;
    }
    ctx->pc = 0x38DD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38DD50u);
        ctx->pc = 0x38DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD48u;
        // 0x38dd4c: 0x8fa6026c  lw          $a2, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DD48u, 0x38DD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DD50u;
label_38dd50:
    // 0x38dd50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38dd50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38dd54:
    // 0x38dd54: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x38dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_38dd58:
    // 0x38dd58: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_38dd5c:
    if (ctx->pc == 0x38DD5Cu) {
        ctx->pc = 0x38DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD58u;
        // 0x38dd5c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD60u;
        goto label_38dd60;
    }
    ctx->pc = 0x38DD58u;
    {
        const bool branch_taken_0x38dd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38dd58) {
            ctx->pc = 0x38DD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DD58u;
            // 0x38dd5c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DD94u;
            goto label_38dd94;
        }
    }
    ctx->pc = 0x38DD60u;
label_38dd60:
    // 0x38dd60: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x38dd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_38dd64:
    // 0x38dd64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38dd68:
    if (ctx->pc == 0x38DD68u) {
        ctx->pc = 0x38DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD64u;
        // 0x38dd68: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD6Cu;
        goto label_38dd6c;
    }
    ctx->pc = 0x38DD64u;
    {
        const bool branch_taken_0x38dd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD64u;
        // 0x38dd68: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd64) {
            ctx->pc = 0x38DD80u;
            goto label_38dd80;
        }
    }
    ctx->pc = 0x38DD6Cu;
label_38dd6c:
    // 0x38dd6c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38dd6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38dd70:
    // 0x38dd70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x38dd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_38dd74:
    // 0x38dd74: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38dd78:
    // 0x38dd78: 0x1000000a  b           . + 4 + (0xA << 2)
label_38dd7c:
    if (ctx->pc == 0x38DD7Cu) {
        ctx->pc = 0x38DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD78u;
        // 0x38dd7c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD80u;
        goto label_38dd80;
    }
    ctx->pc = 0x38DD78u;
    {
        const bool branch_taken_0x38dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD78u;
        // 0x38dd7c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd78) {
            ctx->pc = 0x38DDA4u;
            goto label_38dda4;
        }
    }
    ctx->pc = 0x38DD80u;
label_38dd80:
    // 0x38dd80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38dd84:
    if (ctx->pc == 0x38DD84u) {
        ctx->pc = 0x38DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD80u;
        // 0x38dd84: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD88u;
        goto label_38dd88;
    }
    ctx->pc = 0x38DD80u;
    {
        const bool branch_taken_0x38dd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD80u;
        // 0x38dd84: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd80) {
            ctx->pc = 0x38DD94u;
            goto label_38dd94;
        }
    }
    ctx->pc = 0x38DD88u;
label_38dd88:
    // 0x38dd88: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38dd8c:
    // 0x38dd8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_38dd90:
    if (ctx->pc == 0x38DD90u) {
        ctx->pc = 0x38DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD8Cu;
        // 0x38dd90: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DD94u;
        goto label_38dd94;
    }
    ctx->pc = 0x38DD8Cu;
    {
        const bool branch_taken_0x38dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD8Cu;
        // 0x38dd90: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd8c) {
            ctx->pc = 0x38DDA4u;
            goto label_38dda4;
        }
    }
    ctx->pc = 0x38DD94u;
label_38dd94:
    // 0x38dd94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x38dd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_38dd98:
    // 0x38dd98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x38dd98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_38dd9c:
    // 0x38dd9c: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38dda0:
    // 0x38dda0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_38dda4:
    // 0x38dda4: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x38dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38dda8:
    // 0x38dda8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38ddac:
    // 0x38ddac: 0x10000076  b           . + 4 + (0x76 << 2)
label_38ddb0:
    if (ctx->pc == 0x38DDB0u) {
        ctx->pc = 0x38DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDACu;
        // 0x38ddb0: 0xafa40264  sw          $a0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDB4u;
        goto label_38ddb4;
    }
    ctx->pc = 0x38DDACu;
    {
        const bool branch_taken_0x38ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDACu;
        // 0x38ddb0: 0xafa40264  sw          $a0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddac) {
            ctx->pc = 0x38DF88u;
            goto label_38df88;
        }
    }
    ctx->pc = 0x38DDB4u;
label_38ddb4:
    // 0x38ddb4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_38ddb8:
    if (ctx->pc == 0x38DDB8u) {
        ctx->pc = 0x38DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDB4u;
        // 0x38ddb8: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDBCu;
        goto label_38ddbc;
    }
    ctx->pc = 0x38DDB4u;
    {
        const bool branch_taken_0x38ddb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDB4u;
        // 0x38ddb8: 0x2aa2015e  slti        $v0, $s5, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddb4) {
            ctx->pc = 0x38DDC4u;
            goto label_38ddc4;
        }
    }
    ctx->pc = 0x38DDBCu;
label_38ddbc:
    // 0x38ddbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38ddc0:
    if (ctx->pc == 0x38DDC0u) {
        ctx->pc = 0x38DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDBCu;
        // 0x38ddc0: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDC4u;
        goto label_38ddc4;
    }
    ctx->pc = 0x38DDBCu;
    {
        const bool branch_taken_0x38ddbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDBCu;
        // 0x38ddc0: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddbc) {
            ctx->pc = 0x38DDCCu;
            goto label_38ddcc;
        }
    }
    ctx->pc = 0x38DDC4u;
label_38ddc4:
    // 0x38ddc4: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x38ddc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_38ddc8:
    // 0x38ddc8: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x38ddc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_38ddcc:
    // 0x38ddcc: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x38ddccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_38ddd0:
    // 0x38ddd0: 0x12a00039  beqz        $s5, . + 4 + (0x39 << 2)
label_38ddd4:
    if (ctx->pc == 0x38DDD4u) {
        ctx->pc = 0x38DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDD0u;
        // 0x38ddd4: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDD8u;
        goto label_38ddd8;
    }
    ctx->pc = 0x38DDD0u;
    {
        const bool branch_taken_0x38ddd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDD0u;
        // 0x38ddd4: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddd0) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DDD8u;
label_38ddd8:
    // 0x38ddd8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x38ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38dddc:
    // 0x38dddc: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x38dddcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38dde0:
    // 0x38dde0: 0x2623ffd5  addiu       $v1, $s1, -0x2B
    ctx->pc = 0x38dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967253));
label_38dde4:
    // 0x38dde4: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x38dde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_38dde8:
    // 0x38dde8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_38ddec:
    if (ctx->pc == 0x38DDECu) {
        ctx->pc = 0x38DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDE8u;
        // 0x38ddec: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DDF0u;
        goto label_38ddf0;
    }
    ctx->pc = 0x38DDE8u;
    {
        const bool branch_taken_0x38dde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDE8u;
        // 0x38ddec: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dde8) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DDF0u;
label_38ddf0:
    // 0x38ddf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38ddf4:
    // 0x38ddf4: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x38ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
label_38ddf8:
    // 0x38ddf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38ddfc:
    // 0x38ddfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38de00:
    // 0x38de00: 0x800008  jr          $a0
label_38de04:
    if (ctx->pc == 0x38DE04u) {
        ctx->pc = 0x38DE08u;
        goto label_38de08;
    }
    ctx->pc = 0x38DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38DE08u: goto label_38de08;
            case 0x38DE14u: goto label_38de14;
            case 0x38DE28u: goto label_38de28;
            case 0x38DE3Cu: goto label_38de3c;
            case 0x38DEB8u: goto label_38deb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38DE08u;
label_38de08:
    // 0x38de08: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x38de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_38de0c:
    // 0x38de0c: 0x10000011  b           . + 4 + (0x11 << 2)
label_38de10:
    if (ctx->pc == 0x38DE10u) {
        ctx->pc = 0x38DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE0Cu;
        // 0x38de10: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE14u;
        goto label_38de14;
    }
    ctx->pc = 0x38DE0Cu;
    {
        const bool branch_taken_0x38de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE0Cu;
        // 0x38de10: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de0c) {
            ctx->pc = 0x38DE54u;
            goto label_38de54;
        }
    }
    ctx->pc = 0x38DE14u;
label_38de14:
    // 0x38de14: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x38de14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_38de18:
    // 0x38de18: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_38de1c:
    if (ctx->pc == 0x38DE1Cu) {
        ctx->pc = 0x38DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE18u;
        // 0x38de1c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE20u;
        goto label_38de20;
    }
    ctx->pc = 0x38DE18u;
    {
        const bool branch_taken_0x38de18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE18u;
        // 0x38de1c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de18) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DE20u;
label_38de20:
    // 0x38de20: 0x1000000c  b           . + 4 + (0xC << 2)
label_38de24:
    if (ctx->pc == 0x38DE24u) {
        ctx->pc = 0x38DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE20u;
        // 0x38de24: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE28u;
        goto label_38de28;
    }
    ctx->pc = 0x38DE20u;
    {
        const bool branch_taken_0x38de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE20u;
        // 0x38de24: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de20) {
            ctx->pc = 0x38DE54u;
            goto label_38de54;
        }
    }
    ctx->pc = 0x38DE28u;
label_38de28:
    // 0x38de28: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x38de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_38de2c:
    // 0x38de2c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_38de30:
    if (ctx->pc == 0x38DE30u) {
        ctx->pc = 0x38DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE2Cu;
        // 0x38de30: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE34u;
        goto label_38de34;
    }
    ctx->pc = 0x38DE2Cu;
    {
        const bool branch_taken_0x38de2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE2Cu;
        // 0x38de30: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de2c) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DE34u;
label_38de34:
    // 0x38de34: 0x10000007  b           . + 4 + (0x7 << 2)
label_38de38:
    if (ctx->pc == 0x38DE38u) {
        ctx->pc = 0x38DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE34u;
        // 0x38de38: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE3Cu;
        goto label_38de3c;
    }
    ctx->pc = 0x38DE34u;
    {
        const bool branch_taken_0x38de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE34u;
        // 0x38de38: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de34) {
            ctx->pc = 0x38DE54u;
            goto label_38de54;
        }
    }
    ctx->pc = 0x38DE3Cu;
label_38de3c:
    // 0x38de3c: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x38de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_38de40:
    // 0x38de40: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x38de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_38de44:
    // 0x38de44: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_38de48:
    if (ctx->pc == 0x38DE48u) {
        ctx->pc = 0x38DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE44u;
        // 0x38de48: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE4Cu;
        goto label_38de4c;
    }
    ctx->pc = 0x38DE44u;
    {
        const bool branch_taken_0x38de44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE44u;
        // 0x38de48: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de44) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DE4Cu;
label_38de4c:
    // 0x38de4c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x38de4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_38de50:
    // 0x38de50: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x38de50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_38de54:
    // 0x38de54: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x38de54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
label_38de58:
    // 0x38de58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38de58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38de5c:
    // 0x38de5c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x38de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38de60:
    // 0x38de60: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x38de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_38de64:
    // 0x38de64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38de68:
    // 0x38de68: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x38de68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38de6c:
    // 0x38de6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_38de70:
    if (ctx->pc == 0x38DE70u) {
        ctx->pc = 0x38DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE6Cu;
        // 0x38de70: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE74u;
        goto label_38de74;
    }
    ctx->pc = 0x38DE6Cu;
    {
        const bool branch_taken_0x38de6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE6Cu;
        // 0x38de70: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de6c) {
            ctx->pc = 0x38DE88u;
            goto label_38de88;
        }
    }
    ctx->pc = 0x38DE74u;
label_38de74:
    // 0x38de74: 0xc0e316e  jal         func_38C5B8
label_38de78:
    if (ctx->pc == 0x38DE78u) {
        ctx->pc = 0x38DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE74u;
        // 0x38de78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE7Cu;
        goto label_38de7c;
    }
    ctx->pc = 0x38DE74u;
    SET_GPR_U32(ctx, 31, 0x38DE7Cu);
    ctx->pc = 0x38DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE74u;
    // 0x38de78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38DE74u, 0x38DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE7Cu;
label_38de7c:
    // 0x38de7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38de80:
    // 0x38de80: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_38de84:
    if (ctx->pc == 0x38DE84u) {
        ctx->pc = 0x38DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE80u;
        // 0x38de84: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE88u;
        goto label_38de88;
    }
    ctx->pc = 0x38DE80u;
    {
        const bool branch_taken_0x38de80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE80u;
        // 0x38de84: 0x8fa40274  lw          $a0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de80) {
            ctx->pc = 0x38DEA4u;
            goto label_38dea4;
        }
    }
    ctx->pc = 0x38DE88u;
label_38de88:
    // 0x38de88: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x38de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38de8c:
    // 0x38de8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x38de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38de90:
    // 0x38de90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38de94:
    // 0x38de94: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38de94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38de98:
    // 0x38de98: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_38de9c:
    if (ctx->pc == 0x38DE9Cu) {
        ctx->pc = 0x38DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE98u;
        // 0x38de9c: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEA0u;
        goto label_38dea0;
    }
    ctx->pc = 0x38DE98u;
    {
        const bool branch_taken_0x38de98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x38de98) {
            ctx->pc = 0x38DE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DE98u;
            // 0x38de9c: 0x66b5ffff  daddiu      $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DEB0u;
            goto label_38deb0;
        }
    }
    ctx->pc = 0x38DEA0u;
label_38dea0:
    // 0x38dea0: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x38dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_38dea4:
    // 0x38dea4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38dea8:
    // 0x38dea8: 0x10000003  b           . + 4 + (0x3 << 2)
label_38deac:
    if (ctx->pc == 0x38DEACu) {
        ctx->pc = 0x38DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEA8u;
        // 0x38deac: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEB0u;
        goto label_38deb0;
    }
    ctx->pc = 0x38DEA8u;
    {
        const bool branch_taken_0x38dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEA8u;
        // 0x38deac: 0xafa40274  sw          $a0, 0x274($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dea8) {
            ctx->pc = 0x38DEB8u;
            goto label_38deb8;
        }
    }
    ctx->pc = 0x38DEB0u;
label_38deb0:
    // 0x38deb0: 0x56a0ffcb  bnel        $s5, $zero, . + 4 + (-0x35 << 2)
label_38deb4:
    if (ctx->pc == 0x38DEB4u) {
        ctx->pc = 0x38DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEB0u;
        // 0x38deb4: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEB8u;
        goto label_38deb8;
    }
    ctx->pc = 0x38DEB0u;
    {
        const bool branch_taken_0x38deb0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x38deb0) {
            ctx->pc = 0x38DEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DEB0u;
            // 0x38deb4: 0x90b10000  lbu         $s1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dde0;
        }
    }
    ctx->pc = 0x38DEB8u;
label_38deb8:
    // 0x38deb8: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x38deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_38debc:
    // 0x38debc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_38dec0:
    if (ctx->pc == 0x38DEC0u) {
        ctx->pc = 0x38DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEBCu;
        // 0x38dec0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEC4u;
        goto label_38dec4;
    }
    ctx->pc = 0x38DEBCu;
    {
        const bool branch_taken_0x38debc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEBCu;
        // 0x38dec0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38debc) {
            ctx->pc = 0x38DF30u;
            goto label_38df30;
        }
    }
    ctx->pc = 0x38DEC4u;
label_38dec4:
    // 0x38dec4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_38dec8:
    if (ctx->pc == 0x38DEC8u) {
        ctx->pc = 0x38DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC4u;
        // 0x38dec8: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DECCu;
        goto label_38decc;
    }
    ctx->pc = 0x38DEC4u;
    {
        const bool branch_taken_0x38dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC4u;
        // 0x38dec8: 0x3d2102b  sltu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dec4) {
            ctx->pc = 0x38DEF8u;
            goto label_38def8;
        }
    }
    ctx->pc = 0x38DECCu;
label_38decc:
    // 0x38decc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_38ded0:
    if (ctx->pc == 0x38DED0u) {
        ctx->pc = 0x38DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DECCu;
        // 0x38ded0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DED4u;
        goto label_38ded4;
    }
    ctx->pc = 0x38DECCu;
    {
        const bool branch_taken_0x38decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DECCu;
        // 0x38ded0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38decc) {
            ctx->pc = 0x38DFC4u;
            goto label_38dfc4;
        }
    }
    ctx->pc = 0x38DED4u;
label_38ded4:
    // 0x38ded4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x38ded4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_38ded8:
    // 0x38ded8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38ded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38dedc:
    // 0x38dedc: 0xc0e3aac  jal         func_38EAB0
label_38dee0:
    if (ctx->pc == 0x38DEE0u) {
        ctx->pc = 0x38DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEDCu;
        // 0x38dee0: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEE4u;
        goto label_38dee4;
    }
    ctx->pc = 0x38DEDCu;
    SET_GPR_U32(ctx, 31, 0x38DEE4u);
    ctx->pc = 0x38DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DEDCu;
    // 0x38dee0: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAB0u, 0x38DEDCu, 0x38DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DEE4u;
label_38dee4:
    // 0x38dee4: 0x3d2182b  sltu        $v1, $fp, $s2
    ctx->pc = 0x38dee4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_38dee8:
    // 0x38dee8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_38deec:
    if (ctx->pc == 0x38DEECu) {
        ctx->pc = 0x38DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEE8u;
        // 0x38deec: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEF0u;
        goto label_38def0;
    }
    ctx->pc = 0x38DEE8u;
    {
        const bool branch_taken_0x38dee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEE8u;
        // 0x38deec: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dee8) {
            ctx->pc = 0x38DED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ded8;
        }
    }
    ctx->pc = 0x38DEF0u;
label_38def0:
    // 0x38def0: 0x10000034  b           . + 4 + (0x34 << 2)
label_38def4:
    if (ctx->pc == 0x38DEF4u) {
        ctx->pc = 0x38DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEF0u;
        // 0x38def4: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEF8u;
        goto label_38def8;
    }
    ctx->pc = 0x38DEF0u;
    {
        const bool branch_taken_0x38def0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEF0u;
        // 0x38def4: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38def0) {
            ctx->pc = 0x38DFC4u;
            goto label_38dfc4;
        }
    }
    ctx->pc = 0x38DEF8u;
label_38def8:
    // 0x38def8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x38def8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_38defc:
    // 0x38defc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x38defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_38df00:
    // 0x38df00: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x38df00u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_38df04:
    // 0x38df04: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_38df08:
    if (ctx->pc == 0x38DF08u) {
        ctx->pc = 0x38DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF04u;
        // 0x38df08: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF0Cu;
        goto label_38df0c;
    }
    ctx->pc = 0x38DF04u;
    {
        const bool branch_taken_0x38df04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF04u;
        // 0x38df08: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df04) {
            ctx->pc = 0x38DF24u;
            goto label_38df24;
        }
    }
    ctx->pc = 0x38DF0Cu;
label_38df0c:
    // 0x38df0c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_38df10:
    if (ctx->pc == 0x38DF10u) {
        ctx->pc = 0x38DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF0Cu;
        // 0x38df10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF14u;
        goto label_38df14;
    }
    ctx->pc = 0x38DF0Cu;
    {
        const bool branch_taken_0x38df0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF0Cu;
        // 0x38df10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df0c) {
            ctx->pc = 0x38DF24u;
            goto label_38df24;
        }
    }
    ctx->pc = 0x38DF14u;
label_38df14:
    // 0x38df14: 0xc0e3aac  jal         func_38EAB0
label_38df18:
    if (ctx->pc == 0x38DF18u) {
        ctx->pc = 0x38DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF14u;
        // 0x38df18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF1Cu;
        goto label_38df1c;
    }
    ctx->pc = 0x38DF14u;
    SET_GPR_U32(ctx, 31, 0x38DF1Cu);
    ctx->pc = 0x38DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF14u;
    // 0x38df18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAB0u, 0x38DF14u, 0x38DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF1Cu;
label_38df1c:
    // 0x38df1c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x38df1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_38df20:
    // 0x38df20: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x38df20u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_38df24:
    // 0x38df24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38df24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38df28:
    // 0x38df28: 0xc0e3aac  jal         func_38EAB0
label_38df2c:
    if (ctx->pc == 0x38DF2Cu) {
        ctx->pc = 0x38DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF28u;
        // 0x38df2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF30u;
        goto label_38df30;
    }
    ctx->pc = 0x38DF28u;
    SET_GPR_U32(ctx, 31, 0x38DF30u);
    ctx->pc = 0x38DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF28u;
    // 0x38df2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAB0u, 0x38DF28u, 0x38DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF30u;
label_38df30:
    // 0x38df30: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x38df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_38df34:
    // 0x38df34: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_38df38:
    if (ctx->pc == 0x38DF38u) {
        ctx->pc = 0x38DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF34u;
        // 0x38df38: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF3Cu;
        goto label_38df3c;
    }
    ctx->pc = 0x38DF34u;
    {
        const bool branch_taken_0x38df34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF34u;
        // 0x38df38: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df34) {
            ctx->pc = 0x38DF8Cu;
            goto label_38df8c;
        }
    }
    ctx->pc = 0x38DF3Cu;
label_38df3c:
    // 0x38df3c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x38df3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_38df40:
    // 0x38df40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x38df40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38df44:
    // 0x38df44: 0xc0e40fa  jal         func_3903E8
label_38df48:
    if (ctx->pc == 0x38DF48u) {
        ctx->pc = 0x38DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF44u;
        // 0x38df48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF4Cu;
        goto label_38df4c;
    }
    ctx->pc = 0x38DF44u;
    SET_GPR_U32(ctx, 31, 0x38DF4Cu);
    ctx->pc = 0x38DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF44u;
    // 0x38df48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903E8u, 0x38DF44u, 0x38DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF4Cu;
label_38df4c:
    // 0x38df4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38df4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38df50:
    // 0x38df50: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x38df50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_38df54:
    // 0x38df54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38df58:
    if (ctx->pc == 0x38DF58u) {
        ctx->pc = 0x38DF5Cu;
        goto label_38df5c;
    }
    ctx->pc = 0x38DF54u;
    {
        const bool branch_taken_0x38df54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38df54) {
            ctx->pc = 0x38DF6Cu;
            goto label_38df6c;
        }
    }
    ctx->pc = 0x38DF5Cu;
label_38df5c:
    // 0x38df5c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x38df5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_38df60:
    // 0x38df60: 0x8ec2fff8  lw          $v0, -0x8($s6)
    ctx->pc = 0x38df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38df64:
    // 0x38df64: 0x10000005  b           . + 4 + (0x5 << 2)
label_38df68:
    if (ctx->pc == 0x38DF68u) {
        ctx->pc = 0x38DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF64u;
        // 0x38df68: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF6Cu;
        goto label_38df6c;
    }
    ctx->pc = 0x38DF64u;
    {
        const bool branch_taken_0x38df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF64u;
        // 0x38df68: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df64) {
            ctx->pc = 0x38DF7Cu;
            goto label_38df7c;
        }
    }
    ctx->pc = 0x38DF6Cu;
label_38df6c:
    // 0x38df6c: 0xc0c7ab8  jal         func_31EAE0
label_38df70:
    if (ctx->pc == 0x38DF70u) {
        ctx->pc = 0x38DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF6Cu;
        // 0x38df70: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF74u;
        goto label_38df74;
    }
    ctx->pc = 0x38DF6Cu;
    SET_GPR_U32(ctx, 31, 0x38DF74u);
    ctx->pc = 0x38DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF6Cu;
    // 0x38df70: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x38DF6Cu, 0x38DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF74u;
label_38df74:
    // 0x38df74: 0x8ed0fff8  lw          $s0, -0x8($s6)
    ctx->pc = 0x38df74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967288)));
label_38df78:
    // 0x38df78: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x38df78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_38df7c:
    // 0x38df7c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x38df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38df80:
    // 0x38df80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38df80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38df84:
    // 0x38df84: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x38df84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_38df88:
    // 0x38df88: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x38df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_38df8c:
    // 0x38df8c: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x38df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_38df90:
    // 0x38df90: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x38df90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_38df94:
    // 0x38df94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38df98:
    // 0x38df98: 0x1000fce4  b           . + 4 + (-0x31C << 2)
label_38df9c:
    if (ctx->pc == 0x38DF9Cu) {
        ctx->pc = 0x38DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF98u;
        // 0x38df9c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFA0u;
        goto label_38dfa0;
    }
    ctx->pc = 0x38DF98u;
    {
        const bool branch_taken_0x38df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF98u;
        // 0x38df9c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df98) {
            ctx->pc = 0x38D32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d32c;
        }
    }
    ctx->pc = 0x38DFA0u;
label_38dfa0:
    // 0x38dfa0: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x38dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_38dfa4:
    // 0x38dfa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38dfa8:
    // 0x38dfa8: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x38dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38dfac:
    // 0x38dfac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38dfb0:
    // 0x38dfb0: 0xafa40274  sw          $a0, 0x274($sp)
    ctx->pc = 0x38dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
label_38dfb4:
    // 0x38dfb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x38dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38dfb8:
    // 0x38dfb8: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x38dfb8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_38dfbc:
    // 0x38dfbc: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x38dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_38dfc0:
    // 0x38dfc0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x38dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_38dfc4:
    // 0x38dfc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_38dfc8:
    if (ctx->pc == 0x38DFC8u) {
        ctx->pc = 0x38DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFC4u;
        // 0x38dfc8: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFCCu;
        goto label_38dfcc;
    }
    ctx->pc = 0x38DFC4u;
    {
        const bool branch_taken_0x38dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFC4u;
        // 0x38dfc8: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfc4) {
            ctx->pc = 0x38DFF8u;
            goto label_38dff8;
        }
    }
    ctx->pc = 0x38DFCCu;
label_38dfcc:
    // 0x38dfcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38dfd0:
    // 0x38dfd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38dfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_38dfd4:
    // 0x38dfd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_38dfd8:
    // 0x38dfd8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x38dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_38dfdc:
    // 0x38dfdc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_38dfe0:
    if (ctx->pc == 0x38DFE0u) {
        ctx->pc = 0x38DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFDCu;
        // 0x38dfe0: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFE4u;
        goto label_38dfe4;
    }
    ctx->pc = 0x38DFDCu;
    {
        const bool branch_taken_0x38dfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFDCu;
        // 0x38dfe0: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfdc) {
            ctx->pc = 0x38DFF8u;
            goto label_38dff8;
        }
    }
    ctx->pc = 0x38DFE4u;
label_38dfe4:
    // 0x38dfe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38dfe8:
    if (ctx->pc == 0x38DFE8u) {
        ctx->pc = 0x38DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFE4u;
        // 0x38dfe8: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFECu;
        goto label_38dfec;
    }
    ctx->pc = 0x38DFE4u;
    {
        const bool branch_taken_0x38dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFE4u;
        // 0x38dfe8: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfe4) {
            ctx->pc = 0x38DFFCu;
            goto label_38dffc;
        }
    }
    ctx->pc = 0x38DFECu;
label_38dfec:
    // 0x38dfec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38dff0:
    // 0x38dff0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x38dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_38dff4:
    // 0x38dff4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x38dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_38dff8:
    // 0x38dff8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x38dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_38dffc:
    // 0x38dffc: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x38dffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_38e000:
    // 0x38e000: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x38e000u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_38e004:
    // 0x38e004: 0xdfb702f0  ld          $s7, 0x2F0($sp)
    ctx->pc = 0x38e004u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_38e008:
    // 0x38e008: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x38e008u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_38e00c:
    // 0x38e00c: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x38e00cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_38e010:
    // 0x38e010: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x38e010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_38e014:
    // 0x38e014: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x38e014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_38e018:
    // 0x38e018: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x38e018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_38e01c:
    // 0x38e01c: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x38e01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_38e020:
    // 0x38e020: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x38e020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_38e024:
    // 0x38e024: 0x3e00008  jr          $ra
label_38e028:
    if (ctx->pc == 0x38E028u) {
        ctx->pc = 0x38E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E024u;
        // 0x38e028: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E02Cu;
        goto label_38e02c;
    }
    ctx->pc = 0x38E024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E024u;
        // 0x38e028: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E02Cu;
label_38e02c:
    // 0x38e02c: 0x0  nop
    ctx->pc = 0x38e02cu;
    // NOP
    ctx->pc = 0x38e030u;
}
