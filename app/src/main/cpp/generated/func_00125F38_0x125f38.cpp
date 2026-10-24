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

// Function: func_00125F38
// Address: 0x125f38 - 0x126770
void func_00125F38_0x125f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00125F38_0x125f38");
#endif

    switch (ctx->pc) {
        case 0x125f38u: goto label_125f38;
        case 0x125f3cu: goto label_125f3c;
        case 0x125f40u: goto label_125f40;
        case 0x125f44u: goto label_125f44;
        case 0x125f48u: goto label_125f48;
        case 0x125f4cu: goto label_125f4c;
        case 0x125f50u: goto label_125f50;
        case 0x125f54u: goto label_125f54;
        case 0x125f58u: goto label_125f58;
        case 0x125f5cu: goto label_125f5c;
        case 0x125f60u: goto label_125f60;
        case 0x125f64u: goto label_125f64;
        case 0x125f68u: goto label_125f68;
        case 0x125f6cu: goto label_125f6c;
        case 0x125f70u: goto label_125f70;
        case 0x125f74u: goto label_125f74;
        case 0x125f78u: goto label_125f78;
        case 0x125f7cu: goto label_125f7c;
        case 0x125f80u: goto label_125f80;
        case 0x125f84u: goto label_125f84;
        case 0x125f88u: goto label_125f88;
        case 0x125f8cu: goto label_125f8c;
        case 0x125f90u: goto label_125f90;
        case 0x125f94u: goto label_125f94;
        case 0x125f98u: goto label_125f98;
        case 0x125f9cu: goto label_125f9c;
        case 0x125fa0u: goto label_125fa0;
        case 0x125fa4u: goto label_125fa4;
        case 0x125fa8u: goto label_125fa8;
        case 0x125facu: goto label_125fac;
        case 0x125fb0u: goto label_125fb0;
        case 0x125fb4u: goto label_125fb4;
        case 0x125fb8u: goto label_125fb8;
        case 0x125fbcu: goto label_125fbc;
        case 0x125fc0u: goto label_125fc0;
        case 0x125fc4u: goto label_125fc4;
        case 0x125fc8u: goto label_125fc8;
        case 0x125fccu: goto label_125fcc;
        case 0x125fd0u: goto label_125fd0;
        case 0x125fd4u: goto label_125fd4;
        case 0x125fd8u: goto label_125fd8;
        case 0x125fdcu: goto label_125fdc;
        case 0x125fe0u: goto label_125fe0;
        case 0x125fe4u: goto label_125fe4;
        case 0x125fe8u: goto label_125fe8;
        case 0x125fecu: goto label_125fec;
        case 0x125ff0u: goto label_125ff0;
        case 0x125ff4u: goto label_125ff4;
        case 0x125ff8u: goto label_125ff8;
        case 0x125ffcu: goto label_125ffc;
        case 0x126000u: goto label_126000;
        case 0x126004u: goto label_126004;
        case 0x126008u: goto label_126008;
        case 0x12600cu: goto label_12600c;
        case 0x126010u: goto label_126010;
        case 0x126014u: goto label_126014;
        case 0x126018u: goto label_126018;
        case 0x12601cu: goto label_12601c;
        case 0x126020u: goto label_126020;
        case 0x126024u: goto label_126024;
        case 0x126028u: goto label_126028;
        case 0x12602cu: goto label_12602c;
        case 0x126030u: goto label_126030;
        case 0x126034u: goto label_126034;
        case 0x126038u: goto label_126038;
        case 0x12603cu: goto label_12603c;
        case 0x126040u: goto label_126040;
        case 0x126044u: goto label_126044;
        case 0x126048u: goto label_126048;
        case 0x12604cu: goto label_12604c;
        case 0x126050u: goto label_126050;
        case 0x126054u: goto label_126054;
        case 0x126058u: goto label_126058;
        case 0x12605cu: goto label_12605c;
        case 0x126060u: goto label_126060;
        case 0x126064u: goto label_126064;
        case 0x126068u: goto label_126068;
        case 0x12606cu: goto label_12606c;
        case 0x126070u: goto label_126070;
        case 0x126074u: goto label_126074;
        case 0x126078u: goto label_126078;
        case 0x12607cu: goto label_12607c;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x126088u: goto label_126088;
        case 0x12608cu: goto label_12608c;
        case 0x126090u: goto label_126090;
        case 0x126094u: goto label_126094;
        case 0x126098u: goto label_126098;
        case 0x12609cu: goto label_12609c;
        case 0x1260a0u: goto label_1260a0;
        case 0x1260a4u: goto label_1260a4;
        case 0x1260a8u: goto label_1260a8;
        case 0x1260acu: goto label_1260ac;
        case 0x1260b0u: goto label_1260b0;
        case 0x1260b4u: goto label_1260b4;
        case 0x1260b8u: goto label_1260b8;
        case 0x1260bcu: goto label_1260bc;
        case 0x1260c0u: goto label_1260c0;
        case 0x1260c4u: goto label_1260c4;
        case 0x1260c8u: goto label_1260c8;
        case 0x1260ccu: goto label_1260cc;
        case 0x1260d0u: goto label_1260d0;
        case 0x1260d4u: goto label_1260d4;
        case 0x1260d8u: goto label_1260d8;
        case 0x1260dcu: goto label_1260dc;
        case 0x1260e0u: goto label_1260e0;
        case 0x1260e4u: goto label_1260e4;
        case 0x1260e8u: goto label_1260e8;
        case 0x1260ecu: goto label_1260ec;
        case 0x1260f0u: goto label_1260f0;
        case 0x1260f4u: goto label_1260f4;
        case 0x1260f8u: goto label_1260f8;
        case 0x1260fcu: goto label_1260fc;
        case 0x126100u: goto label_126100;
        case 0x126104u: goto label_126104;
        case 0x126108u: goto label_126108;
        case 0x12610cu: goto label_12610c;
        case 0x126110u: goto label_126110;
        case 0x126114u: goto label_126114;
        case 0x126118u: goto label_126118;
        case 0x12611cu: goto label_12611c;
        case 0x126120u: goto label_126120;
        case 0x126124u: goto label_126124;
        case 0x126128u: goto label_126128;
        case 0x12612cu: goto label_12612c;
        case 0x126130u: goto label_126130;
        case 0x126134u: goto label_126134;
        case 0x126138u: goto label_126138;
        case 0x12613cu: goto label_12613c;
        case 0x126140u: goto label_126140;
        case 0x126144u: goto label_126144;
        case 0x126148u: goto label_126148;
        case 0x12614cu: goto label_12614c;
        case 0x126150u: goto label_126150;
        case 0x126154u: goto label_126154;
        case 0x126158u: goto label_126158;
        case 0x12615cu: goto label_12615c;
        case 0x126160u: goto label_126160;
        case 0x126164u: goto label_126164;
        case 0x126168u: goto label_126168;
        case 0x12616cu: goto label_12616c;
        case 0x126170u: goto label_126170;
        case 0x126174u: goto label_126174;
        case 0x126178u: goto label_126178;
        case 0x12617cu: goto label_12617c;
        case 0x126180u: goto label_126180;
        case 0x126184u: goto label_126184;
        case 0x126188u: goto label_126188;
        case 0x12618cu: goto label_12618c;
        case 0x126190u: goto label_126190;
        case 0x126194u: goto label_126194;
        case 0x126198u: goto label_126198;
        case 0x12619cu: goto label_12619c;
        case 0x1261a0u: goto label_1261a0;
        case 0x1261a4u: goto label_1261a4;
        case 0x1261a8u: goto label_1261a8;
        case 0x1261acu: goto label_1261ac;
        case 0x1261b0u: goto label_1261b0;
        case 0x1261b4u: goto label_1261b4;
        case 0x1261b8u: goto label_1261b8;
        case 0x1261bcu: goto label_1261bc;
        case 0x1261c0u: goto label_1261c0;
        case 0x1261c4u: goto label_1261c4;
        case 0x1261c8u: goto label_1261c8;
        case 0x1261ccu: goto label_1261cc;
        case 0x1261d0u: goto label_1261d0;
        case 0x1261d4u: goto label_1261d4;
        case 0x1261d8u: goto label_1261d8;
        case 0x1261dcu: goto label_1261dc;
        case 0x1261e0u: goto label_1261e0;
        case 0x1261e4u: goto label_1261e4;
        case 0x1261e8u: goto label_1261e8;
        case 0x1261ecu: goto label_1261ec;
        case 0x1261f0u: goto label_1261f0;
        case 0x1261f4u: goto label_1261f4;
        case 0x1261f8u: goto label_1261f8;
        case 0x1261fcu: goto label_1261fc;
        case 0x126200u: goto label_126200;
        case 0x126204u: goto label_126204;
        case 0x126208u: goto label_126208;
        case 0x12620cu: goto label_12620c;
        case 0x126210u: goto label_126210;
        case 0x126214u: goto label_126214;
        case 0x126218u: goto label_126218;
        case 0x12621cu: goto label_12621c;
        case 0x126220u: goto label_126220;
        case 0x126224u: goto label_126224;
        case 0x126228u: goto label_126228;
        case 0x12622cu: goto label_12622c;
        case 0x126230u: goto label_126230;
        case 0x126234u: goto label_126234;
        case 0x126238u: goto label_126238;
        case 0x12623cu: goto label_12623c;
        case 0x126240u: goto label_126240;
        case 0x126244u: goto label_126244;
        case 0x126248u: goto label_126248;
        case 0x12624cu: goto label_12624c;
        case 0x126250u: goto label_126250;
        case 0x126254u: goto label_126254;
        case 0x126258u: goto label_126258;
        case 0x12625cu: goto label_12625c;
        case 0x126260u: goto label_126260;
        case 0x126264u: goto label_126264;
        case 0x126268u: goto label_126268;
        case 0x12626cu: goto label_12626c;
        case 0x126270u: goto label_126270;
        case 0x126274u: goto label_126274;
        case 0x126278u: goto label_126278;
        case 0x12627cu: goto label_12627c;
        case 0x126280u: goto label_126280;
        case 0x126284u: goto label_126284;
        case 0x126288u: goto label_126288;
        case 0x12628cu: goto label_12628c;
        case 0x126290u: goto label_126290;
        case 0x126294u: goto label_126294;
        case 0x126298u: goto label_126298;
        case 0x12629cu: goto label_12629c;
        case 0x1262a0u: goto label_1262a0;
        case 0x1262a4u: goto label_1262a4;
        case 0x1262a8u: goto label_1262a8;
        case 0x1262acu: goto label_1262ac;
        case 0x1262b0u: goto label_1262b0;
        case 0x1262b4u: goto label_1262b4;
        case 0x1262b8u: goto label_1262b8;
        case 0x1262bcu: goto label_1262bc;
        case 0x1262c0u: goto label_1262c0;
        case 0x1262c4u: goto label_1262c4;
        case 0x1262c8u: goto label_1262c8;
        case 0x1262ccu: goto label_1262cc;
        case 0x1262d0u: goto label_1262d0;
        case 0x1262d4u: goto label_1262d4;
        case 0x1262d8u: goto label_1262d8;
        case 0x1262dcu: goto label_1262dc;
        case 0x1262e0u: goto label_1262e0;
        case 0x1262e4u: goto label_1262e4;
        case 0x1262e8u: goto label_1262e8;
        case 0x1262ecu: goto label_1262ec;
        case 0x1262f0u: goto label_1262f0;
        case 0x1262f4u: goto label_1262f4;
        case 0x1262f8u: goto label_1262f8;
        case 0x1262fcu: goto label_1262fc;
        case 0x126300u: goto label_126300;
        case 0x126304u: goto label_126304;
        case 0x126308u: goto label_126308;
        case 0x12630cu: goto label_12630c;
        case 0x126310u: goto label_126310;
        case 0x126314u: goto label_126314;
        case 0x126318u: goto label_126318;
        case 0x12631cu: goto label_12631c;
        case 0x126320u: goto label_126320;
        case 0x126324u: goto label_126324;
        case 0x126328u: goto label_126328;
        case 0x12632cu: goto label_12632c;
        case 0x126330u: goto label_126330;
        case 0x126334u: goto label_126334;
        case 0x126338u: goto label_126338;
        case 0x12633cu: goto label_12633c;
        case 0x126340u: goto label_126340;
        case 0x126344u: goto label_126344;
        case 0x126348u: goto label_126348;
        case 0x12634cu: goto label_12634c;
        case 0x126350u: goto label_126350;
        case 0x126354u: goto label_126354;
        case 0x126358u: goto label_126358;
        case 0x12635cu: goto label_12635c;
        case 0x126360u: goto label_126360;
        case 0x126364u: goto label_126364;
        case 0x126368u: goto label_126368;
        case 0x12636cu: goto label_12636c;
        case 0x126370u: goto label_126370;
        case 0x126374u: goto label_126374;
        case 0x126378u: goto label_126378;
        case 0x12637cu: goto label_12637c;
        case 0x126380u: goto label_126380;
        case 0x126384u: goto label_126384;
        case 0x126388u: goto label_126388;
        case 0x12638cu: goto label_12638c;
        case 0x126390u: goto label_126390;
        case 0x126394u: goto label_126394;
        case 0x126398u: goto label_126398;
        case 0x12639cu: goto label_12639c;
        case 0x1263a0u: goto label_1263a0;
        case 0x1263a4u: goto label_1263a4;
        case 0x1263a8u: goto label_1263a8;
        case 0x1263acu: goto label_1263ac;
        case 0x1263b0u: goto label_1263b0;
        case 0x1263b4u: goto label_1263b4;
        case 0x1263b8u: goto label_1263b8;
        case 0x1263bcu: goto label_1263bc;
        case 0x1263c0u: goto label_1263c0;
        case 0x1263c4u: goto label_1263c4;
        case 0x1263c8u: goto label_1263c8;
        case 0x1263ccu: goto label_1263cc;
        case 0x1263d0u: goto label_1263d0;
        case 0x1263d4u: goto label_1263d4;
        case 0x1263d8u: goto label_1263d8;
        case 0x1263dcu: goto label_1263dc;
        case 0x1263e0u: goto label_1263e0;
        case 0x1263e4u: goto label_1263e4;
        case 0x1263e8u: goto label_1263e8;
        case 0x1263ecu: goto label_1263ec;
        case 0x1263f0u: goto label_1263f0;
        case 0x1263f4u: goto label_1263f4;
        case 0x1263f8u: goto label_1263f8;
        case 0x1263fcu: goto label_1263fc;
        case 0x126400u: goto label_126400;
        case 0x126404u: goto label_126404;
        case 0x126408u: goto label_126408;
        case 0x12640cu: goto label_12640c;
        case 0x126410u: goto label_126410;
        case 0x126414u: goto label_126414;
        case 0x126418u: goto label_126418;
        case 0x12641cu: goto label_12641c;
        case 0x126420u: goto label_126420;
        case 0x126424u: goto label_126424;
        case 0x126428u: goto label_126428;
        case 0x12642cu: goto label_12642c;
        case 0x126430u: goto label_126430;
        case 0x126434u: goto label_126434;
        case 0x126438u: goto label_126438;
        case 0x12643cu: goto label_12643c;
        case 0x126440u: goto label_126440;
        case 0x126444u: goto label_126444;
        case 0x126448u: goto label_126448;
        case 0x12644cu: goto label_12644c;
        case 0x126450u: goto label_126450;
        case 0x126454u: goto label_126454;
        case 0x126458u: goto label_126458;
        case 0x12645cu: goto label_12645c;
        case 0x126460u: goto label_126460;
        case 0x126464u: goto label_126464;
        case 0x126468u: goto label_126468;
        case 0x12646cu: goto label_12646c;
        case 0x126470u: goto label_126470;
        case 0x126474u: goto label_126474;
        case 0x126478u: goto label_126478;
        case 0x12647cu: goto label_12647c;
        case 0x126480u: goto label_126480;
        case 0x126484u: goto label_126484;
        case 0x126488u: goto label_126488;
        case 0x12648cu: goto label_12648c;
        case 0x126490u: goto label_126490;
        case 0x126494u: goto label_126494;
        case 0x126498u: goto label_126498;
        case 0x12649cu: goto label_12649c;
        case 0x1264a0u: goto label_1264a0;
        case 0x1264a4u: goto label_1264a4;
        case 0x1264a8u: goto label_1264a8;
        case 0x1264acu: goto label_1264ac;
        case 0x1264b0u: goto label_1264b0;
        case 0x1264b4u: goto label_1264b4;
        case 0x1264b8u: goto label_1264b8;
        case 0x1264bcu: goto label_1264bc;
        case 0x1264c0u: goto label_1264c0;
        case 0x1264c4u: goto label_1264c4;
        case 0x1264c8u: goto label_1264c8;
        case 0x1264ccu: goto label_1264cc;
        case 0x1264d0u: goto label_1264d0;
        case 0x1264d4u: goto label_1264d4;
        case 0x1264d8u: goto label_1264d8;
        case 0x1264dcu: goto label_1264dc;
        case 0x1264e0u: goto label_1264e0;
        case 0x1264e4u: goto label_1264e4;
        case 0x1264e8u: goto label_1264e8;
        case 0x1264ecu: goto label_1264ec;
        case 0x1264f0u: goto label_1264f0;
        case 0x1264f4u: goto label_1264f4;
        case 0x1264f8u: goto label_1264f8;
        case 0x1264fcu: goto label_1264fc;
        case 0x126500u: goto label_126500;
        case 0x126504u: goto label_126504;
        case 0x126508u: goto label_126508;
        case 0x12650cu: goto label_12650c;
        case 0x126510u: goto label_126510;
        case 0x126514u: goto label_126514;
        case 0x126518u: goto label_126518;
        case 0x12651cu: goto label_12651c;
        case 0x126520u: goto label_126520;
        case 0x126524u: goto label_126524;
        case 0x126528u: goto label_126528;
        case 0x12652cu: goto label_12652c;
        case 0x126530u: goto label_126530;
        case 0x126534u: goto label_126534;
        case 0x126538u: goto label_126538;
        case 0x12653cu: goto label_12653c;
        case 0x126540u: goto label_126540;
        case 0x126544u: goto label_126544;
        case 0x126548u: goto label_126548;
        case 0x12654cu: goto label_12654c;
        case 0x126550u: goto label_126550;
        case 0x126554u: goto label_126554;
        case 0x126558u: goto label_126558;
        case 0x12655cu: goto label_12655c;
        case 0x126560u: goto label_126560;
        case 0x126564u: goto label_126564;
        case 0x126568u: goto label_126568;
        case 0x12656cu: goto label_12656c;
        case 0x126570u: goto label_126570;
        case 0x126574u: goto label_126574;
        case 0x126578u: goto label_126578;
        case 0x12657cu: goto label_12657c;
        case 0x126580u: goto label_126580;
        case 0x126584u: goto label_126584;
        case 0x126588u: goto label_126588;
        case 0x12658cu: goto label_12658c;
        case 0x126590u: goto label_126590;
        case 0x126594u: goto label_126594;
        case 0x126598u: goto label_126598;
        case 0x12659cu: goto label_12659c;
        case 0x1265a0u: goto label_1265a0;
        case 0x1265a4u: goto label_1265a4;
        case 0x1265a8u: goto label_1265a8;
        case 0x1265acu: goto label_1265ac;
        case 0x1265b0u: goto label_1265b0;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265b8u: goto label_1265b8;
        case 0x1265bcu: goto label_1265bc;
        case 0x1265c0u: goto label_1265c0;
        case 0x1265c4u: goto label_1265c4;
        case 0x1265c8u: goto label_1265c8;
        case 0x1265ccu: goto label_1265cc;
        case 0x1265d0u: goto label_1265d0;
        case 0x1265d4u: goto label_1265d4;
        case 0x1265d8u: goto label_1265d8;
        case 0x1265dcu: goto label_1265dc;
        case 0x1265e0u: goto label_1265e0;
        case 0x1265e4u: goto label_1265e4;
        case 0x1265e8u: goto label_1265e8;
        case 0x1265ecu: goto label_1265ec;
        case 0x1265f0u: goto label_1265f0;
        case 0x1265f4u: goto label_1265f4;
        case 0x1265f8u: goto label_1265f8;
        case 0x1265fcu: goto label_1265fc;
        case 0x126600u: goto label_126600;
        case 0x126604u: goto label_126604;
        case 0x126608u: goto label_126608;
        case 0x12660cu: goto label_12660c;
        case 0x126610u: goto label_126610;
        case 0x126614u: goto label_126614;
        case 0x126618u: goto label_126618;
        case 0x12661cu: goto label_12661c;
        case 0x126620u: goto label_126620;
        case 0x126624u: goto label_126624;
        case 0x126628u: goto label_126628;
        case 0x12662cu: goto label_12662c;
        case 0x126630u: goto label_126630;
        case 0x126634u: goto label_126634;
        case 0x126638u: goto label_126638;
        case 0x12663cu: goto label_12663c;
        case 0x126640u: goto label_126640;
        case 0x126644u: goto label_126644;
        case 0x126648u: goto label_126648;
        case 0x12664cu: goto label_12664c;
        case 0x126650u: goto label_126650;
        case 0x126654u: goto label_126654;
        case 0x126658u: goto label_126658;
        case 0x12665cu: goto label_12665c;
        case 0x126660u: goto label_126660;
        case 0x126664u: goto label_126664;
        case 0x126668u: goto label_126668;
        case 0x12666cu: goto label_12666c;
        case 0x126670u: goto label_126670;
        case 0x126674u: goto label_126674;
        case 0x126678u: goto label_126678;
        case 0x12667cu: goto label_12667c;
        case 0x126680u: goto label_126680;
        case 0x126684u: goto label_126684;
        case 0x126688u: goto label_126688;
        case 0x12668cu: goto label_12668c;
        case 0x126690u: goto label_126690;
        case 0x126694u: goto label_126694;
        case 0x126698u: goto label_126698;
        case 0x12669cu: goto label_12669c;
        case 0x1266a0u: goto label_1266a0;
        case 0x1266a4u: goto label_1266a4;
        case 0x1266a8u: goto label_1266a8;
        case 0x1266acu: goto label_1266ac;
        case 0x1266b0u: goto label_1266b0;
        case 0x1266b4u: goto label_1266b4;
        case 0x1266b8u: goto label_1266b8;
        case 0x1266bcu: goto label_1266bc;
        case 0x1266c0u: goto label_1266c0;
        case 0x1266c4u: goto label_1266c4;
        case 0x1266c8u: goto label_1266c8;
        case 0x1266ccu: goto label_1266cc;
        case 0x1266d0u: goto label_1266d0;
        case 0x1266d4u: goto label_1266d4;
        case 0x1266d8u: goto label_1266d8;
        case 0x1266dcu: goto label_1266dc;
        case 0x1266e0u: goto label_1266e0;
        case 0x1266e4u: goto label_1266e4;
        case 0x1266e8u: goto label_1266e8;
        case 0x1266ecu: goto label_1266ec;
        case 0x1266f0u: goto label_1266f0;
        case 0x1266f4u: goto label_1266f4;
        case 0x1266f8u: goto label_1266f8;
        case 0x1266fcu: goto label_1266fc;
        case 0x126700u: goto label_126700;
        case 0x126704u: goto label_126704;
        case 0x126708u: goto label_126708;
        case 0x12670cu: goto label_12670c;
        case 0x126710u: goto label_126710;
        case 0x126714u: goto label_126714;
        case 0x126718u: goto label_126718;
        case 0x12671cu: goto label_12671c;
        case 0x126720u: goto label_126720;
        case 0x126724u: goto label_126724;
        case 0x126728u: goto label_126728;
        case 0x12672cu: goto label_12672c;
        case 0x126730u: goto label_126730;
        case 0x126734u: goto label_126734;
        case 0x126738u: goto label_126738;
        case 0x12673cu: goto label_12673c;
        case 0x126740u: goto label_126740;
        case 0x126744u: goto label_126744;
        case 0x126748u: goto label_126748;
        case 0x12674cu: goto label_12674c;
        case 0x126750u: goto label_126750;
        case 0x126754u: goto label_126754;
        case 0x126758u: goto label_126758;
        case 0x12675cu: goto label_12675c;
        case 0x126760u: goto label_126760;
        case 0x126764u: goto label_126764;
        case 0x126768u: goto label_126768;
        case 0x12676cu: goto label_12676c;
        default: break;
    }

    ctx->pc = 0x125f38u;

