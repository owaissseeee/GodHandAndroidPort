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

// Function: func_001101A8
// Address: 0x1101a8 - 0x110b20
void func_001101A8_0x1101a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001101A8_0x1101a8");
#endif

    switch (ctx->pc) {
        case 0x1101a8u: goto label_1101a8;
        case 0x1101acu: goto label_1101ac;
        case 0x1101b0u: goto label_1101b0;
        case 0x1101b4u: goto label_1101b4;
        case 0x1101b8u: goto label_1101b8;
        case 0x1101bcu: goto label_1101bc;
        case 0x1101c0u: goto label_1101c0;
        case 0x1101c4u: goto label_1101c4;
        case 0x1101c8u: goto label_1101c8;
        case 0x1101ccu: goto label_1101cc;
        case 0x1101d0u: goto label_1101d0;
        case 0x1101d4u: goto label_1101d4;
        case 0x1101d8u: goto label_1101d8;
        case 0x1101dcu: goto label_1101dc;
        case 0x1101e0u: goto label_1101e0;
        case 0x1101e4u: goto label_1101e4;
        case 0x1101e8u: goto label_1101e8;
        case 0x1101ecu: goto label_1101ec;
        case 0x1101f0u: goto label_1101f0;
        case 0x1101f4u: goto label_1101f4;
        case 0x1101f8u: goto label_1101f8;
        case 0x1101fcu: goto label_1101fc;
        case 0x110200u: goto label_110200;
        case 0x110204u: goto label_110204;
        case 0x110208u: goto label_110208;
        case 0x11020cu: goto label_11020c;
        case 0x110210u: goto label_110210;
        case 0x110214u: goto label_110214;
        case 0x110218u: goto label_110218;
        case 0x11021cu: goto label_11021c;
        case 0x110220u: goto label_110220;
        case 0x110224u: goto label_110224;
        case 0x110228u: goto label_110228;
        case 0x11022cu: goto label_11022c;
        case 0x110230u: goto label_110230;
        case 0x110234u: goto label_110234;
        case 0x110238u: goto label_110238;
        case 0x11023cu: goto label_11023c;
        case 0x110240u: goto label_110240;
        case 0x110244u: goto label_110244;
        case 0x110248u: goto label_110248;
        case 0x11024cu: goto label_11024c;
        case 0x110250u: goto label_110250;
        case 0x110254u: goto label_110254;
        case 0x110258u: goto label_110258;
        case 0x11025cu: goto label_11025c;
        case 0x110260u: goto label_110260;
        case 0x110264u: goto label_110264;
        case 0x110268u: goto label_110268;
        case 0x11026cu: goto label_11026c;
        case 0x110270u: goto label_110270;
        case 0x110274u: goto label_110274;
        case 0x110278u: goto label_110278;
        case 0x11027cu: goto label_11027c;
        case 0x110280u: goto label_110280;
        case 0x110284u: goto label_110284;
        case 0x110288u: goto label_110288;
        case 0x11028cu: goto label_11028c;
        case 0x110290u: goto label_110290;
        case 0x110294u: goto label_110294;
        case 0x110298u: goto label_110298;
        case 0x11029cu: goto label_11029c;
        case 0x1102a0u: goto label_1102a0;
        case 0x1102a4u: goto label_1102a4;
        case 0x1102a8u: goto label_1102a8;
        case 0x1102acu: goto label_1102ac;
        case 0x1102b0u: goto label_1102b0;
        case 0x1102b4u: goto label_1102b4;
        case 0x1102b8u: goto label_1102b8;
        case 0x1102bcu: goto label_1102bc;
        case 0x1102c0u: goto label_1102c0;
        case 0x1102c4u: goto label_1102c4;
        case 0x1102c8u: goto label_1102c8;
        case 0x1102ccu: goto label_1102cc;
        case 0x1102d0u: goto label_1102d0;
        case 0x1102d4u: goto label_1102d4;
        case 0x1102d8u: goto label_1102d8;
        case 0x1102dcu: goto label_1102dc;
        case 0x1102e0u: goto label_1102e0;
        case 0x1102e4u: goto label_1102e4;
        case 0x1102e8u: goto label_1102e8;
        case 0x1102ecu: goto label_1102ec;
        case 0x1102f0u: goto label_1102f0;
        case 0x1102f4u: goto label_1102f4;
        case 0x1102f8u: goto label_1102f8;
        case 0x1102fcu: goto label_1102fc;
        case 0x110300u: goto label_110300;
        case 0x110304u: goto label_110304;
        case 0x110308u: goto label_110308;
        case 0x11030cu: goto label_11030c;
        case 0x110310u: goto label_110310;
        case 0x110314u: goto label_110314;
        case 0x110318u: goto label_110318;
        case 0x11031cu: goto label_11031c;
        case 0x110320u: goto label_110320;
        case 0x110324u: goto label_110324;
        case 0x110328u: goto label_110328;
        case 0x11032cu: goto label_11032c;
        case 0x110330u: goto label_110330;
        case 0x110334u: goto label_110334;
        case 0x110338u: goto label_110338;
        case 0x11033cu: goto label_11033c;
        case 0x110340u: goto label_110340;
        case 0x110344u: goto label_110344;
        case 0x110348u: goto label_110348;
        case 0x11034cu: goto label_11034c;
        case 0x110350u: goto label_110350;
        case 0x110354u: goto label_110354;
        case 0x110358u: goto label_110358;
        case 0x11035cu: goto label_11035c;
        case 0x110360u: goto label_110360;
        case 0x110364u: goto label_110364;
        case 0x110368u: goto label_110368;
        case 0x11036cu: goto label_11036c;
        case 0x110370u: goto label_110370;
        case 0x110374u: goto label_110374;
        case 0x110378u: goto label_110378;
        case 0x11037cu: goto label_11037c;
        case 0x110380u: goto label_110380;
        case 0x110384u: goto label_110384;
        case 0x110388u: goto label_110388;
        case 0x11038cu: goto label_11038c;
        case 0x110390u: goto label_110390;
        case 0x110394u: goto label_110394;
        case 0x110398u: goto label_110398;
        case 0x11039cu: goto label_11039c;
        case 0x1103a0u: goto label_1103a0;
        case 0x1103a4u: goto label_1103a4;
        case 0x1103a8u: goto label_1103a8;
        case 0x1103acu: goto label_1103ac;
        case 0x1103b0u: goto label_1103b0;
        case 0x1103b4u: goto label_1103b4;
        case 0x1103b8u: goto label_1103b8;
        case 0x1103bcu: goto label_1103bc;
        case 0x1103c0u: goto label_1103c0;
        case 0x1103c4u: goto label_1103c4;
        case 0x1103c8u: goto label_1103c8;
        case 0x1103ccu: goto label_1103cc;
        case 0x1103d0u: goto label_1103d0;
        case 0x1103d4u: goto label_1103d4;
        case 0x1103d8u: goto label_1103d8;
        case 0x1103dcu: goto label_1103dc;
        case 0x1103e0u: goto label_1103e0;
        case 0x1103e4u: goto label_1103e4;
        case 0x1103e8u: goto label_1103e8;
        case 0x1103ecu: goto label_1103ec;
        case 0x1103f0u: goto label_1103f0;
        case 0x1103f4u: goto label_1103f4;
        case 0x1103f8u: goto label_1103f8;
        case 0x1103fcu: goto label_1103fc;
        case 0x110400u: goto label_110400;
        case 0x110404u: goto label_110404;
        case 0x110408u: goto label_110408;
        case 0x11040cu: goto label_11040c;
        case 0x110410u: goto label_110410;
        case 0x110414u: goto label_110414;
        case 0x110418u: goto label_110418;
        case 0x11041cu: goto label_11041c;
        case 0x110420u: goto label_110420;
        case 0x110424u: goto label_110424;
        case 0x110428u: goto label_110428;
        case 0x11042cu: goto label_11042c;
        case 0x110430u: goto label_110430;
        case 0x110434u: goto label_110434;
        case 0x110438u: goto label_110438;
        case 0x11043cu: goto label_11043c;
        case 0x110440u: goto label_110440;
        case 0x110444u: goto label_110444;
        case 0x110448u: goto label_110448;
        case 0x11044cu: goto label_11044c;
        case 0x110450u: goto label_110450;
        case 0x110454u: goto label_110454;
        case 0x110458u: goto label_110458;
        case 0x11045cu: goto label_11045c;
        case 0x110460u: goto label_110460;
        case 0x110464u: goto label_110464;
        case 0x110468u: goto label_110468;
        case 0x11046cu: goto label_11046c;
        case 0x110470u: goto label_110470;
        case 0x110474u: goto label_110474;
        case 0x110478u: goto label_110478;
        case 0x11047cu: goto label_11047c;
        case 0x110480u: goto label_110480;
        case 0x110484u: goto label_110484;
        case 0x110488u: goto label_110488;
        case 0x11048cu: goto label_11048c;
        case 0x110490u: goto label_110490;
        case 0x110494u: goto label_110494;
        case 0x110498u: goto label_110498;
        case 0x11049cu: goto label_11049c;
        case 0x1104a0u: goto label_1104a0;
        case 0x1104a4u: goto label_1104a4;
        case 0x1104a8u: goto label_1104a8;
        case 0x1104acu: goto label_1104ac;
        case 0x1104b0u: goto label_1104b0;
        case 0x1104b4u: goto label_1104b4;
        case 0x1104b8u: goto label_1104b8;
        case 0x1104bcu: goto label_1104bc;
        case 0x1104c0u: goto label_1104c0;
        case 0x1104c4u: goto label_1104c4;
        case 0x1104c8u: goto label_1104c8;
        case 0x1104ccu: goto label_1104cc;
        case 0x1104d0u: goto label_1104d0;
        case 0x1104d4u: goto label_1104d4;
        case 0x1104d8u: goto label_1104d8;
        case 0x1104dcu: goto label_1104dc;
        case 0x1104e0u: goto label_1104e0;
        case 0x1104e4u: goto label_1104e4;
        case 0x1104e8u: goto label_1104e8;
        case 0x1104ecu: goto label_1104ec;
        case 0x1104f0u: goto label_1104f0;
        case 0x1104f4u: goto label_1104f4;
        case 0x1104f8u: goto label_1104f8;
        case 0x1104fcu: goto label_1104fc;
        case 0x110500u: goto label_110500;
        case 0x110504u: goto label_110504;
        case 0x110508u: goto label_110508;
        case 0x11050cu: goto label_11050c;
        case 0x110510u: goto label_110510;
        case 0x110514u: goto label_110514;
        case 0x110518u: goto label_110518;
        case 0x11051cu: goto label_11051c;
        case 0x110520u: goto label_110520;
        case 0x110524u: goto label_110524;
        case 0x110528u: goto label_110528;
        case 0x11052cu: goto label_11052c;
        case 0x110530u: goto label_110530;
        case 0x110534u: goto label_110534;
        case 0x110538u: goto label_110538;
        case 0x11053cu: goto label_11053c;
        case 0x110540u: goto label_110540;
        case 0x110544u: goto label_110544;
        case 0x110548u: goto label_110548;
        case 0x11054cu: goto label_11054c;
        case 0x110550u: goto label_110550;
        case 0x110554u: goto label_110554;
        case 0x110558u: goto label_110558;
        case 0x11055cu: goto label_11055c;
        case 0x110560u: goto label_110560;
        case 0x110564u: goto label_110564;
        case 0x110568u: goto label_110568;
        case 0x11056cu: goto label_11056c;
        case 0x110570u: goto label_110570;
        case 0x110574u: goto label_110574;
        case 0x110578u: goto label_110578;
        case 0x11057cu: goto label_11057c;
        case 0x110580u: goto label_110580;
        case 0x110584u: goto label_110584;
        case 0x110588u: goto label_110588;
        case 0x11058cu: goto label_11058c;
        case 0x110590u: goto label_110590;
        case 0x110594u: goto label_110594;
        case 0x110598u: goto label_110598;
        case 0x11059cu: goto label_11059c;
        case 0x1105a0u: goto label_1105a0;
        case 0x1105a4u: goto label_1105a4;
        case 0x1105a8u: goto label_1105a8;
        case 0x1105acu: goto label_1105ac;
        case 0x1105b0u: goto label_1105b0;
        case 0x1105b4u: goto label_1105b4;
        case 0x1105b8u: goto label_1105b8;
        case 0x1105bcu: goto label_1105bc;
        case 0x1105c0u: goto label_1105c0;
        case 0x1105c4u: goto label_1105c4;
        case 0x1105c8u: goto label_1105c8;
        case 0x1105ccu: goto label_1105cc;
        case 0x1105d0u: goto label_1105d0;
        case 0x1105d4u: goto label_1105d4;
        case 0x1105d8u: goto label_1105d8;
        case 0x1105dcu: goto label_1105dc;
        case 0x1105e0u: goto label_1105e0;
        case 0x1105e4u: goto label_1105e4;
        case 0x1105e8u: goto label_1105e8;
        case 0x1105ecu: goto label_1105ec;
        case 0x1105f0u: goto label_1105f0;
        case 0x1105f4u: goto label_1105f4;
        case 0x1105f8u: goto label_1105f8;
        case 0x1105fcu: goto label_1105fc;
        case 0x110600u: goto label_110600;
        case 0x110604u: goto label_110604;
        case 0x110608u: goto label_110608;
        case 0x11060cu: goto label_11060c;
        case 0x110610u: goto label_110610;
        case 0x110614u: goto label_110614;
        case 0x110618u: goto label_110618;
        case 0x11061cu: goto label_11061c;
        case 0x110620u: goto label_110620;
        case 0x110624u: goto label_110624;
        case 0x110628u: goto label_110628;
        case 0x11062cu: goto label_11062c;
        case 0x110630u: goto label_110630;
        case 0x110634u: goto label_110634;
        case 0x110638u: goto label_110638;
        case 0x11063cu: goto label_11063c;
        case 0x110640u: goto label_110640;
        case 0x110644u: goto label_110644;
        case 0x110648u: goto label_110648;
        case 0x11064cu: goto label_11064c;
        case 0x110650u: goto label_110650;
        case 0x110654u: goto label_110654;
        case 0x110658u: goto label_110658;
        case 0x11065cu: goto label_11065c;
        case 0x110660u: goto label_110660;
        case 0x110664u: goto label_110664;
        case 0x110668u: goto label_110668;
        case 0x11066cu: goto label_11066c;
        case 0x110670u: goto label_110670;
        case 0x110674u: goto label_110674;
        case 0x110678u: goto label_110678;
        case 0x11067cu: goto label_11067c;
        case 0x110680u: goto label_110680;
        case 0x110684u: goto label_110684;
        case 0x110688u: goto label_110688;
        case 0x11068cu: goto label_11068c;
        case 0x110690u: goto label_110690;
        case 0x110694u: goto label_110694;
        case 0x110698u: goto label_110698;
        case 0x11069cu: goto label_11069c;
        case 0x1106a0u: goto label_1106a0;
        case 0x1106a4u: goto label_1106a4;
        case 0x1106a8u: goto label_1106a8;
        case 0x1106acu: goto label_1106ac;
        case 0x1106b0u: goto label_1106b0;
        case 0x1106b4u: goto label_1106b4;
        case 0x1106b8u: goto label_1106b8;
        case 0x1106bcu: goto label_1106bc;
        case 0x1106c0u: goto label_1106c0;
        case 0x1106c4u: goto label_1106c4;
        case 0x1106c8u: goto label_1106c8;
        case 0x1106ccu: goto label_1106cc;
        case 0x1106d0u: goto label_1106d0;
        case 0x1106d4u: goto label_1106d4;
        case 0x1106d8u: goto label_1106d8;
        case 0x1106dcu: goto label_1106dc;
        case 0x1106e0u: goto label_1106e0;
        case 0x1106e4u: goto label_1106e4;
        case 0x1106e8u: goto label_1106e8;
        case 0x1106ecu: goto label_1106ec;
        case 0x1106f0u: goto label_1106f0;
        case 0x1106f4u: goto label_1106f4;
        case 0x1106f8u: goto label_1106f8;
        case 0x1106fcu: goto label_1106fc;
        case 0x110700u: goto label_110700;
        case 0x110704u: goto label_110704;
        case 0x110708u: goto label_110708;
        case 0x11070cu: goto label_11070c;
        case 0x110710u: goto label_110710;
        case 0x110714u: goto label_110714;
        case 0x110718u: goto label_110718;
        case 0x11071cu: goto label_11071c;
        case 0x110720u: goto label_110720;
        case 0x110724u: goto label_110724;
        case 0x110728u: goto label_110728;
        case 0x11072cu: goto label_11072c;
        case 0x110730u: goto label_110730;
        case 0x110734u: goto label_110734;
        case 0x110738u: goto label_110738;
        case 0x11073cu: goto label_11073c;
        case 0x110740u: goto label_110740;
        case 0x110744u: goto label_110744;
        case 0x110748u: goto label_110748;
        case 0x11074cu: goto label_11074c;
        case 0x110750u: goto label_110750;
        case 0x110754u: goto label_110754;
        case 0x110758u: goto label_110758;
        case 0x11075cu: goto label_11075c;
        case 0x110760u: goto label_110760;
        case 0x110764u: goto label_110764;
        case 0x110768u: goto label_110768;
        case 0x11076cu: goto label_11076c;
        case 0x110770u: goto label_110770;
        case 0x110774u: goto label_110774;
        case 0x110778u: goto label_110778;
        case 0x11077cu: goto label_11077c;
        case 0x110780u: goto label_110780;
        case 0x110784u: goto label_110784;
        case 0x110788u: goto label_110788;
        case 0x11078cu: goto label_11078c;
        case 0x110790u: goto label_110790;
        case 0x110794u: goto label_110794;
        case 0x110798u: goto label_110798;
        case 0x11079cu: goto label_11079c;
        case 0x1107a0u: goto label_1107a0;
        case 0x1107a4u: goto label_1107a4;
        case 0x1107a8u: goto label_1107a8;
        case 0x1107acu: goto label_1107ac;
        case 0x1107b0u: goto label_1107b0;
        case 0x1107b4u: goto label_1107b4;
        case 0x1107b8u: goto label_1107b8;
        case 0x1107bcu: goto label_1107bc;
        case 0x1107c0u: goto label_1107c0;
        case 0x1107c4u: goto label_1107c4;
        case 0x1107c8u: goto label_1107c8;
        case 0x1107ccu: goto label_1107cc;
        case 0x1107d0u: goto label_1107d0;
        case 0x1107d4u: goto label_1107d4;
        case 0x1107d8u: goto label_1107d8;
        case 0x1107dcu: goto label_1107dc;
        case 0x1107e0u: goto label_1107e0;
        case 0x1107e4u: goto label_1107e4;
        case 0x1107e8u: goto label_1107e8;
        case 0x1107ecu: goto label_1107ec;
        case 0x1107f0u: goto label_1107f0;
        case 0x1107f4u: goto label_1107f4;
        case 0x1107f8u: goto label_1107f8;
        case 0x1107fcu: goto label_1107fc;
        case 0x110800u: goto label_110800;
        case 0x110804u: goto label_110804;
        case 0x110808u: goto label_110808;
        case 0x11080cu: goto label_11080c;
        case 0x110810u: goto label_110810;
        case 0x110814u: goto label_110814;
        case 0x110818u: goto label_110818;
        case 0x11081cu: goto label_11081c;
        case 0x110820u: goto label_110820;
        case 0x110824u: goto label_110824;
        case 0x110828u: goto label_110828;
        case 0x11082cu: goto label_11082c;
        case 0x110830u: goto label_110830;
        case 0x110834u: goto label_110834;
        case 0x110838u: goto label_110838;
        case 0x11083cu: goto label_11083c;
        case 0x110840u: goto label_110840;
        case 0x110844u: goto label_110844;
        case 0x110848u: goto label_110848;
        case 0x11084cu: goto label_11084c;
        case 0x110850u: goto label_110850;
        case 0x110854u: goto label_110854;
        case 0x110858u: goto label_110858;
        case 0x11085cu: goto label_11085c;
        case 0x110860u: goto label_110860;
        case 0x110864u: goto label_110864;
        case 0x110868u: goto label_110868;
        case 0x11086cu: goto label_11086c;
        case 0x110870u: goto label_110870;
        case 0x110874u: goto label_110874;
        case 0x110878u: goto label_110878;
        case 0x11087cu: goto label_11087c;
        case 0x110880u: goto label_110880;
        case 0x110884u: goto label_110884;
        case 0x110888u: goto label_110888;
        case 0x11088cu: goto label_11088c;
        case 0x110890u: goto label_110890;
        case 0x110894u: goto label_110894;
        case 0x110898u: goto label_110898;
        case 0x11089cu: goto label_11089c;
        case 0x1108a0u: goto label_1108a0;
        case 0x1108a4u: goto label_1108a4;
        case 0x1108a8u: goto label_1108a8;
        case 0x1108acu: goto label_1108ac;
        case 0x1108b0u: goto label_1108b0;
        case 0x1108b4u: goto label_1108b4;
        case 0x1108b8u: goto label_1108b8;
        case 0x1108bcu: goto label_1108bc;
        case 0x1108c0u: goto label_1108c0;
        case 0x1108c4u: goto label_1108c4;
        case 0x1108c8u: goto label_1108c8;
        case 0x1108ccu: goto label_1108cc;
        case 0x1108d0u: goto label_1108d0;
        case 0x1108d4u: goto label_1108d4;
        case 0x1108d8u: goto label_1108d8;
        case 0x1108dcu: goto label_1108dc;
        case 0x1108e0u: goto label_1108e0;
        case 0x1108e4u: goto label_1108e4;
        case 0x1108e8u: goto label_1108e8;
        case 0x1108ecu: goto label_1108ec;
        case 0x1108f0u: goto label_1108f0;
        case 0x1108f4u: goto label_1108f4;
        case 0x1108f8u: goto label_1108f8;
        case 0x1108fcu: goto label_1108fc;
        case 0x110900u: goto label_110900;
        case 0x110904u: goto label_110904;
        case 0x110908u: goto label_110908;
        case 0x11090cu: goto label_11090c;
        case 0x110910u: goto label_110910;
        case 0x110914u: goto label_110914;
        case 0x110918u: goto label_110918;
        case 0x11091cu: goto label_11091c;
        case 0x110920u: goto label_110920;
        case 0x110924u: goto label_110924;
        case 0x110928u: goto label_110928;
        case 0x11092cu: goto label_11092c;
        case 0x110930u: goto label_110930;
        case 0x110934u: goto label_110934;
        case 0x110938u: goto label_110938;
        case 0x11093cu: goto label_11093c;
        case 0x110940u: goto label_110940;
        case 0x110944u: goto label_110944;
        case 0x110948u: goto label_110948;
        case 0x11094cu: goto label_11094c;
        case 0x110950u: goto label_110950;
        case 0x110954u: goto label_110954;
        case 0x110958u: goto label_110958;
        case 0x11095cu: goto label_11095c;
        case 0x110960u: goto label_110960;
        case 0x110964u: goto label_110964;
        case 0x110968u: goto label_110968;
        case 0x11096cu: goto label_11096c;
        case 0x110970u: goto label_110970;
        case 0x110974u: goto label_110974;
        case 0x110978u: goto label_110978;
        case 0x11097cu: goto label_11097c;
        case 0x110980u: goto label_110980;
        case 0x110984u: goto label_110984;
        case 0x110988u: goto label_110988;
        case 0x11098cu: goto label_11098c;
        case 0x110990u: goto label_110990;
        case 0x110994u: goto label_110994;
        case 0x110998u: goto label_110998;
        case 0x11099cu: goto label_11099c;
        case 0x1109a0u: goto label_1109a0;
        case 0x1109a4u: goto label_1109a4;
        case 0x1109a8u: goto label_1109a8;
        case 0x1109acu: goto label_1109ac;
        case 0x1109b0u: goto label_1109b0;
        case 0x1109b4u: goto label_1109b4;
        case 0x1109b8u: goto label_1109b8;
        case 0x1109bcu: goto label_1109bc;
        case 0x1109c0u: goto label_1109c0;
        case 0x1109c4u: goto label_1109c4;
        case 0x1109c8u: goto label_1109c8;
        case 0x1109ccu: goto label_1109cc;
        case 0x1109d0u: goto label_1109d0;
        case 0x1109d4u: goto label_1109d4;
        case 0x1109d8u: goto label_1109d8;
        case 0x1109dcu: goto label_1109dc;
        case 0x1109e0u: goto label_1109e0;
        case 0x1109e4u: goto label_1109e4;
        case 0x1109e8u: goto label_1109e8;
        case 0x1109ecu: goto label_1109ec;
        case 0x1109f0u: goto label_1109f0;
        case 0x1109f4u: goto label_1109f4;
        case 0x1109f8u: goto label_1109f8;
        case 0x1109fcu: goto label_1109fc;
        case 0x110a00u: goto label_110a00;
        case 0x110a04u: goto label_110a04;
        case 0x110a08u: goto label_110a08;
        case 0x110a0cu: goto label_110a0c;
        case 0x110a10u: goto label_110a10;
        case 0x110a14u: goto label_110a14;
        case 0x110a18u: goto label_110a18;
        case 0x110a1cu: goto label_110a1c;
        case 0x110a20u: goto label_110a20;
        case 0x110a24u: goto label_110a24;
        case 0x110a28u: goto label_110a28;
        case 0x110a2cu: goto label_110a2c;
        case 0x110a30u: goto label_110a30;
        case 0x110a34u: goto label_110a34;
        case 0x110a38u: goto label_110a38;
        case 0x110a3cu: goto label_110a3c;
        case 0x110a40u: goto label_110a40;
        case 0x110a44u: goto label_110a44;
        case 0x110a48u: goto label_110a48;
        case 0x110a4cu: goto label_110a4c;
        case 0x110a50u: goto label_110a50;
        case 0x110a54u: goto label_110a54;
        case 0x110a58u: goto label_110a58;
        case 0x110a5cu: goto label_110a5c;
        case 0x110a60u: goto label_110a60;
        case 0x110a64u: goto label_110a64;
        case 0x110a68u: goto label_110a68;
        case 0x110a6cu: goto label_110a6c;
        case 0x110a70u: goto label_110a70;
        case 0x110a74u: goto label_110a74;
        case 0x110a78u: goto label_110a78;
        case 0x110a7cu: goto label_110a7c;
        case 0x110a80u: goto label_110a80;
        case 0x110a84u: goto label_110a84;
        case 0x110a88u: goto label_110a88;
        case 0x110a8cu: goto label_110a8c;
        case 0x110a90u: goto label_110a90;
        case 0x110a94u: goto label_110a94;
        case 0x110a98u: goto label_110a98;
        case 0x110a9cu: goto label_110a9c;
        case 0x110aa0u: goto label_110aa0;
        case 0x110aa4u: goto label_110aa4;
        case 0x110aa8u: goto label_110aa8;
        case 0x110aacu: goto label_110aac;
        case 0x110ab0u: goto label_110ab0;
        case 0x110ab4u: goto label_110ab4;
        case 0x110ab8u: goto label_110ab8;
        case 0x110abcu: goto label_110abc;
        case 0x110ac0u: goto label_110ac0;
        case 0x110ac4u: goto label_110ac4;
        case 0x110ac8u: goto label_110ac8;
        case 0x110accu: goto label_110acc;
        case 0x110ad0u: goto label_110ad0;
        case 0x110ad4u: goto label_110ad4;
        case 0x110ad8u: goto label_110ad8;
        case 0x110adcu: goto label_110adc;
        case 0x110ae0u: goto label_110ae0;
        case 0x110ae4u: goto label_110ae4;
        case 0x110ae8u: goto label_110ae8;
        case 0x110aecu: goto label_110aec;
        case 0x110af0u: goto label_110af0;
        case 0x110af4u: goto label_110af4;
        case 0x110af8u: goto label_110af8;
        case 0x110afcu: goto label_110afc;
        case 0x110b00u: goto label_110b00;
        case 0x110b04u: goto label_110b04;
        case 0x110b08u: goto label_110b08;
        case 0x110b0cu: goto label_110b0c;
        case 0x110b10u: goto label_110b10;
        case 0x110b14u: goto label_110b14;
        case 0x110b18u: goto label_110b18;
        case 0x110b1cu: goto label_110b1c;
        default: break;
    }

    ctx->pc = 0x1101a8u;

