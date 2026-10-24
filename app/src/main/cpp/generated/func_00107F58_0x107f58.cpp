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

// Function: func_00107F58
// Address: 0x107f58 - 0x108ab0
void func_00107F58_0x107f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00107F58_0x107f58");
#endif

    switch (ctx->pc) {
        case 0x107f58u: goto label_107f58;
        case 0x107f5cu: goto label_107f5c;
        case 0x107f60u: goto label_107f60;
        case 0x107f64u: goto label_107f64;
        case 0x107f68u: goto label_107f68;
        case 0x107f6cu: goto label_107f6c;
        case 0x107f70u: goto label_107f70;
        case 0x107f74u: goto label_107f74;
        case 0x107f78u: goto label_107f78;
        case 0x107f7cu: goto label_107f7c;
        case 0x107f80u: goto label_107f80;
        case 0x107f84u: goto label_107f84;
        case 0x107f88u: goto label_107f88;
        case 0x107f8cu: goto label_107f8c;
        case 0x107f90u: goto label_107f90;
        case 0x107f94u: goto label_107f94;
        case 0x107f98u: goto label_107f98;
        case 0x107f9cu: goto label_107f9c;
        case 0x107fa0u: goto label_107fa0;
        case 0x107fa4u: goto label_107fa4;
        case 0x107fa8u: goto label_107fa8;
        case 0x107facu: goto label_107fac;
        case 0x107fb0u: goto label_107fb0;
        case 0x107fb4u: goto label_107fb4;
        case 0x107fb8u: goto label_107fb8;
        case 0x107fbcu: goto label_107fbc;
        case 0x107fc0u: goto label_107fc0;
        case 0x107fc4u: goto label_107fc4;
        case 0x107fc8u: goto label_107fc8;
        case 0x107fccu: goto label_107fcc;
        case 0x107fd0u: goto label_107fd0;
        case 0x107fd4u: goto label_107fd4;
        case 0x107fd8u: goto label_107fd8;
        case 0x107fdcu: goto label_107fdc;
        case 0x107fe0u: goto label_107fe0;
        case 0x107fe4u: goto label_107fe4;
        case 0x107fe8u: goto label_107fe8;
        case 0x107fecu: goto label_107fec;
        case 0x107ff0u: goto label_107ff0;
        case 0x107ff4u: goto label_107ff4;
        case 0x107ff8u: goto label_107ff8;
        case 0x107ffcu: goto label_107ffc;
        case 0x108000u: goto label_108000;
        case 0x108004u: goto label_108004;
        case 0x108008u: goto label_108008;
        case 0x10800cu: goto label_10800c;
        case 0x108010u: goto label_108010;
        case 0x108014u: goto label_108014;
        case 0x108018u: goto label_108018;
        case 0x10801cu: goto label_10801c;
        case 0x108020u: goto label_108020;
        case 0x108024u: goto label_108024;
        case 0x108028u: goto label_108028;
        case 0x10802cu: goto label_10802c;
        case 0x108030u: goto label_108030;
        case 0x108034u: goto label_108034;
        case 0x108038u: goto label_108038;
        case 0x10803cu: goto label_10803c;
        case 0x108040u: goto label_108040;
        case 0x108044u: goto label_108044;
        case 0x108048u: goto label_108048;
        case 0x10804cu: goto label_10804c;
        case 0x108050u: goto label_108050;
        case 0x108054u: goto label_108054;
        case 0x108058u: goto label_108058;
        case 0x10805cu: goto label_10805c;
        case 0x108060u: goto label_108060;
        case 0x108064u: goto label_108064;
        case 0x108068u: goto label_108068;
        case 0x10806cu: goto label_10806c;
        case 0x108070u: goto label_108070;
        case 0x108074u: goto label_108074;
        case 0x108078u: goto label_108078;
        case 0x10807cu: goto label_10807c;
        case 0x108080u: goto label_108080;
        case 0x108084u: goto label_108084;
        case 0x108088u: goto label_108088;
        case 0x10808cu: goto label_10808c;
        case 0x108090u: goto label_108090;
        case 0x108094u: goto label_108094;
        case 0x108098u: goto label_108098;
        case 0x10809cu: goto label_10809c;
        case 0x1080a0u: goto label_1080a0;
        case 0x1080a4u: goto label_1080a4;
        case 0x1080a8u: goto label_1080a8;
        case 0x1080acu: goto label_1080ac;
        case 0x1080b0u: goto label_1080b0;
        case 0x1080b4u: goto label_1080b4;
        case 0x1080b8u: goto label_1080b8;
        case 0x1080bcu: goto label_1080bc;
        case 0x1080c0u: goto label_1080c0;
        case 0x1080c4u: goto label_1080c4;
        case 0x1080c8u: goto label_1080c8;
        case 0x1080ccu: goto label_1080cc;
        case 0x1080d0u: goto label_1080d0;
        case 0x1080d4u: goto label_1080d4;
        case 0x1080d8u: goto label_1080d8;
        case 0x1080dcu: goto label_1080dc;
        case 0x1080e0u: goto label_1080e0;
        case 0x1080e4u: goto label_1080e4;
        case 0x1080e8u: goto label_1080e8;
        case 0x1080ecu: goto label_1080ec;
        case 0x1080f0u: goto label_1080f0;
        case 0x1080f4u: goto label_1080f4;
        case 0x1080f8u: goto label_1080f8;
        case 0x1080fcu: goto label_1080fc;
        case 0x108100u: goto label_108100;
        case 0x108104u: goto label_108104;
        case 0x108108u: goto label_108108;
        case 0x10810cu: goto label_10810c;
        case 0x108110u: goto label_108110;
        case 0x108114u: goto label_108114;
        case 0x108118u: goto label_108118;
        case 0x10811cu: goto label_10811c;
        case 0x108120u: goto label_108120;
        case 0x108124u: goto label_108124;
        case 0x108128u: goto label_108128;
        case 0x10812cu: goto label_10812c;
        case 0x108130u: goto label_108130;
        case 0x108134u: goto label_108134;
        case 0x108138u: goto label_108138;
        case 0x10813cu: goto label_10813c;
        case 0x108140u: goto label_108140;
        case 0x108144u: goto label_108144;
        case 0x108148u: goto label_108148;
        case 0x10814cu: goto label_10814c;
        case 0x108150u: goto label_108150;
        case 0x108154u: goto label_108154;
        case 0x108158u: goto label_108158;
        case 0x10815cu: goto label_10815c;
        case 0x108160u: goto label_108160;
        case 0x108164u: goto label_108164;
        case 0x108168u: goto label_108168;
        case 0x10816cu: goto label_10816c;
        case 0x108170u: goto label_108170;
        case 0x108174u: goto label_108174;
        case 0x108178u: goto label_108178;
        case 0x10817cu: goto label_10817c;
        case 0x108180u: goto label_108180;
        case 0x108184u: goto label_108184;
        case 0x108188u: goto label_108188;
        case 0x10818cu: goto label_10818c;
        case 0x108190u: goto label_108190;
        case 0x108194u: goto label_108194;
        case 0x108198u: goto label_108198;
        case 0x10819cu: goto label_10819c;
        case 0x1081a0u: goto label_1081a0;
        case 0x1081a4u: goto label_1081a4;
        case 0x1081a8u: goto label_1081a8;
        case 0x1081acu: goto label_1081ac;
        case 0x1081b0u: goto label_1081b0;
        case 0x1081b4u: goto label_1081b4;
        case 0x1081b8u: goto label_1081b8;
        case 0x1081bcu: goto label_1081bc;
        case 0x1081c0u: goto label_1081c0;
        case 0x1081c4u: goto label_1081c4;
        case 0x1081c8u: goto label_1081c8;
        case 0x1081ccu: goto label_1081cc;
        case 0x1081d0u: goto label_1081d0;
        case 0x1081d4u: goto label_1081d4;
        case 0x1081d8u: goto label_1081d8;
        case 0x1081dcu: goto label_1081dc;
        case 0x1081e0u: goto label_1081e0;
        case 0x1081e4u: goto label_1081e4;
        case 0x1081e8u: goto label_1081e8;
        case 0x1081ecu: goto label_1081ec;
        case 0x1081f0u: goto label_1081f0;
        case 0x1081f4u: goto label_1081f4;
        case 0x1081f8u: goto label_1081f8;
        case 0x1081fcu: goto label_1081fc;
        case 0x108200u: goto label_108200;
        case 0x108204u: goto label_108204;
        case 0x108208u: goto label_108208;
        case 0x10820cu: goto label_10820c;
        case 0x108210u: goto label_108210;
        case 0x108214u: goto label_108214;
        case 0x108218u: goto label_108218;
        case 0x10821cu: goto label_10821c;
        case 0x108220u: goto label_108220;
        case 0x108224u: goto label_108224;
        case 0x108228u: goto label_108228;
        case 0x10822cu: goto label_10822c;
        case 0x108230u: goto label_108230;
        case 0x108234u: goto label_108234;
        case 0x108238u: goto label_108238;
        case 0x10823cu: goto label_10823c;
        case 0x108240u: goto label_108240;
        case 0x108244u: goto label_108244;
        case 0x108248u: goto label_108248;
        case 0x10824cu: goto label_10824c;
        case 0x108250u: goto label_108250;
        case 0x108254u: goto label_108254;
        case 0x108258u: goto label_108258;
        case 0x10825cu: goto label_10825c;
        case 0x108260u: goto label_108260;
        case 0x108264u: goto label_108264;
        case 0x108268u: goto label_108268;
        case 0x10826cu: goto label_10826c;
        case 0x108270u: goto label_108270;
        case 0x108274u: goto label_108274;
        case 0x108278u: goto label_108278;
        case 0x10827cu: goto label_10827c;
        case 0x108280u: goto label_108280;
        case 0x108284u: goto label_108284;
        case 0x108288u: goto label_108288;
        case 0x10828cu: goto label_10828c;
        case 0x108290u: goto label_108290;
        case 0x108294u: goto label_108294;
        case 0x108298u: goto label_108298;
        case 0x10829cu: goto label_10829c;
        case 0x1082a0u: goto label_1082a0;
        case 0x1082a4u: goto label_1082a4;
        case 0x1082a8u: goto label_1082a8;
        case 0x1082acu: goto label_1082ac;
        case 0x1082b0u: goto label_1082b0;
        case 0x1082b4u: goto label_1082b4;
        case 0x1082b8u: goto label_1082b8;
        case 0x1082bcu: goto label_1082bc;
        case 0x1082c0u: goto label_1082c0;
        case 0x1082c4u: goto label_1082c4;
        case 0x1082c8u: goto label_1082c8;
        case 0x1082ccu: goto label_1082cc;
        case 0x1082d0u: goto label_1082d0;
        case 0x1082d4u: goto label_1082d4;
        case 0x1082d8u: goto label_1082d8;
        case 0x1082dcu: goto label_1082dc;
        case 0x1082e0u: goto label_1082e0;
        case 0x1082e4u: goto label_1082e4;
        case 0x1082e8u: goto label_1082e8;
        case 0x1082ecu: goto label_1082ec;
        case 0x1082f0u: goto label_1082f0;
        case 0x1082f4u: goto label_1082f4;
        case 0x1082f8u: goto label_1082f8;
        case 0x1082fcu: goto label_1082fc;
        case 0x108300u: goto label_108300;
        case 0x108304u: goto label_108304;
        case 0x108308u: goto label_108308;
        case 0x10830cu: goto label_10830c;
        case 0x108310u: goto label_108310;
        case 0x108314u: goto label_108314;
        case 0x108318u: goto label_108318;
        case 0x10831cu: goto label_10831c;
        case 0x108320u: goto label_108320;
        case 0x108324u: goto label_108324;
        case 0x108328u: goto label_108328;
        case 0x10832cu: goto label_10832c;
        case 0x108330u: goto label_108330;
        case 0x108334u: goto label_108334;
        case 0x108338u: goto label_108338;
        case 0x10833cu: goto label_10833c;
        case 0x108340u: goto label_108340;
        case 0x108344u: goto label_108344;
        case 0x108348u: goto label_108348;
        case 0x10834cu: goto label_10834c;
        case 0x108350u: goto label_108350;
        case 0x108354u: goto label_108354;
        case 0x108358u: goto label_108358;
        case 0x10835cu: goto label_10835c;
        case 0x108360u: goto label_108360;
        case 0x108364u: goto label_108364;
        case 0x108368u: goto label_108368;
        case 0x10836cu: goto label_10836c;
        case 0x108370u: goto label_108370;
        case 0x108374u: goto label_108374;
        case 0x108378u: goto label_108378;
        case 0x10837cu: goto label_10837c;
        case 0x108380u: goto label_108380;
        case 0x108384u: goto label_108384;
        case 0x108388u: goto label_108388;
        case 0x10838cu: goto label_10838c;
        case 0x108390u: goto label_108390;
        case 0x108394u: goto label_108394;
        case 0x108398u: goto label_108398;
        case 0x10839cu: goto label_10839c;
        case 0x1083a0u: goto label_1083a0;
        case 0x1083a4u: goto label_1083a4;
        case 0x1083a8u: goto label_1083a8;
        case 0x1083acu: goto label_1083ac;
        case 0x1083b0u: goto label_1083b0;
        case 0x1083b4u: goto label_1083b4;
        case 0x1083b8u: goto label_1083b8;
        case 0x1083bcu: goto label_1083bc;
        case 0x1083c0u: goto label_1083c0;
        case 0x1083c4u: goto label_1083c4;
        case 0x1083c8u: goto label_1083c8;
        case 0x1083ccu: goto label_1083cc;
        case 0x1083d0u: goto label_1083d0;
        case 0x1083d4u: goto label_1083d4;
        case 0x1083d8u: goto label_1083d8;
        case 0x1083dcu: goto label_1083dc;
        case 0x1083e0u: goto label_1083e0;
        case 0x1083e4u: goto label_1083e4;
        case 0x1083e8u: goto label_1083e8;
        case 0x1083ecu: goto label_1083ec;
        case 0x1083f0u: goto label_1083f0;
        case 0x1083f4u: goto label_1083f4;
        case 0x1083f8u: goto label_1083f8;
        case 0x1083fcu: goto label_1083fc;
        case 0x108400u: goto label_108400;
        case 0x108404u: goto label_108404;
        case 0x108408u: goto label_108408;
        case 0x10840cu: goto label_10840c;
        case 0x108410u: goto label_108410;
        case 0x108414u: goto label_108414;
        case 0x108418u: goto label_108418;
        case 0x10841cu: goto label_10841c;
        case 0x108420u: goto label_108420;
        case 0x108424u: goto label_108424;
        case 0x108428u: goto label_108428;
        case 0x10842cu: goto label_10842c;
        case 0x108430u: goto label_108430;
        case 0x108434u: goto label_108434;
        case 0x108438u: goto label_108438;
        case 0x10843cu: goto label_10843c;
        case 0x108440u: goto label_108440;
        case 0x108444u: goto label_108444;
        case 0x108448u: goto label_108448;
        case 0x10844cu: goto label_10844c;
        case 0x108450u: goto label_108450;
        case 0x108454u: goto label_108454;
        case 0x108458u: goto label_108458;
        case 0x10845cu: goto label_10845c;
        case 0x108460u: goto label_108460;
        case 0x108464u: goto label_108464;
        case 0x108468u: goto label_108468;
        case 0x10846cu: goto label_10846c;
        case 0x108470u: goto label_108470;
        case 0x108474u: goto label_108474;
        case 0x108478u: goto label_108478;
        case 0x10847cu: goto label_10847c;
        case 0x108480u: goto label_108480;
        case 0x108484u: goto label_108484;
        case 0x108488u: goto label_108488;
        case 0x10848cu: goto label_10848c;
        case 0x108490u: goto label_108490;
        case 0x108494u: goto label_108494;
        case 0x108498u: goto label_108498;
        case 0x10849cu: goto label_10849c;
        case 0x1084a0u: goto label_1084a0;
        case 0x1084a4u: goto label_1084a4;
        case 0x1084a8u: goto label_1084a8;
        case 0x1084acu: goto label_1084ac;
        case 0x1084b0u: goto label_1084b0;
        case 0x1084b4u: goto label_1084b4;
        case 0x1084b8u: goto label_1084b8;
        case 0x1084bcu: goto label_1084bc;
        case 0x1084c0u: goto label_1084c0;
        case 0x1084c4u: goto label_1084c4;
        case 0x1084c8u: goto label_1084c8;
        case 0x1084ccu: goto label_1084cc;
        case 0x1084d0u: goto label_1084d0;
        case 0x1084d4u: goto label_1084d4;
        case 0x1084d8u: goto label_1084d8;
        case 0x1084dcu: goto label_1084dc;
        case 0x1084e0u: goto label_1084e0;
        case 0x1084e4u: goto label_1084e4;
        case 0x1084e8u: goto label_1084e8;
        case 0x1084ecu: goto label_1084ec;
        case 0x1084f0u: goto label_1084f0;
        case 0x1084f4u: goto label_1084f4;
        case 0x1084f8u: goto label_1084f8;
        case 0x1084fcu: goto label_1084fc;
        case 0x108500u: goto label_108500;
        case 0x108504u: goto label_108504;
        case 0x108508u: goto label_108508;
        case 0x10850cu: goto label_10850c;
        case 0x108510u: goto label_108510;
        case 0x108514u: goto label_108514;
        case 0x108518u: goto label_108518;
        case 0x10851cu: goto label_10851c;
        case 0x108520u: goto label_108520;
        case 0x108524u: goto label_108524;
        case 0x108528u: goto label_108528;
        case 0x10852cu: goto label_10852c;
        case 0x108530u: goto label_108530;
        case 0x108534u: goto label_108534;
        case 0x108538u: goto label_108538;
        case 0x10853cu: goto label_10853c;
        case 0x108540u: goto label_108540;
        case 0x108544u: goto label_108544;
        case 0x108548u: goto label_108548;
        case 0x10854cu: goto label_10854c;
        case 0x108550u: goto label_108550;
        case 0x108554u: goto label_108554;
        case 0x108558u: goto label_108558;
        case 0x10855cu: goto label_10855c;
        case 0x108560u: goto label_108560;
        case 0x108564u: goto label_108564;
        case 0x108568u: goto label_108568;
        case 0x10856cu: goto label_10856c;
        case 0x108570u: goto label_108570;
        case 0x108574u: goto label_108574;
        case 0x108578u: goto label_108578;
        case 0x10857cu: goto label_10857c;
        case 0x108580u: goto label_108580;
        case 0x108584u: goto label_108584;
        case 0x108588u: goto label_108588;
        case 0x10858cu: goto label_10858c;
        case 0x108590u: goto label_108590;
        case 0x108594u: goto label_108594;
        case 0x108598u: goto label_108598;
        case 0x10859cu: goto label_10859c;
        case 0x1085a0u: goto label_1085a0;
        case 0x1085a4u: goto label_1085a4;
        case 0x1085a8u: goto label_1085a8;
        case 0x1085acu: goto label_1085ac;
        case 0x1085b0u: goto label_1085b0;
        case 0x1085b4u: goto label_1085b4;
        case 0x1085b8u: goto label_1085b8;
        case 0x1085bcu: goto label_1085bc;
        case 0x1085c0u: goto label_1085c0;
        case 0x1085c4u: goto label_1085c4;
        case 0x1085c8u: goto label_1085c8;
        case 0x1085ccu: goto label_1085cc;
        case 0x1085d0u: goto label_1085d0;
        case 0x1085d4u: goto label_1085d4;
        case 0x1085d8u: goto label_1085d8;
        case 0x1085dcu: goto label_1085dc;
        case 0x1085e0u: goto label_1085e0;
        case 0x1085e4u: goto label_1085e4;
        case 0x1085e8u: goto label_1085e8;
        case 0x1085ecu: goto label_1085ec;
        case 0x1085f0u: goto label_1085f0;
        case 0x1085f4u: goto label_1085f4;
        case 0x1085f8u: goto label_1085f8;
        case 0x1085fcu: goto label_1085fc;
        case 0x108600u: goto label_108600;
        case 0x108604u: goto label_108604;
        case 0x108608u: goto label_108608;
        case 0x10860cu: goto label_10860c;
        case 0x108610u: goto label_108610;
        case 0x108614u: goto label_108614;
        case 0x108618u: goto label_108618;
        case 0x10861cu: goto label_10861c;
        case 0x108620u: goto label_108620;
        case 0x108624u: goto label_108624;
        case 0x108628u: goto label_108628;
        case 0x10862cu: goto label_10862c;
        case 0x108630u: goto label_108630;
        case 0x108634u: goto label_108634;
        case 0x108638u: goto label_108638;
        case 0x10863cu: goto label_10863c;
        case 0x108640u: goto label_108640;
        case 0x108644u: goto label_108644;
        case 0x108648u: goto label_108648;
        case 0x10864cu: goto label_10864c;
        case 0x108650u: goto label_108650;
        case 0x108654u: goto label_108654;
        case 0x108658u: goto label_108658;
        case 0x10865cu: goto label_10865c;
        case 0x108660u: goto label_108660;
        case 0x108664u: goto label_108664;
        case 0x108668u: goto label_108668;
        case 0x10866cu: goto label_10866c;
        case 0x108670u: goto label_108670;
        case 0x108674u: goto label_108674;
        case 0x108678u: goto label_108678;
        case 0x10867cu: goto label_10867c;
        case 0x108680u: goto label_108680;
        case 0x108684u: goto label_108684;
        case 0x108688u: goto label_108688;
        case 0x10868cu: goto label_10868c;
        case 0x108690u: goto label_108690;
        case 0x108694u: goto label_108694;
        case 0x108698u: goto label_108698;
        case 0x10869cu: goto label_10869c;
        case 0x1086a0u: goto label_1086a0;
        case 0x1086a4u: goto label_1086a4;
        case 0x1086a8u: goto label_1086a8;
        case 0x1086acu: goto label_1086ac;
        case 0x1086b0u: goto label_1086b0;
        case 0x1086b4u: goto label_1086b4;
        case 0x1086b8u: goto label_1086b8;
        case 0x1086bcu: goto label_1086bc;
        case 0x1086c0u: goto label_1086c0;
        case 0x1086c4u: goto label_1086c4;
        case 0x1086c8u: goto label_1086c8;
        case 0x1086ccu: goto label_1086cc;
        case 0x1086d0u: goto label_1086d0;
        case 0x1086d4u: goto label_1086d4;
        case 0x1086d8u: goto label_1086d8;
        case 0x1086dcu: goto label_1086dc;
        case 0x1086e0u: goto label_1086e0;
        case 0x1086e4u: goto label_1086e4;
        case 0x1086e8u: goto label_1086e8;
        case 0x1086ecu: goto label_1086ec;
        case 0x1086f0u: goto label_1086f0;
        case 0x1086f4u: goto label_1086f4;
        case 0x1086f8u: goto label_1086f8;
        case 0x1086fcu: goto label_1086fc;
        case 0x108700u: goto label_108700;
        case 0x108704u: goto label_108704;
        case 0x108708u: goto label_108708;
        case 0x10870cu: goto label_10870c;
        case 0x108710u: goto label_108710;
        case 0x108714u: goto label_108714;
        case 0x108718u: goto label_108718;
        case 0x10871cu: goto label_10871c;
        case 0x108720u: goto label_108720;
        case 0x108724u: goto label_108724;
        case 0x108728u: goto label_108728;
        case 0x10872cu: goto label_10872c;
        case 0x108730u: goto label_108730;
        case 0x108734u: goto label_108734;
        case 0x108738u: goto label_108738;
        case 0x10873cu: goto label_10873c;
        case 0x108740u: goto label_108740;
        case 0x108744u: goto label_108744;
        case 0x108748u: goto label_108748;
        case 0x10874cu: goto label_10874c;
        case 0x108750u: goto label_108750;
        case 0x108754u: goto label_108754;
        case 0x108758u: goto label_108758;
        case 0x10875cu: goto label_10875c;
        case 0x108760u: goto label_108760;
        case 0x108764u: goto label_108764;
        case 0x108768u: goto label_108768;
        case 0x10876cu: goto label_10876c;
        case 0x108770u: goto label_108770;
        case 0x108774u: goto label_108774;
        case 0x108778u: goto label_108778;
        case 0x10877cu: goto label_10877c;
        case 0x108780u: goto label_108780;
        case 0x108784u: goto label_108784;
        case 0x108788u: goto label_108788;
        case 0x10878cu: goto label_10878c;
        case 0x108790u: goto label_108790;
        case 0x108794u: goto label_108794;
        case 0x108798u: goto label_108798;
        case 0x10879cu: goto label_10879c;
        case 0x1087a0u: goto label_1087a0;
        case 0x1087a4u: goto label_1087a4;
        case 0x1087a8u: goto label_1087a8;
        case 0x1087acu: goto label_1087ac;
        case 0x1087b0u: goto label_1087b0;
        case 0x1087b4u: goto label_1087b4;
        case 0x1087b8u: goto label_1087b8;
        case 0x1087bcu: goto label_1087bc;
        case 0x1087c0u: goto label_1087c0;
        case 0x1087c4u: goto label_1087c4;
        case 0x1087c8u: goto label_1087c8;
        case 0x1087ccu: goto label_1087cc;
        case 0x1087d0u: goto label_1087d0;
        case 0x1087d4u: goto label_1087d4;
        case 0x1087d8u: goto label_1087d8;
        case 0x1087dcu: goto label_1087dc;
        case 0x1087e0u: goto label_1087e0;
        case 0x1087e4u: goto label_1087e4;
        case 0x1087e8u: goto label_1087e8;
        case 0x1087ecu: goto label_1087ec;
        case 0x1087f0u: goto label_1087f0;
        case 0x1087f4u: goto label_1087f4;
        case 0x1087f8u: goto label_1087f8;
        case 0x1087fcu: goto label_1087fc;
        case 0x108800u: goto label_108800;
        case 0x108804u: goto label_108804;
        case 0x108808u: goto label_108808;
        case 0x10880cu: goto label_10880c;
        case 0x108810u: goto label_108810;
        case 0x108814u: goto label_108814;
        case 0x108818u: goto label_108818;
        case 0x10881cu: goto label_10881c;
        case 0x108820u: goto label_108820;
        case 0x108824u: goto label_108824;
        case 0x108828u: goto label_108828;
        case 0x10882cu: goto label_10882c;
        case 0x108830u: goto label_108830;
        case 0x108834u: goto label_108834;
        case 0x108838u: goto label_108838;
        case 0x10883cu: goto label_10883c;
        case 0x108840u: goto label_108840;
        case 0x108844u: goto label_108844;
        case 0x108848u: goto label_108848;
        case 0x10884cu: goto label_10884c;
        case 0x108850u: goto label_108850;
        case 0x108854u: goto label_108854;
        case 0x108858u: goto label_108858;
        case 0x10885cu: goto label_10885c;
        case 0x108860u: goto label_108860;
        case 0x108864u: goto label_108864;
        case 0x108868u: goto label_108868;
        case 0x10886cu: goto label_10886c;
        case 0x108870u: goto label_108870;
        case 0x108874u: goto label_108874;
        case 0x108878u: goto label_108878;
        case 0x10887cu: goto label_10887c;
        case 0x108880u: goto label_108880;
        case 0x108884u: goto label_108884;
        case 0x108888u: goto label_108888;
        case 0x10888cu: goto label_10888c;
        case 0x108890u: goto label_108890;
        case 0x108894u: goto label_108894;
        case 0x108898u: goto label_108898;
        case 0x10889cu: goto label_10889c;
        case 0x1088a0u: goto label_1088a0;
        case 0x1088a4u: goto label_1088a4;
        case 0x1088a8u: goto label_1088a8;
        case 0x1088acu: goto label_1088ac;
        case 0x1088b0u: goto label_1088b0;
        case 0x1088b4u: goto label_1088b4;
        case 0x1088b8u: goto label_1088b8;
        case 0x1088bcu: goto label_1088bc;
        case 0x1088c0u: goto label_1088c0;
        case 0x1088c4u: goto label_1088c4;
        case 0x1088c8u: goto label_1088c8;
        case 0x1088ccu: goto label_1088cc;
        case 0x1088d0u: goto label_1088d0;
        case 0x1088d4u: goto label_1088d4;
        case 0x1088d8u: goto label_1088d8;
        case 0x1088dcu: goto label_1088dc;
        case 0x1088e0u: goto label_1088e0;
        case 0x1088e4u: goto label_1088e4;
        case 0x1088e8u: goto label_1088e8;
        case 0x1088ecu: goto label_1088ec;
        case 0x1088f0u: goto label_1088f0;
        case 0x1088f4u: goto label_1088f4;
        case 0x1088f8u: goto label_1088f8;
        case 0x1088fcu: goto label_1088fc;
        case 0x108900u: goto label_108900;
        case 0x108904u: goto label_108904;
        case 0x108908u: goto label_108908;
        case 0x10890cu: goto label_10890c;
        case 0x108910u: goto label_108910;
        case 0x108914u: goto label_108914;
        case 0x108918u: goto label_108918;
        case 0x10891cu: goto label_10891c;
        case 0x108920u: goto label_108920;
        case 0x108924u: goto label_108924;
        case 0x108928u: goto label_108928;
        case 0x10892cu: goto label_10892c;
        case 0x108930u: goto label_108930;
        case 0x108934u: goto label_108934;
        case 0x108938u: goto label_108938;
        case 0x10893cu: goto label_10893c;
        case 0x108940u: goto label_108940;
        case 0x108944u: goto label_108944;
        case 0x108948u: goto label_108948;
        case 0x10894cu: goto label_10894c;
        case 0x108950u: goto label_108950;
        case 0x108954u: goto label_108954;
        case 0x108958u: goto label_108958;
        case 0x10895cu: goto label_10895c;
        case 0x108960u: goto label_108960;
        case 0x108964u: goto label_108964;
        case 0x108968u: goto label_108968;
        case 0x10896cu: goto label_10896c;
        case 0x108970u: goto label_108970;
        case 0x108974u: goto label_108974;
        case 0x108978u: goto label_108978;
        case 0x10897cu: goto label_10897c;
        case 0x108980u: goto label_108980;
        case 0x108984u: goto label_108984;
        case 0x108988u: goto label_108988;
        case 0x10898cu: goto label_10898c;
        case 0x108990u: goto label_108990;
        case 0x108994u: goto label_108994;
        case 0x108998u: goto label_108998;
        case 0x10899cu: goto label_10899c;
        case 0x1089a0u: goto label_1089a0;
        case 0x1089a4u: goto label_1089a4;
        case 0x1089a8u: goto label_1089a8;
        case 0x1089acu: goto label_1089ac;
        case 0x1089b0u: goto label_1089b0;
        case 0x1089b4u: goto label_1089b4;
        case 0x1089b8u: goto label_1089b8;
        case 0x1089bcu: goto label_1089bc;
        case 0x1089c0u: goto label_1089c0;
        case 0x1089c4u: goto label_1089c4;
        case 0x1089c8u: goto label_1089c8;
        case 0x1089ccu: goto label_1089cc;
        case 0x1089d0u: goto label_1089d0;
        case 0x1089d4u: goto label_1089d4;
        case 0x1089d8u: goto label_1089d8;
        case 0x1089dcu: goto label_1089dc;
        case 0x1089e0u: goto label_1089e0;
        case 0x1089e4u: goto label_1089e4;
        case 0x1089e8u: goto label_1089e8;
        case 0x1089ecu: goto label_1089ec;
        case 0x1089f0u: goto label_1089f0;
        case 0x1089f4u: goto label_1089f4;
        case 0x1089f8u: goto label_1089f8;
        case 0x1089fcu: goto label_1089fc;
        case 0x108a00u: goto label_108a00;
        case 0x108a04u: goto label_108a04;
        case 0x108a08u: goto label_108a08;
        case 0x108a0cu: goto label_108a0c;
        case 0x108a10u: goto label_108a10;
        case 0x108a14u: goto label_108a14;
        case 0x108a18u: goto label_108a18;
        case 0x108a1cu: goto label_108a1c;
        case 0x108a20u: goto label_108a20;
        case 0x108a24u: goto label_108a24;
        case 0x108a28u: goto label_108a28;
        case 0x108a2cu: goto label_108a2c;
        case 0x108a30u: goto label_108a30;
        case 0x108a34u: goto label_108a34;
        case 0x108a38u: goto label_108a38;
        case 0x108a3cu: goto label_108a3c;
        case 0x108a40u: goto label_108a40;
        case 0x108a44u: goto label_108a44;
        case 0x108a48u: goto label_108a48;
        case 0x108a4cu: goto label_108a4c;
        case 0x108a50u: goto label_108a50;
        case 0x108a54u: goto label_108a54;
        case 0x108a58u: goto label_108a58;
        case 0x108a5cu: goto label_108a5c;
        case 0x108a60u: goto label_108a60;
        case 0x108a64u: goto label_108a64;
        case 0x108a68u: goto label_108a68;
        case 0x108a6cu: goto label_108a6c;
        case 0x108a70u: goto label_108a70;
        case 0x108a74u: goto label_108a74;
        case 0x108a78u: goto label_108a78;
        case 0x108a7cu: goto label_108a7c;
        case 0x108a80u: goto label_108a80;
        case 0x108a84u: goto label_108a84;
        case 0x108a88u: goto label_108a88;
        case 0x108a8cu: goto label_108a8c;
        case 0x108a90u: goto label_108a90;
        case 0x108a94u: goto label_108a94;
        case 0x108a98u: goto label_108a98;
        case 0x108a9cu: goto label_108a9c;
        case 0x108aa0u: goto label_108aa0;
        case 0x108aa4u: goto label_108aa4;
        case 0x108aa8u: goto label_108aa8;
        case 0x108aacu: goto label_108aac;
        default: break;
    }

    ctx->pc = 0x107f58u;