label_125f38:
    // 0x125f38: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x125f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_125f3c:
    // 0x125f3c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x125f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_125f40:
    // 0x125f40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x125f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125f44:
    // 0x125f44: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x125f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_125f48:
    // 0x125f48: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x125f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_125f4c:
    // 0x125f4c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x125f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_125f50:
    // 0x125f50: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x125f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_125f54:
    // 0x125f54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x125f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_125f58:
    // 0x125f58: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x125f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_125f5c:
    // 0x125f5c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x125f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_125f60:
    // 0x125f60: 0x8e42165c  lw          $v0, 0x165C($s2)
    ctx->pc = 0x125f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5724)));
label_125f64:
    // 0x125f64: 0x104001f9  beqz        $v0, . + 4 + (0x1F9 << 2)
label_125f68:
    if (ctx->pc == 0x125F68u) {
        ctx->pc = 0x125F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F64u;
        // 0x125f68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F6Cu;
        goto label_125f6c;
    }
    ctx->pc = 0x125F64u;
    {
        const bool branch_taken_0x125f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F64u;
        // 0x125f68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f64) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x125F6Cu;
label_125f6c:
    // 0x125f6c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x125f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_125f70:
    // 0x125f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125f74:
    // 0x125f74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x125f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_125f78:
    // 0x125f78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x125f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_125f7c:
    // 0x125f7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x125f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_125f80:
    // 0x125f80: 0x8c51002c  lw          $s1, 0x2C($v0)
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_125f84:
    // 0x125f84: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x125f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_125f88:
    // 0x125f88: 0x104001f0  beqz        $v0, . + 4 + (0x1F0 << 2)
label_125f8c:
    if (ctx->pc == 0x125F8Cu) {
        ctx->pc = 0x125F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F88u;
        // 0x125f8c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F90u;
        goto label_125f90;
    }
    ctx->pc = 0x125F88u;
    {
        const bool branch_taken_0x125f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F88u;
        // 0x125f8c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f88) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x125F90u;
label_125f90:
    // 0x125f90: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x125f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_125f94:
    // 0x125f94: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x125f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_125f98:
    // 0x125f98: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x125f98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_125f9c:
    // 0x125f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125fa0:
    // 0x125fa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125fa4:
    // 0x125fa4: 0x800008  jr          $a0
label_125fa8:
    if (ctx->pc == 0x125FA8u) {
        ctx->pc = 0x125FACu;
        goto label_125fac;
    }
    ctx->pc = 0x125FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125FACu: goto label_125fac;
            case 0x126068u: goto label_126068;
            case 0x12674Cu: goto label_12674c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125FA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x125FACu;
label_125fac:
    // 0x125fac: 0x8e450640  lw          $a1, 0x640($s2)
    ctx->pc = 0x125facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_125fb0:
    // 0x125fb0: 0x10a001e7  beqz        $a1, . + 4 + (0x1E7 << 2)
label_125fb4:
    if (ctx->pc == 0x125FB4u) {
        ctx->pc = 0x125FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FB0u;
        // 0x125fb4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FB8u;
        goto label_125fb8;
    }
    ctx->pc = 0x125FB0u;
    {
        const bool branch_taken_0x125fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FB0u;
        // 0x125fb4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fb0) {
            ctx->pc = 0x126750u;
            goto label_126750;
        }
    }
    ctx->pc = 0x125FB8u;
label_125fb8:
    // 0x125fb8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_125fbc:
    // 0x125fbc: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x125fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_125fc0:
    // 0x125fc0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x125fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_125fc4:
    // 0x125fc4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_125fc8:
    // 0x125fc8: 0x40f809  jalr        $v0
label_125fcc:
    if (ctx->pc == 0x125FCCu) {
        ctx->pc = 0x125FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC8u;
        // 0x125fcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FD0u;
        goto label_125fd0;
    }
    ctx->pc = 0x125FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125FD0u);
        ctx->pc = 0x125FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC8u;
        // 0x125fcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126068u: goto label_126068;
            case 0x126088u: goto label_126088;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260FCu: goto label_1260fc;
            case 0x12613Cu: goto label_12613c;
            case 0x126168u: goto label_126168;
            case 0x126178u: goto label_126178;
            case 0x126188u: goto label_126188;
            case 0x126198u: goto label_126198;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261E8u: goto label_1261e8;
            case 0x126218u: goto label_126218;
            case 0x126250u: goto label_126250;
            case 0x126284u: goto label_126284;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C8u: goto label_1262c8;
            case 0x126300u: goto label_126300;
            case 0x126334u: goto label_126334;
            case 0x126368u: goto label_126368;
            case 0x126390u: goto label_126390;
            case 0x1263C8u: goto label_1263c8;
            case 0x126408u: goto label_126408;
            case 0x126448u: goto label_126448;
            case 0x126488u: goto label_126488;
            case 0x1264C8u: goto label_1264c8;
            case 0x1264D4u: goto label_1264d4;
            case 0x12674Cu: goto label_12674c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125FC8u, 0x125FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125FD0u;