label_1101a8:
    // 0x1101a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1101a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1101ac:
    // 0x1101ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1101acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1101b0:
    // 0x1101b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1101b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1101b4:
    // 0x1101b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1101b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1101b8:
    // 0x1101b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1101b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1101bc:
    // 0x1101bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1101bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1101c0:
    // 0x1101c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1101c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1101c4:
    // 0x1101c4: 0xc042cba  jal         func_10B2E8
label_1101c8:
    if (ctx->pc == 0x1101C8u) {
        ctx->pc = 0x1101C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101C4u;
        // 0x1101c8: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101CCu;
        goto label_1101cc;
    }
    ctx->pc = 0x1101C4u;
    SET_GPR_U32(ctx, 31, 0x1101CCu);
    ctx->pc = 0x1101C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101C4u;
    // 0x1101c8: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x1101C4u, 0x1101CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101CCu;
label_1101cc:
    // 0x1101cc: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_1101d0:
    if (ctx->pc == 0x1101D0u) {
        ctx->pc = 0x1101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101CCu;
        // 0x1101d0: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101D4u;
        goto label_1101d4;
    }
    ctx->pc = 0x1101CCu;
    {
        const bool branch_taken_0x1101cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1101cc) {
            ctx->pc = 0x1101D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1101CCu;
            // 0x1101d0: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110260u;
            goto label_110260;
        }
    }
    ctx->pc = 0x1101D4u;
