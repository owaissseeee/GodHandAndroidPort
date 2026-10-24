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

// Function: func_0010F720
// Address: 0x10f720 - 0x10fe18
void func_0010F720_0x10f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010F720_0x10f720");
#endif

    switch (ctx->pc) {
        case 0x10f720u: goto label_10f720;
        case 0x10f724u: goto label_10f724;
        case 0x10f728u: goto label_10f728;
        case 0x10f72cu: goto label_10f72c;
        case 0x10f730u: goto label_10f730;
        case 0x10f734u: goto label_10f734;
        case 0x10f738u: goto label_10f738;
        case 0x10f73cu: goto label_10f73c;
        case 0x10f740u: goto label_10f740;
        case 0x10f744u: goto label_10f744;
        case 0x10f748u: goto label_10f748;
        case 0x10f74cu: goto label_10f74c;
        case 0x10f750u: goto label_10f750;
        case 0x10f754u: goto label_10f754;
        case 0x10f758u: goto label_10f758;
        case 0x10f75cu: goto label_10f75c;
        case 0x10f760u: goto label_10f760;
        case 0x10f764u: goto label_10f764;
        case 0x10f768u: goto label_10f768;
        case 0x10f76cu: goto label_10f76c;
        case 0x10f770u: goto label_10f770;
        case 0x10f774u: goto label_10f774;
        case 0x10f778u: goto label_10f778;
        case 0x10f77cu: goto label_10f77c;
        case 0x10f780u: goto label_10f780;
        case 0x10f784u: goto label_10f784;
        case 0x10f788u: goto label_10f788;
        case 0x10f78cu: goto label_10f78c;
        case 0x10f790u: goto label_10f790;
        case 0x10f794u: goto label_10f794;
        case 0x10f798u: goto label_10f798;
        case 0x10f79cu: goto label_10f79c;
        case 0x10f7a0u: goto label_10f7a0;
        case 0x10f7a4u: goto label_10f7a4;
        case 0x10f7a8u: goto label_10f7a8;
        case 0x10f7acu: goto label_10f7ac;
        case 0x10f7b0u: goto label_10f7b0;
        case 0x10f7b4u: goto label_10f7b4;
        case 0x10f7b8u: goto label_10f7b8;
        case 0x10f7bcu: goto label_10f7bc;
        case 0x10f7c0u: goto label_10f7c0;
        case 0x10f7c4u: goto label_10f7c4;
        case 0x10f7c8u: goto label_10f7c8;
        case 0x10f7ccu: goto label_10f7cc;
        case 0x10f7d0u: goto label_10f7d0;
        case 0x10f7d4u: goto label_10f7d4;
        case 0x10f7d8u: goto label_10f7d8;
        case 0x10f7dcu: goto label_10f7dc;
        case 0x10f7e0u: goto label_10f7e0;
        case 0x10f7e4u: goto label_10f7e4;
        case 0x10f7e8u: goto label_10f7e8;
        case 0x10f7ecu: goto label_10f7ec;
        case 0x10f7f0u: goto label_10f7f0;
        case 0x10f7f4u: goto label_10f7f4;
        case 0x10f7f8u: goto label_10f7f8;
        case 0x10f7fcu: goto label_10f7fc;
        case 0x10f800u: goto label_10f800;
        case 0x10f804u: goto label_10f804;
        case 0x10f808u: goto label_10f808;
        case 0x10f80cu: goto label_10f80c;
        case 0x10f810u: goto label_10f810;
        case 0x10f814u: goto label_10f814;
        case 0x10f818u: goto label_10f818;
        case 0x10f81cu: goto label_10f81c;
        case 0x10f820u: goto label_10f820;
        case 0x10f824u: goto label_10f824;
        case 0x10f828u: goto label_10f828;
        case 0x10f82cu: goto label_10f82c;
        case 0x10f830u: goto label_10f830;
        case 0x10f834u: goto label_10f834;
        case 0x10f838u: goto label_10f838;
        case 0x10f83cu: goto label_10f83c;
        case 0x10f840u: goto label_10f840;
        case 0x10f844u: goto label_10f844;
        case 0x10f848u: goto label_10f848;
        case 0x10f84cu: goto label_10f84c;
        case 0x10f850u: goto label_10f850;
        case 0x10f854u: goto label_10f854;
        case 0x10f858u: goto label_10f858;
        case 0x10f85cu: goto label_10f85c;
        case 0x10f860u: goto label_10f860;
        case 0x10f864u: goto label_10f864;
        case 0x10f868u: goto label_10f868;
        case 0x10f86cu: goto label_10f86c;
        case 0x10f870u: goto label_10f870;
        case 0x10f874u: goto label_10f874;
        case 0x10f878u: goto label_10f878;
        case 0x10f87cu: goto label_10f87c;
        case 0x10f880u: goto label_10f880;
        case 0x10f884u: goto label_10f884;
        case 0x10f888u: goto label_10f888;
        case 0x10f88cu: goto label_10f88c;
        case 0x10f890u: goto label_10f890;
        case 0x10f894u: goto label_10f894;
        case 0x10f898u: goto label_10f898;
        case 0x10f89cu: goto label_10f89c;
        case 0x10f8a0u: goto label_10f8a0;
        case 0x10f8a4u: goto label_10f8a4;
        case 0x10f8a8u: goto label_10f8a8;
        case 0x10f8acu: goto label_10f8ac;
        case 0x10f8b0u: goto label_10f8b0;
        case 0x10f8b4u: goto label_10f8b4;
        case 0x10f8b8u: goto label_10f8b8;
        case 0x10f8bcu: goto label_10f8bc;
        case 0x10f8c0u: goto label_10f8c0;
        case 0x10f8c4u: goto label_10f8c4;
        case 0x10f8c8u: goto label_10f8c8;
        case 0x10f8ccu: goto label_10f8cc;
        case 0x10f8d0u: goto label_10f8d0;
        case 0x10f8d4u: goto label_10f8d4;
        case 0x10f8d8u: goto label_10f8d8;
        case 0x10f8dcu: goto label_10f8dc;
        case 0x10f8e0u: goto label_10f8e0;
        case 0x10f8e4u: goto label_10f8e4;
        case 0x10f8e8u: goto label_10f8e8;
        case 0x10f8ecu: goto label_10f8ec;
        case 0x10f8f0u: goto label_10f8f0;
        case 0x10f8f4u: goto label_10f8f4;
        case 0x10f8f8u: goto label_10f8f8;
        case 0x10f8fcu: goto label_10f8fc;
        case 0x10f900u: goto label_10f900;
        case 0x10f904u: goto label_10f904;
        case 0x10f908u: goto label_10f908;
        case 0x10f90cu: goto label_10f90c;
        case 0x10f910u: goto label_10f910;
        case 0x10f914u: goto label_10f914;
        case 0x10f918u: goto label_10f918;
        case 0x10f91cu: goto label_10f91c;
        case 0x10f920u: goto label_10f920;
        case 0x10f924u: goto label_10f924;
        case 0x10f928u: goto label_10f928;
        case 0x10f92cu: goto label_10f92c;
        case 0x10f930u: goto label_10f930;
        case 0x10f934u: goto label_10f934;
        case 0x10f938u: goto label_10f938;
        case 0x10f93cu: goto label_10f93c;
        case 0x10f940u: goto label_10f940;
        case 0x10f944u: goto label_10f944;
        case 0x10f948u: goto label_10f948;
        case 0x10f94cu: goto label_10f94c;
        case 0x10f950u: goto label_10f950;
        case 0x10f954u: goto label_10f954;
        case 0x10f958u: goto label_10f958;
        case 0x10f95cu: goto label_10f95c;
        case 0x10f960u: goto label_10f960;
        case 0x10f964u: goto label_10f964;
        case 0x10f968u: goto label_10f968;
        case 0x10f96cu: goto label_10f96c;
        case 0x10f970u: goto label_10f970;
        case 0x10f974u: goto label_10f974;
        case 0x10f978u: goto label_10f978;
        case 0x10f97cu: goto label_10f97c;
        case 0x10f980u: goto label_10f980;
        case 0x10f984u: goto label_10f984;
        case 0x10f988u: goto label_10f988;
        case 0x10f98cu: goto label_10f98c;
        case 0x10f990u: goto label_10f990;
        case 0x10f994u: goto label_10f994;
        case 0x10f998u: goto label_10f998;
        case 0x10f99cu: goto label_10f99c;
        case 0x10f9a0u: goto label_10f9a0;
        case 0x10f9a4u: goto label_10f9a4;
        case 0x10f9a8u: goto label_10f9a8;
        case 0x10f9acu: goto label_10f9ac;
        case 0x10f9b0u: goto label_10f9b0;
        case 0x10f9b4u: goto label_10f9b4;
        case 0x10f9b8u: goto label_10f9b8;
        case 0x10f9bcu: goto label_10f9bc;
        case 0x10f9c0u: goto label_10f9c0;
        case 0x10f9c4u: goto label_10f9c4;
        case 0x10f9c8u: goto label_10f9c8;
        case 0x10f9ccu: goto label_10f9cc;
        case 0x10f9d0u: goto label_10f9d0;
        case 0x10f9d4u: goto label_10f9d4;
        case 0x10f9d8u: goto label_10f9d8;
        case 0x10f9dcu: goto label_10f9dc;
        case 0x10f9e0u: goto label_10f9e0;
        case 0x10f9e4u: goto label_10f9e4;
        case 0x10f9e8u: goto label_10f9e8;
        case 0x10f9ecu: goto label_10f9ec;
        case 0x10f9f0u: goto label_10f9f0;
        case 0x10f9f4u: goto label_10f9f4;
        case 0x10f9f8u: goto label_10f9f8;
        case 0x10f9fcu: goto label_10f9fc;
        case 0x10fa00u: goto label_10fa00;
        case 0x10fa04u: goto label_10fa04;
        case 0x10fa08u: goto label_10fa08;
        case 0x10fa0cu: goto label_10fa0c;
        case 0x10fa10u: goto label_10fa10;
        case 0x10fa14u: goto label_10fa14;
        case 0x10fa18u: goto label_10fa18;
        case 0x10fa1cu: goto label_10fa1c;
        case 0x10fa20u: goto label_10fa20;
        case 0x10fa24u: goto label_10fa24;
        case 0x10fa28u: goto label_10fa28;
        case 0x10fa2cu: goto label_10fa2c;
        case 0x10fa30u: goto label_10fa30;
        case 0x10fa34u: goto label_10fa34;
        case 0x10fa38u: goto label_10fa38;
        case 0x10fa3cu: goto label_10fa3c;
        case 0x10fa40u: goto label_10fa40;
        case 0x10fa44u: goto label_10fa44;
        case 0x10fa48u: goto label_10fa48;
        case 0x10fa4cu: goto label_10fa4c;
        case 0x10fa50u: goto label_10fa50;
        case 0x10fa54u: goto label_10fa54;
        case 0x10fa58u: goto label_10fa58;
        case 0x10fa5cu: goto label_10fa5c;
        case 0x10fa60u: goto label_10fa60;
        case 0x10fa64u: goto label_10fa64;
        case 0x10fa68u: goto label_10fa68;
        case 0x10fa6cu: goto label_10fa6c;
        case 0x10fa70u: goto label_10fa70;
        case 0x10fa74u: goto label_10fa74;
        case 0x10fa78u: goto label_10fa78;
        case 0x10fa7cu: goto label_10fa7c;
        case 0x10fa80u: goto label_10fa80;
        case 0x10fa84u: goto label_10fa84;
        case 0x10fa88u: goto label_10fa88;
        case 0x10fa8cu: goto label_10fa8c;
        case 0x10fa90u: goto label_10fa90;
        case 0x10fa94u: goto label_10fa94;
        case 0x10fa98u: goto label_10fa98;
        case 0x10fa9cu: goto label_10fa9c;
        case 0x10faa0u: goto label_10faa0;
        case 0x10faa4u: goto label_10faa4;
        case 0x10faa8u: goto label_10faa8;
        case 0x10faacu: goto label_10faac;
        case 0x10fab0u: goto label_10fab0;
        case 0x10fab4u: goto label_10fab4;
        case 0x10fab8u: goto label_10fab8;
        case 0x10fabcu: goto label_10fabc;
        case 0x10fac0u: goto label_10fac0;
        case 0x10fac4u: goto label_10fac4;
        case 0x10fac8u: goto label_10fac8;
        case 0x10faccu: goto label_10facc;
        case 0x10fad0u: goto label_10fad0;
        case 0x10fad4u: goto label_10fad4;
        case 0x10fad8u: goto label_10fad8;
        case 0x10fadcu: goto label_10fadc;
        case 0x10fae0u: goto label_10fae0;
        case 0x10fae4u: goto label_10fae4;
        case 0x10fae8u: goto label_10fae8;
        case 0x10faecu: goto label_10faec;
        case 0x10faf0u: goto label_10faf0;
        case 0x10faf4u: goto label_10faf4;
        case 0x10faf8u: goto label_10faf8;
        case 0x10fafcu: goto label_10fafc;
        case 0x10fb00u: goto label_10fb00;
        case 0x10fb04u: goto label_10fb04;
        case 0x10fb08u: goto label_10fb08;
        case 0x10fb0cu: goto label_10fb0c;
        case 0x10fb10u: goto label_10fb10;
        case 0x10fb14u: goto label_10fb14;
        case 0x10fb18u: goto label_10fb18;
        case 0x10fb1cu: goto label_10fb1c;
        case 0x10fb20u: goto label_10fb20;
        case 0x10fb24u: goto label_10fb24;
        case 0x10fb28u: goto label_10fb28;
        case 0x10fb2cu: goto label_10fb2c;
        case 0x10fb30u: goto label_10fb30;
        case 0x10fb34u: goto label_10fb34;
        case 0x10fb38u: goto label_10fb38;
        case 0x10fb3cu: goto label_10fb3c;
        case 0x10fb40u: goto label_10fb40;
        case 0x10fb44u: goto label_10fb44;
        case 0x10fb48u: goto label_10fb48;
        case 0x10fb4cu: goto label_10fb4c;
        case 0x10fb50u: goto label_10fb50;
        case 0x10fb54u: goto label_10fb54;
        case 0x10fb58u: goto label_10fb58;
        case 0x10fb5cu: goto label_10fb5c;
        case 0x10fb60u: goto label_10fb60;
        case 0x10fb64u: goto label_10fb64;
        case 0x10fb68u: goto label_10fb68;
        case 0x10fb6cu: goto label_10fb6c;
        case 0x10fb70u: goto label_10fb70;
        case 0x10fb74u: goto label_10fb74;
        case 0x10fb78u: goto label_10fb78;
        case 0x10fb7cu: goto label_10fb7c;
        case 0x10fb80u: goto label_10fb80;
        case 0x10fb84u: goto label_10fb84;
        case 0x10fb88u: goto label_10fb88;
        case 0x10fb8cu: goto label_10fb8c;
        case 0x10fb90u: goto label_10fb90;
        case 0x10fb94u: goto label_10fb94;
        case 0x10fb98u: goto label_10fb98;
        case 0x10fb9cu: goto label_10fb9c;
        case 0x10fba0u: goto label_10fba0;
        case 0x10fba4u: goto label_10fba4;
        case 0x10fba8u: goto label_10fba8;
        case 0x10fbacu: goto label_10fbac;
        case 0x10fbb0u: goto label_10fbb0;
        case 0x10fbb4u: goto label_10fbb4;
        case 0x10fbb8u: goto label_10fbb8;
        case 0x10fbbcu: goto label_10fbbc;
        case 0x10fbc0u: goto label_10fbc0;
        case 0x10fbc4u: goto label_10fbc4;
        case 0x10fbc8u: goto label_10fbc8;
        case 0x10fbccu: goto label_10fbcc;
        case 0x10fbd0u: goto label_10fbd0;
        case 0x10fbd4u: goto label_10fbd4;
        case 0x10fbd8u: goto label_10fbd8;
        case 0x10fbdcu: goto label_10fbdc;
        case 0x10fbe0u: goto label_10fbe0;
        case 0x10fbe4u: goto label_10fbe4;
        case 0x10fbe8u: goto label_10fbe8;
        case 0x10fbecu: goto label_10fbec;
        case 0x10fbf0u: goto label_10fbf0;
        case 0x10fbf4u: goto label_10fbf4;
        case 0x10fbf8u: goto label_10fbf8;
        case 0x10fbfcu: goto label_10fbfc;
        case 0x10fc00u: goto label_10fc00;
        case 0x10fc04u: goto label_10fc04;
        case 0x10fc08u: goto label_10fc08;
        case 0x10fc0cu: goto label_10fc0c;
        case 0x10fc10u: goto label_10fc10;
        case 0x10fc14u: goto label_10fc14;
        case 0x10fc18u: goto label_10fc18;
        case 0x10fc1cu: goto label_10fc1c;
        case 0x10fc20u: goto label_10fc20;
        case 0x10fc24u: goto label_10fc24;
        case 0x10fc28u: goto label_10fc28;
        case 0x10fc2cu: goto label_10fc2c;
        case 0x10fc30u: goto label_10fc30;
        case 0x10fc34u: goto label_10fc34;
        case 0x10fc38u: goto label_10fc38;
        case 0x10fc3cu: goto label_10fc3c;
        case 0x10fc40u: goto label_10fc40;
        case 0x10fc44u: goto label_10fc44;
        case 0x10fc48u: goto label_10fc48;
        case 0x10fc4cu: goto label_10fc4c;
        case 0x10fc50u: goto label_10fc50;
        case 0x10fc54u: goto label_10fc54;
        case 0x10fc58u: goto label_10fc58;
        case 0x10fc5cu: goto label_10fc5c;
        case 0x10fc60u: goto label_10fc60;
        case 0x10fc64u: goto label_10fc64;
        case 0x10fc68u: goto label_10fc68;
        case 0x10fc6cu: goto label_10fc6c;
        case 0x10fc70u: goto label_10fc70;
        case 0x10fc74u: goto label_10fc74;
        case 0x10fc78u: goto label_10fc78;
        case 0x10fc7cu: goto label_10fc7c;
        case 0x10fc80u: goto label_10fc80;
        case 0x10fc84u: goto label_10fc84;
        case 0x10fc88u: goto label_10fc88;
        case 0x10fc8cu: goto label_10fc8c;
        case 0x10fc90u: goto label_10fc90;
        case 0x10fc94u: goto label_10fc94;
        case 0x10fc98u: goto label_10fc98;
        case 0x10fc9cu: goto label_10fc9c;
        case 0x10fca0u: goto label_10fca0;
        case 0x10fca4u: goto label_10fca4;
        case 0x10fca8u: goto label_10fca8;
        case 0x10fcacu: goto label_10fcac;
        case 0x10fcb0u: goto label_10fcb0;
        case 0x10fcb4u: goto label_10fcb4;
        case 0x10fcb8u: goto label_10fcb8;
        case 0x10fcbcu: goto label_10fcbc;
        case 0x10fcc0u: goto label_10fcc0;
        case 0x10fcc4u: goto label_10fcc4;
        case 0x10fcc8u: goto label_10fcc8;
        case 0x10fcccu: goto label_10fccc;
        case 0x10fcd0u: goto label_10fcd0;
        case 0x10fcd4u: goto label_10fcd4;
        case 0x10fcd8u: goto label_10fcd8;
        case 0x10fcdcu: goto label_10fcdc;
        case 0x10fce0u: goto label_10fce0;
        case 0x10fce4u: goto label_10fce4;
        case 0x10fce8u: goto label_10fce8;
        case 0x10fcecu: goto label_10fcec;
        case 0x10fcf0u: goto label_10fcf0;
        case 0x10fcf4u: goto label_10fcf4;
        case 0x10fcf8u: goto label_10fcf8;
        case 0x10fcfcu: goto label_10fcfc;
        case 0x10fd00u: goto label_10fd00;
        case 0x10fd04u: goto label_10fd04;
        case 0x10fd08u: goto label_10fd08;
        case 0x10fd0cu: goto label_10fd0c;
        case 0x10fd10u: goto label_10fd10;
        case 0x10fd14u: goto label_10fd14;
        case 0x10fd18u: goto label_10fd18;
        case 0x10fd1cu: goto label_10fd1c;
        case 0x10fd20u: goto label_10fd20;
        case 0x10fd24u: goto label_10fd24;
        case 0x10fd28u: goto label_10fd28;
        case 0x10fd2cu: goto label_10fd2c;
        case 0x10fd30u: goto label_10fd30;
        case 0x10fd34u: goto label_10fd34;
        case 0x10fd38u: goto label_10fd38;
        case 0x10fd3cu: goto label_10fd3c;
        case 0x10fd40u: goto label_10fd40;
        case 0x10fd44u: goto label_10fd44;
        case 0x10fd48u: goto label_10fd48;
        case 0x10fd4cu: goto label_10fd4c;
        case 0x10fd50u: goto label_10fd50;
        case 0x10fd54u: goto label_10fd54;
        case 0x10fd58u: goto label_10fd58;
        case 0x10fd5cu: goto label_10fd5c;
        case 0x10fd60u: goto label_10fd60;
        case 0x10fd64u: goto label_10fd64;
        case 0x10fd68u: goto label_10fd68;
        case 0x10fd6cu: goto label_10fd6c;
        case 0x10fd70u: goto label_10fd70;
        case 0x10fd74u: goto label_10fd74;
        case 0x10fd78u: goto label_10fd78;
        case 0x10fd7cu: goto label_10fd7c;
        case 0x10fd80u: goto label_10fd80;
        case 0x10fd84u: goto label_10fd84;
        case 0x10fd88u: goto label_10fd88;
        case 0x10fd8cu: goto label_10fd8c;
        case 0x10fd90u: goto label_10fd90;
        case 0x10fd94u: goto label_10fd94;
        case 0x10fd98u: goto label_10fd98;
        case 0x10fd9cu: goto label_10fd9c;
        case 0x10fda0u: goto label_10fda0;
        case 0x10fda4u: goto label_10fda4;
        case 0x10fda8u: goto label_10fda8;
        case 0x10fdacu: goto label_10fdac;
        case 0x10fdb0u: goto label_10fdb0;
        case 0x10fdb4u: goto label_10fdb4;
        case 0x10fdb8u: goto label_10fdb8;
        case 0x10fdbcu: goto label_10fdbc;
        case 0x10fdc0u: goto label_10fdc0;
        case 0x10fdc4u: goto label_10fdc4;
        case 0x10fdc8u: goto label_10fdc8;
        case 0x10fdccu: goto label_10fdcc;
        case 0x10fdd0u: goto label_10fdd0;
        case 0x10fdd4u: goto label_10fdd4;
        case 0x10fdd8u: goto label_10fdd8;
        case 0x10fddcu: goto label_10fddc;
        case 0x10fde0u: goto label_10fde0;
        case 0x10fde4u: goto label_10fde4;
        case 0x10fde8u: goto label_10fde8;
        case 0x10fdecu: goto label_10fdec;
        case 0x10fdf0u: goto label_10fdf0;
        case 0x10fdf4u: goto label_10fdf4;
        case 0x10fdf8u: goto label_10fdf8;
        case 0x10fdfcu: goto label_10fdfc;
        case 0x10fe00u: goto label_10fe00;
        case 0x10fe04u: goto label_10fe04;
        case 0x10fe08u: goto label_10fe08;
        case 0x10fe0cu: goto label_10fe0c;
        case 0x10fe10u: goto label_10fe10;
        case 0x10fe14u: goto label_10fe14;
        default: break;
    }

    ctx->pc = 0x10f720u;

