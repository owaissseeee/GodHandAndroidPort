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

// Function: func_001601D8
// Address: 0x1601d8 - 0x160b90
void func_001601D8_0x1601d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001601D8_0x1601d8");
#endif

    switch (ctx->pc) {
        case 0x1601d8u: goto label_1601d8;
        case 0x1601dcu: goto label_1601dc;
        case 0x1601e0u: goto label_1601e0;
        case 0x1601e4u: goto label_1601e4;
        case 0x1601e8u: goto label_1601e8;
        case 0x1601ecu: goto label_1601ec;
        case 0x1601f0u: goto label_1601f0;
        case 0x1601f4u: goto label_1601f4;
        case 0x1601f8u: goto label_1601f8;
        case 0x1601fcu: goto label_1601fc;
        case 0x160200u: goto label_160200;
        case 0x160204u: goto label_160204;
        case 0x160208u: goto label_160208;
        case 0x16020cu: goto label_16020c;
        case 0x160210u: goto label_160210;
        case 0x160214u: goto label_160214;
        case 0x160218u: goto label_160218;
        case 0x16021cu: goto label_16021c;
        case 0x160220u: goto label_160220;
        case 0x160224u: goto label_160224;
        case 0x160228u: goto label_160228;
        case 0x16022cu: goto label_16022c;
        case 0x160230u: goto label_160230;
        case 0x160234u: goto label_160234;
        case 0x160238u: goto label_160238;
        case 0x16023cu: goto label_16023c;
        case 0x160240u: goto label_160240;
        case 0x160244u: goto label_160244;
        case 0x160248u: goto label_160248;
        case 0x16024cu: goto label_16024c;
        case 0x160250u: goto label_160250;
        case 0x160254u: goto label_160254;
        case 0x160258u: goto label_160258;
        case 0x16025cu: goto label_16025c;
        case 0x160260u: goto label_160260;
        case 0x160264u: goto label_160264;
        case 0x160268u: goto label_160268;
        case 0x16026cu: goto label_16026c;
        case 0x160270u: goto label_160270;
        case 0x160274u: goto label_160274;
        case 0x160278u: goto label_160278;
        case 0x16027cu: goto label_16027c;
        case 0x160280u: goto label_160280;
        case 0x160284u: goto label_160284;
        case 0x160288u: goto label_160288;
        case 0x16028cu: goto label_16028c;
        case 0x160290u: goto label_160290;
        case 0x160294u: goto label_160294;
        case 0x160298u: goto label_160298;
        case 0x16029cu: goto label_16029c;
        case 0x1602a0u: goto label_1602a0;
        case 0x1602a4u: goto label_1602a4;
        case 0x1602a8u: goto label_1602a8;
        case 0x1602acu: goto label_1602ac;
        case 0x1602b0u: goto label_1602b0;
        case 0x1602b4u: goto label_1602b4;
        case 0x1602b8u: goto label_1602b8;
        case 0x1602bcu: goto label_1602bc;
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        case 0x160368u: goto label_160368;
        case 0x16036cu: goto label_16036c;
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        case 0x160460u: goto label_160460;
        case 0x160464u: goto label_160464;
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        case 0x160618u: goto label_160618;
        case 0x16061cu: goto label_16061c;
        case 0x160620u: goto label_160620;
        case 0x160624u: goto label_160624;
        case 0x160628u: goto label_160628;
        case 0x16062cu: goto label_16062c;
        case 0x160630u: goto label_160630;
        case 0x160634u: goto label_160634;
        case 0x160638u: goto label_160638;
        case 0x16063cu: goto label_16063c;
        case 0x160640u: goto label_160640;
        case 0x160644u: goto label_160644;
        case 0x160648u: goto label_160648;
        case 0x16064cu: goto label_16064c;
        case 0x160650u: goto label_160650;
        case 0x160654u: goto label_160654;
        case 0x160658u: goto label_160658;
        case 0x16065cu: goto label_16065c;
        case 0x160660u: goto label_160660;
        case 0x160664u: goto label_160664;
        case 0x160668u: goto label_160668;
        case 0x16066cu: goto label_16066c;
        case 0x160670u: goto label_160670;
        case 0x160674u: goto label_160674;
        case 0x160678u: goto label_160678;
        case 0x16067cu: goto label_16067c;
        case 0x160680u: goto label_160680;
        case 0x160684u: goto label_160684;
        case 0x160688u: goto label_160688;
        case 0x16068cu: goto label_16068c;
        case 0x160690u: goto label_160690;
        case 0x160694u: goto label_160694;
        case 0x160698u: goto label_160698;
        case 0x16069cu: goto label_16069c;
        case 0x1606a0u: goto label_1606a0;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606a8u: goto label_1606a8;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b0u: goto label_1606b0;
        case 0x1606b4u: goto label_1606b4;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c0u: goto label_1606c0;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606c8u: goto label_1606c8;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d0u: goto label_1606d0;
        case 0x1606d4u: goto label_1606d4;
        case 0x1606d8u: goto label_1606d8;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606e0u: goto label_1606e0;
        case 0x1606e4u: goto label_1606e4;
        case 0x1606e8u: goto label_1606e8;
        case 0x1606ecu: goto label_1606ec;
        case 0x1606f0u: goto label_1606f0;
        case 0x1606f4u: goto label_1606f4;
        case 0x1606f8u: goto label_1606f8;
        case 0x1606fcu: goto label_1606fc;
        case 0x160700u: goto label_160700;
        case 0x160704u: goto label_160704;
        case 0x160708u: goto label_160708;
        case 0x16070cu: goto label_16070c;
        case 0x160710u: goto label_160710;
        case 0x160714u: goto label_160714;
        case 0x160718u: goto label_160718;
        case 0x16071cu: goto label_16071c;
        case 0x160720u: goto label_160720;
        case 0x160724u: goto label_160724;
        case 0x160728u: goto label_160728;
        case 0x16072cu: goto label_16072c;
        case 0x160730u: goto label_160730;
        case 0x160734u: goto label_160734;
        case 0x160738u: goto label_160738;
        case 0x16073cu: goto label_16073c;
        case 0x160740u: goto label_160740;
        case 0x160744u: goto label_160744;
        case 0x160748u: goto label_160748;
        case 0x16074cu: goto label_16074c;
        case 0x160750u: goto label_160750;
        case 0x160754u: goto label_160754;
        case 0x160758u: goto label_160758;
        case 0x16075cu: goto label_16075c;
        case 0x160760u: goto label_160760;
        case 0x160764u: goto label_160764;
        case 0x160768u: goto label_160768;
        case 0x16076cu: goto label_16076c;
        case 0x160770u: goto label_160770;
        case 0x160774u: goto label_160774;
        case 0x160778u: goto label_160778;
        case 0x16077cu: goto label_16077c;
        case 0x160780u: goto label_160780;
        case 0x160784u: goto label_160784;
        case 0x160788u: goto label_160788;
        case 0x16078cu: goto label_16078c;
        case 0x160790u: goto label_160790;
        case 0x160794u: goto label_160794;
        case 0x160798u: goto label_160798;
        case 0x16079cu: goto label_16079c;
        case 0x1607a0u: goto label_1607a0;
        case 0x1607a4u: goto label_1607a4;
        case 0x1607a8u: goto label_1607a8;
        case 0x1607acu: goto label_1607ac;
        case 0x1607b0u: goto label_1607b0;
        case 0x1607b4u: goto label_1607b4;
        case 0x1607b8u: goto label_1607b8;
        case 0x1607bcu: goto label_1607bc;
        case 0x1607c0u: goto label_1607c0;
        case 0x1607c4u: goto label_1607c4;
        case 0x1607c8u: goto label_1607c8;
        case 0x1607ccu: goto label_1607cc;
        case 0x1607d0u: goto label_1607d0;
        case 0x1607d4u: goto label_1607d4;
        case 0x1607d8u: goto label_1607d8;
        case 0x1607dcu: goto label_1607dc;
        case 0x1607e0u: goto label_1607e0;
        case 0x1607e4u: goto label_1607e4;
        case 0x1607e8u: goto label_1607e8;
        case 0x1607ecu: goto label_1607ec;
        case 0x1607f0u: goto label_1607f0;
        case 0x1607f4u: goto label_1607f4;
        case 0x1607f8u: goto label_1607f8;
        case 0x1607fcu: goto label_1607fc;
        case 0x160800u: goto label_160800;
        case 0x160804u: goto label_160804;
        case 0x160808u: goto label_160808;
        case 0x16080cu: goto label_16080c;
        case 0x160810u: goto label_160810;
        case 0x160814u: goto label_160814;
        case 0x160818u: goto label_160818;
        case 0x16081cu: goto label_16081c;
        case 0x160820u: goto label_160820;
        case 0x160824u: goto label_160824;
        case 0x160828u: goto label_160828;
        case 0x16082cu: goto label_16082c;
        case 0x160830u: goto label_160830;
        case 0x160834u: goto label_160834;
        case 0x160838u: goto label_160838;
        case 0x16083cu: goto label_16083c;
        case 0x160840u: goto label_160840;
        case 0x160844u: goto label_160844;
        case 0x160848u: goto label_160848;
        case 0x16084cu: goto label_16084c;
        case 0x160850u: goto label_160850;
        case 0x160854u: goto label_160854;
        case 0x160858u: goto label_160858;
        case 0x16085cu: goto label_16085c;
        case 0x160860u: goto label_160860;
        case 0x160864u: goto label_160864;
        case 0x160868u: goto label_160868;
        case 0x16086cu: goto label_16086c;
        case 0x160870u: goto label_160870;
        case 0x160874u: goto label_160874;
        case 0x160878u: goto label_160878;
        case 0x16087cu: goto label_16087c;
        case 0x160880u: goto label_160880;
        case 0x160884u: goto label_160884;
        case 0x160888u: goto label_160888;
        case 0x16088cu: goto label_16088c;
        case 0x160890u: goto label_160890;
        case 0x160894u: goto label_160894;
        case 0x160898u: goto label_160898;
        case 0x16089cu: goto label_16089c;
        case 0x1608a0u: goto label_1608a0;
        case 0x1608a4u: goto label_1608a4;
        case 0x1608a8u: goto label_1608a8;
        case 0x1608acu: goto label_1608ac;
        case 0x1608b0u: goto label_1608b0;
        case 0x1608b4u: goto label_1608b4;
        case 0x1608b8u: goto label_1608b8;
        case 0x1608bcu: goto label_1608bc;
        case 0x1608c0u: goto label_1608c0;
        case 0x1608c4u: goto label_1608c4;
        case 0x1608c8u: goto label_1608c8;
        case 0x1608ccu: goto label_1608cc;
        case 0x1608d0u: goto label_1608d0;
        case 0x1608d4u: goto label_1608d4;
        case 0x1608d8u: goto label_1608d8;
        case 0x1608dcu: goto label_1608dc;
        case 0x1608e0u: goto label_1608e0;
        case 0x1608e4u: goto label_1608e4;
        case 0x1608e8u: goto label_1608e8;
        case 0x1608ecu: goto label_1608ec;
        case 0x1608f0u: goto label_1608f0;
        case 0x1608f4u: goto label_1608f4;
        case 0x1608f8u: goto label_1608f8;
        case 0x1608fcu: goto label_1608fc;
        case 0x160900u: goto label_160900;
        case 0x160904u: goto label_160904;
        case 0x160908u: goto label_160908;
        case 0x16090cu: goto label_16090c;
        case 0x160910u: goto label_160910;
        case 0x160914u: goto label_160914;
        case 0x160918u: goto label_160918;
        case 0x16091cu: goto label_16091c;
        case 0x160920u: goto label_160920;
        case 0x160924u: goto label_160924;
        case 0x160928u: goto label_160928;
        case 0x16092cu: goto label_16092c;
        case 0x160930u: goto label_160930;
        case 0x160934u: goto label_160934;
        case 0x160938u: goto label_160938;
        case 0x16093cu: goto label_16093c;
        case 0x160940u: goto label_160940;
        case 0x160944u: goto label_160944;
        case 0x160948u: goto label_160948;
        case 0x16094cu: goto label_16094c;
        case 0x160950u: goto label_160950;
        case 0x160954u: goto label_160954;
        case 0x160958u: goto label_160958;
        case 0x16095cu: goto label_16095c;
        case 0x160960u: goto label_160960;
        case 0x160964u: goto label_160964;
        case 0x160968u: goto label_160968;
        case 0x16096cu: goto label_16096c;
        case 0x160970u: goto label_160970;
        case 0x160974u: goto label_160974;
        case 0x160978u: goto label_160978;
        case 0x16097cu: goto label_16097c;
        case 0x160980u: goto label_160980;
        case 0x160984u: goto label_160984;
        case 0x160988u: goto label_160988;
        case 0x16098cu: goto label_16098c;
        case 0x160990u: goto label_160990;
        case 0x160994u: goto label_160994;
        case 0x160998u: goto label_160998;
        case 0x16099cu: goto label_16099c;
        case 0x1609a0u: goto label_1609a0;
        case 0x1609a4u: goto label_1609a4;
        case 0x1609a8u: goto label_1609a8;
        case 0x1609acu: goto label_1609ac;
        case 0x1609b0u: goto label_1609b0;
        case 0x1609b4u: goto label_1609b4;
        case 0x1609b8u: goto label_1609b8;
        case 0x1609bcu: goto label_1609bc;
        case 0x1609c0u: goto label_1609c0;
        case 0x1609c4u: goto label_1609c4;
        case 0x1609c8u: goto label_1609c8;
        case 0x1609ccu: goto label_1609cc;
        case 0x1609d0u: goto label_1609d0;
        case 0x1609d4u: goto label_1609d4;
        case 0x1609d8u: goto label_1609d8;
        case 0x1609dcu: goto label_1609dc;
        case 0x1609e0u: goto label_1609e0;
        case 0x1609e4u: goto label_1609e4;
        case 0x1609e8u: goto label_1609e8;
        case 0x1609ecu: goto label_1609ec;
        case 0x1609f0u: goto label_1609f0;
        case 0x1609f4u: goto label_1609f4;
        case 0x1609f8u: goto label_1609f8;
        case 0x1609fcu: goto label_1609fc;
        case 0x160a00u: goto label_160a00;
        case 0x160a04u: goto label_160a04;
        case 0x160a08u: goto label_160a08;
        case 0x160a0cu: goto label_160a0c;
        case 0x160a10u: goto label_160a10;
        case 0x160a14u: goto label_160a14;
        case 0x160a18u: goto label_160a18;
        case 0x160a1cu: goto label_160a1c;
        case 0x160a20u: goto label_160a20;
        case 0x160a24u: goto label_160a24;
        case 0x160a28u: goto label_160a28;
        case 0x160a2cu: goto label_160a2c;
        case 0x160a30u: goto label_160a30;
        case 0x160a34u: goto label_160a34;
        case 0x160a38u: goto label_160a38;
        case 0x160a3cu: goto label_160a3c;
        case 0x160a40u: goto label_160a40;
        case 0x160a44u: goto label_160a44;
        case 0x160a48u: goto label_160a48;
        case 0x160a4cu: goto label_160a4c;
        case 0x160a50u: goto label_160a50;
        case 0x160a54u: goto label_160a54;
        case 0x160a58u: goto label_160a58;
        case 0x160a5cu: goto label_160a5c;
        case 0x160a60u: goto label_160a60;
        case 0x160a64u: goto label_160a64;
        case 0x160a68u: goto label_160a68;
        case 0x160a6cu: goto label_160a6c;
        case 0x160a70u: goto label_160a70;
        case 0x160a74u: goto label_160a74;
        case 0x160a78u: goto label_160a78;
        case 0x160a7cu: goto label_160a7c;
        case 0x160a80u: goto label_160a80;
        case 0x160a84u: goto label_160a84;
        case 0x160a88u: goto label_160a88;
        case 0x160a8cu: goto label_160a8c;
        case 0x160a90u: goto label_160a90;
        case 0x160a94u: goto label_160a94;
        case 0x160a98u: goto label_160a98;
        case 0x160a9cu: goto label_160a9c;
        case 0x160aa0u: goto label_160aa0;
        case 0x160aa4u: goto label_160aa4;
        case 0x160aa8u: goto label_160aa8;
        case 0x160aacu: goto label_160aac;
        case 0x160ab0u: goto label_160ab0;
        case 0x160ab4u: goto label_160ab4;
        case 0x160ab8u: goto label_160ab8;
        case 0x160abcu: goto label_160abc;
        case 0x160ac0u: goto label_160ac0;
        case 0x160ac4u: goto label_160ac4;
        case 0x160ac8u: goto label_160ac8;
        case 0x160accu: goto label_160acc;
        case 0x160ad0u: goto label_160ad0;
        case 0x160ad4u: goto label_160ad4;
        case 0x160ad8u: goto label_160ad8;
        case 0x160adcu: goto label_160adc;
        case 0x160ae0u: goto label_160ae0;
        case 0x160ae4u: goto label_160ae4;
        case 0x160ae8u: goto label_160ae8;
        case 0x160aecu: goto label_160aec;
        case 0x160af0u: goto label_160af0;
        case 0x160af4u: goto label_160af4;
        case 0x160af8u: goto label_160af8;
        case 0x160afcu: goto label_160afc;
        case 0x160b00u: goto label_160b00;
        case 0x160b04u: goto label_160b04;
        case 0x160b08u: goto label_160b08;
        case 0x160b0cu: goto label_160b0c;
        case 0x160b10u: goto label_160b10;
        case 0x160b14u: goto label_160b14;
        case 0x160b18u: goto label_160b18;
        case 0x160b1cu: goto label_160b1c;
        case 0x160b20u: goto label_160b20;
        case 0x160b24u: goto label_160b24;
        case 0x160b28u: goto label_160b28;
        case 0x160b2cu: goto label_160b2c;
        case 0x160b30u: goto label_160b30;
        case 0x160b34u: goto label_160b34;
        case 0x160b38u: goto label_160b38;
        case 0x160b3cu: goto label_160b3c;
        case 0x160b40u: goto label_160b40;
        case 0x160b44u: goto label_160b44;
        case 0x160b48u: goto label_160b48;
        case 0x160b4cu: goto label_160b4c;
        case 0x160b50u: goto label_160b50;
        case 0x160b54u: goto label_160b54;
        case 0x160b58u: goto label_160b58;
        case 0x160b5cu: goto label_160b5c;
        case 0x160b60u: goto label_160b60;
        case 0x160b64u: goto label_160b64;
        case 0x160b68u: goto label_160b68;
        case 0x160b6cu: goto label_160b6c;
        case 0x160b70u: goto label_160b70;
        case 0x160b74u: goto label_160b74;
        case 0x160b78u: goto label_160b78;
        case 0x160b7cu: goto label_160b7c;
        case 0x160b80u: goto label_160b80;
        case 0x160b84u: goto label_160b84;
        case 0x160b88u: goto label_160b88;
        case 0x160b8cu: goto label_160b8c;
        default: break;
    }

    ctx->pc = 0x1601d8u;