label_1101d4:
    // 0x1101d4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x1101d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_1101d8:
    // 0x1101d8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1101dc:
    if (ctx->pc == 0x1101DCu) {
        ctx->pc = 0x1101DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101D8u;
        // 0x1101dc: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101E0u;
        goto label_1101e0;
    }
    ctx->pc = 0x1101D8u;
    {
        const bool branch_taken_0x1101d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1101d8) {
            ctx->pc = 0x1101DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1101D8u;
            // 0x1101dc: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110260u;
            goto label_110260;
        }
    }
    ctx->pc = 0x1101E0u;
label_1101e0:
    // 0x1101e0: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x1101e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_1101e4:
    // 0x1101e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1101e8:
    if (ctx->pc == 0x1101E8u) {
        ctx->pc = 0x1101E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E4u;
        // 0x1101e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101ECu;
        goto label_1101ec;
    }
    ctx->pc = 0x1101E4u;
    {
        const bool branch_taken_0x1101e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E4u;
        // 0x1101e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101e4) {
            ctx->pc = 0x1101F4u;
            goto label_1101f4;
        }
    }
    ctx->pc = 0x1101ECu;
label_1101ec:
    // 0x1101ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1101f0:
    if (ctx->pc == 0x1101F0u) {
        ctx->pc = 0x1101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101ECu;
        // 0x1101f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101F4u;
        goto label_1101f4;
    }
    ctx->pc = 0x1101ECu;
    {
        const bool branch_taken_0x1101ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101ECu;
        // 0x1101f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101ec) {
            ctx->pc = 0x110208u;
            goto label_110208;
        }
    }
    ctx->pc = 0x1101F4u;
label_1101f4:
    // 0x1101f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1101f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1101f8:
    // 0x1101f8: 0xc04acb8  jal         func_12B2E0
label_1101fc:
    if (ctx->pc == 0x1101FCu) {
        ctx->pc = 0x1101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101F8u;
        // 0x1101fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110200u;
        goto label_110200;
    }
    ctx->pc = 0x1101F8u;
    SET_GPR_U32(ctx, 31, 0x110200u);
    ctx->pc = 0x1101FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101F8u;
    // 0x1101fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B2E0u, 0x1101F8u, 0x110200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110200u;
label_110200:
    // 0x110200: 0x10000004  b           . + 4 + (0x4 << 2)
label_110204:
    if (ctx->pc == 0x110204u) {
        ctx->pc = 0x110204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110200u;
        // 0x110204: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110208u;
        goto label_110208;
    }
    ctx->pc = 0x110200u;
    {
        const bool branch_taken_0x110200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110200u;
        // 0x110204: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110200) {
            ctx->pc = 0x110214u;
            goto label_110214;
        }
    }
    ctx->pc = 0x110208u;
label_110208:
    // 0x110208: 0xc04acb8  jal         func_12B2E0
label_11020c:
    if (ctx->pc == 0x11020Cu) {
        ctx->pc = 0x11020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110208u;
        // 0x11020c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110210u;
        goto label_110210;
    }
    ctx->pc = 0x110208u;
    SET_GPR_U32(ctx, 31, 0x110210u);
    ctx->pc = 0x11020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110208u;
    // 0x11020c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B2E0u, 0x110208u, 0x110210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110210u;
label_110210:
    // 0x110210: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_110214:
    // 0x110214: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_110218:
    if (ctx->pc == 0x110218u) {
        ctx->pc = 0x110218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110214u;
        // 0x110218: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11021Cu;
        goto label_11021c;
    }
    ctx->pc = 0x110214u;
    {
        const bool branch_taken_0x110214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110214) {
            ctx->pc = 0x110218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110214u;
            // 0x110218: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110260u;
            goto label_110260;
        }
    }
    ctx->pc = 0x11021Cu;
label_11021c:
    // 0x11021c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x11021cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_110220:
    // 0x110220: 0x24020363  addiu       $v0, $zero, 0x363
    ctx->pc = 0x110220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
label_110224:
    // 0x110224: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_110228:
    if (ctx->pc == 0x110228u) {
        ctx->pc = 0x110228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110224u;
        // 0x110228: 0x240203b7  addiu       $v0, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11022Cu;
        goto label_11022c;
    }
    ctx->pc = 0x110224u;
    {
        const bool branch_taken_0x110224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110224u;
        // 0x110228: 0x240203b7  addiu       $v0, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110224) {
            ctx->pc = 0x110234u;
            goto label_110234;
        }
    }
    ctx->pc = 0x11022Cu;
label_11022c:
    // 0x11022c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_110230:
    if (ctx->pc == 0x110230u) {
        ctx->pc = 0x110230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11022Cu;
        // 0x110230: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110234u;
        goto label_110234;
    }
    ctx->pc = 0x11022Cu;
    {
        const bool branch_taken_0x11022c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11022c) {
            ctx->pc = 0x110230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11022Cu;
            // 0x110230: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110260u;
            goto label_110260;
        }
    }
    ctx->pc = 0x110234u;
label_110234:
    // 0x110234: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x110234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_110238:
    // 0x110238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11023c:
    // 0x11023c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_110240:
    // 0x110240: 0x24060137  addiu       $a2, $zero, 0x137
    ctx->pc = 0x110240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
label_110244:
    // 0x110244: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x110244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110248:
    // 0x110248: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11024c:
    // 0x11024c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11024cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110250:
    // 0x110250: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x110250u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110254:
    // 0x110254: 0xc0b2e92  jal         func_2CBA48
label_110258:
    if (ctx->pc == 0x110258u) {
        ctx->pc = 0x110258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110254u;
        // 0x110258: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11025Cu;
        goto label_11025c;
    }
    ctx->pc = 0x110254u;
    SET_GPR_U32(ctx, 31, 0x11025Cu);
    ctx->pc = 0x110258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110254u;
    // 0x110258: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x110254u, 0x11025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11025Cu;
label_11025c:
    // 0x11025c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11025cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_110260:
    // 0x110260: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_110264:
    if (ctx->pc == 0x110264u) {
        ctx->pc = 0x110264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110260u;
        // 0x110264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110268u;
        goto label_110268;
    }
    ctx->pc = 0x110260u;
    {
        const bool branch_taken_0x110260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110260u;
        // 0x110264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110260) {
            ctx->pc = 0x110278u;
            goto label_110278;
        }
    }
    ctx->pc = 0x110268u;
label_110268:
    // 0x110268: 0x506201f3  beql        $v1, $v0, . + 4 + (0x1F3 << 2)
label_11026c:
    if (ctx->pc == 0x11026Cu) {
        ctx->pc = 0x11026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110268u;
        // 0x11026c: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110270u;
        goto label_110270;
    }
    ctx->pc = 0x110268u;
    {
        const bool branch_taken_0x110268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x110268) {
            ctx->pc = 0x11026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110268u;
            // 0x11026c: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A38u;
            goto label_110a38;
        }
    }
    ctx->pc = 0x110270u;
label_110270:
    // 0x110270: 0x1000021f  b           . + 4 + (0x21F << 2)
label_110274:
    if (ctx->pc == 0x110274u) {
        ctx->pc = 0x110278u;
        goto label_110278;
    }
    ctx->pc = 0x110270u;
    {
        const bool branch_taken_0x110270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110270) {
            ctx->pc = 0x110AF0u;
            goto label_110af0;
        }
    }
    ctx->pc = 0x110278u;
label_110278:
    // 0x110278: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x110278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_11027c:
    // 0x11027c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110280:
    // 0x110280: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x110280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_110284:
    // 0x110284: 0xc049150  jal         func_124540
label_110288:
    if (ctx->pc == 0x110288u) {
        ctx->pc = 0x110288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110284u;
        // 0x110288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11028Cu;
        goto label_11028c;
    }
    ctx->pc = 0x110284u;
    SET_GPR_U32(ctx, 31, 0x11028Cu);
    ctx->pc = 0x110288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110284u;
    // 0x110288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x110284u, 0x11028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11028Cu;
label_11028c:
    // 0x11028c: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x11028cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_110290:
    // 0x110290: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_110294:
    if (ctx->pc == 0x110294u) {
        ctx->pc = 0x110294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110290u;
        // 0x110294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110298u;
        goto label_110298;
    }
    ctx->pc = 0x110290u;
    {
        const bool branch_taken_0x110290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110290u;
        // 0x110294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110290) {
            ctx->pc = 0x1102A0u;
            goto label_1102a0;
        }
    }
    ctx->pc = 0x110298u;
label_110298:
    // 0x110298: 0x506200df  beql        $v1, $v0, . + 4 + (0xDF << 2)
label_11029c:
    if (ctx->pc == 0x11029Cu) {
        ctx->pc = 0x11029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110298u;
        // 0x11029c: 0xa2201684  sb          $zero, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102A0u;
        goto label_1102a0;
    }
    ctx->pc = 0x110298u;
    {
        const bool branch_taken_0x110298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x110298) {
            ctx->pc = 0x11029Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110298u;
            // 0x11029c: 0xa2201684  sb          $zero, 0x1684($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110618u;
            goto label_110618;
        }
    }
    ctx->pc = 0x1102A0u;