label_10f720:
    // 0x10f720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10f724:
    // 0x10f724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10f728:
    // 0x10f728: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10f72c:
    // 0x10f72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f730:
    // 0x10f730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10f734:
    // 0x10f734: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x10f734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_10f738:
    // 0x10f738: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10f738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10f73c:
    // 0x10f73c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10f73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10f740:
    // 0x10f740: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10f744:
    // 0x10f744: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
label_10f748:
    if (ctx->pc == 0x10F748u) {
        ctx->pc = 0x10F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F744u;
        // 0x10f748: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F74Cu;
        goto label_10f74c;
    }
    ctx->pc = 0x10F744u;
    {
        const bool branch_taken_0x10f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F744u;
        // 0x10f748: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f744) {
            ctx->pc = 0x10FC7Cu;
            goto label_10fc7c;
        }
    }
    ctx->pc = 0x10F74Cu;
label_10f74c:
    // 0x10f74c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10f750:
    // 0x10f750: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x10f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
label_10f754:
    // 0x10f754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10f758:
    // 0x10f758: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10f75c:
    // 0x10f75c: 0x800008  jr          $a0
label_10f760:
    if (ctx->pc == 0x10F760u) {
        ctx->pc = 0x10F764u;
        goto label_10f764;
    }
    ctx->pc = 0x10F75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F764u: goto label_10f764;
            case 0x10F89Cu: goto label_10f89c;
            case 0x10F9A0u: goto label_10f9a0;
            case 0x10FB64u: goto label_10fb64;
            case 0x10FBF0u: goto label_10fbf0;
            case 0x10FC3Cu: goto label_10fc3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F75Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10F764u;
