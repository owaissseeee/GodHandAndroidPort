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

// Function: func_00158328
// Address: 0x158328 - 0x158cc8
void func_00158328_0x158328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00158328_0x158328");
#endif

    switch (ctx->pc) {
        case 0x158328u: goto label_158328;
        case 0x15832cu: goto label_15832c;
        case 0x158330u: goto label_158330;
        case 0x158334u: goto label_158334;
        case 0x158338u: goto label_158338;
        case 0x15833cu: goto label_15833c;
        case 0x158340u: goto label_158340;
        case 0x158344u: goto label_158344;
        case 0x158348u: goto label_158348;
        case 0x15834cu: goto label_15834c;
        case 0x158350u: goto label_158350;
        case 0x158354u: goto label_158354;
        case 0x158358u: goto label_158358;
        case 0x15835cu: goto label_15835c;
        case 0x158360u: goto label_158360;
        case 0x158364u: goto label_158364;
        case 0x158368u: goto label_158368;
        case 0x15836cu: goto label_15836c;
        case 0x158370u: goto label_158370;
        case 0x158374u: goto label_158374;
        case 0x158378u: goto label_158378;
        case 0x15837cu: goto label_15837c;
        case 0x158380u: goto label_158380;
        case 0x158384u: goto label_158384;
        case 0x158388u: goto label_158388;
        case 0x15838cu: goto label_15838c;
        case 0x158390u: goto label_158390;
        case 0x158394u: goto label_158394;
        case 0x158398u: goto label_158398;
        case 0x15839cu: goto label_15839c;
        case 0x1583a0u: goto label_1583a0;
        case 0x1583a4u: goto label_1583a4;
        case 0x1583a8u: goto label_1583a8;
        case 0x1583acu: goto label_1583ac;
        case 0x1583b0u: goto label_1583b0;
        case 0x1583b4u: goto label_1583b4;
        case 0x1583b8u: goto label_1583b8;
        case 0x1583bcu: goto label_1583bc;
        case 0x1583c0u: goto label_1583c0;
        case 0x1583c4u: goto label_1583c4;
        case 0x1583c8u: goto label_1583c8;
        case 0x1583ccu: goto label_1583cc;
        case 0x1583d0u: goto label_1583d0;
        case 0x1583d4u: goto label_1583d4;
        case 0x1583d8u: goto label_1583d8;
        case 0x1583dcu: goto label_1583dc;
        case 0x1583e0u: goto label_1583e0;
        case 0x1583e4u: goto label_1583e4;
        case 0x1583e8u: goto label_1583e8;
        case 0x1583ecu: goto label_1583ec;
        case 0x1583f0u: goto label_1583f0;
        case 0x1583f4u: goto label_1583f4;
        case 0x1583f8u: goto label_1583f8;
        case 0x1583fcu: goto label_1583fc;
        case 0x158400u: goto label_158400;
        case 0x158404u: goto label_158404;
        case 0x158408u: goto label_158408;
        case 0x15840cu: goto label_15840c;
        case 0x158410u: goto label_158410;
        case 0x158414u: goto label_158414;
        case 0x158418u: goto label_158418;
        case 0x15841cu: goto label_15841c;
        case 0x158420u: goto label_158420;
        case 0x158424u: goto label_158424;
        case 0x158428u: goto label_158428;
        case 0x15842cu: goto label_15842c;
        case 0x158430u: goto label_158430;
        case 0x158434u: goto label_158434;
        case 0x158438u: goto label_158438;
        case 0x15843cu: goto label_15843c;
        case 0x158440u: goto label_158440;
        case 0x158444u: goto label_158444;
        case 0x158448u: goto label_158448;
        case 0x15844cu: goto label_15844c;
        case 0x158450u: goto label_158450;
        case 0x158454u: goto label_158454;
        case 0x158458u: goto label_158458;
        case 0x15845cu: goto label_15845c;
        case 0x158460u: goto label_158460;
        case 0x158464u: goto label_158464;
        case 0x158468u: goto label_158468;
        case 0x15846cu: goto label_15846c;
        case 0x158470u: goto label_158470;
        case 0x158474u: goto label_158474;
        case 0x158478u: goto label_158478;
        case 0x15847cu: goto label_15847c;
        case 0x158480u: goto label_158480;
        case 0x158484u: goto label_158484;
        case 0x158488u: goto label_158488;
        case 0x15848cu: goto label_15848c;
        case 0x158490u: goto label_158490;
        case 0x158494u: goto label_158494;
        case 0x158498u: goto label_158498;
        case 0x15849cu: goto label_15849c;
        case 0x1584a0u: goto label_1584a0;
        case 0x1584a4u: goto label_1584a4;
        case 0x1584a8u: goto label_1584a8;
        case 0x1584acu: goto label_1584ac;
        case 0x1584b0u: goto label_1584b0;
        case 0x1584b4u: goto label_1584b4;
        case 0x1584b8u: goto label_1584b8;
        case 0x1584bcu: goto label_1584bc;
        case 0x1584c0u: goto label_1584c0;
        case 0x1584c4u: goto label_1584c4;
        case 0x1584c8u: goto label_1584c8;
        case 0x1584ccu: goto label_1584cc;
        case 0x1584d0u: goto label_1584d0;
        case 0x1584d4u: goto label_1584d4;
        case 0x1584d8u: goto label_1584d8;
        case 0x1584dcu: goto label_1584dc;
        case 0x1584e0u: goto label_1584e0;
        case 0x1584e4u: goto label_1584e4;
        case 0x1584e8u: goto label_1584e8;
        case 0x1584ecu: goto label_1584ec;
        case 0x1584f0u: goto label_1584f0;
        case 0x1584f4u: goto label_1584f4;
        case 0x1584f8u: goto label_1584f8;
        case 0x1584fcu: goto label_1584fc;
        case 0x158500u: goto label_158500;
        case 0x158504u: goto label_158504;
        case 0x158508u: goto label_158508;
        case 0x15850cu: goto label_15850c;
        case 0x158510u: goto label_158510;
        case 0x158514u: goto label_158514;
        case 0x158518u: goto label_158518;
        case 0x15851cu: goto label_15851c;
        case 0x158520u: goto label_158520;
        case 0x158524u: goto label_158524;
        case 0x158528u: goto label_158528;
        case 0x15852cu: goto label_15852c;
        case 0x158530u: goto label_158530;
        case 0x158534u: goto label_158534;
        case 0x158538u: goto label_158538;
        case 0x15853cu: goto label_15853c;
        case 0x158540u: goto label_158540;
        case 0x158544u: goto label_158544;
        case 0x158548u: goto label_158548;
        case 0x15854cu: goto label_15854c;
        case 0x158550u: goto label_158550;
        case 0x158554u: goto label_158554;
        case 0x158558u: goto label_158558;
        case 0x15855cu: goto label_15855c;
        case 0x158560u: goto label_158560;
        case 0x158564u: goto label_158564;
        case 0x158568u: goto label_158568;
        case 0x15856cu: goto label_15856c;
        case 0x158570u: goto label_158570;
        case 0x158574u: goto label_158574;
        case 0x158578u: goto label_158578;
        case 0x15857cu: goto label_15857c;
        case 0x158580u: goto label_158580;
        case 0x158584u: goto label_158584;
        case 0x158588u: goto label_158588;
        case 0x15858cu: goto label_15858c;
        case 0x158590u: goto label_158590;
        case 0x158594u: goto label_158594;
        case 0x158598u: goto label_158598;
        case 0x15859cu: goto label_15859c;
        case 0x1585a0u: goto label_1585a0;
        case 0x1585a4u: goto label_1585a4;
        case 0x1585a8u: goto label_1585a8;
        case 0x1585acu: goto label_1585ac;
        case 0x1585b0u: goto label_1585b0;
        case 0x1585b4u: goto label_1585b4;
        case 0x1585b8u: goto label_1585b8;
        case 0x1585bcu: goto label_1585bc;
        case 0x1585c0u: goto label_1585c0;
        case 0x1585c4u: goto label_1585c4;
        case 0x1585c8u: goto label_1585c8;
        case 0x1585ccu: goto label_1585cc;
        case 0x1585d0u: goto label_1585d0;
        case 0x1585d4u: goto label_1585d4;
        case 0x1585d8u: goto label_1585d8;
        case 0x1585dcu: goto label_1585dc;
        case 0x1585e0u: goto label_1585e0;
        case 0x1585e4u: goto label_1585e4;
        case 0x1585e8u: goto label_1585e8;
        case 0x1585ecu: goto label_1585ec;
        case 0x1585f0u: goto label_1585f0;
        case 0x1585f4u: goto label_1585f4;
        case 0x1585f8u: goto label_1585f8;
        case 0x1585fcu: goto label_1585fc;
        case 0x158600u: goto label_158600;
        case 0x158604u: goto label_158604;
        case 0x158608u: goto label_158608;
        case 0x15860cu: goto label_15860c;
        case 0x158610u: goto label_158610;
        case 0x158614u: goto label_158614;
        case 0x158618u: goto label_158618;
        case 0x15861cu: goto label_15861c;
        case 0x158620u: goto label_158620;
        case 0x158624u: goto label_158624;
        case 0x158628u: goto label_158628;
        case 0x15862cu: goto label_15862c;
        case 0x158630u: goto label_158630;
        case 0x158634u: goto label_158634;
        case 0x158638u: goto label_158638;
        case 0x15863cu: goto label_15863c;
        case 0x158640u: goto label_158640;
        case 0x158644u: goto label_158644;
        case 0x158648u: goto label_158648;
        case 0x15864cu: goto label_15864c;
        case 0x158650u: goto label_158650;
        case 0x158654u: goto label_158654;
        case 0x158658u: goto label_158658;
        case 0x15865cu: goto label_15865c;
        case 0x158660u: goto label_158660;
        case 0x158664u: goto label_158664;
        case 0x158668u: goto label_158668;
        case 0x15866cu: goto label_15866c;
        case 0x158670u: goto label_158670;
        case 0x158674u: goto label_158674;
        case 0x158678u: goto label_158678;
        case 0x15867cu: goto label_15867c;
        case 0x158680u: goto label_158680;
        case 0x158684u: goto label_158684;
        case 0x158688u: goto label_158688;
        case 0x15868cu: goto label_15868c;
        case 0x158690u: goto label_158690;
        case 0x158694u: goto label_158694;
        case 0x158698u: goto label_158698;
        case 0x15869cu: goto label_15869c;
        case 0x1586a0u: goto label_1586a0;
        case 0x1586a4u: goto label_1586a4;
        case 0x1586a8u: goto label_1586a8;
        case 0x1586acu: goto label_1586ac;
        case 0x1586b0u: goto label_1586b0;
        case 0x1586b4u: goto label_1586b4;
        case 0x1586b8u: goto label_1586b8;
        case 0x1586bcu: goto label_1586bc;
        case 0x1586c0u: goto label_1586c0;
        case 0x1586c4u: goto label_1586c4;
        case 0x1586c8u: goto label_1586c8;
        case 0x1586ccu: goto label_1586cc;
        case 0x1586d0u: goto label_1586d0;
        case 0x1586d4u: goto label_1586d4;
        case 0x1586d8u: goto label_1586d8;
        case 0x1586dcu: goto label_1586dc;
        case 0x1586e0u: goto label_1586e0;
        case 0x1586e4u: goto label_1586e4;
        case 0x1586e8u: goto label_1586e8;
        case 0x1586ecu: goto label_1586ec;
        case 0x1586f0u: goto label_1586f0;
        case 0x1586f4u: goto label_1586f4;
        case 0x1586f8u: goto label_1586f8;
        case 0x1586fcu: goto label_1586fc;
        case 0x158700u: goto label_158700;
        case 0x158704u: goto label_158704;
        case 0x158708u: goto label_158708;
        case 0x15870cu: goto label_15870c;
        case 0x158710u: goto label_158710;
        case 0x158714u: goto label_158714;
        case 0x158718u: goto label_158718;
        case 0x15871cu: goto label_15871c;
        case 0x158720u: goto label_158720;
        case 0x158724u: goto label_158724;
        case 0x158728u: goto label_158728;
        case 0x15872cu: goto label_15872c;
        case 0x158730u: goto label_158730;
        case 0x158734u: goto label_158734;
        case 0x158738u: goto label_158738;
        case 0x15873cu: goto label_15873c;
        case 0x158740u: goto label_158740;
        case 0x158744u: goto label_158744;
        case 0x158748u: goto label_158748;
        case 0x15874cu: goto label_15874c;
        case 0x158750u: goto label_158750;
        case 0x158754u: goto label_158754;
        case 0x158758u: goto label_158758;
        case 0x15875cu: goto label_15875c;
        case 0x158760u: goto label_158760;
        case 0x158764u: goto label_158764;
        case 0x158768u: goto label_158768;
        case 0x15876cu: goto label_15876c;
        case 0x158770u: goto label_158770;
        case 0x158774u: goto label_158774;
        case 0x158778u: goto label_158778;
        case 0x15877cu: goto label_15877c;
        case 0x158780u: goto label_158780;
        case 0x158784u: goto label_158784;
        case 0x158788u: goto label_158788;
        case 0x15878cu: goto label_15878c;
        case 0x158790u: goto label_158790;
        case 0x158794u: goto label_158794;
        case 0x158798u: goto label_158798;
        case 0x15879cu: goto label_15879c;
        case 0x1587a0u: goto label_1587a0;
        case 0x1587a4u: goto label_1587a4;
        case 0x1587a8u: goto label_1587a8;
        case 0x1587acu: goto label_1587ac;
        case 0x1587b0u: goto label_1587b0;
        case 0x1587b4u: goto label_1587b4;
        case 0x1587b8u: goto label_1587b8;
        case 0x1587bcu: goto label_1587bc;
        case 0x1587c0u: goto label_1587c0;
        case 0x1587c4u: goto label_1587c4;
        case 0x1587c8u: goto label_1587c8;
        case 0x1587ccu: goto label_1587cc;
        case 0x1587d0u: goto label_1587d0;
        case 0x1587d4u: goto label_1587d4;
        case 0x1587d8u: goto label_1587d8;
        case 0x1587dcu: goto label_1587dc;
        case 0x1587e0u: goto label_1587e0;
        case 0x1587e4u: goto label_1587e4;
        case 0x1587e8u: goto label_1587e8;
        case 0x1587ecu: goto label_1587ec;
        case 0x1587f0u: goto label_1587f0;
        case 0x1587f4u: goto label_1587f4;
        case 0x1587f8u: goto label_1587f8;
        case 0x1587fcu: goto label_1587fc;
        case 0x158800u: goto label_158800;
        case 0x158804u: goto label_158804;
        case 0x158808u: goto label_158808;
        case 0x15880cu: goto label_15880c;
        case 0x158810u: goto label_158810;
        case 0x158814u: goto label_158814;
        case 0x158818u: goto label_158818;
        case 0x15881cu: goto label_15881c;
        case 0x158820u: goto label_158820;
        case 0x158824u: goto label_158824;
        case 0x158828u: goto label_158828;
        case 0x15882cu: goto label_15882c;
        case 0x158830u: goto label_158830;
        case 0x158834u: goto label_158834;
        case 0x158838u: goto label_158838;
        case 0x15883cu: goto label_15883c;
        case 0x158840u: goto label_158840;
        case 0x158844u: goto label_158844;
        case 0x158848u: goto label_158848;
        case 0x15884cu: goto label_15884c;
        case 0x158850u: goto label_158850;
        case 0x158854u: goto label_158854;
        case 0x158858u: goto label_158858;
        case 0x15885cu: goto label_15885c;
        case 0x158860u: goto label_158860;
        case 0x158864u: goto label_158864;
        case 0x158868u: goto label_158868;
        case 0x15886cu: goto label_15886c;
        case 0x158870u: goto label_158870;
        case 0x158874u: goto label_158874;
        case 0x158878u: goto label_158878;
        case 0x15887cu: goto label_15887c;
        case 0x158880u: goto label_158880;
        case 0x158884u: goto label_158884;
        case 0x158888u: goto label_158888;
        case 0x15888cu: goto label_15888c;
        case 0x158890u: goto label_158890;
        case 0x158894u: goto label_158894;
        case 0x158898u: goto label_158898;
        case 0x15889cu: goto label_15889c;
        case 0x1588a0u: goto label_1588a0;
        case 0x1588a4u: goto label_1588a4;
        case 0x1588a8u: goto label_1588a8;
        case 0x1588acu: goto label_1588ac;
        case 0x1588b0u: goto label_1588b0;
        case 0x1588b4u: goto label_1588b4;
        case 0x1588b8u: goto label_1588b8;
        case 0x1588bcu: goto label_1588bc;
        case 0x1588c0u: goto label_1588c0;
        case 0x1588c4u: goto label_1588c4;
        case 0x1588c8u: goto label_1588c8;
        case 0x1588ccu: goto label_1588cc;
        case 0x1588d0u: goto label_1588d0;
        case 0x1588d4u: goto label_1588d4;
        case 0x1588d8u: goto label_1588d8;
        case 0x1588dcu: goto label_1588dc;
        case 0x1588e0u: goto label_1588e0;
        case 0x1588e4u: goto label_1588e4;
        case 0x1588e8u: goto label_1588e8;
        case 0x1588ecu: goto label_1588ec;
        case 0x1588f0u: goto label_1588f0;
        case 0x1588f4u: goto label_1588f4;
        case 0x1588f8u: goto label_1588f8;
        case 0x1588fcu: goto label_1588fc;
        case 0x158900u: goto label_158900;
        case 0x158904u: goto label_158904;
        case 0x158908u: goto label_158908;
        case 0x15890cu: goto label_15890c;
        case 0x158910u: goto label_158910;
        case 0x158914u: goto label_158914;
        case 0x158918u: goto label_158918;
        case 0x15891cu: goto label_15891c;
        case 0x158920u: goto label_158920;
        case 0x158924u: goto label_158924;
        case 0x158928u: goto label_158928;
        case 0x15892cu: goto label_15892c;
        case 0x158930u: goto label_158930;
        case 0x158934u: goto label_158934;
        case 0x158938u: goto label_158938;
        case 0x15893cu: goto label_15893c;
        case 0x158940u: goto label_158940;
        case 0x158944u: goto label_158944;
        case 0x158948u: goto label_158948;
        case 0x15894cu: goto label_15894c;
        case 0x158950u: goto label_158950;
        case 0x158954u: goto label_158954;
        case 0x158958u: goto label_158958;
        case 0x15895cu: goto label_15895c;
        case 0x158960u: goto label_158960;
        case 0x158964u: goto label_158964;
        case 0x158968u: goto label_158968;
        case 0x15896cu: goto label_15896c;
        case 0x158970u: goto label_158970;
        case 0x158974u: goto label_158974;
        case 0x158978u: goto label_158978;
        case 0x15897cu: goto label_15897c;
        case 0x158980u: goto label_158980;
        case 0x158984u: goto label_158984;
        case 0x158988u: goto label_158988;
        case 0x15898cu: goto label_15898c;
        case 0x158990u: goto label_158990;
        case 0x158994u: goto label_158994;
        case 0x158998u: goto label_158998;
        case 0x15899cu: goto label_15899c;
        case 0x1589a0u: goto label_1589a0;
        case 0x1589a4u: goto label_1589a4;
        case 0x1589a8u: goto label_1589a8;
        case 0x1589acu: goto label_1589ac;
        case 0x1589b0u: goto label_1589b0;
        case 0x1589b4u: goto label_1589b4;
        case 0x1589b8u: goto label_1589b8;
        case 0x1589bcu: goto label_1589bc;
        case 0x1589c0u: goto label_1589c0;
        case 0x1589c4u: goto label_1589c4;
        case 0x1589c8u: goto label_1589c8;
        case 0x1589ccu: goto label_1589cc;
        case 0x1589d0u: goto label_1589d0;
        case 0x1589d4u: goto label_1589d4;
        case 0x1589d8u: goto label_1589d8;
        case 0x1589dcu: goto label_1589dc;
        case 0x1589e0u: goto label_1589e0;
        case 0x1589e4u: goto label_1589e4;
        case 0x1589e8u: goto label_1589e8;
        case 0x1589ecu: goto label_1589ec;
        case 0x1589f0u: goto label_1589f0;
        case 0x1589f4u: goto label_1589f4;
        case 0x1589f8u: goto label_1589f8;
        case 0x1589fcu: goto label_1589fc;
        case 0x158a00u: goto label_158a00;
        case 0x158a04u: goto label_158a04;
        case 0x158a08u: goto label_158a08;
        case 0x158a0cu: goto label_158a0c;
        case 0x158a10u: goto label_158a10;
        case 0x158a14u: goto label_158a14;
        case 0x158a18u: goto label_158a18;
        case 0x158a1cu: goto label_158a1c;
        case 0x158a20u: goto label_158a20;
        case 0x158a24u: goto label_158a24;
        case 0x158a28u: goto label_158a28;
        case 0x158a2cu: goto label_158a2c;
        case 0x158a30u: goto label_158a30;
        case 0x158a34u: goto label_158a34;
        case 0x158a38u: goto label_158a38;
        case 0x158a3cu: goto label_158a3c;
        case 0x158a40u: goto label_158a40;
        case 0x158a44u: goto label_158a44;
        case 0x158a48u: goto label_158a48;
        case 0x158a4cu: goto label_158a4c;
        case 0x158a50u: goto label_158a50;
        case 0x158a54u: goto label_158a54;
        case 0x158a58u: goto label_158a58;
        case 0x158a5cu: goto label_158a5c;
        case 0x158a60u: goto label_158a60;
        case 0x158a64u: goto label_158a64;
        case 0x158a68u: goto label_158a68;
        case 0x158a6cu: goto label_158a6c;
        case 0x158a70u: goto label_158a70;
        case 0x158a74u: goto label_158a74;
        case 0x158a78u: goto label_158a78;
        case 0x158a7cu: goto label_158a7c;
        case 0x158a80u: goto label_158a80;
        case 0x158a84u: goto label_158a84;
        case 0x158a88u: goto label_158a88;
        case 0x158a8cu: goto label_158a8c;
        case 0x158a90u: goto label_158a90;
        case 0x158a94u: goto label_158a94;
        case 0x158a98u: goto label_158a98;
        case 0x158a9cu: goto label_158a9c;
        case 0x158aa0u: goto label_158aa0;
        case 0x158aa4u: goto label_158aa4;
        case 0x158aa8u: goto label_158aa8;
        case 0x158aacu: goto label_158aac;
        case 0x158ab0u: goto label_158ab0;
        case 0x158ab4u: goto label_158ab4;
        case 0x158ab8u: goto label_158ab8;
        case 0x158abcu: goto label_158abc;
        case 0x158ac0u: goto label_158ac0;
        case 0x158ac4u: goto label_158ac4;
        case 0x158ac8u: goto label_158ac8;
        case 0x158accu: goto label_158acc;
        case 0x158ad0u: goto label_158ad0;
        case 0x158ad4u: goto label_158ad4;
        case 0x158ad8u: goto label_158ad8;
        case 0x158adcu: goto label_158adc;
        case 0x158ae0u: goto label_158ae0;
        case 0x158ae4u: goto label_158ae4;
        case 0x158ae8u: goto label_158ae8;
        case 0x158aecu: goto label_158aec;
        case 0x158af0u: goto label_158af0;
        case 0x158af4u: goto label_158af4;
        case 0x158af8u: goto label_158af8;
        case 0x158afcu: goto label_158afc;
        case 0x158b00u: goto label_158b00;
        case 0x158b04u: goto label_158b04;
        case 0x158b08u: goto label_158b08;
        case 0x158b0cu: goto label_158b0c;
        case 0x158b10u: goto label_158b10;
        case 0x158b14u: goto label_158b14;
        case 0x158b18u: goto label_158b18;
        case 0x158b1cu: goto label_158b1c;
        case 0x158b20u: goto label_158b20;
        case 0x158b24u: goto label_158b24;
        case 0x158b28u: goto label_158b28;
        case 0x158b2cu: goto label_158b2c;
        case 0x158b30u: goto label_158b30;
        case 0x158b34u: goto label_158b34;
        case 0x158b38u: goto label_158b38;
        case 0x158b3cu: goto label_158b3c;
        case 0x158b40u: goto label_158b40;
        case 0x158b44u: goto label_158b44;
        case 0x158b48u: goto label_158b48;
        case 0x158b4cu: goto label_158b4c;
        case 0x158b50u: goto label_158b50;
        case 0x158b54u: goto label_158b54;
        case 0x158b58u: goto label_158b58;
        case 0x158b5cu: goto label_158b5c;
        case 0x158b60u: goto label_158b60;
        case 0x158b64u: goto label_158b64;
        case 0x158b68u: goto label_158b68;
        case 0x158b6cu: goto label_158b6c;
        case 0x158b70u: goto label_158b70;
        case 0x158b74u: goto label_158b74;
        case 0x158b78u: goto label_158b78;
        case 0x158b7cu: goto label_158b7c;
        case 0x158b80u: goto label_158b80;
        case 0x158b84u: goto label_158b84;
        case 0x158b88u: goto label_158b88;
        case 0x158b8cu: goto label_158b8c;
        case 0x158b90u: goto label_158b90;
        case 0x158b94u: goto label_158b94;
        case 0x158b98u: goto label_158b98;
        case 0x158b9cu: goto label_158b9c;
        case 0x158ba0u: goto label_158ba0;
        case 0x158ba4u: goto label_158ba4;
        case 0x158ba8u: goto label_158ba8;
        case 0x158bacu: goto label_158bac;
        case 0x158bb0u: goto label_158bb0;
        case 0x158bb4u: goto label_158bb4;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bbcu: goto label_158bbc;
        case 0x158bc0u: goto label_158bc0;
        case 0x158bc4u: goto label_158bc4;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bccu: goto label_158bcc;
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c50u: goto label_158c50;
        case 0x158c54u: goto label_158c54;
        case 0x158c58u: goto label_158c58;
        case 0x158c5cu: goto label_158c5c;
        case 0x158c60u: goto label_158c60;
        case 0x158c64u: goto label_158c64;
        case 0x158c68u: goto label_158c68;
        case 0x158c6cu: goto label_158c6c;
        case 0x158c70u: goto label_158c70;
        case 0x158c74u: goto label_158c74;
        case 0x158c78u: goto label_158c78;
        case 0x158c7cu: goto label_158c7c;
        case 0x158c80u: goto label_158c80;
        case 0x158c84u: goto label_158c84;
        case 0x158c88u: goto label_158c88;
        case 0x158c8cu: goto label_158c8c;
        case 0x158c90u: goto label_158c90;
        case 0x158c94u: goto label_158c94;
        case 0x158c98u: goto label_158c98;
        case 0x158c9cu: goto label_158c9c;
        case 0x158ca0u: goto label_158ca0;
        case 0x158ca4u: goto label_158ca4;
        case 0x158ca8u: goto label_158ca8;
        case 0x158cacu: goto label_158cac;
        case 0x158cb0u: goto label_158cb0;
        case 0x158cb4u: goto label_158cb4;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cbcu: goto label_158cbc;
        case 0x158cc0u: goto label_158cc0;
        case 0x158cc4u: goto label_158cc4;
        default: break;
    }

    ctx->pc = 0x158328u;