label_1601d8:
    // 0x1601d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1601dc:
    // 0x1601dc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1601e0:
    // 0x1601e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1601e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1601e4:
    // 0x1601e4: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1601e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_1601e8:
    // 0x1601e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1601e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1601ec:
    // 0x1601ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1601ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1601f0:
    // 0x1601f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1601f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1601f4:
    // 0x1601f4: 0x4400260  bltz        $v0, . + 4 + (0x260 << 2)
label_1601f8:
    if (ctx->pc == 0x1601F8u) {
        ctx->pc = 0x1601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601F4u;
        // 0x1601f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601FCu;
        goto label_1601fc;
    }
    ctx->pc = 0x1601F4u;
    {
        const bool branch_taken_0x1601f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601F4u;
        // 0x1601f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601f4) {
            ctx->pc = 0x160B78u;
            goto label_160b78;
        }
    }
    ctx->pc = 0x1601FCu;
label_1601fc:
    // 0x1601fc: 0xc0584a2  jal         func_161288
label_160200:
    if (ctx->pc == 0x160200u) {
        ctx->pc = 0x160204u;
        goto label_160204;
    }
    ctx->pc = 0x1601FCu;
    SET_GPR_U32(ctx, 31, 0x160204u);
    ctx->pc = 0x161288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161288u, 0x1601FCu, 0x160204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160204u;
label_160204:
    // 0x160204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x160204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160208:
    // 0x160208: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_16020c:
    if (ctx->pc == 0x16020Cu) {
        ctx->pc = 0x16020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160208u;
        // 0x16020c: 0x86030050  lh          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160210u;
        goto label_160210;
    }
    ctx->pc = 0x160208u;
    {
        const bool branch_taken_0x160208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x160208) {
            ctx->pc = 0x16020Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160208u;
            // 0x16020c: 0x86030050  lh          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160220u;
            goto label_160220;
        }
    }
    ctx->pc = 0x160210u;
label_160210:
    // 0x160210: 0x92220058  lbu         $v0, 0x58($s1)
    ctx->pc = 0x160210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_160214:
    // 0x160214: 0x54400259  bnel        $v0, $zero, . + 4 + (0x259 << 2)
label_160218:
    if (ctx->pc == 0x160218u) {
        ctx->pc = 0x160218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160214u;
        // 0x160218: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16021Cu;
        goto label_16021c;
    }
    ctx->pc = 0x160214u;
    {
        const bool branch_taken_0x160214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160214) {
            ctx->pc = 0x160218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160214u;
            // 0x160218: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B7Cu;
            goto label_160b7c;
        }
    }
    ctx->pc = 0x16021Cu;
label_16021c:
    // 0x16021c: 0x86030050  lh          $v1, 0x50($s0)
    ctx->pc = 0x16021cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_160220:
    // 0x160220: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x160220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_160224:
    // 0x160224: 0x10400248  beqz        $v0, . + 4 + (0x248 << 2)
label_160228:
    if (ctx->pc == 0x160228u) {
        ctx->pc = 0x160228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160224u;
        // 0x160228: 0x96050050  lhu         $a1, 0x50($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16022Cu;
        goto label_16022c;
    }
    ctx->pc = 0x160224u;
    {
        const bool branch_taken_0x160224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160224u;
        // 0x160228: 0x96050050  lhu         $a1, 0x50($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160224) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16022Cu;
label_16022c:
    // 0x16022c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_160230:
    // 0x160230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_160234:
    // 0x160234: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x160234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
label_160238:
    // 0x160238: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16023c:
    // 0x16023c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_160240:
    // 0x160240: 0x800008  jr          $a0
label_160244:
    if (ctx->pc == 0x160244u) {
        ctx->pc = 0x160248u;
        goto label_160248;
    }
    ctx->pc = 0x160240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160248u: goto label_160248;
            case 0x160334u: goto label_160334;
            case 0x1603B8u: goto label_1603b8;
            case 0x1603C0u: goto label_1603c0;
            case 0x160448u: goto label_160448;
            case 0x1605F0u: goto label_1605f0;
            case 0x160654u: goto label_160654;
            case 0x160704u: goto label_160704;
            case 0x160738u: goto label_160738;
            case 0x1607A8u: goto label_1607a8;
            case 0x16080Cu: goto label_16080c;
            case 0x160894u: goto label_160894;
            case 0x16090Cu: goto label_16090c;
            case 0x160924u: goto label_160924;
            case 0x16093Cu: goto label_16093c;
            case 0x1609C0u: goto label_1609c0;
            case 0x1609D8u: goto label_1609d8;
            case 0x160A14u: goto label_160a14;
            case 0x160ABCu: goto label_160abc;
            case 0x160AF8u: goto label_160af8;
            case 0x160B48u: goto label_160b48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x160248u;
label_160248:
    // 0x160248: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x160248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
label_16024c:
    // 0x16024c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_160250:
    // 0x160250: 0x8cc27a78  lw          $v0, 0x7A78($a2)
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31352)));
label_160254:
    // 0x160254: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x160254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_160258:
    // 0x160258: 0x24c97a78  addiu       $t1, $a2, 0x7A78
    ctx->pc = 0x160258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 31352));
label_16025c:
    // 0x16025c: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
label_160260:
    // 0x160260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x160260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_160264:
    // 0x160264: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_160268:
    // 0x160268: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x160268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_16026c:
    // 0x16026c: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x16026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_160270:
    // 0x160270: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x160270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_160274:
    // 0x160274: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x160274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_160278:
    // 0x160278: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x160278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_16027c:
    // 0x16027c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x16027cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_160280:
    // 0x160280: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x160280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_160284:
    // 0x160284: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x160284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_160288:
    // 0x160288: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x160288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_16028c:
    // 0x16028c: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x16028cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_160290:
    // 0x160290: 0xacc27a78  sw          $v0, 0x7A78($a2)
    ctx->pc = 0x160290u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31352), GPR_U32(ctx, 2));
label_160294:
    // 0x160294: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_160298:
    // 0x160298: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16029c:
    // 0x16029c: 0x0  nop
    ctx->pc = 0x16029cu;
    // NOP
label_1602a0:
    // 0x1602a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1602a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1602a4:
    // 0x1602a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1602a8:
    if (ctx->pc == 0x1602A8u) {
        ctx->pc = 0x1602A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602A4u;
        // 0x1602a8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602ACu;
        goto label_1602ac;
    }
    ctx->pc = 0x1602A4u;
    {
        const bool branch_taken_0x1602a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602A4u;
        // 0x1602a8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602a4) {
            ctx->pc = 0x1602BCu;
            goto label_1602bc;
        }
    }
    ctx->pc = 0x1602ACu;
label_1602ac:
    // 0x1602ac: 0xa040005d  sb          $zero, 0x5D($v0)
    ctx->pc = 0x1602acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 93), (uint8_t)GPR_U32(ctx, 0));