label_125fd0:
    // 0x125fd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125fd4:
    // 0x125fd4: 0xc07dfac  jal         func_1F7EB0
label_125fd8:
    if (ctx->pc == 0x125FD8u) {
        ctx->pc = 0x125FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FD4u;
        // 0x125fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125FDCu;
        goto label_125fdc;
    }
    ctx->pc = 0x125FD4u;
    SET_GPR_U32(ctx, 31, 0x125FDCu);
    ctx->pc = 0x125FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FD4u;
    // 0x125fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x125FD4u, 0x125FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FDCu;
label_125fdc:
    // 0x125fdc: 0x8e420640  lw          $v0, 0x640($s2)
    ctx->pc = 0x125fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_125fe0:
    // 0x125fe0: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x125fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_125fe4:
    // 0x125fe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125fe8:
    // 0x125fe8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_125fec:
    if (ctx->pc == 0x125FECu) {
        ctx->pc = 0x125FF0u;
        goto label_125ff0;
    }
    ctx->pc = 0x125FE8u;
    {
        const bool branch_taken_0x125fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fe8) {
            ctx->pc = 0x126054u;
            goto label_126054;
        }
    }
    ctx->pc = 0x125FF0u;
label_125ff0:
    // 0x125ff0: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x125ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
label_125ff4:
    // 0x125ff4: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x125ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