label_10f764:
    // 0x10f764: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10f768:
    // 0x10f768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f76c:
    // 0x10f76c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_10f770:
    // 0x10f770: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10f774:
    // 0x10f774: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x10f774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10f778:
    // 0x10f778: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10f778u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10f77c:
    // 0x10f77c: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x10f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_10f780:
    // 0x10f780: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10f784:
    // 0x10f784: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10f784u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_10f788:
    // 0x10f788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f78c:
    // 0x10f78c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x10f78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10f790:
    // 0x10f790: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10f794:
    // 0x10f794: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10f798:
    // 0x10f798: 0xc042902  jal         func_10A408
label_10f79c:
    if (ctx->pc == 0x10F79Cu) {
        ctx->pc = 0x10F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F798u;
        // 0x10f79c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7A0u;
        goto label_10f7a0;
    }
    ctx->pc = 0x10F798u;
    SET_GPR_U32(ctx, 31, 0x10F7A0u);
    ctx->pc = 0x10F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F798u;
    // 0x10f79c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F798u, 0x10F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7A0u;
label_10f7a0:
    // 0x10f7a0: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10f7a4:
    // 0x10f7a4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x10f7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10f7a8:
    // 0x10f7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f7ac:
    // 0x10f7ac: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x10f7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_10f7b0:
    // 0x10f7b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10f7b4:
    // 0x10f7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f7b8:
    // 0x10f7b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f7b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10f7bc:
    // 0x10f7bc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f7bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10f7c0:
    // 0x10f7c0: 0xc042908  jal         func_10A420
label_10f7c4:
    if (ctx->pc == 0x10F7C4u) {
        ctx->pc = 0x10F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7C0u;
        // 0x10f7c4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7C8u;
        goto label_10f7c8;
    }
    ctx->pc = 0x10F7C0u;
    SET_GPR_U32(ctx, 31, 0x10F7C8u);
    ctx->pc = 0x10F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7C0u;
    // 0x10f7c4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F7C0u, 0x10F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7C8u;
label_10f7c8:
    // 0x10f7c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10f7cc:
    // 0x10f7cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f7d0:
    // 0x10f7d0: 0xa2201684  sb          $zero, 0x1684($s1)
    ctx->pc = 0x10f7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
label_10f7d4:
    // 0x10f7d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10f7d8:
    // 0x10f7d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x10f7d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_10f7dc:
    // 0x10f7dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f7dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f7e0:
    // 0x10f7e0: 0x8c4501e0  lw          $a1, 0x1E0($v0)
    ctx->pc = 0x10f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
label_10f7e4:
    // 0x10f7e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10f7e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f7e8:
    // 0x10f7e8: 0x8c4601e4  lw          $a2, 0x1E4($v0)
    ctx->pc = 0x10f7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_10f7ec:
    // 0x10f7ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10f7f0:
    // 0x10f7f0: 0xc0aa15e  jal         func_2A8578
label_10f7f4:
    if (ctx->pc == 0x10F7F4u) {
        ctx->pc = 0x10F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7F0u;
        // 0x10f7f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7F8u;
        goto label_10f7f8;
    }
    ctx->pc = 0x10F7F0u;
    SET_GPR_U32(ctx, 31, 0x10F7F8u);
    ctx->pc = 0x10F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7F0u;
    // 0x10f7f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10F7F0u, 0x10F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7F8u;
label_10f7f8:
    // 0x10f7f8: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10f7fc:
    // 0x10f7fc: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x10f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
label_10f800:
    // 0x10f800: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x10f800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_10f804:
    // 0x10f804: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x10f804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_10f808:
    // 0x10f808: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_10f80c:
    if (ctx->pc == 0x10F80Cu) {
        ctx->pc = 0x10F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F808u;
        // 0x10f80c: 0xe6351588  swc1        $f21, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F810u;
        goto label_10f810;
    }
    ctx->pc = 0x10F808u;
    {
        const bool branch_taken_0x10f808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F808u;
        // 0x10f80c: 0xe6351588  swc1        $f21, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f808) {
            ctx->pc = 0x10F888u;
            goto label_10f888;
        }
    }
    ctx->pc = 0x10F810u;
label_10f810:
    // 0x10f810: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10f814:
    // 0x10f814: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10f814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10f818:
    // 0x10f818: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10f818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10f81c:
    // 0x10f81c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10f820:
    // 0x10f820: 0x40f809  jalr        $v0
label_10f824:
    if (ctx->pc == 0x10F824u) {
        ctx->pc = 0x10F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F820u;
        // 0x10f824: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F828u;
        goto label_10f828;
    }
    ctx->pc = 0x10F820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10F828u);
        ctx->pc = 0x10F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F820u;
        // 0x10f824: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F820u, 0x10F828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F828u;
label_10f828:
    // 0x10f828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f82c:
    // 0x10f82c: 0xc07dfa0  jal         func_1F7E80
label_10f830:
    if (ctx->pc == 0x10F830u) {
        ctx->pc = 0x10F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F82Cu;
        // 0x10f830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F834u;
        goto label_10f834;
    }
    ctx->pc = 0x10F82Cu;
    SET_GPR_U32(ctx, 31, 0x10F834u);
    ctx->pc = 0x10F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F82Cu;
    // 0x10f830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x10F82Cu, 0x10F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F834u;
label_10f834:
    // 0x10f834: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10f834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10f838:
    // 0x10f838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10f83c:
    // 0x10f83c: 0x0  nop
    ctx->pc = 0x10f83cu;
    // NOP
label_10f840:
    // 0x10f840: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x10f840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10f844:
    // 0x10f844: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x10f844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10f848:
    // 0x10f848: 0x0  nop
    ctx->pc = 0x10f848u;
    // NOP
label_10f84c:
    // 0x10f84c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_10f850:
    if (ctx->pc == 0x10F850u) {
        ctx->pc = 0x10F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F84Cu;
        // 0x10f850: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F854u;
        goto label_10f854;
    }
    ctx->pc = 0x10F84Cu;
    {
        const bool branch_taken_0x10f84c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10f84c) {
            ctx->pc = 0x10F850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F84Cu;
            // 0x10f850: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F88Cu;
            goto label_10f88c;
        }
    }
    ctx->pc = 0x10F854u;
label_10f854:
    // 0x10f854: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10f854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_10f858:
    // 0x10f858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10f85c:
    // 0x10f85c: 0x0  nop
    ctx->pc = 0x10f85cu;
    // NOP
label_10f860:
    // 0x10f860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10f860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10f864:
    // 0x10f864: 0x0  nop
    ctx->pc = 0x10f864u;
    // NOP
label_10f868:
    // 0x10f868: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_10f86c:
    if (ctx->pc == 0x10F86Cu) {
        ctx->pc = 0x10F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F868u;
        // 0x10f86c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F870u;
        goto label_10f870;
    }
    ctx->pc = 0x10F868u;
    {
        const bool branch_taken_0x10f868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10f868) {
            ctx->pc = 0x10F86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F868u;
            // 0x10f86c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F88Cu;
            goto label_10f88c;
        }
    }
    ctx->pc = 0x10F870u;
label_10f870:
    // 0x10f870: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x10f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_10f874:
    // 0x10f874: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10f874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_10f878:
    // 0x10f878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10f87c:
    // 0x10f87c: 0x0  nop
    ctx->pc = 0x10f87cu;
    // NOP
label_10f880:
    // 0x10f880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10f880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10f884:
    // 0x10f884: 0xe6201588  swc1        $f0, 0x1588($s1)
    ctx->pc = 0x10f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10f888:
    // 0x10f888: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10f888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10f88c:
    // 0x10f88c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x10f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_10f890:
    // 0x10f890: 0xae2315bc  sw          $v1, 0x15BC($s1)
    ctx->pc = 0x10f890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 3));
label_10f894:
    // 0x10f894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10f898:
    // 0x10f898: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10f898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10f89c:
    // 0x10f89c: 0xc0b6dea  jal         func_2DB7A8