label_107f58:
    // 0x107f58: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_107f5c:
    // 0x107f5c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x107f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_107f60:
    // 0x107f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107f64:
    // 0x107f64: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x107f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_107f68:
    // 0x107f68: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x107f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_107f6c:
    // 0x107f6c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x107f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_107f70:
    // 0x107f70: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x107f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_107f74:
    // 0x107f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x107f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_107f78:
    // 0x107f78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x107f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_107f7c:
    // 0x107f7c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x107f7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_107f80:
    // 0x107f80: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x107f80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_107f84:
    // 0x107f84: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x107f84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_107f88:
    // 0x107f88: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x107f88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_107f8c:
    // 0x107f8c: 0xc0400c8  jal         func_100320
label_107f90:
    if (ctx->pc == 0x107F90u) {
        ctx->pc = 0x107F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F8Cu;
        // 0x107f90: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F94u;
        goto label_107f94;
    }
    ctx->pc = 0x107F8Cu;
    SET_GPR_U32(ctx, 31, 0x107F94u);
    ctx->pc = 0x107F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F8Cu;
    // 0x107f90: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x100320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100320u, 0x107F8Cu, 0x107F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F94u;
label_107f94:
    // 0x107f94: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x107f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_107f98:
    // 0x107f98: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x107f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_107f9c:
    // 0x107f9c: 0x24a5b808  addiu       $a1, $a1, -0x47F8
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948872));
label_107fa0:
    // 0x107fa0: 0xc0c733c  jal         func_31CCF0