label_1602b0:
    // 0x1602b0: 0xa040005a  sb          $zero, 0x5A($v0)
    ctx->pc = 0x1602b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 90), (uint8_t)GPR_U32(ctx, 0));
label_1602b4:
    // 0x1602b4: 0xa040005b  sb          $zero, 0x5B($v0)
    ctx->pc = 0x1602b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 91), (uint8_t)GPR_U32(ctx, 0));
label_1602b8:
    // 0x1602b8: 0xa040005c  sb          $zero, 0x5C($v0)
    ctx->pc = 0x1602b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 0));
label_1602bc:
    // 0x1602bc: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_1602c0:
    if (ctx->pc == 0x1602C0u) {
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602C4u;
        goto label_1602c4;
    }
    ctx->pc = 0x1602BCu;
    {
        const bool branch_taken_0x1602bc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602bc) {
            ctx->pc = 0x1602A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1602a0;
        }
    }
    ctx->pc = 0x1602C4u;
label_1602c4:
    // 0x1602c4: 0x92020edc  lbu         $v0, 0xEDC($s0)
    ctx->pc = 0x1602c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3804)));
label_1602c8:
    // 0x1602c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1602c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1602cc:
    // 0x1602cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1602d0:
    if (ctx->pc == 0x1602D0u) {
        ctx->pc = 0x1602D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602CCu;
        // 0x1602d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602D4u;
        goto label_1602d4;
    }
    ctx->pc = 0x1602CCu;
    {
        const bool branch_taken_0x1602cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602CCu;
        // 0x1602d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602cc) {
            ctx->pc = 0x1602DCu;
            goto label_1602dc;
        }
    }
    ctx->pc = 0x1602D4u;
label_1602d4:
    // 0x1602d4: 0x1000021b  b           . + 4 + (0x21B << 2)
label_1602d8:
    if (ctx->pc == 0x1602D8u) {
        ctx->pc = 0x1602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D4u;
        // 0x1602d8: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602DCu;
        goto label_1602dc;
    }
    ctx->pc = 0x1602D4u;
    {
        const bool branch_taken_0x1602d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D4u;
        // 0x1602d8: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602d4) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1602DCu;
label_1602dc:
    // 0x1602dc: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x1602dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_1602e0:
    // 0x1602e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1602e4:
    if (ctx->pc == 0x1602E4u) {
        ctx->pc = 0x1602E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602E0u;
        // 0x1602e4: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602E8u;
        goto label_1602e8;
    }
    ctx->pc = 0x1602E0u;
    {
        const bool branch_taken_0x1602e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1602E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602E0u;
        // 0x1602e4: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602e0) {
            ctx->pc = 0x160314u;
            goto label_160314;
        }
    }
    ctx->pc = 0x1602E8u;
label_1602e8:
    // 0x1602e8: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_1602ec:
    // 0x1602ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1602ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602f0:
    // 0x1602f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1602f4:
    // 0x1602f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1602f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602f8:
    // 0x1602f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1602f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602fc:
    // 0x1602fc: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_160300:
    // 0x160300: 0xc0c1c82  jal         func_307208
label_160304:
    if (ctx->pc == 0x160304u) {
        ctx->pc = 0x160304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160300u;
        // 0x160304: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160308u;
        goto label_160308;
    }
    ctx->pc = 0x160300u;
    SET_GPR_U32(ctx, 31, 0x160308u);
    ctx->pc = 0x160304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160300u;
    // 0x160304: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x160300u, 0x160308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160308u;
label_160308:
    // 0x160308: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_16030c:
    // 0x16030c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160310:
    // 0x160310: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x160310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160314:
    // 0x160314: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160318:
    // 0x160318: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x160318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_16031c:
    // 0x16031c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16031cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_160320:
    // 0x160320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_160324:
    // 0x160324: 0x10400208  beqz        $v0, . + 4 + (0x208 << 2)
label_160328:
    if (ctx->pc == 0x160328u) {
        ctx->pc = 0x160328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160324u;
        // 0x160328: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16032Cu;
        goto label_16032c;
    }
    ctx->pc = 0x160324u;
    {
        const bool branch_taken_0x160324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160324u;
        // 0x160328: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160324) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16032Cu;
label_16032c:
    // 0x16032c: 0x10000205  b           . + 4 + (0x205 << 2)
label_160330:
    if (ctx->pc == 0x160330u) {
        ctx->pc = 0x160330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16032Cu;
        // 0x160330: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160334u;
        goto label_160334;
    }
    ctx->pc = 0x16032Cu;
    {
        const bool branch_taken_0x16032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16032Cu;
        // 0x160330: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16032c) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x160334u;
label_160334:
    // 0x160334: 0x5220001e  beql        $s1, $zero, . + 4 + (0x1E << 2)
label_160338:
    if (ctx->pc == 0x160338u) {
        ctx->pc = 0x160338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160334u;
        // 0x160338: 0x96020050  lhu         $v0, 0x50($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16033Cu;
        goto label_16033c;
    }
    ctx->pc = 0x160334u;
    {
        const bool branch_taken_0x160334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x160334) {
            ctx->pc = 0x160338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160334u;
            // 0x160338: 0x96020050  lhu         $v0, 0x50($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1603B0u;
            goto label_1603b0;
        }
    }
    ctx->pc = 0x16033Cu;
label_16033c:
    // 0x16033c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x16033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_160340:
    // 0x160340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160344:
    // 0x160344: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_160348:
    if (ctx->pc == 0x160348u) {
        ctx->pc = 0x16034Cu;
        goto label_16034c;
    }
    ctx->pc = 0x160344u;
    {
        const bool branch_taken_0x160344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160344) {
            ctx->pc = 0x160358u;
            goto label_160358;
        }
    }
    ctx->pc = 0x16034Cu;
label_16034c:
    // 0x16034c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_160350:
    // 0x160350: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_160354:
    if (ctx->pc == 0x160354u) {
        ctx->pc = 0x160354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160350u;
        // 0x160354: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160358u;
        goto label_160358;
    }
    ctx->pc = 0x160350u;
    {
        const bool branch_taken_0x160350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160350) {
            ctx->pc = 0x160354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160350u;
            // 0x160354: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160388u;
            goto label_160388;
        }
    }
    ctx->pc = 0x160358u;
label_160358:
    // 0x160358: 0xc0b6dac  jal         func_2DB6B0
label_16035c:
    if (ctx->pc == 0x16035Cu) {
        ctx->pc = 0x160360u;
        goto label_160360;
    }
    ctx->pc = 0x160358u;
    SET_GPR_U32(ctx, 31, 0x160360u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x160358u, 0x160360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160360u;
label_160360:
    // 0x160360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160364:
    // 0x160364: 0xc042e22  jal         func_10B888
label_160368:
    if (ctx->pc == 0x160368u) {
        ctx->pc = 0x160368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160364u;
        // 0x160368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16036Cu;
        goto label_16036c;
    }
    ctx->pc = 0x160364u;
    SET_GPR_U32(ctx, 31, 0x16036Cu);
    ctx->pc = 0x160368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160364u;
    // 0x160368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x160364u, 0x16036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16036Cu;
label_16036c:
    // 0x16036c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_160370:
    // 0x160370: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x160370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_160374:
    // 0x160374: 0x8c447a78  lw          $a0, 0x7A78($v0)
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_160378:
    // 0x160378: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x160378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_16037c:
    // 0x16037c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16037cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_160380:
    // 0x160380: 0xac447a78  sw          $a0, 0x7A78($v0)
    ctx->pc = 0x160380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31352), GPR_U32(ctx, 4));
label_160384:
    // 0x160384: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x160384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_160388:
    // 0x160388: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x160388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_16038c:
    // 0x16038c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_160390:
    // 0x160390: 0x60f809  jalr        $v1
label_160394:
    if (ctx->pc == 0x160394u) {
        ctx->pc = 0x160394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160390u;
        // 0x160394: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160398u;
        goto label_160398;
    }
    ctx->pc = 0x160390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160398u);
        ctx->pc = 0x160394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160390u;
        // 0x160394: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160390u, 0x160398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160398u;
label_160398:
    // 0x160398: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16039c:
    // 0x16039c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x16039cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1603a0:
    // 0x1603a0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1603a4:
    // 0x1603a4: 0x60f809  jalr        $v1
label_1603a8:
    if (ctx->pc == 0x1603A8u) {
        ctx->pc = 0x1603A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603A4u;
        // 0x1603a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603ACu;
        goto label_1603ac;
    }
    ctx->pc = 0x1603A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1603ACu);
        ctx->pc = 0x1603A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603A4u;
        // 0x1603a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603A4u, 0x1603ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1603ACu;
label_1603ac:
    // 0x1603ac: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x1603acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_1603b0:
    // 0x1603b0: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_1603b4:
    if (ctx->pc == 0x1603B4u) {
        ctx->pc = 0x1603B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B0u;
        // 0x1603b4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603B8u;
        goto label_1603b8;
    }
    ctx->pc = 0x1603B0u;
    {
        const bool branch_taken_0x1603b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B0u;
        // 0x1603b4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603b0) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1603B8u;
label_1603b8:
    // 0x1603b8: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_1603bc:
    if (ctx->pc == 0x1603BCu) {
        ctx->pc = 0x1603BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B8u;
        // 0x1603bc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C0u;
        goto label_1603c0;
    }
    ctx->pc = 0x1603B8u;
    {
        const bool branch_taken_0x1603b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B8u;
        // 0x1603bc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603b8) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1603C0u;
label_1603c0:
    // 0x1603c0: 0xde020ed8  ld          $v0, 0xED8($s0)
    ctx->pc = 0x1603c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 3800)));
label_1603c4:
    // 0x1603c4: 0x34038200  ori         $v1, $zero, 0x8200
    ctx->pc = 0x1603c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
label_1603c8:
    // 0x1603c8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1603c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_1603cc:
    // 0x1603cc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1603ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1603d0:
    // 0x1603d0: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x1603d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
label_1603d4:
    // 0x1603d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1603d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1603d8:
    // 0x1603d8: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
label_1603dc:
    if (ctx->pc == 0x1603DCu) {
        ctx->pc = 0x1603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603D8u;
        // 0x1603dc: 0x92020ed4  lbu         $v0, 0xED4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603E0u;
        goto label_1603e0;
    }
    ctx->pc = 0x1603D8u;
    {
        const bool branch_taken_0x1603d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1603d8) {
            ctx->pc = 0x1603DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1603D8u;
            // 0x1603dc: 0x92020ed4  lbu         $v0, 0xED4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1603ECu;
            goto label_1603ec;
        }
    }
    ctx->pc = 0x1603E0u;
label_1603e0:
    // 0x1603e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1603e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1603e4:
    // 0x1603e4: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_1603e8:
    if (ctx->pc == 0x1603E8u) {
        ctx->pc = 0x1603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E4u;
        // 0x1603e8: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603ECu;
        goto label_1603ec;
    }
    ctx->pc = 0x1603E4u;
    {
        const bool branch_taken_0x1603e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E4u;
        // 0x1603e8: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603e4) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1603ECu;
label_1603ec:
    // 0x1603ec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1603f0:
    if (ctx->pc == 0x1603F0u) {
        ctx->pc = 0x1603F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ECu;
        // 0x1603f0: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603F4u;
        goto label_1603f4;
    }
    ctx->pc = 0x1603ECu;
    {
        const bool branch_taken_0x1603ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1603F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ECu;
        // 0x1603f0: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603ec) {
            ctx->pc = 0x160420u;
            goto label_160420;
        }
    }
    ctx->pc = 0x1603F4u;
label_1603f4:
    // 0x1603f4: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x1603f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_1603f8:
    // 0x1603f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1603f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1603fc:
    // 0x1603fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_160400:
    // 0x160400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160404:
    // 0x160404: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_160408:
    // 0x160408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16040c:
    // 0x16040c: 0xc0c1c82  jal         func_307208
label_160410:
    if (ctx->pc == 0x160410u) {
        ctx->pc = 0x160410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16040Cu;
        // 0x160410: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160414u;
        goto label_160414;
    }
    ctx->pc = 0x16040Cu;
    SET_GPR_U32(ctx, 31, 0x160414u);
    ctx->pc = 0x160410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16040Cu;
    // 0x160410: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x16040Cu, 0x160414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160414u;
label_160414:
    // 0x160414: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160418:
    // 0x160418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16041c:
    // 0x16041c: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x16041cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160420:
    // 0x160420: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160424:
    // 0x160424: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x160424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_160428:
    // 0x160428: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
label_16042c:
    if (ctx->pc == 0x16042Cu) {
        ctx->pc = 0x16042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160428u;
        // 0x16042c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160430u;
        goto label_160430;
    }
    ctx->pc = 0x160428u;
    {
        const bool branch_taken_0x160428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160428u;
        // 0x16042c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160428) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160430u;
label_160430:
    // 0x160430: 0x92030edc  lbu         $v1, 0xEDC($s0)
    ctx->pc = 0x160430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3804)));