label_10f8a0:
    if (ctx->pc == 0x10F8A0u) {
        ctx->pc = 0x10F8A4u;
        goto label_10f8a4;
    }
    ctx->pc = 0x10F89Cu;
    SET_GPR_U32(ctx, 31, 0x10F8A4u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x10F89Cu, 0x10F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8A4u;
label_10f8a4:
    // 0x10f8a4: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10f8a8:
    // 0x10f8a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10f8ac:
    if (ctx->pc == 0x10F8ACu) {
        ctx->pc = 0x10F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A8u;
        // 0x10f8ac: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8B0u;
        goto label_10f8b0;
    }
    ctx->pc = 0x10F8A8u;
    {
        const bool branch_taken_0x10f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A8u;
        // 0x10f8ac: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8a8) {
            ctx->pc = 0x10F8B4u;
            goto label_10f8b4;
        }
    }
    ctx->pc = 0x10F8B0u;
label_10f8b0:
    // 0x10f8b0: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10f8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10f8b4:
    // 0x10f8b4: 0x3c013e06  lui         $at, 0x3E06
    ctx->pc = 0x10f8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15878 << 16));
label_10f8b8:
    // 0x10f8b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10f8b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_10f8bc:
    // 0x10f8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10f8c0:
    // 0x10f8c0: 0xc04939a  jal         func_124E68
label_10f8c4:
    if (ctx->pc == 0x10F8C4u) {
        ctx->pc = 0x10F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C0u;
        // 0x10f8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8C8u;
        goto label_10f8c8;
    }
    ctx->pc = 0x10F8C0u;
    SET_GPR_U32(ctx, 31, 0x10F8C8u);
    ctx->pc = 0x10F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8C0u;
    // 0x10f8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10F8C0u, 0x10F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8C8u;
label_10f8c8:
    // 0x10f8c8: 0xc055f06  jal         func_157C18
label_10f8cc:
    if (ctx->pc == 0x10F8CCu) {
        ctx->pc = 0x10F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C8u;
        // 0x10f8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8D0u;
        goto label_10f8d0;
    }
    ctx->pc = 0x10F8C8u;
    SET_GPR_U32(ctx, 31, 0x10F8D0u);
    ctx->pc = 0x10F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8C8u;
    // 0x10f8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10F8C8u, 0x10F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8D0u;
label_10f8d0:
    // 0x10f8d0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_10f8d4:
    if (ctx->pc == 0x10F8D4u) {
        ctx->pc = 0x10F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8D0u;
        // 0x10f8d4: 0xc6201588  lwc1        $f0, 0x1588($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8D8u;
        goto label_10f8d8;
    }
    ctx->pc = 0x10F8D0u;
    {
        const bool branch_taken_0x10f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f8d0) {
            ctx->pc = 0x10F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F8D0u;
            // 0x10f8d4: 0xc6201588  lwc1        $f0, 0x1588($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F90Cu;
            goto label_10f90c;
        }
    }
    ctx->pc = 0x10F8D8u;
label_10f8d8:
    // 0x10f8d8: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10f8dc:
    // 0x10f8dc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_10f8e0:
    if (ctx->pc == 0x10F8E0u) {
        ctx->pc = 0x10F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8DCu;
        // 0x10f8e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8E4u;
        goto label_10f8e4;
    }
    ctx->pc = 0x10F8DCu;
    {
        const bool branch_taken_0x10f8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8DCu;
        // 0x10f8e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8dc) {
            ctx->pc = 0x10F904u;
            goto label_10f904;
        }
    }
    ctx->pc = 0x10F8E4u;
label_10f8e4:
    // 0x10f8e4: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x10f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_10f8e8:
    // 0x10f8e8: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_10f8ec:
    if (ctx->pc == 0x10F8ECu) {
        ctx->pc = 0x10F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E8u;
        // 0x10f8ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8F0u;
        goto label_10f8f0;
    }
    ctx->pc = 0x10F8E8u;
    {
        const bool branch_taken_0x10f8e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E8u;
        // 0x10f8ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8e8) {
            ctx->pc = 0x10F904u;
            goto label_10f904;
        }
    }
    ctx->pc = 0x10F8F0u;
label_10f8f0:
    // 0x10f8f0: 0xc0493f6  jal         func_124FD8
label_10f8f4:
    if (ctx->pc == 0x10F8F4u) {
        ctx->pc = 0x10F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8F0u;
        // 0x10f8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8F8u;
        goto label_10f8f8;
    }
    ctx->pc = 0x10F8F0u;
    SET_GPR_U32(ctx, 31, 0x10F8F8u);
    ctx->pc = 0x10F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8F0u;
    // 0x10f8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124FD8u, 0x10F8F0u, 0x10F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8F8u;
label_10f8f8:
    // 0x10f8f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_10f8fc:
    if (ctx->pc == 0x10F8FCu) {
        ctx->pc = 0x10F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8F8u;
        // 0x10f8fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F900u;
        goto label_10f900;
    }
    ctx->pc = 0x10F8F8u;
    {
        const bool branch_taken_0x10f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8F8u;
        // 0x10f8fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8f8) {
            ctx->pc = 0x10F904u;
            goto label_10f904;
        }
    }
    ctx->pc = 0x10F900u;
label_10f900:
    // 0x10f900: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10f904:
    // 0x10f904: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10f904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10f908:
    // 0x10f908: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x10f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10f90c:
    // 0x10f90c: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x10f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10f910:
    // 0x10f910: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_10f914:
    // 0x10f914: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10f914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_10f918:
    // 0x10f918: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10f918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10f91c:
    // 0x10f91c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10f91cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10f920:
    // 0x10f920: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10f920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10f924:
    // 0x10f924: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10f924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_10f928:
    // 0x10f928: 0xe6210338  swc1        $f1, 0x338($s1)
    ctx->pc = 0x10f928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_10f92c:
    // 0x10f92c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_10f930:
    if (ctx->pc == 0x10F930u) {
        ctx->pc = 0x10F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F92Cu;
        // 0x10f930: 0xe6201588  swc1        $f0, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F934u;
        goto label_10f934;
    }
    ctx->pc = 0x10F92Cu;
    {
        const bool branch_taken_0x10f92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F92Cu;
        // 0x10f930: 0xe6201588  swc1        $f0, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f92c) {
            ctx->pc = 0x10F978u;
            goto label_10f978;
        }
    }
    ctx->pc = 0x10F934u;
label_10f934:
    // 0x10f934: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10f934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10f938:
    // 0x10f938: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10f938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10f93c:
    // 0x10f93c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10f93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10f940:
    // 0x10f940: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10f944:
    // 0x10f944: 0x40f809  jalr        $v0
label_10f948:
    if (ctx->pc == 0x10F948u) {
        ctx->pc = 0x10F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F944u;
        // 0x10f948: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F94Cu;
        goto label_10f94c;
    }
    ctx->pc = 0x10F944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10F94Cu);
        ctx->pc = 0x10F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F944u;
        // 0x10f948: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F944u, 0x10F94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F94Cu;
label_10f94c:
    // 0x10f94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f950:
    // 0x10f950: 0xc07dfac  jal         func_1F7EB0
label_10f954:
    if (ctx->pc == 0x10F954u) {
        ctx->pc = 0x10F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F950u;
        // 0x10f954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F958u;
        goto label_10f958;
    }
    ctx->pc = 0x10F950u;
    SET_GPR_U32(ctx, 31, 0x10F958u);
    ctx->pc = 0x10F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F950u;
    // 0x10f954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x10F950u, 0x10F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F958u;
label_10f958:
    // 0x10f958: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x10f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
label_10f95c:
    // 0x10f95c: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x10f95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_10f960:
    // 0x10f960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10f964:
    // 0x10f964: 0x0  nop
    ctx->pc = 0x10f964u;
    // NOP
label_10f968:
    // 0x10f968: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10f968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10f96c:
    // 0x10f96c: 0x0  nop
    ctx->pc = 0x10f96cu;
    // NOP
label_10f970:
    // 0x10f970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10f974:
    if (ctx->pc == 0x10F974u) {
        ctx->pc = 0x10F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F970u;
        // 0x10f974: 0xae200338  sw          $zero, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F978u;
        goto label_10f978;
    }
    ctx->pc = 0x10F970u;
    {
        const bool branch_taken_0x10f970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10f970) {
            ctx->pc = 0x10F974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F970u;
            // 0x10f974: 0xae200338  sw          $zero, 0x338($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F978u;
            goto label_10f978;
        }
    }
    ctx->pc = 0x10F978u;
label_10f978:
    // 0x10f978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10f97c:
    // 0x10f97c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10f980:
    // 0x10f980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f984:
    // 0x10f984: 0xc053e7c  jal         func_14F9F0
label_10f988:
    if (ctx->pc == 0x10F988u) {
        ctx->pc = 0x10F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F984u;
        // 0x10f988: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F98Cu;
        goto label_10f98c;
    }
    ctx->pc = 0x10F984u;
    SET_GPR_U32(ctx, 31, 0x10F98Cu);
    ctx->pc = 0x10F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F984u;
    // 0x10f988: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10F984u, 0x10F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F98Cu;
label_10f98c:
    // 0x10f98c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10f98cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10f990:
    // 0x10f990: 0xc053e4a  jal         func_14F928
label_10f994:
    if (ctx->pc == 0x10F994u) {
        ctx->pc = 0x10F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F990u;
        // 0x10f994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F998u;
        goto label_10f998;
    }
    ctx->pc = 0x10F990u;
    SET_GPR_U32(ctx, 31, 0x10F998u);
    ctx->pc = 0x10F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F990u;
    // 0x10f994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10F990u, 0x10F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F998u;
label_10f998:
    // 0x10f998: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_10f99c:
    if (ctx->pc == 0x10F99Cu) {
        ctx->pc = 0x10F9A0u;
        goto label_10f9a0;
    }
    ctx->pc = 0x10F998u;
    {
        const bool branch_taken_0x10f998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f998) {
            ctx->pc = 0x10FC7Cu;
            goto label_10fc7c;
        }
    }
    ctx->pc = 0x10F9A0u;
label_10f9a0:
    // 0x10f9a0: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10f9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10f9a4:
    // 0x10f9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f9a8:
    // 0x10f9a8: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10f9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_10f9ac:
    // 0x10f9ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10f9b0:
    // 0x10f9b0: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10f9b4:
    // 0x10f9b4: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_10f9b8:
    // 0x10f9b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f9bc:
    // 0x10f9bc: 0xc042902  jal         func_10A408
label_10f9c0:
    if (ctx->pc == 0x10F9C0u) {
        ctx->pc = 0x10F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9BCu;
        // 0x10f9c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9C4u;
        goto label_10f9c4;
    }
    ctx->pc = 0x10F9BCu;
    SET_GPR_U32(ctx, 31, 0x10F9C4u);
    ctx->pc = 0x10F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9BCu;
    // 0x10f9c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F9BCu, 0x10F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9C4u;
label_10f9c4:
    // 0x10f9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f9c8:
    // 0x10f9c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10f9cc:
    // 0x10f9cc: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x10f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10f9d0:
    // 0x10f9d0: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x10f9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_10f9d4:
    // 0x10f9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f9d8:
    // 0x10f9d8: 0xc042908  jal         func_10A420
label_10f9dc:
    if (ctx->pc == 0x10F9DCu) {
        ctx->pc = 0x10F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9D8u;
        // 0x10f9dc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9E0u;
        goto label_10f9e0;
    }
    ctx->pc = 0x10F9D8u;
    SET_GPR_U32(ctx, 31, 0x10F9E0u);
    ctx->pc = 0x10F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9D8u;
    // 0x10f9dc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F9D8u, 0x10F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9E0u;