label_158328:
    // 0x158328: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_15832c:
    // 0x15832c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x15832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_158330:
    // 0x158330: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x158330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_158334:
    // 0x158334: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x158334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_158338:
    // 0x158338: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x158338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_15833c:
    // 0x15833c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15833cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158340:
    // 0x158340: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x158340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_158344:
    // 0x158344: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x158344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_158348:
    // 0x158348: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x158348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_15834c:
    // 0x15834c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x15834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_158350:
    // 0x158350: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x158350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_158354:
    // 0x158354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_158358:
    // 0x158358: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x158358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_15835c:
    // 0x15835c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x15835cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_158360:
    // 0x158360: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x158360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_158364:
    // 0x158364: 0x8e750428  lw          $s5, 0x428($s3)
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1064)));
label_158368:
    // 0x158368: 0x96630434  lhu         $v1, 0x434($s3)
    ctx->pc = 0x158368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1076)));
label_15836c:
    // 0x15836c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_158370:
    // 0x158370: 0x26b00008  addiu       $s0, $s5, 0x8
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_158374:
    // 0x158374: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x158374u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_158378:
    // 0x158378: 0xc6740430  lwc1        $f20, 0x430($s3)
    ctx->pc = 0x158378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15837c:
    // 0x15837c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x15837cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_158380:
    // 0x158380: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_158384:
    if (ctx->pc == 0x158384u) {
        ctx->pc = 0x158384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158380u;
        // 0x158384: 0x307e0001  andi        $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158388u;
        goto label_158388;
    }
    ctx->pc = 0x158380u;
    {
        const bool branch_taken_0x158380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x158384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158380u;
        // 0x158384: 0x307e0001  andi        $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158380) {
            ctx->pc = 0x1583A8u;
            goto label_1583a8;
        }
    }
    ctx->pc = 0x158388u;