label_160434:
    // 0x160434: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x160434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_160438:
    // 0x160438: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x160438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_16043c:
    // 0x16043c: 0xa2000ed4  sb          $zero, 0xED4($s0)
    ctx->pc = 0x16043cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
label_160440:
    // 0x160440: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_160444:
    if (ctx->pc == 0x160444u) {
        ctx->pc = 0x160444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160440u;
        // 0x160444: 0xa2030edc  sb          $v1, 0xEDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3804), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160448u;
        goto label_160448;
    }
    ctx->pc = 0x160440u;
    {
        const bool branch_taken_0x160440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160440u;
        // 0x160444: 0xa2030edc  sb          $v1, 0xEDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3804), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160440) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160448u;
label_160448:
    // 0x160448: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x160448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_16044c:
    // 0x16044c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x16044cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_160450:
    // 0x160450: 0x8c437a7c  lw          $v1, 0x7A7C($v0)
    ctx->pc = 0x160450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31356)));
label_160454:
    // 0x160454: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_160458:
    // 0x160458: 0x146001bb  bnez        $v1, . + 4 + (0x1BB << 2)
label_16045c:
    if (ctx->pc == 0x16045Cu) {
        ctx->pc = 0x16045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160458u;
        // 0x16045c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160460u;
        goto label_160460;
    }
    ctx->pc = 0x160458u;
    {
        const bool branch_taken_0x160458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160458u;
        // 0x16045c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160458) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160460u;
label_160460:
    // 0x160460: 0x122001b9  beqz        $s1, . + 4 + (0x1B9 << 2)
label_160464:
    if (ctx->pc == 0x160464u) {
        ctx->pc = 0x160468u;
        goto label_160468;
    }
    ctx->pc = 0x160460u;
    {
        const bool branch_taken_0x160460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x160460) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160468u;
label_160468:
    // 0x160468: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16046c:
    // 0x16046c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x16046cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_160470:
    // 0x160470: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x160470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_160474:
    // 0x160474: 0x60f809  jalr        $v1
label_160478:
    if (ctx->pc == 0x160478u) {
        ctx->pc = 0x160478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160474u;
        // 0x160478: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16047Cu;
        goto label_16047c;
    }
    ctx->pc = 0x160474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16047Cu);
        ctx->pc = 0x160478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160474u;
        // 0x160478: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160474u, 0x16047Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16047Cu;
label_16047c:
    // 0x16047c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x16047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_160480:
    // 0x160480: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x160480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_160484:
    // 0x160484: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x160484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_160488:
    // 0x160488: 0x60f809  jalr        $v1
label_16048c:
    if (ctx->pc == 0x16048Cu) {
        ctx->pc = 0x16048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160488u;
        // 0x16048c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160490u;
        goto label_160490;
    }
    ctx->pc = 0x160488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160490u);
        ctx->pc = 0x16048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160488u;
        // 0x16048c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160488u, 0x160490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160490u;
label_160490:
    // 0x160490: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_160494:
    // 0x160494: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160498:
    // 0x160498: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_16049c:
    if (ctx->pc == 0x16049Cu) {
        ctx->pc = 0x16049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160498u;
        // 0x16049c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604A0u;
        goto label_1604a0;
    }
    ctx->pc = 0x160498u;
    {
        const bool branch_taken_0x160498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x16049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160498u;
        // 0x16049c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160498) {
            ctx->pc = 0x1604A8u;
            goto label_1604a8;
        }
    }
    ctx->pc = 0x1604A0u;
label_1604a0:
    // 0x1604a0: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_1604a4:
    if (ctx->pc == 0x1604A4u) {
        ctx->pc = 0x1604A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A0u;
        // 0x1604a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604A8u;
        goto label_1604a8;
    }
    ctx->pc = 0x1604A0u;
    {
        const bool branch_taken_0x1604a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A0u;
        // 0x1604a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604a0) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1604A8u;
label_1604a8:
    // 0x1604a8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1604ac:
    if (ctx->pc == 0x1604ACu) {
        ctx->pc = 0x1604ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A8u;
        // 0x1604ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604B0u;
        goto label_1604b0;
    }
    ctx->pc = 0x1604A8u;
    {
        const bool branch_taken_0x1604a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1604ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A8u;
        // 0x1604ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604a8) {
            ctx->pc = 0x1604BCu;
            goto label_1604bc;
        }
    }
    ctx->pc = 0x1604B0u;
label_1604b0:
    // 0x1604b0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1604b4:
    // 0x1604b4: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_1604b8:
    if (ctx->pc == 0x1604B8u) {
        ctx->pc = 0x1604B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604B4u;
        // 0x1604b8: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604BCu;
        goto label_1604bc;
    }
    ctx->pc = 0x1604B4u;
    {
        const bool branch_taken_0x1604b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604B4u;
        // 0x1604b8: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604b4) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1604BCu;
label_1604bc:
    // 0x1604bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1604c0:
    if (ctx->pc == 0x1604C0u) {
        ctx->pc = 0x1604C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604BCu;
        // 0x1604c0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604C4u;
        goto label_1604c4;
    }
    ctx->pc = 0x1604BCu;
    {
        const bool branch_taken_0x1604bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1604C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604BCu;
        // 0x1604c0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604bc) {
            ctx->pc = 0x1604D0u;
            goto label_1604d0;
        }
    }
    ctx->pc = 0x1604C4u;
label_1604c4:
    // 0x1604c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1604c8:
    // 0x1604c8: 0x1000019e  b           . + 4 + (0x19E << 2)
label_1604cc:
    if (ctx->pc == 0x1604CCu) {
        ctx->pc = 0x1604CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C8u;
        // 0x1604cc: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604D0u;
        goto label_1604d0;
    }
    ctx->pc = 0x1604C8u;
    {
        const bool branch_taken_0x1604c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C8u;
        // 0x1604cc: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604c8) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1604D0u;
label_1604d0:
    // 0x1604d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1604d4:
    if (ctx->pc == 0x1604D4u) {
        ctx->pc = 0x1604D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604D0u;
        // 0x1604d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604D8u;
        goto label_1604d8;
    }
    ctx->pc = 0x1604D0u;
    {
        const bool branch_taken_0x1604d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1604D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604D0u;
        // 0x1604d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604d0) {
            ctx->pc = 0x1604E4u;
            goto label_1604e4;
        }
    }
    ctx->pc = 0x1604D8u;
label_1604d8:
    // 0x1604d8: 0xa6040050  sh          $a0, 0x50($s0)
    ctx->pc = 0x1604d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 4));
label_1604dc:
    // 0x1604dc: 0x1000019a  b           . + 4 + (0x19A << 2)
label_1604e0:
    if (ctx->pc == 0x1604E0u) {
        ctx->pc = 0x1604E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604DCu;
        // 0x1604e0: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604E4u;
        goto label_1604e4;
    }
    ctx->pc = 0x1604DCu;
    {
        const bool branch_taken_0x1604dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604DCu;
        // 0x1604e0: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604dc) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1604E4u;
label_1604e4:
    // 0x1604e4: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
label_1604e8:
    if (ctx->pc == 0x1604E8u) {
        ctx->pc = 0x1604E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604E4u;
        // 0x1604e8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604ECu;
        goto label_1604ec;
    }
    ctx->pc = 0x1604E4u;
    {
        const bool branch_taken_0x1604e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1604e4) {
            ctx->pc = 0x1604E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1604E4u;
            // 0x1604e8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160580u;
            goto label_160580;
        }
    }
    ctx->pc = 0x1604ECu;
label_1604ec:
    // 0x1604ec: 0x92020f15  lbu         $v0, 0xF15($s0)
    ctx->pc = 0x1604ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_1604f0:
    // 0x1604f0: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_1604f4:
    if (ctx->pc == 0x1604F4u) {
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604F8u;
        goto label_1604f8;
    }
    ctx->pc = 0x1604F0u;
    {
        const bool branch_taken_0x1604f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f0) {
            ctx->pc = 0x160500u;
            goto label_160500;
        }
    }
    ctx->pc = 0x1604F8u;
label_1604f8:
    // 0x1604f8: 0x10000192  b           . + 4 + (0x192 << 2)
label_1604fc:
    if (ctx->pc == 0x1604FCu) {
        ctx->pc = 0x1604FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F8u;
        // 0x1604fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160500u;
        goto label_160500;
    }
    ctx->pc = 0x1604F8u;
    {
        const bool branch_taken_0x1604f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F8u;
        // 0x1604fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f8) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x160500u;
label_160500:
    // 0x160500: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x160500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_160504:
    // 0x160504: 0xa2020f15  sb          $v0, 0xF15($s0)
    ctx->pc = 0x160504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3861), (uint8_t)GPR_U32(ctx, 2));
label_160508:
    // 0x160508: 0x26050ee8  addiu       $a1, $s0, 0xEE8
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3816));
label_16050c:
    // 0x16050c: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x16050cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
label_160510:
    // 0x160510: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x160510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_160514:
    // 0x160514: 0x92030f15  lbu         $v1, 0xF15($s0)
    ctx->pc = 0x160514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_160518:
    // 0x160518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16051c:
    // 0x16051c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_160520:
    // 0x160520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x160520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_160524:
    // 0x160524: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160528:
    // 0x160528: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x160528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16052c:
    // 0x16052c: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x16052cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
label_160530:
    // 0x160530: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x160530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_160534:
    // 0x160534: 0x92020f15  lbu         $v0, 0xF15($s0)
    ctx->pc = 0x160534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_160538:
    // 0x160538: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x160538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_16053c:
    // 0x16053c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_160540:
    if (ctx->pc == 0x160540u) {
        ctx->pc = 0x160540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16053Cu;
        // 0x160540: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160544u;
        goto label_160544;
    }
    ctx->pc = 0x16053Cu;
    {
        const bool branch_taken_0x16053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16053c) {
            ctx->pc = 0x160540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16053Cu;
            // 0x160540: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16056Cu;
            goto label_16056c;
        }
    }
    ctx->pc = 0x160544u;
label_160544:
    // 0x160544: 0x92020f15  lbu         $v0, 0xF15($s0)
    ctx->pc = 0x160544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_160548:
    // 0x160548: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x160548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16054c:
    // 0x16054c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_160550:
    // 0x160550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160554:
    // 0x160554: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x160554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_160558:
    // 0x160558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16055c:
    // 0x16055c: 0x5064017a  beql        $v1, $a0, . + 4 + (0x17A << 2)
label_160560:
    if (ctx->pc == 0x160560u) {
        ctx->pc = 0x160560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16055Cu;
        // 0x160560: 0xa2120c04  sb          $s2, 0xC04($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3076), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160564u;
        goto label_160564;
    }
    ctx->pc = 0x16055Cu;
    {
        const bool branch_taken_0x16055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16055c) {
            ctx->pc = 0x160560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16055Cu;
            // 0x160560: 0xa2120c04  sb          $s2, 0xC04($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3076), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160564u;
label_160564:
    // 0x160564: 0x10000178  b           . + 4 + (0x178 << 2)
label_160568:
    if (ctx->pc == 0x160568u) {
        ctx->pc = 0x16056Cu;
        goto label_16056c;
    }
    ctx->pc = 0x160564u;
    {
        const bool branch_taken_0x160564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160564) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16056Cu;
label_16056c:
    // 0x16056c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160570:
    // 0x160570: 0x14620175  bne         $v1, $v0, . + 4 + (0x175 << 2)
label_160574:
    if (ctx->pc == 0x160574u) {
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160578u;
        goto label_160578;
    }
    ctx->pc = 0x160570u;
    {
        const bool branch_taken_0x160570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160570) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160578u;
label_160578:
    // 0x160578: 0x10000173  b           . + 4 + (0x173 << 2)
label_16057c:
    if (ctx->pc == 0x16057Cu) {
        ctx->pc = 0x16057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160578u;
        // 0x16057c: 0xa2020794  sb          $v0, 0x794($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1940), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160580u;
        goto label_160580;
    }
    ctx->pc = 0x160578u;
    {
        const bool branch_taken_0x160578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160578u;
        // 0x16057c: 0xa2020794  sb          $v0, 0x794($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1940), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160578) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160580u;
label_160580:
    // 0x160580: 0x10640171  beq         $v1, $a0, . + 4 + (0x171 << 2)
label_160584:
    if (ctx->pc == 0x160584u) {
        ctx->pc = 0x160584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160580u;
        // 0x160584: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160588u;
        goto label_160588;
    }
    ctx->pc = 0x160580u;
    {
        const bool branch_taken_0x160580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x160584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160580u;
        // 0x160584: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160580) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160588u;
label_160588:
    // 0x160588: 0x92020f15  lbu         $v0, 0xF15($s0)
    ctx->pc = 0x160588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_16058c:
    // 0x16058c: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x16058cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
label_160590:
    // 0x160590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160594:
    // 0x160594: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_160598:
    // 0x160598: 0xac440ee8  sw          $a0, 0xEE8($v0)
    ctx->pc = 0x160598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3816), GPR_U32(ctx, 4));
label_16059c:
    // 0x16059c: 0x92030f15  lbu         $v1, 0xF15($s0)
    ctx->pc = 0x16059cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_1605a0:
    // 0x1605a0: 0x92240064  lbu         $a0, 0x64($s1)
    ctx->pc = 0x1605a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_1605a4:
    // 0x1605a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1605a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1605a8:
    // 0x1605a8: 0xa0640f0c  sb          $a0, 0xF0C($v1)
    ctx->pc = 0x1605a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3852), (uint8_t)GPR_U32(ctx, 4));