label_107fa4:
    if (ctx->pc == 0x107FA4u) {
        ctx->pc = 0x107FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FA0u;
        // 0x107fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FA8u;
        goto label_107fa8;
    }
    ctx->pc = 0x107FA0u;
    SET_GPR_U32(ctx, 31, 0x107FA8u);
    ctx->pc = 0x107FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FA0u;
    // 0x107fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x107FA0u, 0x107FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FA8u;
label_107fa8:
    // 0x107fa8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_107fac:
    // 0x107fac: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x107facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_107fb0:
    // 0x107fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107fb4:
    // 0x107fb4: 0x24a5b810  addiu       $a1, $a1, -0x47F0
    ctx->pc = 0x107fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948880));
label_107fb8:
    // 0x107fb8: 0xc0c733c  jal         func_31CCF0
label_107fbc:
    if (ctx->pc == 0x107FBCu) {
        ctx->pc = 0x107FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FB8u;
        // 0x107fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FC0u;
        goto label_107fc0;
    }
    ctx->pc = 0x107FB8u;
    SET_GPR_U32(ctx, 31, 0x107FC0u);
    ctx->pc = 0x107FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FB8u;
    // 0x107fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x107FB8u, 0x107FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FC0u;
label_107fc0:
    // 0x107fc0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_107fc4:
    if (ctx->pc == 0x107FC4u) {
        ctx->pc = 0x107FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FC0u;
        // 0x107fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FC8u;
        goto label_107fc8;
    }
    ctx->pc = 0x107FC0u;
    {
        const bool branch_taken_0x107fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FC0u;
        // 0x107fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fc0) {
            ctx->pc = 0x107FFCu;
            goto label_107ffc;
        }
    }
    ctx->pc = 0x107FC8u;
label_107fc8:
    // 0x107fc8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_107fcc:
    // 0x107fcc: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_107fd0:
    // 0x107fd0: 0x24a5b818  addiu       $a1, $a1, -0x47E8
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948888));
label_107fd4:
    // 0x107fd4: 0xc0c733c  jal         func_31CCF0
label_107fd8:
    if (ctx->pc == 0x107FD8u) {
        ctx->pc = 0x107FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FD4u;
        // 0x107fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FDCu;
        goto label_107fdc;
    }
    ctx->pc = 0x107FD4u;
    SET_GPR_U32(ctx, 31, 0x107FDCu);
    ctx->pc = 0x107FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FD4u;
    // 0x107fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x107FD4u, 0x107FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FDCu;
label_107fdc:
    // 0x107fdc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_107fe0:
    if (ctx->pc == 0x107FE0u) {
        ctx->pc = 0x107FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FDCu;
        // 0x107fe0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FE4u;
        goto label_107fe4;
    }
    ctx->pc = 0x107FDCu;
    {
        const bool branch_taken_0x107fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FDCu;
        // 0x107fe0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fdc) {
            ctx->pc = 0x107FFCu;
            goto label_107ffc;
        }
    }
    ctx->pc = 0x107FE4u;
label_107fe4:
    // 0x107fe4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_107fe8:
    // 0x107fe8: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_107fec:
    // 0x107fec: 0x24a5b820  addiu       $a1, $a1, -0x47E0
    ctx->pc = 0x107fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
label_107ff0:
    // 0x107ff0: 0xc0c733c  jal         func_31CCF0
label_107ff4:
    if (ctx->pc == 0x107FF4u) {
        ctx->pc = 0x107FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FF0u;
        // 0x107ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FF8u;
        goto label_107ff8;
    }
    ctx->pc = 0x107FF0u;
    SET_GPR_U32(ctx, 31, 0x107FF8u);
    ctx->pc = 0x107FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FF0u;
    // 0x107ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x107FF0u, 0x107FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FF8u;
label_107ff8:
    // 0x107ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107ffc:
    // 0x107ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108000:
    // 0x108000: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108004:
    // 0x108004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108008:
    // 0x108008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10800c:
    // 0x10800c: 0xc0525ce  jal         func_149738
label_108010:
    if (ctx->pc == 0x108010u) {
        ctx->pc = 0x108010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10800Cu;
        // 0x108010: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108014u;
        goto label_108014;
    }
    ctx->pc = 0x10800Cu;
    SET_GPR_U32(ctx, 31, 0x108014u);
    ctx->pc = 0x108010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10800Cu;
    // 0x108010: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x10800Cu, 0x108014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108014u;
label_108014:
    // 0x108014: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x108014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108018:
    // 0x108018: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x108018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_10801c:
    // 0x10801c: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
label_108020:
    // 0x108020: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x108020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_108024:
    // 0x108024: 0xae1105f4  sw          $s1, 0x5F4($s0)
    ctx->pc = 0x108024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 17));
label_108028:
    // 0x108028: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_10802c:
    // 0x10802c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x10802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_108030:
    // 0x108030: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108034:
    // 0x108034: 0xc0c3ea6  jal         func_30FA98
label_108038:
    if (ctx->pc == 0x108038u) {
        ctx->pc = 0x108038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108034u;
        // 0x108038: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10803Cu;
        goto label_10803c;
    }
    ctx->pc = 0x108034u;
    SET_GPR_U32(ctx, 31, 0x10803Cu);
    ctx->pc = 0x108038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108034u;
    // 0x108038: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x108034u, 0x10803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10803Cu;
label_10803c:
    // 0x10803c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108040:
    // 0x108040: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_108044:
    if (ctx->pc == 0x108044u) {
        ctx->pc = 0x108044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108040u;
        // 0x108044: 0xae25068c  sw          $a1, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108048u;
        goto label_108048;
    }
    ctx->pc = 0x108040u;
    {
        const bool branch_taken_0x108040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108040u;
        // 0x108044: 0xae25068c  sw          $a1, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108040) {
            ctx->pc = 0x10807Cu;
            goto label_10807c;
        }
    }
    ctx->pc = 0x108048u;
label_108048:
    // 0x108048: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x108048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10804c:
    // 0x10804c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x10804cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_108050:
    // 0x108050: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x108050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_108054:
    // 0x108054: 0x40f809  jalr        $v0
label_108058:
    if (ctx->pc == 0x108058u) {
        ctx->pc = 0x108058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108054u;
        // 0x108058: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10805Cu;
        goto label_10805c;
    }
    ctx->pc = 0x108054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10805Cu);
        ctx->pc = 0x108058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108054u;
        // 0x108058: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108054u, 0x10805Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10805Cu;
label_10805c:
    // 0x10805c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_108060:
    if (ctx->pc == 0x108060u) {
        ctx->pc = 0x108060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10805Cu;
        // 0x108060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108064u;
        goto label_108064;
    }
    ctx->pc = 0x10805Cu;
    {
        const bool branch_taken_0x10805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10805Cu;
        // 0x108060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10805c) {
            ctx->pc = 0x108078u;
            goto label_108078;
        }
    }
    ctx->pc = 0x108064u;
label_108064:
    // 0x108064: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_108068:
    // 0x108068: 0xc0403b6  jal         func_100ED8
label_10806c:
    if (ctx->pc == 0x10806Cu) {
        ctx->pc = 0x10806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108068u;
        // 0x10806c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108070u;
        goto label_108070;
    }
    ctx->pc = 0x108068u;
    SET_GPR_U32(ctx, 31, 0x108070u);
    ctx->pc = 0x10806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108068u;
    // 0x10806c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x108068u, 0x108070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108070u;
label_108070:
    // 0x108070: 0x10000003  b           . + 4 + (0x3 << 2)
label_108074:
    if (ctx->pc == 0x108074u) {
        ctx->pc = 0x108074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108070u;
        // 0x108074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108078u;
        goto label_108078;
    }
    ctx->pc = 0x108070u;
    {
        const bool branch_taken_0x108070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108070u;
        // 0x108074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108070) {
            ctx->pc = 0x108080u;
            goto label_108080;
        }
    }
    ctx->pc = 0x108078u;
label_108078:
    // 0x108078: 0xae20068c  sw          $zero, 0x68C($s1)
    ctx->pc = 0x108078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 0));
label_10807c:
    // 0x10807c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108080:
    // 0x108080: 0xc05404a  jal         func_150128
label_108084:
    if (ctx->pc == 0x108084u) {
        ctx->pc = 0x108084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108080u;
        // 0x108084: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108088u;
        goto label_108088;
    }
    ctx->pc = 0x108080u;
    SET_GPR_U32(ctx, 31, 0x108088u);
    ctx->pc = 0x108084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108080u;
    // 0x108084: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x108080u, 0x108088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108088u;
label_108088:
    // 0x108088: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x108088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_10808c:
    // 0x10808c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108090:
    // 0x108090: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x108090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
label_108094:
    // 0x108094: 0xc053bd4  jal         func_14EF50
label_108098:
    if (ctx->pc == 0x108098u) {
        ctx->pc = 0x108098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108094u;
        // 0x108098: 0x262506b0  addiu       $a1, $s1, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10809Cu;
        goto label_10809c;
    }
    ctx->pc = 0x108094u;
    SET_GPR_U32(ctx, 31, 0x10809Cu);
    ctx->pc = 0x108098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108094u;
    // 0x108098: 0x262506b0  addiu       $a1, $s1, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x108094u, 0x10809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10809Cu;