label_158388:
    // 0x158388: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x158388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15838c:
    // 0x15838c: 0x266401b4  addiu       $a0, $s3, 0x1B4
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
label_158390:
    // 0x158390: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x158390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158394:
    // 0x158394: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158398:
    // 0x158398: 0xc0566b4  jal         func_159AD0
label_15839c:
    if (ctx->pc == 0x15839Cu) {
        ctx->pc = 0x15839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158398u;
        // 0x15839c: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583A0u;
        goto label_1583a0;
    }
    ctx->pc = 0x158398u;
    SET_GPR_U32(ctx, 31, 0x1583A0u);
    ctx->pc = 0x15839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158398u;
    // 0x15839c: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x158398u, 0x1583A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A0u;
label_1583a0:
    // 0x1583a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1583a4:
    if (ctx->pc == 0x1583A4u) {
        ctx->pc = 0x1583A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583A0u;
        // 0x1583a4: 0xe6600310  swc1        $f0, 0x310($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 784), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583A8u;
        goto label_1583a8;
    }
    ctx->pc = 0x1583A0u;
    {
        const bool branch_taken_0x1583a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583A0u;
        // 0x1583a4: 0xe6600310  swc1        $f0, 0x310($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583a0) {
            ctx->pc = 0x1583B4u;
            goto label_1583b4;
        }
    }
    ctx->pc = 0x1583A8u;
label_1583a8:
    // 0x1583a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1583a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1583ac:
    // 0x1583ac: 0x0  nop
    ctx->pc = 0x1583acu;
    // NOP
label_1583b0:
    // 0x1583b0: 0xe6600310  swc1        $f0, 0x310($s3)
    ctx->pc = 0x1583b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 784), bits); }
label_1583b4:
    // 0x1583b4: 0x53c00004  beql        $fp, $zero, . + 4 + (0x4 << 2)
label_1583b8:
    if (ctx->pc == 0x1583B8u) {
        ctx->pc = 0x1583B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583B4u;
        // 0x1583b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583BCu;
        goto label_1583bc;
    }
    ctx->pc = 0x1583B4u;
    {
        const bool branch_taken_0x1583b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583b4) {
            ctx->pc = 0x1583B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1583B4u;
            // 0x1583b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1583C8u;
            goto label_1583c8;
        }
    }
    ctx->pc = 0x1583BCu;
label_1583bc:
    // 0x1583bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1583bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1583c0:
    // 0x1583c0: 0xe6600310  swc1        $f0, 0x310($s3)
    ctx->pc = 0x1583c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 784), bits); }
label_1583c4:
    // 0x1583c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1583c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1583c8:
    // 0x1583c8: 0x240301ff  addiu       $v1, $zero, 0x1FF
    ctx->pc = 0x1583c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_1583cc:
    // 0x1583cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1583ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1583d0:
    // 0x1583d0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1583d4:
    if (ctx->pc == 0x1583D4u) {
        ctx->pc = 0x1583D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583D0u;
        // 0x1583d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583D8u;
        goto label_1583d8;
    }
    ctx->pc = 0x1583D0u;
    {
        const bool branch_taken_0x1583d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1583D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583D0u;
        // 0x1583d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583d0) {
            ctx->pc = 0x1583F4u;
            goto label_1583f4;
        }
    }
    ctx->pc = 0x1583D8u;
label_1583d8:
    // 0x1583d8: 0x266401d4  addiu       $a0, $s3, 0x1D4
    ctx->pc = 0x1583d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 468));
label_1583dc:
    // 0x1583dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1583dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1583e0:
    // 0x1583e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1583e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1583e4:
    // 0x1583e4: 0xc0566b4  jal         func_159AD0
label_1583e8:
    if (ctx->pc == 0x1583E8u) {
        ctx->pc = 0x1583E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583E4u;
        // 0x1583e8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583ECu;
        goto label_1583ec;
    }
    ctx->pc = 0x1583E4u;
    SET_GPR_U32(ctx, 31, 0x1583ECu);
    ctx->pc = 0x1583E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583E4u;
    // 0x1583e8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x1583E4u, 0x1583ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583ECu;
label_1583ec:
    // 0x1583ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1583f0:
    if (ctx->pc == 0x1583F0u) {
        ctx->pc = 0x1583F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583ECu;
        // 0x1583f0: 0xe6600314  swc1        $f0, 0x314($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583F4u;
        goto label_1583f4;
    }
    ctx->pc = 0x1583ECu;
    {
        const bool branch_taken_0x1583ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583ECu;
        // 0x1583f0: 0xe6600314  swc1        $f0, 0x314($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583ec) {
            ctx->pc = 0x158400u;
            goto label_158400;
        }
    }
    ctx->pc = 0x1583F4u;
label_1583f4:
    // 0x1583f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1583f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1583f8:
    // 0x1583f8: 0x0  nop
    ctx->pc = 0x1583f8u;
    // NOP
label_1583fc:
    // 0x1583fc: 0xe6600314  swc1        $f0, 0x314($s3)
    ctx->pc = 0x1583fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
label_158400:
    // 0x158400: 0x240302ff  addiu       $v1, $zero, 0x2FF
    ctx->pc = 0x158400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
label_158404:
    // 0x158404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158408:
    // 0x158408: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x158408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_15840c:
    // 0x15840c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_158410:
    if (ctx->pc == 0x158410u) {
        ctx->pc = 0x158410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15840Cu;
        // 0x158410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158414u;
        goto label_158414;
    }
    ctx->pc = 0x15840Cu;
    {
        const bool branch_taken_0x15840c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x158410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15840Cu;
        // 0x158410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15840c) {
            ctx->pc = 0x158430u;
            goto label_158430;
        }
    }
    ctx->pc = 0x158414u;
label_158414:
    // 0x158414: 0x266401f4  addiu       $a0, $s3, 0x1F4
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 500));
label_158418:
    // 0x158418: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x158418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15841c:
    // 0x15841c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15841cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158420:
    // 0x158420: 0xc0566b4  jal         func_159AD0
label_158424:
    if (ctx->pc == 0x158424u) {
        ctx->pc = 0x158424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158420u;
        // 0x158424: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158428u;
        goto label_158428;
    }
    ctx->pc = 0x158420u;
    SET_GPR_U32(ctx, 31, 0x158428u);
    ctx->pc = 0x158424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158420u;
    // 0x158424: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x158420u, 0x158428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158428u;
label_158428:
    // 0x158428: 0x10000004  b           . + 4 + (0x4 << 2)
label_15842c:
    if (ctx->pc == 0x15842Cu) {
        ctx->pc = 0x15842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158428u;
        // 0x15842c: 0xe6600318  swc1        $f0, 0x318($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158430u;
        goto label_158430;
    }
    ctx->pc = 0x158428u;
    {
        const bool branch_taken_0x158428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158428u;
        // 0x15842c: 0xe6600318  swc1        $f0, 0x318($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 792), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158428) {
            ctx->pc = 0x15843Cu;
            goto label_15843c;
        }
    }
    ctx->pc = 0x158430u;
label_158430:
    // 0x158430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158434:
    // 0x158434: 0x0  nop
    ctx->pc = 0x158434u;
    // NOP
label_158438:
    // 0x158438: 0xe6600318  swc1        $f0, 0x318($s3)
    ctx->pc = 0x158438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 792), bits); }
label_15843c:
    // 0x15843c: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_158440:
    // 0x158440: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158444:
    // 0x158444: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x158444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_158448:
    // 0x158448: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_15844c:
    if (ctx->pc == 0x15844Cu) {
        ctx->pc = 0x15844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158448u;
        // 0x15844c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158450u;
        goto label_158450;
    }
    ctx->pc = 0x158448u;
    {
        const bool branch_taken_0x158448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158448u;
        // 0x15844c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158448) {
            ctx->pc = 0x158480u;
            goto label_158480;
        }
    }
    ctx->pc = 0x158450u;
label_158450:
    // 0x158450: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x158450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_158454:
    // 0x158454: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x158454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_158458:
    // 0x158458: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x158458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_15845c:
    // 0x15845c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_158460:
    // 0x158460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158464:
    // 0x158464: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x158464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_158468:
    // 0x158468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15846c:
    // 0x15846c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15846cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158470:
    // 0x158470: 0x40f809  jalr        $v0
label_158474:
    if (ctx->pc == 0x158474u) {
        ctx->pc = 0x158474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158470u;
        // 0x158474: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158478u;
        goto label_158478;
    }
    ctx->pc = 0x158470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158478u);
        ctx->pc = 0x158474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158470u;
        // 0x158474: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158470u, 0x158478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158478u;
label_158478:
    // 0x158478: 0x10000004  b           . + 4 + (0x4 << 2)
label_15847c:
    if (ctx->pc == 0x15847Cu) {
        ctx->pc = 0x15847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158478u;
        // 0x15847c: 0xe6600340  swc1        $f0, 0x340($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 832), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158480u;
        goto label_158480;
    }
    ctx->pc = 0x158478u;
    {
        const bool branch_taken_0x158478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158478u;
        // 0x15847c: 0xe6600340  swc1        $f0, 0x340($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 832), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158478) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158480u;
label_158480:
    // 0x158480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158484:
    // 0x158484: 0x0  nop
    ctx->pc = 0x158484u;
    // NOP
label_158488:
    // 0x158488: 0xe6600340  swc1        $f0, 0x340($s3)
    ctx->pc = 0x158488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 832), bits); }
label_15848c:
    // 0x15848c: 0x240304ff  addiu       $v1, $zero, 0x4FF
    ctx->pc = 0x15848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1279));
label_158490:
    // 0x158490: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158494:
    // 0x158494: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x158494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_158498:
    // 0x158498: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_15849c:
    if (ctx->pc == 0x15849Cu) {
        ctx->pc = 0x15849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158498u;
        // 0x15849c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584A0u;
        goto label_1584a0;
    }
    ctx->pc = 0x158498u;
    {
        const bool branch_taken_0x158498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158498u;
        // 0x15849c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158498) {
            ctx->pc = 0x1584D0u;
            goto label_1584d0;
        }
    }
    ctx->pc = 0x1584A0u;
label_1584a0:
    // 0x1584a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1584a4:
    // 0x1584a4: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x1584a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_1584a8:
    // 0x1584a8: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x1584a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_1584ac:
    // 0x1584ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1584acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1584b0:
    // 0x1584b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1584b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1584b4:
    // 0x1584b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1584b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1584b8:
    // 0x1584b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1584b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1584bc:
    // 0x1584bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1584bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1584c0:
    // 0x1584c0: 0x40f809  jalr        $v0