label_1605ac:
    // 0x1605ac: 0x92020f15  lbu         $v0, 0xF15($s0)
    ctx->pc = 0x1605acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
label_1605b0:
    // 0x1605b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1605b4:
    // 0x1605b4: 0xa2020f15  sb          $v0, 0xF15($s0)
    ctx->pc = 0x1605b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3861), (uint8_t)GPR_U32(ctx, 2));
label_1605b8:
    // 0x1605b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1605b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1605bc:
    // 0x1605bc: 0x10920006  beq         $a0, $s2, . + 4 + (0x6 << 2)
label_1605c0:
    if (ctx->pc == 0x1605C0u) {
        ctx->pc = 0x1605C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605BCu;
        // 0x1605c0: 0xae04004c  sw          $a0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605C4u;
        goto label_1605c4;
    }
    ctx->pc = 0x1605BCu;
    {
        const bool branch_taken_0x1605bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x1605C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605BCu;
        // 0x1605c0: 0xae04004c  sw          $a0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605bc) {
            ctx->pc = 0x1605D8u;
            goto label_1605d8;
        }
    }
    ctx->pc = 0x1605C4u;
label_1605c4:
    // 0x1605c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1605c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1605c8:
    // 0x1605c8: 0x5082015f  beql        $a0, $v0, . + 4 + (0x15F << 2)
label_1605cc:
    if (ctx->pc == 0x1605CCu) {
        ctx->pc = 0x1605CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605C8u;
        // 0x1605cc: 0xa2120c04  sb          $s2, 0xC04($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3076), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605D0u;
        goto label_1605d0;
    }
    ctx->pc = 0x1605C8u;
    {
        const bool branch_taken_0x1605c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1605c8) {
            ctx->pc = 0x1605CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1605C8u;
            // 0x1605cc: 0xa2120c04  sb          $s2, 0xC04($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3076), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1605D0u;
label_1605d0:
    // 0x1605d0: 0x1000015d  b           . + 4 + (0x15D << 2)
label_1605d4:
    if (ctx->pc == 0x1605D4u) {
        ctx->pc = 0x1605D8u;
        goto label_1605d8;
    }
    ctx->pc = 0x1605D0u;
    {
        const bool branch_taken_0x1605d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605d0) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1605D8u;
label_1605d8:
    // 0x1605d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1605d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1605dc:
    // 0x1605dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1605dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1605e0:
    // 0x1605e0: 0x50620159  beql        $v1, $v0, . + 4 + (0x159 << 2)
label_1605e4:
    if (ctx->pc == 0x1605E4u) {
        ctx->pc = 0x1605E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605E0u;
        // 0x1605e4: 0xa2040374  sb          $a0, 0x374($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605E8u;
        goto label_1605e8;
    }
    ctx->pc = 0x1605E0u;
    {
        const bool branch_taken_0x1605e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1605e0) {
            ctx->pc = 0x1605E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1605E0u;
            // 0x1605e4: 0xa2040374  sb          $a0, 0x374($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1605E8u;
label_1605e8:
    // 0x1605e8: 0x10000157  b           . + 4 + (0x157 << 2)
label_1605ec:
    if (ctx->pc == 0x1605ECu) {
        ctx->pc = 0x1605F0u;
        goto label_1605f0;
    }
    ctx->pc = 0x1605E8u;
    {
        const bool branch_taken_0x1605e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605e8) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1605F0u;
label_1605f0:
    // 0x1605f0: 0x92020edc  lbu         $v0, 0xEDC($s0)
    ctx->pc = 0x1605f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3804)));
label_1605f4:
    // 0x1605f4: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
label_1605f8:
    // 0x1605f8: 0x92030ed4  lbu         $v1, 0xED4($s0)
    ctx->pc = 0x1605f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_1605fc:
    // 0x1605fc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_160600:
    // 0x160600: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_160604:
    if (ctx->pc == 0x160604u) {
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0xa2020edc  sb          $v0, 0xEDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3804), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160608u;
        goto label_160608;
    }
    ctx->pc = 0x160600u;
    {
        const bool branch_taken_0x160600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0xa2020edc  sb          $v0, 0xEDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3804), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160600) {
            ctx->pc = 0x160634u;
            goto label_160634;
        }
    }
    ctx->pc = 0x160608u;
label_160608:
    // 0x160608: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_16060c:
    // 0x16060c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160610:
    // 0x160610: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_160614:
    // 0x160614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160618:
    // 0x160618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16061c:
    // 0x16061c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_160620:
    // 0x160620: 0xc0c1c82  jal         func_307208
label_160624:
    if (ctx->pc == 0x160624u) {
        ctx->pc = 0x160624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160620u;
        // 0x160624: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160628u;
        goto label_160628;
    }
    ctx->pc = 0x160620u;
    SET_GPR_U32(ctx, 31, 0x160628u);
    ctx->pc = 0x160624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160620u;
    // 0x160624: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x160620u, 0x160628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160628u;
label_160628:
    // 0x160628: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_16062c:
    // 0x16062c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160630:
    // 0x160630: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x160630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160634:
    // 0x160634: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160638:
    // 0x160638: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x160638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_16063c:
    // 0x16063c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_160640:
    // 0x160640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_160644:
    // 0x160644: 0x10400140  beqz        $v0, . + 4 + (0x140 << 2)
label_160648:
    if (ctx->pc == 0x160648u) {
        ctx->pc = 0x160648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160644u;
        // 0x160648: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16064Cu;
        goto label_16064c;
    }
    ctx->pc = 0x160644u;
    {
        const bool branch_taken_0x160644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160644u;
        // 0x160648: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160644) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16064Cu;
label_16064c:
    // 0x16064c: 0x1000013d  b           . + 4 + (0x13D << 2)
label_160650:
    if (ctx->pc == 0x160650u) {
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160654u;
        goto label_160654;
    }
    ctx->pc = 0x16064Cu;
    {
        const bool branch_taken_0x16064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16064c) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x160654u;
label_160654:
    // 0x160654: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_160658:
    // 0x160658: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16065c:
    // 0x16065c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_160660:
    if (ctx->pc == 0x160660u) {
        ctx->pc = 0x160660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16065Cu;
        // 0x160660: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160664u;
        goto label_160664;
    }
    ctx->pc = 0x16065Cu;
    {
        const bool branch_taken_0x16065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x160660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16065Cu;
        // 0x160660: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16065c) {
            ctx->pc = 0x160670u;
            goto label_160670;
        }
    }
    ctx->pc = 0x160664u;
label_160664:
    // 0x160664: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x160664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
label_160668:
    // 0x160668: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x160668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_16066c:
    // 0x16066c: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x16066cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
label_160670:
    // 0x160670: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_160674:
    if (ctx->pc == 0x160674u) {
        ctx->pc = 0x160674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160670u;
        // 0x160674: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160678u;
        goto label_160678;
    }
    ctx->pc = 0x160670u;
    {
        const bool branch_taken_0x160670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x160674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160670u;
        // 0x160674: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160670) {
            ctx->pc = 0x1606F8u;
            goto label_1606f8;
        }
    }
    ctx->pc = 0x160678u;
label_160678:
    // 0x160678: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_16067c:
    // 0x16067c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_160680:
    if (ctx->pc == 0x160680u) {
        ctx->pc = 0x160684u;
        goto label_160684;
    }
    ctx->pc = 0x16067Cu;
    {
        const bool branch_taken_0x16067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16067c) {
            ctx->pc = 0x1606B0u;
            goto label_1606b0;
        }
    }
    ctx->pc = 0x160684u;
label_160684:
    // 0x160684: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x160684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_160688:
    // 0x160688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16068c:
    if (ctx->pc == 0x16068Cu) {
        ctx->pc = 0x16068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160688u;
        // 0x16068c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160690u;
        goto label_160690;
    }
    ctx->pc = 0x160688u;
    {
        const bool branch_taken_0x160688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160688u;
        // 0x16068c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160688) {
            ctx->pc = 0x1606A0u;
            goto label_1606a0;
        }
    }
    ctx->pc = 0x160690u;
label_160690:
    // 0x160690: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_160694:
    if (ctx->pc == 0x160694u) {
        ctx->pc = 0x160698u;
        goto label_160698;
    }
    ctx->pc = 0x160690u;
    {
        const bool branch_taken_0x160690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160690) {
            ctx->pc = 0x1606B0u;
            goto label_1606b0;
        }
    }
    ctx->pc = 0x160698u;
label_160698:
    // 0x160698: 0x10000011  b           . + 4 + (0x11 << 2)
label_16069c:
    if (ctx->pc == 0x16069Cu) {
        ctx->pc = 0x16069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160698u;
        // 0x16069c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606A0u;
        goto label_1606a0;
    }
    ctx->pc = 0x160698u;
    {
        const bool branch_taken_0x160698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160698u;
        // 0x16069c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160698) {
            ctx->pc = 0x1606E0u;
            goto label_1606e0;
        }
    }
    ctx->pc = 0x1606A0u;
label_1606a0:
    // 0x1606a0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_1606a4:
    if (ctx->pc == 0x1606A4u) {
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606A8u;
        goto label_1606a8;
    }
    ctx->pc = 0x1606A0u;
    {
        const bool branch_taken_0x1606a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606a0) {
            ctx->pc = 0x1606CCu;
            goto label_1606cc;
        }
    }
    ctx->pc = 0x1606A8u;
label_1606a8:
    // 0x1606a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1606ac:
    if (ctx->pc == 0x1606ACu) {
        ctx->pc = 0x1606ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A8u;
        // 0x1606ac: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606B0u;
        goto label_1606b0;
    }
    ctx->pc = 0x1606A8u;
    {
        const bool branch_taken_0x1606a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A8u;
        // 0x1606ac: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606a8) {
            ctx->pc = 0x1606E4u;
            goto label_1606e4;
        }
    }
    ctx->pc = 0x1606B0u;
label_1606b0:
    // 0x1606b0: 0xc0b6dac  jal         func_2DB6B0
label_1606b4:
    if (ctx->pc == 0x1606B4u) {
        ctx->pc = 0x1606B8u;
        goto label_1606b8;
    }
    ctx->pc = 0x1606B0u;
    SET_GPR_U32(ctx, 31, 0x1606B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1606B0u, 0x1606B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606B8u;
label_1606b8:
    // 0x1606b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1606bc:
    // 0x1606bc: 0xc042e22  jal         func_10B888
label_1606c0:
    if (ctx->pc == 0x1606C0u) {
        ctx->pc = 0x1606C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606BCu;
        // 0x1606c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606C4u;
        goto label_1606c4;
    }
    ctx->pc = 0x1606BCu;
    SET_GPR_U32(ctx, 31, 0x1606C4u);
    ctx->pc = 0x1606C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606BCu;
    // 0x1606c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x1606BCu, 0x1606C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606C4u;
label_1606c4:
    // 0x1606c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1606c8:
    if (ctx->pc == 0x1606C8u) {
        ctx->pc = 0x1606C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606C4u;
        // 0x1606c8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606CCu;
        goto label_1606cc;
    }
    ctx->pc = 0x1606C4u;
    {
        const bool branch_taken_0x1606c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606C4u;
        // 0x1606c8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606c4) {
            ctx->pc = 0x1606E0u;
            goto label_1606e0;
        }
    }
    ctx->pc = 0x1606CCu;
label_1606cc:
    // 0x1606cc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1606ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1606d0:
    // 0x1606d0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1606d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
label_1606d4:
    // 0x1606d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1606d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1606d8:
    // 0x1606d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1606dc:
    if (ctx->pc == 0x1606DCu) {
        ctx->pc = 0x1606DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606D8u;
        // 0x1606dc: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606E0u;
        goto label_1606e0;
    }
    ctx->pc = 0x1606D8u;
    {
        const bool branch_taken_0x1606d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606D8u;
        // 0x1606dc: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606d8) {
            ctx->pc = 0x1606E4u;
            goto label_1606e4;
        }
    }
    ctx->pc = 0x1606E0u;
label_1606e0:
    // 0x1606e0: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x1606e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_1606e4:
    // 0x1606e4: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1606e8:
    // 0x1606e8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1606e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1606ec:
    // 0x1606ec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1606ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1606f0:
    // 0x1606f0: 0x60f809  jalr        $v1