label_1102a0:
    // 0x1102a0: 0xa2201684  sb          $zero, 0x1684($s1)
    ctx->pc = 0x1102a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
label_1102a4:
    // 0x1102a4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x1102a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_1102a8:
    // 0x1102a8: 0x944402fe  lhu         $a0, 0x2FE($v0)
    ctx->pc = 0x1102a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_1102ac:
    // 0x1102ac: 0x28830379  slti        $v1, $a0, 0x379
    ctx->pc = 0x1102acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)889) ? 1 : 0);
label_1102b0:
    // 0x1102b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1102b4:
    if (ctx->pc == 0x1102B4u) {
        ctx->pc = 0x1102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102B0u;
        // 0x1102b4: 0x28820377  slti        $v0, $a0, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102B8u;
        goto label_1102b8;
    }
    ctx->pc = 0x1102B0u;
    {
        const bool branch_taken_0x1102b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102B0u;
        // 0x1102b4: 0x28820377  slti        $v0, $a0, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102b0) {
            ctx->pc = 0x1102D0u;
            goto label_1102d0;
        }
    }
    ctx->pc = 0x1102B8u;
label_1102b8:
    // 0x1102b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1102bc:
    if (ctx->pc == 0x1102BCu) {
        ctx->pc = 0x1102BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102B8u;
        // 0x1102bc: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102C0u;
        goto label_1102c0;
    }
    ctx->pc = 0x1102B8u;
    {
        const bool branch_taken_0x1102b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102B8u;
        // 0x1102bc: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102b8) {
            ctx->pc = 0x1102F8u;
            goto label_1102f8;
        }
    }
    ctx->pc = 0x1102C0u;
label_1102c0:
    // 0x1102c0: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_1102c4:
    if (ctx->pc == 0x1102C4u) {
        ctx->pc = 0x1102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C0u;
        // 0x1102c4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102C8u;
        goto label_1102c8;
    }
    ctx->pc = 0x1102C0u;
    {
        const bool branch_taken_0x1102c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C0u;
        // 0x1102c4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102c0) {
            ctx->pc = 0x11030Cu;
            goto label_11030c;
        }
    }
    ctx->pc = 0x1102C8u;
label_1102c8:
    // 0x1102c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1102cc:
    if (ctx->pc == 0x1102CCu) {
        ctx->pc = 0x1102CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C8u;
        // 0x1102cc: 0x8c4403b4  lw          $a0, 0x3B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102D0u;
        goto label_1102d0;
    }
    ctx->pc = 0x1102C8u;
    {
        const bool branch_taken_0x1102c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C8u;
        // 0x1102cc: 0x8c4403b4  lw          $a0, 0x3B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102c8) {
            ctx->pc = 0x1102ECu;
            goto label_1102ec;
        }
    }
    ctx->pc = 0x1102D0u;
label_1102d0:
    // 0x1102d0: 0x288203ac  slti        $v0, $a0, 0x3AC
    ctx->pc = 0x1102d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)940) ? 1 : 0);
label_1102d4:
    // 0x1102d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1102d8:
    if (ctx->pc == 0x1102D8u) {
        ctx->pc = 0x1102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102D4u;
        // 0x1102d8: 0x288203aa  slti        $v0, $a0, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102DCu;
        goto label_1102dc;
    }
    ctx->pc = 0x1102D4u;
    {
        const bool branch_taken_0x1102d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102D4u;
        // 0x1102d8: 0x288203aa  slti        $v0, $a0, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102d4) {
            ctx->pc = 0x1102E4u;
            goto label_1102e4;
        }
    }
    ctx->pc = 0x1102DCu;
label_1102dc:
    // 0x1102dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1102e0:
    if (ctx->pc == 0x1102E0u) {
        ctx->pc = 0x1102E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102DCu;
        // 0x1102e0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102E4u;
        goto label_1102e4;
    }
    ctx->pc = 0x1102DCu;
    {
        const bool branch_taken_0x1102dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1102dc) {
            ctx->pc = 0x1102E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1102DCu;
            // 0x1102e0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11030Cu;
            goto label_11030c;
        }
    }
    ctx->pc = 0x1102E4u;
label_1102e4:
    // 0x1102e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1102e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1102e8:
    // 0x1102e8: 0x8c4403b4  lw          $a0, 0x3B4($v0)
    ctx->pc = 0x1102e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 948)));
label_1102ec:
    // 0x1102ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1102ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1102f0:
    // 0x1102f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1102f4:
    if (ctx->pc == 0x1102F4u) {
        ctx->pc = 0x1102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102F0u;
        // 0x1102f4: 0x8c4303b8  lw          $v1, 0x3B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102F8u;
        goto label_1102f8;
    }
    ctx->pc = 0x1102F0u;
    {
        const bool branch_taken_0x1102f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102F0u;
        // 0x1102f4: 0x8c4303b8  lw          $v1, 0x3B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102f0) {
            ctx->pc = 0x110318u;
            goto label_110318;
        }
    }
    ctx->pc = 0x1102F8u;
label_1102f8:
    // 0x1102f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1102f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1102fc:
    // 0x1102fc: 0x8c44090c  lw          $a0, 0x90C($v0)
    ctx->pc = 0x1102fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2316)));
label_110300:
    // 0x110300: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110304:
    // 0x110304: 0x10000004  b           . + 4 + (0x4 << 2)
label_110308:
    if (ctx->pc == 0x110308u) {
        ctx->pc = 0x110308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110304u;
        // 0x110308: 0x8c430910  lw          $v1, 0x910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11030Cu;
        goto label_11030c;
    }
    ctx->pc = 0x110304u;
    {
        const bool branch_taken_0x110304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110304u;
        // 0x110308: 0x8c430910  lw          $v1, 0x910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110304) {
            ctx->pc = 0x110318u;
            goto label_110318;
        }
    }
    ctx->pc = 0x11030Cu;
label_11030c:
    // 0x11030c: 0x8c440924  lw          $a0, 0x924($v0)
    ctx->pc = 0x11030cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2340)));
label_110310:
    // 0x110310: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110314:
    // 0x110314: 0x8c430928  lw          $v1, 0x928($v0)
    ctx->pc = 0x110314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2344)));
label_110318:
    // 0x110318: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x110318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11031c:
    // 0x11031c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x11031cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_110320:
    // 0x110320: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x110320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_110324:
    // 0x110324: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
label_110328:
    if (ctx->pc == 0x110328u) {
        ctx->pc = 0x11032Cu;
        goto label_11032c;
    }
    ctx->pc = 0x110324u;
    {
        const bool branch_taken_0x110324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110324) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x11032Cu;
label_11032c:
    // 0x11032c: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x11032cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_110330:
    // 0x110330: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x110330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
label_110334:
    // 0x110334: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x110334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
label_110338:
    // 0x110338: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_11033c:
    if (ctx->pc == 0x11033Cu) {
        ctx->pc = 0x11033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110338u;
        // 0x11033c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110340u;
        goto label_110340;
    }
    ctx->pc = 0x110338u;
    {
        const bool branch_taken_0x110338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110338u;
        // 0x11033c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110338) {
            ctx->pc = 0x110358u;
            goto label_110358;
        }
    }
    ctx->pc = 0x110340u;
label_110340:
    // 0x110340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x110340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_110344:
    // 0x110344: 0x2442bde0  addiu       $v0, $v0, -0x4220
    ctx->pc = 0x110344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950368));
label_110348:
    // 0x110348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11034c:
    // 0x11034c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_110350:
    // 0x110350: 0x800008  jr          $a0
label_110354:
    if (ctx->pc == 0x110354u) {
        ctx->pc = 0x110358u;
        goto label_110358;
    }
    ctx->pc = 0x110350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110358u: goto label_110358;
            case 0x110390u: goto label_110390;
            case 0x1103C8u: goto label_1103c8;
            case 0x110400u: goto label_110400;
            case 0x110438u: goto label_110438;
            case 0x110470u: goto label_110470;
            case 0x1104A8u: goto label_1104a8;
            case 0x1104E0u: goto label_1104e0;
            case 0x110518u: goto label_110518;
            case 0x110550u: goto label_110550;
            case 0x110588u: goto label_110588;
            case 0x1105B8u: goto label_1105b8;
            case 0x1105E8u: goto label_1105e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110358u;
label_110358:
    // 0x110358: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_11035c:
    // 0x11035c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11035cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110360:
    // 0x110360: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x110360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_110364:
    // 0x110364: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110368:
    // 0x110368: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_11036c:
    // 0x11036c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11036cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110370:
    // 0x110370: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x110370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_110374:
    // 0x110374: 0xc042902  jal         func_10A408
label_110378:
    if (ctx->pc == 0x110378u) {
        ctx->pc = 0x110378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110374u;
        // 0x110378: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11037Cu;
        goto label_11037c;
    }
    ctx->pc = 0x110374u;
    SET_GPR_U32(ctx, 31, 0x11037Cu);
    ctx->pc = 0x110378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110374u;
    // 0x110378: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110374u, 0x11037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11037Cu;
label_11037c:
    // 0x11037c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110380:
    // 0x110380: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_110384:
    // 0x110384: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110388:
    // 0x110388: 0x1000014b  b           . + 4 + (0x14B << 2)
label_11038c:
    if (ctx->pc == 0x11038Cu) {
        ctx->pc = 0x11038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110388u;
        // 0x11038c: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110390u;
        goto label_110390;
    }
    ctx->pc = 0x110388u;
    {
        const bool branch_taken_0x110388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110388u;
        // 0x11038c: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110388) {
            ctx->pc = 0x1108B8u;
            goto label_1108b8;
        }
    }
    ctx->pc = 0x110390u;
label_110390:
    // 0x110390: 0x8ce203bc  lw          $v0, 0x3BC($a3)
    ctx->pc = 0x110390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 956)));
label_110394:
    // 0x110394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110398:
    // 0x110398: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x110398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11039c:
    // 0x11039c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1103a0:
    // 0x1103a0: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1103a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1103a4:
    // 0x1103a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1103a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1103a8:
    // 0x1103a8: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1103a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1103ac:
    // 0x1103ac: 0xc042902  jal         func_10A408
label_1103b0:
    if (ctx->pc == 0x1103B0u) {
        ctx->pc = 0x1103B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103ACu;
        // 0x1103b0: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103B4u;
        goto label_1103b4;
    }
    ctx->pc = 0x1103ACu;
    SET_GPR_U32(ctx, 31, 0x1103B4u);
    ctx->pc = 0x1103B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103ACu;
    // 0x1103b0: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1103ACu, 0x1103B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103B4u;
label_1103b4:
    // 0x1103b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1103b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1103b8:
    // 0x1103b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1103b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1103bc:
    // 0x1103bc: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1103bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1103c0:
    // 0x1103c0: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1103c4:
    if (ctx->pc == 0x1103C4u) {
        ctx->pc = 0x1103C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C0u;
        // 0x1103c4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103C8u;
        goto label_1103c8;
    }
    ctx->pc = 0x1103C0u;
    {
        const bool branch_taken_0x1103c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C0u;
        // 0x1103c4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103c0) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x1103C8u;
label_1103c8:
    // 0x1103c8: 0x8ce203bc  lw          $v0, 0x3BC($a3)
    ctx->pc = 0x1103c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 956)));
label_1103cc:
    // 0x1103cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1103ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1103d0:
    // 0x1103d0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1103d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1103d4:
    // 0x1103d4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1103d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1103d8:
    // 0x1103d8: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1103d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1103dc:
    // 0x1103dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1103dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1103e0:
    // 0x1103e0: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1103e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1103e4:
    // 0x1103e4: 0xc042902  jal         func_10A408
label_1103e8:
    if (ctx->pc == 0x1103E8u) {
        ctx->pc = 0x1103E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103E4u;
        // 0x1103e8: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103ECu;
        goto label_1103ec;
    }
    ctx->pc = 0x1103E4u;
    SET_GPR_U32(ctx, 31, 0x1103ECu);
    ctx->pc = 0x1103E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103E4u;
    // 0x1103e8: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1103E4u, 0x1103ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103ECu;
label_1103ec:
    // 0x1103ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1103ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1103f0:
    // 0x1103f0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1103f4:
    // 0x1103f4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1103f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1103f8:
    // 0x1103f8: 0x10000141  b           . + 4 + (0x141 << 2)
label_1103fc:
    if (ctx->pc == 0x1103FCu) {
        ctx->pc = 0x1103FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F8u;
        // 0x1103fc: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110400u;
        goto label_110400;
    }
    ctx->pc = 0x1103F8u;
    {
        const bool branch_taken_0x1103f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F8u;
        // 0x1103fc: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103f8) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x110400u;
label_110400:
    // 0x110400: 0x8ce203bc  lw          $v0, 0x3BC($a3)
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 956)));
label_110404:
    // 0x110404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110408:
    // 0x110408: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_11040c:
    // 0x11040c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11040cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110410:
    // 0x110410: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110414:
    // 0x110414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110418:
    // 0x110418: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x110418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_11041c:
    // 0x11041c: 0xc042902  jal         func_10A408