label_1584c4:
    if (ctx->pc == 0x1584C4u) {
        ctx->pc = 0x1584C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584C0u;
        // 0x1584c4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584C8u;
        goto label_1584c8;
    }
    ctx->pc = 0x1584C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1584C8u);
        ctx->pc = 0x1584C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584C0u;
        // 0x1584c4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1584C0u, 0x1584C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1584C8u;
label_1584c8:
    // 0x1584c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1584cc:
    if (ctx->pc == 0x1584CCu) {
        ctx->pc = 0x1584CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584C8u;
        // 0x1584cc: 0xe6600344  swc1        $f0, 0x344($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584D0u;
        goto label_1584d0;
    }
    ctx->pc = 0x1584C8u;
    {
        const bool branch_taken_0x1584c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584C8u;
        // 0x1584cc: 0xe6600344  swc1        $f0, 0x344($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584c8) {
            ctx->pc = 0x1584DCu;
            goto label_1584dc;
        }
    }
    ctx->pc = 0x1584D0u;
label_1584d0:
    // 0x1584d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1584d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1584d4:
    // 0x1584d4: 0x0  nop
    ctx->pc = 0x1584d4u;
    // NOP
label_1584d8:
    // 0x1584d8: 0xe6600344  swc1        $f0, 0x344($s3)
    ctx->pc = 0x1584d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
label_1584dc:
    // 0x1584dc: 0x240305ff  addiu       $v1, $zero, 0x5FF
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1535));
label_1584e0:
    // 0x1584e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1584e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1584e4:
    // 0x1584e4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1584e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_1584e8:
    // 0x1584e8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1584ec:
    if (ctx->pc == 0x1584ECu) {
        ctx->pc = 0x1584ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584E8u;
        // 0x1584ec: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584F0u;
        goto label_1584f0;
    }
    ctx->pc = 0x1584E8u;
    {
        const bool branch_taken_0x1584e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1584ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584E8u;
        // 0x1584ec: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584e8) {
            ctx->pc = 0x158520u;
            goto label_158520;
        }
    }
    ctx->pc = 0x1584F0u;
label_1584f0:
    // 0x1584f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1584f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1584f4:
    // 0x1584f4: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x1584f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_1584f8:
    // 0x1584f8: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x1584f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_1584fc:
    // 0x1584fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1584fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_158500:
    // 0x158500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158504:
    // 0x158504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_158508:
    // 0x158508: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15850c:
    // 0x15850c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15850cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158510:
    // 0x158510: 0x40f809  jalr        $v0
label_158514:
    if (ctx->pc == 0x158514u) {
        ctx->pc = 0x158514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158510u;
        // 0x158514: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158518u;
        goto label_158518;
    }
    ctx->pc = 0x158510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158518u);
        ctx->pc = 0x158514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158510u;
        // 0x158514: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158510u, 0x158518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158518u;
label_158518:
    // 0x158518: 0x10000004  b           . + 4 + (0x4 << 2)
label_15851c:
    if (ctx->pc == 0x15851Cu) {
        ctx->pc = 0x15851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158518u;
        // 0x15851c: 0xe6600348  swc1        $f0, 0x348($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 840), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158520u;
        goto label_158520;
    }
    ctx->pc = 0x158518u;
    {
        const bool branch_taken_0x158518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158518u;
        // 0x15851c: 0xe6600348  swc1        $f0, 0x348($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 840), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158518) {
            ctx->pc = 0x15852Cu;
            goto label_15852c;
        }
    }
    ctx->pc = 0x158520u;
label_158520:
    // 0x158520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_158524:
    // 0x158524: 0x0  nop
    ctx->pc = 0x158524u;
    // NOP
label_158528:
    // 0x158528: 0xe6600348  swc1        $f0, 0x348($s3)
    ctx->pc = 0x158528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 840), bits); }
label_15852c:
    // 0x15852c: 0xc07df68  jal         func_1F7DA0
label_158530:
    if (ctx->pc == 0x158530u) {
        ctx->pc = 0x158530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15852Cu;
        // 0x158530: 0x26640340  addiu       $a0, $s3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158534u;
        goto label_158534;
    }
    ctx->pc = 0x15852Cu;
    SET_GPR_U32(ctx, 31, 0x158534u);
    ctx->pc = 0x158530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15852Cu;
    // 0x158530: 0x26640340  addiu       $a0, $s3, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x15852Cu, 0x158534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158534u;
label_158534:
    // 0x158534: 0x53c00008  beql        $fp, $zero, . + 4 + (0x8 << 2)
label_158538:
    if (ctx->pc == 0x158538u) {
        ctx->pc = 0x158538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158534u;
        // 0x158538: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15853Cu;
        goto label_15853c;
    }
    ctx->pc = 0x158534u;
    {
        const bool branch_taken_0x158534 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x158534) {
            ctx->pc = 0x158538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158534u;
            // 0x158538: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158558u;
            goto label_158558;
        }
    }
    ctx->pc = 0x15853Cu;
label_15853c:
    // 0x15853c: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x15853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158540:
    // 0x158540: 0xc6610348  lwc1        $f1, 0x348($s3)
    ctx->pc = 0x158540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_158544:
    // 0x158544: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x158544u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_158548:
    // 0x158548: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x158548u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15854c:
    // 0x15854c: 0xe6600344  swc1        $f0, 0x344($s3)
    ctx->pc = 0x15854cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
label_158550:
    // 0x158550: 0xe6610348  swc1        $f1, 0x348($s3)
    ctx->pc = 0x158550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 840), bits); }
label_158554:
    // 0x158554: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158558:
    // 0x158558: 0x240306ff  addiu       $v1, $zero, 0x6FF
    ctx->pc = 0x158558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1791));
label_15855c:
    // 0x15855c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_158560:
    // 0x158560: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_158564:
    if (ctx->pc == 0x158564u) {
        ctx->pc = 0x158564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158560u;
        // 0x158564: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158568u;
        goto label_158568;
    }
    ctx->pc = 0x158560u;
    {
        const bool branch_taken_0x158560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x158564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158560u;
        // 0x158564: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158560) {
            ctx->pc = 0x158598u;
            goto label_158598;
        }
    }
    ctx->pc = 0x158568u;
label_158568:
    // 0x158568: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x158568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_15856c:
    // 0x15856c: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x15856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_158570:
    // 0x158570: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x158570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_158574:
    // 0x158574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_158578:
    // 0x158578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15857c:
    // 0x15857c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_158580:
    // 0x158580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158584:
    // 0x158584: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158588:
    // 0x158588: 0x40f809  jalr        $v0
label_15858c:
    if (ctx->pc == 0x15858Cu) {
        ctx->pc = 0x15858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158588u;
        // 0x15858c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158590u;
        goto label_158590;
    }
    ctx->pc = 0x158588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158590u);
        ctx->pc = 0x15858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158588u;
        // 0x15858c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158588u, 0x158590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158590u;
label_158590:
    // 0x158590: 0x10000005  b           . + 4 + (0x5 << 2)
label_158594:
    if (ctx->pc == 0x158594u) {
        ctx->pc = 0x158594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158590u;
        // 0x158594: 0xe6600370  swc1        $f0, 0x370($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 880), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158598u;
        goto label_158598;
    }
    ctx->pc = 0x158590u;
    {
        const bool branch_taken_0x158590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158590u;
        // 0x158594: 0xe6600370  swc1        $f0, 0x370($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158590) {
            ctx->pc = 0x1585A8u;
            goto label_1585a8;
        }
    }
    ctx->pc = 0x158598u;
label_158598:
    // 0x158598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15859c:
    // 0x15859c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15859cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1585a0:
    // 0x1585a0: 0x0  nop
    ctx->pc = 0x1585a0u;
    // NOP
label_1585a4:
    // 0x1585a4: 0xe6600370  swc1        $f0, 0x370($s3)
    ctx->pc = 0x1585a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 880), bits); }
label_1585a8:
    // 0x1585a8: 0x240307ff  addiu       $v1, $zero, 0x7FF
    ctx->pc = 0x1585a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1585ac:
    // 0x1585ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1585acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1585b0:
    // 0x1585b0: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1585b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_1585b4:
    // 0x1585b4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1585b8:
    if (ctx->pc == 0x1585B8u) {
        ctx->pc = 0x1585B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585B4u;
        // 0x1585b8: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585BCu;
        goto label_1585bc;
    }
    ctx->pc = 0x1585B4u;
    {
        const bool branch_taken_0x1585b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1585B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585B4u;
        // 0x1585b8: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585b4) {
            ctx->pc = 0x1585ECu;
            goto label_1585ec;
        }
    }
    ctx->pc = 0x1585BCu;
label_1585bc:
    // 0x1585bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1585bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1585c0:
    // 0x1585c0: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x1585c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_1585c4:
    // 0x1585c4: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x1585c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_1585c8:
    // 0x1585c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1585cc:
    // 0x1585cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1585ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1585d0:
    // 0x1585d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1585d4:
    // 0x1585d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1585d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1585d8:
    // 0x1585d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1585d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1585dc:
    // 0x1585dc: 0x40f809  jalr        $v0
label_1585e0:
    if (ctx->pc == 0x1585E0u) {
        ctx->pc = 0x1585E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585DCu;
        // 0x1585e0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585E4u;
        goto label_1585e4;
    }
    ctx->pc = 0x1585DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1585E4u);
        ctx->pc = 0x1585E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585DCu;
        // 0x1585e0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1585DCu, 0x1585E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1585E4u;
label_1585e4:
    // 0x1585e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1585e8:
    if (ctx->pc == 0x1585E8u) {
        ctx->pc = 0x1585E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585E4u;
        // 0x1585e8: 0xe6600374  swc1        $f0, 0x374($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 884), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585ECu;
        goto label_1585ec;
    }
    ctx->pc = 0x1585E4u;
    {
        const bool branch_taken_0x1585e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585E4u;
        // 0x1585e8: 0xe6600374  swc1        $f0, 0x374($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585e4) {
            ctx->pc = 0x1585FCu;
            goto label_1585fc;
        }
    }
    ctx->pc = 0x1585ECu;
label_1585ec:
    // 0x1585ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1585f0:
    // 0x1585f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1585f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1585f4:
    // 0x1585f4: 0x0  nop
    ctx->pc = 0x1585f4u;
    // NOP
label_1585f8:
    // 0x1585f8: 0xe6600374  swc1        $f0, 0x374($s3)
    ctx->pc = 0x1585f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 884), bits); }
label_1585fc:
    // 0x1585fc: 0x240308ff  addiu       $v1, $zero, 0x8FF
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2303));
label_158600:
    // 0x158600: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158604:
    // 0x158604: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x158604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_158608:
    // 0x158608: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_15860c:
    if (ctx->pc == 0x15860Cu) {
        ctx->pc = 0x15860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158608u;
        // 0x15860c: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158610u;
        goto label_158610;
    }
    ctx->pc = 0x158608u;
    {
        const bool branch_taken_0x158608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158608) {
            ctx->pc = 0x15860Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158608u;
            // 0x15860c: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x158610u;
label_158610:
    // 0x158610: 0x41a82  srl         $v1, $a0, 10
    ctx->pc = 0x158610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_158614:
    // 0x158614: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x158614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_158618:
    // 0x158618: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x158618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_15861c:
    // 0x15861c: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x15861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_158620:
    // 0x158620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_158624:
    // 0x158624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158628:
    // 0x158628: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x158628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15862c:
    // 0x15862c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158630:
    // 0x158630: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158634:
    // 0x158634: 0x40f809  jalr        $v0
label_158638:
    if (ctx->pc == 0x158638u) {
        ctx->pc = 0x158638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158634u;
        // 0x158638: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15863Cu;
        goto label_15863c;
    }
    ctx->pc = 0x158634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15863Cu);
        ctx->pc = 0x158638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158634u;
        // 0x158638: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158634u, 0x15863Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15863Cu;
label_15863c:
    // 0x15863c: 0x10000003  b           . + 4 + (0x3 << 2)
label_158640:
    if (ctx->pc == 0x158640u) {
        ctx->pc = 0x158640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15863Cu;
        // 0x158640: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158644u;
        goto label_158644;
    }
    ctx->pc = 0x15863Cu;
    {
        const bool branch_taken_0x15863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15863Cu;
        // 0x158640: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15863c) {
            ctx->pc = 0x15864Cu;
            goto label_15864c;
        }
    }
    ctx->pc = 0x158644u;
label_158644:
    // 0x158644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_158648:
    // 0x158648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x158648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15864c:
    // 0x15864c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15864cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158650:
    // 0x158650: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x158650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_158654:
    // 0x158654: 0x1040018e  beqz        $v0, . + 4 + (0x18E << 2)
label_158658:
    if (ctx->pc == 0x158658u) {
        ctx->pc = 0x158658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158654u;
        // 0x158658: 0xe6600378  swc1        $f0, 0x378($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15865Cu;
        goto label_15865c;
    }
    ctx->pc = 0x158654u;
    {
        const bool branch_taken_0x158654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158654u;
        // 0x158658: 0xe6600378  swc1        $f0, 0x378($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158654) {
            ctx->pc = 0x158C90u;
            goto label_158c90;
        }
    }
    ctx->pc = 0x15865Cu;
