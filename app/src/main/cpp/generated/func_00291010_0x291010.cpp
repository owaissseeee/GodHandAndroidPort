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

// Function: func_00291010
// Address: 0x291010 - 0x2917f8
void func_00291010_0x291010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00291010_0x291010");
#endif

    switch (ctx->pc) {
        case 0x291010u: goto label_291010;
        case 0x291014u: goto label_291014;
        case 0x291018u: goto label_291018;
        case 0x29101cu: goto label_29101c;
        case 0x291020u: goto label_291020;
        case 0x291024u: goto label_291024;
        case 0x291028u: goto label_291028;
        case 0x29102cu: goto label_29102c;
        case 0x291030u: goto label_291030;
        case 0x291034u: goto label_291034;
        case 0x291038u: goto label_291038;
        case 0x29103cu: goto label_29103c;
        case 0x291040u: goto label_291040;
        case 0x291044u: goto label_291044;
        case 0x291048u: goto label_291048;
        case 0x29104cu: goto label_29104c;
        case 0x291050u: goto label_291050;
        case 0x291054u: goto label_291054;
        case 0x291058u: goto label_291058;
        case 0x29105cu: goto label_29105c;
        case 0x291060u: goto label_291060;
        case 0x291064u: goto label_291064;
        case 0x291068u: goto label_291068;
        case 0x29106cu: goto label_29106c;
        case 0x291070u: goto label_291070;
        case 0x291074u: goto label_291074;
        case 0x291078u: goto label_291078;
        case 0x29107cu: goto label_29107c;
        case 0x291080u: goto label_291080;
        case 0x291084u: goto label_291084;
        case 0x291088u: goto label_291088;
        case 0x29108cu: goto label_29108c;
        case 0x291090u: goto label_291090;
        case 0x291094u: goto label_291094;
        case 0x291098u: goto label_291098;
        case 0x29109cu: goto label_29109c;
        case 0x2910a0u: goto label_2910a0;
        case 0x2910a4u: goto label_2910a4;
        case 0x2910a8u: goto label_2910a8;
        case 0x2910acu: goto label_2910ac;
        case 0x2910b0u: goto label_2910b0;
        case 0x2910b4u: goto label_2910b4;
        case 0x2910b8u: goto label_2910b8;
        case 0x2910bcu: goto label_2910bc;
        case 0x2910c0u: goto label_2910c0;
        case 0x2910c4u: goto label_2910c4;
        case 0x2910c8u: goto label_2910c8;
        case 0x2910ccu: goto label_2910cc;
        case 0x2910d0u: goto label_2910d0;
        case 0x2910d4u: goto label_2910d4;
        case 0x2910d8u: goto label_2910d8;
        case 0x2910dcu: goto label_2910dc;
        case 0x2910e0u: goto label_2910e0;
        case 0x2910e4u: goto label_2910e4;
        case 0x2910e8u: goto label_2910e8;
        case 0x2910ecu: goto label_2910ec;
        case 0x2910f0u: goto label_2910f0;
        case 0x2910f4u: goto label_2910f4;
        case 0x2910f8u: goto label_2910f8;
        case 0x2910fcu: goto label_2910fc;
        case 0x291100u: goto label_291100;
        case 0x291104u: goto label_291104;
        case 0x291108u: goto label_291108;
        case 0x29110cu: goto label_29110c;
        case 0x291110u: goto label_291110;
        case 0x291114u: goto label_291114;
        case 0x291118u: goto label_291118;
        case 0x29111cu: goto label_29111c;
        case 0x291120u: goto label_291120;
        case 0x291124u: goto label_291124;
        case 0x291128u: goto label_291128;
        case 0x29112cu: goto label_29112c;
        case 0x291130u: goto label_291130;
        case 0x291134u: goto label_291134;
        case 0x291138u: goto label_291138;
        case 0x29113cu: goto label_29113c;
        case 0x291140u: goto label_291140;
        case 0x291144u: goto label_291144;
        case 0x291148u: goto label_291148;
        case 0x29114cu: goto label_29114c;
        case 0x291150u: goto label_291150;
        case 0x291154u: goto label_291154;
        case 0x291158u: goto label_291158;
        case 0x29115cu: goto label_29115c;
        case 0x291160u: goto label_291160;
        case 0x291164u: goto label_291164;
        case 0x291168u: goto label_291168;
        case 0x29116cu: goto label_29116c;
        case 0x291170u: goto label_291170;
        case 0x291174u: goto label_291174;
        case 0x291178u: goto label_291178;
        case 0x29117cu: goto label_29117c;
        case 0x291180u: goto label_291180;
        case 0x291184u: goto label_291184;
        case 0x291188u: goto label_291188;
        case 0x29118cu: goto label_29118c;
        case 0x291190u: goto label_291190;
        case 0x291194u: goto label_291194;
        case 0x291198u: goto label_291198;
        case 0x29119cu: goto label_29119c;
        case 0x2911a0u: goto label_2911a0;
        case 0x2911a4u: goto label_2911a4;
        case 0x2911a8u: goto label_2911a8;
        case 0x2911acu: goto label_2911ac;
        case 0x2911b0u: goto label_2911b0;
        case 0x2911b4u: goto label_2911b4;
        case 0x2911b8u: goto label_2911b8;
        case 0x2911bcu: goto label_2911bc;
        case 0x2911c0u: goto label_2911c0;
        case 0x2911c4u: goto label_2911c4;
        case 0x2911c8u: goto label_2911c8;
        case 0x2911ccu: goto label_2911cc;
        case 0x2911d0u: goto label_2911d0;
        case 0x2911d4u: goto label_2911d4;
        case 0x2911d8u: goto label_2911d8;
        case 0x2911dcu: goto label_2911dc;
        case 0x2911e0u: goto label_2911e0;
        case 0x2911e4u: goto label_2911e4;
        case 0x2911e8u: goto label_2911e8;
        case 0x2911ecu: goto label_2911ec;
        case 0x2911f0u: goto label_2911f0;
        case 0x2911f4u: goto label_2911f4;
        case 0x2911f8u: goto label_2911f8;
        case 0x2911fcu: goto label_2911fc;
        case 0x291200u: goto label_291200;
        case 0x291204u: goto label_291204;
        case 0x291208u: goto label_291208;
        case 0x29120cu: goto label_29120c;
        case 0x291210u: goto label_291210;
        case 0x291214u: goto label_291214;
        case 0x291218u: goto label_291218;
        case 0x29121cu: goto label_29121c;
        case 0x291220u: goto label_291220;
        case 0x291224u: goto label_291224;
        case 0x291228u: goto label_291228;
        case 0x29122cu: goto label_29122c;
        case 0x291230u: goto label_291230;
        case 0x291234u: goto label_291234;
        case 0x291238u: goto label_291238;
        case 0x29123cu: goto label_29123c;
        case 0x291240u: goto label_291240;
        case 0x291244u: goto label_291244;
        case 0x291248u: goto label_291248;
        case 0x29124cu: goto label_29124c;
        case 0x291250u: goto label_291250;
        case 0x291254u: goto label_291254;
        case 0x291258u: goto label_291258;
        case 0x29125cu: goto label_29125c;
        case 0x291260u: goto label_291260;
        case 0x291264u: goto label_291264;
        case 0x291268u: goto label_291268;
        case 0x29126cu: goto label_29126c;
        case 0x291270u: goto label_291270;
        case 0x291274u: goto label_291274;
        case 0x291278u: goto label_291278;
        case 0x29127cu: goto label_29127c;
        case 0x291280u: goto label_291280;
        case 0x291284u: goto label_291284;
        case 0x291288u: goto label_291288;
        case 0x29128cu: goto label_29128c;
        case 0x291290u: goto label_291290;
        case 0x291294u: goto label_291294;
        case 0x291298u: goto label_291298;
        case 0x29129cu: goto label_29129c;
        case 0x2912a0u: goto label_2912a0;
        case 0x2912a4u: goto label_2912a4;
        case 0x2912a8u: goto label_2912a8;
        case 0x2912acu: goto label_2912ac;
        case 0x2912b0u: goto label_2912b0;
        case 0x2912b4u: goto label_2912b4;
        case 0x2912b8u: goto label_2912b8;
        case 0x2912bcu: goto label_2912bc;
        case 0x2912c0u: goto label_2912c0;
        case 0x2912c4u: goto label_2912c4;
        case 0x2912c8u: goto label_2912c8;
        case 0x2912ccu: goto label_2912cc;
        case 0x2912d0u: goto label_2912d0;
        case 0x2912d4u: goto label_2912d4;
        case 0x2912d8u: goto label_2912d8;
        case 0x2912dcu: goto label_2912dc;
        case 0x2912e0u: goto label_2912e0;
        case 0x2912e4u: goto label_2912e4;
        case 0x2912e8u: goto label_2912e8;
        case 0x2912ecu: goto label_2912ec;
        case 0x2912f0u: goto label_2912f0;
        case 0x2912f4u: goto label_2912f4;
        case 0x2912f8u: goto label_2912f8;
        case 0x2912fcu: goto label_2912fc;
        case 0x291300u: goto label_291300;
        case 0x291304u: goto label_291304;
        case 0x291308u: goto label_291308;
        case 0x29130cu: goto label_29130c;
        case 0x291310u: goto label_291310;
        case 0x291314u: goto label_291314;
        case 0x291318u: goto label_291318;
        case 0x29131cu: goto label_29131c;
        case 0x291320u: goto label_291320;
        case 0x291324u: goto label_291324;
        case 0x291328u: goto label_291328;
        case 0x29132cu: goto label_29132c;
        case 0x291330u: goto label_291330;
        case 0x291334u: goto label_291334;
        case 0x291338u: goto label_291338;
        case 0x29133cu: goto label_29133c;
        case 0x291340u: goto label_291340;
        case 0x291344u: goto label_291344;
        case 0x291348u: goto label_291348;
        case 0x29134cu: goto label_29134c;
        case 0x291350u: goto label_291350;
        case 0x291354u: goto label_291354;
        case 0x291358u: goto label_291358;
        case 0x29135cu: goto label_29135c;
        case 0x291360u: goto label_291360;
        case 0x291364u: goto label_291364;
        case 0x291368u: goto label_291368;
        case 0x29136cu: goto label_29136c;
        case 0x291370u: goto label_291370;
        case 0x291374u: goto label_291374;
        case 0x291378u: goto label_291378;
        case 0x29137cu: goto label_29137c;
        case 0x291380u: goto label_291380;
        case 0x291384u: goto label_291384;
        case 0x291388u: goto label_291388;
        case 0x29138cu: goto label_29138c;
        case 0x291390u: goto label_291390;
        case 0x291394u: goto label_291394;
        case 0x291398u: goto label_291398;
        case 0x29139cu: goto label_29139c;
        case 0x2913a0u: goto label_2913a0;
        case 0x2913a4u: goto label_2913a4;
        case 0x2913a8u: goto label_2913a8;
        case 0x2913acu: goto label_2913ac;
        case 0x2913b0u: goto label_2913b0;
        case 0x2913b4u: goto label_2913b4;
        case 0x2913b8u: goto label_2913b8;
        case 0x2913bcu: goto label_2913bc;
        case 0x2913c0u: goto label_2913c0;
        case 0x2913c4u: goto label_2913c4;
        case 0x2913c8u: goto label_2913c8;
        case 0x2913ccu: goto label_2913cc;
        case 0x2913d0u: goto label_2913d0;
        case 0x2913d4u: goto label_2913d4;
        case 0x2913d8u: goto label_2913d8;
        case 0x2913dcu: goto label_2913dc;
        case 0x2913e0u: goto label_2913e0;
        case 0x2913e4u: goto label_2913e4;
        case 0x2913e8u: goto label_2913e8;
        case 0x2913ecu: goto label_2913ec;
        case 0x2913f0u: goto label_2913f0;
        case 0x2913f4u: goto label_2913f4;
        case 0x2913f8u: goto label_2913f8;
        case 0x2913fcu: goto label_2913fc;
        case 0x291400u: goto label_291400;
        case 0x291404u: goto label_291404;
        case 0x291408u: goto label_291408;
        case 0x29140cu: goto label_29140c;
        case 0x291410u: goto label_291410;
        case 0x291414u: goto label_291414;
        case 0x291418u: goto label_291418;
        case 0x29141cu: goto label_29141c;
        case 0x291420u: goto label_291420;
        case 0x291424u: goto label_291424;
        case 0x291428u: goto label_291428;
        case 0x29142cu: goto label_29142c;
        case 0x291430u: goto label_291430;
        case 0x291434u: goto label_291434;
        case 0x291438u: goto label_291438;
        case 0x29143cu: goto label_29143c;
        case 0x291440u: goto label_291440;
        case 0x291444u: goto label_291444;
        case 0x291448u: goto label_291448;
        case 0x29144cu: goto label_29144c;
        case 0x291450u: goto label_291450;
        case 0x291454u: goto label_291454;
        case 0x291458u: goto label_291458;
        case 0x29145cu: goto label_29145c;
        case 0x291460u: goto label_291460;
        case 0x291464u: goto label_291464;
        case 0x291468u: goto label_291468;
        case 0x29146cu: goto label_29146c;
        case 0x291470u: goto label_291470;
        case 0x291474u: goto label_291474;
        case 0x291478u: goto label_291478;
        case 0x29147cu: goto label_29147c;
        case 0x291480u: goto label_291480;
        case 0x291484u: goto label_291484;
        case 0x291488u: goto label_291488;
        case 0x29148cu: goto label_29148c;
        case 0x291490u: goto label_291490;
        case 0x291494u: goto label_291494;
        case 0x291498u: goto label_291498;
        case 0x29149cu: goto label_29149c;
        case 0x2914a0u: goto label_2914a0;
        case 0x2914a4u: goto label_2914a4;
        case 0x2914a8u: goto label_2914a8;
        case 0x2914acu: goto label_2914ac;
        case 0x2914b0u: goto label_2914b0;
        case 0x2914b4u: goto label_2914b4;
        case 0x2914b8u: goto label_2914b8;
        case 0x2914bcu: goto label_2914bc;
        case 0x2914c0u: goto label_2914c0;
        case 0x2914c4u: goto label_2914c4;
        case 0x2914c8u: goto label_2914c8;
        case 0x2914ccu: goto label_2914cc;
        case 0x2914d0u: goto label_2914d0;
        case 0x2914d4u: goto label_2914d4;
        case 0x2914d8u: goto label_2914d8;
        case 0x2914dcu: goto label_2914dc;
        case 0x2914e0u: goto label_2914e0;
        case 0x2914e4u: goto label_2914e4;
        case 0x2914e8u: goto label_2914e8;
        case 0x2914ecu: goto label_2914ec;
        case 0x2914f0u: goto label_2914f0;
        case 0x2914f4u: goto label_2914f4;
        case 0x2914f8u: goto label_2914f8;
        case 0x2914fcu: goto label_2914fc;
        case 0x291500u: goto label_291500;
        case 0x291504u: goto label_291504;
        case 0x291508u: goto label_291508;
        case 0x29150cu: goto label_29150c;
        case 0x291510u: goto label_291510;
        case 0x291514u: goto label_291514;
        case 0x291518u: goto label_291518;
        case 0x29151cu: goto label_29151c;
        case 0x291520u: goto label_291520;
        case 0x291524u: goto label_291524;
        case 0x291528u: goto label_291528;
        case 0x29152cu: goto label_29152c;
        case 0x291530u: goto label_291530;
        case 0x291534u: goto label_291534;
        case 0x291538u: goto label_291538;
        case 0x29153cu: goto label_29153c;
        case 0x291540u: goto label_291540;
        case 0x291544u: goto label_291544;
        case 0x291548u: goto label_291548;
        case 0x29154cu: goto label_29154c;
        case 0x291550u: goto label_291550;
        case 0x291554u: goto label_291554;
        case 0x291558u: goto label_291558;
        case 0x29155cu: goto label_29155c;
        case 0x291560u: goto label_291560;
        case 0x291564u: goto label_291564;
        case 0x291568u: goto label_291568;
        case 0x29156cu: goto label_29156c;
        case 0x291570u: goto label_291570;
        case 0x291574u: goto label_291574;
        case 0x291578u: goto label_291578;
        case 0x29157cu: goto label_29157c;
        case 0x291580u: goto label_291580;
        case 0x291584u: goto label_291584;
        case 0x291588u: goto label_291588;
        case 0x29158cu: goto label_29158c;
        case 0x291590u: goto label_291590;
        case 0x291594u: goto label_291594;
        case 0x291598u: goto label_291598;
        case 0x29159cu: goto label_29159c;
        case 0x2915a0u: goto label_2915a0;
        case 0x2915a4u: goto label_2915a4;
        case 0x2915a8u: goto label_2915a8;
        case 0x2915acu: goto label_2915ac;
        case 0x2915b0u: goto label_2915b0;
        case 0x2915b4u: goto label_2915b4;
        case 0x2915b8u: goto label_2915b8;
        case 0x2915bcu: goto label_2915bc;
        case 0x2915c0u: goto label_2915c0;
        case 0x2915c4u: goto label_2915c4;
        case 0x2915c8u: goto label_2915c8;
        case 0x2915ccu: goto label_2915cc;
        case 0x2915d0u: goto label_2915d0;
        case 0x2915d4u: goto label_2915d4;
        case 0x2915d8u: goto label_2915d8;
        case 0x2915dcu: goto label_2915dc;
        case 0x2915e0u: goto label_2915e0;
        case 0x2915e4u: goto label_2915e4;
        case 0x2915e8u: goto label_2915e8;
        case 0x2915ecu: goto label_2915ec;
        case 0x2915f0u: goto label_2915f0;
        case 0x2915f4u: goto label_2915f4;
        case 0x2915f8u: goto label_2915f8;
        case 0x2915fcu: goto label_2915fc;
        case 0x291600u: goto label_291600;
        case 0x291604u: goto label_291604;
        case 0x291608u: goto label_291608;
        case 0x29160cu: goto label_29160c;
        case 0x291610u: goto label_291610;
        case 0x291614u: goto label_291614;
        case 0x291618u: goto label_291618;
        case 0x29161cu: goto label_29161c;
        case 0x291620u: goto label_291620;
        case 0x291624u: goto label_291624;
        case 0x291628u: goto label_291628;
        case 0x29162cu: goto label_29162c;
        case 0x291630u: goto label_291630;
        case 0x291634u: goto label_291634;
        case 0x291638u: goto label_291638;
        case 0x29163cu: goto label_29163c;
        case 0x291640u: goto label_291640;
        case 0x291644u: goto label_291644;
        case 0x291648u: goto label_291648;
        case 0x29164cu: goto label_29164c;
        case 0x291650u: goto label_291650;
        case 0x291654u: goto label_291654;
        case 0x291658u: goto label_291658;
        case 0x29165cu: goto label_29165c;
        case 0x291660u: goto label_291660;
        case 0x291664u: goto label_291664;
        case 0x291668u: goto label_291668;
        case 0x29166cu: goto label_29166c;
        case 0x291670u: goto label_291670;
        case 0x291674u: goto label_291674;
        case 0x291678u: goto label_291678;
        case 0x29167cu: goto label_29167c;
        case 0x291680u: goto label_291680;
        case 0x291684u: goto label_291684;
        case 0x291688u: goto label_291688;
        case 0x29168cu: goto label_29168c;
        case 0x291690u: goto label_291690;
        case 0x291694u: goto label_291694;
        case 0x291698u: goto label_291698;
        case 0x29169cu: goto label_29169c;
        case 0x2916a0u: goto label_2916a0;
        case 0x2916a4u: goto label_2916a4;
        case 0x2916a8u: goto label_2916a8;
        case 0x2916acu: goto label_2916ac;
        case 0x2916b0u: goto label_2916b0;
        case 0x2916b4u: goto label_2916b4;
        case 0x2916b8u: goto label_2916b8;
        case 0x2916bcu: goto label_2916bc;
        case 0x2916c0u: goto label_2916c0;
        case 0x2916c4u: goto label_2916c4;
        case 0x2916c8u: goto label_2916c8;
        case 0x2916ccu: goto label_2916cc;
        case 0x2916d0u: goto label_2916d0;
        case 0x2916d4u: goto label_2916d4;
        case 0x2916d8u: goto label_2916d8;
        case 0x2916dcu: goto label_2916dc;
        case 0x2916e0u: goto label_2916e0;
        case 0x2916e4u: goto label_2916e4;
        case 0x2916e8u: goto label_2916e8;
        case 0x2916ecu: goto label_2916ec;
        case 0x2916f0u: goto label_2916f0;
        case 0x2916f4u: goto label_2916f4;
        case 0x2916f8u: goto label_2916f8;
        case 0x2916fcu: goto label_2916fc;
        case 0x291700u: goto label_291700;
        case 0x291704u: goto label_291704;
        case 0x291708u: goto label_291708;
        case 0x29170cu: goto label_29170c;
        case 0x291710u: goto label_291710;
        case 0x291714u: goto label_291714;
        case 0x291718u: goto label_291718;
        case 0x29171cu: goto label_29171c;
        case 0x291720u: goto label_291720;
        case 0x291724u: goto label_291724;
        case 0x291728u: goto label_291728;
        case 0x29172cu: goto label_29172c;
        case 0x291730u: goto label_291730;
        case 0x291734u: goto label_291734;
        case 0x291738u: goto label_291738;
        case 0x29173cu: goto label_29173c;
        case 0x291740u: goto label_291740;
        case 0x291744u: goto label_291744;
        case 0x291748u: goto label_291748;
        case 0x29174cu: goto label_29174c;
        case 0x291750u: goto label_291750;
        case 0x291754u: goto label_291754;
        case 0x291758u: goto label_291758;
        case 0x29175cu: goto label_29175c;
        case 0x291760u: goto label_291760;
        case 0x291764u: goto label_291764;
        case 0x291768u: goto label_291768;
        case 0x29176cu: goto label_29176c;
        case 0x291770u: goto label_291770;
        case 0x291774u: goto label_291774;
        case 0x291778u: goto label_291778;
        case 0x29177cu: goto label_29177c;
        case 0x291780u: goto label_291780;
        case 0x291784u: goto label_291784;
        case 0x291788u: goto label_291788;
        case 0x29178cu: goto label_29178c;
        case 0x291790u: goto label_291790;
        case 0x291794u: goto label_291794;
        case 0x291798u: goto label_291798;
        case 0x29179cu: goto label_29179c;
        case 0x2917a0u: goto label_2917a0;
        case 0x2917a4u: goto label_2917a4;
        case 0x2917a8u: goto label_2917a8;
        case 0x2917acu: goto label_2917ac;
        case 0x2917b0u: goto label_2917b0;
        case 0x2917b4u: goto label_2917b4;
        case 0x2917b8u: goto label_2917b8;
        case 0x2917bcu: goto label_2917bc;
        case 0x2917c0u: goto label_2917c0;
        case 0x2917c4u: goto label_2917c4;
        case 0x2917c8u: goto label_2917c8;
        case 0x2917ccu: goto label_2917cc;
        case 0x2917d0u: goto label_2917d0;
        case 0x2917d4u: goto label_2917d4;
        case 0x2917d8u: goto label_2917d8;
        case 0x2917dcu: goto label_2917dc;
        case 0x2917e0u: goto label_2917e0;
        case 0x2917e4u: goto label_2917e4;
        case 0x2917e8u: goto label_2917e8;
        case 0x2917ecu: goto label_2917ec;
        case 0x2917f0u: goto label_2917f0;
        case 0x2917f4u: goto label_2917f4;
        default: break;
    }

    ctx->pc = 0x291010u;