label_1606f4:
    if (ctx->pc == 0x1606F4u) {
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606F8u;
        goto label_1606f8;
    }
    ctx->pc = 0x1606F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1606F8u);
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606F0u, 0x1606F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1606F8u;
label_1606f8:
    // 0x1606f8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1606f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1606fc:
    // 0x1606fc: 0x10000112  b           . + 4 + (0x112 << 2)
label_160700:
    if (ctx->pc == 0x160700u) {
        ctx->pc = 0x160700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606FCu;
        // 0x160700: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160704u;
        goto label_160704;
    }
    ctx->pc = 0x1606FCu;
    {
        const bool branch_taken_0x1606fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606FCu;
        // 0x160700: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606fc) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160704u;
label_160704:
    // 0x160704: 0xc0b6dac  jal         func_2DB6B0
label_160708:
    if (ctx->pc == 0x160708u) {
        ctx->pc = 0x16070Cu;
        goto label_16070c;
    }
    ctx->pc = 0x160704u;
    SET_GPR_U32(ctx, 31, 0x16070Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x160704u, 0x16070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16070Cu;
label_16070c:
    // 0x16070c: 0x904302f6  lbu         $v1, 0x2F6($v0)
    ctx->pc = 0x16070cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 758)));
label_160710:
    // 0x160710: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x160710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_160714:
    // 0x160714: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
label_160718:
    if (ctx->pc == 0x160718u) {
        ctx->pc = 0x160718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160714u;
        // 0x160718: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16071Cu;
        goto label_16071c;
    }
    ctx->pc = 0x160714u;
    {
        const bool branch_taken_0x160714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160714u;
        // 0x160718: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160714) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16071Cu;
label_16071c:
    // 0x16071c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_160720:
    // 0x160720: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x160720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_160724:
    // 0x160724: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x160724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_160728:
    // 0x160728: 0x8c827a78  lw          $v0, 0x7A78($a0)
    ctx->pc = 0x160728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31352)));
label_16072c:
    // 0x16072c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_160730:
    // 0x160730: 0x10000105  b           . + 4 + (0x105 << 2)
label_160734:
    if (ctx->pc == 0x160734u) {
        ctx->pc = 0x160734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160730u;
        // 0x160734: 0xac827a78  sw          $v0, 0x7A78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160738u;
        goto label_160738;
    }
    ctx->pc = 0x160730u;
    {
        const bool branch_taken_0x160730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160730u;
        // 0x160734: 0xac827a78  sw          $v0, 0x7A78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160730) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160738u;
label_160738:
    // 0x160738: 0x92020edc  lbu         $v0, 0xEDC($s0)
    ctx->pc = 0x160738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3804)));
label_16073c:
    // 0x16073c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_160740:
    // 0x160740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_160744:
    if (ctx->pc == 0x160744u) {
        ctx->pc = 0x160744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160740u;
        // 0x160744: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160748u;
        goto label_160748;
    }
    ctx->pc = 0x160740u;
    {
        const bool branch_taken_0x160740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160740u;
        // 0x160744: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160740) {
            ctx->pc = 0x160750u;
            goto label_160750;
        }
    }
    ctx->pc = 0x160748u;
label_160748:
    // 0x160748: 0x100000fe  b           . + 4 + (0xFE << 2)
label_16074c:
    if (ctx->pc == 0x16074Cu) {
        ctx->pc = 0x16074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160748u;
        // 0x16074c: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160750u;
        goto label_160750;
    }
    ctx->pc = 0x160748u;
    {
        const bool branch_taken_0x160748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160748u;
        // 0x16074c: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160748) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x160750u;
label_160750:
    // 0x160750: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160754:
    // 0x160754: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_160758:
    if (ctx->pc == 0x160758u) {
        ctx->pc = 0x160758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160754u;
        // 0x160758: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16075Cu;
        goto label_16075c;
    }
    ctx->pc = 0x160754u;
    {
        const bool branch_taken_0x160754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160754u;
        // 0x160758: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160754) {
            ctx->pc = 0x160788u;
            goto label_160788;
        }
    }
    ctx->pc = 0x16075Cu;
label_16075c:
    // 0x16075c: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x16075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160760:
    // 0x160760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160764:
    // 0x160764: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x160764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_160768:
    // 0x160768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16076c:
    // 0x16076c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16076cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160770:
    // 0x160770: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x160770u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_160774:
    // 0x160774: 0xc0c1c82  jal         func_307208
label_160778:
    if (ctx->pc == 0x160778u) {
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160774u;
        // 0x160778: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16077Cu;
        goto label_16077c;
    }
    ctx->pc = 0x160774u;
    SET_GPR_U32(ctx, 31, 0x16077Cu);
    ctx->pc = 0x160778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160774u;
    // 0x160778: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x160774u, 0x16077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16077Cu;
label_16077c:
    // 0x16077c: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x16077cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160780:
    // 0x160780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160784:
    // 0x160784: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x160784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160788:
    // 0x160788: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_16078c:
    // 0x16078c: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x16078cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_160790:
    // 0x160790: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x160790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_160794:
    // 0x160794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_160798:
    // 0x160798: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_16079c:
    if (ctx->pc == 0x16079Cu) {
        ctx->pc = 0x16079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160798u;
        // 0x16079c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607A0u;
        goto label_1607a0;
    }
    ctx->pc = 0x160798u;
    {
        const bool branch_taken_0x160798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160798u;
        // 0x16079c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160798) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1607A0u;
label_1607a0:
    // 0x1607a0: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_1607a4:
    if (ctx->pc == 0x1607A4u) {
        ctx->pc = 0x1607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A0u;
        // 0x1607a4: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607A8u;
        goto label_1607a8;
    }
    ctx->pc = 0x1607A0u;
    {
        const bool branch_taken_0x1607a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A0u;
        // 0x1607a4: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607a0) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x1607A8u;
label_1607a8:
    // 0x1607a8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1607ac:
    if (ctx->pc == 0x1607ACu) {
        ctx->pc = 0x1607ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A8u;
        // 0x1607ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607B0u;
        goto label_1607b0;
    }
    ctx->pc = 0x1607A8u;
    {
        const bool branch_taken_0x1607a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A8u;
        // 0x1607ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607a8) {
            ctx->pc = 0x1607ECu;
            goto label_1607ec;
        }
    }
    ctx->pc = 0x1607B0u;
label_1607b0:
    // 0x1607b0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1607b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1607b4:
    // 0x1607b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1607b8:
    if (ctx->pc == 0x1607B8u) {
        ctx->pc = 0x1607B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607B4u;
        // 0x1607b8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607BCu;
        goto label_1607bc;
    }
    ctx->pc = 0x1607B4u;
    {
        const bool branch_taken_0x1607b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1607B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607B4u;
        // 0x1607b8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607b4) {
            ctx->pc = 0x1607C4u;
            goto label_1607c4;
        }
    }
    ctx->pc = 0x1607BCu;
label_1607bc:
    // 0x1607bc: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_1607c0:
    if (ctx->pc == 0x1607C0u) {
        ctx->pc = 0x1607C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607BCu;
        // 0x1607c0: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607C4u;
        goto label_1607c4;
    }
    ctx->pc = 0x1607BCu;
    {
        const bool branch_taken_0x1607bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1607bc) {
            ctx->pc = 0x1607C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1607BCu;
            // 0x1607c0: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1607DCu;
            goto label_1607dc;
        }
    }
    ctx->pc = 0x1607C4u;
label_1607c4:
    // 0x1607c4: 0xc0b6dac  jal         func_2DB6B0
label_1607c8:
    if (ctx->pc == 0x1607C8u) {
        ctx->pc = 0x1607CCu;
        goto label_1607cc;
    }
    ctx->pc = 0x1607C4u;
    SET_GPR_U32(ctx, 31, 0x1607CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1607C4u, 0x1607CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607CCu;
label_1607cc:
    // 0x1607cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1607ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1607d0:
    // 0x1607d0: 0xc042e22  jal         func_10B888
label_1607d4:
    if (ctx->pc == 0x1607D4u) {
        ctx->pc = 0x1607D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D0u;
        // 0x1607d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607D8u;
        goto label_1607d8;
    }
    ctx->pc = 0x1607D0u;
    SET_GPR_U32(ctx, 31, 0x1607D8u);
    ctx->pc = 0x1607D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607D0u;
    // 0x1607d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x1607D0u, 0x1607D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607D8u;
label_1607d8:
    // 0x1607d8: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1607d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1607dc:
    // 0x1607dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1607dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1607e0:
    // 0x1607e0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1607e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1607e4:
    // 0x1607e4: 0x60f809  jalr        $v1
label_1607e8:
    if (ctx->pc == 0x1607E8u) {
        ctx->pc = 0x1607E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607E4u;
        // 0x1607e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607ECu;
        goto label_1607ec;
    }
    ctx->pc = 0x1607E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1607ECu);
        ctx->pc = 0x1607E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607E4u;
        // 0x1607e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607E4u, 0x1607ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1607ECu;
label_1607ec:
    // 0x1607ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1607ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1607f0:
    // 0x1607f0: 0x8e040ee4  lw          $a0, 0xEE4($s0)
    ctx->pc = 0x1607f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3812)));
label_1607f4:
    // 0x1607f4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1607f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1607f8:
    // 0x1607f8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1607f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1607fc:
    // 0x1607fc: 0xac447a80  sw          $a0, 0x7A80($v0)
    ctx->pc = 0x1607fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 4));
label_160800:
    // 0x160800: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x160800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_160804:
    // 0x160804: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_160808:
    if (ctx->pc == 0x160808u) {
        ctx->pc = 0x160808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160804u;
        // 0x160808: 0xa6030050  sh          $v1, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16080Cu;
        goto label_16080c;
    }
    ctx->pc = 0x160804u;
    {
        const bool branch_taken_0x160804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160804u;
        // 0x160808: 0xa6030050  sh          $v1, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160804) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16080Cu;
label_16080c:
    // 0x16080c: 0x92020edc  lbu         $v0, 0xEDC($s0)
    ctx->pc = 0x16080cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3804)));
label_160810:
    // 0x160810: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x160810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_160814:
    // 0x160814: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_160818:
    if (ctx->pc == 0x160818u) {
        ctx->pc = 0x160818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160814u;
        // 0x160818: 0xa6000050  sh          $zero, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16081Cu;
        goto label_16081c;
    }
    ctx->pc = 0x160814u;
    {
        const bool branch_taken_0x160814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160814) {
            ctx->pc = 0x160818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160814u;
            // 0x160818: 0xa6000050  sh          $zero, 0x50($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160868u;
            goto label_160868;
        }
    }
    ctx->pc = 0x16081Cu;
label_16081c:
    // 0x16081c: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x16081cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160820:
    // 0x160820: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_160824:
    if (ctx->pc == 0x160824u) {
        ctx->pc = 0x160824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160820u;
        // 0x160824: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160828u;
        goto label_160828;
    }
    ctx->pc = 0x160820u;
    {
        const bool branch_taken_0x160820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160820u;
        // 0x160824: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160820) {
            ctx->pc = 0x160854u;
            goto label_160854;
        }
    }
    ctx->pc = 0x160828u;
label_160828:
    // 0x160828: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x160828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_16082c:
    // 0x16082c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160830:
    // 0x160830: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x160830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_160834:
    // 0x160834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160838:
    // 0x160838: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x160838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_16083c:
    // 0x16083c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16083cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160840:
    // 0x160840: 0xc0c1c82  jal         func_307208
label_160844:
    if (ctx->pc == 0x160844u) {
        ctx->pc = 0x160844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160840u;
        // 0x160844: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160848u;
        goto label_160848;
    }
    ctx->pc = 0x160840u;
    SET_GPR_U32(ctx, 31, 0x160848u);
    ctx->pc = 0x160844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160840u;
    // 0x160844: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x160840u, 0x160848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160848u;
label_160848:
    // 0x160848: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_16084c:
    // 0x16084c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160850:
    // 0x160850: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x160850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160854:
    // 0x160854: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160858:
    // 0x160858: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x160858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_16085c:
    // 0x16085c: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
label_160860:
    if (ctx->pc == 0x160860u) {
        ctx->pc = 0x160864u;
        goto label_160864;
    }
    ctx->pc = 0x16085Cu;
    {
        const bool branch_taken_0x16085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16085c) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160864u;
label_160864:
    // 0x160864: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x160864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
label_160868:
    // 0x160868: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x160868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_16086c:
    // 0x16086c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16086cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_160870:
    // 0x160870: 0x24857a84  addiu       $a1, $a0, 0x7A84
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31364));
label_160874:
    // 0x160874: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31364)));
label_160878:
    // 0x160878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x160878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_16087c:
    // 0x16087c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_160880:
    // 0x160880: 0xac827a84  sw          $v0, 0x7A84($a0)
    ctx->pc = 0x160880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31364), GPR_U32(ctx, 2));
label_160884:
    // 0x160884: 0x8e030ee0  lw          $v1, 0xEE0($s0)
    ctx->pc = 0x160884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3808)));