label_125ff8:
    // 0x125ff8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_125ffc:
    if (ctx->pc == 0x125FFCu) {
        ctx->pc = 0x125FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FF8u;
        // 0x125ffc: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126000u;
        goto label_126000;
    }
    ctx->pc = 0x125FF8u;
    {
        const bool branch_taken_0x125ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FF8u;
        // 0x125ffc: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ff8) {
            ctx->pc = 0x12603Cu;
            goto label_12603c;
        }
    }
    ctx->pc = 0x126000u;
label_126000:
    // 0x126000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_126004:
    if (ctx->pc == 0x126004u) {
        ctx->pc = 0x126004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126000u;
        // 0x126004: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126008u;
        goto label_126008;
    }
    ctx->pc = 0x126000u;
    {
        const bool branch_taken_0x126000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126000u;
        // 0x126004: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126000) {
            ctx->pc = 0x126018u;
            goto label_126018;
        }
    }
    ctx->pc = 0x126008u;
label_126008:
    // 0x126008: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_12600c:
    if (ctx->pc == 0x12600Cu) {
        ctx->pc = 0x126010u;
        goto label_126010;
    }
    ctx->pc = 0x126008u;
    {
        const bool branch_taken_0x126008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x126008) {
            ctx->pc = 0x12603Cu;
            goto label_12603c;
        }
    }
    ctx->pc = 0x126010u;
label_126010:
    // 0x126010: 0x10000010  b           . + 4 + (0x10 << 2)
label_126014:
    if (ctx->pc == 0x126014u) {
        ctx->pc = 0x126018u;
        goto label_126018;
    }
    ctx->pc = 0x126010u;
    {
        const bool branch_taken_0x126010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126010) {
            ctx->pc = 0x126054u;
            goto label_126054;
        }
    }
    ctx->pc = 0x126018u;
label_126018:
    // 0x126018: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
label_12601c:
    // 0x12601c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_126020:
    if (ctx->pc == 0x126020u) {
        ctx->pc = 0x126020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12601Cu;
        // 0x126020: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126024u;
        goto label_126024;
    }
    ctx->pc = 0x12601Cu;
    {
        const bool branch_taken_0x12601c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x126020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12601Cu;
        // 0x126020: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12601c) {
            ctx->pc = 0x12603Cu;
            goto label_12603c;
        }
    }
    ctx->pc = 0x126024u;
label_126024:
    // 0x126024: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_126028:
    if (ctx->pc == 0x126028u) {
        ctx->pc = 0x12602Cu;
        goto label_12602c;
    }
    ctx->pc = 0x126024u;
    {
        const bool branch_taken_0x126024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x126024) {
            ctx->pc = 0x12604Cu;
            goto label_12604c;
        }
    }
    ctx->pc = 0x12602Cu;
label_12602c:
    // 0x12602c: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x12602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_126030:
    // 0x126030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126034:
    // 0x126034: 0x10000007  b           . + 4 + (0x7 << 2)
label_126038:
    if (ctx->pc == 0x126038u) {
        ctx->pc = 0x12603Cu;
        goto label_12603c;
    }
    ctx->pc = 0x126034u;
    {
        const bool branch_taken_0x126034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126034) {
            ctx->pc = 0x126054u;
            goto label_126054;
        }
    }
    ctx->pc = 0x12603Cu;
label_12603c:
    // 0x12603c: 0x3c0142a2  lui         $at, 0x42A2
    ctx->pc = 0x12603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17058 << 16));
label_126040:
    // 0x126040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126044:
    // 0x126044: 0x10000003  b           . + 4 + (0x3 << 2)
label_126048:
    if (ctx->pc == 0x126048u) {
        ctx->pc = 0x12604Cu;
        goto label_12604c;
    }
    ctx->pc = 0x126044u;
    {
        const bool branch_taken_0x126044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126044) {
            ctx->pc = 0x126054u;
            goto label_126054;
        }
    }
    ctx->pc = 0x12604Cu;
label_12604c:
    // 0x12604c: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x12604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_126050:
    // 0x126050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126054:
    // 0x126054: 0x0  nop
    ctx->pc = 0x126054u;
    // NOP
label_126058:
    // 0x126058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12605c:
    // 0x12605c: 0x0  nop
    ctx->pc = 0x12605cu;
    // NOP
label_126060:
    // 0x126060: 0x450101bb  bc1t        . + 4 + (0x1BB << 2)
label_126064:
    if (ctx->pc == 0x126064u) {
        ctx->pc = 0x126064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126060u;
        // 0x126064: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126068u;
        goto label_126068;
    }
    ctx->pc = 0x126060u;
    {
        const bool branch_taken_0x126060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126060u;
        // 0x126064: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126060) {
            ctx->pc = 0x126750u;
            goto label_126750;
        }
    }
    ctx->pc = 0x126068u;
label_126068:
    // 0x126068: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x126068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_12606c:
    // 0x12606c: 0x104001b7  beqz        $v0, . + 4 + (0x1B7 << 2)
label_126070:
    if (ctx->pc == 0x126070u) {
        ctx->pc = 0x126070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12606Cu;
        // 0x126070: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126074u;
        goto label_126074;
    }
    ctx->pc = 0x12606Cu;
    {
        const bool branch_taken_0x12606c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12606Cu;
        // 0x126070: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12606c) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x126074u;
label_126074:
    // 0x126074: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x126074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
label_126078:
    // 0x126078: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x126078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_12607c:
    // 0x12607c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126080:
    // 0x126080: 0x600008  jr          $v1
label_126084:
    if (ctx->pc == 0x126084u) {
        ctx->pc = 0x126088u;
        goto label_126088;
    }
    ctx->pc = 0x126080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x126088u;
label_126088:
    // 0x126088: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126088u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_12608c:
    // 0x12608c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_126090:
    // 0x126090: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x126090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126094:
    // 0x126094: 0xae400640  sw          $zero, 0x640($s2)
    ctx->pc = 0x126094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 0));
label_126098:
    // 0x126098: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126098u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_12609c:
    // 0x12609c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12609cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1260a0:
    // 0x1260a0: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1260a4:
    if (ctx->pc == 0x1260A4u) {
        ctx->pc = 0x1260A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260A0u;
        // 0x1260a4: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1260A8u;
        goto label_1260a8;
    }
    ctx->pc = 0x1260A0u;
    {
        const bool branch_taken_0x1260a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260A0u;
        // 0x1260a4: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260a0) {
            ctx->pc = 0x126510u;
            goto label_126510;
        }
    }
    ctx->pc = 0x1260A8u;
label_1260a8:
    // 0x1260a8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1260a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1260ac:
    // 0x1260ac: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1260b0:
    // 0x1260b0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1260b4:
    // 0x1260b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1260b8:
    // 0x1260b8: 0xae400640  sw          $zero, 0x640($s2)
    ctx->pc = 0x1260b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 0));
label_1260bc:
    // 0x1260bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1260bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1260c0:
    // 0x1260c0: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x1260c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_1260c4:
    // 0x1260c4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1260c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1260c8:
    // 0x1260c8: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x1260c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_1260cc:
    // 0x1260cc: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1260ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_1260d0:
    // 0x1260d0: 0x10000112  b           . + 4 + (0x112 << 2)
label_1260d4:
    if (ctx->pc == 0x1260D4u) {
        ctx->pc = 0x1260D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260D0u;
        // 0x1260d4: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1260D8u;
        goto label_1260d8;
    }
    ctx->pc = 0x1260D0u;
    {
        const bool branch_taken_0x1260d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260D0u;
        // 0x1260d4: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260d0) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x1260D8u;
label_1260d8:
    // 0x1260d8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1260dc:
    // 0x1260dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1260e0:
    // 0x1260e0: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1260e4:
    if (ctx->pc == 0x1260E4u) {
        ctx->pc = 0x1260E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260E0u;
        // 0x1260e4: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1260E8u;
        goto label_1260e8;
    }
    ctx->pc = 0x1260E0u;
    {
        const bool branch_taken_0x1260e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260E0u;
        // 0x1260e4: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260e0) {
            ctx->pc = 0x126380u;
            goto label_126380;
        }
    }
    ctx->pc = 0x1260E8u;
label_1260e8:
    // 0x1260e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1260e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1260ec:
    // 0x1260ec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1260ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1260f0:
    // 0x1260f0: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1260f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_1260f4:
    // 0x1260f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1260f8:
    if (ctx->pc == 0x1260F8u) {
        ctx->pc = 0x1260F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260F4u;
        // 0x1260f8: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1260FCu;
        goto label_1260fc;
    }
    ctx->pc = 0x1260F4u;
    {
        const bool branch_taken_0x1260f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260F4u;
        // 0x1260f8: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260f4) {
            ctx->pc = 0x126130u;
            goto label_126130;
        }
    }
    ctx->pc = 0x1260FCu;