label_291010:
    // 0x291010: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x291010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_291014:
    // 0x291014: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x291014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_291018:
    // 0x291018: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x291018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29101c:
    // 0x29101c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x29101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_291020:
    // 0x291020: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_291024:
    // 0x291024: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x291024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_291028:
    // 0x291028: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x291028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29102c:
    // 0x29102c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x29102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_291030:
    // 0x291030: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x291030u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_291034:
    // 0x291034: 0xe7bb0168  swc1        $f27, 0x168($sp)
    ctx->pc = 0x291034u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_291038:
    // 0x291038: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x291038u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29103c:
    // 0x29103c: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x29103cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_291040:
    // 0x291040: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x291040u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_291044:
    // 0x291044: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x291044u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_291048:
    // 0x291048: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x291048u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_29104c:
    // 0x29104c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x29104cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_291050:
    // 0x291050: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x291050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_291054:
    // 0x291054: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x291054u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_291058:
    // 0x291058: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x291058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_29105c:
    // 0x29105c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x29105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_291060:
    // 0x291060: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x291060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_291064:
    // 0x291064: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x291064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_291068:
    // 0x291068: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x291068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_29106c:
    // 0x29106c: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x29106cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_291070:
    // 0x291070: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x291070u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_291074:
    // 0x291074: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x291074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_291078:
    // 0x291078: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x291078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_29107c:
    // 0x29107c: 0x3c015a0e  lui         $at, 0x5A0E
    ctx->pc = 0x29107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23054 << 16));