label_10f9e0:
    // 0x10f9e0: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x10f9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_10f9e4:
    // 0x10f9e4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_10f9e8:
    if (ctx->pc == 0x10F9E8u) {
        ctx->pc = 0x10F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E4u;
        // 0x10f9e8: 0xa2201684  sb          $zero, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9ECu;
        goto label_10f9ec;
    }
    ctx->pc = 0x10F9E4u;
    {
        const bool branch_taken_0x10f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E4u;
        // 0x10f9e8: 0xa2201684  sb          $zero, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9e4) {
            ctx->pc = 0x10FAD8u;
            goto label_10fad8;
        }
    }
    ctx->pc = 0x10F9ECu;
label_10f9ec:
    // 0x10f9ec: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x10f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10f9f0:
    // 0x10f9f0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x10f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_10f9f4:
    // 0x10f9f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10f9f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_10f9f8:
    // 0x10f9f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10f9fc:
    // 0x10f9fc: 0x0  nop
    ctx->pc = 0x10f9fcu;
    // NOP
label_10fa00:
    // 0x10fa00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10fa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10fa04:
    // 0x10fa04: 0x0  nop
    ctx->pc = 0x10fa04u;
    // NOP
label_10fa08:
    // 0x10fa08: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_10fa0c:
    if (ctx->pc == 0x10FA0Cu) {
        ctx->pc = 0x10FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA08u;
        // 0x10fa0c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA10u;
        goto label_10fa10;
    }
    ctx->pc = 0x10FA08u;
    {
        const bool branch_taken_0x10fa08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA08u;
        // 0x10fa0c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa08) {
            ctx->pc = 0x10FA74u;
            goto label_10fa74;
        }
    }
    ctx->pc = 0x10FA10u;
label_10fa10:
    // 0x10fa10: 0x8e2715b4  lw          $a3, 0x15B4($s1)
    ctx->pc = 0x10fa10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fa14:
    // 0x10fa14: 0x8c440254  lw          $a0, 0x254($v0)
    ctx->pc = 0x10fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
label_10fa18:
    // 0x10fa18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fa1c:
    // 0x10fa1c: 0x2ce30006  sltiu       $v1, $a3, 0x6
    ctx->pc = 0x10fa1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10fa20:
    // 0x10fa20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_10fa24:
    if (ctx->pc == 0x10FA24u) {
        ctx->pc = 0x10FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA20u;
        // 0x10fa24: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA28u;
        goto label_10fa28;
    }
    ctx->pc = 0x10FA20u;
    {
        const bool branch_taken_0x10fa20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA20u;
        // 0x10fa24: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa20) {
            ctx->pc = 0x10FA44u;
            goto label_10fa44;
        }
    }
    ctx->pc = 0x10FA28u;
label_10fa28:
    // 0x10fa28: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x10fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_10fa2c:
    // 0x10fa2c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x10fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_10fa30:
    // 0x10fa30: 0x2442bd60  addiu       $v0, $v0, -0x42A0
    ctx->pc = 0x10fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
label_10fa34:
    // 0x10fa34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10fa38:
    // 0x10fa38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10fa3c:
    // 0x10fa3c: 0x800008  jr          $a0
label_10fa40:
    if (ctx->pc == 0x10FA40u) {
        ctx->pc = 0x10FA44u;
        goto label_10fa44;
    }
    ctx->pc = 0x10FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FA44u: goto label_10fa44;
            case 0x10FA4Cu: goto label_10fa4c;
            case 0x10FA54u: goto label_10fa54;
            case 0x10FA5Cu: goto label_10fa5c;
            case 0x10FA64u: goto label_10fa64;
            case 0x10FA6Cu: goto label_10fa6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FA44u;
label_10fa44:
    // 0x10fa44: 0x1000003d  b           . + 4 + (0x3D << 2)