label_110420:
    if (ctx->pc == 0x110420u) {
        ctx->pc = 0x110420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11041Cu;
        // 0x110420: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110424u;
        goto label_110424;
    }
    ctx->pc = 0x11041Cu;
    SET_GPR_U32(ctx, 31, 0x110424u);
    ctx->pc = 0x110420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11041Cu;
    // 0x110420: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11041Cu, 0x110424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110424u;
label_110424:
    // 0x110424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110428:
    // 0x110428: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_11042c:
    // 0x11042c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110430:
    // 0x110430: 0x10000133  b           . + 4 + (0x133 << 2)
label_110434:
    if (ctx->pc == 0x110434u) {
        ctx->pc = 0x110434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110430u;
        // 0x110434: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110438u;
        goto label_110438;
    }
    ctx->pc = 0x110430u;
    {
        const bool branch_taken_0x110430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110430u;
        // 0x110434: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110430) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x110438u;
label_110438:
    // 0x110438: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x110438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_11043c:
    // 0x11043c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110440:
    // 0x110440: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x110440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_110444:
    // 0x110444: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110448:
    // 0x110448: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_11044c:
    // 0x11044c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11044cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110450:
    // 0x110450: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x110450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_110454:
    // 0x110454: 0xc042902  jal         func_10A408
label_110458:
    if (ctx->pc == 0x110458u) {
        ctx->pc = 0x110458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110454u;
        // 0x110458: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11045Cu;
        goto label_11045c;
    }
    ctx->pc = 0x110454u;
    SET_GPR_U32(ctx, 31, 0x11045Cu);
    ctx->pc = 0x110458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110454u;
    // 0x110458: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110454u, 0x11045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11045Cu;
label_11045c:
    // 0x11045c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110460:
    // 0x110460: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x110460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_110464:
    // 0x110464: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110468:
    // 0x110468: 0x10000137  b           . + 4 + (0x137 << 2)
label_11046c:
    if (ctx->pc == 0x11046Cu) {
        ctx->pc = 0x11046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110468u;
        // 0x11046c: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110470u;
        goto label_110470;
    }
    ctx->pc = 0x110468u;
    {
        const bool branch_taken_0x110468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110468u;
        // 0x11046c: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110468) {
            ctx->pc = 0x110948u;
            goto label_110948;
        }
    }
    ctx->pc = 0x110470u;
label_110470:
    // 0x110470: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x110470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_110474:
    // 0x110474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110478:
    // 0x110478: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x110478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11047c:
    // 0x11047c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11047cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110480:
    // 0x110480: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110484:
    // 0x110484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110488:
    // 0x110488: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x110488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_11048c:
    // 0x11048c: 0xc042902  jal         func_10A408
label_110490:
    if (ctx->pc == 0x110490u) {
        ctx->pc = 0x110490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11048Cu;
        // 0x110490: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110494u;
        goto label_110494;
    }
    ctx->pc = 0x11048Cu;
    SET_GPR_U32(ctx, 31, 0x110494u);
    ctx->pc = 0x110490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11048Cu;
    // 0x110490: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11048Cu, 0x110494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110494u;
label_110494:
    // 0x110494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110498:
    // 0x110498: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x110498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11049c:
    // 0x11049c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11049cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1104a0:
    // 0x1104a0: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_1104a4:
    if (ctx->pc == 0x1104A4u) {
        ctx->pc = 0x1104A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104A0u;
        // 0x1104a4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1104A8u;
        goto label_1104a8;
    }
    ctx->pc = 0x1104A0u;
    {
        const bool branch_taken_0x1104a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104A0u;
        // 0x1104a4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104a0) {
            ctx->pc = 0x110840u;
            goto label_110840;
        }
    }
    ctx->pc = 0x1104A8u;
label_1104a8:
    // 0x1104a8: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x1104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_1104ac:
    // 0x1104ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1104acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1104b0:
    // 0x1104b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1104b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1104b4:
    // 0x1104b4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1104b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1104b8:
    // 0x1104b8: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1104b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1104bc:
    // 0x1104bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1104bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1104c0:
    // 0x1104c0: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1104c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1104c4:
    // 0x1104c4: 0xc042902  jal         func_10A408
label_1104c8:
    if (ctx->pc == 0x1104C8u) {
        ctx->pc = 0x1104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104C4u;
        // 0x1104c8: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1104CCu;
        goto label_1104cc;
    }
    ctx->pc = 0x1104C4u;
    SET_GPR_U32(ctx, 31, 0x1104CCu);
    ctx->pc = 0x1104C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104C4u;
    // 0x1104c8: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1104C4u, 0x1104CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104CCu;
label_1104cc:
    // 0x1104cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1104ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1104d0:
    // 0x1104d0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1104d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1104d4:
    // 0x1104d4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1104d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1104d8:
    // 0x1104d8: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1104dc:
    if (ctx->pc == 0x1104DCu) {
        ctx->pc = 0x1104DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104D8u;
        // 0x1104dc: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1104E0u;
        goto label_1104e0;
    }
    ctx->pc = 0x1104D8u;
    {
        const bool branch_taken_0x1104d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104D8u;
        // 0x1104dc: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104d8) {
            ctx->pc = 0x110948u;
            goto label_110948;
        }
    }
    ctx->pc = 0x1104E0u;
label_1104e0:
    // 0x1104e0: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x1104e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_1104e4:
    // 0x1104e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1104e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1104e8:
    // 0x1104e8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1104e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1104ec:
    // 0x1104ec: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1104ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1104f0:
    // 0x1104f0: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1104f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1104f4:
    // 0x1104f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1104f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1104f8:
    // 0x1104f8: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1104f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1104fc:
    // 0x1104fc: 0xc042902  jal         func_10A408
label_110500:
    if (ctx->pc == 0x110500u) {
        ctx->pc = 0x110500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104FCu;
        // 0x110500: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110504u;
        goto label_110504;
    }
    ctx->pc = 0x1104FCu;
    SET_GPR_U32(ctx, 31, 0x110504u);
    ctx->pc = 0x110500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104FCu;
    // 0x110500: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1104FCu, 0x110504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110504u;
label_110504:
    // 0x110504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110508:
    // 0x110508: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_11050c:
    // 0x11050c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110510:
    // 0x110510: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_110514:
    if (ctx->pc == 0x110514u) {
        ctx->pc = 0x110514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110510u;
        // 0x110514: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110518u;
        goto label_110518;
    }
    ctx->pc = 0x110510u;
    {
        const bool branch_taken_0x110510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110510u;
        // 0x110514: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110510) {
            ctx->pc = 0x1108B8u;
            goto label_1108b8;
        }
    }
    ctx->pc = 0x110518u;
label_110518:
    // 0x110518: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x110518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_11051c:
    // 0x11051c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110520:
    // 0x110520: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_110524:
    // 0x110524: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110528:
    // 0x110528: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_11052c:
    // 0x11052c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11052cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110530:
    // 0x110530: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x110530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_110534:
    // 0x110534: 0xc042902  jal         func_10A408
label_110538:
    if (ctx->pc == 0x110538u) {
        ctx->pc = 0x110538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110534u;
        // 0x110538: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11053Cu;
        goto label_11053c;
    }
    ctx->pc = 0x110534u;
    SET_GPR_U32(ctx, 31, 0x11053Cu);
    ctx->pc = 0x110538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110534u;
    // 0x110538: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110534u, 0x11053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11053Cu;
label_11053c:
    // 0x11053c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110540:
    // 0x110540: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_110544:
    // 0x110544: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110548:
    // 0x110548: 0x100000ed  b           . + 4 + (0xED << 2)
label_11054c:
    if (ctx->pc == 0x11054Cu) {
        ctx->pc = 0x11054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110548u;
        // 0x11054c: 0x24070034  addiu       $a3, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110550u;
        goto label_110550;
    }
    ctx->pc = 0x110548u;
    {
        const bool branch_taken_0x110548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110548u;
        // 0x11054c: 0x24070034  addiu       $a3, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110548) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x110550u;
label_110550:
    // 0x110550: 0x8ce203b8  lw          $v0, 0x3B8($a3)
    ctx->pc = 0x110550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 952)));
label_110554:
    // 0x110554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110558:
    // 0x110558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x110558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11055c:
    // 0x11055c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11055cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110560:
    // 0x110560: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110564:
    // 0x110564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110568:
    // 0x110568: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_11056c:
    // 0x11056c: 0xc042902  jal         func_10A408
label_110570:
    if (ctx->pc == 0x110570u) {
        ctx->pc = 0x110570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11056Cu;
        // 0x110570: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110574u;
        goto label_110574;
    }
    ctx->pc = 0x11056Cu;
    SET_GPR_U32(ctx, 31, 0x110574u);
    ctx->pc = 0x110570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11056Cu;
    // 0x110570: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11056Cu, 0x110574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110574u;
label_110574:
    // 0x110574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110578:
    // 0x110578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11057c:
    // 0x11057c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110580:
    // 0x110580: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_110584:
    if (ctx->pc == 0x110584u) {
        ctx->pc = 0x110584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110580u;
        // 0x110584: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110588u;
        goto label_110588;
    }
    ctx->pc = 0x110580u;
    {
        const bool branch_taken_0x110580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110580u;
        // 0x110584: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110580) {
            ctx->pc = 0x110948u;
            goto label_110948;
        }
    }
    ctx->pc = 0x110588u;
label_110588:
    // 0x110588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11058c:
    // 0x11058c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x11058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_110590:
    // 0x110590: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x110590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_110594:
    // 0x110594: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x110594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_110598:
    // 0x110598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11059c:
    // 0x11059c: 0xc042902  jal         func_10A408
label_1105a0:
    if (ctx->pc == 0x1105A0u) {
        ctx->pc = 0x1105A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11059Cu;
        // 0x1105a0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1105A4u;
        goto label_1105a4;
    }
    ctx->pc = 0x11059Cu;
    SET_GPR_U32(ctx, 31, 0x1105A4u);
    ctx->pc = 0x1105A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11059Cu;
    // 0x1105a0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11059Cu, 0x1105A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105A4u;
label_1105a4:
    // 0x1105a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1105a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1105a8:
    // 0x1105a8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1105a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1105ac:
    // 0x1105ac: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1105acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1105b0:
    // 0x1105b0: 0x10000100  b           . + 4 + (0x100 << 2)
label_1105b4:
    if (ctx->pc == 0x1105B4u) {
        ctx->pc = 0x1105B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105B0u;
        // 0x1105b4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1105B8u;
        goto label_1105b8;
    }
    ctx->pc = 0x1105B0u;
    {
        const bool branch_taken_0x1105b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105B0u;
        // 0x1105b4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105b0) {
            ctx->pc = 0x1109B4u;
            goto label_1109b4;
        }
    }
    ctx->pc = 0x1105B8u;
label_1105b8:
    // 0x1105b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1105b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1105bc:
    // 0x1105bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1105bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1105c0:
    // 0x1105c0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1105c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1105c4:
    // 0x1105c4: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1105c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1105c8:
    // 0x1105c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1105c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1105cc:
    // 0x1105cc: 0xc042902  jal         func_10A408
label_1105d0:
    if (ctx->pc == 0x1105D0u) {
        ctx->pc = 0x1105D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105CCu;
        // 0x1105d0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1105D4u;
        goto label_1105d4;
    }
    ctx->pc = 0x1105CCu;
    SET_GPR_U32(ctx, 31, 0x1105D4u);
    ctx->pc = 0x1105D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105CCu;
    // 0x1105d0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1105CCu, 0x1105D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105D4u;
label_1105d4:
    // 0x1105d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1105d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1105d8:
    // 0x1105d8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1105dc:
    // 0x1105dc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1105dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1105e0:
    // 0x1105e0: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_1105e4:
    if (ctx->pc == 0x1105E4u) {
        ctx->pc = 0x1105E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105E0u;
        // 0x1105e4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1105E8u;
        goto label_1105e8;
    }
    ctx->pc = 0x1105E0u;
    {
        const bool branch_taken_0x1105e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105E0u;
        // 0x1105e4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105e0) {
            ctx->pc = 0x1109B4u;
            goto label_1109b4;
        }
    }
    ctx->pc = 0x1105E8u;
label_1105e8:
    // 0x1105e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1105e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1105ec:
    // 0x1105ec: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1105ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1105f0:
    // 0x1105f0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1105f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1105f4:
    // 0x1105f4: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1105f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1105f8:
    // 0x1105f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1105f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1105fc:
    // 0x1105fc: 0xc042902  jal         func_10A408
label_110600:
    if (ctx->pc == 0x110600u) {
        ctx->pc = 0x110600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105FCu;
        // 0x110600: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110604u;
        goto label_110604;
    }
    ctx->pc = 0x1105FCu;
    SET_GPR_U32(ctx, 31, 0x110604u);
    ctx->pc = 0x110600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105FCu;
    // 0x110600: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1105FCu, 0x110604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110604u;