label_291080:
    // 0x291080: 0x34211bca  ori         $at, $at, 0x1BCA
    ctx->pc = 0x291080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7114);
label_291084:
    // 0x291084: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x291084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_291088:
    // 0x291088: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x291088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_29108c:
    // 0x29108c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x29108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_291090:
    // 0x291090: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x291090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_291094:
    // 0x291094: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
label_291098:
    if (ctx->pc == 0x291098u) {
        ctx->pc = 0x291098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291094u;
        // 0x291098: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29109Cu;
        goto label_29109c;
    }
    ctx->pc = 0x291094u;
    {
        const bool branch_taken_0x291094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x291098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291094u;
        // 0x291098: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291094) {
            ctx->pc = 0x2910B8u;
            goto label_2910b8;
        }
    }
    ctx->pc = 0x29109Cu;
label_29109c:
    // 0x29109c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2910a0:
    // 0x2910a0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2910a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2910a4:
    // 0x2910a4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2910a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2910a8:
    // 0x2910a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2910a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2910ac:
    // 0x2910ac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2910acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2910b0:
    // 0x2910b0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2910b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2910b4:
    // 0x2910b4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2910b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2910b8:
    // 0x2910b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2910bc:
    // 0x2910bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2910bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2910c0:
    // 0x2910c0: 0x8c910500  lw          $s1, 0x500($a0)
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
label_2910c4:
    // 0x2910c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2910c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2910c8:
    // 0x2910c8: 0x12200109  beqz        $s1, . + 4 + (0x109 << 2)
label_2910cc:
    if (ctx->pc == 0x2910CCu) {
        ctx->pc = 0x2910CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910C8u;
        // 0x2910cc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910D0u;
        goto label_2910d0;
    }
    ctx->pc = 0x2910C8u;
    {
        const bool branch_taken_0x2910c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910C8u;
        // 0x2910cc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910c8) {
            ctx->pc = 0x2914F0u;
            goto label_2914f0;
        }
    }
    ctx->pc = 0x2910D0u;
label_2910d0:
    // 0x2910d0: 0x2682fffd  addiu       $v0, $s4, -0x3
    ctx->pc = 0x2910d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
label_2910d4:
    // 0x2910d4: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x2910d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_2910d8:
    // 0x2910d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2910d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2910dc:
    // 0x2910dc: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x2910dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_2910e0:
    // 0x2910e0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2910e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_2910e4:
    // 0x2910e4: 0x46000e86  mov.s       $f26, $f1
    ctx->pc = 0x2910e4u;
    ctx->f[26] = FPU_MOV_S(ctx->f[1]);
label_2910e8:
    // 0x2910e8: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x2910e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
label_2910ec:
    // 0x2910ec: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2910ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2910f0:
    // 0x2910f0: 0x24150260  addiu       $s5, $zero, 0x260
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_2910f4:
    // 0x2910f4: 0x2413026a  addiu       $s3, $zero, 0x26A
    ctx->pc = 0x2910f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_2910f8:
    // 0x2910f8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2910f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2910fc:
    // 0x2910fc: 0x0  nop
    ctx->pc = 0x2910fcu;
    // NOP
label_291100:
    // 0x291100: 0x520000f9  beql        $s0, $zero, . + 4 + (0xF9 << 2)
label_291104:
    if (ctx->pc == 0x291104u) {
        ctx->pc = 0x291104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291100u;
        // 0x291104: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291108u;
        goto label_291108;
    }
    ctx->pc = 0x291100u;
    {
        const bool branch_taken_0x291100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x291100) {
            ctx->pc = 0x291104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291100u;
            // 0x291104: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291108u;
label_291108:
    // 0x291108: 0x521700f7  beql        $s0, $s7, . + 4 + (0xF7 << 2)
label_29110c:
    if (ctx->pc == 0x29110Cu) {
        ctx->pc = 0x29110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291108u;
        // 0x29110c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291110u;
        goto label_291110;
    }
    ctx->pc = 0x291108u;
    {
        const bool branch_taken_0x291108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        if (branch_taken_0x291108) {
            ctx->pc = 0x29110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291108u;
            // 0x29110c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291110u;
label_291110:
    // 0x291110: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x291110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_291114:
    // 0x291114: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x291114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_291118:
    // 0x291118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29111c:
    if (ctx->pc == 0x29111Cu) {
        ctx->pc = 0x29111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291118u;
        // 0x29111c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291120u;
        goto label_291120;
    }
    ctx->pc = 0x291118u;
    {
        const bool branch_taken_0x291118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291118u;
        // 0x29111c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291118) {
            ctx->pc = 0x291128u;
            goto label_291128;
        }
    }
    ctx->pc = 0x291120u;
label_291120:
    // 0x291120: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x291120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_291124:
    // 0x291124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291128:
    // 0x291128: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x291128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_29112c:
    // 0x29112c: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
label_291130:
    if (ctx->pc == 0x291130u) {
        ctx->pc = 0x291130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29112Cu;
        // 0x291130: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291134u;
        goto label_291134;
    }
    ctx->pc = 0x29112Cu;
    {
        const bool branch_taken_0x29112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29112Cu;
        // 0x291130: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29112c) {
            ctx->pc = 0x2914E4u;
            goto label_2914e4;
        }
    }
    ctx->pc = 0x291134u;
label_291134:
    // 0x291134: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x291134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_291138:
    // 0x291138: 0x544000eb  bnel        $v0, $zero, . + 4 + (0xEB << 2)
label_29113c:
    if (ctx->pc == 0x29113Cu) {
        ctx->pc = 0x29113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291138u;
        // 0x29113c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291140u;
        goto label_291140;
    }
    ctx->pc = 0x291138u;
    {
        const bool branch_taken_0x291138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291138) {
            ctx->pc = 0x29113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291138u;
            // 0x29113c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291140u;
label_291140:
    // 0x291140: 0x92020617  lbu         $v0, 0x617($s0)
    ctx->pc = 0x291140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1559)));
label_291144:
    // 0x291144: 0x544000e8  bnel        $v0, $zero, . + 4 + (0xE8 << 2)
label_291148:
    if (ctx->pc == 0x291148u) {
        ctx->pc = 0x291148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291144u;
        // 0x291148: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29114Cu;
        goto label_29114c;
    }
    ctx->pc = 0x291144u;
    {
        const bool branch_taken_0x291144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291144) {
            ctx->pc = 0x291148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291144u;
            // 0x291148: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x29114Cu;
label_29114c:
    // 0x29114c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x29114cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_291150:
    // 0x291150: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_291154:
    if (ctx->pc == 0x291154u) {
        ctx->pc = 0x291154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291150u;
        // 0x291154: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291158u;
        goto label_291158;
    }
    ctx->pc = 0x291150u;
    {
        const bool branch_taken_0x291150 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x291154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291150u;
        // 0x291154: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291150) {
            ctx->pc = 0x29117Cu;
            goto label_29117c;
        }
    }
    ctx->pc = 0x291158u;