label_1260fc:
    // 0x1260fc: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x1260fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
label_126100:
    // 0x126100: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x126100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_126104:
    // 0x126104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126108:
    // 0x126108: 0x1000009a  b           . + 4 + (0x9A << 2)
label_12610c:
    if (ctx->pc == 0x12610Cu) {
        ctx->pc = 0x12610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126108u;
        // 0x12610c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126110u;
        goto label_126110;
    }
    ctx->pc = 0x126108u;
    {
        const bool branch_taken_0x126108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126108u;
        // 0x12610c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126108) {
            ctx->pc = 0x126374u;
            goto label_126374;
        }
    }
    ctx->pc = 0x126110u;
label_126110:
    // 0x126110: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
label_126114:
    // 0x126114: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x126114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_126118:
    // 0x126118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12611c:
    // 0x12611c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12611cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126120:
    // 0x126120: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126120u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126124:
    // 0x126124: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x126124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_126128:
    // 0x126128: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x126128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12612c:
    // 0x12612c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x12612cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_126130:
    // 0x126130: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126130u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126134:
    // 0x126134: 0x10000104  b           . + 4 + (0x104 << 2)
label_126138:
    if (ctx->pc == 0x126138u) {
        ctx->pc = 0x126138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126134u;
        // 0x126138: 0xa25302f7  sb          $s3, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12613Cu;
        goto label_12613c;
    }
    ctx->pc = 0x126134u;
    {
        const bool branch_taken_0x126134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126134u;
        // 0x126138: 0xa25302f7  sb          $s3, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126134) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x12613Cu;
label_12613c:
    // 0x12613c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x12613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_126140:
    // 0x126140: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126144:
    // 0x126144: 0x1000008f  b           . + 4 + (0x8F << 2)
label_126148:
    if (ctx->pc == 0x126148u) {
        ctx->pc = 0x126148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126144u;
        // 0x126148: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12614Cu;
        goto label_12614c;
    }
    ctx->pc = 0x126144u;
    {
        const bool branch_taken_0x126144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126144u;
        // 0x126148: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126144) {
            ctx->pc = 0x126384u;
            goto label_126384;
        }
    }
    ctx->pc = 0x12614Cu;
label_12614c:
    // 0x12614c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_126150:
    // 0x126150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126154:
    // 0x126154: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x126154u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_126158:
    // 0x126158: 0xa24302f7  sb          $v1, 0x2F7($s2)
    ctx->pc = 0x126158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
label_12615c:
    // 0x12615c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x12615cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126160:
    // 0x126160: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_126164:
    if (ctx->pc == 0x126164u) {
        ctx->pc = 0x126164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126160u;
        // 0x126164: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126168u;
        goto label_126168;
    }
    ctx->pc = 0x126160u;
    {
        const bool branch_taken_0x126160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126160u;
        // 0x126164: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126160) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126168u;
label_126168:
    // 0x126168: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x126168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_12616c:
    // 0x12616c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12616cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126170:
    // 0x126170: 0x10000080  b           . + 4 + (0x80 << 2)
label_126174:
    if (ctx->pc == 0x126174u) {
        ctx->pc = 0x126174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126170u;
        // 0x126174: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126178u;
        goto label_126178;
    }
    ctx->pc = 0x126170u;
    {
        const bool branch_taken_0x126170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126170u;
        // 0x126174: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126170) {
            ctx->pc = 0x126374u;
            goto label_126374;
        }
    }
    ctx->pc = 0x126178u;
label_126178:
    // 0x126178: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x126178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_12617c:
    // 0x12617c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12617cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126180:
    // 0x126180: 0x1000007f  b           . + 4 + (0x7F << 2)
label_126184:
    if (ctx->pc == 0x126184u) {
        ctx->pc = 0x126184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126180u;
        // 0x126184: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126188u;
        goto label_126188;
    }
    ctx->pc = 0x126180u;
    {
        const bool branch_taken_0x126180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126180u;
        // 0x126184: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126180) {
            ctx->pc = 0x126380u;
            goto label_126380;
        }
    }
    ctx->pc = 0x126188u;
label_126188:
    // 0x126188: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x126188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_12618c:
    // 0x12618c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x12618cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126190:
    // 0x126190: 0x1000007c  b           . + 4 + (0x7C << 2)
label_126194:
    if (ctx->pc == 0x126194u) {
        ctx->pc = 0x126194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126190u;
        // 0x126194: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126198u;
        goto label_126198;
    }
    ctx->pc = 0x126190u;
    {
        const bool branch_taken_0x126190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126190u;
        // 0x126194: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126190) {
            ctx->pc = 0x126384u;
            goto label_126384;
        }
    }
    ctx->pc = 0x126198u;
label_126198:
    // 0x126198: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x126198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
label_12619c:
    // 0x12619c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x12619cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1261a0:
    // 0x1261a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1261a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1261a4:
    // 0x1261a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1261a8:
    // 0x1261a8: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x1261a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_1261ac:
    // 0x1261ac: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1261acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1261b0:
    // 0x1261b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1261b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1261b4:
    // 0x1261b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1261b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261b8:
    // 0x1261b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1261b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1261bc:
    // 0x1261bc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1261bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1261c0:
    // 0x1261c0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_1261c4:
    if (ctx->pc == 0x1261C4u) {
        ctx->pc = 0x1261C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261C0u;
        // 0x1261c4: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261C8u;
        goto label_1261c8;
    }
    ctx->pc = 0x1261C0u;
    {
        const bool branch_taken_0x1261c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261C0u;
        // 0x1261c4: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261c0) {
            ctx->pc = 0x126380u;
            goto label_126380;
        }
    }
    ctx->pc = 0x1261C8u;
label_1261c8:
    // 0x1261c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1261c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1261cc:
    // 0x1261cc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1261ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1261d0:
    // 0x1261d0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1261d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1261d4:
    // 0x1261d4: 0xae400640  sw          $zero, 0x640($s2)
    ctx->pc = 0x1261d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 0));
label_1261d8:
    // 0x1261d8: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x1261d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_1261dc:
    // 0x1261dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1261dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1261e0:
    // 0x1261e0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1261e4:
    if (ctx->pc == 0x1261E4u) {
        ctx->pc = 0x1261E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261E0u;
        // 0x1261e4: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1261E8u;
        goto label_1261e8;
    }
    ctx->pc = 0x1261E0u;
    {
        const bool branch_taken_0x1261e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261E0u;
        // 0x1261e4: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261e0) {
            ctx->pc = 0x126510u;
            goto label_126510;
        }
    }
    ctx->pc = 0x1261E8u;
label_1261e8:
    // 0x1261e8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1261e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1261ec:
    // 0x1261ec: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1261f0:
    // 0x1261f0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1261f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1261f4:
    // 0x1261f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1261f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261f8:
    // 0x1261f8: 0xae400640  sw          $zero, 0x640($s2)
    ctx->pc = 0x1261f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 0));