label_110604:
    // 0x110604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110608:
    // 0x110608: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x110608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_11060c:
    // 0x11060c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x11060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_110610:
    // 0x110610: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_110614:
    if (ctx->pc == 0x110614u) {
        ctx->pc = 0x110614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110610u;
        // 0x110614: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110618u;
        goto label_110618;
    }
    ctx->pc = 0x110610u;
    {
        const bool branch_taken_0x110610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110610u;
        // 0x110614: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110610) {
            ctx->pc = 0x1109B4u;
            goto label_1109b4;
        }
    }
    ctx->pc = 0x110618u;
label_110618:
    // 0x110618: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_11061c:
    // 0x11061c: 0x944402fe  lhu         $a0, 0x2FE($v0)
    ctx->pc = 0x11061cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_110620:
    // 0x110620: 0x28830379  slti        $v1, $a0, 0x379
    ctx->pc = 0x110620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)889) ? 1 : 0);
label_110624:
    // 0x110624: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_110628:
    if (ctx->pc == 0x110628u) {
        ctx->pc = 0x110628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110624u;
        // 0x110628: 0x28820377  slti        $v0, $a0, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11062Cu;
        goto label_11062c;
    }
    ctx->pc = 0x110624u;
    {
        const bool branch_taken_0x110624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110624u;
        // 0x110628: 0x28820377  slti        $v0, $a0, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110624) {
            ctx->pc = 0x110644u;
            goto label_110644;
        }
    }
    ctx->pc = 0x11062Cu;
label_11062c:
    // 0x11062c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_110630:
    if (ctx->pc == 0x110630u) {
        ctx->pc = 0x110630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11062Cu;
        // 0x110630: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110634u;
        goto label_110634;
    }
    ctx->pc = 0x11062Cu;
    {
        const bool branch_taken_0x11062c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11062Cu;
        // 0x110630: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11062c) {
            ctx->pc = 0x11066Cu;
            goto label_11066c;
        }
    }
    ctx->pc = 0x110634u;
label_110634:
    // 0x110634: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_110638:
    if (ctx->pc == 0x110638u) {
        ctx->pc = 0x110638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110634u;
        // 0x110638: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11063Cu;
        goto label_11063c;
    }
    ctx->pc = 0x110634u;
    {
        const bool branch_taken_0x110634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x110638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110634u;
        // 0x110638: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110634) {
            ctx->pc = 0x110680u;
            goto label_110680;
        }
    }
    ctx->pc = 0x11063Cu;
label_11063c:
    // 0x11063c: 0x10000008  b           . + 4 + (0x8 << 2)
label_110640:
    if (ctx->pc == 0x110640u) {
        ctx->pc = 0x110640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11063Cu;
        // 0x110640: 0x8c4403c0  lw          $a0, 0x3C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110644u;
        goto label_110644;
    }
    ctx->pc = 0x11063Cu;
    {
        const bool branch_taken_0x11063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11063Cu;
        // 0x110640: 0x8c4403c0  lw          $a0, 0x3C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11063c) {
            ctx->pc = 0x110660u;
            goto label_110660;
        }
    }
    ctx->pc = 0x110644u;
label_110644:
    // 0x110644: 0x288203ac  slti        $v0, $a0, 0x3AC
    ctx->pc = 0x110644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)940) ? 1 : 0);
label_110648:
    // 0x110648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_11064c:
    if (ctx->pc == 0x11064Cu) {
        ctx->pc = 0x11064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110648u;
        // 0x11064c: 0x288203aa  slti        $v0, $a0, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110650u;
        goto label_110650;
    }
    ctx->pc = 0x110648u;
    {
        const bool branch_taken_0x110648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110648u;
        // 0x11064c: 0x288203aa  slti        $v0, $a0, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110648) {
            ctx->pc = 0x110658u;
            goto label_110658;
        }
    }
    ctx->pc = 0x110650u;
label_110650:
    // 0x110650: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_110654:
    if (ctx->pc == 0x110654u) {
        ctx->pc = 0x110654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110650u;
        // 0x110654: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110658u;
        goto label_110658;
    }
    ctx->pc = 0x110650u;
    {
        const bool branch_taken_0x110650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110650) {
            ctx->pc = 0x110654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110650u;
            // 0x110654: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110680u;
            goto label_110680;
        }
    }
    ctx->pc = 0x110658u;
label_110658:
    // 0x110658: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x110658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_11065c:
    // 0x11065c: 0x8c4403c0  lw          $a0, 0x3C0($v0)
    ctx->pc = 0x11065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
label_110660:
    // 0x110660: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110664:
    // 0x110664: 0x10000009  b           . + 4 + (0x9 << 2)
label_110668:
    if (ctx->pc == 0x110668u) {
        ctx->pc = 0x110668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110664u;
        // 0x110668: 0x8c4303c4  lw          $v1, 0x3C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11066Cu;
        goto label_11066c;
    }
    ctx->pc = 0x110664u;
    {
        const bool branch_taken_0x110664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110664u;
        // 0x110668: 0x8c4303c4  lw          $v1, 0x3C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110664) {
            ctx->pc = 0x11068Cu;
            goto label_11068c;
        }
    }
    ctx->pc = 0x11066Cu;
label_11066c:
    // 0x11066c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_110670:
    // 0x110670: 0x8c440914  lw          $a0, 0x914($v0)
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
label_110674:
    // 0x110674: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110678:
    // 0x110678: 0x10000004  b           . + 4 + (0x4 << 2)
label_11067c:
    if (ctx->pc == 0x11067Cu) {
        ctx->pc = 0x11067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110678u;
        // 0x11067c: 0x8c430918  lw          $v1, 0x918($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110680u;
        goto label_110680;
    }
    ctx->pc = 0x110678u;
    {
        const bool branch_taken_0x110678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110678u;
        // 0x11067c: 0x8c430918  lw          $v1, 0x918($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110678) {
            ctx->pc = 0x11068Cu;
            goto label_11068c;
        }
    }
    ctx->pc = 0x110680u;
label_110680:
    // 0x110680: 0x8c44092c  lw          $a0, 0x92C($v0)
    ctx->pc = 0x110680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2348)));
label_110684:
    // 0x110684: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110688:
    // 0x110688: 0x8c430930  lw          $v1, 0x930($v0)
    ctx->pc = 0x110688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2352)));
label_11068c:
    // 0x11068c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x11068cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110690:
    // 0x110690: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x110690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_110694:
    // 0x110694: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x110694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_110698:
    // 0x110698: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
label_11069c:
    if (ctx->pc == 0x11069Cu) {
        ctx->pc = 0x1106A0u;
        goto label_1106a0;
    }
    ctx->pc = 0x110698u;
    {
        const bool branch_taken_0x110698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110698) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x1106A0u;
label_1106a0:
    // 0x1106a0: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x1106a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_1106a4:
    // 0x1106a4: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1106a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
label_1106a8:
    // 0x1106a8: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x1106a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
label_1106ac:
    // 0x1106ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1106b0:
    if (ctx->pc == 0x1106B0u) {
        ctx->pc = 0x1106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106ACu;
        // 0x1106b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106B4u;
        goto label_1106b4;
    }
    ctx->pc = 0x1106ACu;
    {
        const bool branch_taken_0x1106ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106ACu;
        // 0x1106b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106ac) {
            ctx->pc = 0x1106CCu;
            goto label_1106cc;
        }
    }
    ctx->pc = 0x1106B4u;
label_1106b4:
    // 0x1106b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1106b8:
    // 0x1106b8: 0x2442bf40  addiu       $v0, $v0, -0x40C0
    ctx->pc = 0x1106b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950720));
label_1106bc:
    // 0x1106bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1106bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1106c0:
    // 0x1106c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1106c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1106c4:
    // 0x1106c4: 0x800008  jr          $a0
label_1106c8:
    if (ctx->pc == 0x1106C8u) {
        ctx->pc = 0x1106CCu;
        goto label_1106cc;
    }
    ctx->pc = 0x1106C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1106CCu: goto label_1106cc;
            case 0x1106FCu: goto label_1106fc;
            case 0x110734u: goto label_110734;
            case 0x11076Cu: goto label_11076c;
            case 0x1107A4u: goto label_1107a4;
            case 0x1107DCu: goto label_1107dc;
            case 0x11080Cu: goto label_11080c;
            case 0x110854u: goto label_110854;
            case 0x110884u: goto label_110884;
            case 0x1108CCu: goto label_1108cc;
            case 0x110914u: goto label_110914;
            case 0x11095Cu: goto label_11095c;
            case 0x110988u: goto label_110988;
            case 0x1109C8u: goto label_1109c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1106C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1106CCu;
label_1106cc:
    // 0x1106cc: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x1106ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_1106d0:
    // 0x1106d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1106d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1106d4:
    // 0x1106d4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1106d8:
    // 0x1106d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1106dc:
    // 0x1106dc: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1106dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1106e0:
    // 0x1106e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1106e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1106e4:
    // 0x1106e4: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1106e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1106e8:
    // 0x1106e8: 0xc042902  jal         func_10A408
label_1106ec:
    if (ctx->pc == 0x1106ECu) {
        ctx->pc = 0x1106ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106E8u;
        // 0x1106ec: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106F0u;
        goto label_1106f0;
    }
    ctx->pc = 0x1106E8u;
    SET_GPR_U32(ctx, 31, 0x1106F0u);
    ctx->pc = 0x1106ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106E8u;
    // 0x1106ec: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1106E8u, 0x1106F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106F0u;
label_1106f0:
    // 0x1106f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1106f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1106f4:
    // 0x1106f4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1106f8:
    if (ctx->pc == 0x1106F8u) {
        ctx->pc = 0x1106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106F4u;
        // 0x1106f8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106FCu;
        goto label_1106fc;
    }
    ctx->pc = 0x1106F4u;
    {
        const bool branch_taken_0x1106f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106F4u;
        // 0x1106f8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106f4) {
            ctx->pc = 0x1108B0u;
            goto label_1108b0;
        }
    }
    ctx->pc = 0x1106FCu;
label_1106fc:
    // 0x1106fc: 0x8ce203c8  lw          $v0, 0x3C8($a3)
    ctx->pc = 0x1106fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
label_110700:
    // 0x110700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110704:
    // 0x110704: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_110708:
    // 0x110708: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11070c:
    // 0x11070c: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x11070cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110710:
    // 0x110710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110714:
    // 0x110714: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x110714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110718:
    // 0x110718: 0xc042902  jal         func_10A408
label_11071c:
    if (ctx->pc == 0x11071Cu) {
        ctx->pc = 0x11071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110718u;
        // 0x11071c: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110720u;
        goto label_110720;
    }
    ctx->pc = 0x110718u;
    SET_GPR_U32(ctx, 31, 0x110720u);
    ctx->pc = 0x11071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110718u;
    // 0x11071c: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110718u, 0x110720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110720u;
label_110720:
    // 0x110720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110724:
    // 0x110724: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x110724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_110728:
    // 0x110728: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11072c:
    // 0x11072c: 0x10000074  b           . + 4 + (0x74 << 2)