label_10809c:
    // 0x10809c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x10809cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1080a0:
    // 0x1080a0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1080a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1080a4:
    // 0x1080a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1080a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1080a8:
    // 0x1080a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1080ac:
    if (ctx->pc == 0x1080ACu) {
        ctx->pc = 0x1080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A8u;
        // 0x1080ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080B0u;
        goto label_1080b0;
    }
    ctx->pc = 0x1080A8u;
    {
        const bool branch_taken_0x1080a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A8u;
        // 0x1080ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a8) {
            ctx->pc = 0x1080BCu;
            goto label_1080bc;
        }
    }
    ctx->pc = 0x1080B0u;
label_1080b0:
    // 0x1080b0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1080b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1080b4:
    // 0x1080b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1080b8:
    if (ctx->pc == 0x1080B8u) {
        ctx->pc = 0x1080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080B4u;
        // 0x1080b8: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080BCu;
        goto label_1080bc;
    }
    ctx->pc = 0x1080B4u;
    {
        const bool branch_taken_0x1080b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080B4u;
        // 0x1080b8: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080b4) {
            ctx->pc = 0x1080C0u;
            goto label_1080c0;
        }
    }
    ctx->pc = 0x1080BCu;
label_1080bc:
    // 0x1080bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1080bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1080c0:
    // 0x1080c0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1080c4:
    if (ctx->pc == 0x1080C4u) {
        ctx->pc = 0x1080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C0u;
        // 0x1080c4: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080C8u;
        goto label_1080c8;
    }
    ctx->pc = 0x1080C0u;
    {
        const bool branch_taken_0x1080c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C0u;
        // 0x1080c4: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080c0) {
            ctx->pc = 0x1080DCu;
            goto label_1080dc;
        }
    }
    ctx->pc = 0x1080C8u;
label_1080c8:
    // 0x1080c8: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x1080c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_1080cc:
    // 0x1080cc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1080d0:
    // 0x1080d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1080d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1080d4:
    // 0x1080d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1080d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1080d8:
    // 0x1080d8: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x1080d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
label_1080dc:
    // 0x1080dc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1080dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1080e0:
    // 0x1080e0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1080e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1080e4:
    // 0x1080e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1080e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1080e8:
    // 0x1080e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1080ec:
    if (ctx->pc == 0x1080ECu) {
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080F0u;
        goto label_1080f0;
    }
    ctx->pc = 0x1080E8u;
    {
        const bool branch_taken_0x1080e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e8) {
            ctx->pc = 0x1080FCu;
            goto label_1080fc;
        }
    }
    ctx->pc = 0x1080F0u;
label_1080f0:
    // 0x1080f0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1080f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1080f4:
    // 0x1080f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1080f8:
    if (ctx->pc == 0x1080F8u) {
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x8c450070  lw          $a1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080FCu;
        goto label_1080fc;
    }
    ctx->pc = 0x1080F4u;
    {
        const bool branch_taken_0x1080f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x8c450070  lw          $a1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f4) {
            ctx->pc = 0x108100u;
            goto label_108100;
        }
    }
    ctx->pc = 0x1080FCu;
label_1080fc:
    // 0x1080fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1080fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108100:
    // 0x108100: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_108104:
    if (ctx->pc == 0x108104u) {
        ctx->pc = 0x108104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108100u;
        // 0x108104: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108108u;
        goto label_108108;
    }
    ctx->pc = 0x108100u;
    {
        const bool branch_taken_0x108100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108100u;
        // 0x108104: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108100) {
            ctx->pc = 0x10811Cu;
            goto label_10811c;
        }
    }
    ctx->pc = 0x108108u;
label_108108:
    // 0x108108: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x108108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_10810c:
    // 0x10810c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x10810cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_108110:
    // 0x108110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108114:
    // 0x108114: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x108114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_108118:
    // 0x108118: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x108118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
label_10811c:
    // 0x10811c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
label_108120:
    // 0x108120: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_108124:
    // 0x108124: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x108124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108128:
    // 0x108128: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10812c:
    // 0x10812c: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x10812cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_108130:
    // 0x108130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108134:
    // 0x108134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108138:
    // 0x108138: 0xc04d1be  jal         func_1346F8
label_10813c:
    if (ctx->pc == 0x10813Cu) {
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108140u;
        goto label_108140;
    }
    ctx->pc = 0x108138u;
    SET_GPR_U32(ctx, 31, 0x108140u);
    ctx->pc = 0x10813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108138u;
    // 0x10813c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x108138u, 0x108140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108140u;
label_108140:
    // 0x108140: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_108144:
    // 0x108144: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108148:
    // 0x108148: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x108148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10814c:
    // 0x10814c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_108150:
    // 0x108150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108154:
    // 0x108154: 0xe4ec0004  swc1        $f12, 0x4($a3)
    ctx->pc = 0x108154u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_108158:
    // 0x108158: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_10815c:
    // 0x10815c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108160:
    // 0x108160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108164:
    // 0x108164: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_108168:
    // 0x108168: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x108168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_10816c:
    // 0x10816c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10816cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_108170:
    // 0x108170: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x108170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_108174:
    // 0x108174: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x108174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_108178:
    // 0x108178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10817c:
    // 0x10817c: 0xc04d220  jal         func_134880
label_108180:
    if (ctx->pc == 0x108180u) {
        ctx->pc = 0x108180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10817Cu;
        // 0x108180: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108184u;
        goto label_108184;
    }
    ctx->pc = 0x10817Cu;
    SET_GPR_U32(ctx, 31, 0x108184u);
    ctx->pc = 0x108180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10817Cu;
    // 0x108180: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x10817Cu, 0x108184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108184u;
label_108184:
    // 0x108184: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x108184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_108188:
    // 0x108188: 0xc07eb20  jal         func_1FAC80
label_10818c:
    if (ctx->pc == 0x10818Cu) {
        ctx->pc = 0x10818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108188u;
        // 0x10818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108190u;
        goto label_108190;
    }
    ctx->pc = 0x108188u;
    SET_GPR_U32(ctx, 31, 0x108190u);
    ctx->pc = 0x10818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108188u;
    // 0x10818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x108188u, 0x108190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108190u;
label_108190:
    // 0x108190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108194:
    // 0x108194: 0xc07eb1a  jal         func_1FAC68
label_108198:
    if (ctx->pc == 0x108198u) {
        ctx->pc = 0x108198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108194u;
        // 0x108198: 0xa6220548  sh          $v0, 0x548($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10819Cu;
        goto label_10819c;
    }
    ctx->pc = 0x108194u;
    SET_GPR_U32(ctx, 31, 0x10819Cu);
    ctx->pc = 0x108198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108194u;
    // 0x108198: 0xa6220548  sh          $v0, 0x548($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x108194u, 0x10819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10819Cu;
label_10819c:
    // 0x10819c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10819cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1081a0:
    // 0x1081a0: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
label_1081a4:
    // 0x1081a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1081a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1081a8:
    // 0x1081a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1081ac:
    if (ctx->pc == 0x1081ACu) {
        ctx->pc = 0x1081ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081A8u;
        // 0x1081ac: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1081B0u;
        goto label_1081b0;
    }
    ctx->pc = 0x1081A8u;
    {
        const bool branch_taken_0x1081a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1081ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081A8u;
        // 0x1081ac: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081a8) {
            ctx->pc = 0x1081B8u;
            goto label_1081b8;
        }
    }
    ctx->pc = 0x1081B0u;
label_1081b0:
    // 0x1081b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1081b4:
    if (ctx->pc == 0x1081B4u) {
        ctx->pc = 0x1081B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081B0u;
        // 0x1081b4: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1081B8u;
        goto label_1081b8;
    }
    ctx->pc = 0x1081B0u;
    {
        const bool branch_taken_0x1081b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081B0u;
        // 0x1081b4: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081b0) {
            ctx->pc = 0x1081BCu;
            goto label_1081bc;
        }
    }
    ctx->pc = 0x1081B8u;
label_1081b8:
    // 0x1081b8: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x1081b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_1081bc:
    // 0x1081bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1081bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1081c0:
    // 0x1081c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1081c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1081c4:
    // 0x1081c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1081c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1081c8:
    // 0x1081c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1081c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1081cc:
    // 0x1081cc: 0xc07f886  jal         func_1FE218
label_1081d0:
    if (ctx->pc == 0x1081D0u) {
        ctx->pc = 0x1081D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081CCu;
        // 0x1081d0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1081D4u;
        goto label_1081d4;
    }
    ctx->pc = 0x1081CCu;
    SET_GPR_U32(ctx, 31, 0x1081D4u);
    ctx->pc = 0x1081D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1081CCu;
    // 0x1081d0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1081CCu, 0x1081D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1081D4u;
label_1081d4:
    // 0x1081d4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_1081d8:
    if (ctx->pc == 0x1081D8u) {
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0xae220678  sw          $v0, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1081DCu;
        goto label_1081dc;
    }
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0xae220678  sw          $v0, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x10833Cu;
            goto label_10833c;
        }
    }
    ctx->pc = 0x1081DCu;
label_1081dc:
    // 0x1081dc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1081dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1081e0:
    // 0x1081e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1081e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1081e4:
    // 0x1081e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1081e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1081e8:
    // 0x1081e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1081ec:
    if (ctx->pc == 0x1081ECu) {
        ctx->pc = 0x1081ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081E8u;
        // 0x1081ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1081F0u;
        goto label_1081f0;
    }
    ctx->pc = 0x1081E8u;
    {
        const bool branch_taken_0x1081e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081E8u;
        // 0x1081ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081e8) {
            ctx->pc = 0x1081FCu;
            goto label_1081fc;
        }
    }
    ctx->pc = 0x1081F0u;
label_1081f0:
    // 0x1081f0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1081f4:
    // 0x1081f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1081f8:
    if (ctx->pc == 0x1081F8u) {
        ctx->pc = 0x1081F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081F4u;
        // 0x1081f8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1081FCu;
        goto label_1081fc;
    }
    ctx->pc = 0x1081F4u;
    {
        const bool branch_taken_0x1081f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081F4u;
        // 0x1081f8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081f4) {
            ctx->pc = 0x108200u;
            goto label_108200;
        }
    }
    ctx->pc = 0x1081FCu;
label_1081fc:
    // 0x1081fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1081fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108200:
    // 0x108200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108204:
    // 0x108204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108208:
    // 0x108208: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_10820c:
    // 0x10820c: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x10820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_108210:
    // 0x108210: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108214:
    // 0x108214: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_108218:
    // 0x108218: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10821c:
    // 0x10821c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x10821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_108220:
    // 0x108220: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x108220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_108224:
    // 0x108224: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x108224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_108228:
    // 0x108228: 0xc07f6bc  jal         func_1FDAF0
label_10822c:
    if (ctx->pc == 0x10822Cu) {
        ctx->pc = 0x10822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108228u;
        // 0x10822c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108230u;
        goto label_108230;
    }
    ctx->pc = 0x108228u;
    SET_GPR_U32(ctx, 31, 0x108230u);
    ctx->pc = 0x10822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108228u;
    // 0x10822c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x108228u, 0x108230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108230u;
label_108230:
    // 0x108230: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x108230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_108234:
    // 0x108234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_108238:
    // 0x108238: 0xae22067c  sw          $v0, 0x67C($s1)
    ctx->pc = 0x108238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
label_10823c:
    // 0x10823c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x10823cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_108240:
    // 0x108240: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_108244:
    if (ctx->pc == 0x108244u) {
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108248u;
        goto label_108248;
    }
    ctx->pc = 0x108240u;
    {
        const bool branch_taken_0x108240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108240) {
            ctx->pc = 0x108254u;
            goto label_108254;
        }
    }
    ctx->pc = 0x108248u;
label_108248:
    // 0x108248: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x108248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_10824c:
    // 0x10824c: 0x10000002  b           . + 4 + (0x2 << 2)
label_108250:
    if (ctx->pc == 0x108250u) {
        ctx->pc = 0x108250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10824Cu;
        // 0x108250: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108254u;
        goto label_108254;
    }
    ctx->pc = 0x10824Cu;
    {
        const bool branch_taken_0x10824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10824Cu;
        // 0x108250: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10824c) {
            ctx->pc = 0x108258u;
            goto label_108258;
        }
    }
    ctx->pc = 0x108254u;
label_108254:
    // 0x108254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108258:
    // 0x108258: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10825c:
    // 0x10825c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10825cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108260:
    // 0x108260: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_108264:
    // 0x108264: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x108264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_108268:
    // 0x108268: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10826c:
    // 0x10826c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x10826cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_108270:
    // 0x108270: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108274:
    // 0x108274: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x108274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_108278:
    // 0x108278: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x108278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_10827c:
    // 0x10827c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10827cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_108280:
    // 0x108280: 0xc07f6bc  jal         func_1FDAF0
label_108284:
    if (ctx->pc == 0x108284u) {
        ctx->pc = 0x108284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108280u;
        // 0x108284: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108288u;
        goto label_108288;
    }
    ctx->pc = 0x108280u;
    SET_GPR_U32(ctx, 31, 0x108288u);
    ctx->pc = 0x108284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108280u;
    // 0x108284: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x108280u, 0x108288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108288u;
label_108288:
    // 0x108288: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x108288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_10828c:
    // 0x10828c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x10828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_108290:
    // 0x108290: 0xae220680  sw          $v0, 0x680($s1)
    ctx->pc = 0x108290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
label_108294:
    // 0x108294: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x108294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_108298:
    // 0x108298: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_10829c:
    if (ctx->pc == 0x10829Cu) {
        ctx->pc = 0x10829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108298u;
        // 0x10829c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082A0u;
        goto label_1082a0;
    }
    ctx->pc = 0x108298u;
    {
        const bool branch_taken_0x108298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108298u;
        // 0x10829c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108298) {
            ctx->pc = 0x1082ACu;
            goto label_1082ac;
        }
    }
    ctx->pc = 0x1082A0u;
label_1082a0:
    // 0x1082a0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1082a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1082a4:
    // 0x1082a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1082a8:
    if (ctx->pc == 0x1082A8u) {
        ctx->pc = 0x1082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A4u;
        // 0x1082a8: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082ACu;
        goto label_1082ac;
    }
    ctx->pc = 0x1082A4u;
    {
        const bool branch_taken_0x1082a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A4u;
        // 0x1082a8: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082a4) {
            ctx->pc = 0x1082B0u;
            goto label_1082b0;
        }
    }
    ctx->pc = 0x1082ACu;
label_1082ac:
    // 0x1082ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1082acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1082b0:
    // 0x1082b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1082b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1082b4:
    // 0x1082b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1082b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1082b8:
    // 0x1082b8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1082b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1082bc:
    // 0x1082bc: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1082c0:
    // 0x1082c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1082c4:
    // 0x1082c4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1082c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1082c8:
    // 0x1082c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1082c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1082cc:
    // 0x1082cc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1082ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1082d0:
    // 0x1082d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1082d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1082d4:
    // 0x1082d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1082d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1082d8:
    // 0x1082d8: 0xc07f6bc  jal         func_1FDAF0