label_1261fc:
    // 0x1261fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1261fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126200:
    // 0x126200: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126204:
    // 0x126204: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126208:
    // 0x126208: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_12620c:
    // 0x12620c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x12620cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_126210:
    // 0x126210: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_126214:
    if (ctx->pc == 0x126214u) {
        ctx->pc = 0x126214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126210u;
        // 0x126214: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126218u;
        goto label_126218;
    }
    ctx->pc = 0x126210u;
    {
        const bool branch_taken_0x126210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126210u;
        // 0x126214: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126210) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x126218u;
label_126218:
    // 0x126218: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_12621c:
    // 0x12621c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x12621cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_126220:
    // 0x126220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126224:
    // 0x126224: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126228:
    // 0x126228: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_12622c:
    // 0x12622c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126230:
    // 0x126230: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126234:
    // 0x126234: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x126234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_126238:
    // 0x126238: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x126238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_12623c:
    // 0x12623c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126240:
    // 0x126240: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_126244:
    // 0x126244: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126248:
    // 0x126248: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_12624c:
    if (ctx->pc == 0x12624Cu) {
        ctx->pc = 0x12624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126248u;
        // 0x12624c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126250u;
        goto label_126250;
    }
    ctx->pc = 0x126248u;
    {
        const bool branch_taken_0x126248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126248u;
        // 0x12624c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126248) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x126250u;
label_126250:
    // 0x126250: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_126254:
    // 0x126254: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x126254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_126258:
    // 0x126258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12625c:
    // 0x12625c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x12625cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126260:
    // 0x126260: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126260u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126264:
    // 0x126264: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x126264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126268:
    // 0x126268: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_12626c:
    // 0x12626c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x12626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_126270:
    // 0x126270: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x126270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_126274:
    // 0x126274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126278:
    // 0x126278: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_12627c:
    // 0x12627c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_126280:
    if (ctx->pc == 0x126280u) {
        ctx->pc = 0x126280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12627Cu;
        // 0x126280: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126284u;
        goto label_126284;
    }
    ctx->pc = 0x12627Cu;
    {
        const bool branch_taken_0x12627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12627Cu;
        // 0x126280: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12627c) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x126284u;
label_126284:
    // 0x126284: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_126288:
    // 0x126288: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x126288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_12628c:
    // 0x12628c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12628cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126290:
    // 0x126290: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126294:
    // 0x126294: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126294u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126298:
    // 0x126298: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x126298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_12629c:
    // 0x12629c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x12629cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1262a0:
    // 0x1262a0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1262a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1262a4:
    // 0x1262a4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1262a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1262a8:
    // 0x1262a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1262a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1262ac:
    // 0x1262ac: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x1262acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_1262b0:
    // 0x1262b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1262b4:
    // 0x1262b4: 0x10000098  b           . + 4 + (0x98 << 2)
label_1262b8:
    if (ctx->pc == 0x1262B8u) {
        ctx->pc = 0x1262B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262B4u;
        // 0x1262b8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1262BCu;
        goto label_1262bc;
    }
    ctx->pc = 0x1262B4u;
    {
        const bool branch_taken_0x1262b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262B4u;
        // 0x1262b8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262b4) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x1262BCu;
label_1262bc:
    // 0x1262bc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1262bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1262c0:
    // 0x1262c0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1262c4:
    if (ctx->pc == 0x1262C4u) {
        ctx->pc = 0x1262C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262C0u;
        // 0x1262c4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1262C8u;
        goto label_1262c8;
    }
    ctx->pc = 0x1262C0u;
    {
        const bool branch_taken_0x1262c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262C0u;
        // 0x1262c4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262c0) {
            ctx->pc = 0x126500u;
            goto label_126500;
        }
    }
    ctx->pc = 0x1262C8u;
label_1262c8:
    // 0x1262c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1262c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1262cc:
    // 0x1262cc: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1262d0:
    if (ctx->pc == 0x1262D0u) {
        ctx->pc = 0x1262D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262CCu;
        // 0x1262d0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1262D4u;
        goto label_1262d4;
    }
    ctx->pc = 0x1262CCu;
    {
        const bool branch_taken_0x1262cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262CCu;
        // 0x1262d0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262cc) {
            ctx->pc = 0x126500u;
            goto label_126500;
        }
    }
    ctx->pc = 0x1262D4u;
label_1262d4:
    // 0x1262d4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1262d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1262d8:
    // 0x1262d8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1262d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1262dc:
    // 0x1262dc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1262dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1262e0:
    // 0x1262e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1262e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1262e4:
    // 0x1262e4: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x1262e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_1262e8:
    // 0x1262e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1262e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1262ec:
    // 0x1262ec: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1262ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1262f0:
    // 0x1262f0: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x1262f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_1262f4:
    // 0x1262f4: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1262f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
label_1262f8:
    // 0x1262f8: 0x10000088  b           . + 4 + (0x88 << 2)
label_1262fc:
    if (ctx->pc == 0x1262FCu) {
        ctx->pc = 0x1262FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262F8u;
        // 0x1262fc: 0xa24202f7  sb          $v0, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126300u;
        goto label_126300;
    }
    ctx->pc = 0x1262F8u;
    {
        const bool branch_taken_0x1262f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262F8u;
        // 0x1262fc: 0xa24202f7  sb          $v0, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262f8) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x126300u;
label_126300:
    // 0x126300: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x126300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_126304:
    // 0x126304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126308:
    // 0x126308: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_12630c:
    // 0x12630c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x12630cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126310:
    // 0x126310: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x126310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126314:
    // 0x126314: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126314u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126318:
    // 0x126318: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x126318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_12631c:
    // 0x12631c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x12631cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_126320:
    // 0x126320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126324:
    // 0x126324: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_126328:
    // 0x126328: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x126328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12632c:
    // 0x12632c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_126330:
    if (ctx->pc == 0x126330u) {
        ctx->pc = 0x126330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12632Cu;
        // 0x126330: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126334u;
        goto label_126334;
    }
    ctx->pc = 0x12632Cu;
    {
        const bool branch_taken_0x12632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12632Cu;
        // 0x126330: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12632c) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x126334u;
label_126334:
    // 0x126334: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x126334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_126338:
    // 0x126338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12633c:
    // 0x12633c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x12633cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126340:
    // 0x126340: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126344:
    // 0x126344: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x126344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126348:
    // 0x126348: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126348u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_12634c:
    // 0x12634c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x12634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_126350:
    // 0x126350: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x126350u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_126354:
    // 0x126354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126358:
    // 0x126358: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_12635c:
    // 0x12635c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12635cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126360:
    // 0x126360: 0x1000006d  b           . + 4 + (0x6D << 2)
label_126364:
    if (ctx->pc == 0x126364u) {
        ctx->pc = 0x126364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126360u;
        // 0x126364: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126368u;
        goto label_126368;
    }
    ctx->pc = 0x126360u;
    {
        const bool branch_taken_0x126360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126360u;
        // 0x126364: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126360) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x126368u;
label_126368:
    // 0x126368: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x126368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_12636c:
    // 0x12636c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12636cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126370:
    // 0x126370: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_126374:
    // 0x126374: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x126374u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_126378:
    // 0x126378: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x126378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12637c:
    // 0x12637c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12637cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_126380:
    // 0x126380: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126384:
    // 0x126384: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126384u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126388:
    // 0x126388: 0x1000006f  b           . + 4 + (0x6F << 2)
label_12638c:
    if (ctx->pc == 0x12638Cu) {
        ctx->pc = 0x12638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126388u;
        // 0x12638c: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126390u;
        goto label_126390;
    }
    ctx->pc = 0x126388u;
    {
        const bool branch_taken_0x126388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126388u;
        // 0x12638c: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126388) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126390u;
label_126390:
    // 0x126390: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_126394:
    // 0x126394: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x126394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_126398:
    // 0x126398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12639c:
    // 0x12639c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12639cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1263a0:
    // 0x1263a0: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x1263a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_1263a4:
    // 0x1263a4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1263a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1263a8:
    // 0x1263a8: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1263a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1263ac:
    // 0x1263ac: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1263acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1263b0:
    // 0x1263b0: 0xa25302f7  sb          $s3, 0x2F7($s2)
    ctx->pc = 0x1263b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 19));
label_1263b4:
    // 0x1263b4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1263b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1263b8:
    // 0x1263b8: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_1263bc:
    // 0x1263bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1263bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1263c0:
    // 0x1263c0: 0x10000055  b           . + 4 + (0x55 << 2)
label_1263c4:
    if (ctx->pc == 0x1263C4u) {
        ctx->pc = 0x1263C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263C0u;
        // 0x1263c4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1263C8u;
        goto label_1263c8;
    }
    ctx->pc = 0x1263C0u;
    {
        const bool branch_taken_0x1263c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263C0u;
        // 0x1263c4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263c0) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x1263C8u;
label_1263c8:
    // 0x1263c8: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x1263c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_1263cc:
    // 0x1263cc: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1263ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1263d0:
    // 0x1263d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1263d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1263d4:
    // 0x1263d4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1263d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1263d8:
    // 0x1263d8: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x1263d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_1263dc:
    // 0x1263dc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1263dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1263e0:
    // 0x1263e0: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1263e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1263e4:
    // 0x1263e4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1263e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1263e8:
    // 0x1263e8: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x1263e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_1263ec:
    // 0x1263ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1263ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1263f0:
    // 0x1263f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1263f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1263f4:
    // 0x1263f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1263f8:
    // 0x1263f8: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1263f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_1263fc:
    // 0x1263fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1263fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126400:
    // 0x126400: 0x10000046  b           . + 4 + (0x46 << 2)
label_126404:
    if (ctx->pc == 0x126404u) {
        ctx->pc = 0x126404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126400u;
        // 0x126404: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126408u;
        goto label_126408;
    }
    ctx->pc = 0x126400u;
    {
        const bool branch_taken_0x126400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126400u;
        // 0x126404: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126400) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x126408u;
label_126408:
    // 0x126408: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_12640c:
    // 0x12640c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x12640cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_126410:
    // 0x126410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126414:
    // 0x126414: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126418:
    // 0x126418: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126418u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_12641c:
    // 0x12641c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x12641cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126420:
    // 0x126420: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126420u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126424:
    // 0x126424: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x126424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_126428:
    // 0x126428: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_12642c:
    // 0x12642c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_126430:
    // 0x126430: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x126430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_126434:
    // 0x126434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126438:
    // 0x126438: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x126438u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_12643c:
    // 0x12643c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12643cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126440:
    // 0x126440: 0x10000036  b           . + 4 + (0x36 << 2)
label_126444:
    if (ctx->pc == 0x126444u) {
        ctx->pc = 0x126444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126440u;
        // 0x126444: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126448u;
        goto label_126448;
    }
    ctx->pc = 0x126440u;
    {
        const bool branch_taken_0x126440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126440u;
        // 0x126444: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126440) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x126448u;
label_126448:
    // 0x126448: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_12644c:
    // 0x12644c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x12644cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_126450:
    // 0x126450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126454:
    // 0x126454: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126458:
    // 0x126458: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126458u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_12645c:
    // 0x12645c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x12645cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126460:
    // 0x126460: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126460u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_126464:
    // 0x126464: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x126464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_126468:
    // 0x126468: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_12646c:
    // 0x12646c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_126470:
    // 0x126470: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x126470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_126474:
    // 0x126474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126478:
    // 0x126478: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x126478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_12647c:
    // 0x12647c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12647cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126480:
    // 0x126480: 0x10000026  b           . + 4 + (0x26 << 2)
label_126484:
    if (ctx->pc == 0x126484u) {
        ctx->pc = 0x126484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126480u;
        // 0x126484: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126488u;
        goto label_126488;
    }
    ctx->pc = 0x126480u;
    {
        const bool branch_taken_0x126480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126480u;
        // 0x126484: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126480) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x126488u;
label_126488:
    // 0x126488: 0x3c013fab  lui         $at, 0x3FAB
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16299 << 16));
label_12648c:
    // 0x12648c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_126490:
    // 0x126490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126494:
    // 0x126494: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_126498:
    // 0x126498: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_12649c:
    // 0x12649c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1264a0:
    // 0x1264a0: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1264a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1264a4:
    // 0x1264a4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1264a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1264a8:
    // 0x1264a8: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_1264ac:
    // 0x1264ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1264acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1264b0:
    // 0x1264b0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1264b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1264b4:
    // 0x1264b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1264b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1264b8:
    // 0x1264b8: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1264b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_1264bc:
    // 0x1264bc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1264bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1264c0:
    // 0x1264c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1264c4:
    if (ctx->pc == 0x1264C4u) {
        ctx->pc = 0x1264C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264C0u;
        // 0x1264c4: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264C8u;
        goto label_1264c8;
    }
    ctx->pc = 0x1264C0u;
    {
        const bool branch_taken_0x1264c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264C0u;
        // 0x1264c4: 0xa24302f7  sb          $v1, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264c0) {
            ctx->pc = 0x12651Cu;
            goto label_12651c;
        }
    }
    ctx->pc = 0x1264C8u;
label_1264c8:
    // 0x1264c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1264c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1264cc:
    // 0x1264cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1264d0:
    if (ctx->pc == 0x1264D0u) {
        ctx->pc = 0x1264D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264CCu;
        // 0x1264d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264D4u;
        goto label_1264d4;
    }
    ctx->pc = 0x1264CCu;
    {
        const bool branch_taken_0x1264cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264CCu;
        // 0x1264d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264cc) {
            ctx->pc = 0x126500u;
            goto label_126500;
        }
    }
    ctx->pc = 0x1264D4u;
label_1264d4:
    // 0x1264d4: 0x8e420640  lw          $v0, 0x640($s2)
    ctx->pc = 0x1264d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_1264d8:
    // 0x1264d8: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_1264dc:
    if (ctx->pc == 0x1264DCu) {
        ctx->pc = 0x1264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264D8u;
        // 0x1264dc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264E0u;
        goto label_1264e0;
    }
    ctx->pc = 0x1264D8u;
    {
        const bool branch_taken_0x1264d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264D8u;
        // 0x1264dc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264d8) {
            ctx->pc = 0x126750u;
            goto label_126750;
        }
    }
    ctx->pc = 0x1264E0u;
label_1264e0:
    // 0x1264e0: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1264e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_1264e4:
    // 0x1264e4: 0x8c4504ac  lw          $a1, 0x4AC($v0)
    ctx->pc = 0x1264e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
label_1264e8:
    // 0x1264e8: 0xc0e959e  jal         func_3A5678
label_1264ec:
    if (ctx->pc == 0x1264ECu) {
        ctx->pc = 0x1264ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264E8u;
        // 0x1264ec: 0x2484b940  addiu       $a0, $a0, -0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264F0u;
        goto label_1264f0;
    }
    ctx->pc = 0x1264E8u;
    SET_GPR_U32(ctx, 31, 0x1264F0u);
    ctx->pc = 0x1264ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264E8u;
    // 0x1264ec: 0x2484b940  addiu       $a0, $a0, -0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x1264E8u, 0x1264F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264F0u;
label_1264f0:
    // 0x1264f0: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_1264f4:
    if (ctx->pc == 0x1264F4u) {
        ctx->pc = 0x1264F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264F0u;
        // 0x1264f4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1264F8u;
        goto label_1264f8;
    }
    ctx->pc = 0x1264F0u;
    {
        const bool branch_taken_0x1264f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1264F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264F0u;
        // 0x1264f4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264f0) {
            ctx->pc = 0x126750u;
            goto label_126750;
        }
    }
    ctx->pc = 0x1264F8u;
label_1264f8:
    // 0x1264f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1264fc:
    // 0x1264fc: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_126500:
    // 0x126500: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x126500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_126504:
    // 0x126504: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x126504u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_126508:
    // 0x126508: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x126508u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_12650c:
    // 0x12650c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126510:
    // 0x126510: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x126510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_126514:
    // 0x126514: 0x8e45161c  lw          $a1, 0x161C($s2)
    ctx->pc = 0x126514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5660)));