label_110730:
    if (ctx->pc == 0x110730u) {
        ctx->pc = 0x110730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11072Cu;
        // 0x110730: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110734u;
        goto label_110734;
    }
    ctx->pc = 0x11072Cu;
    {
        const bool branch_taken_0x11072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11072Cu;
        // 0x110730: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11072c) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x110734u;
label_110734:
    // 0x110734: 0x8ce203c8  lw          $v0, 0x3C8($a3)
    ctx->pc = 0x110734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
label_110738:
    // 0x110738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11073c:
    // 0x11073c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x11073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_110740:
    // 0x110740: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110744:
    // 0x110744: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110748:
    // 0x110748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11074c:
    // 0x11074c: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x11074cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110750:
    // 0x110750: 0xc042902  jal         func_10A408
label_110754:
    if (ctx->pc == 0x110754u) {
        ctx->pc = 0x110754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110750u;
        // 0x110754: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110758u;
        goto label_110758;
    }
    ctx->pc = 0x110750u;
    SET_GPR_U32(ctx, 31, 0x110758u);
    ctx->pc = 0x110754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110750u;
    // 0x110754: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110750u, 0x110758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110758u;
label_110758:
    // 0x110758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11075c:
    // 0x11075c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x11075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_110760:
    // 0x110760: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110764:
    // 0x110764: 0x10000066  b           . + 4 + (0x66 << 2)
label_110768:
    if (ctx->pc == 0x110768u) {
        ctx->pc = 0x110768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110764u;
        // 0x110768: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11076Cu;
        goto label_11076c;
    }
    ctx->pc = 0x110764u;
    {
        const bool branch_taken_0x110764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110764u;
        // 0x110768: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110764) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x11076Cu;
label_11076c:
    // 0x11076c: 0x8ce203c8  lw          $v0, 0x3C8($a3)
    ctx->pc = 0x11076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
label_110770:
    // 0x110770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110774:
    // 0x110774: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x110774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_110778:
    // 0x110778: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11077c:
    // 0x11077c: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x11077cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110780:
    // 0x110780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110784:
    // 0x110784: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x110784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110788:
    // 0x110788: 0xc042902  jal         func_10A408
label_11078c:
    if (ctx->pc == 0x11078Cu) {
        ctx->pc = 0x11078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110788u;
        // 0x11078c: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110790u;
        goto label_110790;
    }
    ctx->pc = 0x110788u;
    SET_GPR_U32(ctx, 31, 0x110790u);
    ctx->pc = 0x11078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110788u;
    // 0x11078c: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110788u, 0x110790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110790u;
label_110790:
    // 0x110790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110794:
    // 0x110794: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_110798:
    // 0x110798: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11079c:
    // 0x11079c: 0x10000058  b           . + 4 + (0x58 << 2)
label_1107a0:
    if (ctx->pc == 0x1107A0u) {
        ctx->pc = 0x1107A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11079Cu;
        // 0x1107a0: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107A4u;
        goto label_1107a4;
    }
    ctx->pc = 0x11079Cu;
    {
        const bool branch_taken_0x11079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11079Cu;
        // 0x1107a0: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11079c) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x1107A4u;
label_1107a4:
    // 0x1107a4: 0x8ce203c8  lw          $v0, 0x3C8($a3)
    ctx->pc = 0x1107a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
label_1107a8:
    // 0x1107a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1107a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1107ac:
    // 0x1107ac: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1107acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1107b0:
    // 0x1107b0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1107b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1107b4:
    // 0x1107b4: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1107b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1107b8:
    // 0x1107b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1107b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1107bc:
    // 0x1107bc: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1107bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1107c0:
    // 0x1107c0: 0xc042902  jal         func_10A408
label_1107c4:
    if (ctx->pc == 0x1107C4u) {
        ctx->pc = 0x1107C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107C0u;
        // 0x1107c4: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107C8u;
        goto label_1107c8;
    }
    ctx->pc = 0x1107C0u;
    SET_GPR_U32(ctx, 31, 0x1107C8u);
    ctx->pc = 0x1107C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107C0u;
    // 0x1107c4: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1107C0u, 0x1107C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107C8u;
label_1107c8:
    // 0x1107c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1107c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1107cc:
    // 0x1107cc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1107ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1107d0:
    // 0x1107d0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1107d4:
    // 0x1107d4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1107d8:
    if (ctx->pc == 0x1107D8u) {
        ctx->pc = 0x1107D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107D4u;
        // 0x1107d8: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107DCu;
        goto label_1107dc;
    }
    ctx->pc = 0x1107D4u;
    {
        const bool branch_taken_0x1107d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107D4u;
        // 0x1107d8: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107d4) {
            ctx->pc = 0x110900u;
            goto label_110900;
        }
    }
    ctx->pc = 0x1107DCu;
label_1107dc:
    // 0x1107dc: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x1107dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_1107e0:
    // 0x1107e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1107e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1107e4:
    // 0x1107e4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1107e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1107e8:
    // 0x1107e8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1107e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1107ec:
    // 0x1107ec: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1107ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1107f0:
    // 0x1107f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1107f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1107f4:
    // 0x1107f4: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1107f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1107f8:
    // 0x1107f8: 0xc042902  jal         func_10A408
label_1107fc:
    if (ctx->pc == 0x1107FCu) {
        ctx->pc = 0x1107FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107F8u;
        // 0x1107fc: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110800u;
        goto label_110800;
    }
    ctx->pc = 0x1107F8u;
    SET_GPR_U32(ctx, 31, 0x110800u);
    ctx->pc = 0x1107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107F8u;
    // 0x1107fc: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1107F8u, 0x110800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110800u;
label_110800:
    // 0x110800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110804:
    // 0x110804: 0x1000004e  b           . + 4 + (0x4E << 2)
label_110808:
    if (ctx->pc == 0x110808u) {
        ctx->pc = 0x110808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110804u;
        // 0x110808: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11080Cu;
        goto label_11080c;
    }
    ctx->pc = 0x110804u;
    {
        const bool branch_taken_0x110804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110804u;
        // 0x110808: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110804) {
            ctx->pc = 0x110940u;
            goto label_110940;
        }
    }
    ctx->pc = 0x11080Cu;
label_11080c:
    // 0x11080c: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x11080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_110810:
    // 0x110810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110814:
    // 0x110814: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x110814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_110818:
    // 0x110818: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11081c:
    // 0x11081c: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x11081cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110820:
    // 0x110820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110824:
    // 0x110824: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x110824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110828:
    // 0x110828: 0xc042902  jal         func_10A408
label_11082c:
    if (ctx->pc == 0x11082Cu) {
        ctx->pc = 0x11082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110828u;
        // 0x11082c: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110830u;
        goto label_110830;
    }
    ctx->pc = 0x110828u;
    SET_GPR_U32(ctx, 31, 0x110830u);
    ctx->pc = 0x11082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110828u;
    // 0x11082c: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110828u, 0x110830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110830u;
label_110830:
    // 0x110830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110834:
    // 0x110834: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x110834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_110838:
    // 0x110838: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11083c:
    // 0x11083c: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x11083cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110840:
    // 0x110840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110844:
    // 0x110844: 0xc042908  jal         func_10A420
label_110848:
    if (ctx->pc == 0x110848u) {
        ctx->pc = 0x110848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110844u;
        // 0x110848: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11084Cu;
        goto label_11084c;
    }
    ctx->pc = 0x110844u;
    SET_GPR_U32(ctx, 31, 0x11084Cu);
    ctx->pc = 0x110848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110844u;
    // 0x110848: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x110844u, 0x11084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11084Cu;
label_11084c:
    // 0x11084c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_110850:
    if (ctx->pc == 0x110850u) {
        ctx->pc = 0x110854u;
        goto label_110854;
    }
    ctx->pc = 0x11084Cu;
    {
        const bool branch_taken_0x11084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11084c) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x110854u;
label_110854:
    // 0x110854: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x110854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_110858:
    // 0x110858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11085c:
    // 0x11085c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x11085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_110860:
    // 0x110860: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110864:
    // 0x110864: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110868:
    // 0x110868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11086c:
    // 0x11086c: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x11086cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110870:
    // 0x110870: 0xc042902  jal         func_10A408
label_110874:
    if (ctx->pc == 0x110874u) {
        ctx->pc = 0x110874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110870u;
        // 0x110874: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110878u;
        goto label_110878;
    }
    ctx->pc = 0x110870u;
    SET_GPR_U32(ctx, 31, 0x110878u);
    ctx->pc = 0x110874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110870u;
    // 0x110874: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110870u, 0x110878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110878u;
label_110878:
    // 0x110878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11087c:
    // 0x11087c: 0x10000030  b           . + 4 + (0x30 << 2)
label_110880:
    if (ctx->pc == 0x110880u) {
        ctx->pc = 0x110880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11087Cu;
        // 0x110880: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110884u;
        goto label_110884;
    }
    ctx->pc = 0x11087Cu;
    {
        const bool branch_taken_0x11087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11087Cu;
        // 0x110880: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11087c) {
            ctx->pc = 0x110940u;
            goto label_110940;
        }
    }
    ctx->pc = 0x110884u;
label_110884:
    // 0x110884: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x110884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_110888:
    // 0x110888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11088c:
    // 0x11088c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x11088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_110890:
    // 0x110890: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110894:
    // 0x110894: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110898:
    // 0x110898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11089c:
    // 0x11089c: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x11089cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1108a0:
    // 0x1108a0: 0xc042902  jal         func_10A408
label_1108a4:
    if (ctx->pc == 0x1108A4u) {
        ctx->pc = 0x1108A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108A0u;
        // 0x1108a4: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108A8u;
        goto label_1108a8;
    }
    ctx->pc = 0x1108A0u;
    SET_GPR_U32(ctx, 31, 0x1108A8u);
    ctx->pc = 0x1108A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108A0u;
    // 0x1108a4: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1108A0u, 0x1108A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108A8u;
label_1108a8:
    // 0x1108a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1108a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1108ac:
    // 0x1108ac: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1108acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1108b0:
    // 0x1108b0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1108b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1108b4:
    // 0x1108b4: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1108b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1108b8:
    // 0x1108b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1108b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1108bc:
    // 0x1108bc: 0xc042908  jal         func_10A420
label_1108c0:
    if (ctx->pc == 0x1108C0u) {
        ctx->pc = 0x1108C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108BCu;
        // 0x1108c0: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108C4u;
        goto label_1108c4;
    }
    ctx->pc = 0x1108BCu;
    SET_GPR_U32(ctx, 31, 0x1108C4u);
    ctx->pc = 0x1108C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108BCu;
    // 0x1108c0: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1108BCu, 0x1108C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108C4u;
label_1108c4:
    // 0x1108c4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1108c8:
    if (ctx->pc == 0x1108C8u) {
        ctx->pc = 0x1108CCu;
        goto label_1108cc;
    }
    ctx->pc = 0x1108C4u;
    {
        const bool branch_taken_0x1108c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1108c4) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x1108CCu;
label_1108cc:
    // 0x1108cc: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x1108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_1108d0:
    // 0x1108d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1108d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1108d4:
    // 0x1108d4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1108d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1108d8:
    // 0x1108d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1108d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1108dc:
    // 0x1108dc: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1108dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1108e0:
    // 0x1108e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1108e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1108e4:
    // 0x1108e4: 0x24070035  addiu       $a3, $zero, 0x35
    ctx->pc = 0x1108e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1108e8:
    // 0x1108e8: 0xc042902  jal         func_10A408
label_1108ec:
    if (ctx->pc == 0x1108ECu) {
        ctx->pc = 0x1108ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108E8u;
        // 0x1108ec: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108F0u;
        goto label_1108f0;
    }
    ctx->pc = 0x1108E8u;
    SET_GPR_U32(ctx, 31, 0x1108F0u);
    ctx->pc = 0x1108ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108E8u;
    // 0x1108ec: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1108E8u, 0x1108F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108F0u;
label_1108f0:
    // 0x1108f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1108f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1108f4:
    // 0x1108f4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1108f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1108f8:
    // 0x1108f8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1108f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1108fc:
    // 0x1108fc: 0x24070035  addiu       $a3, $zero, 0x35
    ctx->pc = 0x1108fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_110900:
    // 0x110900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110904:
    // 0x110904: 0xc042908  jal         func_10A420
label_110908:
    if (ctx->pc == 0x110908u) {
        ctx->pc = 0x110908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110904u;
        // 0x110908: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11090Cu;
        goto label_11090c;
    }
    ctx->pc = 0x110904u;
    SET_GPR_U32(ctx, 31, 0x11090Cu);
    ctx->pc = 0x110908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110904u;
    // 0x110908: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x110904u, 0x11090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11090Cu;
label_11090c:
    // 0x11090c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_110910:
    if (ctx->pc == 0x110910u) {
        ctx->pc = 0x110914u;
        goto label_110914;
    }
    ctx->pc = 0x11090Cu;
    {
        const bool branch_taken_0x11090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11090c) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x110914u;
label_110914:
    // 0x110914: 0x8ce203c4  lw          $v0, 0x3C4($a3)
    ctx->pc = 0x110914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 964)));
label_110918:
    // 0x110918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11091c:
    // 0x11091c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_110920:
    // 0x110920: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110924:
    // 0x110924: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x110924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110928:
    // 0x110928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11092c:
    // 0x11092c: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x11092cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110930:
    // 0x110930: 0xc042902  jal         func_10A408
label_110934:
    if (ctx->pc == 0x110934u) {
        ctx->pc = 0x110934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110930u;
        // 0x110934: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110938u;
        goto label_110938;
    }
    ctx->pc = 0x110930u;
    SET_GPR_U32(ctx, 31, 0x110938u);
    ctx->pc = 0x110934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110930u;
    // 0x110934: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110930u, 0x110938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110938u;
label_110938:
    // 0x110938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11093c:
    // 0x11093c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_110940:
    // 0x110940: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110944:
    // 0x110944: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x110944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110948:
    // 0x110948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11094c:
    // 0x11094c: 0xc042908  jal         func_10A420
label_110950:
    if (ctx->pc == 0x110950u) {
        ctx->pc = 0x110950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11094Cu;
        // 0x110950: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110954u;
        goto label_110954;
    }
    ctx->pc = 0x11094Cu;
    SET_GPR_U32(ctx, 31, 0x110954u);
    ctx->pc = 0x110950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11094Cu;
    // 0x110950: 0x2409011d  addiu       $t1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x11094Cu, 0x110954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110954u;
label_110954:
    // 0x110954: 0x1000002a  b           . + 4 + (0x2A << 2)
label_110958:
    if (ctx->pc == 0x110958u) {
        ctx->pc = 0x11095Cu;
        goto label_11095c;
    }
    ctx->pc = 0x110954u;
    {
        const bool branch_taken_0x110954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110954) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x11095Cu;
label_11095c:
    // 0x11095c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110960:
    // 0x110960: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x110960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_110964:
    // 0x110964: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110968:
    // 0x110968: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x110968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_11096c:
    // 0x11096c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11096cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110970:
    // 0x110970: 0xc042902  jal         func_10A408