label_1082dc:
    if (ctx->pc == 0x1082DCu) {
        ctx->pc = 0x1082DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082D8u;
        // 0x1082dc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082E0u;
        goto label_1082e0;
    }
    ctx->pc = 0x1082D8u;
    SET_GPR_U32(ctx, 31, 0x1082E0u);
    ctx->pc = 0x1082DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082D8u;
    // 0x1082dc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1082D8u, 0x1082E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082E0u;
label_1082e0:
    // 0x1082e0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1082e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1082e4:
    // 0x1082e4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1082e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1082e8:
    // 0x1082e8: 0xae220684  sw          $v0, 0x684($s1)
    ctx->pc = 0x1082e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 2));
label_1082ec:
    // 0x1082ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1082ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1082f0:
    // 0x1082f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1082f4:
    if (ctx->pc == 0x1082F4u) {
        ctx->pc = 0x1082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F0u;
        // 0x1082f4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082F8u;
        goto label_1082f8;
    }
    ctx->pc = 0x1082F0u;
    {
        const bool branch_taken_0x1082f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F0u;
        // 0x1082f4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f0) {
            ctx->pc = 0x108304u;
            goto label_108304;
        }
    }
    ctx->pc = 0x1082F8u;
label_1082f8:
    // 0x1082f8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1082fc:
    // 0x1082fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_108300:
    if (ctx->pc == 0x108300u) {
        ctx->pc = 0x108300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082FCu;
        // 0x108300: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108304u;
        goto label_108304;
    }
    ctx->pc = 0x1082FCu;
    {
        const bool branch_taken_0x1082fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082FCu;
        // 0x108300: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082fc) {
            ctx->pc = 0x108308u;
            goto label_108308;
        }
    }
    ctx->pc = 0x108304u;
label_108304:
    // 0x108304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108308:
    // 0x108308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10830c:
    // 0x10830c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10830cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108310:
    // 0x108310: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_108314:
    // 0x108314: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x108314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_108318:
    // 0x108318: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10831c:
    // 0x10831c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x10831cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_108320:
    // 0x108320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108324:
    // 0x108324: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x108324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_108328:
    // 0x108328: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x108328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_10832c:
    // 0x10832c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_108330:
    // 0x108330: 0xc07f6bc  jal         func_1FDAF0
label_108334:
    if (ctx->pc == 0x108334u) {
        ctx->pc = 0x108334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108330u;
        // 0x108334: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108338u;
        goto label_108338;
    }
    ctx->pc = 0x108330u;
    SET_GPR_U32(ctx, 31, 0x108338u);
    ctx->pc = 0x108334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108330u;
    // 0x108334: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x108330u, 0x108338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108338u;
label_108338:
    // 0x108338: 0xae220688  sw          $v0, 0x688($s1)
    ctx->pc = 0x108338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 2));
label_10833c:
    // 0x10833c: 0x26104380  addiu       $s0, $s0, 0x4380
    ctx->pc = 0x10833cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
label_108340:
    // 0x108340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108344:
    // 0x108344: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x108344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_108348:
    // 0x108348: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10834c:
    // 0x10834c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x10834cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_108350:
    // 0x108350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108354:
    // 0x108354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108358:
    // 0x108358: 0xc07f83a  jal         func_1FE0E8
label_10835c:
    if (ctx->pc == 0x10835Cu) {
        ctx->pc = 0x10835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108358u;
        // 0x10835c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108360u;
        goto label_108360;
    }
    ctx->pc = 0x108358u;
    SET_GPR_U32(ctx, 31, 0x108360u);
    ctx->pc = 0x10835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108358u;
    // 0x10835c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x108358u, 0x108360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108360u;
label_108360:
    // 0x108360: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x108360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_108364:
    // 0x108364: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x108364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108368:
    // 0x108368: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x108368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10836c:
    // 0x10836c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_108370:
    // 0x108370: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_108374:
    // 0x108374: 0xe7b70004  swc1        $f23, 0x4($sp)
    ctx->pc = 0x108374u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_108378:
    // 0x108378: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10837c:
    // 0x10837c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_108380:
    // 0x108380: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x108380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_108384:
    // 0x108384: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x108384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_108388:
    // 0x108388: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x108388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10838c:
    // 0x10838c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_108390:
    // 0x108390: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_108394:
    // 0x108394: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x108394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_108398:
    // 0x108398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10839c:
    // 0x10839c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x10839cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1083a0:
    // 0x1083a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1083a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1083a4:
    // 0x1083a4: 0xae2205b0  sw          $v0, 0x5B0($s1)
    ctx->pc = 0x1083a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 2));
label_1083a8:
    // 0x1083a8: 0xc07f700  jal         func_1FDC00
label_1083ac:
    if (ctx->pc == 0x1083ACu) {
        ctx->pc = 0x1083ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083A8u;
        // 0x1083ac: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1083B0u;
        goto label_1083b0;
    }
    ctx->pc = 0x1083A8u;
    SET_GPR_U32(ctx, 31, 0x1083B0u);
    ctx->pc = 0x1083ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083A8u;
    // 0x1083ac: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1083A8u, 0x1083B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083B0u;
label_1083b0:
    // 0x1083b0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1083b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1083b4:
    // 0x1083b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1083b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1083b8:
    // 0x1083b8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1083b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1083bc:
    // 0x1083bc: 0x8e2405b0  lw          $a0, 0x5B0($s1)
    ctx->pc = 0x1083bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_1083c0:
    // 0x1083c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1083c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1083c4:
    // 0x1083c4: 0xc07f59a  jal         func_1FD668
label_1083c8:
    if (ctx->pc == 0x1083C8u) {
        ctx->pc = 0x1083C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083C4u;
        // 0x1083c8: 0xae2205b4  sw          $v0, 0x5B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1083CCu;
        goto label_1083cc;
    }
    ctx->pc = 0x1083C4u;
    SET_GPR_U32(ctx, 31, 0x1083CCu);
    ctx->pc = 0x1083C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083C4u;
    // 0x1083c8: 0xae2205b4  sw          $v0, 0x5B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1083C4u, 0x1083CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083CCu;
label_1083cc:
    // 0x1083cc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1083ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1083d0:
    // 0x1083d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1083d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1083d4:
    // 0x1083d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1083d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1083d8:
    // 0x1083d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1083dc:
    // 0x1083dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1083dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1083e0:
    // 0x1083e0: 0xc07f83a  jal         func_1FE0E8
label_1083e4:
    if (ctx->pc == 0x1083E4u) {
        ctx->pc = 0x1083E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083E0u;
        // 0x1083e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1083E8u;
        goto label_1083e8;
    }
    ctx->pc = 0x1083E0u;
    SET_GPR_U32(ctx, 31, 0x1083E8u);
    ctx->pc = 0x1083E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083E0u;
    // 0x1083e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1083E0u, 0x1083E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083E8u;
label_1083e8:
    // 0x1083e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1083e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1083ec:
    // 0x1083ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1083ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1083f0:
    // 0x1083f0: 0xe7b80004  swc1        $f24, 0x4($sp)
    ctx->pc = 0x1083f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1083f4:
    // 0x1083f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1083f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1083f8:
    // 0x1083f8: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1083f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1083fc:
    // 0x1083fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1083fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_108400:
    // 0x108400: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x108400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_108404:
    // 0x108404: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x108404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_108408:
    // 0x108408: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x108408u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_10840c:
    // 0x10840c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108410:
    // 0x108410: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x108410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_108414:
    // 0x108414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_108418:
    // 0x108418: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x108418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_10841c:
    // 0x10841c: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x10841cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
label_108420:
    // 0x108420: 0xc07f700  jal         func_1FDC00
label_108424:
    if (ctx->pc == 0x108424u) {
        ctx->pc = 0x108424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108420u;
        // 0x108424: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108428u;
        goto label_108428;
    }
    ctx->pc = 0x108420u;
    SET_GPR_U32(ctx, 31, 0x108428u);
    ctx->pc = 0x108424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108420u;
    // 0x108424: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x108420u, 0x108428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108428u;
label_108428:
    // 0x108428: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x108428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_10842c:
    // 0x10842c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108430:
    // 0x108430: 0xc07f59a  jal         func_1FD668
label_108434:
    if (ctx->pc == 0x108434u) {
        ctx->pc = 0x108434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108430u;
        // 0x108434: 0xae2205bc  sw          $v0, 0x5BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108438u;
        goto label_108438;
    }
    ctx->pc = 0x108430u;
    SET_GPR_U32(ctx, 31, 0x108438u);
    ctx->pc = 0x108434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108430u;
    // 0x108434: 0xae2205bc  sw          $v0, 0x5BC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x108430u, 0x108438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108438u;
label_108438:
    // 0x108438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10843c:
    // 0x10843c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108440:
    // 0x108440: 0xc07f83a  jal         func_1FE0E8
label_108444:
    if (ctx->pc == 0x108444u) {
        ctx->pc = 0x108444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108440u;
        // 0x108444: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108448u;
        goto label_108448;
    }
    ctx->pc = 0x108440u;
    SET_GPR_U32(ctx, 31, 0x108448u);
    ctx->pc = 0x108444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108440u;
    // 0x108444: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x108440u, 0x108448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108448u;
label_108448:
    // 0x108448: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_10844c:
    // 0x10844c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10844cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108450:
    // 0x108450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108454:
    // 0x108454: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108458:
    // 0x108458: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x108458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_10845c:
    // 0x10845c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x10845cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_108460:
    // 0x108460: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x108460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_108464:
    // 0x108464: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x108464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108468:
    // 0x108468: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x108468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_10846c:
    // 0x10846c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x10846cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_108470:
    // 0x108470: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x108470u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_108474:
    // 0x108474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108478:
    // 0x108478: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x108478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_10847c:
    // 0x10847c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_108480:
    // 0x108480: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x108480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_108484:
    // 0x108484: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x108484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_108488:
    // 0x108488: 0xae2205c0  sw          $v0, 0x5C0($s1)
    ctx->pc = 0x108488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 2));
label_10848c:
    // 0x10848c: 0xc07f700  jal         func_1FDC00
label_108490:
    if (ctx->pc == 0x108490u) {
        ctx->pc = 0x108490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10848Cu;
        // 0x108490: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108494u;
        goto label_108494;
    }
    ctx->pc = 0x10848Cu;
    SET_GPR_U32(ctx, 31, 0x108494u);
    ctx->pc = 0x108490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10848Cu;
    // 0x108490: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x10848Cu, 0x108494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108494u;
label_108494:
    // 0x108494: 0x8e2405c0  lw          $a0, 0x5C0($s1)
    ctx->pc = 0x108494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
label_108498:
    // 0x108498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10849c:
    // 0x10849c: 0xc07f59a  jal         func_1FD668
label_1084a0:
    if (ctx->pc == 0x1084A0u) {
        ctx->pc = 0x1084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10849Cu;
        // 0x1084a0: 0xae2205c4  sw          $v0, 0x5C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084A4u;
        goto label_1084a4;
    }
    ctx->pc = 0x10849Cu;
    SET_GPR_U32(ctx, 31, 0x1084A4u);
    ctx->pc = 0x1084A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10849Cu;
    // 0x1084a0: 0xae2205c4  sw          $v0, 0x5C4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x10849Cu, 0x1084A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084A4u;
label_1084a4:
    // 0x1084a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1084a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1084a8:
    // 0x1084a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1084a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1084ac:
    // 0x1084ac: 0xc07f83a  jal         func_1FE0E8
label_1084b0:
    if (ctx->pc == 0x1084B0u) {
        ctx->pc = 0x1084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ACu;
        // 0x1084b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084B4u;
        goto label_1084b4;
    }
    ctx->pc = 0x1084ACu;
    SET_GPR_U32(ctx, 31, 0x1084B4u);
    ctx->pc = 0x1084B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084ACu;
    // 0x1084b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1084ACu, 0x1084B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084B4u;
label_1084b4:
    // 0x1084b4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1084b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_1084b8:
    // 0x1084b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1084b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1084bc:
    // 0x1084bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1084bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1084c0:
    // 0x1084c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1084c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1084c4:
    // 0x1084c4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1084c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1084c8:
    // 0x1084c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1084c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1084cc:
    // 0x1084cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1084ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1084d0:
    // 0x1084d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1084d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1084d4:
    // 0x1084d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1084d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1084d8:
    // 0x1084d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1084d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1084dc:
    // 0x1084dc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1084dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1084e0:
    // 0x1084e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1084e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1084e4:
    // 0x1084e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1084e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1084e8:
    // 0x1084e8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1084e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1084ec:
    // 0x1084ec: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1084ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1084f0:
    // 0x1084f0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1084f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1084f4:
    // 0x1084f4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1084f8:
    // 0x1084f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1084fc:
    // 0x1084fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1084fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108500:
    // 0x108500: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_108504:
    // 0x108504: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x108504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_108508:
    // 0x108508: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x108508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10850c:
    // 0x10850c: 0xae2205c8  sw          $v0, 0x5C8($s1)
    ctx->pc = 0x10850cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 2));
label_108510:
    // 0x108510: 0xc07f700  jal         func_1FDC00
label_108514:
    if (ctx->pc == 0x108514u) {
        ctx->pc = 0x108514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108510u;
        // 0x108514: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108518u;
        goto label_108518;
    }
    ctx->pc = 0x108510u;
    SET_GPR_U32(ctx, 31, 0x108518u);
    ctx->pc = 0x108514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108510u;
    // 0x108514: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x108510u, 0x108518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108518u;
label_108518:
    // 0x108518: 0x8e2405c8  lw          $a0, 0x5C8($s1)
    ctx->pc = 0x108518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1480)));
label_10851c:
    // 0x10851c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10851cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108520:
    // 0x108520: 0xc07f59a  jal         func_1FD668
label_108524:
    if (ctx->pc == 0x108524u) {
        ctx->pc = 0x108524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108520u;
        // 0x108524: 0xae2205cc  sw          $v0, 0x5CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108528u;
        goto label_108528;
    }
    ctx->pc = 0x108520u;
    SET_GPR_U32(ctx, 31, 0x108528u);
    ctx->pc = 0x108524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108520u;
    // 0x108524: 0xae2205cc  sw          $v0, 0x5CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x108520u, 0x108528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108528u;
label_108528:
    // 0x108528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10852c:
    // 0x10852c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10852cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108530:
    // 0x108530: 0xc07f83a  jal         func_1FE0E8
label_108534:
    if (ctx->pc == 0x108534u) {
        ctx->pc = 0x108534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108530u;
        // 0x108534: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108538u;
        goto label_108538;
    }
    ctx->pc = 0x108530u;
    SET_GPR_U32(ctx, 31, 0x108538u);
    ctx->pc = 0x108534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108530u;
    // 0x108534: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x108530u, 0x108538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108538u;