label_291158:
    // 0x291158: 0x544000e3  bnel        $v0, $zero, . + 4 + (0xE3 << 2)
label_29115c:
    if (ctx->pc == 0x29115Cu) {
        ctx->pc = 0x29115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291158u;
        // 0x29115c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291160u;
        goto label_291160;
    }
    ctx->pc = 0x291158u;
    {
        const bool branch_taken_0x291158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291158) {
            ctx->pc = 0x29115Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291158u;
            // 0x29115c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291160u;
label_291160:
    // 0x291160: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x291160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_291164:
    // 0x291164: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x291164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_291168:
    // 0x291168: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x291168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_29116c:
    // 0x29116c: 0x40f809  jalr        $v0
label_291170:
    if (ctx->pc == 0x291170u) {
        ctx->pc = 0x291170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29116Cu;
        // 0x291170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291174u;
        goto label_291174;
    }
    ctx->pc = 0x29116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291174u);
        ctx->pc = 0x291170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29116Cu;
        // 0x291170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29116Cu, 0x291174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291174u;
label_291174:
    // 0x291174: 0x504000dc  beql        $v0, $zero, . + 4 + (0xDC << 2)
label_291178:
    if (ctx->pc == 0x291178u) {
        ctx->pc = 0x291178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291174u;
        // 0x291178: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29117Cu;
        goto label_29117c;
    }
    ctx->pc = 0x291174u;
    {
        const bool branch_taken_0x291174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291174) {
            ctx->pc = 0x291178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291174u;
            // 0x291178: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x29117Cu;
label_29117c:
    // 0x29117c: 0x16960041  bne         $s4, $s6, . + 4 + (0x41 << 2)
label_291180:
    if (ctx->pc == 0x291180u) {
        ctx->pc = 0x291180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29117Cu;
        // 0x291180: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291184u;
        goto label_291184;
    }
    ctx->pc = 0x29117Cu;
    {
        const bool branch_taken_0x29117c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x291180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29117Cu;
        // 0x291180: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29117c) {
            ctx->pc = 0x291284u;
            goto label_291284;
        }
    }
    ctx->pc = 0x291184u;
label_291184:
    // 0x291184: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x291184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_291188:
    // 0x291188: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x291188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_29118c:
    // 0x29118c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x29118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_291190:
    // 0x291190: 0x40f809  jalr        $v0
label_291194:
    if (ctx->pc == 0x291194u) {
        ctx->pc = 0x291194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291190u;
        // 0x291194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291198u;
        goto label_291198;
    }
    ctx->pc = 0x291190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291198u);
        ctx->pc = 0x291194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291190u;
        // 0x291194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291190u, 0x291198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291198u;
label_291198:
    // 0x291198: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x291198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29119c:
    // 0x29119c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2911a0:
    // 0x2911a0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2911a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2911a4:
    // 0x2911a4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2911a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2911a8:
    // 0x2911a8: 0x0  nop
    ctx->pc = 0x2911a8u;
    // NOP
label_2911ac:
    // 0x2911ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2911b0:
    if (ctx->pc == 0x2911B0u) {
        ctx->pc = 0x2911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911ACu;
        // 0x2911b0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2911B4u;
        goto label_2911b4;
    }
    ctx->pc = 0x2911ACu;
    {
        const bool branch_taken_0x2911ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911ACu;
        // 0x2911b0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911ac) {
            ctx->pc = 0x2911B8u;
            goto label_2911b8;
        }
    }
    ctx->pc = 0x2911B4u;
label_2911b4:
    // 0x2911b4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2911b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2911b8:
    // 0x2911b8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2911b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_2911bc:
    // 0x2911bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2911bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2911c0:
    // 0x2911c0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2911c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2911c4:
    // 0x2911c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2911c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2911c8:
    // 0x2911c8: 0x0  nop
    ctx->pc = 0x2911c8u;
    // NOP
label_2911cc:
    // 0x2911cc: 0x450300c6  bc1tl       . + 4 + (0xC6 << 2)
label_2911d0:
    if (ctx->pc == 0x2911D0u) {
        ctx->pc = 0x2911D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911CCu;
        // 0x2911d0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2911D4u;
        goto label_2911d4;
    }
    ctx->pc = 0x2911CCu;
    {
        const bool branch_taken_0x2911cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2911cc) {
            ctx->pc = 0x2911D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2911CCu;
            // 0x2911d0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x2911D4u;
label_2911d4:
    // 0x2911d4: 0x4601d034  c.lt.s      $f26, $f1
    ctx->pc = 0x2911d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2911d8:
    // 0x2911d8: 0x0  nop
    ctx->pc = 0x2911d8u;
    // NOP
label_2911dc:
    // 0x2911dc: 0x45020044  bc1fl       . + 4 + (0x44 << 2)
label_2911e0:
    if (ctx->pc == 0x2911E0u) {
        ctx->pc = 0x2911E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911DCu;
        // 0x2911e0: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2911E4u;
        goto label_2911e4;
    }
    ctx->pc = 0x2911DCu;
    {
        const bool branch_taken_0x2911dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2911dc) {
            ctx->pc = 0x2911E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2911DCu;
            // 0x2911e0: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2912F0u;
            goto label_2912f0;
        }
    }
    ctx->pc = 0x2911E4u;
label_2911e4:
    // 0x2911e4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x2911e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2911e8:
    // 0x2911e8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2911e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2911ec:
    // 0x2911ec: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2911ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2911f0:
    // 0x2911f0: 0x40f809  jalr        $v0
label_2911f4:
    if (ctx->pc == 0x2911F4u) {
        ctx->pc = 0x2911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911F0u;
        // 0x2911f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2911F8u;
        goto label_2911f8;
    }
    ctx->pc = 0x2911F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2911F8u);
        ctx->pc = 0x2911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911F0u;
        // 0x2911f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911F0u, 0x2911F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2911F8u;
label_2911f8:
    // 0x2911f8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2911f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_2911fc:
    // 0x2911fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2911fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_291200:
    // 0x291200: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x291200u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_291204:
    // 0x291204: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x291204u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_291208:
    // 0x291208: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x291208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_29120c:
    // 0x29120c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x29120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_291210:
    // 0x291210: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x291210u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_291214:
    // 0x291214: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x291214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_291218:
    // 0x291218: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x291218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29121c:
    // 0x29121c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x29121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291220:
    // 0x291220: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x291220u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_291224:
    // 0x291224: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x291224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_291228:
    // 0x291228: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x291228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_29122c:
    // 0x29122c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x29122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_291230:
    // 0x291230: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x291230u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_291234:
    // 0x291234: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x291234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_291238:
    // 0x291238: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x291238u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
label_29123c:
    // 0x29123c: 0x0  nop
    ctx->pc = 0x29123cu;
    // NOP
label_291240:
    // 0x291240: 0x0  nop
    ctx->pc = 0x291240u;
    // NOP
label_291244:
    // 0x291244: 0x460d0344  c1          0xD0344
    ctx->pc = 0x291244u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
label_291248:
    // 0x291248: 0xc07e060  jal         func_1F8180
label_29124c:
    if (ctx->pc == 0x29124Cu) {
        ctx->pc = 0x291250u;
        goto label_291250;
    }
    ctx->pc = 0x291248u;
    SET_GPR_U32(ctx, 31, 0x291250u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x291248u, 0x291250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291250u;
label_291250:
    // 0x291250: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x291250u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_291254:
    // 0x291254: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x291254u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_291258:
    // 0x291258: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x291258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29125c:
    // 0x29125c: 0x0  nop
    ctx->pc = 0x29125cu;
    // NOP
label_291260:
    // 0x291260: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_291264:
    if (ctx->pc == 0x291264u) {
        ctx->pc = 0x291264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291260u;
        // 0x291264: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291268u;
        goto label_291268;
    }
    ctx->pc = 0x291260u;
    {
        const bool branch_taken_0x291260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291260) {
            ctx->pc = 0x291264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291260u;
            // 0x291264: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x291268u;
            goto label_291268;
        }
    }
    ctx->pc = 0x291268u;
label_291268:
    // 0x291268: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x291268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_29126c:
    // 0x29126c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x29126cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_291270:
    // 0x291270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_291274:
    // 0x291274: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x291274u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_291278:
    // 0x291278: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x291278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29127c:
    // 0x29127c: 0x10000018  b           . + 4 + (0x18 << 2)
label_291280:
    if (ctx->pc == 0x291280u) {
        ctx->pc = 0x291284u;
        goto label_291284;
    }
    ctx->pc = 0x29127Cu;
    {
        const bool branch_taken_0x29127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29127c) {
            ctx->pc = 0x2912E0u;
            goto label_2912e0;
        }
    }
    ctx->pc = 0x291284u;
label_291284:
    // 0x291284: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x291284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_291288:
    // 0x291288: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x291288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_29128c:
    // 0x29128c: 0x40f809  jalr        $v0
label_291290:
    if (ctx->pc == 0x291290u) {
        ctx->pc = 0x291290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29128Cu;
        // 0x291290: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291294u;
        goto label_291294;
    }
    ctx->pc = 0x29128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291294u);
        ctx->pc = 0x291290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29128Cu;
        // 0x291290: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29128Cu, 0x291294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291294u;
label_291294:
    // 0x291294: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_291298:
    if (ctx->pc == 0x291298u) {
        ctx->pc = 0x291298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291294u;
        // 0x291298: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29129Cu;
        goto label_29129c;
    }
    ctx->pc = 0x291294u;
    {
        const bool branch_taken_0x291294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291294) {
            ctx->pc = 0x291298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291294u;
            // 0x291298: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2912F0u;
            goto label_2912f0;
        }
    }
    ctx->pc = 0x29129Cu;
label_29129c:
    // 0x29129c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x29129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2912a0:
    // 0x2912a0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2912a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2912a4:
    // 0x2912a4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2912a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2912a8:
    // 0x2912a8: 0x40f809  jalr        $v0
label_2912ac:
    if (ctx->pc == 0x2912ACu) {
        ctx->pc = 0x2912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912A8u;
        // 0x2912ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2912B0u;
        goto label_2912b0;
    }
    ctx->pc = 0x2912A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2912B0u);
        ctx->pc = 0x2912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912A8u;
        // 0x2912ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2912A8u, 0x2912B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2912B0u;