label_15865c:
    // 0x15865c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_158660:
    // 0x158660: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x158660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_158664:
    // 0x158664: 0x2457d910  addiu       $s7, $v0, -0x26F0
    ctx->pc = 0x158664u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_158668:
    // 0x158668: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x158668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_15866c:
    // 0x15866c: 0x0  nop
    ctx->pc = 0x15866cu;
    // NOP
label_158670:
    // 0x158670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158674:
    // 0x158674: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_158678:
    if (ctx->pc == 0x158678u) {
        ctx->pc = 0x158678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158674u;
        // 0x158678: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15867Cu;
        goto label_15867c;
    }
    ctx->pc = 0x158674u;
    {
        const bool branch_taken_0x158674 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x158678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158674u;
        // 0x158678: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158674) {
            ctx->pc = 0x158680u;
            goto label_158680;
        }
    }
    ctx->pc = 0x15867Cu;
label_15867c:
    // 0x15867c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x15867cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_158680:
    // 0x158680: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x158680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_158684:
    // 0x158684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_158688:
    if (ctx->pc == 0x158688u) {
        ctx->pc = 0x158688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158684u;
        // 0x158688: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15868Cu;
        goto label_15868c;
    }
    ctx->pc = 0x158684u;
    {
        const bool branch_taken_0x158684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158684u;
        // 0x158688: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158684) {
            ctx->pc = 0x15869Cu;
            goto label_15869c;
        }
    }
    ctx->pc = 0x15868Cu;
label_15868c:
    // 0x15868c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_158690:
    // 0x158690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_158694:
    // 0x158694: 0x10000002  b           . + 4 + (0x2 << 2)
label_158698:
    if (ctx->pc == 0x158698u) {
        ctx->pc = 0x158698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158694u;
        // 0x158698: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15869Cu;
        goto label_15869c;
    }
    ctx->pc = 0x158694u;
    {
        const bool branch_taken_0x158694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158694u;
        // 0x158698: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158694) {
            ctx->pc = 0x1586A0u;
            goto label_1586a0;
        }
    }
    ctx->pc = 0x15869Cu;
label_15869c:
    // 0x15869c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1586a0:
    // 0x1586a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1586a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1586a4:
    // 0x1586a4: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x1586a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1586a8:
    // 0x1586a8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1586a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1586ac:
    // 0x1586ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1586b0:
    if (ctx->pc == 0x1586B0u) {
        ctx->pc = 0x1586B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586ACu;
        // 0x1586b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586B4u;
        goto label_1586b4;
    }
    ctx->pc = 0x1586ACu;
    {
        const bool branch_taken_0x1586ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586ACu;
        // 0x1586b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586ac) {
            ctx->pc = 0x1586C0u;
            goto label_1586c0;
        }
    }
    ctx->pc = 0x1586B4u;
label_1586b4:
    // 0x1586b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1586b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1586b8:
    // 0x1586b8: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x1586b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_1586bc:
    // 0x1586bc: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x1586bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1586c0:
    // 0x1586c0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1586c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1586c4:
    // 0x1586c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1586c8:
    if (ctx->pc == 0x1586C8u) {
        ctx->pc = 0x1586C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C4u;
        // 0x1586c8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586CCu;
        goto label_1586cc;
    }
    ctx->pc = 0x1586C4u;
    {
        const bool branch_taken_0x1586c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C4u;
        // 0x1586c8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586c4) {
            ctx->pc = 0x1586D4u;
            goto label_1586d4;
        }
    }
    ctx->pc = 0x1586CCu;
label_1586cc:
    // 0x1586cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1586ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1586d0:
    // 0x1586d0: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x1586d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_1586d4:
    // 0x1586d4: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_1586d8:
    if (ctx->pc == 0x1586D8u) {
        ctx->pc = 0x1586D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586D4u;
        // 0x1586d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586DCu;
        goto label_1586dc;
    }
    ctx->pc = 0x1586D4u;
    {
        const bool branch_taken_0x1586d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586D4u;
        // 0x1586d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586d4) {
            ctx->pc = 0x1586F4u;
            goto label_1586f4;
        }
    }
    ctx->pc = 0x1586DCu;
label_1586dc:
    // 0x1586dc: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x1586dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_1586e0:
    // 0x1586e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1586e4:
    if (ctx->pc == 0x1586E4u) {
        ctx->pc = 0x1586E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586E0u;
        // 0x1586e4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586E8u;
        goto label_1586e8;
    }
    ctx->pc = 0x1586E0u;
    {
        const bool branch_taken_0x1586e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586E0u;
        // 0x1586e4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586e0) {
            ctx->pc = 0x1586F4u;
            goto label_1586f4;
        }
    }
    ctx->pc = 0x1586E8u;
label_1586e8:
    // 0x1586e8: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1586e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1586ec:
    // 0x1586ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1586ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1586f0:
    // 0x1586f0: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x1586f0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1586f4:
    // 0x1586f4: 0x13c0000d  beqz        $fp, . + 4 + (0xD << 2)
label_1586f8:
    if (ctx->pc == 0x1586F8u) {
        ctx->pc = 0x1586F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586F4u;
        // 0x1586f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586FCu;
        goto label_1586fc;
    }
    ctx->pc = 0x1586F4u;
    {
        const bool branch_taken_0x1586f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586F4u;
        // 0x1586f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586f4) {
            ctx->pc = 0x15872Cu;
            goto label_15872c;
        }
    }
    ctx->pc = 0x1586FCu;
label_1586fc:
    // 0x1586fc: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x1586fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_158700:
    // 0x158700: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_158704:
    if (ctx->pc == 0x158704u) {
        ctx->pc = 0x158704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158700u;
        // 0x158704: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158708u;
        goto label_158708;
    }
    ctx->pc = 0x158700u;
    {
        const bool branch_taken_0x158700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158700u;
        // 0x158704: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158700) {
            ctx->pc = 0x15872Cu;
            goto label_15872c;
        }
    }
    ctx->pc = 0x158708u;
label_158708:
    // 0x158708: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_15870c:
    // 0x15870c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x15870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_158710:
    // 0x158710: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_158714:
    if (ctx->pc == 0x158714u) {
        ctx->pc = 0x158714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158710u;
        // 0x158714: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158718u;
        goto label_158718;
    }
    ctx->pc = 0x158710u;
    {
        const bool branch_taken_0x158710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158710u;
        // 0x158714: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158710) {
            ctx->pc = 0x15872Cu;
            goto label_15872c;
        }
    }
    ctx->pc = 0x158718u;
label_158718:
    // 0x158718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15871c:
    // 0x15871c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_158720:
    if (ctx->pc == 0x158720u) {
        ctx->pc = 0x158720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15871Cu;
        // 0x158720: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158724u;
        goto label_158724;
    }
    ctx->pc = 0x15871Cu;
    {
        const bool branch_taken_0x15871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15871Cu;
        // 0x158720: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15871c) {
            ctx->pc = 0x15872Cu;
            goto label_15872c;
        }
    }
    ctx->pc = 0x158724u;
label_158724:
    // 0x158724: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_158728:
    // 0x158728: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x158728u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15872c:
    // 0x15872c: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
label_158730:
    if (ctx->pc == 0x158730u) {
        ctx->pc = 0x158730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15872Cu;
        // 0x158730: 0x8c91014c  lw          $s1, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158734u;
        goto label_158734;
    }
    ctx->pc = 0x15872Cu;
    {
        const bool branch_taken_0x15872c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x15872c) {
            ctx->pc = 0x158730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15872Cu;
            // 0x158730: 0x8c91014c  lw          $s1, 0x14C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158734u;
            goto label_158734;
        }
    }
    ctx->pc = 0x158734u;
label_158734:
    // 0x158734: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x158734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158738:
    // 0x158738: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x158738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_15873c:
    // 0x15873c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x15873cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_158740:
    // 0x158740: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x158740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_158744:
    // 0x158744: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_158748:
    if (ctx->pc == 0x158748u) {
        ctx->pc = 0x158748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158744u;
        // 0x158748: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15874Cu;
        goto label_15874c;
    }
    ctx->pc = 0x158744u;
    {
        const bool branch_taken_0x158744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158744u;
        // 0x158748: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158744) {
            ctx->pc = 0x158780u;
            goto label_158780;
        }
    }
    ctx->pc = 0x15874Cu;
label_15874c:
    // 0x15874c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x15874cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158750:
    // 0x158750: 0x1452014a  bne         $v0, $s2, . + 4 + (0x14A << 2)
label_158754:
    if (ctx->pc == 0x158754u) {
        ctx->pc = 0x158754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158750u;
        // 0x158754: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158758u;
        goto label_158758;
    }
    ctx->pc = 0x158750u;
    {
        const bool branch_taken_0x158750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x158754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158750u;
        // 0x158754: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158750) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158758u;
label_158758:
    // 0x158758: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x158758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_15875c:
    // 0x15875c: 0x0  nop
    ctx->pc = 0x15875cu;
    // NOP
label_158760:
    // 0x158760: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x158760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158764:
    // 0x158764: 0x0  nop
    ctx->pc = 0x158764u;
    // NOP
label_158768:
    // 0x158768: 0x0  nop
    ctx->pc = 0x158768u;
    // NOP
label_15876c:
    // 0x15876c: 0x0  nop
    ctx->pc = 0x15876cu;
    // NOP
label_158770:
    // 0x158770: 0x5052fffb  beql        $v0, $s2, . + 4 + (-0x5 << 2)
label_158774:
    if (ctx->pc == 0x158774u) {
        ctx->pc = 0x158774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158770u;
        // 0x158774: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158778u;
        goto label_158778;
    }
    ctx->pc = 0x158770u;
    {
        const bool branch_taken_0x158770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x158770) {
            ctx->pc = 0x158774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158770u;
            // 0x158774: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158760;
        }
    }
    ctx->pc = 0x158778u;
label_158778:
    // 0x158778: 0x10000141  b           . + 4 + (0x141 << 2)
label_15877c:
    if (ctx->pc == 0x15877Cu) {
        ctx->pc = 0x15877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158778u;
        // 0x15877c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158780u;
        goto label_158780;
    }
    ctx->pc = 0x158778u;
    {
        const bool branch_taken_0x158778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158778u;
        // 0x15877c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158778) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158780u;
label_158780:
    // 0x158780: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x158780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_158784:
    // 0x158784: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_158788:
    if (ctx->pc == 0x158788u) {
        ctx->pc = 0x158788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158784u;
        // 0x158788: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15878Cu;
        goto label_15878c;
    }
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158784u;
        // 0x158788: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158784) {
            ctx->pc = 0x15892Cu;
            goto label_15892c;
        }
    }
    ctx->pc = 0x15878Cu;
label_15878c:
    // 0x15878c: 0x54520017  bnel        $v0, $s2, . + 4 + (0x17 << 2)
label_158790:
    if (ctx->pc == 0x158790u) {
        ctx->pc = 0x158790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15878Cu;
        // 0x158790: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158794u;
        goto label_158794;
    }
    ctx->pc = 0x15878Cu;
    {
        const bool branch_taken_0x15878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x15878c) {
            ctx->pc = 0x158790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15878Cu;
            // 0x158790: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1587ECu;
            goto label_1587ec;
        }
    }
    ctx->pc = 0x158794u;
label_158794:
    // 0x158794: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x158794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158798:
    // 0x158798: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x158798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_15879c:
    // 0x15879c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1587a0:
    if (ctx->pc == 0x1587A0u) {
        ctx->pc = 0x1587A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15879Cu;
        // 0x1587a0: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587A4u;
        goto label_1587a4;
    }
    ctx->pc = 0x15879Cu;
    {
        const bool branch_taken_0x15879c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15879c) {
            ctx->pc = 0x1587A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15879Cu;
            // 0x1587a0: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1587ECu;
            goto label_1587ec;
        }
    }
    ctx->pc = 0x1587A4u;
label_1587a4:
    // 0x1587a4: 0x31282  srl         $v0, $v1, 10
    ctx->pc = 0x1587a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
label_1587a8:
    // 0x1587a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1587a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1587ac:
    // 0x1587ac: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x1587acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_1587b0:
    // 0x1587b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1587b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1587b4:
    // 0x1587b4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1587b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1587b8:
    // 0x1587b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1587b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1587bc:
    // 0x1587bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1587bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1587c0:
    // 0x1587c0: 0x60f809  jalr        $v1
label_1587c4:
    if (ctx->pc == 0x1587C4u) {
        ctx->pc = 0x1587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C0u;
        // 0x1587c4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587C8u;
        goto label_1587c8;
    }
    ctx->pc = 0x1587C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1587C8u);
        ctx->pc = 0x1587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C0u;
        // 0x1587c4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587C0u, 0x1587C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1587C8u;
label_1587c8:
    // 0x1587c8: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1587c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_1587cc:
    // 0x1587cc: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1587d0:
    if (ctx->pc == 0x1587D0u) {
        ctx->pc = 0x1587D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587CCu;
        // 0x1587d0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587D4u;
        goto label_1587d4;
    }
    ctx->pc = 0x1587CCu;
    {
        const bool branch_taken_0x1587cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587CCu;
        // 0x1587d0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587cc) {
            ctx->pc = 0x1587DCu;
            goto label_1587dc;
        }
    }
    ctx->pc = 0x1587D4u;