label_108538:
    // 0x108538: 0xe7b80004  swc1        $f24, 0x4($sp)
    ctx->pc = 0x108538u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_10853c:
    // 0x10853c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_108540:
    // 0x108540: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x108540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_108544:
    // 0x108544: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_108548:
    // 0x108548: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x108548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_10854c:
    // 0x10854c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108550:
    // 0x108550: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x108550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_108554:
    // 0x108554: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_108558:
    // 0x108558: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x108558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_10855c:
    // 0x10855c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108560:
    // 0x108560: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x108560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_108564:
    // 0x108564: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_108568:
    // 0x108568: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x108568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_10856c:
    // 0x10856c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10856cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_108570:
    // 0x108570: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x108570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_108574:
    // 0x108574: 0xe4770004  swc1        $f23, 0x4($v1)
    ctx->pc = 0x108574u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_108578:
    // 0x108578: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x108578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_10857c:
    // 0x10857c: 0xae2205d0  sw          $v0, 0x5D0($s1)
    ctx->pc = 0x10857cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1488), GPR_U32(ctx, 2));
label_108580:
    // 0x108580: 0xc07f676  jal         func_1FD9D8
label_108584:
    if (ctx->pc == 0x108584u) {
        ctx->pc = 0x108584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108580u;
        // 0x108584: 0xe4740008  swc1        $f20, 0x8($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108588u;
        goto label_108588;
    }
    ctx->pc = 0x108580u;
    SET_GPR_U32(ctx, 31, 0x108588u);
    ctx->pc = 0x108584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108580u;
    // 0x108584: 0xe4740008  swc1        $f20, 0x8($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x108580u, 0x108588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108588u;
label_108588:
    // 0x108588: 0x8e2405d0  lw          $a0, 0x5D0($s1)
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1488)));
label_10858c:
    // 0x10858c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108590:
    // 0x108590: 0xc07f59a  jal         func_1FD668
label_108594:
    if (ctx->pc == 0x108594u) {
        ctx->pc = 0x108594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108590u;
        // 0x108594: 0xae2205d4  sw          $v0, 0x5D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108598u;
        goto label_108598;
    }
    ctx->pc = 0x108590u;
    SET_GPR_U32(ctx, 31, 0x108598u);
    ctx->pc = 0x108594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108590u;
    // 0x108594: 0xae2205d4  sw          $v0, 0x5D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1492), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x108590u, 0x108598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108598u;
label_108598:
    // 0x108598: 0xae201550  sw          $zero, 0x1550($s1)
    ctx->pc = 0x108598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5456), GPR_U32(ctx, 0));
label_10859c:
    // 0x10859c: 0xc07f02a  jal         func_1FC0A8
label_1085a0:
    if (ctx->pc == 0x1085A0u) {
        ctx->pc = 0x1085A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10859Cu;
        // 0x1085a0: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085A4u;
        goto label_1085a4;
    }
    ctx->pc = 0x10859Cu;
    SET_GPR_U32(ctx, 31, 0x1085A4u);
    ctx->pc = 0x1085A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10859Cu;
    // 0x1085a0: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x10859Cu, 0x1085A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085A4u;
label_1085a4:
    // 0x1085a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1085a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1085a8:
    // 0x1085a8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1085a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1085ac:
    // 0x1085ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1085b0:
    if (ctx->pc == 0x1085B0u) {
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085B4u;
        goto label_1085b4;
    }
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x1085CCu;
            goto label_1085cc;
        }
    }
    ctx->pc = 0x1085B4u;
label_1085b4:
    // 0x1085b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1085b8:
    // 0x1085b8: 0x2442b8a0  addiu       $v0, $v0, -0x4760
    ctx->pc = 0x1085b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
label_1085bc:
    // 0x1085bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1085bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1085c0:
    // 0x1085c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1085c4:
    // 0x1085c4: 0x800008  jr          $a0
label_1085c8:
    if (ctx->pc == 0x1085C8u) {
        ctx->pc = 0x1085CCu;
        goto label_1085cc;
    }
    ctx->pc = 0x1085C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1085CCu: goto label_1085cc;
            case 0x1085E4u: goto label_1085e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1085CCu;
label_1085cc:
    // 0x1085cc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1085ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_1085d0:
    // 0x1085d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1085d4:
    // 0x1085d4: 0xc052dcc  jal         func_14B730
label_1085d8:
    if (ctx->pc == 0x1085D8u) {
        ctx->pc = 0x1085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D4u;
        // 0x1085d8: 0x24a5b828  addiu       $a1, $a1, -0x47D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085DCu;
        goto label_1085dc;
    }
    ctx->pc = 0x1085D4u;
    SET_GPR_U32(ctx, 31, 0x1085DCu);
    ctx->pc = 0x1085D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085D4u;
    // 0x1085d8: 0x24a5b828  addiu       $a1, $a1, -0x47D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x1085D4u, 0x1085DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085DCu;
label_1085dc:
    // 0x1085dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1085e0:
    if (ctx->pc == 0x1085E0u) {
        ctx->pc = 0x1085E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085DCu;
        // 0x1085e0: 0xae221550  sw          $v0, 0x1550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085E4u;
        goto label_1085e4;
    }
    ctx->pc = 0x1085DCu;
    {
        const bool branch_taken_0x1085dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085DCu;
        // 0x1085e0: 0xae221550  sw          $v0, 0x1550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085dc) {
            ctx->pc = 0x108610u;
            goto label_108610;
        }
    }
    ctx->pc = 0x1085E4u;
label_1085e4:
    // 0x1085e4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1085e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_1085e8:
    // 0x1085e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1085e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1085ec:
    // 0x1085ec: 0xc052dcc  jal         func_14B730
label_1085f0:
    if (ctx->pc == 0x1085F0u) {
        ctx->pc = 0x1085F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ECu;
        // 0x1085f0: 0x24a5b828  addiu       $a1, $a1, -0x47D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085F4u;
        goto label_1085f4;
    }
    ctx->pc = 0x1085ECu;
    SET_GPR_U32(ctx, 31, 0x1085F4u);
    ctx->pc = 0x1085F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085ECu;
    // 0x1085f0: 0x24a5b828  addiu       $a1, $a1, -0x47D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x1085ECu, 0x1085F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085F4u;
label_1085f4:
    // 0x1085f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1085f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1085f8:
    // 0x1085f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1085fc:
    if (ctx->pc == 0x1085FCu) {
        ctx->pc = 0x1085FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085F8u;
        // 0x1085fc: 0xae231550  sw          $v1, 0x1550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108600u;
        goto label_108600;
    }
    ctx->pc = 0x1085F8u;
    {
        const bool branch_taken_0x1085f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085F8u;
        // 0x1085fc: 0xae231550  sw          $v1, 0x1550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085f8) {
            ctx->pc = 0x108610u;
            goto label_108610;
        }
    }
    ctx->pc = 0x108600u;
label_108600:
    // 0x108600: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_108604:
    // 0x108604: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x108604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_108608:
    // 0x108608: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x108608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_10860c:
    // 0x10860c: 0xae201550  sw          $zero, 0x1550($s1)
    ctx->pc = 0x10860cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5456), GPR_U32(ctx, 0));
label_108610:
    // 0x108610: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108614:
    // 0x108614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108618:
    // 0x108618: 0xc052dcc  jal         func_14B730
label_10861c:
    if (ctx->pc == 0x10861Cu) {
        ctx->pc = 0x10861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108618u;
        // 0x10861c: 0x24a5b830  addiu       $a1, $a1, -0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108620u;
        goto label_108620;
    }
    ctx->pc = 0x108618u;
    SET_GPR_U32(ctx, 31, 0x108620u);
    ctx->pc = 0x10861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108618u;
    // 0x10861c: 0x24a5b830  addiu       $a1, $a1, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108618u, 0x108620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108620u;
label_108620:
    // 0x108620: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108624:
    // 0x108624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108628:
    // 0x108628: 0x24a5b838  addiu       $a1, $a1, -0x47C8
    ctx->pc = 0x108628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948920));
label_10862c:
    // 0x10862c: 0xc052dcc  jal         func_14B730
label_108630:
    if (ctx->pc == 0x108630u) {
        ctx->pc = 0x108630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10862Cu;
        // 0x108630: 0xae221574  sw          $v0, 0x1574($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108634u;
        goto label_108634;
    }
    ctx->pc = 0x10862Cu;
    SET_GPR_U32(ctx, 31, 0x108634u);
    ctx->pc = 0x108630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10862Cu;
    // 0x108630: 0xae221574  sw          $v0, 0x1574($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5492), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x10862Cu, 0x108634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108634u;
label_108634:
    // 0x108634: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108638:
    // 0x108638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10863c:
    // 0x10863c: 0x24a5b840  addiu       $a1, $a1, -0x47C0
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948928));
label_108640:
    // 0x108640: 0xc052dcc  jal         func_14B730
label_108644:
    if (ctx->pc == 0x108644u) {
        ctx->pc = 0x108644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108640u;
        // 0x108644: 0xae221554  sw          $v0, 0x1554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108648u;
        goto label_108648;
    }
    ctx->pc = 0x108640u;
    SET_GPR_U32(ctx, 31, 0x108648u);
    ctx->pc = 0x108644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108640u;
    // 0x108644: 0xae221554  sw          $v0, 0x1554($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108640u, 0x108648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108648u;
label_108648:
    // 0x108648: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_10864c:
    // 0x10864c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108650:
    // 0x108650: 0x24a5b848  addiu       $a1, $a1, -0x47B8
    ctx->pc = 0x108650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948936));
label_108654:
    // 0x108654: 0xc052dcc  jal         func_14B730
label_108658:
    if (ctx->pc == 0x108658u) {
        ctx->pc = 0x108658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108654u;
        // 0x108658: 0xae221558  sw          $v0, 0x1558($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10865Cu;
        goto label_10865c;
    }
    ctx->pc = 0x108654u;
    SET_GPR_U32(ctx, 31, 0x10865Cu);
    ctx->pc = 0x108658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108654u;
    // 0x108658: 0xae221558  sw          $v0, 0x1558($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108654u, 0x10865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10865Cu;
label_10865c:
    // 0x10865c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x10865cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108660:
    // 0x108660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108664:
    // 0x108664: 0x24a5b850  addiu       $a1, $a1, -0x47B0
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948944));
label_108668:
    // 0x108668: 0xc052dcc  jal         func_14B730
label_10866c:
    if (ctx->pc == 0x10866Cu) {
        ctx->pc = 0x10866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108668u;
        // 0x10866c: 0xae22155c  sw          $v0, 0x155C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108670u;
        goto label_108670;
    }
    ctx->pc = 0x108668u;
    SET_GPR_U32(ctx, 31, 0x108670u);
    ctx->pc = 0x10866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108668u;
    // 0x10866c: 0xae22155c  sw          $v0, 0x155C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108668u, 0x108670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108670u;
label_108670:
    // 0x108670: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108674:
    // 0x108674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108678:
    // 0x108678: 0x24a5b858  addiu       $a1, $a1, -0x47A8
    ctx->pc = 0x108678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948952));
label_10867c:
    // 0x10867c: 0xc052dcc  jal         func_14B730
label_108680:
    if (ctx->pc == 0x108680u) {
        ctx->pc = 0x108680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10867Cu;
        // 0x108680: 0xae221560  sw          $v0, 0x1560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108684u;
        goto label_108684;
    }
    ctx->pc = 0x10867Cu;
    SET_GPR_U32(ctx, 31, 0x108684u);
    ctx->pc = 0x108680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10867Cu;
    // 0x108680: 0xae221560  sw          $v0, 0x1560($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x10867Cu, 0x108684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108684u;
label_108684:
    // 0x108684: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108688:
    // 0x108688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10868c:
    // 0x10868c: 0x24a5b860  addiu       $a1, $a1, -0x47A0
    ctx->pc = 0x10868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948960));
label_108690:
    // 0x108690: 0xc052dcc  jal         func_14B730
label_108694:
    if (ctx->pc == 0x108694u) {
        ctx->pc = 0x108694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108690u;
        // 0x108694: 0xae221564  sw          $v0, 0x1564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108698u;
        goto label_108698;
    }
    ctx->pc = 0x108690u;
    SET_GPR_U32(ctx, 31, 0x108698u);
    ctx->pc = 0x108694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108690u;
    // 0x108694: 0xae221564  sw          $v0, 0x1564($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5476), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108690u, 0x108698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108698u;
label_108698:
    // 0x108698: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_10869c:
    // 0x10869c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1086a0:
    // 0x1086a0: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1086a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
label_1086a4:
    // 0x1086a4: 0xc052dcc  jal         func_14B730
label_1086a8:
    if (ctx->pc == 0x1086A8u) {
        ctx->pc = 0x1086A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086A4u;
        // 0x1086a8: 0xae221568  sw          $v0, 0x1568($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1086ACu;
        goto label_1086ac;
    }
    ctx->pc = 0x1086A4u;
    SET_GPR_U32(ctx, 31, 0x1086ACu);
    ctx->pc = 0x1086A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086A4u;
    // 0x1086a8: 0xae221568  sw          $v0, 0x1568($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x1086A4u, 0x1086ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086ACu;
label_1086ac:
    // 0x1086ac: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1086acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_1086b0:
    // 0x1086b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1086b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1086b4:
    // 0x1086b4: 0x24a5b870  addiu       $a1, $a1, -0x4790
    ctx->pc = 0x1086b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948976));
label_1086b8:
    // 0x1086b8: 0xc052dcc  jal         func_14B730
label_1086bc:
    if (ctx->pc == 0x1086BCu) {
        ctx->pc = 0x1086BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086B8u;
        // 0x1086bc: 0xae22156c  sw          $v0, 0x156C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1086C0u;
        goto label_1086c0;
    }
    ctx->pc = 0x1086B8u;
    SET_GPR_U32(ctx, 31, 0x1086C0u);
    ctx->pc = 0x1086BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086B8u;
    // 0x1086bc: 0xae22156c  sw          $v0, 0x156C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5484), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x1086B8u, 0x1086C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086C0u;
label_1086c0:
    // 0x1086c0: 0xae221570  sw          $v0, 0x1570($s1)
    ctx->pc = 0x1086c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5488), GPR_U32(ctx, 2));
label_1086c4:
    // 0x1086c4: 0xc07f02a  jal         func_1FC0A8
label_1086c8:
    if (ctx->pc == 0x1086C8u) {
        ctx->pc = 0x1086C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086C4u;
        // 0x1086c8: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1086CCu;
        goto label_1086cc;
    }
    ctx->pc = 0x1086C4u;
    SET_GPR_U32(ctx, 31, 0x1086CCu);
    ctx->pc = 0x1086C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086C4u;
    // 0x1086c8: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x1086C4u, 0x1086CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086CCu;
label_1086cc:
    // 0x1086cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1086ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1086d0:
    // 0x1086d0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1086d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1086d4:
    // 0x1086d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1086d8:
    if (ctx->pc == 0x1086D8u) {
        ctx->pc = 0x1086D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086D4u;
        // 0x1086d8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1086DCu;
        goto label_1086dc;
    }
    ctx->pc = 0x1086D4u;
    {
        const bool branch_taken_0x1086d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086D4u;
        // 0x1086d8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086d4) {
            ctx->pc = 0x1086F4u;
            goto label_1086f4;
        }
    }
    ctx->pc = 0x1086DCu;