label_2912b0:
    // 0x2912b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2912b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2912b4:
    // 0x2912b4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2912b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2912b8:
    // 0x2912b8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2912b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2912bc:
    // 0x2912bc: 0x46190834  c.lt.s      $f1, $f25
    ctx->pc = 0x2912bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2912c0:
    // 0x2912c0: 0x0  nop
    ctx->pc = 0x2912c0u;
    // NOP
label_2912c4:
    // 0x2912c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2912c8:
    if (ctx->pc == 0x2912C8u) {
        ctx->pc = 0x2912C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912C4u;
        // 0x2912c8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2912CCu;
        goto label_2912cc;
    }
    ctx->pc = 0x2912C4u;
    {
        const bool branch_taken_0x2912c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2912C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912C4u;
        // 0x2912c8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912c4) {
            ctx->pc = 0x2912D0u;
            goto label_2912d0;
        }
    }
    ctx->pc = 0x2912CCu;
label_2912cc:
    // 0x2912cc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2912ccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2912d0:
    // 0x2912d0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2912d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2912d4:
    // 0x2912d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2912d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2912d8:
    // 0x2912d8: 0x0  nop
    ctx->pc = 0x2912d8u;
    // NOP
label_2912dc:
    // 0x2912dc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2912dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2912e0:
    // 0x2912e0: 0x0  nop
    ctx->pc = 0x2912e0u;
    // NOP
label_2912e4:
    // 0x2912e4: 0x45030080  bc1tl       . + 4 + (0x80 << 2)
label_2912e8:
    if (ctx->pc == 0x2912E8u) {
        ctx->pc = 0x2912E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912E4u;
        // 0x2912e8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2912ECu;
        goto label_2912ec;
    }
    ctx->pc = 0x2912E4u;
    {
        const bool branch_taken_0x2912e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2912e4) {
            ctx->pc = 0x2912E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2912E4u;
            // 0x2912e8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x2912ECu;
label_2912ec:
    // 0x2912ec: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2912ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_2912f0:
    // 0x2912f0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2912f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2912f4:
    // 0x2912f4: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2912f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_2912f8:
    // 0x2912f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2912fc:
    if (ctx->pc == 0x2912FCu) {
        ctx->pc = 0x2912FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912F8u;
        // 0x2912fc: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291300u;
        goto label_291300;
    }
    ctx->pc = 0x2912F8u;
    {
        const bool branch_taken_0x2912f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912F8u;
        // 0x2912fc: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912f8) {
            ctx->pc = 0x291318u;
            goto label_291318;
        }
    }
    ctx->pc = 0x291300u;
label_291300:
    // 0x291300: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_291304:
    if (ctx->pc == 0x291304u) {
        ctx->pc = 0x291308u;
        goto label_291308;
    }
    ctx->pc = 0x291300u;
    {
        const bool branch_taken_0x291300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291300) {
            ctx->pc = 0x291328u;
            goto label_291328;
        }
    }
    ctx->pc = 0x291308u;
label_291308:
    // 0x291308: 0x10750007  beq         $v1, $s5, . + 4 + (0x7 << 2)
label_29130c:
    if (ctx->pc == 0x29130Cu) {
        ctx->pc = 0x291310u;
        goto label_291310;
    }
    ctx->pc = 0x291308u;
    {
        const bool branch_taken_0x291308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x291308) {
            ctx->pc = 0x291328u;
            goto label_291328;
        }
    }
    ctx->pc = 0x291310u;
label_291310:
    // 0x291310: 0x1000000b  b           . + 4 + (0xB << 2)
label_291314:
    if (ctx->pc == 0x291314u) {
        ctx->pc = 0x291314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291310u;
        // 0x291314: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291318u;
        goto label_291318;
    }
    ctx->pc = 0x291310u;
    {
        const bool branch_taken_0x291310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291310u;
        // 0x291314: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291310) {
            ctx->pc = 0x291340u;
            goto label_291340;
        }
    }
    ctx->pc = 0x291318u;
label_291318:
    // 0x291318: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
label_29131c:
    if (ctx->pc == 0x29131Cu) {
        ctx->pc = 0x29131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291318u;
        // 0x29131c: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291320u;
        goto label_291320;
    }
    ctx->pc = 0x291318u;
    {
        const bool branch_taken_0x291318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291318u;
        // 0x29131c: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291318) {
            ctx->pc = 0x291338u;
            goto label_291338;
        }
    }
    ctx->pc = 0x291320u;
label_291320:
    // 0x291320: 0x10000008  b           . + 4 + (0x8 << 2)
label_291324:
    if (ctx->pc == 0x291324u) {
        ctx->pc = 0x291324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291320u;
        // 0x291324: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291328u;
        goto label_291328;
    }
    ctx->pc = 0x291320u;
    {
        const bool branch_taken_0x291320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291320u;
        // 0x291324: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291320) {
            ctx->pc = 0x291344u;
            goto label_291344;
        }
    }
    ctx->pc = 0x291328u;
label_291328:
    // 0x291328: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x291328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_29132c:
    // 0x29132c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29132cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_291330:
    // 0x291330: 0x10000003  b           . + 4 + (0x3 << 2)
label_291334:
    if (ctx->pc == 0x291334u) {
        ctx->pc = 0x291334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291330u;
        // 0x291334: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291338u;
        goto label_291338;
    }
    ctx->pc = 0x291330u;
    {
        const bool branch_taken_0x291330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291330u;
        // 0x291334: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291330) {
            ctx->pc = 0x291340u;
            goto label_291340;
        }
    }
    ctx->pc = 0x291338u;
label_291338:
    // 0x291338: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x291338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_29133c:
    // 0x29133c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29133cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_291340:
    // 0x291340: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x291340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_291344:
    // 0x291344: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x291344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_291348:
    // 0x291348: 0x40f809  jalr        $v0
label_29134c:
    if (ctx->pc == 0x29134Cu) {
        ctx->pc = 0x29134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291348u;
        // 0x29134c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291350u;
        goto label_291350;
    }
    ctx->pc = 0x291348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291350u);
        ctx->pc = 0x29134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291348u;
        // 0x29134c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291348u, 0x291350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291350u;
label_291350:
    // 0x291350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291354:
    // 0x291354: 0xc07dfac  jal         func_1F7EB0
label_291358:
    if (ctx->pc == 0x291358u) {
        ctx->pc = 0x291358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291354u;
        // 0x291358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29135Cu;
        goto label_29135c;
    }
    ctx->pc = 0x291354u;
    SET_GPR_U32(ctx, 31, 0x29135Cu);
    ctx->pc = 0x291358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291354u;
    // 0x291358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x291354u, 0x29135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29135Cu;
label_29135c:
    // 0x29135c: 0x4615b840  add.s       $f1, $f23, $f21
    ctx->pc = 0x29135cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_291360:
    // 0x291360: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x291360u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_291364:
    // 0x291364: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x291364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_291368:
    // 0x291368: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x291368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29136c:
    // 0x29136c: 0x0  nop
    ctx->pc = 0x29136cu;
    // NOP
label_291370:
    // 0x291370: 0x4503005d  bc1tl       . + 4 + (0x5D << 2)
label_291374:
    if (ctx->pc == 0x291374u) {
        ctx->pc = 0x291374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291370u;
        // 0x291374: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291378u;
        goto label_291378;
    }
    ctx->pc = 0x291370u;
    {
        const bool branch_taken_0x291370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291370) {
            ctx->pc = 0x291374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291370u;
            // 0x291374: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291378u;
label_291378:
    // 0x291378: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x291378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_29137c:
    // 0x29137c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_291380:
    if (ctx->pc == 0x291380u) {
        ctx->pc = 0x291380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29137Cu;
        // 0x291380: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291384u;
        goto label_291384;
    }
    ctx->pc = 0x29137Cu;
    {
        const bool branch_taken_0x29137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29137c) {
            ctx->pc = 0x291380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29137Cu;
            // 0x291380: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291390u;
            goto label_291390;
        }
    }
    ctx->pc = 0x291384u;
label_291384:
    // 0x291384: 0x4602d834  c.lt.s      $f27, $f2
    ctx->pc = 0x291384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291388:
    // 0x291388: 0x10000013  b           . + 4 + (0x13 << 2)
label_29138c:
    if (ctx->pc == 0x29138Cu) {
        ctx->pc = 0x291390u;
        goto label_291390;
    }
    ctx->pc = 0x291388u;
    {
        const bool branch_taken_0x291388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291388) {
            ctx->pc = 0x2913D8u;
            goto label_2913d8;
        }
    }
    ctx->pc = 0x291390u;
label_291390:
    // 0x291390: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x291390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_291394:
    // 0x291394: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x291394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_291398:
    // 0x291398: 0x40f809  jalr        $v0
label_29139c:
    if (ctx->pc == 0x29139Cu) {
        ctx->pc = 0x29139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291398u;
        // 0x29139c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913A0u;
        goto label_2913a0;
    }
    ctx->pc = 0x291398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2913A0u);
        ctx->pc = 0x29139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291398u;
        // 0x29139c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291398u, 0x2913A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2913A0u;
label_2913a0:
    // 0x2913a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2913a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2913a4:
    // 0x2913a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2913a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2913a8:
    // 0x2913a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2913a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2913ac:
    // 0x2913ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2913acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2913b0:
    // 0x2913b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2913b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2913b4:
    // 0x2913b4: 0xc0b680e  jal         func_2DA038
label_2913b8:
    if (ctx->pc == 0x2913B8u) {
        ctx->pc = 0x2913B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913B4u;
        // 0x2913b8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913BCu;
        goto label_2913bc;
    }
    ctx->pc = 0x2913B4u;
    SET_GPR_U32(ctx, 31, 0x2913BCu);
    ctx->pc = 0x2913B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2913B4u;
    // 0x2913b8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2913B4u, 0x2913BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2913BCu;
label_2913bc:
    // 0x2913bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2913bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2913c0:
    // 0x2913c0: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x2913c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2913c4:
    // 0x2913c4: 0x0  nop
    ctx->pc = 0x2913c4u;
    // NOP
label_2913c8:
    // 0x2913c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2913cc:
    if (ctx->pc == 0x2913CCu) {
        ctx->pc = 0x2913CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913C8u;
        // 0x2913cc: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913D0u;
        goto label_2913d0;
    }
    ctx->pc = 0x2913C8u;
    {
        const bool branch_taken_0x2913c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2913c8) {
            ctx->pc = 0x2913CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913C8u;
            // 0x2913cc: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2913D0u;
            goto label_2913d0;
        }
    }
    ctx->pc = 0x2913D0u;
label_2913d0:
    // 0x2913d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2913d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2913d4:
    // 0x2913d4: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2913d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2913d8:
    // 0x2913d8: 0x0  nop
    ctx->pc = 0x2913d8u;
    // NOP