label_10fa48:
    if (ctx->pc == 0x10FA48u) {
        ctx->pc = 0x10FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA44u;
        // 0x10fa48: 0x8cc20258  lw          $v0, 0x258($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA4Cu;
        goto label_10fa4c;
    }
    ctx->pc = 0x10FA44u;
    {
        const bool branch_taken_0x10fa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA44u;
        // 0x10fa48: 0x8cc20258  lw          $v0, 0x258($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa44) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FA4Cu;
label_10fa4c:
    // 0x10fa4c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_10fa50:
    if (ctx->pc == 0x10FA50u) {
        ctx->pc = 0x10FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA4Cu;
        // 0x10fa50: 0x8cc2025c  lw          $v0, 0x25C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA54u;
        goto label_10fa54;
    }
    ctx->pc = 0x10FA4Cu;
    {
        const bool branch_taken_0x10fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA4Cu;
        // 0x10fa50: 0x8cc2025c  lw          $v0, 0x25C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa4c) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FA54u;
label_10fa54:
    // 0x10fa54: 0x10000039  b           . + 4 + (0x39 << 2)
label_10fa58:
    if (ctx->pc == 0x10FA58u) {
        ctx->pc = 0x10FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA54u;
        // 0x10fa58: 0x8cc20260  lw          $v0, 0x260($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA5Cu;
        goto label_10fa5c;
    }
    ctx->pc = 0x10FA54u;
    {
        const bool branch_taken_0x10fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA54u;
        // 0x10fa58: 0x8cc20260  lw          $v0, 0x260($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa54) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FA5Cu;
label_10fa5c:
    // 0x10fa5c: 0x10000037  b           . + 4 + (0x37 << 2)
label_10fa60:
    if (ctx->pc == 0x10FA60u) {
        ctx->pc = 0x10FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA5Cu;
        // 0x10fa60: 0x8cc20264  lw          $v0, 0x264($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA64u;
        goto label_10fa64;
    }
    ctx->pc = 0x10FA5Cu;
    {
        const bool branch_taken_0x10fa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA5Cu;
        // 0x10fa60: 0x8cc20264  lw          $v0, 0x264($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa5c) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FA64u;
label_10fa64:
    // 0x10fa64: 0x10000035  b           . + 4 + (0x35 << 2)
label_10fa68:
    if (ctx->pc == 0x10FA68u) {
        ctx->pc = 0x10FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA64u;
        // 0x10fa68: 0x8cc20268  lw          $v0, 0x268($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA6Cu;
        goto label_10fa6c;
    }
    ctx->pc = 0x10FA64u;
    {
        const bool branch_taken_0x10fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA64u;
        // 0x10fa68: 0x8cc20268  lw          $v0, 0x268($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa64) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FA6Cu;
label_10fa6c:
    // 0x10fa6c: 0x10000033  b           . + 4 + (0x33 << 2)
label_10fa70:
    if (ctx->pc == 0x10FA70u) {
        ctx->pc = 0x10FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA6Cu;
        // 0x10fa70: 0x8cc2026c  lw          $v0, 0x26C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA74u;
        goto label_10fa74;
    }
    ctx->pc = 0x10FA6Cu;
    {
        const bool branch_taken_0x10fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA6Cu;
        // 0x10fa70: 0x8cc2026c  lw          $v0, 0x26C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa6c) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FA74u;
label_10fa74:
    // 0x10fa74: 0x8e2715b4  lw          $a3, 0x15B4($s1)
    ctx->pc = 0x10fa74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fa78:
    // 0x10fa78: 0x8c440238  lw          $a0, 0x238($v0)
    ctx->pc = 0x10fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_10fa7c:
    // 0x10fa7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fa80:
    // 0x10fa80: 0x2ce30006  sltiu       $v1, $a3, 0x6
    ctx->pc = 0x10fa80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10fa84:
    // 0x10fa84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_10fa88:
    if (ctx->pc == 0x10FA88u) {
        ctx->pc = 0x10FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA84u;
        // 0x10fa88: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA8Cu;
        goto label_10fa8c;
    }
    ctx->pc = 0x10FA84u;
    {
        const bool branch_taken_0x10fa84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA84u;
        // 0x10fa88: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa84) {
            ctx->pc = 0x10FAA8u;
            goto label_10faa8;
        }
    }
    ctx->pc = 0x10FA8Cu;
label_10fa8c:
    // 0x10fa8c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x10fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_10fa90:
    // 0x10fa90: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x10fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_10fa94:
    // 0x10fa94: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x10fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
label_10fa98:
    // 0x10fa98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10fa9c:
    // 0x10fa9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10faa0:
    // 0x10faa0: 0x800008  jr          $a0
label_10faa4:
    if (ctx->pc == 0x10FAA4u) {
        ctx->pc = 0x10FAA8u;
        goto label_10faa8;
    }
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FAA8u: goto label_10faa8;
            case 0x10FAB0u: goto label_10fab0;
            case 0x10FAB8u: goto label_10fab8;
            case 0x10FAC0u: goto label_10fac0;
            case 0x10FAC8u: goto label_10fac8;
            case 0x10FAD0u: goto label_10fad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FAA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FAA8u;
label_10faa8:
    // 0x10faa8: 0x10000024  b           . + 4 + (0x24 << 2)
label_10faac:
    if (ctx->pc == 0x10FAACu) {
        ctx->pc = 0x10FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAA8u;
        // 0x10faac: 0x8cc2023c  lw          $v0, 0x23C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAB0u;
        goto label_10fab0;
    }
    ctx->pc = 0x10FAA8u;
    {
        const bool branch_taken_0x10faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAA8u;
        // 0x10faac: 0x8cc2023c  lw          $v0, 0x23C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faa8) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FAB0u;
label_10fab0:
    // 0x10fab0: 0x10000022  b           . + 4 + (0x22 << 2)
label_10fab4:
    if (ctx->pc == 0x10FAB4u) {
        ctx->pc = 0x10FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB0u;
        // 0x10fab4: 0x8cc20240  lw          $v0, 0x240($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAB8u;
        goto label_10fab8;
    }
    ctx->pc = 0x10FAB0u;
    {
        const bool branch_taken_0x10fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB0u;
        // 0x10fab4: 0x8cc20240  lw          $v0, 0x240($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fab0) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FAB8u;
label_10fab8:
    // 0x10fab8: 0x10000020  b           . + 4 + (0x20 << 2)
label_10fabc:
    if (ctx->pc == 0x10FABCu) {
        ctx->pc = 0x10FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB8u;
        // 0x10fabc: 0x8cc20244  lw          $v0, 0x244($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAC0u;
        goto label_10fac0;
    }
    ctx->pc = 0x10FAB8u;
    {
        const bool branch_taken_0x10fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB8u;
        // 0x10fabc: 0x8cc20244  lw          $v0, 0x244($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fab8) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FAC0u;
label_10fac0:
    // 0x10fac0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_10fac4:
    if (ctx->pc == 0x10FAC4u) {
        ctx->pc = 0x10FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC0u;
        // 0x10fac4: 0x8cc20248  lw          $v0, 0x248($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAC8u;
        goto label_10fac8;
    }
    ctx->pc = 0x10FAC0u;
    {
        const bool branch_taken_0x10fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC0u;
        // 0x10fac4: 0x8cc20248  lw          $v0, 0x248($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fac0) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FAC8u;
label_10fac8:
    // 0x10fac8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_10facc:
    if (ctx->pc == 0x10FACCu) {
        ctx->pc = 0x10FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC8u;
        // 0x10facc: 0x8cc2024c  lw          $v0, 0x24C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAD0u;
        goto label_10fad0;
    }
    ctx->pc = 0x10FAC8u;
    {
        const bool branch_taken_0x10fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC8u;
        // 0x10facc: 0x8cc2024c  lw          $v0, 0x24C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fac8) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FAD0u;
label_10fad0:
    // 0x10fad0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_10fad4:
    if (ctx->pc == 0x10FAD4u) {
        ctx->pc = 0x10FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD0u;
        // 0x10fad4: 0x8cc20250  lw          $v0, 0x250($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAD8u;
        goto label_10fad8;
    }
    ctx->pc = 0x10FAD0u;
    {
        const bool branch_taken_0x10fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD0u;
        // 0x10fad4: 0x8cc20250  lw          $v0, 0x250($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fad0) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FAD8u;
label_10fad8:
    // 0x10fad8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10fadc:
    // 0x10fadc: 0x8e2715b4  lw          $a3, 0x15B4($s1)
    ctx->pc = 0x10fadcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fae0:
    // 0x10fae0: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x10fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_10fae4:
    // 0x10fae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fae8:
    // 0x10fae8: 0x2ce30006  sltiu       $v1, $a3, 0x6
    ctx->pc = 0x10fae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10faec:
    // 0x10faec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_10faf0:
    if (ctx->pc == 0x10FAF0u) {
        ctx->pc = 0x10FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAECu;
        // 0x10faf0: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAF4u;
        goto label_10faf4;
    }
    ctx->pc = 0x10FAECu;
    {
        const bool branch_taken_0x10faec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAECu;
        // 0x10faf0: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faec) {
            ctx->pc = 0x10FB10u;
            goto label_10fb10;
        }
    }
    ctx->pc = 0x10FAF4u;
label_10faf4:
    // 0x10faf4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x10faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_10faf8:
    // 0x10faf8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x10faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_10fafc:
    // 0x10fafc: 0x2442bda0  addiu       $v0, $v0, -0x4260
    ctx->pc = 0x10fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950304));
label_10fb00:
    // 0x10fb00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10fb04:
    // 0x10fb04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10fb08:
    // 0x10fb08: 0x800008  jr          $a0
label_10fb0c:
    if (ctx->pc == 0x10FB0Cu) {
        ctx->pc = 0x10FB10u;
        goto label_10fb10;
    }
    ctx->pc = 0x10FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FB10u: goto label_10fb10;
            case 0x10FB18u: goto label_10fb18;
            case 0x10FB20u: goto label_10fb20;
            case 0x10FB28u: goto label_10fb28;
            case 0x10FB30u: goto label_10fb30;
            case 0x10FB38u: goto label_10fb38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FB10u;
label_10fb10:
    // 0x10fb10: 0x1000000a  b           . + 4 + (0xA << 2)
label_10fb14:
    if (ctx->pc == 0x10FB14u) {
        ctx->pc = 0x10FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB10u;
        // 0x10fb14: 0x8cc201ec  lw          $v0, 0x1EC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 492)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB18u;
        goto label_10fb18;
    }
    ctx->pc = 0x10FB10u;
    {
        const bool branch_taken_0x10fb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB10u;
        // 0x10fb14: 0x8cc201ec  lw          $v0, 0x1EC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb10) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FB18u;
label_10fb18:
    // 0x10fb18: 0x10000008  b           . + 4 + (0x8 << 2)
label_10fb1c:
    if (ctx->pc == 0x10FB1Cu) {
        ctx->pc = 0x10FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB18u;
        // 0x10fb1c: 0x8cc201f0  lw          $v0, 0x1F0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB20u;
        goto label_10fb20;
    }
    ctx->pc = 0x10FB18u;
    {
        const bool branch_taken_0x10fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB18u;
        // 0x10fb1c: 0x8cc201f0  lw          $v0, 0x1F0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb18) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FB20u;
label_10fb20:
    // 0x10fb20: 0x10000006  b           . + 4 + (0x6 << 2)
label_10fb24:
    if (ctx->pc == 0x10FB24u) {
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x8cc201f4  lw          $v0, 0x1F4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB28u;
        goto label_10fb28;
    }
    ctx->pc = 0x10FB20u;
    {
        const bool branch_taken_0x10fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x8cc201f4  lw          $v0, 0x1F4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb20) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FB28u;
label_10fb28:
    // 0x10fb28: 0x10000004  b           . + 4 + (0x4 << 2)
label_10fb2c:
    if (ctx->pc == 0x10FB2Cu) {
        ctx->pc = 0x10FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB28u;
        // 0x10fb2c: 0x8cc201f8  lw          $v0, 0x1F8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB30u;
        goto label_10fb30;
    }
    ctx->pc = 0x10FB28u;
    {
        const bool branch_taken_0x10fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB28u;
        // 0x10fb2c: 0x8cc201f8  lw          $v0, 0x1F8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb28) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FB30u;
label_10fb30:
    // 0x10fb30: 0x10000002  b           . + 4 + (0x2 << 2)
label_10fb34:
    if (ctx->pc == 0x10FB34u) {
        ctx->pc = 0x10FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB30u;
        // 0x10fb34: 0x8cc201fc  lw          $v0, 0x1FC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB38u;
        goto label_10fb38;
    }
    ctx->pc = 0x10FB30u;
    {
        const bool branch_taken_0x10fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB30u;
        // 0x10fb34: 0x8cc201fc  lw          $v0, 0x1FC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb30) {
            ctx->pc = 0x10FB3Cu;
            goto label_10fb3c;
        }
    }
    ctx->pc = 0x10FB38u;
label_10fb38:
    // 0x10fb38: 0x8cc20200  lw          $v0, 0x200($a2)
    ctx->pc = 0x10fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
label_10fb3c:
    // 0x10fb3c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x10fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_10fb40:
    // 0x10fb40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10fb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10fb44:
    // 0x10fb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fb48:
    // 0x10fb48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10fb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10fb4c:
    // 0x10fb4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fb4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fb50:
    // 0x10fb50: 0xc0aa15e  jal         func_2A8578
label_10fb54:
    if (ctx->pc == 0x10FB54u) {
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB58u;
        goto label_10fb58;
    }
    ctx->pc = 0x10FB50u;
    SET_GPR_U32(ctx, 31, 0x10FB58u);
    ctx->pc = 0x10FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB50u;
    // 0x10fb54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10FB50u, 0x10FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB58u;
label_10fb58:
    // 0x10fb58: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10fb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10fb5c:
    // 0x10fb5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10fb60:
    // 0x10fb60: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10fb60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10fb64:
    // 0x10fb64: 0xc0b6dea  jal         func_2DB7A8
label_10fb68:
    if (ctx->pc == 0x10FB68u) {
        ctx->pc = 0x10FB6Cu;
        goto label_10fb6c;
    }
    ctx->pc = 0x10FB64u;
    SET_GPR_U32(ctx, 31, 0x10FB6Cu);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x10FB64u, 0x10FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB6Cu;
label_10fb6c:
    // 0x10fb6c: 0xc0493b0  jal         func_124EC0
label_10fb70:
    if (ctx->pc == 0x10FB70u) {
        ctx->pc = 0x10FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB6Cu;
        // 0x10fb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB74u;
        goto label_10fb74;
    }
    ctx->pc = 0x10FB6Cu;
    SET_GPR_U32(ctx, 31, 0x10FB74u);
    ctx->pc = 0x10FB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB6Cu;
    // 0x10fb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x10FB6Cu, 0x10FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB74u;
label_10fb74:
    // 0x10fb74: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10fb78:
    // 0x10fb78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10fb7c:
    if (ctx->pc == 0x10FB7Cu) {
        ctx->pc = 0x10FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB78u;
        // 0x10fb7c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB80u;
        goto label_10fb80;
    }
    ctx->pc = 0x10FB78u;
    {
        const bool branch_taken_0x10fb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB78u;
        // 0x10fb7c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb78) {
            ctx->pc = 0x10FB84u;
            goto label_10fb84;
        }
    }
    ctx->pc = 0x10FB80u;
label_10fb80:
    // 0x10fb80: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10fb80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10fb84:
    // 0x10fb84: 0x3c013e06  lui         $at, 0x3E06
    ctx->pc = 0x10fb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15878 << 16));
label_10fb88:
    // 0x10fb88: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10fb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_10fb8c:
    // 0x10fb8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10fb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10fb90:
    // 0x10fb90: 0xc04939a  jal         func_124E68
label_10fb94:
    if (ctx->pc == 0x10FB94u) {
        ctx->pc = 0x10FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB90u;
        // 0x10fb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB98u;
        goto label_10fb98;
    }
    ctx->pc = 0x10FB90u;
    SET_GPR_U32(ctx, 31, 0x10FB98u);
    ctx->pc = 0x10FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB90u;
    // 0x10fb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10FB90u, 0x10FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB98u;
label_10fb98:
    // 0x10fb98: 0xc055f06  jal         func_157C18
label_10fb9c:
    if (ctx->pc == 0x10FB9Cu) {
        ctx->pc = 0x10FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB98u;
        // 0x10fb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBA0u;
        goto label_10fba0;
    }
    ctx->pc = 0x10FB98u;
    SET_GPR_U32(ctx, 31, 0x10FBA0u);
    ctx->pc = 0x10FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB98u;
    // 0x10fb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10FB98u, 0x10FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBA0u;
label_10fba0:
    // 0x10fba0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_10fba4:
    if (ctx->pc == 0x10FBA4u) {
        ctx->pc = 0x10FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA0u;
        // 0x10fba4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBA8u;
        goto label_10fba8;
    }
    ctx->pc = 0x10FBA0u;
    {
        const bool branch_taken_0x10fba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fba0) {
            ctx->pc = 0x10FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FBA0u;
            // 0x10fba4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FBE4u;
            goto label_10fbe4;
        }
    }
    ctx->pc = 0x10FBA8u;
label_10fba8:
    // 0x10fba8: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_10fbac:
    // 0x10fbac: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_10fbb0:
    if (ctx->pc == 0x10FBB0u) {
        ctx->pc = 0x10FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBACu;
        // 0x10fbb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBB4u;
        goto label_10fbb4;
    }
    ctx->pc = 0x10FBACu;
    {
        const bool branch_taken_0x10fbac = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBACu;
        // 0x10fbb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbac) {
            ctx->pc = 0x10FBB8u;
            goto label_10fbb8;
        }
    }
    ctx->pc = 0x10FBB4u;
label_10fbb4:
    // 0x10fbb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10fbb8:
    // 0x10fbb8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10fbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10fbbc:
    // 0x10fbbc: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10fbc0:
    // 0x10fbc0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_10fbc4:
    if (ctx->pc == 0x10FBC4u) {
        ctx->pc = 0x10FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC0u;
        // 0x10fbc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBC8u;
        goto label_10fbc8;
    }
    ctx->pc = 0x10FBC0u;
    {
        const bool branch_taken_0x10fbc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC0u;
        // 0x10fbc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbc0) {
            ctx->pc = 0x10FBDCu;
            goto label_10fbdc;
        }
    }
    ctx->pc = 0x10FBC8u;
label_10fbc8:
    // 0x10fbc8: 0xc0493f6  jal         func_124FD8
label_10fbcc:
    if (ctx->pc == 0x10FBCCu) {
        ctx->pc = 0x10FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC8u;
        // 0x10fbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBD0u;
        goto label_10fbd0;
    }
    ctx->pc = 0x10FBC8u;
    SET_GPR_U32(ctx, 31, 0x10FBD0u);
    ctx->pc = 0x10FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBC8u;
    // 0x10fbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124FD8u, 0x10FBC8u, 0x10FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBD0u;
label_10fbd0:
    // 0x10fbd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_10fbd4:
    if (ctx->pc == 0x10FBD4u) {
        ctx->pc = 0x10FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBD0u;
        // 0x10fbd4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBD8u;
        goto label_10fbd8;
    }
    ctx->pc = 0x10FBD0u;
    {
        const bool branch_taken_0x10fbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fbd0) {
            ctx->pc = 0x10FBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FBD0u;
            // 0x10fbd4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FBE4u;
            goto label_10fbe4;
        }
    }
    ctx->pc = 0x10FBD8u;
label_10fbd8:
    // 0x10fbd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10fbdc:
    // 0x10fbdc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10fbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10fbe0:
    // 0x10fbe0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10fbe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10fbe4:
    // 0x10fbe4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x10fbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_10fbe8:
    // 0x10fbe8: 0x10000024  b           . + 4 + (0x24 << 2)
label_10fbec:
    if (ctx->pc == 0x10FBECu) {
        ctx->pc = 0x10FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE8u;
        // 0x10fbec: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBF0u;
        goto label_10fbf0;
    }
    ctx->pc = 0x10FBE8u;
    {
        const bool branch_taken_0x10fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE8u;
        // 0x10fbec: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbe8) {
            ctx->pc = 0x10FC7Cu;
            goto label_10fc7c;
        }
    }
    ctx->pc = 0x10FBF0u;
label_10fbf0:
    // 0x10fbf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fbf4:
    // 0x10fbf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fbf8:
    // 0x10fbf8: 0xc0493d8  jal         func_124F60
label_10fbfc:
    if (ctx->pc == 0x10FBFCu) {
        ctx->pc = 0x10FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBF8u;
        // 0x10fbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC00u;
        goto label_10fc00;
    }
    ctx->pc = 0x10FBF8u;
    SET_GPR_U32(ctx, 31, 0x10FC00u);
    ctx->pc = 0x10FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBF8u;
    // 0x10fbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10FBF8u, 0x10FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC00u;
label_10fc00:
    // 0x10fc00: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10fc04:
    // 0x10fc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fc08:
    // 0x10fc08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10fc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10fc0c:
    // 0x10fc0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10fc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10fc10:
    // 0x10fc10: 0x8c450204  lw          $a1, 0x204($v0)
    ctx->pc = 0x10fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_10fc14:
    // 0x10fc14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fc14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc18:
    // 0x10fc18: 0x8c460208  lw          $a2, 0x208($v0)
    ctx->pc = 0x10fc18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
label_10fc1c:
    // 0x10fc1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fc1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc20:
    // 0x10fc20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10fc24:
    // 0x10fc24: 0xc0aa15e  jal         func_2A8578
label_10fc28:
    if (ctx->pc == 0x10FC28u) {
        ctx->pc = 0x10FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC24u;
        // 0x10fc28: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC2Cu;
        goto label_10fc2c;
    }
    ctx->pc = 0x10FC24u;
    SET_GPR_U32(ctx, 31, 0x10FC2Cu);
    ctx->pc = 0x10FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC24u;
    // 0x10fc28: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10FC24u, 0x10FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC2Cu;
label_10fc2c:
    // 0x10fc2c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10fc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10fc30:
    // 0x10fc30: 0xae2015bc  sw          $zero, 0x15BC($s1)
    ctx->pc = 0x10fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 0));