label_1086dc:
    // 0x1086dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1086e0:
    // 0x1086e0: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x1086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
label_1086e4:
    // 0x1086e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1086e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1086e8:
    // 0x1086e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1086ec:
    // 0x1086ec: 0x800008  jr          $a0
label_1086f0:
    if (ctx->pc == 0x1086F0u) {
        ctx->pc = 0x1086F4u;
        goto label_1086f4;
    }
    ctx->pc = 0x1086ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1086F4u: goto label_1086f4;
            case 0x108704u: goto label_108704;
            case 0x108794u: goto label_108794;
            case 0x10882Cu: goto label_10882c;
            case 0x10887Cu: goto label_10887c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1086F4u;
label_1086f4:
    // 0x1086f4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1086f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_1086f8:
    // 0x1086f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1086f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1086fc:
    // 0x1086fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_108700:
    if (ctx->pc == 0x108700u) {
        ctx->pc = 0x108700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086FCu;
        // 0x108700: 0x24a5b878  addiu       $a1, $a1, -0x4788 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108704u;
        goto label_108704;
    }
    ctx->pc = 0x1086FCu;
    {
        const bool branch_taken_0x1086fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086FCu;
        // 0x108700: 0x24a5b878  addiu       $a1, $a1, -0x4788 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086fc) {
            ctx->pc = 0x108710u;
            goto label_108710;
        }
    }
    ctx->pc = 0x108704u;
label_108704:
    // 0x108704: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108708:
    // 0x108708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10870c:
    // 0x10870c: 0x24a5b880  addiu       $a1, $a1, -0x4780
    ctx->pc = 0x10870cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
label_108710:
    // 0x108710: 0xc052dcc  jal         func_14B730
label_108714:
    if (ctx->pc == 0x108714u) {
        ctx->pc = 0x108718u;
        goto label_108718;
    }
    ctx->pc = 0x108710u;
    SET_GPR_U32(ctx, 31, 0x108718u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108710u, 0x108718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108718u;
label_108718:
    // 0x108718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10871c:
    // 0x10871c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_108720:
    if (ctx->pc == 0x108720u) {
        ctx->pc = 0x108720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10871Cu;
        // 0x108720: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108724u;
        goto label_108724;
    }
    ctx->pc = 0x10871Cu;
    {
        const bool branch_taken_0x10871c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10871Cu;
        // 0x108720: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10871c) {
            ctx->pc = 0x108730u;
            goto label_108730;
        }
    }
    ctx->pc = 0x108724u;
label_108724:
    // 0x108724: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_108728:
    // 0x108728: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10872c:
    // 0x10872c: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x10872cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_108730:
    // 0x108730: 0x8e241564  lw          $a0, 0x1564($s1)
    ctx->pc = 0x108730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5476)));
label_108734:
    // 0x108734: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_108738:
    if (ctx->pc == 0x108738u) {
        ctx->pc = 0x108738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108734u;
        // 0x108738: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10873Cu;
        goto label_10873c;
    }
    ctx->pc = 0x108734u;
    {
        const bool branch_taken_0x108734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108734u;
        // 0x108738: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108734) {
            ctx->pc = 0x108748u;
            goto label_108748;
        }
    }
    ctx->pc = 0x10873Cu;
label_10873c:
    // 0x10873c: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_108740:
    // 0x108740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108744:
    // 0x108744: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x108744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_108748:
    // 0x108748: 0x8e241568  lw          $a0, 0x1568($s1)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5480)));
label_10874c:
    // 0x10874c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_108750:
    if (ctx->pc == 0x108750u) {
        ctx->pc = 0x108750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10874Cu;
        // 0x108750: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108754u;
        goto label_108754;
    }
    ctx->pc = 0x10874Cu;
    {
        const bool branch_taken_0x10874c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10874Cu;
        // 0x108750: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10874c) {
            ctx->pc = 0x108760u;
            goto label_108760;
        }
    }
    ctx->pc = 0x108754u;
label_108754:
    // 0x108754: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x108754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_108758:
    // 0x108758: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10875c:
    // 0x10875c: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x10875cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_108760:
    // 0x108760: 0x8e24156c  lw          $a0, 0x156C($s1)
    ctx->pc = 0x108760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5484)));
label_108764:
    // 0x108764: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_108768:
    if (ctx->pc == 0x108768u) {
        ctx->pc = 0x108768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108764u;
        // 0x108768: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10876Cu;
        goto label_10876c;
    }
    ctx->pc = 0x108764u;
    {
        const bool branch_taken_0x108764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108764u;
        // 0x108768: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108764) {
            ctx->pc = 0x108778u;
            goto label_108778;
        }
    }
    ctx->pc = 0x10876Cu;
label_10876c:
    // 0x10876c: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x10876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_108770:
    // 0x108770: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108774:
    // 0x108774: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x108774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_108778:
    // 0x108778: 0x8e241570  lw          $a0, 0x1570($s1)
    ctx->pc = 0x108778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5488)));
label_10877c:
    // 0x10877c: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
label_108780:
    if (ctx->pc == 0x108780u) {
        ctx->pc = 0x108780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10877Cu;
        // 0x108780: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108784u;
        goto label_108784;
    }
    ctx->pc = 0x10877Cu;
    {
        const bool branch_taken_0x10877c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10877Cu;
        // 0x108780: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10877c) {
            ctx->pc = 0x10887Cu;
            goto label_10887c;
        }
    }
    ctx->pc = 0x108784u;
label_108784:
    // 0x108784: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x108784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_108788:
    // 0x108788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10878c:
    // 0x10878c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_108790:
    if (ctx->pc == 0x108790u) {
        ctx->pc = 0x108790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10878Cu;
        // 0x108790: 0xac820410  sw          $v0, 0x410($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108794u;
        goto label_108794;
    }
    ctx->pc = 0x10878Cu;
    {
        const bool branch_taken_0x10878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10878Cu;
        // 0x108790: 0xac820410  sw          $v0, 0x410($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10878c) {
            ctx->pc = 0x10887Cu;
            goto label_10887c;
        }
    }
    ctx->pc = 0x108794u;
label_108794:
    // 0x108794: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x108794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108798:
    // 0x108798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10879c:
    // 0x10879c: 0xc052dcc  jal         func_14B730
label_1087a0:
    if (ctx->pc == 0x1087A0u) {
        ctx->pc = 0x1087A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10879Cu;
        // 0x1087a0: 0x24a5b888  addiu       $a1, $a1, -0x4778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087A4u;
        goto label_1087a4;
    }
    ctx->pc = 0x10879Cu;
    SET_GPR_U32(ctx, 31, 0x1087A4u);
    ctx->pc = 0x1087A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10879Cu;
    // 0x1087a0: 0x24a5b888  addiu       $a1, $a1, -0x4778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x10879Cu, 0x1087A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087A4u;
label_1087a4:
    // 0x1087a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1087a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1087a8:
    // 0x1087a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1087ac:
    if (ctx->pc == 0x1087ACu) {
        ctx->pc = 0x1087ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087A8u;
        // 0x1087ac: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087B0u;
        goto label_1087b0;
    }
    ctx->pc = 0x1087A8u;
    {
        const bool branch_taken_0x1087a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087A8u;
        // 0x1087ac: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087a8) {
            ctx->pc = 0x1087BCu;
            goto label_1087bc;
        }
    }
    ctx->pc = 0x1087B0u;
label_1087b0:
    // 0x1087b0: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x1087b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_1087b4:
    // 0x1087b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1087b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1087b8:
    // 0x1087b8: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x1087b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_1087bc:
    // 0x1087bc: 0x8e241564  lw          $a0, 0x1564($s1)
    ctx->pc = 0x1087bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5476)));
label_1087c0:
    // 0x1087c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1087c4:
    if (ctx->pc == 0x1087C4u) {
        ctx->pc = 0x1087C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087C0u;
        // 0x1087c4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087C8u;
        goto label_1087c8;
    }
    ctx->pc = 0x1087C0u;
    {
        const bool branch_taken_0x1087c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087C0u;
        // 0x1087c4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087c0) {
            ctx->pc = 0x1087D4u;
            goto label_1087d4;
        }
    }
    ctx->pc = 0x1087C8u;
label_1087c8:
    // 0x1087c8: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x1087c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_1087cc:
    // 0x1087cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1087ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1087d0:
    // 0x1087d0: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x1087d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_1087d4:
    // 0x1087d4: 0x8e241568  lw          $a0, 0x1568($s1)
    ctx->pc = 0x1087d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5480)));
label_1087d8:
    // 0x1087d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1087dc:
    if (ctx->pc == 0x1087DCu) {
        ctx->pc = 0x1087DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087D8u;
        // 0x1087dc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087E0u;
        goto label_1087e0;
    }
    ctx->pc = 0x1087D8u;
    {
        const bool branch_taken_0x1087d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087D8u;
        // 0x1087dc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087d8) {
            ctx->pc = 0x1087ECu;
            goto label_1087ec;
        }
    }
    ctx->pc = 0x1087E0u;
label_1087e0:
    // 0x1087e0: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_1087e4:
    // 0x1087e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1087e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1087e8:
    // 0x1087e8: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x1087e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_1087ec:
    // 0x1087ec: 0x8e24156c  lw          $a0, 0x156C($s1)
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5484)));
label_1087f0:
    // 0x1087f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1087f4:
    if (ctx->pc == 0x1087F4u) {
        ctx->pc = 0x1087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F0u;
        // 0x1087f4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087F8u;
        goto label_1087f8;
    }
    ctx->pc = 0x1087F0u;
    {
        const bool branch_taken_0x1087f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F0u;
        // 0x1087f4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087f0) {
            ctx->pc = 0x108804u;
            goto label_108804;
        }
    }
    ctx->pc = 0x1087F8u;
label_1087f8:
    // 0x1087f8: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x1087f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_1087fc:
    // 0x1087fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1087fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108800:
    // 0x108800: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x108800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_108804:
    // 0x108804: 0x8e241570  lw          $a0, 0x1570($s1)
    ctx->pc = 0x108804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5488)));
label_108808:
    // 0x108808: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_10880c:
    if (ctx->pc == 0x10880Cu) {
        ctx->pc = 0x10880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108808u;
        // 0x10880c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108810u;
        goto label_108810;
    }
    ctx->pc = 0x108808u;
    {
        const bool branch_taken_0x108808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108808u;
        // 0x10880c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108808) {
            ctx->pc = 0x10881Cu;
            goto label_10881c;
        }
    }
    ctx->pc = 0x108810u;
label_108810:
    // 0x108810: 0x8c820410  lw          $v0, 0x410($a0)
    ctx->pc = 0x108810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1040)));
label_108814:
    // 0x108814: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x108814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_108818:
    // 0x108818: 0xac820410  sw          $v0, 0x410($a0)
    ctx->pc = 0x108818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
label_10881c:
    // 0x10881c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108820:
    // 0x108820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108824:
    // 0x108824: 0x1000000d  b           . + 4 + (0xD << 2)
label_108828:
    if (ctx->pc == 0x108828u) {
        ctx->pc = 0x108828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108824u;
        // 0x108828: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10882Cu;
        goto label_10882c;
    }
    ctx->pc = 0x108824u;
    {
        const bool branch_taken_0x108824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108824u;
        // 0x108828: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108824) {
            ctx->pc = 0x10885Cu;
            goto label_10885c;
        }
    }
    ctx->pc = 0x10882Cu;
label_10882c:
    // 0x10882c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x10882cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_108830:
    // 0x108830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108834:
    // 0x108834: 0xc052dcc  jal         func_14B730
label_108838:
    if (ctx->pc == 0x108838u) {
        ctx->pc = 0x108838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108834u;
        // 0x108838: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10883Cu;
        goto label_10883c;
    }
    ctx->pc = 0x108834u;
    SET_GPR_U32(ctx, 31, 0x10883Cu);
    ctx->pc = 0x108838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108834u;
    // 0x108838: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x108834u, 0x10883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10883Cu;
label_10883c:
    // 0x10883c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108840:
    // 0x108840: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_108844:
    if (ctx->pc == 0x108844u) {
        ctx->pc = 0x108844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108840u;
        // 0x108844: 0x3c050042  lui         $a1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108848u;
        goto label_108848;
    }
    ctx->pc = 0x108840u;
    {
        const bool branch_taken_0x108840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108840u;
        // 0x108844: 0x3c050042  lui         $a1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108840) {
            ctx->pc = 0x108854u;
            goto label_108854;
        }
    }
    ctx->pc = 0x108848u;
label_108848:
    // 0x108848: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x108848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_10884c:
    // 0x10884c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_108850:
    // 0x108850: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x108850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_108854:
    // 0x108854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108858:
    // 0x108858: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x108858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_10885c:
    // 0x10885c: 0xc052dcc  jal         func_14B730
label_108860:
    if (ctx->pc == 0x108860u) {
        ctx->pc = 0x108864u;
        goto label_108864;
    }
    ctx->pc = 0x10885Cu;
    SET_GPR_U32(ctx, 31, 0x108864u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x10885Cu, 0x108864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108864u;
label_108864:
    // 0x108864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108868:
    // 0x108868: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_10886c:
    if (ctx->pc == 0x10886Cu) {
        ctx->pc = 0x10886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108868u;
        // 0x10886c: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108870u;
        goto label_108870;
    }
    ctx->pc = 0x108868u;
    {
        const bool branch_taken_0x108868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x108868) {
            ctx->pc = 0x10886Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108868u;
            // 0x10886c: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108880u;
            goto label_108880;
        }
    }
    ctx->pc = 0x108870u;
label_108870:
    // 0x108870: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x108870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_108874:
    // 0x108874: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x108874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_108878:
    // 0x108878: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x108878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_10887c:
    // 0x10887c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x10887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_108880:
    // 0x108880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108884:
    // 0x108884: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x108884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108888:
    // 0x108888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10888c:
    // 0x10888c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_108890:
    // 0x108890: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x108890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_108894:
    // 0x108894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_108898:
    // 0x108898: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x108898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_10889c:
    // 0x10889c: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x10889cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_1088a0:
    // 0x1088a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1088a4:
    // 0x1088a4: 0xe62005dc  swc1        $f0, 0x5DC($s1)
    ctx->pc = 0x1088a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_1088a8:
    // 0x1088a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1088a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1088ac:
    // 0x1088ac: 0xe6211604  swc1        $f1, 0x1604($s1)
    ctx->pc = 0x1088acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5636), bits); }
label_1088b0:
    // 0x1088b0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1088b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1088b4:
    // 0x1088b4: 0xae201608  sw          $zero, 0x1608($s1)
    ctx->pc = 0x1088b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5640), GPR_U32(ctx, 0));