label_2913dc:
    // 0x2913dc: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
label_2913e0:
    if (ctx->pc == 0x2913E0u) {
        ctx->pc = 0x2913E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913DCu;
        // 0x2913e0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913E4u;
        goto label_2913e4;
    }
    ctx->pc = 0x2913DCu;
    {
        const bool branch_taken_0x2913dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2913dc) {
            ctx->pc = 0x2913E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913DCu;
            // 0x2913e0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x2913E4u;
label_2913e4:
    // 0x2913e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2913e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2913e8:
    // 0x2913e8: 0x5682000c  bnel        $s4, $v0, . + 4 + (0xC << 2)
label_2913ec:
    if (ctx->pc == 0x2913ECu) {
        ctx->pc = 0x2913ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913E8u;
        // 0x2913ec: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913F0u;
        goto label_2913f0;
    }
    ctx->pc = 0x2913E8u;
    {
        const bool branch_taken_0x2913e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2913e8) {
            ctx->pc = 0x2913ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913E8u;
            // 0x2913ec: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29141Cu;
            goto label_29141c;
        }
    }
    ctx->pc = 0x2913F0u;
label_2913f0:
    // 0x2913f0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x2913f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2913f4:
    // 0x2913f4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2913f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2913f8:
    // 0x2913f8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2913fc:
    // 0x2913fc: 0x40f809  jalr        $v0
label_291400:
    if (ctx->pc == 0x291400u) {
        ctx->pc = 0x291400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913FCu;
        // 0x291400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291404u;
        goto label_291404;
    }
    ctx->pc = 0x2913FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291404u);
        ctx->pc = 0x291400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913FCu;
        // 0x291400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2913FCu, 0x291404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291404u;
label_291404:
    // 0x291404: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x291404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_291408:
    // 0x291408: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x291408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29140c:
    // 0x29140c: 0x0  nop
    ctx->pc = 0x29140cu;
    // NOP
label_291410:
    // 0x291410: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
label_291414:
    if (ctx->pc == 0x291414u) {
        ctx->pc = 0x291414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291410u;
        // 0x291414: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291418u;
        goto label_291418;
    }
    ctx->pc = 0x291410u;
    {
        const bool branch_taken_0x291410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291410) {
            ctx->pc = 0x291414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291410u;
            // 0x291414: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x291418u;
label_291418:
    // 0x291418: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x291418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_29141c:
    // 0x29141c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x29141cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_291420:
    // 0x291420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_291424:
    if (ctx->pc == 0x291424u) {
        ctx->pc = 0x291424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291420u;
        // 0x291424: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291428u;
        goto label_291428;
    }
    ctx->pc = 0x291420u;
    {
        const bool branch_taken_0x291420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291420u;
        // 0x291424: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291420) {
            ctx->pc = 0x291440u;
            goto label_291440;
        }
    }
    ctx->pc = 0x291428u;
label_291428:
    // 0x291428: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_29142c:
    if (ctx->pc == 0x29142Cu) {
        ctx->pc = 0x29142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291428u;
        // 0x29142c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291430u;
        goto label_291430;
    }
    ctx->pc = 0x291428u;
    {
        const bool branch_taken_0x291428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291428) {
            ctx->pc = 0x29142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291428u;
            // 0x29142c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E0u;
            goto label_2914e0;
        }
    }
    ctx->pc = 0x291430u;
label_291430:
    // 0x291430: 0x5075002b  beql        $v1, $s5, . + 4 + (0x2B << 2)
label_291434:
    if (ctx->pc == 0x291434u) {
        ctx->pc = 0x291434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291430u;
        // 0x291434: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291438u;
        goto label_291438;
    }
    ctx->pc = 0x291430u;
    {
        const bool branch_taken_0x291430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x291430) {
            ctx->pc = 0x291434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291430u;
            // 0x291434: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E0u;
            goto label_2914e0;
        }
    }
    ctx->pc = 0x291438u;
label_291438:
    // 0x291438: 0x10000003  b           . + 4 + (0x3 << 2)
label_29143c:
    if (ctx->pc == 0x29143Cu) {
        ctx->pc = 0x291440u;
        goto label_291440;
    }
    ctx->pc = 0x291438u;
    {
        const bool branch_taken_0x291438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291438) {
            ctx->pc = 0x291448u;
            goto label_291448;
        }
    }
    ctx->pc = 0x291440u;
label_291440:
    // 0x291440: 0x50730027  beql        $v1, $s3, . + 4 + (0x27 << 2)
label_291444:
    if (ctx->pc == 0x291444u) {
        ctx->pc = 0x291444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291440u;
        // 0x291444: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291448u;
        goto label_291448;
    }
    ctx->pc = 0x291440u;
    {
        const bool branch_taken_0x291440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x291440) {
            ctx->pc = 0x291444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291440u;
            // 0x291444: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E0u;
            goto label_2914e0;
        }
    }
    ctx->pc = 0x291448u;
label_291448:
    // 0x291448: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
label_29144c:
    if (ctx->pc == 0x29144Cu) {
        ctx->pc = 0x29144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291448u;
        // 0x29144c: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291450u;
        goto label_291450;
    }
    ctx->pc = 0x291448u;
    {
        const bool branch_taken_0x291448 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x291448) {
            ctx->pc = 0x29144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291448u;
            // 0x29144c: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29145Cu;
            goto label_29145c;
        }
    }
    ctx->pc = 0x291450u;
label_291450:
    // 0x291450: 0x56960023  bnel        $s4, $s6, . + 4 + (0x23 << 2)
label_291454:
    if (ctx->pc == 0x291454u) {
        ctx->pc = 0x291454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291450u;
        // 0x291454: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291458u;
        goto label_291458;
    }
    ctx->pc = 0x291450u;
    {
        const bool branch_taken_0x291450 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        if (branch_taken_0x291450) {
            ctx->pc = 0x291454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291450u;
            // 0x291454: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E0u;
            goto label_2914e0;
        }
    }
    ctx->pc = 0x291458u;
label_291458:
    // 0x291458: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x291458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_29145c:
    // 0x29145c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x29145cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_291460:
    // 0x291460: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x291460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_291464:
    // 0x291464: 0x40f809  jalr        $v0
label_291468:
    if (ctx->pc == 0x291468u) {
        ctx->pc = 0x291468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291464u;
        // 0x291468: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29146Cu;
        goto label_29146c;
    }
    ctx->pc = 0x291464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29146Cu);
        ctx->pc = 0x291468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291464u;
        // 0x291468: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291464u, 0x29146Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29146Cu;
label_29146c:
    // 0x29146c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_291470:
    // 0x291470: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_291474:
    if (ctx->pc == 0x291474u) {
        ctx->pc = 0x291474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291470u;
        // 0x291474: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291478u;
        goto label_291478;
    }
    ctx->pc = 0x291470u;
    {
        const bool branch_taken_0x291470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x291474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291470u;
        // 0x291474: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291470) {
            ctx->pc = 0x291494u;
            goto label_291494;
        }
    }
    ctx->pc = 0x291478u;
label_291478:
    // 0x291478: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x291478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29147c:
    // 0x29147c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x29147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_291480:
    // 0x291480: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x291480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291484:
    // 0x291484: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x291484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_291488:
    // 0x291488: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x291488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29148c:
    // 0x29148c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x29148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_291490:
    // 0x291490: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x291490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_291494:
    // 0x291494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291498:
    // 0x291498: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x291498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_29149c:
    // 0x29149c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29149cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2914a0:
    // 0x2914a0: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x2914a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_2914a4:
    // 0x2914a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2914a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2914a8:
    // 0x2914a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2914a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2914ac:
    // 0x2914ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2914acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2914b0:
    // 0x2914b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2914b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2914b4:
    // 0x2914b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2914b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2914b8:
    // 0x2914b8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2914b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2914bc:
    // 0x2914bc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2914bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2914c0:
    // 0x2914c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2914c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2914c4:
    // 0x2914c4: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x2914c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_2914c8:
    // 0x2914c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2914c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2914cc:
    // 0x2914cc: 0xc04c784  jal         func_131E10
label_2914d0:
    if (ctx->pc == 0x2914D0u) {
        ctx->pc = 0x2914D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914CCu;
        // 0x2914d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914D4u;
        goto label_2914d4;
    }
    ctx->pc = 0x2914CCu;
    SET_GPR_U32(ctx, 31, 0x2914D4u);
    ctx->pc = 0x2914D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914CCu;
    // 0x2914d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2914CCu, 0x2914D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914D4u;
label_2914d4:
    // 0x2914d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2914d8:
    if (ctx->pc == 0x2914D8u) {
        ctx->pc = 0x2914D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914D4u;
        // 0x2914d8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914DCu;
        goto label_2914dc;
    }
    ctx->pc = 0x2914D4u;
    {
        const bool branch_taken_0x2914d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2914d4) {
            ctx->pc = 0x2914D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2914D4u;
            // 0x2914d8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914E8u;
            goto label_2914e8;
        }
    }
    ctx->pc = 0x2914DCu;
label_2914dc:
    // 0x2914dc: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2914dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2914e0:
    // 0x2914e0: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2914e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_2914e4:
    // 0x2914e4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2914e8:
    // 0x2914e8: 0x5620ff05  bnel        $s1, $zero, . + 4 + (-0xFB << 2)
label_2914ec:
    if (ctx->pc == 0x2914ECu) {
        ctx->pc = 0x2914ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914E8u;
        // 0x2914ec: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914F0u;
        goto label_2914f0;
    }
    ctx->pc = 0x2914E8u;
    {
        const bool branch_taken_0x2914e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2914e8) {
            ctx->pc = 0x2914ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2914E8u;
            // 0x2914ec: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291100;
        }
    }
    ctx->pc = 0x2914F0u;
label_2914f0:
    // 0x2914f0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2914f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_2914f4:
    // 0x2914f4: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x2914f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
label_2914f8:
    // 0x2914f8: 0x8c750008  lw          $s5, 0x8($v1)
    ctx->pc = 0x2914f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2914fc:
    // 0x2914fc: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_291500:
    // 0x291500: 0x127500a7  beq         $s3, $s5, . + 4 + (0xA7 << 2)
label_291504:
    if (ctx->pc == 0x291504u) {
        ctx->pc = 0x291504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291500u;
        // 0x291504: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291508u;
        goto label_291508;
    }
    ctx->pc = 0x291500u;
    {
        const bool branch_taken_0x291500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x291504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291500u;
        // 0x291504: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291500) {
            ctx->pc = 0x2917A0u;
            goto label_2917a0;
        }
    }
    ctx->pc = 0x291508u;