label_10fc34:
    // 0x10fc34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10fc38:
    // 0x10fc38: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10fc38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10fc3c:
    // 0x10fc3c: 0xc055f06  jal         func_157C18
label_10fc40:
    if (ctx->pc == 0x10FC40u) {
        ctx->pc = 0x10FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC3Cu;
        // 0x10fc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC44u;
        goto label_10fc44;
    }
    ctx->pc = 0x10FC3Cu;
    SET_GPR_U32(ctx, 31, 0x10FC44u);
    ctx->pc = 0x10FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC3Cu;
    // 0x10fc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10FC3Cu, 0x10FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC44u;
label_10fc44:
    // 0x10fc44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10fc48:
    if (ctx->pc == 0x10FC48u) {
        ctx->pc = 0x10FC4Cu;
        goto label_10fc4c;
    }
    ctx->pc = 0x10FC44u;
    {
        const bool branch_taken_0x10fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fc44) {
            ctx->pc = 0x10FC5Cu;
            goto label_10fc5c;
        }
    }
    ctx->pc = 0x10FC4Cu;
label_10fc4c:
    // 0x10fc4c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10fc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10fc50:
    // 0x10fc50: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10fc50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_10fc54:
    // 0x10fc54: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10fc58:
    // 0x10fc58: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10fc5c:
    // 0x10fc5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10fc60:
    // 0x10fc60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10fc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10fc64:
    // 0x10fc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fc68:
    // 0x10fc68: 0xc053e7c  jal         func_14F9F0
label_10fc6c:
    if (ctx->pc == 0x10FC6Cu) {
        ctx->pc = 0x10FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC68u;
        // 0x10fc6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC70u;
        goto label_10fc70;
    }
    ctx->pc = 0x10FC68u;
    SET_GPR_U32(ctx, 31, 0x10FC70u);
    ctx->pc = 0x10FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC68u;
    // 0x10fc6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10FC68u, 0x10FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC70u;
label_10fc70:
    // 0x10fc70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10fc70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10fc74:
    // 0x10fc74: 0xc053e4a  jal         func_14F928
label_10fc78:
    if (ctx->pc == 0x10FC78u) {
        ctx->pc = 0x10FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC74u;
        // 0x10fc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC7Cu;
        goto label_10fc7c;
    }
    ctx->pc = 0x10FC74u;
    SET_GPR_U32(ctx, 31, 0x10FC7Cu);
    ctx->pc = 0x10FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC74u;
    // 0x10fc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10FC74u, 0x10FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC7Cu;
label_10fc7c:
    // 0x10fc7c: 0xc04290e  jal         func_10A438
label_10fc80:
    if (ctx->pc == 0x10FC80u) {
        ctx->pc = 0x10FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC7Cu;
        // 0x10fc80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC84u;
        goto label_10fc84;
    }
    ctx->pc = 0x10FC7Cu;
    SET_GPR_U32(ctx, 31, 0x10FC84u);
    ctx->pc = 0x10FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC7Cu;
    // 0x10fc80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10FC7Cu, 0x10FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC84u;
label_10fc84:
    // 0x10fc84: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x10fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_10fc88:
    // 0x10fc88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10fc8c:
    if (ctx->pc == 0x10FC8Cu) {
        ctx->pc = 0x10FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC88u;
        // 0x10fc8c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC90u;
        goto label_10fc90;
    }
    ctx->pc = 0x10FC88u;
    {
        const bool branch_taken_0x10fc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC88u;
        // 0x10fc8c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc88) {
            ctx->pc = 0x10FC94u;
            goto label_10fc94;
        }
    }
    ctx->pc = 0x10FC90u;
label_10fc90:
    // 0x10fc90: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x10fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_10fc94:
    // 0x10fc94: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10fc98:
    // 0x10fc98: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x10fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_10fc9c:
    // 0x10fc9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10fca0:
    // 0x10fca0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x10fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_10fca4:
    // 0x10fca4: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x10fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29864)));
label_10fca8:
    // 0x10fca8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x10fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_10fcac:
    // 0x10fcac: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_10fcb0:
    if (ctx->pc == 0x10FCB0u) {
        ctx->pc = 0x10FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCACu;
        // 0x10fcb0: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCB4u;
        goto label_10fcb4;
    }
    ctx->pc = 0x10FCACu;
    {
        const bool branch_taken_0x10fcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcac) {
            ctx->pc = 0x10FCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FCACu;
            // 0x10fcb0: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FD70u;
            goto label_10fd70;
        }
    }
    ctx->pc = 0x10FCB4u;
label_10fcb4:
    // 0x10fcb4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x10fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fcb8:
    // 0x10fcb8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x10fcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10fcbc:
    // 0x10fcbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10fcc0:
    if (ctx->pc == 0x10FCC0u) {
        ctx->pc = 0x10FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCBCu;
        // 0x10fcc0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCC4u;
        goto label_10fcc4;
    }
    ctx->pc = 0x10FCBCu;
    {
        const bool branch_taken_0x10fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCBCu;
        // 0x10fcc0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcbc) {
            ctx->pc = 0x10FCDCu;
            goto label_10fcdc;
        }
    }
    ctx->pc = 0x10FCC4u;
label_10fcc4:
    // 0x10fcc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10fcc8:
    // 0x10fcc8: 0x2442bdc0  addiu       $v0, $v0, -0x4240
    ctx->pc = 0x10fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
label_10fccc:
    // 0x10fccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10fcd0:
    // 0x10fcd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10fcd4:
    // 0x10fcd4: 0x800008  jr          $a0
label_10fcd8:
    if (ctx->pc == 0x10FCD8u) {
        ctx->pc = 0x10FCDCu;
        goto label_10fcdc;
    }
    ctx->pc = 0x10FCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FCDCu: goto label_10fcdc;
            case 0x10FCE4u: goto label_10fce4;
            case 0x10FCECu: goto label_10fcec;
            case 0x10FCF4u: goto label_10fcf4;
            case 0x10FCFCu: goto label_10fcfc;
            case 0x10FD04u: goto label_10fd04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FCD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FCDCu;
label_10fcdc:
    // 0x10fcdc: 0x1000000a  b           . + 4 + (0xA << 2)
label_10fce0:
    if (ctx->pc == 0x10FCE0u) {
        ctx->pc = 0x10FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCDCu;
        // 0x10fce0: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCE4u;
        goto label_10fce4;
    }
    ctx->pc = 0x10FCDCu;
    {
        const bool branch_taken_0x10fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCDCu;
        // 0x10fce0: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcdc) {
            ctx->pc = 0x10FD08u;
            goto label_10fd08;
        }
    }
    ctx->pc = 0x10FCE4u;
label_10fce4:
    // 0x10fce4: 0x10000008  b           . + 4 + (0x8 << 2)
label_10fce8:
    if (ctx->pc == 0x10FCE8u) {
        ctx->pc = 0x10FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE4u;
        // 0x10fce8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCECu;
        goto label_10fcec;
    }
    ctx->pc = 0x10FCE4u;
    {
        const bool branch_taken_0x10fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE4u;
        // 0x10fce8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce4) {
            ctx->pc = 0x10FD08u;
            goto label_10fd08;
        }
    }
    ctx->pc = 0x10FCECu;
label_10fcec:
    // 0x10fcec: 0x10000006  b           . + 4 + (0x6 << 2)