label_110974:
    if (ctx->pc == 0x110974u) {
        ctx->pc = 0x110974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110970u;
        // 0x110974: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110978u;
        goto label_110978;
    }
    ctx->pc = 0x110970u;
    SET_GPR_U32(ctx, 31, 0x110978u);
    ctx->pc = 0x110974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110970u;
    // 0x110974: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x110970u, 0x110978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110978u;
label_110978:
    // 0x110978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11097c:
    // 0x11097c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x11097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_110980:
    // 0x110980: 0x1000000b  b           . + 4 + (0xB << 2)
label_110984:
    if (ctx->pc == 0x110984u) {
        ctx->pc = 0x110984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110980u;
        // 0x110984: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110988u;
        goto label_110988;
    }
    ctx->pc = 0x110980u;
    {
        const bool branch_taken_0x110980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110980u;
        // 0x110984: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110980) {
            ctx->pc = 0x1109B0u;
            goto label_1109b0;
        }
    }
    ctx->pc = 0x110988u;
label_110988:
    // 0x110988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11098c:
    // 0x11098c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x11098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_110990:
    // 0x110990: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_110994:
    // 0x110994: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x110994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_110998:
    // 0x110998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11099c:
    // 0x11099c: 0xc042902  jal         func_10A408
label_1109a0:
    if (ctx->pc == 0x1109A0u) {
        ctx->pc = 0x1109A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11099Cu;
        // 0x1109a0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109A4u;
        goto label_1109a4;
    }
    ctx->pc = 0x11099Cu;
    SET_GPR_U32(ctx, 31, 0x1109A4u);
    ctx->pc = 0x1109A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11099Cu;
    // 0x1109a0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11099Cu, 0x1109A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109A4u;
label_1109a4:
    // 0x1109a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1109a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1109a8:
    // 0x1109a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1109a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1109ac:
    // 0x1109ac: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1109acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1109b0:
    // 0x1109b0: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1109b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1109b4:
    // 0x1109b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1109b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1109b8:
    // 0x1109b8: 0xc042908  jal         func_10A420
label_1109bc:
    if (ctx->pc == 0x1109BCu) {
        ctx->pc = 0x1109BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B8u;
        // 0x1109bc: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109C0u;
        goto label_1109c0;
    }
    ctx->pc = 0x1109B8u;
    SET_GPR_U32(ctx, 31, 0x1109C0u);
    ctx->pc = 0x1109BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109B8u;
    // 0x1109bc: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1109B8u, 0x1109C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109C0u;
label_1109c0:
    // 0x1109c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1109c4:
    if (ctx->pc == 0x1109C4u) {
        ctx->pc = 0x1109C8u;
        goto label_1109c8;
    }
    ctx->pc = 0x1109C0u;
    {
        const bool branch_taken_0x1109c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1109c0) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x1109C8u;
label_1109c8:
    // 0x1109c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1109c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1109cc:
    // 0x1109cc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1109ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1109d0:
    // 0x1109d0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1109d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1109d4:
    // 0x1109d4: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1109d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1109d8:
    // 0x1109d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1109d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1109dc:
    // 0x1109dc: 0xc042902  jal         func_10A408
label_1109e0:
    if (ctx->pc == 0x1109E0u) {
        ctx->pc = 0x1109E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109DCu;
        // 0x1109e0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109E4u;
        goto label_1109e4;
    }
    ctx->pc = 0x1109DCu;
    SET_GPR_U32(ctx, 31, 0x1109E4u);
    ctx->pc = 0x1109E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109DCu;
    // 0x1109e0: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1109DCu, 0x1109E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109E4u;
label_1109e4:
    // 0x1109e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1109e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1109e8:
    // 0x1109e8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1109ec:
    // 0x1109ec: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1109f0:
    // 0x1109f0: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1109f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1109f4:
    // 0x1109f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1109f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1109f8:
    // 0x1109f8: 0xc042908  jal         func_10A420
label_1109fc:
    if (ctx->pc == 0x1109FCu) {
        ctx->pc = 0x1109FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109F8u;
        // 0x1109fc: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A00u;
        goto label_110a00;
    }
    ctx->pc = 0x1109F8u;
    SET_GPR_U32(ctx, 31, 0x110A00u);
    ctx->pc = 0x1109FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109F8u;
    // 0x1109fc: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1109F8u, 0x110A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A00u;
label_110a00:
    // 0x110a00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x110a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_110a04:
    // 0x110a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_110a08:
    // 0x110a08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x110a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110a0c:
    // 0x110a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110a10:
    // 0x110a10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x110a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_110a14:
    // 0x110a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110a18:
    // 0x110a18: 0xc0aa15e  jal         func_2A8578
label_110a1c:
    if (ctx->pc == 0x110A1Cu) {
        ctx->pc = 0x110A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A18u;
        // 0x110a1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A20u;
        goto label_110a20;
    }
    ctx->pc = 0x110A18u;
    SET_GPR_U32(ctx, 31, 0x110A20u);
    ctx->pc = 0x110A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A18u;
    // 0x110a1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x110A18u, 0x110A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A20u;
label_110a20:
    // 0x110a20: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x110a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_110a24:
    // 0x110a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110a28:
    // 0x110a28: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x110a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
label_110a2c:
    // 0x110a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_110a30:
    // 0x110a30: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x110a30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_110a34:
    // 0x110a34: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x110a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_110a38:
    // 0x110a38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_110a3c:
    if (ctx->pc == 0x110A3Cu) {
        ctx->pc = 0x110A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A38u;
        // 0x110a3c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A40u;
        goto label_110a40;
    }
    ctx->pc = 0x110A38u;
    {
        const bool branch_taken_0x110a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A38u;
        // 0x110a3c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a38) {
            ctx->pc = 0x110A44u;
            goto label_110a44;
        }
    }
    ctx->pc = 0x110A40u;
label_110a40:
    // 0x110a40: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x110a40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_110a44:
    // 0x110a44: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x110a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_110a48:
    // 0x110a48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x110a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_110a4c:
    // 0x110a4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x110a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_110a50:
    // 0x110a50: 0xc04939a  jal         func_124E68
label_110a54:
    if (ctx->pc == 0x110A54u) {
        ctx->pc = 0x110A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A50u;
        // 0x110a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A58u;
        goto label_110a58;
    }
    ctx->pc = 0x110A50u;
    SET_GPR_U32(ctx, 31, 0x110A58u);
    ctx->pc = 0x110A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A50u;
    // 0x110a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x110A50u, 0x110A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A58u;
label_110a58:
    // 0x110a58: 0xc055f06  jal         func_157C18
label_110a5c:
    if (ctx->pc == 0x110A5Cu) {
        ctx->pc = 0x110A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A58u;
        // 0x110a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A60u;
        goto label_110a60;
    }
    ctx->pc = 0x110A58u;
    SET_GPR_U32(ctx, 31, 0x110A60u);
    ctx->pc = 0x110A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A58u;
    // 0x110a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x110A58u, 0x110A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A60u;
label_110a60:
    // 0x110a60: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_110a64:
    if (ctx->pc == 0x110A64u) {
        ctx->pc = 0x110A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A60u;
        // 0x110a64: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A68u;
        goto label_110a68;
    }
    ctx->pc = 0x110A60u;
    {
        const bool branch_taken_0x110a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a60) {
            ctx->pc = 0x110A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A60u;
            // 0x110a64: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A7Cu;
            goto label_110a7c;
        }
    }
    ctx->pc = 0x110A68u;
label_110a68:
    // 0x110a68: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x110a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_110a6c:
    // 0x110a6c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x110a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_110a70:
    // 0x110a70: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x110a70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_110a74:
    // 0x110a74: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x110a74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_110a78:
    // 0x110a78: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x110a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_110a7c:
    // 0x110a7c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_110a80:
    if (ctx->pc == 0x110A80u) {
        ctx->pc = 0x110A84u;
        goto label_110a84;
    }
    ctx->pc = 0x110A7Cu;
    {
        const bool branch_taken_0x110a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a7c) {
            ctx->pc = 0x110AD0u;
            goto label_110ad0;
        }
    }
    ctx->pc = 0x110A84u;
label_110a84:
    // 0x110a84: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x110a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_110a88:
    // 0x110a88: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x110a88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_110a8c:
    // 0x110a8c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x110a8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_110a90:
    // 0x110a90: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x110a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_110a94:
    // 0x110a94: 0x40f809  jalr        $v0
label_110a98:
    if (ctx->pc == 0x110A98u) {
        ctx->pc = 0x110A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A94u;
        // 0x110a98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A9Cu;
        goto label_110a9c;
    }
    ctx->pc = 0x110A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x110A9Cu);
        ctx->pc = 0x110A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A94u;
        // 0x110a98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A94u, 0x110A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110A9Cu;
label_110a9c:
    // 0x110a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110aa0:
    // 0x110aa0: 0xc07dfac  jal         func_1F7EB0
label_110aa4:
    if (ctx->pc == 0x110AA4u) {
        ctx->pc = 0x110AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA0u;
        // 0x110aa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AA8u;
        goto label_110aa8;
    }
    ctx->pc = 0x110AA0u;
    SET_GPR_U32(ctx, 31, 0x110AA8u);
    ctx->pc = 0x110AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AA0u;
    // 0x110aa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x110AA0u, 0x110AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AA8u;
label_110aa8:
    // 0x110aa8: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x110aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_110aac:
    // 0x110aac: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x110aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_110ab0:
    // 0x110ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x110ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_110ab4:
    // 0x110ab4: 0x0  nop
    ctx->pc = 0x110ab4u;
    // NOP
label_110ab8:
    // 0x110ab8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x110ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_110abc:
    // 0x110abc: 0x0  nop
    ctx->pc = 0x110abcu;
    // NOP
label_110ac0:
    // 0x110ac0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_110ac4:
    if (ctx->pc == 0x110AC4u) {
        ctx->pc = 0x110AC8u;
        goto label_110ac8;
    }
    ctx->pc = 0x110AC0u;
    {
        const bool branch_taken_0x110ac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x110ac0) {
            ctx->pc = 0x110AD0u;
            goto label_110ad0;
        }
    }
    ctx->pc = 0x110AC8u;
label_110ac8:
    // 0x110ac8: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x110ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_110acc:
    // 0x110acc: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x110accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_110ad0:
    // 0x110ad0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_110ad4:
    // 0x110ad4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x110ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_110ad8:
    // 0x110ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110adc:
    // 0x110adc: 0xc053e7c  jal         func_14F9F0
label_110ae0:
    if (ctx->pc == 0x110AE0u) {
        ctx->pc = 0x110AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ADCu;
        // 0x110ae0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AE4u;
        goto label_110ae4;
    }
    ctx->pc = 0x110ADCu;
    SET_GPR_U32(ctx, 31, 0x110AE4u);
    ctx->pc = 0x110AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110ADCu;
    // 0x110ae0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x110ADCu, 0x110AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AE4u;
label_110ae4:
    // 0x110ae4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x110ae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_110ae8:
    // 0x110ae8: 0xc053e4a  jal         func_14F928
label_110aec:
    if (ctx->pc == 0x110AECu) {
        ctx->pc = 0x110AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AE8u;
        // 0x110aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AF0u;
        goto label_110af0;
    }
    ctx->pc = 0x110AE8u;
    SET_GPR_U32(ctx, 31, 0x110AF0u);
    ctx->pc = 0x110AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AE8u;
    // 0x110aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x110AE8u, 0x110AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AF0u;
label_110af0:
    // 0x110af0: 0xc04290e  jal         func_10A438
label_110af4:
    if (ctx->pc == 0x110AF4u) {
        ctx->pc = 0x110AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AF0u;
        // 0x110af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AF8u;
        goto label_110af8;
    }
    ctx->pc = 0x110AF0u;
    SET_GPR_U32(ctx, 31, 0x110AF8u);
    ctx->pc = 0x110AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AF0u;
    // 0x110af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x110AF0u, 0x110AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AF8u;
label_110af8:
    // 0x110af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110afc:
    // 0x110afc: 0xc048e4e  jal         func_123938
label_110b00:
    if (ctx->pc == 0x110B00u) {
        ctx->pc = 0x110B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AFCu;
        // 0x110b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B04u;
        goto label_110b04;
    }
    ctx->pc = 0x110AFCu;
    SET_GPR_U32(ctx, 31, 0x110B04u);
    ctx->pc = 0x110B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AFCu;
    // 0x110b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x110AFCu, 0x110B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B04u;
label_110b04:
    // 0x110b04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x110b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_110b08:
    // 0x110b08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x110b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_110b0c:
    // 0x110b0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x110b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_110b10:
    // 0x110b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110b14:
    // 0x110b14: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x110b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_110b18:
    // 0x110b18: 0x3e00008  jr          $ra
label_110b1c:
    if (ctx->pc == 0x110B1Cu) {
        ctx->pc = 0x110B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B18u;
        // 0x110b1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B20u;
        goto label_fallthrough_0x110b18;
    }
    ctx->pc = 0x110B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B18u;
        // 0x110b1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x110b18:
    ctx->pc = 0x110B20u;
}