label_160888:
    // 0x160888: 0xaca3fff4  sw          $v1, -0xC($a1)
    ctx->pc = 0x160888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), GPR_U32(ctx, 3));
label_16088c:
    // 0x16088c: 0x100000ae  b           . + 4 + (0xAE << 2)
label_160890:
    if (ctx->pc == 0x160890u) {
        ctx->pc = 0x160890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16088Cu;
        // 0x160890: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160894u;
        goto label_160894;
    }
    ctx->pc = 0x16088Cu;
    {
        const bool branch_taken_0x16088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16088Cu;
        // 0x160890: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16088c) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160894u;
label_160894:
    // 0x160894: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160898:
    // 0x160898: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_16089c:
    if (ctx->pc == 0x16089Cu) {
        ctx->pc = 0x16089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160898u;
        // 0x16089c: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608A0u;
        goto label_1608a0;
    }
    ctx->pc = 0x160898u;
    {
        const bool branch_taken_0x160898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160898u;
        // 0x16089c: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160898) {
            ctx->pc = 0x1608CCu;
            goto label_1608cc;
        }
    }
    ctx->pc = 0x1608A0u;
label_1608a0:
    // 0x1608a0: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_1608a4:
    // 0x1608a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1608a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1608a8:
    // 0x1608a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1608a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1608ac:
    // 0x1608ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1608acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1608b0:
    // 0x1608b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1608b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1608b4:
    // 0x1608b4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1608b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1608b8:
    // 0x1608b8: 0xc0c1c82  jal         func_307208
label_1608bc:
    if (ctx->pc == 0x1608BCu) {
        ctx->pc = 0x1608BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608B8u;
        // 0x1608bc: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608C0u;
        goto label_1608c0;
    }
    ctx->pc = 0x1608B8u;
    SET_GPR_U32(ctx, 31, 0x1608C0u);
    ctx->pc = 0x1608BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1608B8u;
    // 0x1608bc: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1608B8u, 0x1608C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608C0u;
label_1608c0:
    // 0x1608c0: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x1608c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_1608c4:
    // 0x1608c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1608c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1608c8:
    // 0x1608c8: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x1608c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_1608cc:
    // 0x1608cc: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x1608ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_1608d0:
    // 0x1608d0: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x1608d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_1608d4:
    // 0x1608d4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1608d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_1608d8:
    // 0x1608d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1608d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1608dc:
    // 0x1608dc: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_1608e0:
    if (ctx->pc == 0x1608E0u) {
        ctx->pc = 0x1608E4u;
        goto label_1608e4;
    }
    ctx->pc = 0x1608DCu;
    {
        const bool branch_taken_0x1608dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1608dc) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1608E4u;
label_1608e4:
    // 0x1608e4: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_1608e8:
    if (ctx->pc == 0x1608E8u) {
        ctx->pc = 0x1608E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608E4u;
        // 0x1608e8: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1608ECu;
        goto label_1608ec;
    }
    ctx->pc = 0x1608E4u;
    {
        const bool branch_taken_0x1608e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1608e4) {
            ctx->pc = 0x1608E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1608E4u;
            // 0x1608e8: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160904u;
            goto label_160904;
        }
    }
    ctx->pc = 0x1608ECu;
label_1608ec:
    // 0x1608ec: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1608ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1608f0:
    // 0x1608f0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1608f4:
    // 0x1608f4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1608f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1608f8:
    // 0x1608f8: 0x60f809  jalr        $v1
label_1608fc:
    if (ctx->pc == 0x1608FCu) {
        ctx->pc = 0x1608FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608F8u;
        // 0x1608fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160900u;
        goto label_160900;
    }
    ctx->pc = 0x1608F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160900u);
        ctx->pc = 0x1608FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608F8u;
        // 0x1608fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608F8u, 0x160900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160900u;
label_160900:
    // 0x160900: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_160904:
    // 0x160904: 0x1000002a  b           . + 4 + (0x2A << 2)
label_160908:
    if (ctx->pc == 0x160908u) {
        ctx->pc = 0x160908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160904u;
        // 0x160908: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16090Cu;
        goto label_16090c;
    }
    ctx->pc = 0x160904u;
    {
        const bool branch_taken_0x160904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160904u;
        // 0x160908: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160904) {
            ctx->pc = 0x1609B0u;
            goto label_1609b0;
        }
    }
    ctx->pc = 0x16090Cu;
label_16090c:
    // 0x16090c: 0xc05839e  jal         func_160E78
label_160910:
    if (ctx->pc == 0x160910u) {
        ctx->pc = 0x160910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16090Cu;
        // 0x160910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160914u;
        goto label_160914;
    }
    ctx->pc = 0x16090Cu;
    SET_GPR_U32(ctx, 31, 0x160914u);
    ctx->pc = 0x160910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16090Cu;
    // 0x160910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160E78u, 0x16090Cu, 0x160914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160914u;
label_160914:
    // 0x160914: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_160918:
    if (ctx->pc == 0x160918u) {
        ctx->pc = 0x160918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160914u;
        // 0x160918: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16091Cu;
        goto label_16091c;
    }
    ctx->pc = 0x160914u;
    {
        const bool branch_taken_0x160914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160914u;
        // 0x160918: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160914) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16091Cu;
label_16091c:
    // 0x16091c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_160920:
    if (ctx->pc == 0x160920u) {
        ctx->pc = 0x160920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16091Cu;
        // 0x160920: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160924u;
        goto label_160924;
    }
    ctx->pc = 0x16091Cu;
    {
        const bool branch_taken_0x16091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16091Cu;
        // 0x160920: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16091c) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160924u;
label_160924:
    // 0x160924: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x160924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160928:
    // 0x160928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16092c:
    // 0x16092c: 0xa2030794  sb          $v1, 0x794($s0)
    ctx->pc = 0x16092cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1940), (uint8_t)GPR_U32(ctx, 3));
label_160930:
    // 0x160930: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x160930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_160934:
    // 0x160934: 0x10000084  b           . + 4 + (0x84 << 2)
label_160938:
    if (ctx->pc == 0x160938u) {
        ctx->pc = 0x160938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160934u;
        // 0x160938: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16093Cu;
        goto label_16093c;
    }
    ctx->pc = 0x160934u;
    {
        const bool branch_taken_0x160934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160934u;
        // 0x160938: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160934) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16093Cu;
label_16093c:
    // 0x16093c: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x16093cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160940:
    // 0x160940: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_160944:
    if (ctx->pc == 0x160944u) {
        ctx->pc = 0x160944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160940u;
        // 0x160944: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160948u;
        goto label_160948;
    }
    ctx->pc = 0x160940u;
    {
        const bool branch_taken_0x160940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160940u;
        // 0x160944: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160940) {
            ctx->pc = 0x160974u;
            goto label_160974;
        }
    }
    ctx->pc = 0x160948u;
label_160948:
    // 0x160948: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x160948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_16094c:
    // 0x16094c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16094cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160950:
    // 0x160950: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_160954:
    // 0x160954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160958:
    // 0x160958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16095c:
    // 0x16095c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x16095cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_160960:
    // 0x160960: 0xc0c1c82  jal         func_307208
label_160964:
    if (ctx->pc == 0x160964u) {
        ctx->pc = 0x160964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160960u;
        // 0x160964: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160968u;
        goto label_160968;
    }
    ctx->pc = 0x160960u;
    SET_GPR_U32(ctx, 31, 0x160968u);
    ctx->pc = 0x160964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160960u;
    // 0x160964: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x160960u, 0x160968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160968u;
label_160968:
    // 0x160968: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_16096c:
    // 0x16096c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160970:
    // 0x160970: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x160970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160974:
    // 0x160974: 0x26437470  addiu       $v1, $s2, 0x7470
    ctx->pc = 0x160974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160978:
    // 0x160978: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x160978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_16097c:
    // 0x16097c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x16097cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_160980:
    // 0x160980: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_160984:
    // 0x160984: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_160988:
    if (ctx->pc == 0x160988u) {
        ctx->pc = 0x16098Cu;
        goto label_16098c;
    }
    ctx->pc = 0x160984u;
    {
        const bool branch_taken_0x160984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160984) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x16098Cu;
label_16098c:
    // 0x16098c: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_160990:
    if (ctx->pc == 0x160990u) {
        ctx->pc = 0x160990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16098Cu;
        // 0x160990: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160994u;
        goto label_160994;
    }
    ctx->pc = 0x16098Cu;
    {
        const bool branch_taken_0x16098c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16098c) {
            ctx->pc = 0x160990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16098Cu;
            // 0x160990: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1609ACu;
            goto label_1609ac;
        }
    }
    ctx->pc = 0x160994u;
label_160994:
    // 0x160994: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x160994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_160998:
    // 0x160998: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x160998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_16099c:
    // 0x16099c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1609a0:
    // 0x1609a0: 0x60f809  jalr        $v1
label_1609a4:
    if (ctx->pc == 0x1609A4u) {
        ctx->pc = 0x1609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609A0u;
        // 0x1609a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609A8u;
        goto label_1609a8;
    }
    ctx->pc = 0x1609A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1609A8u);
        ctx->pc = 0x1609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609A0u;
        // 0x1609a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1609A0u, 0x1609A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1609A8u;
label_1609a8:
    // 0x1609a8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1609ac:
    // 0x1609ac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1609acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1609b0:
    // 0x1609b0: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x1609b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_1609b4:
    // 0x1609b4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1609b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1609b8:
    // 0x1609b8: 0x10000063  b           . + 4 + (0x63 << 2)
label_1609bc:
    if (ctx->pc == 0x1609BCu) {
        ctx->pc = 0x1609BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B8u;
        // 0x1609bc: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609C0u;
        goto label_1609c0;
    }
    ctx->pc = 0x1609B8u;
    {
        const bool branch_taken_0x1609b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B8u;
        // 0x1609bc: 0xa2000ed4  sb          $zero, 0xED4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609b8) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1609C0u;
label_1609c0:
    // 0x1609c0: 0xc0583ce  jal         func_160F38
label_1609c4:
    if (ctx->pc == 0x1609C4u) {
        ctx->pc = 0x1609C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C0u;
        // 0x1609c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609C8u;
        goto label_1609c8;
    }
    ctx->pc = 0x1609C0u;
    SET_GPR_U32(ctx, 31, 0x1609C8u);
    ctx->pc = 0x1609C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609C0u;
    // 0x1609c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F38u, 0x1609C0u, 0x1609C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609C8u;
label_1609c8:
    // 0x1609c8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_1609cc:
    if (ctx->pc == 0x1609CCu) {
        ctx->pc = 0x1609CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C8u;
        // 0x1609cc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609D0u;
        goto label_1609d0;
    }
    ctx->pc = 0x1609C8u;
    {
        const bool branch_taken_0x1609c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C8u;
        // 0x1609cc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609c8) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1609D0u;
label_1609d0:
    // 0x1609d0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1609d4:
    if (ctx->pc == 0x1609D4u) {
        ctx->pc = 0x1609D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609D0u;
        // 0x1609d4: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609D8u;
        goto label_1609d8;
    }
    ctx->pc = 0x1609D0u;
    {
        const bool branch_taken_0x1609d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609D0u;
        // 0x1609d4: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609d0) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x1609D8u;
label_1609d8:
    // 0x1609d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1609dc:
    // 0x1609dc: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1609dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
label_1609e0:
    // 0x1609e0: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x1609e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_1609e4:
    // 0x1609e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1609e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1609e8:
    // 0x1609e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1609ec:
    if (ctx->pc == 0x1609ECu) {
        ctx->pc = 0x1609ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E8u;
        // 0x1609ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609F0u;
        goto label_1609f0;
    }
    ctx->pc = 0x1609E8u;
    {
        const bool branch_taken_0x1609e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E8u;
        // 0x1609ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609e8) {
            ctx->pc = 0x160A0Cu;
            goto label_160a0c;
        }
    }
    ctx->pc = 0x1609F0u;
label_1609f0:
    // 0x1609f0: 0xc057fc4  jal         func_15FF10
label_1609f4:
    if (ctx->pc == 0x1609F4u) {
        ctx->pc = 0x1609F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609F0u;
        // 0x1609f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609F8u;
        goto label_1609f8;
    }
    ctx->pc = 0x1609F0u;
    SET_GPR_U32(ctx, 31, 0x1609F8u);
    ctx->pc = 0x1609F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609F0u;
    // 0x1609f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FF10u, 0x1609F0u, 0x1609F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609F8u;
label_1609f8:
    // 0x1609f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1609f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1609fc:
    // 0x1609fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1609fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160a00:
    // 0x160a00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x160a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160a04:
    // 0x160a04: 0x1000004c  b           . + 4 + (0x4C << 2)
label_160a08:
    if (ctx->pc == 0x160A08u) {
        ctx->pc = 0x160A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A04u;
        // 0x160a08: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A0Cu;
        goto label_160a0c;
    }
    ctx->pc = 0x160A04u;
    {
        const bool branch_taken_0x160a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A04u;
        // 0x160a08: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a04) {
            ctx->pc = 0x160B38u;
            goto label_160b38;
        }
    }
    ctx->pc = 0x160A0Cu;
label_160a0c:
    // 0x160a0c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_160a10:
    if (ctx->pc == 0x160A10u) {
        ctx->pc = 0x160A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A0Cu;
        // 0x160a10: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A14u;
        goto label_160a14;
    }
    ctx->pc = 0x160A0Cu;
    {
        const bool branch_taken_0x160a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A0Cu;
        // 0x160a10: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a0c) {
            ctx->pc = 0x160B40u;
            goto label_160b40;
        }
    }
    ctx->pc = 0x160A14u;