label_126518:
    // 0x126518: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x126518u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_12651c:
    // 0x12651c: 0xc0b2ee8  jal         func_2CBBA0
label_126520:
    if (ctx->pc == 0x126520u) {
        ctx->pc = 0x126524u;
        goto label_126524;
    }
    ctx->pc = 0x12651Cu;
    SET_GPR_U32(ctx, 31, 0x126524u);
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x12651Cu, 0x126524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126524u;
label_126524:
    // 0x126524: 0xae40161c  sw          $zero, 0x161C($s2)
    ctx->pc = 0x126524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5660), GPR_U32(ctx, 0));
label_126528:
    // 0x126528: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x126528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
label_12652c:
    // 0x12652c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_126530:
    // 0x126530: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_126534:
    // 0x126534: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x126534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_126538:
    // 0x126538: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x126538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_12653c:
    // 0x12653c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x12653cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_126540:
    // 0x126540: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x126540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_126544:
    // 0x126544: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x126544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_126548:
    // 0x126548: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x126548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_12654c:
    // 0x12654c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12654cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126550:
    // 0x126550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126554:
    // 0x126554: 0xae40165c  sw          $zero, 0x165C($s2)
    ctx->pc = 0x126554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5724), GPR_U32(ctx, 0));
label_126558:
    // 0x126558: 0xc04ab0a  jal         func_12AC28
label_12655c:
    if (ctx->pc == 0x12655Cu) {
        ctx->pc = 0x12655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126558u;
        // 0x12655c: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126560u;
        goto label_126560;
    }
    ctx->pc = 0x126558u;
    SET_GPR_U32(ctx, 31, 0x126560u);
    ctx->pc = 0x12655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126558u;
    // 0x12655c: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x126558u, 0x126560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126560u;
label_126560:
    // 0x126560: 0xc04ae4a  jal         func_12B928
label_126564:
    if (ctx->pc == 0x126564u) {
        ctx->pc = 0x126564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126560u;
        // 0x126564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126568u;
        goto label_126568;
    }
    ctx->pc = 0x126560u;
    SET_GPR_U32(ctx, 31, 0x126568u);
    ctx->pc = 0x126564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126560u;
    // 0x126564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x126560u, 0x126568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126568u;
label_126568:
    // 0x126568: 0x8e450640  lw          $a1, 0x640($s2)
    ctx->pc = 0x126568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_12656c:
    // 0x12656c: 0x10a00077  beqz        $a1, . + 4 + (0x77 << 2)
label_126570:
    if (ctx->pc == 0x126570u) {
        ctx->pc = 0x126570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12656Cu;
        // 0x126570: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126574u;
        goto label_126574;
    }
    ctx->pc = 0x12656Cu;
    {
        const bool branch_taken_0x12656c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12656Cu;
        // 0x126570: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12656c) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x126574u;
label_126574:
    // 0x126574: 0x12600075  beqz        $s3, . + 4 + (0x75 << 2)
label_126578:
    if (ctx->pc == 0x126578u) {
        ctx->pc = 0x126578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126574u;
        // 0x126578: 0xa2420648  sb          $v0, 0x648($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1608), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12657Cu;
        goto label_12657c;
    }
    ctx->pc = 0x126574u;
    {
        const bool branch_taken_0x126574 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126574u;
        // 0x126578: 0xa2420648  sb          $v0, 0x648($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1608), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126574) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x12657Cu;
label_12657c:
    // 0x12657c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_126580:
    // 0x126580: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x126580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_126584:
    // 0x126584: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_126588:
    // 0x126588: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_12658c:
    // 0x12658c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_126590:
    // 0x126590: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x126590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_126594:
    // 0x126594: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_126598:
    // 0x126598: 0x40f809  jalr        $v0
label_12659c:
    if (ctx->pc == 0x12659Cu) {
        ctx->pc = 0x12659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126598u;
        // 0x12659c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265A0u;
        goto label_1265a0;
    }
    ctx->pc = 0x126598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1265A0u);
        ctx->pc = 0x12659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126598u;
        // 0x12659c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126598u, 0x1265A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1265A0u;
label_1265a0:
    // 0x1265a0: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x1265a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1265a4:
    // 0x1265a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1265a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1265a8:
    // 0x1265a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1265a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1265ac:
    // 0x1265ac: 0xc0b680e  jal         func_2DA038
label_1265b0:
    if (ctx->pc == 0x1265B0u) {
        ctx->pc = 0x1265B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265ACu;
        // 0x1265b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265B4u;
        goto label_1265b4;
    }
    ctx->pc = 0x1265ACu;
    SET_GPR_U32(ctx, 31, 0x1265B4u);
    ctx->pc = 0x1265B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265ACu;
    // 0x1265b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1265ACu, 0x1265B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265B4u;
label_1265b4:
    // 0x1265b4: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x1265b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1265b8:
    // 0x1265b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1265b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1265bc:
    // 0x1265bc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1265bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1265c0:
    // 0x1265c0: 0xc07df52  jal         func_1F7D48
label_1265c4:
    if (ctx->pc == 0x1265C4u) {
        ctx->pc = 0x1265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C0u;
        // 0x1265c4: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265C8u;
        goto label_1265c8;
    }
    ctx->pc = 0x1265C0u;
    SET_GPR_U32(ctx, 31, 0x1265C8u);
    ctx->pc = 0x1265C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265C0u;
    // 0x1265c4: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1265C0u, 0x1265C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265C8u;
label_1265c8:
    // 0x1265c8: 0x8e450640  lw          $a1, 0x640($s2)
    ctx->pc = 0x1265c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_1265cc:
    // 0x1265cc: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x1265ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_1265d0:
    // 0x1265d0: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x1265d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
label_1265d4:
    // 0x1265d4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1265d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1265d8:
    // 0x1265d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1265dc:
    if (ctx->pc == 0x1265DCu) {
        ctx->pc = 0x1265DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265D8u;
        // 0x1265dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265E0u;
        goto label_1265e0;
    }
    ctx->pc = 0x1265D8u;
    {
        const bool branch_taken_0x1265d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265D8u;
        // 0x1265dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265d8) {
            ctx->pc = 0x1265E8u;
            goto label_1265e8;
        }
    }
    ctx->pc = 0x1265E0u;