label_1587d4:
    // 0x1587d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1587d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1587d8:
    // 0x1587d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1587d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1587dc:
    // 0x1587dc: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1587dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1587e0:
    // 0x1587e0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1587e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1587e4:
    // 0x1587e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1587e8:
    if (ctx->pc == 0x1587E8u) {
        ctx->pc = 0x1587E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587E4u;
        // 0x1587e8: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587ECu;
        goto label_1587ec;
    }
    ctx->pc = 0x1587E4u;
    {
        const bool branch_taken_0x1587e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587E4u;
        // 0x1587e8: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587e4) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1587ECu;
label_1587ec:
    // 0x1587ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1587ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1587f0:
    // 0x1587f0: 0x0  nop
    ctx->pc = 0x1587f0u;
    // NOP
label_1587f4:
    // 0x1587f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1587f8:
    if (ctx->pc == 0x1587F8u) {
        ctx->pc = 0x1587F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587F4u;
        // 0x1587f8: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587FCu;
        goto label_1587fc;
    }
    ctx->pc = 0x1587F4u;
    {
        const bool branch_taken_0x1587f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1587F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587F4u;
        // 0x1587f8: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587f4) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1587FCu;
label_1587fc:
    // 0x1587fc: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1587fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158800:
    // 0x158800: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_158804:
    // 0x158804: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_158808:
    if (ctx->pc == 0x158808u) {
        ctx->pc = 0x158808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158804u;
        // 0x158808: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15880Cu;
        goto label_15880c;
    }
    ctx->pc = 0x158804u;
    {
        const bool branch_taken_0x158804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158804) {
            ctx->pc = 0x158808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158804u;
            // 0x158808: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15881Cu;
            goto label_15881c;
        }
    }
    ctx->pc = 0x15880Cu;
label_15880c:
    // 0x15880c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x15880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_158810:
    // 0x158810: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x158810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158814:
    // 0x158814: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x158814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_158818:
    // 0x158818: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x158818u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15881c:
    // 0x15881c: 0x54520015  bnel        $v0, $s2, . + 4 + (0x15 << 2)
label_158820:
    if (ctx->pc == 0x158820u) {
        ctx->pc = 0x158820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15881Cu;
        // 0x158820: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158824u;
        goto label_158824;
    }
    ctx->pc = 0x15881Cu;
    {
        const bool branch_taken_0x15881c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x15881c) {
            ctx->pc = 0x158820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15881Cu;
            // 0x158820: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158874u;
            goto label_158874;
        }
    }
    ctx->pc = 0x158824u;
label_158824:
    // 0x158824: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158828:
    // 0x158828: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_15882c:
    // 0x15882c: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x15882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_158830:
    // 0x158830: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_158834:
    if (ctx->pc == 0x158834u) {
        ctx->pc = 0x158834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158830u;
        // 0x158834: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158838u;
        goto label_158838;
    }
    ctx->pc = 0x158830u;
    {
        const bool branch_taken_0x158830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158830) {
            ctx->pc = 0x158834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158830u;
            // 0x158834: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158874u;
            goto label_158874;
        }
    }
    ctx->pc = 0x158838u;
label_158838:
    // 0x158838: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x158838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_15883c:
    // 0x15883c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158840:
    // 0x158840: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x158840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_158844:
    // 0x158844: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158848:
    // 0x158848: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x158848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_15884c:
    // 0x15884c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15884cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158850:
    // 0x158850: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158854:
    // 0x158854: 0xc0f809  jalr        $a2
label_158858:
    if (ctx->pc == 0x158858u) {
        ctx->pc = 0x158858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158854u;
        // 0x158858: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15885Cu;
        goto label_15885c;
    }
    ctx->pc = 0x158854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15885Cu);
        ctx->pc = 0x158858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158854u;
        // 0x158858: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158854u, 0x15885Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15885Cu;
label_15885c:
    // 0x15885c: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x15885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_158860:
    // 0x158860: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x158860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_158864:
    // 0x158864: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158868:
    // 0x158868: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x158868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_15886c:
    // 0x15886c: 0x1000000c  b           . + 4 + (0xC << 2)
label_158870:
    if (ctx->pc == 0x158870u) {
        ctx->pc = 0x158870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15886Cu;
        // 0x158870: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158874u;
        goto label_158874;
    }
    ctx->pc = 0x15886Cu;
    {
        const bool branch_taken_0x15886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15886Cu;
        // 0x158870: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15886c) {
            ctx->pc = 0x1588A0u;
            goto label_1588a0;
        }
    }
    ctx->pc = 0x158874u;
label_158874:
    // 0x158874: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x158874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_158878:
    // 0x158878: 0x0  nop
    ctx->pc = 0x158878u;
    // NOP
label_15887c:
    // 0x15887c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_158880:
    if (ctx->pc == 0x158880u) {
        ctx->pc = 0x158880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15887Cu;
        // 0x158880: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158884u;
        goto label_158884;
    }
    ctx->pc = 0x15887Cu;
    {
        const bool branch_taken_0x15887c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15887Cu;
        // 0x158880: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15887c) {
            ctx->pc = 0x1588A0u;
            goto label_1588a0;
        }
    }
    ctx->pc = 0x158884u;
label_158884:
    // 0x158884: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158888:
    // 0x158888: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x158888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_15888c:
    // 0x15888c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_158890:
    if (ctx->pc == 0x158890u) {
        ctx->pc = 0x158890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15888Cu;
        // 0x158890: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158894u;
        goto label_158894;
    }
    ctx->pc = 0x15888Cu;
    {
        const bool branch_taken_0x15888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15888c) {
            ctx->pc = 0x158890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15888Cu;
            // 0x158890: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1588A4u;
            goto label_1588a4;
        }
    }
    ctx->pc = 0x158894u;
label_158894:
    // 0x158894: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_158898:
    // 0x158898: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x158898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15889c:
    // 0x15889c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x15889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1588a0:
    // 0x1588a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1588a4:
    // 0x1588a4: 0x54520015  bnel        $v0, $s2, . + 4 + (0x15 << 2)
label_1588a8:
    if (ctx->pc == 0x1588A8u) {
        ctx->pc = 0x1588A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588A4u;
        // 0x1588a8: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588ACu;
        goto label_1588ac;
    }
    ctx->pc = 0x1588A4u;
    {
        const bool branch_taken_0x1588a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1588a4) {
            ctx->pc = 0x1588A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1588A4u;
            // 0x1588a8: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1588FCu;
            goto label_1588fc;
        }
    }
    ctx->pc = 0x1588ACu;
label_1588ac:
    // 0x1588ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1588acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1588b0:
    // 0x1588b0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1588b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1588b4:
    // 0x1588b4: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x1588b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_1588b8:
    // 0x1588b8: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_1588bc:
    if (ctx->pc == 0x1588BCu) {
        ctx->pc = 0x1588BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588B8u;
        // 0x1588bc: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588C0u;
        goto label_1588c0;
    }
    ctx->pc = 0x1588B8u;
    {
        const bool branch_taken_0x1588b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1588b8) {
            ctx->pc = 0x1588BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1588B8u;
            // 0x1588bc: 0xc660027c  lwc1        $f0, 0x27C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1588FCu;
            goto label_1588fc;
        }
    }
    ctx->pc = 0x1588C0u;
label_1588c0:
    // 0x1588c0: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_1588c4:
    // 0x1588c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1588c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1588c8:
    // 0x1588c8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x1588c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_1588cc:
    // 0x1588cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1588ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1588d0:
    // 0x1588d0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1588d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1588d4:
    // 0x1588d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1588d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1588d8:
    // 0x1588d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1588d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1588dc:
    // 0x1588dc: 0xc0f809  jalr        $a2
label_1588e0:
    if (ctx->pc == 0x1588E0u) {
        ctx->pc = 0x1588E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588DCu;
        // 0x1588e0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588E4u;
        goto label_1588e4;
    }
    ctx->pc = 0x1588DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1588E4u);
        ctx->pc = 0x1588E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588DCu;
        // 0x1588e0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1588DCu, 0x1588E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1588E4u;
label_1588e4:
    // 0x1588e4: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_1588e8:
    // 0x1588e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1588e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1588ec:
    // 0x1588ec: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1588ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1588f0:
    // 0x1588f0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1588f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1588f4:
    // 0x1588f4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1588f8:
    if (ctx->pc == 0x1588F8u) {
        ctx->pc = 0x1588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588F4u;
        // 0x1588f8: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588FCu;
        goto label_1588fc;
    }
    ctx->pc = 0x1588F4u;
    {
        const bool branch_taken_0x1588f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588F4u;
        // 0x1588f8: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588f4) {
            ctx->pc = 0x158984u;
            goto label_158984;
        }
    }
    ctx->pc = 0x1588FCu;
label_1588fc:
    // 0x1588fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1588fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_158900:
    // 0x158900: 0x0  nop
    ctx->pc = 0x158900u;
    // NOP
label_158904:
    // 0x158904: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_158908:
    if (ctx->pc == 0x158908u) {
        ctx->pc = 0x158908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158904u;
        // 0x158908: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15890Cu;
        goto label_15890c;
    }
    ctx->pc = 0x158904u;
    {
        const bool branch_taken_0x158904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158904u;
        // 0x158908: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158904) {
            ctx->pc = 0x158984u;
            goto label_158984;
        }
    }
    ctx->pc = 0x15890Cu;
label_15890c:
    // 0x15890c: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158910:
    // 0x158910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_158914:
    // 0x158914: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_158918:
    if (ctx->pc == 0x158918u) {
        ctx->pc = 0x158918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158914u;
        // 0x158918: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15891Cu;
        goto label_15891c;
    }
    ctx->pc = 0x158914u;
    {
        const bool branch_taken_0x158914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158914) {
            ctx->pc = 0x158918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158914u;
            // 0x158918: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158988u;
            goto label_158988;
        }
    }
    ctx->pc = 0x15891Cu;
label_15891c:
    // 0x15891c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x15891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_158920:
    // 0x158920: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x158920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158924:
    // 0x158924: 0x10000017  b           . + 4 + (0x17 << 2)
label_158928:
    if (ctx->pc == 0x158928u) {
        ctx->pc = 0x158928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158924u;
        // 0x158928: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15892Cu;
        goto label_15892c;
    }
    ctx->pc = 0x158924u;
    {
        const bool branch_taken_0x158924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158924u;
        // 0x158928: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158924) {
            ctx->pc = 0x158984u;
            goto label_158984;
        }
    }
    ctx->pc = 0x15892Cu;
label_15892c:
    // 0x15892c: 0x54520016  bnel        $v0, $s2, . + 4 + (0x16 << 2)
label_158930:
    if (ctx->pc == 0x158930u) {
        ctx->pc = 0x158930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15892Cu;
        // 0x158930: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158934u;
        goto label_158934;
    }
    ctx->pc = 0x15892Cu;
    {
        const bool branch_taken_0x15892c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x15892c) {
            ctx->pc = 0x158930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15892Cu;
            // 0x158930: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158988u;
            goto label_158988;
        }
    }
    ctx->pc = 0x158934u;
label_158934:
    // 0x158934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158938:
    // 0x158938: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x158938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_15893c:
    // 0x15893c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x15893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158940:
    // 0x158940: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x158940u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_158944:
    // 0x158944: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x158944u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158948:
    // 0x158948: 0x5472000f  bnel        $v1, $s2, . + 4 + (0xF << 2)
label_15894c:
    if (ctx->pc == 0x15894Cu) {
        ctx->pc = 0x15894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158948u;
        // 0x15894c: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158950u;
        goto label_158950;
    }
    ctx->pc = 0x158948u;
    {
        const bool branch_taken_0x158948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x158948) {
            ctx->pc = 0x15894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158948u;
            // 0x15894c: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158988u;
            goto label_158988;
        }
    }
    ctx->pc = 0x158950u;
label_158950:
    // 0x158950: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158954:
    // 0x158954: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158958:
    // 0x158958: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_15895c:
    // 0x15895c: 0x38420100  xori        $v0, $v0, 0x100
    ctx->pc = 0x15895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)256);
label_158960:
    // 0x158960: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x158960u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_158964:
    // 0x158964: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158968:
    // 0x158968: 0x54720007  bnel        $v1, $s2, . + 4 + (0x7 << 2)
label_15896c:
    if (ctx->pc == 0x15896Cu) {
        ctx->pc = 0x15896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158968u;
        // 0x15896c: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158970u;
        goto label_158970;
    }
    ctx->pc = 0x158968u;
    {
        const bool branch_taken_0x158968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x158968) {
            ctx->pc = 0x15896Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158968u;
            // 0x15896c: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158988u;
            goto label_158988;
        }
    }
    ctx->pc = 0x158970u;
label_158970:
    // 0x158970: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158974:
    // 0x158974: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x158974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158978:
    // 0x158978: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_15897c:
    // 0x15897c: 0x38420200  xori        $v0, $v0, 0x200
    ctx->pc = 0x15897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)512);