label_160a14:
    // 0x160a14: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160a18:
    // 0x160a18: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_160a1c:
    if (ctx->pc == 0x160A1Cu) {
        ctx->pc = 0x160A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A18u;
        // 0x160a1c: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A20u;
        goto label_160a20;
    }
    ctx->pc = 0x160A18u;
    {
        const bool branch_taken_0x160a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A18u;
        // 0x160a1c: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a18) {
            ctx->pc = 0x160A58u;
            goto label_160a58;
        }
    }
    ctx->pc = 0x160A20u;
label_160a20:
    // 0x160a20: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x160a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160a24:
    // 0x160a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a28:
    // 0x160a28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x160a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_160a2c:
    // 0x160a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a30:
    // 0x160a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a34:
    // 0x160a34: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x160a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_160a38:
    // 0x160a38: 0xc0c1c82  jal         func_307208
label_160a3c:
    if (ctx->pc == 0x160A3Cu) {
        ctx->pc = 0x160A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A38u;
        // 0x160a3c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A40u;
        goto label_160a40;
    }
    ctx->pc = 0x160A38u;
    SET_GPR_U32(ctx, 31, 0x160A40u);
    ctx->pc = 0x160A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A38u;
    // 0x160a3c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x160A38u, 0x160A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A40u;
label_160a40:
    // 0x160a40: 0x92020ed4  lbu         $v0, 0xED4($s0)
    ctx->pc = 0x160a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3796)));
label_160a44:
    // 0x160a44: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_160a48:
    // 0x160a48: 0x8c647aac  lw          $a0, 0x7AAC($v1)
    ctx->pc = 0x160a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31404)));
label_160a4c:
    // 0x160a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160a50:
    // 0x160a50: 0xae040f18  sw          $a0, 0xF18($s0)
    ctx->pc = 0x160a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3864), GPR_U32(ctx, 4));
label_160a54:
    // 0x160a54: 0xa2020ed4  sb          $v0, 0xED4($s0)
    ctx->pc = 0x160a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160a58:
    // 0x160a58: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_160a5c:
    // 0x160a5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x160a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160a60:
    // 0x160a60: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x160a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
label_160a64:
    // 0x160a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a68:
    // 0x160a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a6c:
    // 0x160a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a70:
    // 0x160a70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x160a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_160a74:
    // 0x160a74: 0xc0c3970  jal         func_30E5C0
label_160a78:
    if (ctx->pc == 0x160A78u) {
        ctx->pc = 0x160A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A74u;
        // 0x160a78: 0xac627a78  sw          $v0, 0x7A78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A7Cu;
        goto label_160a7c;
    }
    ctx->pc = 0x160A74u;
    SET_GPR_U32(ctx, 31, 0x160A7Cu);
    ctx->pc = 0x160A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A74u;
    // 0x160a78: 0xac627a78  sw          $v0, 0x7A78($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x160A74u, 0x160A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A7Cu;
label_160a7c:
    // 0x160a7c: 0x26427470  addiu       $v0, $s2, 0x7470
    ctx->pc = 0x160a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
label_160a80:
    // 0x160a80: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x160a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
label_160a84:
    // 0x160a84: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_160a88:
    if (ctx->pc == 0x160A88u) {
        ctx->pc = 0x160A8Cu;
        goto label_160a8c;
    }
    ctx->pc = 0x160A84u;
    {
        const bool branch_taken_0x160a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160a84) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160A8Cu;
label_160a8c:
    // 0x160a8c: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_160a90:
    if (ctx->pc == 0x160A90u) {
        ctx->pc = 0x160A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A8Cu;
        // 0x160a90: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A94u;
        goto label_160a94;
    }
    ctx->pc = 0x160A8Cu;
    {
        const bool branch_taken_0x160a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a8c) {
            ctx->pc = 0x160A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160A8Cu;
            // 0x160a90: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160AACu;
            goto label_160aac;
        }
    }
    ctx->pc = 0x160A94u;
label_160a94:
    // 0x160a94: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x160a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_160a98:
    // 0x160a98: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x160a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_160a9c:
    // 0x160a9c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_160aa0:
    // 0x160aa0: 0x60f809  jalr        $v1
label_160aa4:
    if (ctx->pc == 0x160AA4u) {
        ctx->pc = 0x160AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AA0u;
        // 0x160aa4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AA8u;
        goto label_160aa8;
    }
    ctx->pc = 0x160AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160AA8u);
        ctx->pc = 0x160AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AA0u;
        // 0x160aa4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160AA0u, 0x160AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160AA8u;
label_160aa8:
    // 0x160aa8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x160aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_160aac:
    // 0x160aac: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x160aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_160ab0:
    // 0x160ab0: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x160ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_160ab4:
    // 0x160ab4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x160ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_160ab8:
    // 0x160ab8: 0xa2000ed4  sb          $zero, 0xED4($s0)
    ctx->pc = 0x160ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3796), (uint8_t)GPR_U32(ctx, 0));
label_160abc:
    // 0x160abc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_160ac0:
    // 0x160ac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160ac4:
    // 0x160ac4: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
label_160ac8:
    // 0x160ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160acc:
    // 0x160acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160ad0:
    // 0x160ad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160ad4:
    // 0x160ad4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x160ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_160ad8:
    // 0x160ad8: 0xc0c3970  jal         func_30E5C0
label_160adc:
    if (ctx->pc == 0x160ADCu) {
        ctx->pc = 0x160ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AD8u;
        // 0x160adc: 0xac627a78  sw          $v0, 0x7A78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AE0u;
        goto label_160ae0;
    }
    ctx->pc = 0x160AD8u;
    SET_GPR_U32(ctx, 31, 0x160AE0u);
    ctx->pc = 0x160ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AD8u;
    // 0x160adc: 0xac627a78  sw          $v0, 0x7A78($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x160AD8u, 0x160AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AE0u;
label_160ae0:
    // 0x160ae0: 0xc0583fc  jal         func_160FF0
label_160ae4:
    if (ctx->pc == 0x160AE4u) {
        ctx->pc = 0x160AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AE0u;
        // 0x160ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AE8u;
        goto label_160ae8;
    }
    ctx->pc = 0x160AE0u;
    SET_GPR_U32(ctx, 31, 0x160AE8u);
    ctx->pc = 0x160AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AE0u;
    // 0x160ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FF0u, 0x160AE0u, 0x160AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AE8u;
label_160ae8:
    // 0x160ae8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_160aec:
    if (ctx->pc == 0x160AECu) {
        ctx->pc = 0x160AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AE8u;
        // 0x160aec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AF0u;
        goto label_160af0;
    }
    ctx->pc = 0x160AE8u;
    {
        const bool branch_taken_0x160ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AE8u;
        // 0x160aec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ae8) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160AF0u;
label_160af0:
    // 0x160af0: 0x10000015  b           . + 4 + (0x15 << 2)
label_160af4:
    if (ctx->pc == 0x160AF4u) {
        ctx->pc = 0x160AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AF0u;
        // 0x160af4: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AF8u;
        goto label_160af8;
    }
    ctx->pc = 0x160AF0u;
    {
        const bool branch_taken_0x160af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AF0u;
        // 0x160af4: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160af0) {
            ctx->pc = 0x160B48u;
            goto label_160b48;
        }
    }
    ctx->pc = 0x160AF8u;
label_160af8:
    // 0x160af8: 0x92050f18  lbu         $a1, 0xF18($s0)
    ctx->pc = 0x160af8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3864)));
label_160afc:
    // 0x160afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x160afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160b00:
    // 0x160b00: 0x92060f19  lbu         $a2, 0xF19($s0)
    ctx->pc = 0x160b00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3865)));
label_160b04:
    // 0x160b04: 0xc0c3970  jal         func_30E5C0
label_160b08:
    if (ctx->pc == 0x160B08u) {
        ctx->pc = 0x160B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B04u;
        // 0x160b08: 0x92070f1a  lbu         $a3, 0xF1A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3866)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B0Cu;
        goto label_160b0c;
    }
    ctx->pc = 0x160B04u;
    SET_GPR_U32(ctx, 31, 0x160B0Cu);
    ctx->pc = 0x160B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B04u;
    // 0x160b08: 0x92070f1a  lbu         $a3, 0xF1A($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3866)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x160B04u, 0x160B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B0Cu;
label_160b0c:
    // 0x160b0c: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_160b10:
    // 0x160b10: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_160b14:
    // 0x160b14: 0x8ca27a78  lw          $v0, 0x7A78($a1)
    ctx->pc = 0x160b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31352)));
label_160b18:
    // 0x160b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160b1c:
    // 0x160b1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x160b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_160b20:
    // 0x160b20: 0xc057fc4  jal         func_15FF10
label_160b24:
    if (ctx->pc == 0x160B24u) {
        ctx->pc = 0x160B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B20u;
        // 0x160b24: 0xaca27a78  sw          $v0, 0x7A78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 31352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B28u;
        goto label_160b28;
    }
    ctx->pc = 0x160B20u;
    SET_GPR_U32(ctx, 31, 0x160B28u);
    ctx->pc = 0x160B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B20u;
    // 0x160b24: 0xaca27a78  sw          $v0, 0x7A78($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FF10u, 0x160B20u, 0x160B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B28u;
label_160b28:
    // 0x160b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160b2c:
    // 0x160b2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x160b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_160b30:
    // 0x160b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160b34:
    // 0x160b34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160b38:
    // 0x160b38: 0xc058008  jal         func_160020
label_160b3c:
    if (ctx->pc == 0x160B3Cu) {
        ctx->pc = 0x160B40u;
        goto label_160b40;
    }
    ctx->pc = 0x160B38u;
    SET_GPR_U32(ctx, 31, 0x160B40u);
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x160B38u, 0x160B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B40u;
label_160b40:
    // 0x160b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160b44:
    // 0x160b44: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x160b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_160b48:
    // 0x160b48: 0xc058312  jal         func_160C48
label_160b4c:
    if (ctx->pc == 0x160B4Cu) {
        ctx->pc = 0x160B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B48u;
        // 0x160b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B50u;
        goto label_160b50;
    }
    ctx->pc = 0x160B48u;
    SET_GPR_U32(ctx, 31, 0x160B50u);
    ctx->pc = 0x160B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B48u;
    // 0x160b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160C48u, 0x160B48u, 0x160B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B50u;
label_160b50:
    // 0x160b50: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_160b54:
    // 0x160b54: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x160b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
label_160b58:
    // 0x160b58: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x160b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_160b5c:
    // 0x160b5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_160b60:
    // 0x160b60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_160b64:
    if (ctx->pc == 0x160B64u) {
        ctx->pc = 0x160B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B60u;
        // 0x160b64: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B68u;
        goto label_160b68;
    }
    ctx->pc = 0x160B60u;
    {
        const bool branch_taken_0x160b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B60u;
        // 0x160b64: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b60) {
            ctx->pc = 0x160B78u;
            goto label_160b78;
        }
    }
    ctx->pc = 0x160B68u;
label_160b68:
    // 0x160b68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x160b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_160b6c:
    // 0x160b6c: 0x8c442fb0  lw          $a0, 0x2FB0($v0)
    ctx->pc = 0x160b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12208)));
label_160b70:
    // 0x160b70: 0xc0b1e14  jal         func_2C7850
label_160b74:
    if (ctx->pc == 0x160B74u) {
        ctx->pc = 0x160B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B70u;
        // 0x160b74: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B78u;
        goto label_160b78;
    }
    ctx->pc = 0x160B70u;
    SET_GPR_U32(ctx, 31, 0x160B78u);
    ctx->pc = 0x160B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B70u;
    // 0x160b74: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7850u, 0x160B70u, 0x160B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B78u;
label_160b78:
    // 0x160b78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x160b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160b7c:
    // 0x160b7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160b80:
    // 0x160b80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x160b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160b84:
    // 0x160b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160b88:
    // 0x160b88: 0x3e00008  jr          $ra
label_160b8c:
    if (ctx->pc == 0x160B8Cu) {
        ctx->pc = 0x160B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B88u;
        // 0x160b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B90u;
        goto label_fallthrough_0x160b88;
    }
    ctx->pc = 0x160B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B88u;
        // 0x160b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160b88:
    ctx->pc = 0x160B90u;
}