label_291508:
    // 0x291508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x291508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_29150c:
    // 0x29150c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x29150cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_291510:
    // 0x291510: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x291510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291514:
    // 0x291514: 0x0  nop
    ctx->pc = 0x291514u;
    // NOP
label_291518:
    // 0x291518: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x291518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29151c:
    // 0x29151c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_291520:
    // 0x291520: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x291520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_291524:
    // 0x291524: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_291528:
    if (ctx->pc == 0x291528u) {
        ctx->pc = 0x291528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291524u;
        // 0x291528: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29152Cu;
        goto label_29152c;
    }
    ctx->pc = 0x291524u;
    {
        const bool branch_taken_0x291524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291524u;
        // 0x291528: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291524) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x29152Cu;
label_29152c:
    // 0x29152c: 0x460009a  bltz        $v1, . + 4 + (0x9A << 2)
label_291530:
    if (ctx->pc == 0x291530u) {
        ctx->pc = 0x291534u;
        goto label_291534;
    }
    ctx->pc = 0x29152Cu;
    {
        const bool branch_taken_0x29152c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x29152c) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291534u;
label_291534:
    // 0x291534: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x291534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_291538:
    // 0x291538: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x291538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_29153c:
    // 0x29153c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_291540:
    if (ctx->pc == 0x291540u) {
        ctx->pc = 0x291540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29153Cu;
        // 0x291540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291544u;
        goto label_291544;
    }
    ctx->pc = 0x29153Cu;
    {
        const bool branch_taken_0x29153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29153Cu;
        // 0x291540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29153c) {
            ctx->pc = 0x29154Cu;
            goto label_29154c;
        }
    }
    ctx->pc = 0x291544u;
label_291544:
    // 0x291544: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x291544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_291548:
    // 0x291548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29154c:
    // 0x29154c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x29154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_291550:
    // 0x291550: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_291554:
    if (ctx->pc == 0x291554u) {
        ctx->pc = 0x291558u;
        goto label_291558;
    }
    ctx->pc = 0x291550u;
    {
        const bool branch_taken_0x291550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291550) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291558u;
label_291558:
    // 0x291558: 0xc06de78  jal         func_1B79E0
label_29155c:
    if (ctx->pc == 0x29155Cu) {
        ctx->pc = 0x29155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291558u;
        // 0x29155c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291560u;
        goto label_291560;
    }
    ctx->pc = 0x291558u;
    SET_GPR_U32(ctx, 31, 0x291560u);
    ctx->pc = 0x29155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291558u;
    // 0x29155c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79E0u, 0x291558u, 0x291560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291560u;
label_291560:
    // 0x291560: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_291564:
    if (ctx->pc == 0x291564u) {
        ctx->pc = 0x291568u;
        goto label_291568;
    }
    ctx->pc = 0x291560u;
    {
        const bool branch_taken_0x291560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291560) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291568u;
label_291568:
    // 0x291568: 0x1217008b  beq         $s0, $s7, . + 4 + (0x8B << 2)
label_29156c:
    if (ctx->pc == 0x29156Cu) {
        ctx->pc = 0x291570u;
        goto label_291570;
    }
    ctx->pc = 0x291568u;
    {
        const bool branch_taken_0x291568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        if (branch_taken_0x291568) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291570u;
label_291570:
    // 0x291570: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x291570u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_291574:
    // 0x291574: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x291574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_291578:
    // 0x291578: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x291578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29157c:
    // 0x29157c: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
label_291580:
    if (ctx->pc == 0x291580u) {
        ctx->pc = 0x291584u;
        goto label_291584;
    }
    ctx->pc = 0x29157Cu;
    {
        const bool branch_taken_0x29157c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29157c) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291584u;
label_291584:
    // 0x291584: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x291584u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_291588:
    // 0x291588: 0x2133b  dsra        $v0, $v0, 12
    ctx->pc = 0x291588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 12);
label_29158c:
    // 0x29158c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_291590:
    // 0x291590: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_291594:
    if (ctx->pc == 0x291594u) {
        ctx->pc = 0x291598u;
        goto label_291598;
    }
    ctx->pc = 0x291590u;
    {
        const bool branch_taken_0x291590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291590) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291598u;
label_291598:
    // 0x291598: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x291598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_29159c:
    // 0x29159c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x29159cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2915a0:
    // 0x2915a0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2915a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2915a4:
    // 0x2915a4: 0x40f809  jalr        $v0
label_2915a8:
    if (ctx->pc == 0x2915A8u) {
        ctx->pc = 0x2915A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915A4u;
        // 0x2915a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915ACu;
        goto label_2915ac;
    }
    ctx->pc = 0x2915A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2915ACu);
        ctx->pc = 0x2915A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915A4u;
        // 0x2915a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2915A4u, 0x2915ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2915ACu;
label_2915ac:
    // 0x2915ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2915acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2915b0:
    // 0x2915b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2915b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_2915b4:
    // 0x2915b4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2915b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2915b8:
    // 0x2915b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2915b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2915bc:
    // 0x2915bc: 0xc07dfac  jal         func_1F7EB0
label_2915c0:
    if (ctx->pc == 0x2915C0u) {
        ctx->pc = 0x2915C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915BCu;
        // 0x2915c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915C4u;
        goto label_2915c4;
    }
    ctx->pc = 0x2915BCu;
    SET_GPR_U32(ctx, 31, 0x2915C4u);
    ctx->pc = 0x2915C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2915BCu;
    // 0x2915c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2915BCu, 0x2915C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2915C4u;
label_2915c4:
    // 0x2915c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2915c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2915c8:
    // 0x2915c8: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_2915cc:
    if (ctx->pc == 0x2915CCu) {
        ctx->pc = 0x2915CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915C8u;
        // 0x2915cc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915D0u;
        goto label_2915d0;
    }
    ctx->pc = 0x2915C8u;
    {
        const bool branch_taken_0x2915c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2915CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915C8u;
        // 0x2915cc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915c8) {
            ctx->pc = 0x2915DCu;
            goto label_2915dc;
        }
    }
    ctx->pc = 0x2915D0u;
label_2915d0:
    // 0x2915d0: 0x4602d834  c.lt.s      $f27, $f2
    ctx->pc = 0x2915d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2915d4:
    // 0x2915d4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2915d8:
    if (ctx->pc == 0x2915D8u) {
        ctx->pc = 0x2915DCu;
        goto label_2915dc;
    }
    ctx->pc = 0x2915D4u;
    {
        const bool branch_taken_0x2915d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2915d4) {
            ctx->pc = 0x291704u;
            goto label_291704;
        }
    }
    ctx->pc = 0x2915DCu;
label_2915dc:
    // 0x2915dc: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x2915dcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_2915e0:
    // 0x2915e0: 0x212bb  dsra        $v0, $v0, 10
    ctx->pc = 0x2915e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 10);
label_2915e4:
    // 0x2915e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2915e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2915e8:
    // 0x2915e8: 0x54560029  bnel        $v0, $s6, . + 4 + (0x29 << 2)
label_2915ec:
    if (ctx->pc == 0x2915ECu) {
        ctx->pc = 0x2915ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915E8u;
        // 0x2915ec: 0x4617b802  mul.s       $f0, $f23, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915F0u;
        goto label_2915f0;
    }
    ctx->pc = 0x2915E8u;
    {
        const bool branch_taken_0x2915e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2915e8) {
            ctx->pc = 0x2915ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2915E8u;
            // 0x2915ec: 0x4617b802  mul.s       $f0, $f23, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x291690u;
            goto label_291690;
        }
    }
    ctx->pc = 0x2915F0u;
label_2915f0:
    // 0x2915f0: 0x4617b800  add.s       $f0, $f23, $f23
    ctx->pc = 0x2915f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_2915f4:
    // 0x2915f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2915f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2915f8:
    // 0x2915f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2915f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2915fc:
    // 0x2915fc: 0x0  nop
    ctx->pc = 0x2915fcu;
    // NOP
label_291600:
    // 0x291600: 0x45010065  bc1t        . + 4 + (0x65 << 2)
label_291604:
    if (ctx->pc == 0x291604u) {
        ctx->pc = 0x291604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291600u;
        // 0x291604: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291608u;
        goto label_291608;
    }
    ctx->pc = 0x291600u;
    {
        const bool branch_taken_0x291600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291600u;
        // 0x291604: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291600) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291608u;
label_291608:
    // 0x291608: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x291608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29160c:
    // 0x29160c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x29160cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_291610:
    // 0x291610: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x291610u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_291614:
    // 0x291614: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x291614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291618:
    // 0x291618: 0x0  nop
    ctx->pc = 0x291618u;
    // NOP
label_29161c:
    // 0x29161c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_291620:
    if (ctx->pc == 0x291620u) {
        ctx->pc = 0x291620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29161Cu;
        // 0x291620: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291624u;
        goto label_291624;
    }
    ctx->pc = 0x29161Cu;
    {
        const bool branch_taken_0x29161c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29161Cu;
        // 0x291620: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29161c) {
            ctx->pc = 0x291628u;
            goto label_291628;
        }
    }
    ctx->pc = 0x291624u;
label_291624:
    // 0x291624: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x291624u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_291628:
    // 0x291628: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x291628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_29162c:
    // 0x29162c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29162cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_291630:
    // 0x291630: 0x0  nop
    ctx->pc = 0x291630u;
    // NOP
label_291634:
    // 0x291634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291638:
    // 0x291638: 0x0  nop
    ctx->pc = 0x291638u;
    // NOP
label_29163c:
    // 0x29163c: 0x45010056  bc1t        . + 4 + (0x56 << 2)
label_291640:
    if (ctx->pc == 0x291640u) {
        ctx->pc = 0x291640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29163Cu;
        // 0x291640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291644u;
        goto label_291644;
    }
    ctx->pc = 0x29163Cu;
    {
        const bool branch_taken_0x29163c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29163Cu;
        // 0x291640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29163c) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291644u;
label_291644:
    // 0x291644: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x291644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_291648:
    // 0x291648: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x291648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_29164c:
    // 0x29164c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29164cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_291650:
    // 0x291650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291654:
    // 0x291654: 0xc0b680e  jal         func_2DA038
label_291658:
    if (ctx->pc == 0x291658u) {
        ctx->pc = 0x291658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291654u;
        // 0x291658: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29165Cu;
        goto label_29165c;
    }
    ctx->pc = 0x291654u;
    SET_GPR_U32(ctx, 31, 0x29165Cu);
    ctx->pc = 0x291658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291654u;
    // 0x291658: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x291654u, 0x29165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29165Cu;
label_29165c:
    // 0x29165c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29165cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_291660:
    // 0x291660: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x291660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291664:
    // 0x291664: 0x0  nop
    ctx->pc = 0x291664u;
    // NOP
label_291668:
    // 0x291668: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_29166c:
    if (ctx->pc == 0x29166Cu) {
        ctx->pc = 0x29166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291668u;
        // 0x29166c: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291670u;
        goto label_291670;
    }
    ctx->pc = 0x291668u;
    {
        const bool branch_taken_0x291668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291668u;
        // 0x29166c: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291668) {
            ctx->pc = 0x291674u;
            goto label_291674;
        }
    }
    ctx->pc = 0x291670u;