label_158980:
    // 0x158980: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x158980u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_158984:
    // 0x158984: 0x92220155  lbu         $v0, 0x155($s1)
    ctx->pc = 0x158984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
label_158988:
    // 0x158988: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x158988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15898c:
    // 0x15898c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_158990:
    if (ctx->pc == 0x158990u) {
        ctx->pc = 0x158990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15898Cu;
        // 0x158990: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158994u;
        goto label_158994;
    }
    ctx->pc = 0x15898Cu;
    {
        const bool branch_taken_0x15898c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15898Cu;
        // 0x158990: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15898c) {
            ctx->pc = 0x158AB8u;
            goto label_158ab8;
        }
    }
    ctx->pc = 0x158994u;
label_158994:
    // 0x158994: 0x54520011  bnel        $v0, $s2, . + 4 + (0x11 << 2)
label_158998:
    if (ctx->pc == 0x158998u) {
        ctx->pc = 0x158998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158994u;
        // 0x158998: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15899Cu;
        goto label_15899c;
    }
    ctx->pc = 0x158994u;
    {
        const bool branch_taken_0x158994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x158994) {
            ctx->pc = 0x158998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158994u;
            // 0x158998: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1589DCu;
            goto label_1589dc;
        }
    }
    ctx->pc = 0x15899Cu;
label_15899c:
    // 0x15899c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1589a0:
    // 0x1589a0: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1589a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1589a4:
    // 0x1589a4: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x1589a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_1589a8:
    // 0x1589a8: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_1589ac:
    if (ctx->pc == 0x1589ACu) {
        ctx->pc = 0x1589ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589A8u;
        // 0x1589ac: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589B0u;
        goto label_1589b0;
    }
    ctx->pc = 0x1589A8u;
    {
        const bool branch_taken_0x1589a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1589a8) {
            ctx->pc = 0x1589ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1589A8u;
            // 0x1589ac: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1589DCu;
            goto label_1589dc;
        }
    }
    ctx->pc = 0x1589B0u;
label_1589b0:
    // 0x1589b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1589b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1589b4:
    // 0x1589b4: 0x262401b4  addiu       $a0, $s1, 0x1B4
    ctx->pc = 0x1589b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
label_1589b8:
    // 0x1589b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1589b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1589bc:
    // 0x1589bc: 0xc0566b4  jal         func_159AD0
label_1589c0:
    if (ctx->pc == 0x1589C0u) {
        ctx->pc = 0x1589C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589BCu;
        // 0x1589c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589C4u;
        goto label_1589c4;
    }
    ctx->pc = 0x1589BCu;
    SET_GPR_U32(ctx, 31, 0x1589C4u);
    ctx->pc = 0x1589C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589BCu;
    // 0x1589c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x1589BCu, 0x1589C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589C4u;
label_1589c4:
    // 0x1589c4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1589c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1589c8:
    // 0x1589c8: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1589c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1589cc:
    // 0x1589cc: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1589ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1589d0:
    // 0x1589d0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1589d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1589d4:
    // 0x1589d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1589d8:
    if (ctx->pc == 0x1589D8u) {
        ctx->pc = 0x1589D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589D4u;
        // 0x1589d8: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589DCu;
        goto label_1589dc;
    }
    ctx->pc = 0x1589D4u;
    {
        const bool branch_taken_0x1589d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589D4u;
        // 0x1589d8: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589d4) {
            ctx->pc = 0x1589E8u;
            goto label_1589e8;
        }
    }
    ctx->pc = 0x1589DCu;
label_1589dc:
    // 0x1589dc: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x1589dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_1589e0:
    // 0x1589e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1589e4:
    if (ctx->pc == 0x1589E4u) {
        ctx->pc = 0x1589E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589E0u;
        // 0x1589e4: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589E8u;
        goto label_1589e8;
    }
    ctx->pc = 0x1589E0u;
    {
        const bool branch_taken_0x1589e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1589e0) {
            ctx->pc = 0x1589E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1589E0u;
            // 0x1589e4: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1589E8u;
            goto label_1589e8;
        }
    }
    ctx->pc = 0x1589E8u;
label_1589e8:
    // 0x1589e8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1589e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1589ec:
    // 0x1589ec: 0x54520014  bnel        $v0, $s2, . + 4 + (0x14 << 2)
label_1589f0:
    if (ctx->pc == 0x1589F0u) {
        ctx->pc = 0x1589F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589ECu;
        // 0x1589f0: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589F4u;
        goto label_1589f4;
    }
    ctx->pc = 0x1589ECu;
    {
        const bool branch_taken_0x1589ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1589ec) {
            ctx->pc = 0x1589F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1589ECu;
            // 0x1589f0: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158A40u;
            goto label_158a40;
        }
    }
    ctx->pc = 0x1589F4u;
label_1589f4:
    // 0x1589f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1589f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1589f8:
    // 0x1589f8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1589fc:
    // 0x1589fc: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x1589fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158a00:
    // 0x158a00: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_158a04:
    if (ctx->pc == 0x158A04u) {
        ctx->pc = 0x158A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A00u;
        // 0x158a04: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A08u;
        goto label_158a08;
    }
    ctx->pc = 0x158A00u;
    {
        const bool branch_taken_0x158a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158a00) {
            ctx->pc = 0x158A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A00u;
            // 0x158a04: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158A40u;
            goto label_158a40;
        }
    }
    ctx->pc = 0x158A08u;
label_158a08:
    // 0x158a08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x158a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158a0c:
    // 0x158a0c: 0x262401d4  addiu       $a0, $s1, 0x1D4
    ctx->pc = 0x158a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
label_158a10:
    // 0x158a10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x158a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158a14:
    // 0x158a14: 0xc0566b4  jal         func_159AD0
label_158a18:
    if (ctx->pc == 0x158A18u) {
        ctx->pc = 0x158A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A14u;
        // 0x158a18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A1Cu;
        goto label_158a1c;
    }
    ctx->pc = 0x158A14u;
    SET_GPR_U32(ctx, 31, 0x158A1Cu);
    ctx->pc = 0x158A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A14u;
    // 0x158a18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x158A14u, 0x158A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A1Cu;
label_158a1c:
    // 0x158a1c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x158a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158a20:
    // 0x158a20: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_158a24:
    if (ctx->pc == 0x158A24u) {
        ctx->pc = 0x158A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A20u;
        // 0x158a24: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A28u;
        goto label_158a28;
    }
    ctx->pc = 0x158A20u;
    {
        const bool branch_taken_0x158a20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A20u;
        // 0x158a24: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a20) {
            ctx->pc = 0x158A30u;
            goto label_158a30;
        }
    }
    ctx->pc = 0x158A28u;
label_158a28:
    // 0x158a28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x158a28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_158a2c:
    // 0x158a2c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x158a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_158a30:
    // 0x158a30: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158a34:
    // 0x158a34: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x158a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_158a38:
    // 0x158a38: 0x10000004  b           . + 4 + (0x4 << 2)
label_158a3c:
    if (ctx->pc == 0x158A3Cu) {
        ctx->pc = 0x158A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A38u;
        // 0x158a3c: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A40u;
        goto label_158a40;
    }
    ctx->pc = 0x158A38u;
    {
        const bool branch_taken_0x158a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A38u;
        // 0x158a3c: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a38) {
            ctx->pc = 0x158A4Cu;
            goto label_158a4c;
        }
    }
    ctx->pc = 0x158A40u;
label_158a40:
    // 0x158a40: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x158a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_158a44:
    // 0x158a44: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_158a48:
    if (ctx->pc == 0x158A48u) {
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A44u;
        // 0x158a48: 0xae200104  sw          $zero, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A4Cu;
        goto label_158a4c;
    }
    ctx->pc = 0x158A44u;
    {
        const bool branch_taken_0x158a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158a44) {
            ctx->pc = 0x158A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A44u;
            // 0x158a48: 0xae200104  sw          $zero, 0x104($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158A4Cu;
            goto label_158a4c;
        }
    }
    ctx->pc = 0x158A4Cu;
label_158a4c:
    // 0x158a4c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158a50:
    // 0x158a50: 0x54520014  bnel        $v0, $s2, . + 4 + (0x14 << 2)
label_158a54:
    if (ctx->pc == 0x158A54u) {
        ctx->pc = 0x158A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A50u;
        // 0x158a54: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A58u;
        goto label_158a58;
    }
    ctx->pc = 0x158A50u;
    {
        const bool branch_taken_0x158a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x158a50) {
            ctx->pc = 0x158A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A50u;
            // 0x158a54: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158AA4u;
            goto label_158aa4;
        }
    }
    ctx->pc = 0x158A58u;
label_158a58:
    // 0x158a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158a5c:
    // 0x158a5c: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x158a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_158a60:
    // 0x158a60: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158a64:
    // 0x158a64: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_158a68:
    if (ctx->pc == 0x158A68u) {
        ctx->pc = 0x158A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A64u;
        // 0x158a68: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A6Cu;
        goto label_158a6c;
    }
    ctx->pc = 0x158A64u;
    {
        const bool branch_taken_0x158a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158a64) {
            ctx->pc = 0x158A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A64u;
            // 0x158a68: 0x92220155  lbu         $v0, 0x155($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158AA4u;
            goto label_158aa4;
        }
    }
    ctx->pc = 0x158A6Cu;
label_158a6c:
    // 0x158a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x158a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158a70:
    // 0x158a70: 0x262401f4  addiu       $a0, $s1, 0x1F4
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
label_158a74:
    // 0x158a74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x158a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158a78:
    // 0x158a78: 0xc0566b4  jal         func_159AD0
label_158a7c:
    if (ctx->pc == 0x158A7Cu) {
        ctx->pc = 0x158A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A78u;
        // 0x158a7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A80u;
        goto label_158a80;
    }
    ctx->pc = 0x158A78u;
    SET_GPR_U32(ctx, 31, 0x158A80u);
    ctx->pc = 0x158A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A78u;
    // 0x158a7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x158A78u, 0x158A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A80u;
label_158a80:
    // 0x158a80: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158a84:
    // 0x158a84: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_158a88:
    if (ctx->pc == 0x158A88u) {
        ctx->pc = 0x158A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A84u;
        // 0x158a88: 0xe6200108  swc1        $f0, 0x108($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A8Cu;
        goto label_158a8c;
    }
    ctx->pc = 0x158A84u;
    {
        const bool branch_taken_0x158a84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A84u;
        // 0x158a88: 0xe6200108  swc1        $f0, 0x108($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a84) {
            ctx->pc = 0x158A94u;
            goto label_158a94;
        }
    }
    ctx->pc = 0x158A8Cu;
label_158a8c:
    // 0x158a8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x158a8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_158a90:
    // 0x158a90: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x158a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_158a94:
    // 0x158a94: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158a98:
    // 0x158a98: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x158a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_158a9c:
    // 0x158a9c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_158aa0:
    if (ctx->pc == 0x158AA0u) {
        ctx->pc = 0x158AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A9Cu;
        // 0x158aa0: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AA4u;
        goto label_158aa4;
    }
    ctx->pc = 0x158A9Cu;
    {
        const bool branch_taken_0x158a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A9Cu;
        // 0x158aa0: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a9c) {
            ctx->pc = 0x158B14u;
            goto label_158b14;
        }
    }
    ctx->pc = 0x158AA4u;
label_158aa4:
    // 0x158aa4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x158aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_158aa8:
    // 0x158aa8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_158aac:
    if (ctx->pc == 0x158AACu) {
        ctx->pc = 0x158AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AA8u;
        // 0x158aac: 0xae200108  sw          $zero, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AB0u;
        goto label_158ab0;
    }
    ctx->pc = 0x158AA8u;
    {
        const bool branch_taken_0x158aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158aa8) {
            ctx->pc = 0x158AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AA8u;
            // 0x158aac: 0xae200108  sw          $zero, 0x108($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B14u;
            goto label_158b14;
        }
    }
    ctx->pc = 0x158AB0u;
label_158ab0:
    // 0x158ab0: 0x10000019  b           . + 4 + (0x19 << 2)
label_158ab4:
    if (ctx->pc == 0x158AB4u) {
        ctx->pc = 0x158AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AB0u;
        // 0x158ab4: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AB8u;
        goto label_158ab8;
    }
    ctx->pc = 0x158AB0u;
    {
        const bool branch_taken_0x158ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AB0u;
        // 0x158ab4: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ab0) {
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158AB8u;
label_158ab8:
    // 0x158ab8: 0x54520017  bnel        $v0, $s2, . + 4 + (0x17 << 2)
label_158abc:
    if (ctx->pc == 0x158ABCu) {
        ctx->pc = 0x158ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AB8u;
        // 0x158abc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AC0u;
        goto label_158ac0;
    }
    ctx->pc = 0x158AB8u;
    {
        const bool branch_taken_0x158ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x158ab8) {
            ctx->pc = 0x158ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AB8u;
            // 0x158abc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158AC0u;
label_158ac0:
    // 0x158ac0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158ac4:
    // 0x158ac4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158ac8:
    // 0x158ac8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158acc:
    // 0x158acc: 0x38420300  xori        $v0, $v0, 0x300
    ctx->pc = 0x158accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)768);