label_10fcf0:
    if (ctx->pc == 0x10FCF0u) {
        ctx->pc = 0x10FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCECu;
        // 0x10fcf0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCF4u;
        goto label_10fcf4;
    }
    ctx->pc = 0x10FCECu;
    {
        const bool branch_taken_0x10fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCECu;
        // 0x10fcf0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcec) {
            ctx->pc = 0x10FD08u;
            goto label_10fd08;
        }
    }
    ctx->pc = 0x10FCF4u;
label_10fcf4:
    // 0x10fcf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_10fcf8:
    if (ctx->pc == 0x10FCF8u) {
        ctx->pc = 0x10FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCF4u;
        // 0x10fcf8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCFCu;
        goto label_10fcfc;
    }
    ctx->pc = 0x10FCF4u;
    {
        const bool branch_taken_0x10fcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCF4u;
        // 0x10fcf8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcf4) {
            ctx->pc = 0x10FD08u;
            goto label_10fd08;
        }
    }
    ctx->pc = 0x10FCFCu;
label_10fcfc:
    // 0x10fcfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_10fd00:
    if (ctx->pc == 0x10FD00u) {
        ctx->pc = 0x10FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCFCu;
        // 0x10fd00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD04u;
        goto label_10fd04;
    }
    ctx->pc = 0x10FCFCu;
    {
        const bool branch_taken_0x10fcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCFCu;
        // 0x10fd00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcfc) {
            ctx->pc = 0x10FD08u;
            goto label_10fd08;
        }
    }
    ctx->pc = 0x10FD04u;
label_10fd04:
    // 0x10fd04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10fd08:
    // 0x10fd08: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10fd0c:
    // 0x10fd0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10fd10:
    // 0x10fd10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_10fd14:
    if (ctx->pc == 0x10FD14u) {
        ctx->pc = 0x10FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD10u;
        // 0x10fd14: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD18u;
        goto label_10fd18;
    }
    ctx->pc = 0x10FD10u;
    {
        const bool branch_taken_0x10fd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd10) {
            ctx->pc = 0x10FD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FD10u;
            // 0x10fd14: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FD28u;
            goto label_10fd28;
        }
    }
    ctx->pc = 0x10FD18u;
label_10fd18:
    // 0x10fd18: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fd1c:
    // 0x10fd1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10fd20:
    // 0x10fd20: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_10fd24:
    // 0x10fd24: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10fd28:
    // 0x10fd28: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x10fd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10fd2c:
    // 0x10fd2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10fd30:
    if (ctx->pc == 0x10FD30u) {
        ctx->pc = 0x10FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD2Cu;
        // 0x10fd30: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD34u;
        goto label_10fd34;
    }
    ctx->pc = 0x10FD2Cu;
    {
        const bool branch_taken_0x10fd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD2Cu;
        // 0x10fd30: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd2c) {
            ctx->pc = 0x10FD40u;
            goto label_10fd40;
        }
    }
    ctx->pc = 0x10FD34u;
label_10fd34:
    // 0x10fd34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10fd38:
    // 0x10fd38: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_10fd3c:
    // 0x10fd3c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fd40:
    // 0x10fd40: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_10fd44:
    if (ctx->pc == 0x10FD44u) {
        ctx->pc = 0x10FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD40u;
        // 0x10fd44: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD48u;
        goto label_10fd48;
    }
    ctx->pc = 0x10FD40u;
    {
        const bool branch_taken_0x10fd40 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10fd40) {
            ctx->pc = 0x10FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FD40u;
            // 0x10fd44: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FD48u;
            goto label_10fd48;
        }
    }
    ctx->pc = 0x10FD48u;
label_10fd48:
    // 0x10fd48: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fd4c:
    // 0x10fd4c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x10fd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_10fd50:
    // 0x10fd50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10fd54:
    if (ctx->pc == 0x10FD54u) {
        ctx->pc = 0x10FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD50u;
        // 0x10fd54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD58u;
        goto label_10fd58;
    }
    ctx->pc = 0x10FD50u;
    {
        const bool branch_taken_0x10fd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD50u;
        // 0x10fd54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd50) {
            ctx->pc = 0x10FD64u;
            goto label_10fd64;
        }
    }
    ctx->pc = 0x10FD58u;
label_10fd58:
    // 0x10fd58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10fd5c:
    // 0x10fd5c: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_10fd60:
    // 0x10fd60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10fd64:
    // 0x10fd64: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x10fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
label_10fd68:
    // 0x10fd68: 0x1000000a  b           . + 4 + (0xA << 2)
label_10fd6c:
    if (ctx->pc == 0x10FD6Cu) {
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD70u;
        goto label_10fd70;
    }
    ctx->pc = 0x10FD68u;
    {
        const bool branch_taken_0x10fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd68) {
            ctx->pc = 0x10FD94u;
            goto label_10fd94;
        }
    }
    ctx->pc = 0x10FD70u;
label_10fd70:
    // 0x10fd70: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_10fd74:
    if (ctx->pc == 0x10FD74u) {
        ctx->pc = 0x10FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD70u;
        // 0x10fd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD78u;
        goto label_10fd78;
    }
    ctx->pc = 0x10FD70u;
    {
        const bool branch_taken_0x10fd70 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD70u;
        // 0x10fd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd70) {
            ctx->pc = 0x10FD98u;
            goto label_10fd98;
        }
    }
    ctx->pc = 0x10FD78u;
label_10fd78:
    // 0x10fd78: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10fd7c:
    // 0x10fd7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10fd80:
    // 0x10fd80: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x10fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
label_10fd84:
    // 0x10fd84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10fd88:
    // 0x10fd88: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_10fd8c:
    if (ctx->pc == 0x10FD8Cu) {
        ctx->pc = 0x10FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD88u;
        // 0x10fd8c: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD90u;
        goto label_10fd90;
    }
    ctx->pc = 0x10FD88u;
    {
        const bool branch_taken_0x10fd88 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x10FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD88u;
        // 0x10fd8c: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd88) {
            ctx->pc = 0x10FD98u;
            goto label_10fd98;
        }
    }
    ctx->pc = 0x10FD90u;
label_10fd90:
    // 0x10fd90: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x10fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_10fd94:
    // 0x10fd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fd98:
    // 0x10fd98: 0xc048e4e  jal         func_123938
label_10fd9c:
    if (ctx->pc == 0x10FD9Cu) {
        ctx->pc = 0x10FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD98u;
        // 0x10fd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDA0u;
        goto label_10fda0;
    }
    ctx->pc = 0x10FD98u;
    SET_GPR_U32(ctx, 31, 0x10FDA0u);
    ctx->pc = 0x10FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD98u;
    // 0x10fd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10FD98u, 0x10FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDA0u;
label_10fda0:
    // 0x10fda0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10fda4:
    if (ctx->pc == 0x10FDA4u) {
        ctx->pc = 0x10FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDA0u;
        // 0x10fda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDA8u;
        goto label_10fda8;
    }
    ctx->pc = 0x10FDA0u;
    {
        const bool branch_taken_0x10fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDA0u;
        // 0x10fda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fda0) {
            ctx->pc = 0x10FDBCu;
            goto label_10fdbc;
        }
    }
    ctx->pc = 0x10FDA8u;
label_10fda8:
    // 0x10fda8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fdac:
    // 0x10fdac: 0xc0493d8  jal         func_124F60
label_10fdb0:
    if (ctx->pc == 0x10FDB0u) {
        ctx->pc = 0x10FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDACu;
        // 0x10fdb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDB4u;
        goto label_10fdb4;
    }
    ctx->pc = 0x10FDACu;
    SET_GPR_U32(ctx, 31, 0x10FDB4u);
    ctx->pc = 0x10FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDACu;
    // 0x10fdb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10FDACu, 0x10FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDB4u;
label_10fdb4:
    // 0x10fdb4: 0x10000011  b           . + 4 + (0x11 << 2)
label_10fdb8:
    if (ctx->pc == 0x10FDB8u) {
        ctx->pc = 0x10FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDB4u;
        // 0x10fdb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDBCu;
        goto label_10fdbc;
    }
    ctx->pc = 0x10FDB4u;
    {
        const bool branch_taken_0x10fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDB4u;
        // 0x10fdb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdb4) {
            ctx->pc = 0x10FDFCu;
            goto label_10fdfc;
        }
    }
    ctx->pc = 0x10FDBCu;
label_10fdbc:
    // 0x10fdbc: 0x8e2215bc  lw          $v0, 0x15BC($s1)
    ctx->pc = 0x10fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
label_10fdc0:
    // 0x10fdc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10fdc4:
    if (ctx->pc == 0x10FDC4u) {
        ctx->pc = 0x10FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC0u;
        // 0x10fdc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDC8u;
        goto label_10fdc8;
    }
    ctx->pc = 0x10FDC0u;
    {
        const bool branch_taken_0x10fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC0u;
        // 0x10fdc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdc0) {
            ctx->pc = 0x10FDF8u;
            goto label_10fdf8;
        }
    }
    ctx->pc = 0x10FDC8u;
label_10fdc8:
    // 0x10fdc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_10fdcc:
    if (ctx->pc == 0x10FDCCu) {
        ctx->pc = 0x10FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC8u;
        // 0x10fdcc: 0xae2215bc  sw          $v0, 0x15BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDD0u;
        goto label_10fdd0;
    }
    ctx->pc = 0x10FDC8u;
    {
        const bool branch_taken_0x10fdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC8u;
        // 0x10fdcc: 0xae2215bc  sw          $v0, 0x15BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdc8) {
            ctx->pc = 0x10FDF8u;
            goto label_10fdf8;
        }
    }
    ctx->pc = 0x10FDD0u;
label_10fdd0:
    // 0x10fdd0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_10fdd4:
    // 0x10fdd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10fdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fdd8:
    // 0x10fdd8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_10fddc:
    // 0x10fddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fde0:
    // 0x10fde0: 0x240600da  addiu       $a2, $zero, 0xDA
    ctx->pc = 0x10fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
label_10fde4:
    // 0x10fde4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fde4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fde8:
    // 0x10fde8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fdec:
    // 0x10fdec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10fdecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fdf0:
    // 0x10fdf0: 0xc0b2e92  jal         func_2CBA48
label_10fdf4:
    if (ctx->pc == 0x10FDF4u) {
        ctx->pc = 0x10FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDF0u;
        // 0x10fdf4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDF8u;
        goto label_10fdf8;
    }
    ctx->pc = 0x10FDF0u;
    SET_GPR_U32(ctx, 31, 0x10FDF8u);
    ctx->pc = 0x10FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDF0u;
    // 0x10fdf4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10FDF0u, 0x10FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDF8u;
label_10fdf8:
    // 0x10fdf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10fdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10fdfc:
    // 0x10fdfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10fdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10fe00:
    // 0x10fe00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fe04:
    // 0x10fe04: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10fe08:
    // 0x10fe08: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10fe0c:
    // 0x10fe0c: 0x3e00008  jr          $ra
label_10fe10:
    if (ctx->pc == 0x10FE10u) {
        ctx->pc = 0x10FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE0Cu;
        // 0x10fe10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE14u;
        goto label_10fe14;
    }
    ctx->pc = 0x10FE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE0Cu;
        // 0x10fe10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE14u;
label_10fe14:
    // 0x10fe14: 0x0  nop
    ctx->pc = 0x10fe14u;
    // NOP
    ctx->pc = 0x10fe18u;
}