label_291670:
    // 0x291670: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x291670u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_291674:
    // 0x291674: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x291674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_291678:
    // 0x291678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29167c:
    // 0x29167c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x29167cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_291680:
    // 0x291680: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x291680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_291684:
    // 0x291684: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x291684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291688:
    // 0x291688: 0x1000001e  b           . + 4 + (0x1E << 2)
label_29168c:
    if (ctx->pc == 0x29168Cu) {
        ctx->pc = 0x291690u;
        goto label_291690;
    }
    ctx->pc = 0x291688u;
    {
        const bool branch_taken_0x291688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291688) {
            ctx->pc = 0x291704u;
            goto label_291704;
        }
    }
    ctx->pc = 0x291690u;
label_291690:
    // 0x291690: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x291690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291694:
    // 0x291694: 0x0  nop
    ctx->pc = 0x291694u;
    // NOP
label_291698:
    // 0x291698: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_29169c:
    if (ctx->pc == 0x29169Cu) {
        ctx->pc = 0x29169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291698u;
        // 0x29169c: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916A0u;
        goto label_2916a0;
    }
    ctx->pc = 0x291698u;
    {
        const bool branch_taken_0x291698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291698u;
        // 0x29169c: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291698) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x2916A0u;
label_2916a0:
    // 0x2916a0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2916a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2916a4:
    // 0x2916a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2916a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2916a8:
    // 0x2916a8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x2916a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2916ac:
    // 0x2916ac: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x2916acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2916b0:
    // 0x2916b0: 0x0  nop
    ctx->pc = 0x2916b0u;
    // NOP
label_2916b4:
    // 0x2916b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2916b8:
    if (ctx->pc == 0x2916B8u) {
        ctx->pc = 0x2916B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916B4u;
        // 0x2916b8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916BCu;
        goto label_2916bc;
    }
    ctx->pc = 0x2916B4u;
    {
        const bool branch_taken_0x2916b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2916B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916B4u;
        // 0x2916b8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916b4) {
            ctx->pc = 0x2916C0u;
            goto label_2916c0;
        }
    }
    ctx->pc = 0x2916BCu;
label_2916bc:
    // 0x2916bc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2916bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2916c0:
    // 0x2916c0: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2916c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2916c4:
    // 0x2916c4: 0x0  nop
    ctx->pc = 0x2916c4u;
    // NOP
label_2916c8:
    // 0x2916c8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_2916cc:
    if (ctx->pc == 0x2916CCu) {
        ctx->pc = 0x2916CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916C8u;
        // 0x2916cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916D0u;
        goto label_2916d0;
    }
    ctx->pc = 0x2916C8u;
    {
        const bool branch_taken_0x2916c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2916CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916C8u;
        // 0x2916cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916c8) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x2916D0u;
label_2916d0:
    // 0x2916d0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2916d4:
    // 0x2916d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2916d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2916d8:
    // 0x2916d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2916d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2916dc:
    // 0x2916dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2916dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2916e0:
    // 0x2916e0: 0xc0b680e  jal         func_2DA038
label_2916e4:
    if (ctx->pc == 0x2916E4u) {
        ctx->pc = 0x2916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916E0u;
        // 0x2916e4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916E8u;
        goto label_2916e8;
    }
    ctx->pc = 0x2916E0u;
    SET_GPR_U32(ctx, 31, 0x2916E8u);
    ctx->pc = 0x2916E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916E0u;
    // 0x2916e4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2916E0u, 0x2916E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916E8u;
label_2916e8:
    // 0x2916e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2916e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2916ec:
    // 0x2916ec: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2916ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2916f0:
    // 0x2916f0: 0x0  nop
    ctx->pc = 0x2916f0u;
    // NOP
label_2916f4:
    // 0x2916f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2916f8:
    if (ctx->pc == 0x2916F8u) {
        ctx->pc = 0x2916F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916F4u;
        // 0x2916f8: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2916FCu;
        goto label_2916fc;
    }
    ctx->pc = 0x2916F4u;
    {
        const bool branch_taken_0x2916f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2916f4) {
            ctx->pc = 0x2916F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2916F4u;
            // 0x2916f8: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2916FCu;
            goto label_2916fc;
        }
    }
    ctx->pc = 0x2916FCu;
label_2916fc:
    // 0x2916fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2916fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_291700:
    // 0x291700: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x291700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291704:
    // 0x291704: 0x0  nop
    ctx->pc = 0x291704u;
    // NOP
label_291708:
    // 0x291708: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_29170c:
    if (ctx->pc == 0x29170Cu) {
        ctx->pc = 0x291710u;
        goto label_291710;
    }
    ctx->pc = 0x291708u;
    {
        const bool branch_taken_0x291708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291708) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291710u;
label_291710:
    // 0x291710: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_291714:
    if (ctx->pc == 0x291714u) {
        ctx->pc = 0x291714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291710u;
        // 0x291714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291718u;
        goto label_291718;
    }
    ctx->pc = 0x291710u;
    {
        const bool branch_taken_0x291710 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x291714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291710u;
        // 0x291714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291710) {
            ctx->pc = 0x291720u;
            goto label_291720;
        }
    }
    ctx->pc = 0x291718u;
label_291718:
    // 0x291718: 0x5682001e  bnel        $s4, $v0, . + 4 + (0x1E << 2)
label_29171c:
    if (ctx->pc == 0x29171Cu) {
        ctx->pc = 0x29171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291718u;
        // 0x29171c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291720u;
        goto label_291720;
    }
    ctx->pc = 0x291718u;
    {
        const bool branch_taken_0x291718 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x291718) {
            ctx->pc = 0x29171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291718u;
            // 0x29171c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291794u;
            goto label_291794;
        }
    }
    ctx->pc = 0x291720u;
label_291720:
    // 0x291720: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x291720u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_291724:
    // 0x291724: 0x211fb  dsra        $v0, $v0, 7
    ctx->pc = 0x291724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 7);
label_291728:
    // 0x291728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x291728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29172c:
    // 0x29172c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_291730:
    if (ctx->pc == 0x291730u) {
        ctx->pc = 0x291730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29172Cu;
        // 0x291730: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291734u;
        goto label_291734;
    }
    ctx->pc = 0x29172Cu;
    {
        const bool branch_taken_0x29172c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29172c) {
            ctx->pc = 0x291730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29172Cu;
            // 0x291730: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291794u;
            goto label_291794;
        }
    }
    ctx->pc = 0x291734u;
label_291734:
    // 0x291734: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x291734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_291738:
    // 0x291738: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x291738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29173c:
    // 0x29173c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x29173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_291740:
    // 0x291740: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x291740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_291744:
    // 0x291744: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x291744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_291748:
    // 0x291748: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x291748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29174c:
    // 0x29174c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x29174cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_291750:
    // 0x291750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291754:
    // 0x291754: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x291754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_291758:
    // 0x291758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29175c:
    // 0x29175c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x29175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_291760:
    // 0x291760: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x291760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_291764:
    // 0x291764: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x291764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_291768:
    // 0x291768: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x291768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_29176c:
    // 0x29176c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29176cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_291770:
    // 0x291770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x291770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291774:
    // 0x291774: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x291774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_291778:
    // 0x291778: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x291778u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29177c:
    // 0x29177c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x29177cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_291780:
    // 0x291780: 0xc04c784  jal         func_131E10
label_291784:
    if (ctx->pc == 0x291784u) {
        ctx->pc = 0x291784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291780u;
        // 0x291784: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291788u;
        goto label_291788;
    }
    ctx->pc = 0x291780u;
    SET_GPR_U32(ctx, 31, 0x291788u);
    ctx->pc = 0x291784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291780u;
    // 0x291784: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x291780u, 0x291788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291788u;
label_291788:
    // 0x291788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29178c:
    if (ctx->pc == 0x29178Cu) {
        ctx->pc = 0x291790u;
        goto label_291790;
    }
    ctx->pc = 0x291788u;
    {
        const bool branch_taken_0x291788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291788) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291790u;
label_291790:
    // 0x291790: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x291790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291794:
    // 0x291794: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x291794u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_291798:
    // 0x291798: 0x1675ff5f  bne         $s3, $s5, . + 4 + (-0xA1 << 2)
label_29179c:
    if (ctx->pc == 0x29179Cu) {
        ctx->pc = 0x29179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291798u;
        // 0x29179c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917A0u;
        goto label_2917a0;
    }
    ctx->pc = 0x291798u;
    {
        const bool branch_taken_0x291798 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x29179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291798u;
        // 0x29179c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291798) {
            ctx->pc = 0x291518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291518;
        }
    }
    ctx->pc = 0x2917A0u;
label_2917a0:
    // 0x2917a0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2917a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2917a4:
    // 0x2917a4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2917a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2917a8:
    // 0x2917a8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2917a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2917ac:
    // 0x2917ac: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2917acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2917b0:
    // 0x2917b0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2917b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2917b4:
    // 0x2917b4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2917b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2917b8:
    // 0x2917b8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2917b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2917bc:
    // 0x2917bc: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2917bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2917c0:
    // 0x2917c0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2917c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2917c4:
    // 0x2917c4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2917c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2917c8:
    // 0x2917c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2917c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2917cc:
    // 0x2917cc: 0xc7bb0168  lwc1        $f27, 0x168($sp)
    ctx->pc = 0x2917ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2917d0:
    // 0x2917d0: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x2917d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2917d4:
    // 0x2917d4: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x2917d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2917d8:
    // 0x2917d8: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x2917d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2917dc:
    // 0x2917dc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x2917dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2917e0:
    // 0x2917e0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2917e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2917e4:
    // 0x2917e4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2917e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2917e8:
    // 0x2917e8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2917e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2917ec:
    // 0x2917ec: 0x3e00008  jr          $ra
label_2917f0:
    if (ctx->pc == 0x2917F0u) {
        ctx->pc = 0x2917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917ECu;
        // 0x2917f0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917F4u;
        goto label_2917f4;
    }
    ctx->pc = 0x2917ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917ECu;
        // 0x2917f0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2917ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2917F4u;
label_2917f4:
    // 0x2917f4: 0x0  nop
    ctx->pc = 0x2917f4u;
    // NOP
    ctx->pc = 0x2917f8u;
}