label_158ad0:
    // 0x158ad0: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x158ad0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_158ad4:
    // 0x158ad4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x158ad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158ad8:
    // 0x158ad8: 0x5472000f  bnel        $v1, $s2, . + 4 + (0xF << 2)
label_158adc:
    if (ctx->pc == 0x158ADCu) {
        ctx->pc = 0x158ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AD8u;
        // 0x158adc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AE0u;
        goto label_158ae0;
    }
    ctx->pc = 0x158AD8u;
    {
        const bool branch_taken_0x158ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x158ad8) {
            ctx->pc = 0x158ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AD8u;
            // 0x158adc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158AE0u;
label_158ae0:
    // 0x158ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158ae4:
    // 0x158ae4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x158ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158ae8:
    // 0x158ae8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158aec:
    // 0x158aec: 0x38420400  xori        $v0, $v0, 0x400
    ctx->pc = 0x158aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1024);
label_158af0:
    // 0x158af0: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x158af0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_158af4:
    // 0x158af4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158af8:
    // 0x158af8: 0x54720007  bnel        $v1, $s2, . + 4 + (0x7 << 2)
label_158afc:
    if (ctx->pc == 0x158AFCu) {
        ctx->pc = 0x158AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AF8u;
        // 0x158afc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B00u;
        goto label_158b00;
    }
    ctx->pc = 0x158AF8u;
    {
        const bool branch_taken_0x158af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x158af8) {
            ctx->pc = 0x158AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AF8u;
            // 0x158afc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158B00u;
label_158b00:
    // 0x158b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158b04:
    // 0x158b04: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x158b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158b08:
    // 0x158b08: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158b0c:
    // 0x158b0c: 0x38420500  xori        $v0, $v0, 0x500
    ctx->pc = 0x158b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1280);
label_158b10:
    // 0x158b10: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x158b10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_158b14:
    // 0x158b14: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158b18:
    // 0x158b18: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x158b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_158b1c:
    // 0x158b1c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_158b20:
    if (ctx->pc == 0x158B20u) {
        ctx->pc = 0x158B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B1Cu;
        // 0x158b20: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B24u;
        goto label_158b24;
    }
    ctx->pc = 0x158B1Cu;
    {
        const bool branch_taken_0x158b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B1Cu;
        // 0x158b20: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b1c) {
            ctx->pc = 0x158C20u;
            goto label_158c20;
        }
    }
    ctx->pc = 0x158B24u;
label_158b24:
    // 0x158b24: 0x14520055  bne         $v0, $s2, . + 4 + (0x55 << 2)
label_158b28:
    if (ctx->pc == 0x158B28u) {
        ctx->pc = 0x158B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B24u;
        // 0x158b28: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B2Cu;
        goto label_158b2c;
    }
    ctx->pc = 0x158B24u;
    {
        const bool branch_taken_0x158b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x158B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B24u;
        // 0x158b28: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b24) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158B2Cu;
label_158b2c:
    // 0x158b2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158b30:
    // 0x158b30: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_158b34:
    // 0x158b34: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x158b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_158b38:
    // 0x158b38: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_158b3c:
    if (ctx->pc == 0x158B3Cu) {
        ctx->pc = 0x158B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B38u;
        // 0x158b3c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B40u;
        goto label_158b40;
    }
    ctx->pc = 0x158B38u;
    {
        const bool branch_taken_0x158b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b38) {
            ctx->pc = 0x158B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158B38u;
            // 0x158b3c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B78u;
            goto label_158b78;
        }
    }
    ctx->pc = 0x158B40u;
label_158b40:
    // 0x158b40: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_158b44:
    // 0x158b44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158b48:
    // 0x158b48: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x158b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_158b4c:
    // 0x158b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158b50:
    // 0x158b50: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x158b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_158b54:
    // 0x158b54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158b58:
    // 0x158b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158b5c:
    // 0x158b5c: 0x60f809  jalr        $v1
label_158b60:
    if (ctx->pc == 0x158B60u) {
        ctx->pc = 0x158B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B5Cu;
        // 0x158b60: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B64u;
        goto label_158b64;
    }
    ctx->pc = 0x158B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x158B64u);
        ctx->pc = 0x158B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B5Cu;
        // 0x158b60: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B5Cu, 0x158B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158B64u;
label_158b64:
    // 0x158b64: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158b68:
    // 0x158b68: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x158b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_158b6c:
    // 0x158b6c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x158b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_158b70:
    // 0x158b70: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x158b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_158b74:
    // 0x158b74: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158b78:
    // 0x158b78: 0x14520041  bne         $v0, $s2, . + 4 + (0x41 << 2)
label_158b7c:
    if (ctx->pc == 0x158B7Cu) {
        ctx->pc = 0x158B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B78u;
        // 0x158b7c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B80u;
        goto label_158b80;
    }
    ctx->pc = 0x158B78u;
    {
        const bool branch_taken_0x158b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x158B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B78u;
        // 0x158b7c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b78) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158B80u;
label_158b80:
    // 0x158b80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158b84:
    // 0x158b84: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
label_158b88:
    // 0x158b88: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x158b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_158b8c:
    // 0x158b8c: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_158b90:
    if (ctx->pc == 0x158B90u) {
        ctx->pc = 0x158B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B8Cu;
        // 0x158b90: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B94u;
        goto label_158b94;
    }
    ctx->pc = 0x158B8Cu;
    {
        const bool branch_taken_0x158b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b8c) {
            ctx->pc = 0x158B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158B8Cu;
            // 0x158b90: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158BCCu;
            goto label_158bcc;
        }
    }
    ctx->pc = 0x158B94u;
label_158b94:
    // 0x158b94: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x158b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_158b98:
    // 0x158b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158b9c:
    // 0x158b9c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x158b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_158ba0:
    // 0x158ba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158ba4:
    // 0x158ba4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_158ba8:
    // 0x158ba8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158ba8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158bac:
    // 0x158bac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158bb0:
    // 0x158bb0: 0x60f809  jalr        $v1
label_158bb4:
    if (ctx->pc == 0x158BB4u) {
        ctx->pc = 0x158BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB0u;
        // 0x158bb4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BB8u;
        goto label_158bb8;
    }
    ctx->pc = 0x158BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x158BB8u);
        ctx->pc = 0x158BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB0u;
        // 0x158bb4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BB0u, 0x158BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158BB8u;
label_158bb8:
    // 0x158bb8: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158bbc:
    // 0x158bbc: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x158bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
label_158bc0:
    // 0x158bc0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x158bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_158bc4:
    // 0x158bc4: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x158bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_158bc8:
    // 0x158bc8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158bcc:
    // 0x158bcc: 0x1452002c  bne         $v0, $s2, . + 4 + (0x2C << 2)
label_158bd0:
    if (ctx->pc == 0x158BD0u) {
        ctx->pc = 0x158BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BCCu;
        // 0x158bd0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BD4u;
        goto label_158bd4;
    }
    ctx->pc = 0x158BCCu;
    {
        const bool branch_taken_0x158bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x158BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BCCu;
        // 0x158bd0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bcc) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158BD4u;
label_158bd4:
    // 0x158bd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x158bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158bd8:
    // 0x158bd8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_158bdc:
    // 0x158bdc: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x158bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_158be0:
    // 0x158be0: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
label_158be4:
    if (ctx->pc == 0x158BE4u) {
        ctx->pc = 0x158BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE0u;
        // 0x158be4: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BE8u;
        goto label_158be8;
    }
    ctx->pc = 0x158BE0u;
    {
        const bool branch_taken_0x158be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE0u;
        // 0x158be4: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158be0) {
            ctx->pc = 0x158C84u;
            goto label_158c84;
        }
    }
    ctx->pc = 0x158BE8u;
label_158be8:
    // 0x158be8: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_158bec:
    // 0x158bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158bf0:
    // 0x158bf0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x158bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_158bf4:
    // 0x158bf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158bf8:
    // 0x158bf8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_158bfc:
    // 0x158bfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158bfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158c00:
    // 0x158c00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158c04:
    // 0x158c04: 0x60f809  jalr        $v1
label_158c08:
    if (ctx->pc == 0x158C08u) {
        ctx->pc = 0x158C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C04u;
        // 0x158c08: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C0Cu;
        goto label_158c0c;
    }
    ctx->pc = 0x158C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x158C0Cu);
        ctx->pc = 0x158C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C04u;
        // 0x158c08: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C04u, 0x158C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158C0Cu;
label_158c0c:
    // 0x158c0c: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x158c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_158c10:
    // 0x158c10: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x158c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_158c14:
    // 0x158c14: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x158c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_158c18:
    // 0x158c18: 0x10000018  b           . + 4 + (0x18 << 2)
label_158c1c:
    if (ctx->pc == 0x158C1Cu) {
        ctx->pc = 0x158C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C18u;
        // 0x158c1c: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C20u;
        goto label_158c20;
    }
    ctx->pc = 0x158C18u;
    {
        const bool branch_taken_0x158c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C18u;
        // 0x158c1c: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c18) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C20u;
label_158c20:
    // 0x158c20: 0x14520016  bne         $v0, $s2, . + 4 + (0x16 << 2)
label_158c24:
    if (ctx->pc == 0x158C24u) {
        ctx->pc = 0x158C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C20u;
        // 0x158c24: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C28u;
        goto label_158c28;
    }
    ctx->pc = 0x158C20u;
    {
        const bool branch_taken_0x158c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x158C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C20u;
        // 0x158c24: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c20) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C28u;
label_158c28:
    // 0x158c28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158c2c:
    // 0x158c2c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158c30:
    // 0x158c30: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158c34:
    // 0x158c34: 0x38420600  xori        $v0, $v0, 0x600
    ctx->pc = 0x158c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1536);
label_158c38:
    // 0x158c38: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x158c38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_158c3c:
    // 0x158c3c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158c40:
    // 0x158c40: 0x1472000f  bne         $v1, $s2, . + 4 + (0xF << 2)
label_158c44:
    if (ctx->pc == 0x158C44u) {
        ctx->pc = 0x158C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C40u;
        // 0x158c44: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C48u;
        goto label_158c48;
    }
    ctx->pc = 0x158C40u;
    {
        const bool branch_taken_0x158c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x158C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C40u;
        // 0x158c44: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c40) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158C48u;
label_158c48:
    // 0x158c48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158c4c:
    // 0x158c4c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x158c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158c50:
    // 0x158c50: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158c54:
    // 0x158c54: 0x38420700  xori        $v0, $v0, 0x700
    ctx->pc = 0x158c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1792);
label_158c58:
    // 0x158c58: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x158c58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_158c5c:
    // 0x158c5c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_158c60:
    // 0x158c60: 0x14720008  bne         $v1, $s2, . + 4 + (0x8 << 2)
label_158c64:
    if (ctx->pc == 0x158C64u) {
        ctx->pc = 0x158C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C60u;
        // 0x158c64: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C68u;
        goto label_158c68;
    }
    ctx->pc = 0x158C60u;
    {
        const bool branch_taken_0x158c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x158C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C60u;
        // 0x158c64: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c60) {
            ctx->pc = 0x158C84u;
            goto label_158c84;
        }
    }
    ctx->pc = 0x158C68u;
label_158c68:
    // 0x158c68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158c6c:
    // 0x158c6c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_158c70:
    // 0x158c70: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x158c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_158c74:
    // 0x158c74: 0x38420800  xori        $v0, $v0, 0x800
    ctx->pc = 0x158c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2048);
label_158c78:
    // 0x158c78: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x158c78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_158c7c:
    // 0x158c7c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x158c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_158c80:
    // 0x158c80: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x158c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_158c84:
    // 0x158c84: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x158c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_158c88:
    // 0x158c88: 0x5440fe79  bnel        $v0, $zero, . + 4 + (-0x187 << 2)
label_158c8c:
    if (ctx->pc == 0x158C8Cu) {
        ctx->pc = 0x158C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C88u;
        // 0x158c8c: 0x926302b4  lbu         $v1, 0x2B4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C90u;
        goto label_158c90;
    }
    ctx->pc = 0x158C88u;
    {
        const bool branch_taken_0x158c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c88) {
            ctx->pc = 0x158C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158C88u;
            // 0x158c8c: 0x926302b4  lbu         $v1, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158670;
        }
    }
    ctx->pc = 0x158C90u;
label_158c90:
    // 0x158c90: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x158c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_158c94:
    // 0x158c94: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x158c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_158c98:
    // 0x158c98: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x158c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_158c9c:
    // 0x158c9c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x158c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_158ca0:
    // 0x158ca0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x158ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_158ca4:
    // 0x158ca4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x158ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_158ca8:
    // 0x158ca8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x158ca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_158cac:
    // 0x158cac: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x158cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_158cb0:
    // 0x158cb0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x158cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_158cb4:
    // 0x158cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158cb8:
    // 0x158cb8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x158cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_158cbc:
    // 0x158cbc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x158cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_158cc0:
    // 0x158cc0: 0x3e00008  jr          $ra
label_158cc4:
    if (ctx->pc == 0x158CC4u) {
        ctx->pc = 0x158CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CC0u;
        // 0x158cc4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CC8u;
        goto label_fallthrough_0x158cc0;
    }
    ctx->pc = 0x158CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CC0u;
        // 0x158cc4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158cc0:
    ctx->pc = 0x158CC8u;
}