label_1088b8:
    // 0x1088b8: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1088b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_1088bc:
    // 0x1088bc: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x1088bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_1088c0:
    // 0x1088c0: 0xa62005f2  sh          $zero, 0x5F2($s1)
    ctx->pc = 0x1088c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1522), (uint16_t)GPR_U32(ctx, 0));
label_1088c4:
    // 0x1088c4: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x1088c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
label_1088c8:
    // 0x1088c8: 0xae201620  sw          $zero, 0x1620($s1)
    ctx->pc = 0x1088c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
label_1088cc:
    // 0x1088cc: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x1088ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
label_1088d0:
    // 0x1088d0: 0xae200640  sw          $zero, 0x640($s1)
    ctx->pc = 0x1088d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 0));
label_1088d4:
    // 0x1088d4: 0xae200644  sw          $zero, 0x644($s1)
    ctx->pc = 0x1088d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 0));
label_1088d8:
    // 0x1088d8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1088d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_1088dc:
    // 0x1088dc: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1088dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1088e0:
    // 0x1088e0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1088e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1088e4:
    // 0x1088e4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1088e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1088e8:
    // 0x1088e8: 0xc62c1608  lwc1        $f12, 0x1608($s1)
    ctx->pc = 0x1088e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1088ec:
    // 0x1088ec: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1088ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1088f0:
    // 0x1088f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1088f4:
    // 0x1088f4: 0xc0aa15e  jal         func_2A8578
label_1088f8:
    if (ctx->pc == 0x1088F8u) {
        ctx->pc = 0x1088F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088F4u;
        // 0x1088f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1088FCu;
        goto label_1088fc;
    }
    ctx->pc = 0x1088F4u;
    SET_GPR_U32(ctx, 31, 0x1088FCu);
    ctx->pc = 0x1088F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088F4u;
    // 0x1088f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1088F4u, 0x1088FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1088FCu;
label_1088fc:
    // 0x1088fc: 0xc055f06  jal         func_157C18
label_108900:
    if (ctx->pc == 0x108900u) {
        ctx->pc = 0x108900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088FCu;
        // 0x108900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108904u;
        goto label_108904;
    }
    ctx->pc = 0x1088FCu;
    SET_GPR_U32(ctx, 31, 0x108904u);
    ctx->pc = 0x108900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088FCu;
    // 0x108900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1088FCu, 0x108904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108904u;
label_108904:
    // 0x108904: 0xc0527ae  jal         func_149EB8
label_108908:
    if (ctx->pc == 0x108908u) {
        ctx->pc = 0x108908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108904u;
        // 0x108908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10890Cu;
        goto label_10890c;
    }
    ctx->pc = 0x108904u;
    SET_GPR_U32(ctx, 31, 0x10890Cu);
    ctx->pc = 0x108908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108904u;
    // 0x108908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x108904u, 0x10890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10890Cu;
label_10890c:
    // 0x10890c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108910:
    // 0x108910: 0xc054a88  jal         func_152A20
label_108914:
    if (ctx->pc == 0x108914u) {
        ctx->pc = 0x108914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108910u;
        // 0x108914: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108918u;
        goto label_108918;
    }
    ctx->pc = 0x108910u;
    SET_GPR_U32(ctx, 31, 0x108918u);
    ctx->pc = 0x108914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108910u;
    // 0x108914: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x108910u, 0x108918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108918u;
label_108918:
    // 0x108918: 0xc05280e  jal         func_14A038
label_10891c:
    if (ctx->pc == 0x10891Cu) {
        ctx->pc = 0x10891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108918u;
        // 0x10891c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108920u;
        goto label_108920;
    }
    ctx->pc = 0x108918u;
    SET_GPR_U32(ctx, 31, 0x108920u);
    ctx->pc = 0x10891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108918u;
    // 0x10891c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x108918u, 0x108920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108920u;
label_108920:
    // 0x108920: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x108920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_108924:
    // 0x108924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108928:
    // 0x108928: 0xc0aa732  jal         func_2A9CC8
label_10892c:
    if (ctx->pc == 0x10892Cu) {
        ctx->pc = 0x10892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108928u;
        // 0x10892c: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108930u;
        goto label_108930;
    }
    ctx->pc = 0x108928u;
    SET_GPR_U32(ctx, 31, 0x108930u);
    ctx->pc = 0x10892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108928u;
    // 0x10892c: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9CC8u, 0x108928u, 0x108930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108930u;
label_108930:
    // 0x108930: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x108930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_108934:
    // 0x108934: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x108934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_108938:
    // 0x108938: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x108938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_10893c:
    // 0x10893c: 0xae2205ec  sw          $v0, 0x5EC($s1)
    ctx->pc = 0x10893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1516), GPR_U32(ctx, 2));
label_108940:
    // 0x108940: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_108944:
    if (ctx->pc == 0x108944u) {
        ctx->pc = 0x108944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108940u;
        // 0x108944: 0xae2205e8  sw          $v0, 0x5E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108948u;
        goto label_108948;
    }
    ctx->pc = 0x108940u;
    {
        const bool branch_taken_0x108940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x108944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108940u;
        // 0x108944: 0xae2205e8  sw          $v0, 0x5E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108940) {
            ctx->pc = 0x108960u;
            goto label_108960;
        }
    }
    ctx->pc = 0x108948u;
label_108948:
    // 0x108948: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x108948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10894c:
    // 0x10894c: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x10894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_108950:
    // 0x108950: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x108950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108954:
    // 0x108954: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x108954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_108958:
    // 0x108958: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x108958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10895c:
    // 0x10895c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x10895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_108960:
    // 0x108960: 0x26220630  addiu       $v0, $s1, 0x630
    ctx->pc = 0x108960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
label_108964:
    // 0x108964: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_108968:
    if (ctx->pc == 0x108968u) {
        ctx->pc = 0x10896Cu;
        goto label_10896c;
    }
    ctx->pc = 0x108964u;
    {
        const bool branch_taken_0x108964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x108964) {
            ctx->pc = 0x108984u;
            goto label_108984;
        }
    }
    ctx->pc = 0x10896Cu;
label_10896c:
    // 0x10896c: 0xc6200490  lwc1        $f0, 0x490($s1)
    ctx->pc = 0x10896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108970:
    // 0x108970: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x108970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_108974:
    // 0x108974: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x108974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108978:
    // 0x108978: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x108978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_10897c:
    // 0x10897c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x10897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108980:
    // 0x108980: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x108980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_108984:
    // 0x108984: 0xc07f054  jal         func_1FC150
label_108988:
    if (ctx->pc == 0x108988u) {
        ctx->pc = 0x108988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108984u;
        // 0x108988: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10898Cu;
        goto label_10898c;
    }
    ctx->pc = 0x108984u;
    SET_GPR_U32(ctx, 31, 0x10898Cu);
    ctx->pc = 0x108988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108984u;
    // 0x108988: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC150u, 0x108984u, 0x10898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10898Cu;
label_10898c:
    // 0x10898c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108990:
    if (ctx->pc == 0x108990u) {
        ctx->pc = 0x108994u;
        goto label_108994;
    }
    ctx->pc = 0x10898Cu;
    {
        const bool branch_taken_0x10898c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10898c) {
            ctx->pc = 0x10899Cu;
            goto label_10899c;
        }
    }
    ctx->pc = 0x108994u;
label_108994:
    // 0x108994: 0xc04b236  jal         func_12C8D8
label_108998:
    if (ctx->pc == 0x108998u) {
        ctx->pc = 0x108998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108994u;
        // 0x108998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10899Cu;
        goto label_10899c;
    }
    ctx->pc = 0x108994u;
    SET_GPR_U32(ctx, 31, 0x10899Cu);
    ctx->pc = 0x108998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108994u;
    // 0x108998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C8D8u, 0x108994u, 0x10899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10899Cu;
label_10899c:
    // 0x10899c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1089a0:
    // 0x1089a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1089a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1089a4:
    // 0x1089a4: 0x26a374a0  addiu       $v1, $s5, 0x74A0
    ctx->pc = 0x1089a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
label_1089a8:
    // 0x1089a8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x1089a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_1089ac:
    // 0x1089ac: 0x906205b1  lbu         $v0, 0x5B1($v1)
    ctx->pc = 0x1089acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1457)));
label_1089b0:
    // 0x1089b0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1089b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1089b4:
    // 0x1089b4: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1089b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1089b8:
    // 0x1089b8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1089bc:
    if (ctx->pc == 0x1089BCu) {
        ctx->pc = 0x1089BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B8u;
        // 0x1089bc: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1089C0u;
        goto label_1089c0;
    }
    ctx->pc = 0x1089B8u;
    {
        const bool branch_taken_0x1089b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B8u;
        // 0x1089bc: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089b8) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x1089C0u;
label_1089c0:
    // 0x1089c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1089c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1089c4:
    // 0x1089c4: 0x2442b8e0  addiu       $v0, $v0, -0x4720
    ctx->pc = 0x1089c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949088));
label_1089c8:
    // 0x1089c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1089c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1089cc:
    // 0x1089cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1089ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1089d0:
    // 0x1089d0: 0x800008  jr          $a0
label_1089d4:
    if (ctx->pc == 0x1089D4u) {
        ctx->pc = 0x1089D8u;
        goto label_1089d8;
    }
    ctx->pc = 0x1089D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1089D8u: goto label_1089d8;
            case 0x1089ECu: goto label_1089ec;
            case 0x108A00u: goto label_108a00;
            case 0x108A14u: goto label_108a14;
            case 0x108A28u: goto label_108a28;
            case 0x108A38u: goto label_108a38;
            case 0x108A4Cu: goto label_108a4c;
            case 0x108A60u: goto label_108a60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1089D8u;
label_1089d8:
    // 0x1089d8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1089d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1089dc:
    // 0x1089dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1089dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1089e0:
    // 0x1089e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1089e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1089e4:
    // 0x1089e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1089e8:
    if (ctx->pc == 0x1089E8u) {
        ctx->pc = 0x1089E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089E4u;
        // 0x1089e8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1089ECu;
        goto label_1089ec;
    }
    ctx->pc = 0x1089E4u;
    {
        const bool branch_taken_0x1089e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089E4u;
        // 0x1089e8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089e4) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x1089ECu;
label_1089ec:
    // 0x1089ec: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_1089f0:
    // 0x1089f0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1089f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1089f4:
    // 0x1089f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1089f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1089f8:
    // 0x1089f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1089fc:
    if (ctx->pc == 0x1089FCu) {
        ctx->pc = 0x1089FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089F8u;
        // 0x1089fc: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108A00u;
        goto label_108a00;
    }
    ctx->pc = 0x1089F8u;
    {
        const bool branch_taken_0x1089f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089F8u;
        // 0x1089fc: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089f8) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x108A00u;
label_108a00:
    // 0x108a00: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x108a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_108a04:
    // 0x108a04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x108a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108a08:
    // 0x108a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108a0c:
    // 0x108a0c: 0x10000014  b           . + 4 + (0x14 << 2)
label_108a10:
    if (ctx->pc == 0x108A10u) {
        ctx->pc = 0x108A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A0Cu;
        // 0x108a10: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108A14u;
        goto label_108a14;
    }
    ctx->pc = 0x108A0Cu;
    {
        const bool branch_taken_0x108a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A0Cu;
        // 0x108a10: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a0c) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x108A14u;
label_108a14:
    // 0x108a14: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x108a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_108a18:
    // 0x108a18: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x108a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_108a1c:
    // 0x108a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108a20:
    // 0x108a20: 0x1000000f  b           . + 4 + (0xF << 2)
label_108a24:
    if (ctx->pc == 0x108A24u) {
        ctx->pc = 0x108A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A20u;
        // 0x108a24: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108A28u;
        goto label_108a28;
    }
    ctx->pc = 0x108A20u;
    {
        const bool branch_taken_0x108a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A20u;
        // 0x108a24: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a20) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x108A28u;
label_108a28:
    // 0x108a28: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_108a2c:
    // 0x108a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108a30:
    // 0x108a30: 0x1000000b  b           . + 4 + (0xB << 2)
label_108a34:
    if (ctx->pc == 0x108A34u) {
        ctx->pc = 0x108A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A30u;
        // 0x108a34: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108A38u;
        goto label_108a38;
    }
    ctx->pc = 0x108A30u;
    {
        const bool branch_taken_0x108a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A30u;
        // 0x108a34: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a30) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x108A38u;
label_108a38:
    // 0x108a38: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
label_108a3c:
    // 0x108a3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x108a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108a40:
    // 0x108a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108a44:
    // 0x108a44: 0x10000006  b           . + 4 + (0x6 << 2)
label_108a48:
    if (ctx->pc == 0x108A48u) {
        ctx->pc = 0x108A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A44u;
        // 0x108a48: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108A4Cu;
        goto label_108a4c;
    }
    ctx->pc = 0x108A44u;
    {
        const bool branch_taken_0x108a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A44u;
        // 0x108a48: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a44) {
            ctx->pc = 0x108A60u;
            goto label_108a60;
        }
    }
    ctx->pc = 0x108A4Cu;
label_108a4c:
    // 0x108a4c: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x108a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_108a50:
    // 0x108a50: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x108a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_108a54:
    // 0x108a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108a58:
    // 0x108a58: 0x0  nop
    ctx->pc = 0x108a58u;
    // NOP
label_108a5c:
    // 0x108a5c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x108a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_108a60:
    // 0x108a60: 0xae200690  sw          $zero, 0x690($s1)
    ctx->pc = 0x108a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 0));
label_108a64:
    // 0x108a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108a68:
    // 0x108a68: 0xae200650  sw          $zero, 0x650($s1)
    ctx->pc = 0x108a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 0));
label_108a6c:
    // 0x108a6c: 0xae200654  sw          $zero, 0x654($s1)
    ctx->pc = 0x108a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 0));
label_108a70:
    // 0x108a70: 0xae200658  sw          $zero, 0x658($s1)
    ctx->pc = 0x108a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 0));
label_108a74:
    // 0x108a74: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x108a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_108a78:
    // 0x108a78: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x108a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_108a7c:
    // 0x108a7c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x108a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_108a80:
    // 0x108a80: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x108a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_108a84:
    // 0x108a84: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x108a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_108a88:
    // 0x108a88: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x108a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_108a8c:
    // 0x108a8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x108a8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_108a90:
    // 0x108a90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_108a94:
    // 0x108a94: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x108a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_108a98:
    // 0x108a98: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x108a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_108a9c:
    // 0x108a9c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x108a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_108aa0:
    // 0x108aa0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x108aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_108aa4:
    // 0x108aa4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x108aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108aa8:
    // 0x108aa8: 0x3e00008  jr          $ra
label_108aac:
    if (ctx->pc == 0x108AACu) {
        ctx->pc = 0x108AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AA8u;
        // 0x108aac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108AB0u;
        goto label_fallthrough_0x108aa8;
    }
    ctx->pc = 0x108AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AA8u;
        // 0x108aac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108aa8:
    ctx->pc = 0x108AB0u;
}