label_1265e0:
    // 0x1265e0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1265e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1265e4:
    // 0x1265e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1265e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1265e8:
    // 0x1265e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1265e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1265ec:
    // 0x1265ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1265f0:
    if (ctx->pc == 0x1265F0u) {
        ctx->pc = 0x1265F4u;
        goto label_1265f4;
    }
    ctx->pc = 0x1265ECu;
    {
        const bool branch_taken_0x1265ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265ec) {
            ctx->pc = 0x126668u;
            goto label_126668;
        }
    }
    ctx->pc = 0x1265F4u;
label_1265f4:
    // 0x1265f4: 0x8ca30564  lw          $v1, 0x564($a1)
    ctx->pc = 0x1265f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
label_1265f8:
    // 0x1265f8: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x1265f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
label_1265fc:
    // 0x1265fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_126600:
    if (ctx->pc == 0x126600u) {
        ctx->pc = 0x126600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265FCu;
        // 0x126600: 0x8ca30214  lw          $v1, 0x214($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126604u;
        goto label_126604;
    }
    ctx->pc = 0x1265FCu;
    {
        const bool branch_taken_0x1265fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1265fc) {
            ctx->pc = 0x126600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265FCu;
            // 0x126600: 0x8ca30214  lw          $v1, 0x214($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12661Cu;
            goto label_12661c;
        }
    }
    ctx->pc = 0x126604u;
label_126604:
    // 0x126604: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x126604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_126608:
    // 0x126608: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_12660c:
    if (ctx->pc == 0x12660Cu) {
        ctx->pc = 0x12660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126608u;
        // 0x12660c: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126610u;
        goto label_126610;
    }
    ctx->pc = 0x126608u;
    {
        const bool branch_taken_0x126608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126608u;
        // 0x12660c: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126608) {
            ctx->pc = 0x126668u;
            goto label_126668;
        }
    }
    ctx->pc = 0x126610u;
label_126610:
    // 0x126610: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_126614:
    if (ctx->pc == 0x126614u) {
        ctx->pc = 0x126618u;
        goto label_126618;
    }
    ctx->pc = 0x126610u;
    {
        const bool branch_taken_0x126610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x126610) {
            ctx->pc = 0x126668u;
            goto label_126668;
        }
    }
    ctx->pc = 0x126618u;
label_126618:
    // 0x126618: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12661c:
    // 0x12661c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12661cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_126620:
    // 0x126620: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x126620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_126624:
    // 0x126624: 0x40f809  jalr        $v0
label_126628:
    if (ctx->pc == 0x126628u) {
        ctx->pc = 0x126628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126624u;
        // 0x126628: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12662Cu;
        goto label_12662c;
    }
    ctx->pc = 0x126624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12662Cu);
        ctx->pc = 0x126628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126624u;
        // 0x126628: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126624u, 0x12662Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12662Cu;
label_12662c:
    // 0x12662c: 0x8e430640  lw          $v1, 0x640($s2)
    ctx->pc = 0x12662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_126630:
    // 0x126630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126634:
    // 0x126634: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_126638:
    // 0x126638: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x126638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_12663c:
    // 0x12663c: 0xc0b680e  jal         func_2DA038
label_126640:
    if (ctx->pc == 0x126640u) {
        ctx->pc = 0x126640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12663Cu;
        // 0x126640: 0xc46c0104  lwc1        $f12, 0x104($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126644u;
        goto label_126644;
    }
    ctx->pc = 0x12663Cu;
    SET_GPR_U32(ctx, 31, 0x126644u);
    ctx->pc = 0x126640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12663Cu;
    // 0x126640: 0xc46c0104  lwc1        $f12, 0x104($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x12663Cu, 0x126644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126644u;
label_126644:
    // 0x126644: 0x8e430640  lw          $v1, 0x640($s2)
    ctx->pc = 0x126644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_126648:
    // 0x126648: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x126648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12664c:
    // 0x12664c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12664cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_126650:
    // 0x126650: 0xe4610104  swc1        $f1, 0x104($v1)
    ctx->pc = 0x126650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_126654:
    // 0x126654: 0x8e420640  lw          $v0, 0x640($s2)
    ctx->pc = 0x126654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_126658:
    // 0x126658: 0xc07df52  jal         func_1F7D48
label_12665c:
    if (ctx->pc == 0x12665Cu) {
        ctx->pc = 0x12665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126658u;
        // 0x12665c: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126660u;
        goto label_126660;
    }
    ctx->pc = 0x126658u;
    SET_GPR_U32(ctx, 31, 0x126660u);
    ctx->pc = 0x12665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126658u;
    // 0x12665c: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x126658u, 0x126660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126660u;
label_126660:
    // 0x126660: 0x8e420640  lw          $v0, 0x640($s2)
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_126664:
    // 0x126664: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x126664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_126668:
    // 0x126668: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x126668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12666c:
    // 0x12666c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x12666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_126670:
    // 0x126670: 0x8e450640  lw          $a1, 0x640($s2)
    ctx->pc = 0x126670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_126674:
    // 0x126674: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x126674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_126678:
    // 0x126678: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x126678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12667c:
    // 0x12667c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12667cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_126680:
    // 0x126680: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_126684:
    // 0x126684: 0x40f809  jalr        $v0
label_126688:
    if (ctx->pc == 0x126688u) {
        ctx->pc = 0x126688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126684u;
        // 0x126688: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12668Cu;
        goto label_12668c;
    }
    ctx->pc = 0x126684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12668Cu);
        ctx->pc = 0x126688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126684u;
        // 0x126688: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126684u, 0x12668Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12668Cu;
label_12668c:
    // 0x12668c: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x12668cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_126690:
    // 0x126690: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x126690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_126694:
    // 0x126694: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x126694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_126698:
    // 0x126698: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x126698u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12669c:
    // 0x12669c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12669cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1266a0:
    // 0x1266a0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1266a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1266a4:
    // 0x1266a4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1266a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1266a8:
    // 0x1266a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1266a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1266ac:
    // 0x1266ac: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1266acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1266b0:
    // 0x1266b0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1266b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1266b4:
    // 0x1266b4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1266b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1266b8:
    // 0x1266b8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1266b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1266bc:
    // 0x1266bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1266bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1266c0:
    // 0x1266c0: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1266c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_1266c4:
    // 0x1266c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1266c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1266c8:
    // 0x1266c8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1266c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1266cc:
    // 0x1266cc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1266ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1266d0:
    // 0x1266d0: 0xc07e060  jal         func_1F8180
label_1266d4:
    if (ctx->pc == 0x1266D4u) {
        ctx->pc = 0x1266D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266D0u;
        // 0x1266d4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266D8u;
        goto label_1266d8;
    }
    ctx->pc = 0x1266D0u;
    SET_GPR_U32(ctx, 31, 0x1266D8u);
    ctx->pc = 0x1266D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266D0u;
    // 0x1266d4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1266D0u, 0x1266D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266D8u;
label_1266d8:
    // 0x1266d8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1266d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1266dc:
    // 0x1266dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1266dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1266e0:
    // 0x1266e0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1266e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1266e4:
    // 0x1266e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1266e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1266e8:
    // 0x1266e8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1266e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_1266ec:
    // 0x1266ec: 0xc051dca  jal         func_147728
label_1266f0:
    if (ctx->pc == 0x1266F0u) {
        ctx->pc = 0x1266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266ECu;
        // 0x1266f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1266F4u;
        goto label_1266f4;
    }
    ctx->pc = 0x1266ECu;
    SET_GPR_U32(ctx, 31, 0x1266F4u);
    ctx->pc = 0x1266F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266ECu;
    // 0x1266f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1266ECu, 0x1266F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266F4u;
label_1266f4:
    // 0x1266f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1266f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1266f8:
    // 0x1266f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1266f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1266fc:
    // 0x1266fc: 0xc0c28ac  jal         func_30A2B0
label_126700:
    if (ctx->pc == 0x126700u) {
        ctx->pc = 0x126700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266FCu;
        // 0x126700: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126704u;
        goto label_126704;
    }
    ctx->pc = 0x1266FCu;
    SET_GPR_U32(ctx, 31, 0x126704u);
    ctx->pc = 0x126700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266FCu;
    // 0x126700: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1266FCu, 0x126704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126704u;
label_126704:
    // 0x126704: 0x8e450640  lw          $a1, 0x640($s2)
    ctx->pc = 0x126704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
label_126708:
    // 0x126708: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x126708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12670c:
    // 0x12670c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12670cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_126710:
    // 0x126710: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x126710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_126714:
    // 0x126714: 0x40f809  jalr        $v0
label_126718:
    if (ctx->pc == 0x126718u) {
        ctx->pc = 0x126718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126714u;
        // 0x126718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12671Cu;
        goto label_12671c;
    }
    ctx->pc = 0x126714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12671Cu);
        ctx->pc = 0x126718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126714u;
        // 0x126718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126714u, 0x12671Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12671Cu;
label_12671c:
    // 0x12671c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12671cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_126720:
    // 0x126720: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x126720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_126724:
    // 0x126724: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126724u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_126728:
    // 0x126728: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x126728u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_12672c:
    // 0x12672c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12672cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_126730:
    // 0x126730: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_126734:
    // 0x126734: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x126734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126738:
    // 0x126738: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x126738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_12673c:
    // 0x12673c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_126740:
    // 0x126740: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x126740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_126744:
    // 0x126744: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x126744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126748:
    // 0x126748: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x126748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_12674c:
    // 0x12674c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x12674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_126750:
    // 0x126750: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x126750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_126754:
    // 0x126754: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x126754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_126758:
    // 0x126758: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x126758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_12675c:
    // 0x12675c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x12675cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_126760:
    // 0x126760: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_126764:
    // 0x126764: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x126764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_126768:
    // 0x126768: 0x3e00008  jr          $ra
label_12676c:
    if (ctx->pc == 0x12676Cu) {
        ctx->pc = 0x12676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126768u;
        // 0x12676c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126770u;
        goto label_fallthrough_0x126768;
    }
    ctx->pc = 0x126768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126768u;
        // 0x12676c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126768:
    ctx->pc = 0x126770u;
}
