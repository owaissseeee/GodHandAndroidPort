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

// Function: func_00125048
// Address: 0x125048 - 0x125f38
void func_00125048_0x125048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00125048_0x125048");
#endif

    switch (ctx->pc) {
        case 0x125048u: goto label_125048;
        case 0x12504cu: goto label_12504c;
        case 0x125050u: goto label_125050;
        case 0x125054u: goto label_125054;
        case 0x125058u: goto label_125058;
        case 0x12505cu: goto label_12505c;
        case 0x125060u: goto label_125060;
        case 0x125064u: goto label_125064;
        case 0x125068u: goto label_125068;
        case 0x12506cu: goto label_12506c;
        case 0x125070u: goto label_125070;
        case 0x125074u: goto label_125074;
        case 0x125078u: goto label_125078;
        case 0x12507cu: goto label_12507c;
        case 0x125080u: goto label_125080;
        case 0x125084u: goto label_125084;
        case 0x125088u: goto label_125088;
        case 0x12508cu: goto label_12508c;
        case 0x125090u: goto label_125090;
        case 0x125094u: goto label_125094;
        case 0x125098u: goto label_125098;
        case 0x12509cu: goto label_12509c;
        case 0x1250a0u: goto label_1250a0;
        case 0x1250a4u: goto label_1250a4;
        case 0x1250a8u: goto label_1250a8;
        case 0x1250acu: goto label_1250ac;
        case 0x1250b0u: goto label_1250b0;
        case 0x1250b4u: goto label_1250b4;
        case 0x1250b8u: goto label_1250b8;
        case 0x1250bcu: goto label_1250bc;
        case 0x1250c0u: goto label_1250c0;
        case 0x1250c4u: goto label_1250c4;
        case 0x1250c8u: goto label_1250c8;
        case 0x1250ccu: goto label_1250cc;
        case 0x1250d0u: goto label_1250d0;
        case 0x1250d4u: goto label_1250d4;
        case 0x1250d8u: goto label_1250d8;
        case 0x1250dcu: goto label_1250dc;
        case 0x1250e0u: goto label_1250e0;
        case 0x1250e4u: goto label_1250e4;
        case 0x1250e8u: goto label_1250e8;
        case 0x1250ecu: goto label_1250ec;
        case 0x1250f0u: goto label_1250f0;
        case 0x1250f4u: goto label_1250f4;
        case 0x1250f8u: goto label_1250f8;
        case 0x1250fcu: goto label_1250fc;
        case 0x125100u: goto label_125100;
        case 0x125104u: goto label_125104;
        case 0x125108u: goto label_125108;
        case 0x12510cu: goto label_12510c;
        case 0x125110u: goto label_125110;
        case 0x125114u: goto label_125114;
        case 0x125118u: goto label_125118;
        case 0x12511cu: goto label_12511c;
        case 0x125120u: goto label_125120;
        case 0x125124u: goto label_125124;
        case 0x125128u: goto label_125128;
        case 0x12512cu: goto label_12512c;
        case 0x125130u: goto label_125130;
        case 0x125134u: goto label_125134;
        case 0x125138u: goto label_125138;
        case 0x12513cu: goto label_12513c;
        case 0x125140u: goto label_125140;
        case 0x125144u: goto label_125144;
        case 0x125148u: goto label_125148;
        case 0x12514cu: goto label_12514c;
        case 0x125150u: goto label_125150;
        case 0x125154u: goto label_125154;
        case 0x125158u: goto label_125158;
        case 0x12515cu: goto label_12515c;
        case 0x125160u: goto label_125160;
        case 0x125164u: goto label_125164;
        case 0x125168u: goto label_125168;
        case 0x12516cu: goto label_12516c;
        case 0x125170u: goto label_125170;
        case 0x125174u: goto label_125174;
        case 0x125178u: goto label_125178;
        case 0x12517cu: goto label_12517c;
        case 0x125180u: goto label_125180;
        case 0x125184u: goto label_125184;
        case 0x125188u: goto label_125188;
        case 0x12518cu: goto label_12518c;
        case 0x125190u: goto label_125190;
        case 0x125194u: goto label_125194;
        case 0x125198u: goto label_125198;
        case 0x12519cu: goto label_12519c;
        case 0x1251a0u: goto label_1251a0;
        case 0x1251a4u: goto label_1251a4;
        case 0x1251a8u: goto label_1251a8;
        case 0x1251acu: goto label_1251ac;
        case 0x1251b0u: goto label_1251b0;
        case 0x1251b4u: goto label_1251b4;
        case 0x1251b8u: goto label_1251b8;
        case 0x1251bcu: goto label_1251bc;
        case 0x1251c0u: goto label_1251c0;
        case 0x1251c4u: goto label_1251c4;
        case 0x1251c8u: goto label_1251c8;
        case 0x1251ccu: goto label_1251cc;
        case 0x1251d0u: goto label_1251d0;
        case 0x1251d4u: goto label_1251d4;
        case 0x1251d8u: goto label_1251d8;
        case 0x1251dcu: goto label_1251dc;
        case 0x1251e0u: goto label_1251e0;
        case 0x1251e4u: goto label_1251e4;
        case 0x1251e8u: goto label_1251e8;
        case 0x1251ecu: goto label_1251ec;
        case 0x1251f0u: goto label_1251f0;
        case 0x1251f4u: goto label_1251f4;
        case 0x1251f8u: goto label_1251f8;
        case 0x1251fcu: goto label_1251fc;
        case 0x125200u: goto label_125200;
        case 0x125204u: goto label_125204;
        case 0x125208u: goto label_125208;
        case 0x12520cu: goto label_12520c;
        case 0x125210u: goto label_125210;
        case 0x125214u: goto label_125214;
        case 0x125218u: goto label_125218;
        case 0x12521cu: goto label_12521c;
        case 0x125220u: goto label_125220;
        case 0x125224u: goto label_125224;
        case 0x125228u: goto label_125228;
        case 0x12522cu: goto label_12522c;
        case 0x125230u: goto label_125230;
        case 0x125234u: goto label_125234;
        case 0x125238u: goto label_125238;
        case 0x12523cu: goto label_12523c;
        case 0x125240u: goto label_125240;
        case 0x125244u: goto label_125244;
        case 0x125248u: goto label_125248;
        case 0x12524cu: goto label_12524c;
        case 0x125250u: goto label_125250;
        case 0x125254u: goto label_125254;
        case 0x125258u: goto label_125258;
        case 0x12525cu: goto label_12525c;
        case 0x125260u: goto label_125260;
        case 0x125264u: goto label_125264;
        case 0x125268u: goto label_125268;
        case 0x12526cu: goto label_12526c;
        case 0x125270u: goto label_125270;
        case 0x125274u: goto label_125274;
        case 0x125278u: goto label_125278;
        case 0x12527cu: goto label_12527c;
        case 0x125280u: goto label_125280;
        case 0x125284u: goto label_125284;
        case 0x125288u: goto label_125288;
        case 0x12528cu: goto label_12528c;
        case 0x125290u: goto label_125290;
        case 0x125294u: goto label_125294;
        case 0x125298u: goto label_125298;
        case 0x12529cu: goto label_12529c;
        case 0x1252a0u: goto label_1252a0;
        case 0x1252a4u: goto label_1252a4;
        case 0x1252a8u: goto label_1252a8;
        case 0x1252acu: goto label_1252ac;
        case 0x1252b0u: goto label_1252b0;
        case 0x1252b4u: goto label_1252b4;
        case 0x1252b8u: goto label_1252b8;
        case 0x1252bcu: goto label_1252bc;
        case 0x1252c0u: goto label_1252c0;
        case 0x1252c4u: goto label_1252c4;
        case 0x1252c8u: goto label_1252c8;
        case 0x1252ccu: goto label_1252cc;
        case 0x1252d0u: goto label_1252d0;
        case 0x1252d4u: goto label_1252d4;
        case 0x1252d8u: goto label_1252d8;
        case 0x1252dcu: goto label_1252dc;
        case 0x1252e0u: goto label_1252e0;
        case 0x1252e4u: goto label_1252e4;
        case 0x1252e8u: goto label_1252e8;
        case 0x1252ecu: goto label_1252ec;
        case 0x1252f0u: goto label_1252f0;
        case 0x1252f4u: goto label_1252f4;
        case 0x1252f8u: goto label_1252f8;
        case 0x1252fcu: goto label_1252fc;
        case 0x125300u: goto label_125300;
        case 0x125304u: goto label_125304;
        case 0x125308u: goto label_125308;
        case 0x12530cu: goto label_12530c;
        case 0x125310u: goto label_125310;
        case 0x125314u: goto label_125314;
        case 0x125318u: goto label_125318;
        case 0x12531cu: goto label_12531c;
        case 0x125320u: goto label_125320;
        case 0x125324u: goto label_125324;
        case 0x125328u: goto label_125328;
        case 0x12532cu: goto label_12532c;
        case 0x125330u: goto label_125330;
        case 0x125334u: goto label_125334;
        case 0x125338u: goto label_125338;
        case 0x12533cu: goto label_12533c;
        case 0x125340u: goto label_125340;
        case 0x125344u: goto label_125344;
        case 0x125348u: goto label_125348;
        case 0x12534cu: goto label_12534c;
        case 0x125350u: goto label_125350;
        case 0x125354u: goto label_125354;
        case 0x125358u: goto label_125358;
        case 0x12535cu: goto label_12535c;
        case 0x125360u: goto label_125360;
        case 0x125364u: goto label_125364;
        case 0x125368u: goto label_125368;
        case 0x12536cu: goto label_12536c;
        case 0x125370u: goto label_125370;
        case 0x125374u: goto label_125374;
        case 0x125378u: goto label_125378;
        case 0x12537cu: goto label_12537c;
        case 0x125380u: goto label_125380;
        case 0x125384u: goto label_125384;
        case 0x125388u: goto label_125388;
        case 0x12538cu: goto label_12538c;
        case 0x125390u: goto label_125390;
        case 0x125394u: goto label_125394;
        case 0x125398u: goto label_125398;
        case 0x12539cu: goto label_12539c;
        case 0x1253a0u: goto label_1253a0;
        case 0x1253a4u: goto label_1253a4;
        case 0x1253a8u: goto label_1253a8;
        case 0x1253acu: goto label_1253ac;
        case 0x1253b0u: goto label_1253b0;
        case 0x1253b4u: goto label_1253b4;
        case 0x1253b8u: goto label_1253b8;
        case 0x1253bcu: goto label_1253bc;
        case 0x1253c0u: goto label_1253c0;
        case 0x1253c4u: goto label_1253c4;
        case 0x1253c8u: goto label_1253c8;
        case 0x1253ccu: goto label_1253cc;
        case 0x1253d0u: goto label_1253d0;
        case 0x1253d4u: goto label_1253d4;
        case 0x1253d8u: goto label_1253d8;
        case 0x1253dcu: goto label_1253dc;
        case 0x1253e0u: goto label_1253e0;
        case 0x1253e4u: goto label_1253e4;
        case 0x1253e8u: goto label_1253e8;
        case 0x1253ecu: goto label_1253ec;
        case 0x1253f0u: goto label_1253f0;
        case 0x1253f4u: goto label_1253f4;
        case 0x1253f8u: goto label_1253f8;
        case 0x1253fcu: goto label_1253fc;
        case 0x125400u: goto label_125400;
        case 0x125404u: goto label_125404;
        case 0x125408u: goto label_125408;
        case 0x12540cu: goto label_12540c;
        case 0x125410u: goto label_125410;
        case 0x125414u: goto label_125414;
        case 0x125418u: goto label_125418;
        case 0x12541cu: goto label_12541c;
        case 0x125420u: goto label_125420;
        case 0x125424u: goto label_125424;
        case 0x125428u: goto label_125428;
        case 0x12542cu: goto label_12542c;
        case 0x125430u: goto label_125430;
        case 0x125434u: goto label_125434;
        case 0x125438u: goto label_125438;
        case 0x12543cu: goto label_12543c;
        case 0x125440u: goto label_125440;
        case 0x125444u: goto label_125444;
        case 0x125448u: goto label_125448;
        case 0x12544cu: goto label_12544c;
        case 0x125450u: goto label_125450;
        case 0x125454u: goto label_125454;
        case 0x125458u: goto label_125458;
        case 0x12545cu: goto label_12545c;
        case 0x125460u: goto label_125460;
        case 0x125464u: goto label_125464;
        case 0x125468u: goto label_125468;
        case 0x12546cu: goto label_12546c;
        case 0x125470u: goto label_125470;
        case 0x125474u: goto label_125474;
        case 0x125478u: goto label_125478;
        case 0x12547cu: goto label_12547c;
        case 0x125480u: goto label_125480;
        case 0x125484u: goto label_125484;
        case 0x125488u: goto label_125488;
        case 0x12548cu: goto label_12548c;
        case 0x125490u: goto label_125490;
        case 0x125494u: goto label_125494;
        case 0x125498u: goto label_125498;
        case 0x12549cu: goto label_12549c;
        case 0x1254a0u: goto label_1254a0;
        case 0x1254a4u: goto label_1254a4;
        case 0x1254a8u: goto label_1254a8;
        case 0x1254acu: goto label_1254ac;
        case 0x1254b0u: goto label_1254b0;
        case 0x1254b4u: goto label_1254b4;
        case 0x1254b8u: goto label_1254b8;
        case 0x1254bcu: goto label_1254bc;
        case 0x1254c0u: goto label_1254c0;
        case 0x1254c4u: goto label_1254c4;
        case 0x1254c8u: goto label_1254c8;
        case 0x1254ccu: goto label_1254cc;
        case 0x1254d0u: goto label_1254d0;
        case 0x1254d4u: goto label_1254d4;
        case 0x1254d8u: goto label_1254d8;
        case 0x1254dcu: goto label_1254dc;
        case 0x1254e0u: goto label_1254e0;
        case 0x1254e4u: goto label_1254e4;
        case 0x1254e8u: goto label_1254e8;
        case 0x1254ecu: goto label_1254ec;
        case 0x1254f0u: goto label_1254f0;
        case 0x1254f4u: goto label_1254f4;
        case 0x1254f8u: goto label_1254f8;
        case 0x1254fcu: goto label_1254fc;
        case 0x125500u: goto label_125500;
        case 0x125504u: goto label_125504;
        case 0x125508u: goto label_125508;
        case 0x12550cu: goto label_12550c;
        case 0x125510u: goto label_125510;
        case 0x125514u: goto label_125514;
        case 0x125518u: goto label_125518;
        case 0x12551cu: goto label_12551c;
        case 0x125520u: goto label_125520;
        case 0x125524u: goto label_125524;
        case 0x125528u: goto label_125528;
        case 0x12552cu: goto label_12552c;
        case 0x125530u: goto label_125530;
        case 0x125534u: goto label_125534;
        case 0x125538u: goto label_125538;
        case 0x12553cu: goto label_12553c;
        case 0x125540u: goto label_125540;
        case 0x125544u: goto label_125544;
        case 0x125548u: goto label_125548;
        case 0x12554cu: goto label_12554c;
        case 0x125550u: goto label_125550;
        case 0x125554u: goto label_125554;
        case 0x125558u: goto label_125558;
        case 0x12555cu: goto label_12555c;
        case 0x125560u: goto label_125560;
        case 0x125564u: goto label_125564;
        case 0x125568u: goto label_125568;
        case 0x12556cu: goto label_12556c;
        case 0x125570u: goto label_125570;
        case 0x125574u: goto label_125574;
        case 0x125578u: goto label_125578;
        case 0x12557cu: goto label_12557c;
        case 0x125580u: goto label_125580;
        case 0x125584u: goto label_125584;
        case 0x125588u: goto label_125588;
        case 0x12558cu: goto label_12558c;
        case 0x125590u: goto label_125590;
        case 0x125594u: goto label_125594;
        case 0x125598u: goto label_125598;
        case 0x12559cu: goto label_12559c;
        case 0x1255a0u: goto label_1255a0;
        case 0x1255a4u: goto label_1255a4;
        case 0x1255a8u: goto label_1255a8;
        case 0x1255acu: goto label_1255ac;
        case 0x1255b0u: goto label_1255b0;
        case 0x1255b4u: goto label_1255b4;
        case 0x1255b8u: goto label_1255b8;
        case 0x1255bcu: goto label_1255bc;
        case 0x1255c0u: goto label_1255c0;
        case 0x1255c4u: goto label_1255c4;
        case 0x1255c8u: goto label_1255c8;
        case 0x1255ccu: goto label_1255cc;
        case 0x1255d0u: goto label_1255d0;
        case 0x1255d4u: goto label_1255d4;
        case 0x1255d8u: goto label_1255d8;
        case 0x1255dcu: goto label_1255dc;
        case 0x1255e0u: goto label_1255e0;
        case 0x1255e4u: goto label_1255e4;
        case 0x1255e8u: goto label_1255e8;
        case 0x1255ecu: goto label_1255ec;
        case 0x1255f0u: goto label_1255f0;
        case 0x1255f4u: goto label_1255f4;
        case 0x1255f8u: goto label_1255f8;
        case 0x1255fcu: goto label_1255fc;
        case 0x125600u: goto label_125600;
        case 0x125604u: goto label_125604;
        case 0x125608u: goto label_125608;
        case 0x12560cu: goto label_12560c;
        case 0x125610u: goto label_125610;
        case 0x125614u: goto label_125614;
        case 0x125618u: goto label_125618;
        case 0x12561cu: goto label_12561c;
        case 0x125620u: goto label_125620;
        case 0x125624u: goto label_125624;
        case 0x125628u: goto label_125628;
        case 0x12562cu: goto label_12562c;
        case 0x125630u: goto label_125630;
        case 0x125634u: goto label_125634;
        case 0x125638u: goto label_125638;
        case 0x12563cu: goto label_12563c;
        case 0x125640u: goto label_125640;
        case 0x125644u: goto label_125644;
        case 0x125648u: goto label_125648;
        case 0x12564cu: goto label_12564c;
        case 0x125650u: goto label_125650;
        case 0x125654u: goto label_125654;
        case 0x125658u: goto label_125658;
        case 0x12565cu: goto label_12565c;
        case 0x125660u: goto label_125660;
        case 0x125664u: goto label_125664;
        case 0x125668u: goto label_125668;
        case 0x12566cu: goto label_12566c;
        case 0x125670u: goto label_125670;
        case 0x125674u: goto label_125674;
        case 0x125678u: goto label_125678;
        case 0x12567cu: goto label_12567c;
        case 0x125680u: goto label_125680;
        case 0x125684u: goto label_125684;
        case 0x125688u: goto label_125688;
        case 0x12568cu: goto label_12568c;
        case 0x125690u: goto label_125690;
        case 0x125694u: goto label_125694;
        case 0x125698u: goto label_125698;
        case 0x12569cu: goto label_12569c;
        case 0x1256a0u: goto label_1256a0;
        case 0x1256a4u: goto label_1256a4;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256acu: goto label_1256ac;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256b4u: goto label_1256b4;
        case 0x1256b8u: goto label_1256b8;
        case 0x1256bcu: goto label_1256bc;
        case 0x1256c0u: goto label_1256c0;
        case 0x1256c4u: goto label_1256c4;
        case 0x1256c8u: goto label_1256c8;
        case 0x1256ccu: goto label_1256cc;
        case 0x1256d0u: goto label_1256d0;
        case 0x1256d4u: goto label_1256d4;
        case 0x1256d8u: goto label_1256d8;
        case 0x1256dcu: goto label_1256dc;
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        case 0x125750u: goto label_125750;
        case 0x125754u: goto label_125754;
        case 0x125758u: goto label_125758;
        case 0x12575cu: goto label_12575c;
        case 0x125760u: goto label_125760;
        case 0x125764u: goto label_125764;
        case 0x125768u: goto label_125768;
        case 0x12576cu: goto label_12576c;
        case 0x125770u: goto label_125770;
        case 0x125774u: goto label_125774;
        case 0x125778u: goto label_125778;
        case 0x12577cu: goto label_12577c;
        case 0x125780u: goto label_125780;
        case 0x125784u: goto label_125784;
        case 0x125788u: goto label_125788;
        case 0x12578cu: goto label_12578c;
        case 0x125790u: goto label_125790;
        case 0x125794u: goto label_125794;
        case 0x125798u: goto label_125798;
        case 0x12579cu: goto label_12579c;
        case 0x1257a0u: goto label_1257a0;
        case 0x1257a4u: goto label_1257a4;
        case 0x1257a8u: goto label_1257a8;
        case 0x1257acu: goto label_1257ac;
        case 0x1257b0u: goto label_1257b0;
        case 0x1257b4u: goto label_1257b4;
        case 0x1257b8u: goto label_1257b8;
        case 0x1257bcu: goto label_1257bc;
        case 0x1257c0u: goto label_1257c0;
        case 0x1257c4u: goto label_1257c4;
        case 0x1257c8u: goto label_1257c8;
        case 0x1257ccu: goto label_1257cc;
        case 0x1257d0u: goto label_1257d0;
        case 0x1257d4u: goto label_1257d4;
        case 0x1257d8u: goto label_1257d8;
        case 0x1257dcu: goto label_1257dc;
        case 0x1257e0u: goto label_1257e0;
        case 0x1257e4u: goto label_1257e4;
        case 0x1257e8u: goto label_1257e8;
        case 0x1257ecu: goto label_1257ec;
        case 0x1257f0u: goto label_1257f0;
        case 0x1257f4u: goto label_1257f4;
        case 0x1257f8u: goto label_1257f8;
        case 0x1257fcu: goto label_1257fc;
        case 0x125800u: goto label_125800;
        case 0x125804u: goto label_125804;
        case 0x125808u: goto label_125808;
        case 0x12580cu: goto label_12580c;
        case 0x125810u: goto label_125810;
        case 0x125814u: goto label_125814;
        case 0x125818u: goto label_125818;
        case 0x12581cu: goto label_12581c;
        case 0x125820u: goto label_125820;
        case 0x125824u: goto label_125824;
        case 0x125828u: goto label_125828;
        case 0x12582cu: goto label_12582c;
        case 0x125830u: goto label_125830;
        case 0x125834u: goto label_125834;
        case 0x125838u: goto label_125838;
        case 0x12583cu: goto label_12583c;
        case 0x125840u: goto label_125840;
        case 0x125844u: goto label_125844;
        case 0x125848u: goto label_125848;
        case 0x12584cu: goto label_12584c;
        case 0x125850u: goto label_125850;
        case 0x125854u: goto label_125854;
        case 0x125858u: goto label_125858;
        case 0x12585cu: goto label_12585c;
        case 0x125860u: goto label_125860;
        case 0x125864u: goto label_125864;
        case 0x125868u: goto label_125868;
        case 0x12586cu: goto label_12586c;
        case 0x125870u: goto label_125870;
        case 0x125874u: goto label_125874;
        case 0x125878u: goto label_125878;
        case 0x12587cu: goto label_12587c;
        case 0x125880u: goto label_125880;
        case 0x125884u: goto label_125884;
        case 0x125888u: goto label_125888;
        case 0x12588cu: goto label_12588c;
        case 0x125890u: goto label_125890;
        case 0x125894u: goto label_125894;
        case 0x125898u: goto label_125898;
        case 0x12589cu: goto label_12589c;
        case 0x1258a0u: goto label_1258a0;
        case 0x1258a4u: goto label_1258a4;
        case 0x1258a8u: goto label_1258a8;
        case 0x1258acu: goto label_1258ac;
        case 0x1258b0u: goto label_1258b0;
        case 0x1258b4u: goto label_1258b4;
        case 0x1258b8u: goto label_1258b8;
        case 0x1258bcu: goto label_1258bc;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258c4u: goto label_1258c4;
        case 0x1258c8u: goto label_1258c8;
        case 0x1258ccu: goto label_1258cc;
        case 0x1258d0u: goto label_1258d0;
        case 0x1258d4u: goto label_1258d4;
        case 0x1258d8u: goto label_1258d8;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e0u: goto label_1258e0;
        case 0x1258e4u: goto label_1258e4;
        case 0x1258e8u: goto label_1258e8;
        case 0x1258ecu: goto label_1258ec;
        case 0x1258f0u: goto label_1258f0;
        case 0x1258f4u: goto label_1258f4;
        case 0x1258f8u: goto label_1258f8;
        case 0x1258fcu: goto label_1258fc;
        case 0x125900u: goto label_125900;
        case 0x125904u: goto label_125904;
        case 0x125908u: goto label_125908;
        case 0x12590cu: goto label_12590c;
        case 0x125910u: goto label_125910;
        case 0x125914u: goto label_125914;
        case 0x125918u: goto label_125918;
        case 0x12591cu: goto label_12591c;
        case 0x125920u: goto label_125920;
        case 0x125924u: goto label_125924;
        case 0x125928u: goto label_125928;
        case 0x12592cu: goto label_12592c;
        case 0x125930u: goto label_125930;
        case 0x125934u: goto label_125934;
        case 0x125938u: goto label_125938;
        case 0x12593cu: goto label_12593c;
        case 0x125940u: goto label_125940;
        case 0x125944u: goto label_125944;
        case 0x125948u: goto label_125948;
        case 0x12594cu: goto label_12594c;
        case 0x125950u: goto label_125950;
        case 0x125954u: goto label_125954;
        case 0x125958u: goto label_125958;
        case 0x12595cu: goto label_12595c;
        case 0x125960u: goto label_125960;
        case 0x125964u: goto label_125964;
        case 0x125968u: goto label_125968;
        case 0x12596cu: goto label_12596c;
        case 0x125970u: goto label_125970;
        case 0x125974u: goto label_125974;
        case 0x125978u: goto label_125978;
        case 0x12597cu: goto label_12597c;
        case 0x125980u: goto label_125980;
        case 0x125984u: goto label_125984;
        case 0x125988u: goto label_125988;
        case 0x12598cu: goto label_12598c;
        case 0x125990u: goto label_125990;
        case 0x125994u: goto label_125994;
        case 0x125998u: goto label_125998;
        case 0x12599cu: goto label_12599c;
        case 0x1259a0u: goto label_1259a0;
        case 0x1259a4u: goto label_1259a4;
        case 0x1259a8u: goto label_1259a8;
        case 0x1259acu: goto label_1259ac;
        case 0x1259b0u: goto label_1259b0;
        case 0x1259b4u: goto label_1259b4;
        case 0x1259b8u: goto label_1259b8;
        case 0x1259bcu: goto label_1259bc;
        case 0x1259c0u: goto label_1259c0;
        case 0x1259c4u: goto label_1259c4;
        case 0x1259c8u: goto label_1259c8;
        case 0x1259ccu: goto label_1259cc;
        case 0x1259d0u: goto label_1259d0;
        case 0x1259d4u: goto label_1259d4;
        case 0x1259d8u: goto label_1259d8;
        case 0x1259dcu: goto label_1259dc;
        case 0x1259e0u: goto label_1259e0;
        case 0x1259e4u: goto label_1259e4;
        case 0x1259e8u: goto label_1259e8;
        case 0x1259ecu: goto label_1259ec;
        case 0x1259f0u: goto label_1259f0;
        case 0x1259f4u: goto label_1259f4;
        case 0x1259f8u: goto label_1259f8;
        case 0x1259fcu: goto label_1259fc;
        case 0x125a00u: goto label_125a00;
        case 0x125a04u: goto label_125a04;
        case 0x125a08u: goto label_125a08;
        case 0x125a0cu: goto label_125a0c;
        case 0x125a10u: goto label_125a10;
        case 0x125a14u: goto label_125a14;
        case 0x125a18u: goto label_125a18;
        case 0x125a1cu: goto label_125a1c;
        case 0x125a20u: goto label_125a20;
        case 0x125a24u: goto label_125a24;
        case 0x125a28u: goto label_125a28;
        case 0x125a2cu: goto label_125a2c;
        case 0x125a30u: goto label_125a30;
        case 0x125a34u: goto label_125a34;
        case 0x125a38u: goto label_125a38;
        case 0x125a3cu: goto label_125a3c;
        case 0x125a40u: goto label_125a40;
        case 0x125a44u: goto label_125a44;
        case 0x125a48u: goto label_125a48;
        case 0x125a4cu: goto label_125a4c;
        case 0x125a50u: goto label_125a50;
        case 0x125a54u: goto label_125a54;
        case 0x125a58u: goto label_125a58;
        case 0x125a5cu: goto label_125a5c;
        case 0x125a60u: goto label_125a60;
        case 0x125a64u: goto label_125a64;
        case 0x125a68u: goto label_125a68;
        case 0x125a6cu: goto label_125a6c;
        case 0x125a70u: goto label_125a70;
        case 0x125a74u: goto label_125a74;
        case 0x125a78u: goto label_125a78;
        case 0x125a7cu: goto label_125a7c;
        case 0x125a80u: goto label_125a80;
        case 0x125a84u: goto label_125a84;
        case 0x125a88u: goto label_125a88;
        case 0x125a8cu: goto label_125a8c;
        case 0x125a90u: goto label_125a90;
        case 0x125a94u: goto label_125a94;
        case 0x125a98u: goto label_125a98;
        case 0x125a9cu: goto label_125a9c;
        case 0x125aa0u: goto label_125aa0;
        case 0x125aa4u: goto label_125aa4;
        case 0x125aa8u: goto label_125aa8;
        case 0x125aacu: goto label_125aac;
        case 0x125ab0u: goto label_125ab0;
        case 0x125ab4u: goto label_125ab4;
        case 0x125ab8u: goto label_125ab8;
        case 0x125abcu: goto label_125abc;
        case 0x125ac0u: goto label_125ac0;
        case 0x125ac4u: goto label_125ac4;
        case 0x125ac8u: goto label_125ac8;
        case 0x125accu: goto label_125acc;
        case 0x125ad0u: goto label_125ad0;
        case 0x125ad4u: goto label_125ad4;
        case 0x125ad8u: goto label_125ad8;
        case 0x125adcu: goto label_125adc;
        case 0x125ae0u: goto label_125ae0;
        case 0x125ae4u: goto label_125ae4;
        case 0x125ae8u: goto label_125ae8;
        case 0x125aecu: goto label_125aec;
        case 0x125af0u: goto label_125af0;
        case 0x125af4u: goto label_125af4;
        case 0x125af8u: goto label_125af8;
        case 0x125afcu: goto label_125afc;
        case 0x125b00u: goto label_125b00;
        case 0x125b04u: goto label_125b04;
        case 0x125b08u: goto label_125b08;
        case 0x125b0cu: goto label_125b0c;
        case 0x125b10u: goto label_125b10;
        case 0x125b14u: goto label_125b14;
        case 0x125b18u: goto label_125b18;
        case 0x125b1cu: goto label_125b1c;
        case 0x125b20u: goto label_125b20;
        case 0x125b24u: goto label_125b24;
        case 0x125b28u: goto label_125b28;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b30u: goto label_125b30;
        case 0x125b34u: goto label_125b34;
        case 0x125b38u: goto label_125b38;
        case 0x125b3cu: goto label_125b3c;
        case 0x125b40u: goto label_125b40;
        case 0x125b44u: goto label_125b44;
        case 0x125b48u: goto label_125b48;
        case 0x125b4cu: goto label_125b4c;
        case 0x125b50u: goto label_125b50;
        case 0x125b54u: goto label_125b54;
        case 0x125b58u: goto label_125b58;
        case 0x125b5cu: goto label_125b5c;
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cb4u: goto label_125cb4;
        case 0x125cb8u: goto label_125cb8;
        case 0x125cbcu: goto label_125cbc;
        case 0x125cc0u: goto label_125cc0;
        case 0x125cc4u: goto label_125cc4;
        case 0x125cc8u: goto label_125cc8;
        case 0x125cccu: goto label_125ccc;
        case 0x125cd0u: goto label_125cd0;
        case 0x125cd4u: goto label_125cd4;
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        case 0x125d28u: goto label_125d28;
        case 0x125d2cu: goto label_125d2c;
        case 0x125d30u: goto label_125d30;
        case 0x125d34u: goto label_125d34;
        case 0x125d38u: goto label_125d38;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d40u: goto label_125d40;
        case 0x125d44u: goto label_125d44;
        case 0x125d48u: goto label_125d48;
        case 0x125d4cu: goto label_125d4c;
        case 0x125d50u: goto label_125d50;
        case 0x125d54u: goto label_125d54;
        case 0x125d58u: goto label_125d58;
        case 0x125d5cu: goto label_125d5c;
        case 0x125d60u: goto label_125d60;
        case 0x125d64u: goto label_125d64;
        case 0x125d68u: goto label_125d68;
        case 0x125d6cu: goto label_125d6c;
        case 0x125d70u: goto label_125d70;
        case 0x125d74u: goto label_125d74;
        case 0x125d78u: goto label_125d78;
        case 0x125d7cu: goto label_125d7c;
        case 0x125d80u: goto label_125d80;
        case 0x125d84u: goto label_125d84;
        case 0x125d88u: goto label_125d88;
        case 0x125d8cu: goto label_125d8c;
        case 0x125d90u: goto label_125d90;
        case 0x125d94u: goto label_125d94;
        case 0x125d98u: goto label_125d98;
        case 0x125d9cu: goto label_125d9c;
        case 0x125da0u: goto label_125da0;
        case 0x125da4u: goto label_125da4;
        case 0x125da8u: goto label_125da8;
        case 0x125dacu: goto label_125dac;
        case 0x125db0u: goto label_125db0;
        case 0x125db4u: goto label_125db4;
        case 0x125db8u: goto label_125db8;
        case 0x125dbcu: goto label_125dbc;
        case 0x125dc0u: goto label_125dc0;
        case 0x125dc4u: goto label_125dc4;
        case 0x125dc8u: goto label_125dc8;
        case 0x125dccu: goto label_125dcc;
        case 0x125dd0u: goto label_125dd0;
        case 0x125dd4u: goto label_125dd4;
        case 0x125dd8u: goto label_125dd8;
        case 0x125ddcu: goto label_125ddc;
        case 0x125de0u: goto label_125de0;
        case 0x125de4u: goto label_125de4;
        case 0x125de8u: goto label_125de8;
        case 0x125decu: goto label_125dec;
        case 0x125df0u: goto label_125df0;
        case 0x125df4u: goto label_125df4;
        case 0x125df8u: goto label_125df8;
        case 0x125dfcu: goto label_125dfc;
        case 0x125e00u: goto label_125e00;
        case 0x125e04u: goto label_125e04;
        case 0x125e08u: goto label_125e08;
        case 0x125e0cu: goto label_125e0c;
        case 0x125e10u: goto label_125e10;
        case 0x125e14u: goto label_125e14;
        case 0x125e18u: goto label_125e18;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e20u: goto label_125e20;
        case 0x125e24u: goto label_125e24;
        case 0x125e28u: goto label_125e28;
        case 0x125e2cu: goto label_125e2c;
        case 0x125e30u: goto label_125e30;
        case 0x125e34u: goto label_125e34;
        case 0x125e38u: goto label_125e38;
        case 0x125e3cu: goto label_125e3c;
        case 0x125e40u: goto label_125e40;
        case 0x125e44u: goto label_125e44;
        case 0x125e48u: goto label_125e48;
        case 0x125e4cu: goto label_125e4c;
        case 0x125e50u: goto label_125e50;
        case 0x125e54u: goto label_125e54;
        case 0x125e58u: goto label_125e58;
        case 0x125e5cu: goto label_125e5c;
        case 0x125e60u: goto label_125e60;
        case 0x125e64u: goto label_125e64;
        case 0x125e68u: goto label_125e68;
        case 0x125e6cu: goto label_125e6c;
        case 0x125e70u: goto label_125e70;
        case 0x125e74u: goto label_125e74;
        case 0x125e78u: goto label_125e78;
        case 0x125e7cu: goto label_125e7c;
        case 0x125e80u: goto label_125e80;
        case 0x125e84u: goto label_125e84;
        case 0x125e88u: goto label_125e88;
        case 0x125e8cu: goto label_125e8c;
        case 0x125e90u: goto label_125e90;
        case 0x125e94u: goto label_125e94;
        case 0x125e98u: goto label_125e98;
        case 0x125e9cu: goto label_125e9c;
        case 0x125ea0u: goto label_125ea0;
        case 0x125ea4u: goto label_125ea4;
        case 0x125ea8u: goto label_125ea8;
        case 0x125eacu: goto label_125eac;
        case 0x125eb0u: goto label_125eb0;
        case 0x125eb4u: goto label_125eb4;
        case 0x125eb8u: goto label_125eb8;
        case 0x125ebcu: goto label_125ebc;
        case 0x125ec0u: goto label_125ec0;
        case 0x125ec4u: goto label_125ec4;
        case 0x125ec8u: goto label_125ec8;
        case 0x125eccu: goto label_125ecc;
        case 0x125ed0u: goto label_125ed0;
        case 0x125ed4u: goto label_125ed4;
        case 0x125ed8u: goto label_125ed8;
        case 0x125edcu: goto label_125edc;
        case 0x125ee0u: goto label_125ee0;
        case 0x125ee4u: goto label_125ee4;
        case 0x125ee8u: goto label_125ee8;
        case 0x125eecu: goto label_125eec;
        case 0x125ef0u: goto label_125ef0;
        case 0x125ef4u: goto label_125ef4;
        case 0x125ef8u: goto label_125ef8;
        case 0x125efcu: goto label_125efc;
        case 0x125f00u: goto label_125f00;
        case 0x125f04u: goto label_125f04;
        case 0x125f08u: goto label_125f08;
        case 0x125f0cu: goto label_125f0c;
        case 0x125f10u: goto label_125f10;
        case 0x125f14u: goto label_125f14;
        case 0x125f18u: goto label_125f18;
        case 0x125f1cu: goto label_125f1c;
        case 0x125f20u: goto label_125f20;
        case 0x125f24u: goto label_125f24;
        case 0x125f28u: goto label_125f28;
        case 0x125f2cu: goto label_125f2c;
        case 0x125f30u: goto label_125f30;
        case 0x125f34u: goto label_125f34;
        default: break;
    }

    ctx->pc = 0x125048u;

label_125048:
    // 0x125048: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x125048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_12504c:
    // 0x12504c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x12504cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_125050:
    // 0x125050: 0x7fb006f0  sq          $s0, 0x6F0($sp)
    ctx->pc = 0x125050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 16));
label_125054:
    // 0x125054: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x125054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_125058:
    // 0x125058: 0x7fb206d0  sq          $s2, 0x6D0($sp)
    ctx->pc = 0x125058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 18));
label_12505c:
    // 0x12505c: 0x27b001b4  addiu       $s0, $sp, 0x1B4
    ctx->pc = 0x12505cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_125060:
    // 0x125060: 0x7fb306c0  sq          $s3, 0x6C0($sp)
    ctx->pc = 0x125060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 19));
label_125064:
    // 0x125064: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125068:
    // 0x125068: 0x7fb406b0  sq          $s4, 0x6B0($sp)
    ctx->pc = 0x125068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 20));
label_12506c:
    // 0x12506c: 0x2453d4a8  addiu       $s3, $v0, -0x2B58
    ctx->pc = 0x12506cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956200));
label_125070:
    // 0x125070: 0x7fb506a0  sq          $s5, 0x6A0($sp)
    ctx->pc = 0x125070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 21));
label_125074:
    // 0x125074: 0x24747a0c  addiu       $s4, $v1, 0x7A0C
    ctx->pc = 0x125074u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 31244));
label_125078:
    // 0x125078: 0x7fb60690  sq          $s6, 0x690($sp)
    ctx->pc = 0x125078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 22));
label_12507c:
    // 0x12507c: 0x3c150008  lui         $s5, 0x8
    ctx->pc = 0x12507cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8 << 16));
label_125080:
    // 0x125080: 0x7fb70680  sq          $s7, 0x680($sp)
    ctx->pc = 0x125080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 23));
label_125084:
    // 0x125084: 0x2416000b  addiu       $s6, $zero, 0xB
    ctx->pc = 0x125084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_125088:
    // 0x125088: 0x7fbe0670  sq          $fp, 0x670($sp)
    ctx->pc = 0x125088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 30));
label_12508c:
    // 0x12508c: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x12508cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
label_125090:
    // 0x125090: 0x7fb106e0  sq          $s1, 0x6E0($sp)
    ctx->pc = 0x125090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 17));
label_125094:
    // 0x125094: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x125094u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125098:
    // 0x125098: 0xffbf0660  sd          $ra, 0x660($sp)
    ctx->pc = 0x125098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 31));
label_12509c:
    // 0x12509c: 0xafa40650  sw          $a0, 0x650($sp)
    ctx->pc = 0x12509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 4));
label_1250a0:
    // 0x1250a0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1250a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1250a4:
    // 0x1250a4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1250a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1250a8:
    // 0x1250a8: 0x8c827a0c  lw          $v0, 0x7A0C($a0)
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31244)));
label_1250ac:
    // 0x1250ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1250b0:
    if (ctx->pc == 0x1250B0u) {
        ctx->pc = 0x1250B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250ACu;
        // 0x1250b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250B4u;
        goto label_1250b4;
    }
    ctx->pc = 0x1250ACu;
    {
        const bool branch_taken_0x1250ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250ACu;
        // 0x1250b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250ac) {
            ctx->pc = 0x1250BCu;
            goto label_1250bc;
        }
    }
    ctx->pc = 0x1250B4u;
label_1250b4:
    // 0x1250b4: 0x50b60015  beql        $a1, $s6, . + 4 + (0x15 << 2)
label_1250b8:
    if (ctx->pc == 0x1250B8u) {
        ctx->pc = 0x1250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250B4u;
        // 0x1250b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250BCu;
        goto label_1250bc;
    }
    ctx->pc = 0x1250B4u;
    {
        const bool branch_taken_0x1250b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        if (branch_taken_0x1250b4) {
            ctx->pc = 0x1250B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1250B4u;
            // 0x1250b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12510Cu;
            goto label_12510c;
        }
    }
    ctx->pc = 0x1250BCu;
label_1250bc:
    // 0x1250bc: 0x38a2000b  xori        $v0, $a1, 0xB
    ctx->pc = 0x1250bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)11);
label_1250c0:
    // 0x1250c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1250c4:
    if (ctx->pc == 0x1250C4u) {
        ctx->pc = 0x1250C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250C0u;
        // 0x1250c4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250C8u;
        goto label_1250c8;
    }
    ctx->pc = 0x1250C0u;
    {
        const bool branch_taken_0x1250c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250C0u;
        // 0x1250c4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250c0) {
            ctx->pc = 0x1250FCu;
            goto label_1250fc;
        }
    }
    ctx->pc = 0x1250C8u;
label_1250c8:
    // 0x1250c8: 0xc07f072  jal         func_1FC1C8
label_1250cc:
    if (ctx->pc == 0x1250CCu) {
        ctx->pc = 0x1250CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250C8u;
        // 0x1250cc: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250D0u;
        goto label_1250d0;
    }
    ctx->pc = 0x1250C8u;
    SET_GPR_U32(ctx, 31, 0x1250D0u);
    ctx->pc = 0x1250CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250C8u;
    // 0x1250cc: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC1C8u, 0x1250C8u, 0x1250D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250D0u;
label_1250d0:
    // 0x1250d0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1250d4:
    if (ctx->pc == 0x1250D4u) {
        ctx->pc = 0x1250D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250D0u;
        // 0x1250d4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250D8u;
        goto label_1250d8;
    }
    ctx->pc = 0x1250D0u;
    {
        const bool branch_taken_0x1250d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1250d0) {
            ctx->pc = 0x1250D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1250D0u;
            // 0x1250d4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125100u;
            goto label_125100;
        }
    }
    ctx->pc = 0x1250D8u;
label_1250d8:
    // 0x1250d8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1250d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1250dc:
    // 0x1250dc: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_1250e0:
    // 0x1250e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1250e4:
    if (ctx->pc == 0x1250E4u) {
        ctx->pc = 0x1250E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E0u;
        // 0x1250e4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250E8u;
        goto label_1250e8;
    }
    ctx->pc = 0x1250E0u;
    {
        const bool branch_taken_0x1250e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1250e0) {
            ctx->pc = 0x1250E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1250E0u;
            // 0x1250e4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125100u;
            goto label_125100;
        }
    }
    ctx->pc = 0x1250E8u;
label_1250e8:
    // 0x1250e8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1250e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1250ec:
    // 0x1250ec: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1250ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1250f0:
    // 0x1250f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1250f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1250f4:
    // 0x1250f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1250f8:
    if (ctx->pc == 0x1250F8u) {
        ctx->pc = 0x1250F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250F4u;
        // 0x1250f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250FCu;
        goto label_1250fc;
    }
    ctx->pc = 0x1250F4u;
    {
        const bool branch_taken_0x1250f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250f4) {
            ctx->pc = 0x1250F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1250F4u;
            // 0x1250f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12510Cu;
            goto label_12510c;
        }
    }
    ctx->pc = 0x1250FCu;
label_1250fc:
    // 0x1250fc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1250fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_125100:
    // 0x125100: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x125100u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_125104:
    // 0x125104: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x125104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_125108:
    // 0x125108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12510c:
    // 0x12510c: 0x2e420013  sltiu       $v0, $s2, 0x13
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_125110:
    // 0x125110: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_125114:
    if (ctx->pc == 0x125114u) {
        ctx->pc = 0x125114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125110u;
        // 0x125114: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125118u;
        goto label_125118;
    }
    ctx->pc = 0x125110u;
    {
        const bool branch_taken_0x125110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125110u;
        // 0x125114: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125110) {
            ctx->pc = 0x1250A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1250a0;
        }
    }
    ctx->pc = 0x125118u;
label_125118:
    // 0x125118: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_12511c:
    // 0x12511c: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
label_125120:
    // 0x125120: 0xc07e99e  jal         func_1FA678
label_125124:
    if (ctx->pc == 0x125124u) {
        ctx->pc = 0x125124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125120u;
        // 0x125124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125128u;
        goto label_125128;
    }
    ctx->pc = 0x125120u;
    SET_GPR_U32(ctx, 31, 0x125128u);
    ctx->pc = 0x125124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125120u;
    // 0x125124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x125120u, 0x125128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125128u;
label_125128:
    // 0x125128: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x125128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_12512c:
    // 0x12512c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_125130:
    if (ctx->pc == 0x125130u) {
        ctx->pc = 0x125130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12512Cu;
        // 0x125130: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125134u;
        goto label_125134;
    }
    ctx->pc = 0x12512Cu;
    {
        const bool branch_taken_0x12512c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12512Cu;
        // 0x125130: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12512c) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x125134u;
label_125134:
    // 0x125134: 0xc07e804  jal         func_1FA010
label_125138:
    if (ctx->pc == 0x125138u) {
        ctx->pc = 0x125138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125134u;
        // 0x125138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12513Cu;
        goto label_12513c;
    }
    ctx->pc = 0x125134u;
    SET_GPR_U32(ctx, 31, 0x12513Cu);
    ctx->pc = 0x125138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125134u;
    // 0x125138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x125134u, 0x12513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12513Cu;
label_12513c:
    // 0x12513c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12513cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_125140:
    // 0x125140: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_125144:
    if (ctx->pc == 0x125144u) {
        ctx->pc = 0x125144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125140u;
        // 0x125144: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125148u;
        goto label_125148;
    }
    ctx->pc = 0x125140u;
    {
        const bool branch_taken_0x125140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125140u;
        // 0x125144: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125140) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x125148u;
label_125148:
    // 0x125148: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_12514c:
    // 0x12514c: 0x904305b1  lbu         $v1, 0x5B1($v0)
    ctx->pc = 0x12514cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1457)));
label_125150:
    // 0x125150: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_125154:
    if (ctx->pc == 0x125154u) {
        ctx->pc = 0x125154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125150u;
        // 0x125154: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125158u;
        goto label_125158;
    }
    ctx->pc = 0x125150u;
    {
        const bool branch_taken_0x125150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x125154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125150u;
        // 0x125154: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125150) {
            ctx->pc = 0x125188u;
            goto label_125188;
        }
    }
    ctx->pc = 0x125158u;
label_125158:
    // 0x125158: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x125158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_12515c:
    // 0x12515c: 0x8c829b70  lw          $v0, -0x6490($a0)
    ctx->pc = 0x12515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941552)));
label_125160:
    // 0x125160: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x125160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_125164:
    // 0x125164: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_125168:
    // 0x125168: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x125168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_12516c:
    // 0x12516c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_125170:
    if (ctx->pc == 0x125170u) {
        ctx->pc = 0x125170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12516Cu;
        // 0x125170: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125174u;
        goto label_125174;
    }
    ctx->pc = 0x12516Cu;
    {
        const bool branch_taken_0x12516c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12516Cu;
        // 0x125170: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12516c) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x125174u;
label_125174:
    // 0x125174: 0x9c628240  lwu         $v0, -0x7DC0($v1)
    ctx->pc = 0x125174u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935104)));
label_125178:
    // 0x125178: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x125178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_12517c:
    // 0x12517c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125180:
    // 0x125180: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_125184:
    if (ctx->pc == 0x125184u) {
        ctx->pc = 0x125184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125180u;
        // 0x125184: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125188u;
        goto label_125188;
    }
    ctx->pc = 0x125180u;
    {
        const bool branch_taken_0x125180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125180u;
        // 0x125184: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125180) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x125188u;
label_125188:
    // 0x125188: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12518c:
    // 0x12518c: 0x3c22018  mult        $a0, $fp, $v0
    ctx->pc = 0x12518cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125190:
    // 0x125190: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_125194:
    // 0x125194: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x125194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125198:
    // 0x125198: 0xac4301b4  sw          $v1, 0x1B4($v0)
    ctx->pc = 0x125198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 3));
label_12519c:
    // 0x12519c: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x12519cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_1251a0:
    // 0x1251a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1251a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1251a4:
    // 0x1251a4: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x1251a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
label_1251a8:
    // 0x1251a8: 0x2453d4f8  addiu       $s3, $v0, -0x2B08
    ctx->pc = 0x1251a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956280));
label_1251ac:
    // 0x1251ac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1251b0:
    // 0x1251b0: 0x26b47a0c  addiu       $s4, $s5, 0x7A0C
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 31244));
label_1251b4:
    // 0x1251b4: 0xafa50658  sw          $a1, 0x658($sp)
    ctx->pc = 0x1251b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1624), GPR_U32(ctx, 5));
label_1251b8:
    // 0x1251b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1251b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1251bc:
    // 0x1251bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1251bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1251c0:
    // 0x1251c0: 0x27b00334  addiu       $s0, $sp, 0x334
    ctx->pc = 0x1251c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
label_1251c4:
    // 0x1251c4: 0x0  nop
    ctx->pc = 0x1251c4u;
    // NOP
label_1251c8:
    // 0x1251c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1251cc:
    // 0x1251cc: 0x8ea27a0c  lw          $v0, 0x7A0C($s5)
    ctx->pc = 0x1251ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31244)));
label_1251d0:
    // 0x1251d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1251d4:
    if (ctx->pc == 0x1251D4u) {
        ctx->pc = 0x1251D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251D0u;
        // 0x1251d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1251D8u;
        goto label_1251d8;
    }
    ctx->pc = 0x1251D0u;
    {
        const bool branch_taken_0x1251d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251D0u;
        // 0x1251d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251d0) {
            ctx->pc = 0x1251E4u;
            goto label_1251e4;
        }
    }
    ctx->pc = 0x1251D8u;
label_1251d8:
    // 0x1251d8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1251d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1251dc:
    // 0x1251dc: 0x50a20016  beql        $a1, $v0, . + 4 + (0x16 << 2)
label_1251e0:
    if (ctx->pc == 0x1251E0u) {
        ctx->pc = 0x1251E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251DCu;
        // 0x1251e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1251E4u;
        goto label_1251e4;
    }
    ctx->pc = 0x1251DCu;
    {
        const bool branch_taken_0x1251dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1251dc) {
            ctx->pc = 0x1251E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1251DCu;
            // 0x1251e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125238u;
            goto label_125238;
        }
    }
    ctx->pc = 0x1251E4u;
label_1251e4:
    // 0x1251e4: 0x38a2000b  xori        $v0, $a1, 0xB
    ctx->pc = 0x1251e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)11);
label_1251e8:
    // 0x1251e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1251ec:
    if (ctx->pc == 0x1251ECu) {
        ctx->pc = 0x1251ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251E8u;
        // 0x1251ec: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1251F0u;
        goto label_1251f0;
    }
    ctx->pc = 0x1251E8u;
    {
        const bool branch_taken_0x1251e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251E8u;
        // 0x1251ec: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251e8) {
            ctx->pc = 0x125228u;
            goto label_125228;
        }
    }
    ctx->pc = 0x1251F0u;
label_1251f0:
    // 0x1251f0: 0xc07f072  jal         func_1FC1C8
label_1251f4:
    if (ctx->pc == 0x1251F4u) {
        ctx->pc = 0x1251F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251F0u;
        // 0x1251f4: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1251F8u;
        goto label_1251f8;
    }
    ctx->pc = 0x1251F0u;
    SET_GPR_U32(ctx, 31, 0x1251F8u);
    ctx->pc = 0x1251F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251F0u;
    // 0x1251f4: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC1C8u, 0x1251F0u, 0x1251F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251F8u;
label_1251f8:
    // 0x1251f8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1251fc:
    if (ctx->pc == 0x1251FCu) {
        ctx->pc = 0x1251FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251F8u;
        // 0x1251fc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125200u;
        goto label_125200;
    }
    ctx->pc = 0x1251F8u;
    {
        const bool branch_taken_0x1251f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1251f8) {
            ctx->pc = 0x1251FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1251F8u;
            // 0x1251fc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12522Cu;
            goto label_12522c;
        }
    }
    ctx->pc = 0x125200u;
label_125200:
    // 0x125200: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_125204:
    // 0x125204: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_125208:
    // 0x125208: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x125208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_12520c:
    // 0x12520c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_125210:
    if (ctx->pc == 0x125210u) {
        ctx->pc = 0x125210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12520Cu;
        // 0x125210: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125214u;
        goto label_125214;
    }
    ctx->pc = 0x12520Cu;
    {
        const bool branch_taken_0x12520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12520c) {
            ctx->pc = 0x125210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12520Cu;
            // 0x125210: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12522Cu;
            goto label_12522c;
        }
    }
    ctx->pc = 0x125214u;
label_125214:
    // 0x125214: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_125218:
    // 0x125218: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x125218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_12521c:
    // 0x12521c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125220:
    // 0x125220: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_125224:
    if (ctx->pc == 0x125224u) {
        ctx->pc = 0x125224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125220u;
        // 0x125224: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125228u;
        goto label_125228;
    }
    ctx->pc = 0x125220u;
    {
        const bool branch_taken_0x125220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125220) {
            ctx->pc = 0x125224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125220u;
            // 0x125224: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125238u;
            goto label_125238;
        }
    }
    ctx->pc = 0x125228u;
label_125228:
    // 0x125228: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_12522c:
    // 0x12522c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_125230:
    // 0x125230: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x125230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_125234:
    // 0x125234: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125238:
    // 0x125238: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x125238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_12523c:
    // 0x12523c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_125240:
    if (ctx->pc == 0x125240u) {
        ctx->pc = 0x125240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12523Cu;
        // 0x125240: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125244u;
        goto label_125244;
    }
    ctx->pc = 0x12523Cu;
    {
        const bool branch_taken_0x12523c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12523Cu;
        // 0x125240: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12523c) {
            ctx->pc = 0x1251C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1251c8;
        }
    }
    ctx->pc = 0x125244u;
label_125244:
    // 0x125244: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x125244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125248:
    // 0x125248: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12524c:
    // 0x12524c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_125250:
    // 0x125250: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x125250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_125254:
    // 0x125254: 0x24a2d518  addiu       $v0, $a1, -0x2AE8
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956312));
label_125258:
    // 0x125258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12525c:
    // 0x12525c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_125260:
    // 0x125260: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x125260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125264:
    // 0x125264: 0x8c447a0c  lw          $a0, 0x7A0C($v0)
    ctx->pc = 0x125264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
label_125268:
    // 0x125268: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_12526c:
    if (ctx->pc == 0x12526Cu) {
        ctx->pc = 0x12526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125268u;
        // 0x12526c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125270u;
        goto label_125270;
    }
    ctx->pc = 0x125268u;
    {
        const bool branch_taken_0x125268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125268u;
        // 0x12526c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125268) {
            ctx->pc = 0x12527Cu;
            goto label_12527c;
        }
    }
    ctx->pc = 0x125270u;
label_125270:
    // 0x125270: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x125270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_125274:
    // 0x125274: 0x50a2002c  beql        $a1, $v0, . + 4 + (0x2C << 2)
label_125278:
    if (ctx->pc == 0x125278u) {
        ctx->pc = 0x125278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125274u;
        // 0x125278: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12527Cu;
        goto label_12527c;
    }
    ctx->pc = 0x125274u;
    {
        const bool branch_taken_0x125274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x125274) {
            ctx->pc = 0x125278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125274u;
            // 0x125278: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125328u;
            goto label_125328;
        }
    }
    ctx->pc = 0x12527Cu;
label_12527c:
    // 0x12527c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x12527cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_125280:
    // 0x125280: 0xc07f02a  jal         func_1FC0A8
label_125284:
    if (ctx->pc == 0x125284u) {
        ctx->pc = 0x125284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125280u;
        // 0x125284: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125288u;
        goto label_125288;
    }
    ctx->pc = 0x125280u;
    SET_GPR_U32(ctx, 31, 0x125288u);
    ctx->pc = 0x125284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125280u;
    // 0x125284: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x125280u, 0x125288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125288u;
label_125288:
    // 0x125288: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12528c:
    // 0x12528c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x12528cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_125290:
    // 0x125290: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_125294:
    if (ctx->pc == 0x125294u) {
        ctx->pc = 0x125294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125290u;
        // 0x125294: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125298u;
        goto label_125298;
    }
    ctx->pc = 0x125290u;
    {
        const bool branch_taken_0x125290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125290u;
        // 0x125294: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125290) {
            ctx->pc = 0x1252BCu;
            goto label_1252bc;
        }
    }
    ctx->pc = 0x125298u;
label_125298:
    // 0x125298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12529c:
    // 0x12529c: 0x2442c850  addiu       $v0, $v0, -0x37B0
    ctx->pc = 0x12529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953040));
label_1252a0:
    // 0x1252a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1252a4:
    // 0x1252a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1252a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1252a8:
    // 0x1252a8: 0x800008  jr          $a0
label_1252ac:
    if (ctx->pc == 0x1252ACu) {
        ctx->pc = 0x1252B0u;
        goto label_1252b0;
    }
    ctx->pc = 0x1252A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1252B0u: goto label_1252b0;
            case 0x1252BCu: goto label_1252bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1252A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1252B0u;
label_1252b0:
    // 0x1252b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1252b4:
    // 0x1252b4: 0x5202001c  beql        $s0, $v0, . + 4 + (0x1C << 2)
label_1252b8:
    if (ctx->pc == 0x1252B8u) {
        ctx->pc = 0x1252B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252B4u;
        // 0x1252b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252BCu;
        goto label_1252bc;
    }
    ctx->pc = 0x1252B4u;
    {
        const bool branch_taken_0x1252b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252b4) {
            ctx->pc = 0x1252B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1252B4u;
            // 0x1252b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125328u;
            goto label_125328;
        }
    }
    ctx->pc = 0x1252BCu;
label_1252bc:
    // 0x1252bc: 0x3a02000b  xori        $v0, $s0, 0xB
    ctx->pc = 0x1252bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)11);
label_1252c0:
    // 0x1252c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1252c4:
    if (ctx->pc == 0x1252C4u) {
        ctx->pc = 0x1252C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252C0u;
        // 0x1252c4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252C8u;
        goto label_1252c8;
    }
    ctx->pc = 0x1252C0u;
    {
        const bool branch_taken_0x1252c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252C0u;
        // 0x1252c4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252c0) {
            ctx->pc = 0x125314u;
            goto label_125314;
        }
    }
    ctx->pc = 0x1252C8u;
label_1252c8:
    // 0x1252c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_1252cc:
    // 0x1252cc: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x1252ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
label_1252d0:
    // 0x1252d0: 0xc07f072  jal         func_1FC1C8
label_1252d4:
    if (ctx->pc == 0x1252D4u) {
        ctx->pc = 0x1252D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252D0u;
        // 0x1252d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252D8u;
        goto label_1252d8;
    }
    ctx->pc = 0x1252D0u;
    SET_GPR_U32(ctx, 31, 0x1252D8u);
    ctx->pc = 0x1252D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252D0u;
    // 0x1252d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC1C8u, 0x1252D0u, 0x1252D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252D8u;
label_1252d8:
    // 0x1252d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1252dc:
    if (ctx->pc == 0x1252DCu) {
        ctx->pc = 0x1252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252D8u;
        // 0x1252dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252E0u;
        goto label_1252e0;
    }
    ctx->pc = 0x1252D8u;
    {
        const bool branch_taken_0x1252d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252D8u;
        // 0x1252dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252d8) {
            ctx->pc = 0x125314u;
            goto label_125314;
        }
    }
    ctx->pc = 0x1252E0u;
label_1252e0:
    // 0x1252e0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1252e4:
    // 0x1252e4: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1252e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_1252e8:
    // 0x1252e8: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1252e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_1252ec:
    // 0x1252ec: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1252ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1252f0:
    // 0x1252f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1252f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1252f4:
    // 0x1252f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1252f8:
    if (ctx->pc == 0x1252F8u) {
        ctx->pc = 0x1252F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252F4u;
        // 0x1252f8: 0x24a47a2c  addiu       $a0, $a1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 31276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252FCu;
        goto label_1252fc;
    }
    ctx->pc = 0x1252F4u;
    {
        const bool branch_taken_0x1252f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252F4u;
        // 0x1252f8: 0x24a47a2c  addiu       $a0, $a1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252f4) {
            ctx->pc = 0x125310u;
            goto label_125310;
        }
    }
    ctx->pc = 0x1252FCu;
label_1252fc:
    // 0x1252fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1252fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_125300:
    // 0x125300: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x125300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_125304:
    // 0x125304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125308:
    // 0x125308: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_12530c:
    if (ctx->pc == 0x12530Cu) {
        ctx->pc = 0x12530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125308u;
        // 0x12530c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125310u;
        goto label_125310;
    }
    ctx->pc = 0x125308u;
    {
        const bool branch_taken_0x125308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125308) {
            ctx->pc = 0x12530Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125308u;
            // 0x12530c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125328u;
            goto label_125328;
        }
    }
    ctx->pc = 0x125310u;
label_125310:
    // 0x125310: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125314:
    // 0x125314: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x125314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_125318:
    // 0x125318: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12531c:
    // 0x12531c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_125320:
    // 0x125320: 0xac5004b4  sw          $s0, 0x4B4($v0)
    ctx->pc = 0x125320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 16));
label_125324:
    // 0x125324: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125328:
    // 0x125328: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12532c:
    // 0x12532c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_125330:
    if (ctx->pc == 0x125330u) {
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12532Cu;
        // 0x125330: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125334u;
        goto label_125334;
    }
    ctx->pc = 0x12532Cu;
    {
        const bool branch_taken_0x12532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12532Cu;
        // 0x125330: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12532c) {
            ctx->pc = 0x125250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125250;
        }
    }
    ctx->pc = 0x125334u;
label_125334:
    // 0x125334: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125338:
    // 0x125338: 0x8c43056c  lw          $v1, 0x56C($v0)
    ctx->pc = 0x125338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
label_12533c:
    // 0x12533c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_125340:
    if (ctx->pc == 0x125340u) {
        ctx->pc = 0x125340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12533Cu;
        // 0x125340: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125344u;
        goto label_125344;
    }
    ctx->pc = 0x12533Cu;
    {
        const bool branch_taken_0x12533c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x125340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12533Cu;
        // 0x125340: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12533c) {
            ctx->pc = 0x125370u;
            goto label_125370;
        }
    }
    ctx->pc = 0x125344u;
label_125344:
    // 0x125344: 0xc07e804  jal         func_1FA010
label_125348:
    if (ctx->pc == 0x125348u) {
        ctx->pc = 0x125348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125344u;
        // 0x125348: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12534Cu;
        goto label_12534c;
    }
    ctx->pc = 0x125344u;
    SET_GPR_U32(ctx, 31, 0x12534Cu);
    ctx->pc = 0x125348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125344u;
    // 0x125348: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x125344u, 0x12534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12534Cu;
label_12534c:
    // 0x12534c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x12534cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_125350:
    // 0x125350: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_125354:
    if (ctx->pc == 0x125354u) {
        ctx->pc = 0x125354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125350u;
        // 0x125354: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125358u;
        goto label_125358;
    }
    ctx->pc = 0x125350u;
    {
        const bool branch_taken_0x125350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125350u;
        // 0x125354: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125350) {
            ctx->pc = 0x125370u;
            goto label_125370;
        }
    }
    ctx->pc = 0x125358u;
label_125358:
    // 0x125358: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12535c:
    // 0x12535c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x12535cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_125360:
    // 0x125360: 0x2a22018  mult        $a0, $s5, $v0
    ctx->pc = 0x125360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125364:
    // 0x125364: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x125364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_125368:
    // 0x125368: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x125368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_12536c:
    // 0x12536c: 0xac4304b4  sw          $v1, 0x4B4($v0)
    ctx->pc = 0x12536cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 3));
label_125370:
    // 0x125370: 0xc07f02a  jal         func_1FC0A8
label_125374:
    if (ctx->pc == 0x125374u) {
        ctx->pc = 0x125374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125370u;
        // 0x125374: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125378u;
        goto label_125378;
    }
    ctx->pc = 0x125370u;
    SET_GPR_U32(ctx, 31, 0x125378u);
    ctx->pc = 0x125374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125370u;
    // 0x125374: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x125370u, 0x125378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125378u;
label_125378:
    // 0x125378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12537c:
    // 0x12537c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x12537cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_125380:
    // 0x125380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_125384:
    if (ctx->pc == 0x125384u) {
        ctx->pc = 0x125384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125380u;
        // 0x125384: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125388u;
        goto label_125388;
    }
    ctx->pc = 0x125380u;
    {
        const bool branch_taken_0x125380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125380u;
        // 0x125384: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125380) {
            ctx->pc = 0x1253B8u;
            goto label_1253b8;
        }
    }
    ctx->pc = 0x125388u;
label_125388:
    // 0x125388: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12538c:
    // 0x12538c: 0x2442c870  addiu       $v0, $v0, -0x3790
    ctx->pc = 0x12538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953072));
label_125390:
    // 0x125390: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125394:
    // 0x125394: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125398:
    // 0x125398: 0x800008  jr          $a0
label_12539c:
    if (ctx->pc == 0x12539Cu) {
        ctx->pc = 0x1253A0u;
        goto label_1253a0;
    }
    ctx->pc = 0x125398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1253A0u: goto label_1253a0;
            case 0x1253B8u: goto label_1253b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125398u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1253A0u;
label_1253a0:
    // 0x1253a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1253a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1253a4:
    // 0x1253a4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1253a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1253a8:
    // 0x1253a8: 0x2a22018  mult        $a0, $s5, $v0
    ctx->pc = 0x1253a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1253ac:
    // 0x1253ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1253acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1253b0:
    // 0x1253b0: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1253b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1253b4:
    // 0x1253b4: 0xac4304b4  sw          $v1, 0x4B4($v0)
    ctx->pc = 0x1253b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 3));
label_1253b8:
    // 0x1253b8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_1253bc:
    // 0x1253bc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1253bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1253c0:
    // 0x1253c0: 0x8ca27a2c  lw          $v0, 0x7A2C($a1)
    ctx->pc = 0x1253c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31276)));
label_1253c4:
    // 0x1253c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1253c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1253c8:
    // 0x1253c8: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_1253cc:
    if (ctx->pc == 0x1253CCu) {
        ctx->pc = 0x1253CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C8u;
        // 0x1253cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253D0u;
        goto label_1253d0;
    }
    ctx->pc = 0x1253C8u;
    {
        const bool branch_taken_0x1253c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1253CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C8u;
        // 0x1253cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253c8) {
            ctx->pc = 0x12550Cu;
            goto label_12550c;
        }
    }
    ctx->pc = 0x1253D0u;
label_1253d0:
    // 0x1253d0: 0x13c00014  beqz        $fp, . + 4 + (0x14 << 2)
label_1253d4:
    if (ctx->pc == 0x1253D4u) {
        ctx->pc = 0x1253D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253D0u;
        // 0x1253d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253D8u;
        goto label_1253d8;
    }
    ctx->pc = 0x1253D0u;
    {
        const bool branch_taken_0x1253d0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253D0u;
        // 0x1253d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253d0) {
            ctx->pc = 0x125424u;
            goto label_125424;
        }
    }
    ctx->pc = 0x1253D8u;
label_1253d8:
    // 0x1253d8: 0x27b001b4  addiu       $s0, $sp, 0x1B4
    ctx->pc = 0x1253d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_1253dc:
    // 0x1253dc: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1253e0:
    // 0x1253e0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1253e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1253e4:
    // 0x1253e4: 0x0  nop
    ctx->pc = 0x1253e4u;
    // NOP
label_1253e8:
    // 0x1253e8: 0xc0c73f8  jal         func_31CFE0
label_1253ec:
    if (ctx->pc == 0x1253ECu) {
        ctx->pc = 0x1253ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253E8u;
        // 0x1253ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253F0u;
        goto label_1253f0;
    }
    ctx->pc = 0x1253E8u;
    SET_GPR_U32(ctx, 31, 0x1253F0u);
    ctx->pc = 0x1253ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253E8u;
    // 0x1253ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1253E8u, 0x1253F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253F0u;
label_1253f0:
    // 0x1253f0: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x1253f0u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1253f4:
    // 0x1253f4: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_1253f8:
    if (ctx->pc == 0x1253F8u) {
        ctx->pc = 0x1253F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253F4u;
        // 0x1253f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253FCu;
        goto label_1253fc;
    }
    ctx->pc = 0x1253F4u;
    {
        const bool branch_taken_0x1253f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1253f4) {
            ctx->pc = 0x1253F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1253F4u;
            // 0x1253f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1253FCu;
            goto label_1253fc;
        }
    }
    ctx->pc = 0x1253FCu;
label_1253fc:
    // 0x1253fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1253fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125400:
    // 0x125400: 0x23e202b  sltu        $a0, $s1, $fp
    ctx->pc = 0x125400u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_125404:
    // 0x125404: 0x1810  mfhi        $v1
    ctx->pc = 0x125404u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_125408:
    // 0x125408: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x125408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_12540c:
    // 0x12540c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x12540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_125410:
    // 0x125410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125414:
    // 0x125414: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x125414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_125418:
    // 0x125418: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x125418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_12541c:
    // 0x12541c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_125420:
    if (ctx->pc == 0x125420u) {
        ctx->pc = 0x125420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12541Cu;
        // 0x125420: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125424u;
        goto label_125424;
    }
    ctx->pc = 0x12541Cu;
    {
        const bool branch_taken_0x12541c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x125420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12541Cu;
        // 0x125420: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12541c) {
            ctx->pc = 0x1253E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1253e8;
        }
    }
    ctx->pc = 0x125424u;
label_125424:
    // 0x125424: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125428:
    // 0x125428: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x125428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_12542c:
    // 0x12542c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_125430:
    if (ctx->pc == 0x125430u) {
        ctx->pc = 0x125434u;
        goto label_125434;
    }
    ctx->pc = 0x12542Cu;
    {
        const bool branch_taken_0x12542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12542c) {
            ctx->pc = 0x1253D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1253d0;
        }
    }
    ctx->pc = 0x125434u;
label_125434:
    // 0x125434: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125438:
    // 0x125438: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
label_12543c:
    if (ctx->pc == 0x12543Cu) {
        ctx->pc = 0x12543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125438u;
        // 0x12543c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125440u;
        goto label_125440;
    }
    ctx->pc = 0x125438u;
    {
        const bool branch_taken_0x125438 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125438u;
        // 0x12543c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125438) {
            ctx->pc = 0x12548Cu;
            goto label_12548c;
        }
    }
    ctx->pc = 0x125440u;
label_125440:
    // 0x125440: 0x27b00334  addiu       $s0, $sp, 0x334
    ctx->pc = 0x125440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
label_125444:
    // 0x125444: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x125444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125448:
    // 0x125448: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x125448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12544c:
    // 0x12544c: 0x0  nop
    ctx->pc = 0x12544cu;
    // NOP
label_125450:
    // 0x125450: 0xc0c73f8  jal         func_31CFE0
label_125454:
    if (ctx->pc == 0x125454u) {
        ctx->pc = 0x125454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125450u;
        // 0x125454: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125458u;
        goto label_125458;
    }
    ctx->pc = 0x125450u;
    SET_GPR_U32(ctx, 31, 0x125458u);
    ctx->pc = 0x125454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125450u;
    // 0x125454: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x125450u, 0x125458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125458u;
label_125458:
    // 0x125458: 0x56001b  divu        $zero, $v0, $s6
    ctx->pc = 0x125458u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_12545c:
    // 0x12545c: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_125460:
    if (ctx->pc == 0x125460u) {
        ctx->pc = 0x125460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12545Cu;
        // 0x125460: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125464u;
        goto label_125464;
    }
    ctx->pc = 0x12545Cu;
    {
        const bool branch_taken_0x12545c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12545c) {
            ctx->pc = 0x125460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12545Cu;
            // 0x125460: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x125464u;
            goto label_125464;
        }
    }
    ctx->pc = 0x125464u;
label_125464:
    // 0x125464: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x125464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125468:
    // 0x125468: 0x236202b  sltu        $a0, $s1, $s6
    ctx->pc = 0x125468u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12546c:
    // 0x12546c: 0x1810  mfhi        $v1
    ctx->pc = 0x12546cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_125470:
    // 0x125470: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x125470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_125474:
    // 0x125474: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x125474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_125478:
    // 0x125478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12547c:
    // 0x12547c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_125480:
    // 0x125480: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x125480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_125484:
    // 0x125484: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_125488:
    if (ctx->pc == 0x125488u) {
        ctx->pc = 0x125488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125484u;
        // 0x125488: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12548Cu;
        goto label_12548c;
    }
    ctx->pc = 0x125484u;
    {
        const bool branch_taken_0x125484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x125488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125484u;
        // 0x125488: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125484) {
            ctx->pc = 0x125450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125450;
        }
    }
    ctx->pc = 0x12548Cu;
label_12548c:
    // 0x12548c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12548cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125490:
    // 0x125490: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x125490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_125494:
    // 0x125494: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_125498:
    if (ctx->pc == 0x125498u) {
        ctx->pc = 0x12549Cu;
        goto label_12549c;
    }
    ctx->pc = 0x125494u;
    {
        const bool branch_taken_0x125494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125494) {
            ctx->pc = 0x125438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125438;
        }
    }
    ctx->pc = 0x12549Cu;
label_12549c:
    // 0x12549c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12549cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1254a0:
    // 0x1254a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1254a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1254a4:
    // 0x1254a4: 0x0  nop
    ctx->pc = 0x1254a4u;
    // NOP
label_1254a8:
    // 0x1254a8: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
label_1254ac:
    if (ctx->pc == 0x1254ACu) {
        ctx->pc = 0x1254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254A8u;
        // 0x1254ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254B0u;
        goto label_1254b0;
    }
    ctx->pc = 0x1254A8u;
    {
        const bool branch_taken_0x1254a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254A8u;
        // 0x1254ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254a8) {
            ctx->pc = 0x1254FCu;
            goto label_1254fc;
        }
    }
    ctx->pc = 0x1254B0u;
label_1254b0:
    // 0x1254b0: 0x27b004b4  addiu       $s0, $sp, 0x4B4
    ctx->pc = 0x1254b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1204));
label_1254b4:
    // 0x1254b4: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x1254b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1254b8:
    // 0x1254b8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1254b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1254bc:
    // 0x1254bc: 0x0  nop
    ctx->pc = 0x1254bcu;
    // NOP
label_1254c0:
    // 0x1254c0: 0xc0c73f8  jal         func_31CFE0
label_1254c4:
    if (ctx->pc == 0x1254C4u) {
        ctx->pc = 0x1254C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254C0u;
        // 0x1254c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254C8u;
        goto label_1254c8;
    }
    ctx->pc = 0x1254C0u;
    SET_GPR_U32(ctx, 31, 0x1254C8u);
    ctx->pc = 0x1254C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254C0u;
    // 0x1254c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1254C0u, 0x1254C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254C8u;
label_1254c8:
    // 0x1254c8: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x1254c8u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1254cc:
    // 0x1254cc: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_1254d0:
    if (ctx->pc == 0x1254D0u) {
        ctx->pc = 0x1254D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254CCu;
        // 0x1254d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254D4u;
        goto label_1254d4;
    }
    ctx->pc = 0x1254CCu;
    {
        const bool branch_taken_0x1254cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1254cc) {
            ctx->pc = 0x1254D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1254CCu;
            // 0x1254d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1254D4u;
            goto label_1254d4;
        }
    }
    ctx->pc = 0x1254D4u;
label_1254d4:
    // 0x1254d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1254d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1254d8:
    // 0x1254d8: 0x235202b  sltu        $a0, $s1, $s5
    ctx->pc = 0x1254d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1254dc:
    // 0x1254dc: 0x1810  mfhi        $v1
    ctx->pc = 0x1254dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1254e0:
    // 0x1254e0: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x1254e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1254e4:
    // 0x1254e4: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1254e8:
    // 0x1254e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1254e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1254ec:
    // 0x1254ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1254ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1254f0:
    // 0x1254f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1254f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1254f4:
    // 0x1254f4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1254f8:
    if (ctx->pc == 0x1254F8u) {
        ctx->pc = 0x1254F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254F4u;
        // 0x1254f8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254FCu;
        goto label_1254fc;
    }
    ctx->pc = 0x1254F4u;
    {
        const bool branch_taken_0x1254f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1254F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254F4u;
        // 0x1254f8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254f4) {
            ctx->pc = 0x1254C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1254c0;
        }
    }
    ctx->pc = 0x1254FCu;
label_1254fc:
    // 0x1254fc: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x1254fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_125500:
    // 0x125500: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_125504:
    if (ctx->pc == 0x125504u) {
        ctx->pc = 0x125504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125500u;
        // 0x125504: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125508u;
        goto label_125508;
    }
    ctx->pc = 0x125500u;
    {
        const bool branch_taken_0x125500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125500u;
        // 0x125504: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125500) {
            ctx->pc = 0x1254A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1254a8;
        }
    }
    ctx->pc = 0x125508u;
label_125508:
    // 0x125508: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12550c:
    // 0x12550c: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
label_125510:
    if (ctx->pc == 0x125510u) {
        ctx->pc = 0x125510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12550Cu;
        // 0x125510: 0xafa00654  sw          $zero, 0x654($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125514u;
        goto label_125514;
    }
    ctx->pc = 0x12550Cu;
    {
        const bool branch_taken_0x12550c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x125510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12550Cu;
        // 0x125510: 0xafa00654  sw          $zero, 0x654($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12550c) {
            ctx->pc = 0x125548u;
            goto label_125548;
        }
    }
    ctx->pc = 0x125514u;
label_125514:
    // 0x125514: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_125518:
    // 0x125518: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_12551c:
    // 0x12551c: 0x0  nop
    ctx->pc = 0x12551cu;
    // NOP
label_125520:
    // 0x125520: 0x8fa20654  lw          $v0, 0x654($sp)
    ctx->pc = 0x125520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_125524:
    // 0x125524: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125528:
    // 0x125528: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12552c:
    // 0x12552c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_125530:
    // 0x125530: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_125534:
    // 0x125534: 0xafa20654  sw          $v0, 0x654($sp)
    ctx->pc = 0x125534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 2));
label_125538:
    // 0x125538: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x125538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_12553c:
    // 0x12553c: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x12553cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_125540:
    // 0x125540: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_125544:
    if (ctx->pc == 0x125544u) {
        ctx->pc = 0x125544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125540u;
        // 0x125544: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125548u;
        goto label_125548;
    }
    ctx->pc = 0x125540u;
    {
        const bool branch_taken_0x125540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125540u;
        // 0x125544: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125540) {
            ctx->pc = 0x125520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125520;
        }
    }
    ctx->pc = 0x125548u;
label_125548:
    // 0x125548: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_12554c:
    if (ctx->pc == 0x12554Cu) {
        ctx->pc = 0x12554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125548u;
        // 0x12554c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125550u;
        goto label_125550;
    }
    ctx->pc = 0x125548u;
    {
        const bool branch_taken_0x125548 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125548u;
        // 0x12554c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125548) {
            ctx->pc = 0x125590u;
            goto label_125590;
        }
    }
    ctx->pc = 0x125550u;
label_125550:
    // 0x125550: 0x8fa40654  lw          $a0, 0x654($sp)
    ctx->pc = 0x125550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_125554:
    // 0x125554: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125558:
    // 0x125558: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x125558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_12555c:
    // 0x12555c: 0x27a50334  addiu       $a1, $sp, 0x334
    ctx->pc = 0x12555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
label_125560:
    // 0x125560: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x125560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_125564:
    // 0x125564: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x125564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125568:
    // 0x125568: 0x8fa20654  lw          $v0, 0x654($sp)
    ctx->pc = 0x125568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_12556c:
    // 0x12556c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12556cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125570:
    // 0x125570: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_125574:
    // 0x125574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_125578:
    // 0x125578: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x125578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_12557c:
    // 0x12557c: 0xafa20654  sw          $v0, 0x654($sp)
    ctx->pc = 0x12557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 2));
label_125580:
    // 0x125580: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x125580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_125584:
    // 0x125584: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x125584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_125588:
    // 0x125588: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_12558c:
    if (ctx->pc == 0x12558Cu) {
        ctx->pc = 0x12558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125588u;
        // 0x12558c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125590u;
        goto label_125590;
    }
    ctx->pc = 0x125588u;
    {
        const bool branch_taken_0x125588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125588u;
        // 0x12558c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125588) {
            ctx->pc = 0x125568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125568;
        }
    }
    ctx->pc = 0x125590u;
label_125590:
    // 0x125590: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_125594:
    if (ctx->pc == 0x125594u) {
        ctx->pc = 0x125594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125590u;
        // 0x125594: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125598u;
        goto label_125598;
    }
    ctx->pc = 0x125590u;
    {
        const bool branch_taken_0x125590 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x125594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125590u;
        // 0x125594: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125590) {
            ctx->pc = 0x1255D8u;
            goto label_1255d8;
        }
    }
    ctx->pc = 0x125598u;
label_125598:
    // 0x125598: 0x8fa40654  lw          $a0, 0x654($sp)
    ctx->pc = 0x125598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_12559c:
    // 0x12559c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1255a0:
    // 0x1255a0: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1255a4:
    // 0x1255a4: 0x27a504b4  addiu       $a1, $sp, 0x4B4
    ctx->pc = 0x1255a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1204));
label_1255a8:
    // 0x1255a8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1255a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1255ac:
    // 0x1255ac: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1255acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1255b0:
    // 0x1255b0: 0x8fa20654  lw          $v0, 0x654($sp)
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_1255b4:
    // 0x1255b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1255b8:
    // 0x1255b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1255b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1255bc:
    // 0x1255bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1255bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1255c0:
    // 0x1255c0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1255c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1255c4:
    // 0x1255c4: 0xafa20654  sw          $v0, 0x654($sp)
    ctx->pc = 0x1255c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 2));
label_1255c8:
    // 0x1255c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1255c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1255cc:
    // 0x1255cc: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1255ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1255d0:
    // 0x1255d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1255d4:
    if (ctx->pc == 0x1255D4u) {
        ctx->pc = 0x1255D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255D0u;
        // 0x1255d4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255D8u;
        goto label_1255d8;
    }
    ctx->pc = 0x1255D0u;
    {
        const bool branch_taken_0x1255d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1255D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255D0u;
        // 0x1255d4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255d0) {
            ctx->pc = 0x1255B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1255b0;
        }
    }
    ctx->pc = 0x1255D8u;
label_1255d8:
    // 0x1255d8: 0x8fa30654  lw          $v1, 0x654($sp)
    ctx->pc = 0x1255d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_1255dc:
    // 0x1255dc: 0x10600242  beqz        $v1, . + 4 + (0x242 << 2)
label_1255e0:
    if (ctx->pc == 0x1255E0u) {
        ctx->pc = 0x1255E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255DCu;
        // 0x1255e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255E4u;
        goto label_1255e4;
    }
    ctx->pc = 0x1255DCu;
    {
        const bool branch_taken_0x1255dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255DCu;
        // 0x1255e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255dc) {
            ctx->pc = 0x125EE8u;
            goto label_125ee8;
        }
    }
    ctx->pc = 0x1255E4u;
label_1255e4:
    // 0x1255e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1255e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1255e8:
    // 0x1255e8: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1255e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1255ec:
    // 0x1255ec: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1255ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1255f0:
    // 0x1255f0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1255f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1255f4:
    // 0x1255f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1255f8:
    // 0x1255f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1255fc:
    // 0x1255fc: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x1255fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_125600:
    // 0x125600: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_125604:
    if (ctx->pc == 0x125604u) {
        ctx->pc = 0x125604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125600u;
        // 0x125604: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125608u;
        goto label_125608;
    }
    ctx->pc = 0x125600u;
    {
        const bool branch_taken_0x125600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125600u;
        // 0x125604: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125600) {
            ctx->pc = 0x125620u;
            goto label_125620;
        }
    }
    ctx->pc = 0x125608u;
label_125608:
    // 0x125608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12560c:
    // 0x12560c: 0x2442c890  addiu       $v0, $v0, -0x3770
    ctx->pc = 0x12560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953104));
label_125610:
    // 0x125610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125614:
    // 0x125614: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125618:
    // 0x125618: 0x800008  jr          $a0
label_12561c:
    if (ctx->pc == 0x12561Cu) {
        ctx->pc = 0x125620u;
        goto label_125620;
    }
    ctx->pc = 0x125618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125620u: goto label_125620;
            case 0x12563Cu: goto label_12563c;
            case 0x125658u: goto label_125658;
            case 0x125674u: goto label_125674;
            case 0x125690u: goto label_125690;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256E4u: goto label_1256e4;
            case 0x125700u: goto label_125700;
            case 0x12571Cu: goto label_12571c;
            case 0x125738u: goto label_125738;
            case 0x125754u: goto label_125754;
            case 0x125770u: goto label_125770;
            case 0x12578Cu: goto label_12578c;
            case 0x1257A8u: goto label_1257a8;
            case 0x1257C4u: goto label_1257c4;
            case 0x1257E0u: goto label_1257e0;
            case 0x1257FCu: goto label_1257fc;
            case 0x125818u: goto label_125818;
            case 0x125834u: goto label_125834;
            case 0x125850u: goto label_125850;
            case 0x12586Cu: goto label_12586c;
            case 0x125888u: goto label_125888;
            case 0x1258A4u: goto label_1258a4;
            case 0x1258C0u: goto label_1258c0;
            case 0x1258DCu: goto label_1258dc;
            case 0x1258F8u: goto label_1258f8;
            case 0x125914u: goto label_125914;
            case 0x125930u: goto label_125930;
            case 0x12594Cu: goto label_12594c;
            case 0x125968u: goto label_125968;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125618u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x125620u;
label_125620:
    // 0x125620: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125624:
    // 0x125624: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125628:
    // 0x125628: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_12562c:
    // 0x12562c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x12562cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125630:
    // 0x125630: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125634:
    // 0x125634: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_125638:
    if (ctx->pc == 0x125638u) {
        ctx->pc = 0x125638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125634u;
        // 0x125638: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12563Cu;
        goto label_12563c;
    }
    ctx->pc = 0x125634u;
    {
        const bool branch_taken_0x125634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125634u;
        // 0x125638: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125634) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x12563Cu;
label_12563c:
    // 0x12563c: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125640:
    // 0x125640: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125644:
    // 0x125644: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125648:
    // 0x125648: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12564c:
    // 0x12564c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x12564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125650:
    // 0x125650: 0x100000cb  b           . + 4 + (0xCB << 2)
label_125654:
    if (ctx->pc == 0x125654u) {
        ctx->pc = 0x125654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125650u;
        // 0x125654: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125658u;
        goto label_125658;
    }
    ctx->pc = 0x125650u;
    {
        const bool branch_taken_0x125650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125650u;
        // 0x125654: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125650) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125658u;
label_125658:
    // 0x125658: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_12565c:
    // 0x12565c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125660:
    // 0x125660: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125664:
    // 0x125664: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125668:
    // 0x125668: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12566c:
    // 0x12566c: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_125670:
    if (ctx->pc == 0x125670u) {
        ctx->pc = 0x125670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12566Cu;
        // 0x125670: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125674u;
        goto label_125674;
    }
    ctx->pc = 0x12566Cu;
    {
        const bool branch_taken_0x12566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12566Cu;
        // 0x125670: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12566c) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125674u;
label_125674:
    // 0x125674: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125678:
    // 0x125678: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12567c:
    // 0x12567c: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125680:
    // 0x125680: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125684:
    // 0x125684: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125688:
    // 0x125688: 0x100000bd  b           . + 4 + (0xBD << 2)
label_12568c:
    if (ctx->pc == 0x12568Cu) {
        ctx->pc = 0x12568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125688u;
        // 0x12568c: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125690u;
        goto label_125690;
    }
    ctx->pc = 0x125688u;
    {
        const bool branch_taken_0x125688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125688u;
        // 0x12568c: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125688) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125690u;
label_125690:
    // 0x125690: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125694:
    // 0x125694: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125698:
    // 0x125698: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_12569c:
    // 0x12569c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x12569cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1256a0:
    // 0x1256a0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1256a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1256a4:
    // 0x1256a4: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_1256a8:
    if (ctx->pc == 0x1256A8u) {
        ctx->pc = 0x1256A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256A4u;
        // 0x1256a8: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256ACu;
        goto label_1256ac;
    }
    ctx->pc = 0x1256A4u;
    {
        const bool branch_taken_0x1256a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256A4u;
        // 0x1256a8: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256a4) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1256ACu;
label_1256ac:
    // 0x1256ac: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1256acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1256b0:
    // 0x1256b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1256b4:
    // 0x1256b4: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1256b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1256b8:
    // 0x1256b8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1256b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1256bc:
    // 0x1256bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1256bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1256c0:
    // 0x1256c0: 0x100000af  b           . + 4 + (0xAF << 2)
label_1256c4:
    if (ctx->pc == 0x1256C4u) {
        ctx->pc = 0x1256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256C0u;
        // 0x1256c4: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256C8u;
        goto label_1256c8;
    }
    ctx->pc = 0x1256C0u;
    {
        const bool branch_taken_0x1256c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256C0u;
        // 0x1256c4: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256c0) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1256C8u;
label_1256c8:
    // 0x1256c8: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1256c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1256cc:
    // 0x1256cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1256ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1256d0:
    // 0x1256d0: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1256d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1256d4:
    // 0x1256d4: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1256d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1256d8:
    // 0x1256d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1256dc:
    // 0x1256dc: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_1256e0:
    if (ctx->pc == 0x1256E0u) {
        ctx->pc = 0x1256E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256DCu;
        // 0x1256e0: 0x8ca30020  lw          $v1, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256E4u;
        goto label_1256e4;
    }
    ctx->pc = 0x1256DCu;
    {
        const bool branch_taken_0x1256dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256DCu;
        // 0x1256e0: 0x8ca30020  lw          $v1, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256dc) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1256E4u;
label_1256e4:
    // 0x1256e4: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1256e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1256e8:
    // 0x1256e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1256e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1256ec:
    // 0x1256ec: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1256ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1256f0:
    // 0x1256f0: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1256f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1256f4:
    // 0x1256f4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1256f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1256f8:
    // 0x1256f8: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1256fc:
    if (ctx->pc == 0x1256FCu) {
        ctx->pc = 0x1256FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256F8u;
        // 0x1256fc: 0x8ca30024  lw          $v1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125700u;
        goto label_125700;
    }
    ctx->pc = 0x1256F8u;
    {
        const bool branch_taken_0x1256f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256F8u;
        // 0x1256fc: 0x8ca30024  lw          $v1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256f8) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125700u;
label_125700:
    // 0x125700: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125704:
    // 0x125704: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125708:
    // 0x125708: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_12570c:
    // 0x12570c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x12570cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125710:
    // 0x125710: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125714:
    // 0x125714: 0x1000009a  b           . + 4 + (0x9A << 2)
label_125718:
    if (ctx->pc == 0x125718u) {
        ctx->pc = 0x125718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125714u;
        // 0x125718: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12571Cu;
        goto label_12571c;
    }
    ctx->pc = 0x125714u;
    {
        const bool branch_taken_0x125714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125714u;
        // 0x125718: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125714) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x12571Cu;
label_12571c:
    // 0x12571c: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x12571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125720:
    // 0x125720: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125724:
    // 0x125724: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125728:
    // 0x125728: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12572c:
    // 0x12572c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x12572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125730:
    // 0x125730: 0x10000093  b           . + 4 + (0x93 << 2)
label_125734:
    if (ctx->pc == 0x125734u) {
        ctx->pc = 0x125734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125730u;
        // 0x125734: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125738u;
        goto label_125738;
    }
    ctx->pc = 0x125730u;
    {
        const bool branch_taken_0x125730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125730u;
        // 0x125734: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125730) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125738u;
label_125738:
    // 0x125738: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_12573c:
    // 0x12573c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125740:
    // 0x125740: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125744:
    // 0x125744: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125748:
    // 0x125748: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12574c:
    // 0x12574c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_125750:
    if (ctx->pc == 0x125750u) {
        ctx->pc = 0x125750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12574Cu;
        // 0x125750: 0x8ca30030  lw          $v1, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125754u;
        goto label_125754;
    }
    ctx->pc = 0x12574Cu;
    {
        const bool branch_taken_0x12574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12574Cu;
        // 0x125750: 0x8ca30030  lw          $v1, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12574c) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125754u;
label_125754:
    // 0x125754: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125758:
    // 0x125758: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12575c:
    // 0x12575c: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x12575cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125760:
    // 0x125760: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125764:
    // 0x125764: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125768:
    // 0x125768: 0x10000085  b           . + 4 + (0x85 << 2)
label_12576c:
    if (ctx->pc == 0x12576Cu) {
        ctx->pc = 0x12576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125768u;
        // 0x12576c: 0x8ca30034  lw          $v1, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125770u;
        goto label_125770;
    }
    ctx->pc = 0x125768u;
    {
        const bool branch_taken_0x125768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125768u;
        // 0x12576c: 0x8ca30034  lw          $v1, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125768) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125770u;
label_125770:
    // 0x125770: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125774:
    // 0x125774: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125778:
    // 0x125778: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_12577c:
    // 0x12577c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x12577cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125780:
    // 0x125780: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125784:
    // 0x125784: 0x1000007e  b           . + 4 + (0x7E << 2)
label_125788:
    if (ctx->pc == 0x125788u) {
        ctx->pc = 0x125788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125784u;
        // 0x125788: 0x8ca30038  lw          $v1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12578Cu;
        goto label_12578c;
    }
    ctx->pc = 0x125784u;
    {
        const bool branch_taken_0x125784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125784u;
        // 0x125788: 0x8ca30038  lw          $v1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125784) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x12578Cu;
label_12578c:
    // 0x12578c: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x12578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125790:
    // 0x125790: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125794:
    // 0x125794: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125798:
    // 0x125798: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12579c:
    // 0x12579c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x12579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1257a0:
    // 0x1257a0: 0x10000077  b           . + 4 + (0x77 << 2)
label_1257a4:
    if (ctx->pc == 0x1257A4u) {
        ctx->pc = 0x1257A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257A0u;
        // 0x1257a4: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257A8u;
        goto label_1257a8;
    }
    ctx->pc = 0x1257A0u;
    {
        const bool branch_taken_0x1257a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257A0u;
        // 0x1257a4: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257a0) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1257A8u;
label_1257a8:
    // 0x1257a8: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1257ac:
    // 0x1257ac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1257acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1257b0:
    // 0x1257b0: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1257b4:
    // 0x1257b4: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1257b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1257b8:
    // 0x1257b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1257bc:
    // 0x1257bc: 0x10000070  b           . + 4 + (0x70 << 2)
label_1257c0:
    if (ctx->pc == 0x1257C0u) {
        ctx->pc = 0x1257C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257BCu;
        // 0x1257c0: 0x8ca30040  lw          $v1, 0x40($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257C4u;
        goto label_1257c4;
    }
    ctx->pc = 0x1257BCu;
    {
        const bool branch_taken_0x1257bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257BCu;
        // 0x1257c0: 0x8ca30040  lw          $v1, 0x40($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257bc) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1257C4u;
label_1257c4:
    // 0x1257c4: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1257c8:
    // 0x1257c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1257cc:
    // 0x1257cc: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1257ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1257d0:
    // 0x1257d0: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1257d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1257d4:
    // 0x1257d4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1257d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1257d8:
    // 0x1257d8: 0x10000069  b           . + 4 + (0x69 << 2)
label_1257dc:
    if (ctx->pc == 0x1257DCu) {
        ctx->pc = 0x1257DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257D8u;
        // 0x1257dc: 0x8ca30048  lw          $v1, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257E0u;
        goto label_1257e0;
    }
    ctx->pc = 0x1257D8u;
    {
        const bool branch_taken_0x1257d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257D8u;
        // 0x1257dc: 0x8ca30048  lw          $v1, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257d8) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1257E0u;
label_1257e0:
    // 0x1257e0: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1257e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1257e4:
    // 0x1257e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1257e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1257e8:
    // 0x1257e8: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1257e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1257ec:
    // 0x1257ec: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1257ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1257f0:
    // 0x1257f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1257f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1257f4:
    // 0x1257f4: 0x10000062  b           . + 4 + (0x62 << 2)
label_1257f8:
    if (ctx->pc == 0x1257F8u) {
        ctx->pc = 0x1257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F4u;
        // 0x1257f8: 0x8ca30044  lw          $v1, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257FCu;
        goto label_1257fc;
    }
    ctx->pc = 0x1257F4u;
    {
        const bool branch_taken_0x1257f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F4u;
        // 0x1257f8: 0x8ca30044  lw          $v1, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257f4) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1257FCu;
label_1257fc:
    // 0x1257fc: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1257fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125800:
    // 0x125800: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125804:
    // 0x125804: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125808:
    // 0x125808: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12580c:
    // 0x12580c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125810:
    // 0x125810: 0x1000005b  b           . + 4 + (0x5B << 2)
label_125814:
    if (ctx->pc == 0x125814u) {
        ctx->pc = 0x125814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125810u;
        // 0x125814: 0x8ca3004c  lw          $v1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125818u;
        goto label_125818;
    }
    ctx->pc = 0x125810u;
    {
        const bool branch_taken_0x125810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125810u;
        // 0x125814: 0x8ca3004c  lw          $v1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125810) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125818u;
label_125818:
    // 0x125818: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_12581c:
    // 0x12581c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125820:
    // 0x125820: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125824:
    // 0x125824: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125828:
    // 0x125828: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12582c:
    // 0x12582c: 0x10000054  b           . + 4 + (0x54 << 2)
label_125830:
    if (ctx->pc == 0x125830u) {
        ctx->pc = 0x125830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12582Cu;
        // 0x125830: 0x8ca30054  lw          $v1, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125834u;
        goto label_125834;
    }
    ctx->pc = 0x12582Cu;
    {
        const bool branch_taken_0x12582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12582Cu;
        // 0x125830: 0x8ca30054  lw          $v1, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12582c) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125834u;
label_125834:
    // 0x125834: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125838:
    // 0x125838: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12583c:
    // 0x12583c: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125840:
    // 0x125840: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125844:
    // 0x125844: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125848:
    // 0x125848: 0x1000004d  b           . + 4 + (0x4D << 2)
label_12584c:
    if (ctx->pc == 0x12584Cu) {
        ctx->pc = 0x12584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125848u;
        // 0x12584c: 0x8ca30058  lw          $v1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125850u;
        goto label_125850;
    }
    ctx->pc = 0x125848u;
    {
        const bool branch_taken_0x125848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125848u;
        // 0x12584c: 0x8ca30058  lw          $v1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125848) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125850u;
label_125850:
    // 0x125850: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125854:
    // 0x125854: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125858:
    // 0x125858: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_12585c:
    // 0x12585c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x12585cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125860:
    // 0x125860: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125864:
    // 0x125864: 0x10000046  b           . + 4 + (0x46 << 2)
label_125868:
    if (ctx->pc == 0x125868u) {
        ctx->pc = 0x125868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125864u;
        // 0x125868: 0x8ca3005c  lw          $v1, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12586Cu;
        goto label_12586c;
    }
    ctx->pc = 0x125864u;
    {
        const bool branch_taken_0x125864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125864u;
        // 0x125868: 0x8ca3005c  lw          $v1, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125864) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x12586Cu;
label_12586c:
    // 0x12586c: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x12586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125870:
    // 0x125870: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125874:
    // 0x125874: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125878:
    // 0x125878: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12587c:
    // 0x12587c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x12587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125880:
    // 0x125880: 0x1000003f  b           . + 4 + (0x3F << 2)
label_125884:
    if (ctx->pc == 0x125884u) {
        ctx->pc = 0x125884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125880u;
        // 0x125884: 0x8ca30060  lw          $v1, 0x60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125888u;
        goto label_125888;
    }
    ctx->pc = 0x125880u;
    {
        const bool branch_taken_0x125880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125880u;
        // 0x125884: 0x8ca30060  lw          $v1, 0x60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125880) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125888u;
label_125888:
    // 0x125888: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_12588c:
    // 0x12588c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125890:
    // 0x125890: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125894:
    // 0x125894: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125898:
    // 0x125898: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12589c:
    // 0x12589c: 0x10000038  b           . + 4 + (0x38 << 2)
label_1258a0:
    if (ctx->pc == 0x1258A0u) {
        ctx->pc = 0x1258A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12589Cu;
        // 0x1258a0: 0x8ca30064  lw          $v1, 0x64($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258A4u;
        goto label_1258a4;
    }
    ctx->pc = 0x12589Cu;
    {
        const bool branch_taken_0x12589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12589Cu;
        // 0x1258a0: 0x8ca30064  lw          $v1, 0x64($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12589c) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1258A4u;
label_1258a4:
    // 0x1258a4: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1258a8:
    // 0x1258a8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1258ac:
    // 0x1258ac: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1258b0:
    // 0x1258b0: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1258b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1258b4:
    // 0x1258b4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1258b8:
    // 0x1258b8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1258bc:
    if (ctx->pc == 0x1258BCu) {
        ctx->pc = 0x1258BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258B8u;
        // 0x1258bc: 0x8ca30068  lw          $v1, 0x68($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258C0u;
        goto label_1258c0;
    }
    ctx->pc = 0x1258B8u;
    {
        const bool branch_taken_0x1258b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258B8u;
        // 0x1258bc: 0x8ca30068  lw          $v1, 0x68($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258b8) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1258C0u;
label_1258c0:
    // 0x1258c0: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1258c4:
    // 0x1258c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1258c8:
    // 0x1258c8: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1258cc:
    // 0x1258cc: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1258ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1258d0:
    // 0x1258d0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1258d4:
    // 0x1258d4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1258d8:
    if (ctx->pc == 0x1258D8u) {
        ctx->pc = 0x1258D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D4u;
        // 0x1258d8: 0x8ca3006c  lw          $v1, 0x6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258DCu;
        goto label_1258dc;
    }
    ctx->pc = 0x1258D4u;
    {
        const bool branch_taken_0x1258d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D4u;
        // 0x1258d8: 0x8ca3006c  lw          $v1, 0x6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258d4) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1258DCu;
label_1258dc:
    // 0x1258dc: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1258dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1258e0:
    // 0x1258e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1258e4:
    // 0x1258e4: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x1258e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_1258e8:
    // 0x1258e8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1258e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1258ec:
    // 0x1258ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1258f0:
    // 0x1258f0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1258f4:
    if (ctx->pc == 0x1258F4u) {
        ctx->pc = 0x1258F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258F0u;
        // 0x1258f4: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258F8u;
        goto label_1258f8;
    }
    ctx->pc = 0x1258F0u;
    {
        const bool branch_taken_0x1258f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258F0u;
        // 0x1258f4: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258f0) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x1258F8u;
label_1258f8:
    // 0x1258f8: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_1258fc:
    // 0x1258fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1258fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125900:
    // 0x125900: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125904:
    // 0x125904: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125908:
    // 0x125908: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12590c:
    // 0x12590c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_125910:
    if (ctx->pc == 0x125910u) {
        ctx->pc = 0x125910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12590Cu;
        // 0x125910: 0x8ca30070  lw          $v1, 0x70($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125914u;
        goto label_125914;
    }
    ctx->pc = 0x12590Cu;
    {
        const bool branch_taken_0x12590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12590Cu;
        // 0x125910: 0x8ca30070  lw          $v1, 0x70($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12590c) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125914u;
label_125914:
    // 0x125914: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125918:
    // 0x125918: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12591c:
    // 0x12591c: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125920:
    // 0x125920: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125924:
    // 0x125924: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125928:
    // 0x125928: 0x10000015  b           . + 4 + (0x15 << 2)
label_12592c:
    if (ctx->pc == 0x12592Cu) {
        ctx->pc = 0x12592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125928u;
        // 0x12592c: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125930u;
        goto label_125930;
    }
    ctx->pc = 0x125928u;
    {
        const bool branch_taken_0x125928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125928u;
        // 0x12592c: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125928) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125930u;
label_125930:
    // 0x125930: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125934:
    // 0x125934: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125938:
    // 0x125938: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_12593c:
    // 0x12593c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x12593cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125940:
    // 0x125940: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125944:
    // 0x125944: 0x1000000e  b           . + 4 + (0xE << 2)
label_125948:
    if (ctx->pc == 0x125948u) {
        ctx->pc = 0x125948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125944u;
        // 0x125948: 0x8ca30074  lw          $v1, 0x74($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12594Cu;
        goto label_12594c;
    }
    ctx->pc = 0x125944u;
    {
        const bool branch_taken_0x125944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125944u;
        // 0x125948: 0x8ca30074  lw          $v1, 0x74($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125944) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x12594Cu;
label_12594c:
    // 0x12594c: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_125950:
    // 0x125950: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125954:
    // 0x125954: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125958:
    // 0x125958: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12595c:
    // 0x12595c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125960:
    // 0x125960: 0x10000007  b           . + 4 + (0x7 << 2)
label_125964:
    if (ctx->pc == 0x125964u) {
        ctx->pc = 0x125964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125960u;
        // 0x125964: 0x8ca30078  lw          $v1, 0x78($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125968u;
        goto label_125968;
    }
    ctx->pc = 0x125960u;
    {
        const bool branch_taken_0x125960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125960u;
        // 0x125964: 0x8ca30078  lw          $v1, 0x78($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125960) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125968u;
label_125968:
    // 0x125968: 0x26e274a0  addiu       $v0, $s7, 0x74A0
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
label_12596c:
    // 0x12596c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125970:
    // 0x125970: 0x8c450558  lw          $a1, 0x558($v0)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
label_125974:
    // 0x125974: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x125974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125978:
    // 0x125978: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12597c:
    // 0x12597c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x12597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_125980:
    // 0x125980: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_125984:
    // 0x125984: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_125988:
    // 0x125988: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x125988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_12598c:
    // 0x12598c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125990:
    // 0x125990: 0x8fa40650  lw          $a0, 0x650($sp)
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125994:
    // 0x125994: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x125994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_125998:
    // 0x125998: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x125998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_12599c:
    // 0x12599c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1259a0:
    // 0x1259a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1259a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1259a4:
    // 0x1259a4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1259a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_1259a8:
    // 0x1259a8: 0x8c850640  lw          $a1, 0x640($a0)
    ctx->pc = 0x1259a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1600)));
label_1259ac:
    // 0x1259ac: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1259b0:
    if (ctx->pc == 0x1259B0u) {
        ctx->pc = 0x1259B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259ACu;
        // 0x1259b0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259B4u;
        goto label_1259b4;
    }
    ctx->pc = 0x1259ACu;
    {
        const bool branch_taken_0x1259ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259ACu;
        // 0x1259b0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259ac) {
            ctx->pc = 0x1259E0u;
            goto label_1259e0;
        }
    }
    ctx->pc = 0x1259B4u;
label_1259b4:
    // 0x1259b4: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1259b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1259b8:
    // 0x1259b8: 0x8c9000f0  lw          $s0, 0xF0($a0)
    ctx->pc = 0x1259b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1259bc:
    // 0x1259bc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1259c0:
    // 0x1259c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1259c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1259c4:
    // 0x1259c4: 0x40f809  jalr        $v0
label_1259c8:
    if (ctx->pc == 0x1259C8u) {
        ctx->pc = 0x1259C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259C4u;
        // 0x1259c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259CCu;
        goto label_1259cc;
    }
    ctx->pc = 0x1259C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1259CCu);
        ctx->pc = 0x1259C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259C4u;
        // 0x1259c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1259C4u, 0x1259CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1259CCu;
label_1259cc:
    // 0x1259cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1259ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1259d0:
    // 0x1259d0: 0xc07dfac  jal         func_1F7EB0
label_1259d4:
    if (ctx->pc == 0x1259D4u) {
        ctx->pc = 0x1259D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259D0u;
        // 0x1259d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259D8u;
        goto label_1259d8;
    }
    ctx->pc = 0x1259D0u;
    SET_GPR_U32(ctx, 31, 0x1259D8u);
    ctx->pc = 0x1259D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259D0u;
    // 0x1259d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1259D0u, 0x1259D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259D8u;
label_1259d8:
    // 0x1259d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1259dc:
    if (ctx->pc == 0x1259DCu) {
        ctx->pc = 0x1259DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259D8u;
        // 0x1259dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259E0u;
        goto label_1259e0;
    }
    ctx->pc = 0x1259D8u;
    {
        const bool branch_taken_0x1259d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259D8u;
        // 0x1259dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259d8) {
            ctx->pc = 0x1259ECu;
            goto label_1259ec;
        }
    }
    ctx->pc = 0x1259E0u;
label_1259e0:
    // 0x1259e0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x1259e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_1259e4:
    // 0x1259e4: 0x34211781  ori         $at, $at, 0x1781
    ctx->pc = 0x1259e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6017);
label_1259e8:
    // 0x1259e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1259e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1259ec:
    // 0x1259ec: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x1259ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1259f0:
    // 0x1259f0: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1259f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1259f4:
    // 0x1259f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1259f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1259f8:
    // 0x1259f8: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x1259f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_1259fc:
    // 0x1259fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_125a00:
    if (ctx->pc == 0x125A00u) {
        ctx->pc = 0x125A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259FCu;
        // 0x125a00: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A04u;
        goto label_125a04;
    }
    ctx->pc = 0x1259FCu;
    {
        const bool branch_taken_0x1259fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259FCu;
        // 0x125a00: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259fc) {
            ctx->pc = 0x125A1Cu;
            goto label_125a1c;
        }
    }
    ctx->pc = 0x125A04u;
label_125a04:
    // 0x125a04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x125a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_125a08:
    // 0x125a08: 0x2442c910  addiu       $v0, $v0, -0x36F0
    ctx->pc = 0x125a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953232));
label_125a0c:
    // 0x125a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125a10:
    // 0x125a10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125a14:
    // 0x125a14: 0x800008  jr          $a0
label_125a18:
    if (ctx->pc == 0x125A18u) {
        ctx->pc = 0x125A1Cu;
        goto label_125a1c;
    }
    ctx->pc = 0x125A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125A1Cu: goto label_125a1c;
            case 0x125AD8u: goto label_125ad8;
            case 0x125B0Cu: goto label_125b0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125A14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x125A1Cu;
label_125a1c:
    // 0x125a1c: 0x8fa40650  lw          $a0, 0x650($sp)
    ctx->pc = 0x125a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125a20:
    // 0x125a20: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x125a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_125a24:
    // 0x125a24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125a28:
    // 0x125a28: 0x8c820640  lw          $v0, 0x640($a0)
    ctx->pc = 0x125a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1600)));
label_125a2c:
    // 0x125a2c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_125a30:
    if (ctx->pc == 0x125A30u) {
        ctx->pc = 0x125A34u;
        goto label_125a34;
    }
    ctx->pc = 0x125A2Cu;
    {
        const bool branch_taken_0x125a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a2c) {
            ctx->pc = 0x125AC0u;
            goto label_125ac0;
        }
    }
    ctx->pc = 0x125A34u;
label_125a34:
    // 0x125a34: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
label_125a38:
    // 0x125a38: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x125a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
label_125a3c:
    // 0x125a3c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_125a40:
    if (ctx->pc == 0x125A40u) {
        ctx->pc = 0x125A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A3Cu;
        // 0x125a40: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A44u;
        goto label_125a44;
    }
    ctx->pc = 0x125A3Cu;
    {
        const bool branch_taken_0x125a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A3Cu;
        // 0x125a40: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a3c) {
            ctx->pc = 0x125A80u;
            goto label_125a80;
        }
    }
    ctx->pc = 0x125A44u;
label_125a44:
    // 0x125a44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_125a48:
    if (ctx->pc == 0x125A48u) {
        ctx->pc = 0x125A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A44u;
        // 0x125a48: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A4Cu;
        goto label_125a4c;
    }
    ctx->pc = 0x125A44u;
    {
        const bool branch_taken_0x125a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A44u;
        // 0x125a48: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a44) {
            ctx->pc = 0x125A5Cu;
            goto label_125a5c;
        }
    }
    ctx->pc = 0x125A4Cu;
label_125a4c:
    // 0x125a4c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_125a50:
    if (ctx->pc == 0x125A50u) {
        ctx->pc = 0x125A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A4Cu;
        // 0x125a50: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A54u;
        goto label_125a54;
    }
    ctx->pc = 0x125A4Cu;
    {
        const bool branch_taken_0x125a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A4Cu;
        // 0x125a50: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a4c) {
            ctx->pc = 0x125A80u;
            goto label_125a80;
        }
    }
    ctx->pc = 0x125A54u;
label_125a54:
    // 0x125a54: 0x10000010  b           . + 4 + (0x10 << 2)
label_125a58:
    if (ctx->pc == 0x125A58u) {
        ctx->pc = 0x125A5Cu;
        goto label_125a5c;
    }
    ctx->pc = 0x125A54u;
    {
        const bool branch_taken_0x125a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a54) {
            ctx->pc = 0x125A98u;
            goto label_125a98;
        }
    }
    ctx->pc = 0x125A5Cu;
label_125a5c:
    // 0x125a5c: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
label_125a60:
    // 0x125a60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_125a64:
    if (ctx->pc == 0x125A64u) {
        ctx->pc = 0x125A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A60u;
        // 0x125a64: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A68u;
        goto label_125a68;
    }
    ctx->pc = 0x125A60u;
    {
        const bool branch_taken_0x125a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A60u;
        // 0x125a64: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a60) {
            ctx->pc = 0x125A80u;
            goto label_125a80;
        }
    }
    ctx->pc = 0x125A68u;
label_125a68:
    // 0x125a68: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_125a6c:
    if (ctx->pc == 0x125A6Cu) {
        ctx->pc = 0x125A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A68u;
        // 0x125a6c: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A70u;
        goto label_125a70;
    }
    ctx->pc = 0x125A68u;
    {
        const bool branch_taken_0x125a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A68u;
        // 0x125a6c: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a68) {
            ctx->pc = 0x125A90u;
            goto label_125a90;
        }
    }
    ctx->pc = 0x125A70u;
label_125a70:
    // 0x125a70: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_125a74:
    // 0x125a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125a78:
    // 0x125a78: 0x10000008  b           . + 4 + (0x8 << 2)
label_125a7c:
    if (ctx->pc == 0x125A7Cu) {
        ctx->pc = 0x125A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A78u;
        // 0x125a7c: 0x8ca20640  lw          $v0, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A80u;
        goto label_125a80;
    }
    ctx->pc = 0x125A78u;
    {
        const bool branch_taken_0x125a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A78u;
        // 0x125a7c: 0x8ca20640  lw          $v0, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a78) {
            ctx->pc = 0x125A9Cu;
            goto label_125a9c;
        }
    }
    ctx->pc = 0x125A80u;
label_125a80:
    // 0x125a80: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_125a84:
    // 0x125a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125a88:
    // 0x125a88: 0x10000003  b           . + 4 + (0x3 << 2)
label_125a8c:
    if (ctx->pc == 0x125A8Cu) {
        ctx->pc = 0x125A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A88u;
        // 0x125a8c: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A90u;
        goto label_125a90;
    }
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A88u;
        // 0x125a8c: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125A98u;
            goto label_125a98;
        }
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_125a94:
    // 0x125a94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125a98:
    // 0x125a98: 0x8ca20640  lw          $v0, 0x640($a1)
    ctx->pc = 0x125a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
label_125a9c:
    // 0x125a9c: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_125aa0:
    // 0x125aa0: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
label_125aa4:
    if (ctx->pc == 0x125AA4u) {
        ctx->pc = 0x125AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA0u;
        // 0x125aa4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AA8u;
        goto label_125aa8;
    }
    ctx->pc = 0x125AA0u;
    {
        const bool branch_taken_0x125aa0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x125AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA0u;
        // 0x125aa4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aa0) {
            ctx->pc = 0x125AC0u;
            goto label_125ac0;
        }
    }
    ctx->pc = 0x125AA8u;
label_125aa8:
    // 0x125aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125aac:
    // 0x125aac: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125ab0:
    // 0x125ab0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125ab4:
    // 0x125ab4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125ab8:
    // 0x125ab8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125abc:
    // 0x125abc: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x125abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_125ac0:
    // 0x125ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125ac4:
    // 0x125ac4: 0x0  nop
    ctx->pc = 0x125ac4u;
    // NOP
label_125ac8:
    // 0x125ac8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_125acc:
    if (ctx->pc == 0x125ACCu) {
        ctx->pc = 0x125ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AC8u;
        // 0x125acc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AD0u;
        goto label_125ad0;
    }
    ctx->pc = 0x125AC8u;
    {
        const bool branch_taken_0x125ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AC8u;
        // 0x125acc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ac8) {
            ctx->pc = 0x125B0Cu;
            goto label_125b0c;
        }
    }
    ctx->pc = 0x125AD0u;
label_125ad0:
    // 0x125ad0: 0x10000009  b           . + 4 + (0x9 << 2)
label_125ad4:
    if (ctx->pc == 0x125AD4u) {
        ctx->pc = 0x125AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AD0u;
        // 0x125ad4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AD8u;
        goto label_125ad8;
    }
    ctx->pc = 0x125AD0u;
    {
        const bool branch_taken_0x125ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AD0u;
        // 0x125ad4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ad0) {
            ctx->pc = 0x125AF8u;
            goto label_125af8;
        }
    }
    ctx->pc = 0x125AD8u;
label_125ad8:
    // 0x125ad8: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125adc:
    // 0x125adc: 0x8ca20640  lw          $v0, 0x640($a1)
    ctx->pc = 0x125adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
label_125ae0:
    // 0x125ae0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_125ae4:
    if (ctx->pc == 0x125AE4u) {
        ctx->pc = 0x125AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AE0u;
        // 0x125ae4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AE8u;
        goto label_125ae8;
    }
    ctx->pc = 0x125AE0u;
    {
        const bool branch_taken_0x125ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ae0) {
            ctx->pc = 0x125AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125AE0u;
            // 0x125ae4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125AF4u;
            goto label_125af4;
        }
    }
    ctx->pc = 0x125AE8u;
label_125ae8:
    // 0x125ae8: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x125ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_125aec:
    // 0x125aec: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_125af0:
    if (ctx->pc == 0x125AF0u) {
        ctx->pc = 0x125AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AECu;
        // 0x125af0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AF4u;
        goto label_125af4;
    }
    ctx->pc = 0x125AECu;
    {
        const bool branch_taken_0x125aec = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x125AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AECu;
        // 0x125af0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aec) {
            ctx->pc = 0x125B10u;
            goto label_125b10;
        }
    }
    ctx->pc = 0x125AF4u;
label_125af4:
    // 0x125af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125af8:
    // 0x125af8: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125afc:
    // 0x125afc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125b00:
    // 0x125b00: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125b04:
    // 0x125b04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125b08:
    // 0x125b08: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x125b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_125b0c:
    // 0x125b0c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125b10:
    // 0x125b10: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x125b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_125b14:
    // 0x125b14: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x125b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_125b18:
    // 0x125b18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125b1c:
    // 0x125b1c: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x125b1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_125b20:
    // 0x125b20: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_125b24:
    if (ctx->pc == 0x125B24u) {
        ctx->pc = 0x125B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B20u;
        // 0x125b24: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B28u;
        goto label_125b28;
    }
    ctx->pc = 0x125B20u;
    {
        const bool branch_taken_0x125b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B20u;
        // 0x125b24: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b20) {
            ctx->pc = 0x125B84u;
            goto label_125b84;
        }
    }
    ctx->pc = 0x125B28u;
label_125b28:
    // 0x125b28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x125b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_125b2c:
    // 0x125b2c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_125b30:
    // 0x125b30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125b34:
    // 0x125b34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125b38:
    // 0x125b38: 0x800008  jr          $a0
label_125b3c:
    if (ctx->pc == 0x125B3Cu) {
        ctx->pc = 0x125B40u;
        goto label_125b40;
    }
    ctx->pc = 0x125B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125B40u: goto label_125b40;
            case 0x125B54u: goto label_125b54;
            case 0x125B84u: goto label_125b84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x125B40u;
label_125b40:
    // 0x125b40: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x125b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_125b44:
    // 0x125b44: 0xc07eaec  jal         func_1FABB0
label_125b48:
    if (ctx->pc == 0x125B48u) {
        ctx->pc = 0x125B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B44u;
        // 0x125b48: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B4Cu;
        goto label_125b4c;
    }
    ctx->pc = 0x125B44u;
    SET_GPR_U32(ctx, 31, 0x125B4Cu);
    ctx->pc = 0x125B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B44u;
    // 0x125b48: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x125B44u, 0x125B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B4Cu;
label_125b4c:
    // 0x125b4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_125b50:
    if (ctx->pc == 0x125B50u) {
        ctx->pc = 0x125B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B4Cu;
        // 0x125b50: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B54u;
        goto label_125b54;
    }
    ctx->pc = 0x125B4Cu;
    {
        const bool branch_taken_0x125b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B4Cu;
        // 0x125b50: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b4c) {
            ctx->pc = 0x125B64u;
            goto label_125b64;
        }
    }
    ctx->pc = 0x125B54u;
label_125b54:
    // 0x125b54: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_125b58:
    // 0x125b58: 0xc07eaec  jal         func_1FABB0
label_125b5c:
    if (ctx->pc == 0x125B5Cu) {
        ctx->pc = 0x125B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B58u;
        // 0x125b5c: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B60u;
        goto label_125b60;
    }
    ctx->pc = 0x125B58u;
    SET_GPR_U32(ctx, 31, 0x125B60u);
    ctx->pc = 0x125B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B58u;
    // 0x125b5c: 0x24a49b70  addiu       $a0, $a1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x125B58u, 0x125B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B60u;
label_125b60:
    // 0x125b60: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x125b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_125b64:
    // 0x125b64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_125b68:
    if (ctx->pc == 0x125B68u) {
        ctx->pc = 0x125B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B64u;
        // 0x125b68: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B6Cu;
        goto label_125b6c;
    }
    ctx->pc = 0x125B64u;
    {
        const bool branch_taken_0x125b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B64u;
        // 0x125b68: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b64) {
            ctx->pc = 0x125B84u;
            goto label_125b84;
        }
    }
    ctx->pc = 0x125B6Cu;
label_125b6c:
    // 0x125b6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125b70:
    // 0x125b70: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125b74:
    // 0x125b74: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125b78:
    // 0x125b78: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x125b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125b7c:
    // 0x125b7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125b80:
    // 0x125b80: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x125b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_125b84:
    // 0x125b84: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125b88:
    // 0x125b88: 0x8ca20640  lw          $v0, 0x640($a1)
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
label_125b8c:
    // 0x125b8c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_125b90:
    if (ctx->pc == 0x125B90u) {
        ctx->pc = 0x125B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B8Cu;
        // 0x125b90: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B94u;
        goto label_125b94;
    }
    ctx->pc = 0x125B8Cu;
    {
        const bool branch_taken_0x125b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B8Cu;
        // 0x125b90: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b8c) {
            ctx->pc = 0x125CD0u;
            goto label_125cd0;
        }
    }
    ctx->pc = 0x125B94u;
label_125b94:
    // 0x125b94: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x125b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_125b98:
    // 0x125b98: 0x243a018  mult        $s4, $s2, $v1
    ctx->pc = 0x125b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_125b9c:
    // 0x125b9c: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x125b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_125ba0:
    // 0x125ba0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125ba4:
    // 0x125ba4: 0x1464004b  bne         $v1, $a0, . + 4 + (0x4B << 2)
label_125ba8:
    if (ctx->pc == 0x125BA8u) {
        ctx->pc = 0x125BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BA4u;
        // 0x125ba8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BACu;
        goto label_125bac;
    }
    ctx->pc = 0x125BA4u;
    {
        const bool branch_taken_0x125ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x125BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BA4u;
        // 0x125ba8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ba4) {
            ctx->pc = 0x125CD4u;
            goto label_125cd4;
        }
    }
    ctx->pc = 0x125BACu;
label_125bac:
    // 0x125bac: 0xfba00630  sqc2        $vf0, 0x630($sp)
    ctx->pc = 0x125bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), _mm_castps_si128(ctx->vu0_vf[0]));
label_125bb0:
    // 0x125bb0: 0xfba00640  sqc2        $vf0, 0x640($sp)
    ctx->pc = 0x125bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), _mm_castps_si128(ctx->vu0_vf[0]));
label_125bb4:
    // 0x125bb4: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x125bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_125bb8:
    // 0x125bb8: 0x27b10630  addiu       $s1, $sp, 0x630
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_125bbc:
    // 0x125bbc: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
label_125bc0:
    if (ctx->pc == 0x125BC0u) {
        ctx->pc = 0x125BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BBCu;
        // 0x125bc0: 0x8fa20650  lw          $v0, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BC4u;
        goto label_125bc4;
    }
    ctx->pc = 0x125BBCu;
    {
        const bool branch_taken_0x125bbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x125bbc) {
            ctx->pc = 0x125BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125BBCu;
            // 0x125bc0: 0x8fa20650  lw          $v0, 0x650($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125BE0u;
            goto label_125be0;
        }
    }
    ctx->pc = 0x125BC4u;
label_125bc4:
    // 0x125bc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x125bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125bc8:
    // 0x125bc8: 0xe7a00630  swc1        $f0, 0x630($sp)
    ctx->pc = 0x125bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1584), bits); }
label_125bcc:
    // 0x125bcc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x125bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125bd0:
    // 0x125bd0: 0xe7a10634  swc1        $f1, 0x634($sp)
    ctx->pc = 0x125bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1588), bits); }
label_125bd4:
    // 0x125bd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x125bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125bd8:
    // 0x125bd8: 0xe7a00638  swc1        $f0, 0x638($sp)
    ctx->pc = 0x125bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1592), bits); }
label_125bdc:
    // 0x125bdc: 0x8fa20650  lw          $v0, 0x650($sp)
    ctx->pc = 0x125bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125be0:
    // 0x125be0: 0x8c450640  lw          $a1, 0x640($v0)
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
label_125be4:
    // 0x125be4: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_125be8:
    // 0x125be8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x125be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_125bec:
    // 0x125bec: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_125bf0:
    // 0x125bf0: 0x40f809  jalr        $v0
label_125bf4:
    if (ctx->pc == 0x125BF4u) {
        ctx->pc = 0x125BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF0u;
        // 0x125bf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125BF8u;
        goto label_125bf8;
    }
    ctx->pc = 0x125BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125BF8u);
        ctx->pc = 0x125BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF0u;
        // 0x125bf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BF0u, 0x125BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125BF8u;
label_125bf8:
    // 0x125bf8: 0x27b00640  addiu       $s0, $sp, 0x640
    ctx->pc = 0x125bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_125bfc:
    // 0x125bfc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_125c00:
    if (ctx->pc == 0x125C00u) {
        ctx->pc = 0x125C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BFCu;
        // 0x125c00: 0xc7a00634  lwc1        $f0, 0x634($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C04u;
        goto label_125c04;
    }
    ctx->pc = 0x125BFCu;
    {
        const bool branch_taken_0x125bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x125C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BFCu;
        // 0x125c00: 0xc7a00634  lwc1        $f0, 0x634($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bfc) {
            ctx->pc = 0x125C20u;
            goto label_125c20;
        }
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x125c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c08:
    // 0x125c08: 0xe7a00640  swc1        $f0, 0x640($sp)
    ctx->pc = 0x125c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1600), bits); }
label_125c0c:
    // 0x125c0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x125c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125c10:
    // 0x125c10: 0xe7a10644  swc1        $f1, 0x644($sp)
    ctx->pc = 0x125c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1604), bits); }
label_125c14:
    // 0x125c14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x125c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c18:
    // 0x125c18: 0xe7a00648  swc1        $f0, 0x648($sp)
    ctx->pc = 0x125c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1608), bits); }
label_125c1c:
    // 0x125c1c: 0xc7a00634  lwc1        $f0, 0x634($sp)
    ctx->pc = 0x125c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c20:
    // 0x125c20: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x125c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125c24:
    // 0x125c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_125c28:
    // 0x125c28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_125c2c:
    // 0x125c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125c30:
    // 0x125c30: 0xc7a10644  lwc1        $f1, 0x644($sp)
    ctx->pc = 0x125c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125c34:
    // 0x125c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125c38:
    // 0x125c38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x125c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_125c3c:
    // 0x125c3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x125c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_125c40:
    // 0x125c40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x125c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_125c44:
    // 0x125c44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x125c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_125c48:
    // 0x125c48: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x125c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_125c4c:
    // 0x125c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c50:
    // 0x125c50: 0xe7a00634  swc1        $f0, 0x634($sp)
    ctx->pc = 0x125c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1588), bits); }
label_125c54:
    // 0x125c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c58:
    // 0x125c58: 0xe7a10644  swc1        $f1, 0x644($sp)
    ctx->pc = 0x125c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1604), bits); }
label_125c5c:
    // 0x125c5c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x125c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_125c60:
    // 0x125c60: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x125c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_125c64:
    // 0x125c64: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x125c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_125c68:
    // 0x125c68: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x125c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_125c6c:
    // 0x125c6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x125c6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c70:
    // 0x125c70: 0xc04c784  jal         func_131E10
label_125c74:
    if (ctx->pc == 0x125C74u) {
        ctx->pc = 0x125C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C70u;
        // 0x125c74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C78u;
        goto label_125c78;
    }
    ctx->pc = 0x125C70u;
    SET_GPR_U32(ctx, 31, 0x125C78u);
    ctx->pc = 0x125C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C70u;
    // 0x125c74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x125C70u, 0x125C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C78u;
label_125c78:
    // 0x125c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_125c7c:
    if (ctx->pc == 0x125C7Cu) {
        ctx->pc = 0x125C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C78u;
        // 0x125c7c: 0x3b41821  addu        $v1, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C80u;
        goto label_125c80;
    }
    ctx->pc = 0x125C78u;
    {
        const bool branch_taken_0x125c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C78u;
        // 0x125c7c: 0x3b41821  addu        $v1, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c78) {
            ctx->pc = 0x125C88u;
            goto label_125c88;
        }
    }
    ctx->pc = 0x125C80u;
label_125c80:
    // 0x125c80: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x125c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_125c84:
    // 0x125c84: 0xa0530008  sb          $s3, 0x8($v0)
    ctx->pc = 0x125c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 19));
label_125c88:
    // 0x125c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125c8c:
    // 0x125c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x125c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125c90:
    // 0x125c90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x125c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_125c94:
    // 0x125c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c98:
    // 0x125c98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x125c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_125c9c:
    // 0x125c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ca0:
    // 0x125ca0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x125ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_125ca4:
    // 0x125ca4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x125ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_125ca8:
    // 0x125ca8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x125ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_125cac:
    // 0x125cac: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x125cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_125cb0:
    // 0x125cb0: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x125cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_125cb4:
    // 0x125cb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x125cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cb8:
    // 0x125cb8: 0xc04c784  jal         func_131E10
label_125cbc:
    if (ctx->pc == 0x125CBCu) {
        ctx->pc = 0x125CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB8u;
        // 0x125cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CC0u;
        goto label_125cc0;
    }
    ctx->pc = 0x125CB8u;
    SET_GPR_U32(ctx, 31, 0x125CC0u);
    ctx->pc = 0x125CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CB8u;
    // 0x125cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x125CB8u, 0x125CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CC0u;
label_125cc0:
    // 0x125cc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_125cc4:
    if (ctx->pc == 0x125CC4u) {
        ctx->pc = 0x125CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CC0u;
        // 0x125cc4: 0x29da021  addu        $s4, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CC8u;
        goto label_125cc8;
    }
    ctx->pc = 0x125CC0u;
    {
        const bool branch_taken_0x125cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CC0u;
        // 0x125cc4: 0x29da021  addu        $s4, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cc0) {
            ctx->pc = 0x125CD0u;
            goto label_125cd0;
        }
    }
    ctx->pc = 0x125CC8u;
label_125cc8:
    // 0x125cc8: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x125cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_125ccc:
    // 0x125ccc: 0xa0530008  sb          $s3, 0x8($v0)
    ctx->pc = 0x125cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 19));
label_125cd0:
    // 0x125cd0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125cd4:
    // 0x125cd4: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125cd8:
    // 0x125cd8: 0x2a41821  addu        $v1, $s5, $a0
    ctx->pc = 0x125cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_125cdc:
    // 0x125cdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x125cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125ce0:
    // 0x125ce0: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x125ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_125ce4:
    // 0x125ce4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_125ce8:
    if (ctx->pc == 0x125CE8u) {
        ctx->pc = 0x125CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CE4u;
        // 0x125ce8: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CECu;
        goto label_125cec;
    }
    ctx->pc = 0x125CE4u;
    {
        const bool branch_taken_0x125ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CE4u;
        // 0x125ce8: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ce4) {
            ctx->pc = 0x125D04u;
            goto label_125d04;
        }
    }
    ctx->pc = 0x125CECu;
label_125cec:
    // 0x125cec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_125cf0:
    if (ctx->pc == 0x125CF0u) {
        ctx->pc = 0x125CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CECu;
        // 0x125cf0: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CF4u;
        goto label_125cf4;
    }
    ctx->pc = 0x125CECu;
    {
        const bool branch_taken_0x125cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CECu;
        // 0x125cf0: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cec) {
            ctx->pc = 0x125D18u;
            goto label_125d18;
        }
    }
    ctx->pc = 0x125CF4u;
label_125cf4:
    // 0x125cf4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_125cf8:
    if (ctx->pc == 0x125CF8u) {
        ctx->pc = 0x125CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF4u;
        // 0x125cf8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CFCu;
        goto label_125cfc;
    }
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF4u;
        // 0x125cf8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125D44u;
            goto label_125d44;
        }
    }
    ctx->pc = 0x125CFCu;
label_125cfc:
    // 0x125cfc: 0x10000020  b           . + 4 + (0x20 << 2)
label_125d00:
    if (ctx->pc == 0x125D00u) {
        ctx->pc = 0x125D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CFCu;
        // 0x125d00: 0x8ca20640  lw          $v0, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D04u;
        goto label_125d04;
    }
    ctx->pc = 0x125CFCu;
    {
        const bool branch_taken_0x125cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CFCu;
        // 0x125d00: 0x8ca20640  lw          $v0, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cfc) {
            ctx->pc = 0x125D80u;
            goto label_125d80;
        }
    }
    ctx->pc = 0x125D04u;
label_125d04:
    // 0x125d04: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_125d08:
    // 0x125d08: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_125d0c:
    if (ctx->pc == 0x125D0Cu) {
        ctx->pc = 0x125D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D08u;
        // 0x125d0c: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D10u;
        goto label_125d10;
    }
    ctx->pc = 0x125D08u;
    {
        const bool branch_taken_0x125d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D08u;
        // 0x125d0c: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d08) {
            ctx->pc = 0x125D40u;
            goto label_125d40;
        }
    }
    ctx->pc = 0x125D10u;
label_125d10:
    // 0x125d10: 0x1000001b  b           . + 4 + (0x1B << 2)
label_125d14:
    if (ctx->pc == 0x125D14u) {
        ctx->pc = 0x125D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D10u;
        // 0x125d14: 0x8ca20640  lw          $v0, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D18u;
        goto label_125d18;
    }
    ctx->pc = 0x125D10u;
    {
        const bool branch_taken_0x125d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D10u;
        // 0x125d14: 0x8ca20640  lw          $v0, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d10) {
            ctx->pc = 0x125D80u;
            goto label_125d80;
        }
    }
    ctx->pc = 0x125D18u;
label_125d18:
    // 0x125d18: 0x84a2054a  lh          $v0, 0x54A($a1)
    ctx->pc = 0x125d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1354)));
label_125d1c:
    // 0x125d1c: 0x84a30548  lh          $v1, 0x548($a1)
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1352)));
label_125d20:
    // 0x125d20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x125d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_125d24:
    // 0x125d24: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_125d28:
    if (ctx->pc == 0x125D28u) {
        ctx->pc = 0x125D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D24u;
        // 0x125d28: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D2Cu;
        goto label_125d2c;
    }
    ctx->pc = 0x125D24u;
    {
        const bool branch_taken_0x125d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D24u;
        // 0x125d28: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d24) {
            ctx->pc = 0x125D7Cu;
            goto label_125d7c;
        }
    }
    ctx->pc = 0x125D2Cu;
label_125d2c:
    // 0x125d2c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125d30:
    // 0x125d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d34:
    // 0x125d34: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x125d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125d38:
    // 0x125d38: 0x10000010  b           . + 4 + (0x10 << 2)
label_125d3c:
    if (ctx->pc == 0x125D3Cu) {
        ctx->pc = 0x125D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D38u;
        // 0x125d3c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D40u;
        goto label_125d40;
    }
    ctx->pc = 0x125D38u;
    {
        const bool branch_taken_0x125d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D38u;
        // 0x125d3c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d38) {
            ctx->pc = 0x125D7Cu;
            goto label_125d7c;
        }
    }
    ctx->pc = 0x125D40u;
label_125d40:
    // 0x125d40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x125d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_125d44:
    // 0x125d44: 0x2443b000  addiu       $v1, $v0, -0x5000
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_125d48:
    // 0x125d48: 0xc441b000  lwc1        $f1, -0x5000($v0)
    ctx->pc = 0x125d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125d4c:
    // 0x125d4c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x125d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125d50:
    // 0x125d50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x125d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125d54:
    // 0x125d54: 0x0  nop
    ctx->pc = 0x125d54u;
    // NOP
label_125d58:
    // 0x125d58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_125d5c:
    if (ctx->pc == 0x125D5Cu) {
        ctx->pc = 0x125D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D58u;
        // 0x125d5c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D60u;
        goto label_125d60;
    }
    ctx->pc = 0x125D58u;
    {
        const bool branch_taken_0x125d58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D58u;
        // 0x125d5c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d58) {
            ctx->pc = 0x125D78u;
            goto label_125d78;
        }
    }
    ctx->pc = 0x125D60u;
label_125d60:
    // 0x125d60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d64:
    // 0x125d64: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125d68:
    // 0x125d68: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125d6c:
    // 0x125d6c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125d70:
    // 0x125d70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125d74:
    // 0x125d74: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x125d74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_125d78:
    // 0x125d78: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x125d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125d7c:
    // 0x125d7c: 0x8ca20640  lw          $v0, 0x640($a1)
    ctx->pc = 0x125d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
label_125d80:
    // 0x125d80: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_125d84:
    if (ctx->pc == 0x125D84u) {
        ctx->pc = 0x125D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D80u;
        // 0x125d84: 0x8fa50654  lw          $a1, 0x654($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D88u;
        goto label_125d88;
    }
    ctx->pc = 0x125D80u;
    {
        const bool branch_taken_0x125d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d80) {
            ctx->pc = 0x125D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125D80u;
            // 0x125d84: 0x8fa50654  lw          $a1, 0x654($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125ED8u;
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125D88u;
label_125d88:
    // 0x125d88: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x125d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
label_125d8c:
    // 0x125d8c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x125d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_125d90:
    // 0x125d90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_125d94:
    if (ctx->pc == 0x125D94u) {
        ctx->pc = 0x125D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D90u;
        // 0x125d94: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D98u;
        goto label_125d98;
    }
    ctx->pc = 0x125D90u;
    {
        const bool branch_taken_0x125d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D90u;
        // 0x125d94: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d90) {
            ctx->pc = 0x125DB0u;
            goto label_125db0;
        }
    }
    ctx->pc = 0x125D98u;
label_125d98:
    // 0x125d98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_125d9c:
    if (ctx->pc == 0x125D9Cu) {
        ctx->pc = 0x125D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D98u;
        // 0x125d9c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DA0u;
        goto label_125da0;
    }
    ctx->pc = 0x125D98u;
    {
        const bool branch_taken_0x125d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D98u;
        // 0x125d9c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d98) {
            ctx->pc = 0x125DC4u;
            goto label_125dc4;
        }
    }
    ctx->pc = 0x125DA0u;
label_125da0:
    // 0x125da0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_125da4:
    if (ctx->pc == 0x125DA4u) {
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA0u;
        // 0x125da4: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DA8u;
        goto label_125da8;
    }
    ctx->pc = 0x125DA0u;
    {
        const bool branch_taken_0x125da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA0u;
        // 0x125da4: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da0) {
            ctx->pc = 0x125DC4u;
            goto label_125dc4;
        }
    }
    ctx->pc = 0x125DA8u;
label_125da8:
    // 0x125da8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_125dac:
    if (ctx->pc == 0x125DACu) {
        ctx->pc = 0x125DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA8u;
        // 0x125dac: 0x8ca30640  lw          $v1, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DB0u;
        goto label_125db0;
    }
    ctx->pc = 0x125DA8u;
    {
        const bool branch_taken_0x125da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA8u;
        // 0x125dac: 0x8ca30640  lw          $v1, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da8) {
            ctx->pc = 0x125E5Cu;
            goto label_125e5c;
        }
    }
    ctx->pc = 0x125DB0u;
label_125db0:
    // 0x125db0: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x125db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_125db4:
    // 0x125db4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_125db8:
    if (ctx->pc == 0x125DB8u) {
        ctx->pc = 0x125DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB4u;
        // 0x125db8: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DBCu;
        goto label_125dbc;
    }
    ctx->pc = 0x125DB4u;
    {
        const bool branch_taken_0x125db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB4u;
        // 0x125db8: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125db4) {
            ctx->pc = 0x125DF0u;
            goto label_125df0;
        }
    }
    ctx->pc = 0x125DBCu;
label_125dbc:
    // 0x125dbc: 0x10000027  b           . + 4 + (0x27 << 2)
label_125dc0:
    if (ctx->pc == 0x125DC0u) {
        ctx->pc = 0x125DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DBCu;
        // 0x125dc0: 0x8ca30640  lw          $v1, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DC4u;
        goto label_125dc4;
    }
    ctx->pc = 0x125DBCu;
    {
        const bool branch_taken_0x125dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DBCu;
        // 0x125dc0: 0x8ca30640  lw          $v1, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dbc) {
            ctx->pc = 0x125E5Cu;
            goto label_125e5c;
        }
    }
    ctx->pc = 0x125DC4u;
label_125dc4:
    // 0x125dc4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125dc8:
    // 0x125dc8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x125dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_125dcc:
    // 0x125dcc: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125dd0:
    // 0x125dd0: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x125dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_125dd4:
    // 0x125dd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125dd8:
    // 0x125dd8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_125ddc:
    if (ctx->pc == 0x125DDCu) {
        ctx->pc = 0x125DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DD8u;
        // 0x125ddc: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DE0u;
        goto label_125de0;
    }
    ctx->pc = 0x125DD8u;
    {
        const bool branch_taken_0x125dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x125DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DD8u;
        // 0x125ddc: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dd8) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125DE0u;
label_125de0:
    // 0x125de0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_125de4:
    if (ctx->pc == 0x125DE4u) {
        ctx->pc = 0x125DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE0u;
        // 0x125de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DE8u;
        goto label_125de8;
    }
    ctx->pc = 0x125DE0u;
    {
        const bool branch_taken_0x125de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE0u;
        // 0x125de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125de0) {
            ctx->pc = 0x125E14u;
            goto label_125e14;
        }
    }
    ctx->pc = 0x125DE8u;
label_125de8:
    // 0x125de8: 0x10000011  b           . + 4 + (0x11 << 2)
label_125dec:
    if (ctx->pc == 0x125DECu) {
        ctx->pc = 0x125DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE8u;
        // 0x125dec: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DF0u;
        goto label_125df0;
    }
    ctx->pc = 0x125DE8u;
    {
        const bool branch_taken_0x125de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE8u;
        // 0x125dec: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125de8) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125DF0u;
label_125df0:
    // 0x125df0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125df4:
    // 0x125df4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x125df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_125df8:
    // 0x125df8: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125dfc:
    // 0x125dfc: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x125dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_125e00:
    // 0x125e00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x125e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125e04:
    // 0x125e04: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_125e08:
    if (ctx->pc == 0x125E08u) {
        ctx->pc = 0x125E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E04u;
        // 0x125e08: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E0Cu;
        goto label_125e0c;
    }
    ctx->pc = 0x125E04u;
    {
        const bool branch_taken_0x125e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x125E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E04u;
        // 0x125e08: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e04) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125E0Cu;
label_125e0c:
    // 0x125e0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_125e10:
    if (ctx->pc == 0x125E10u) {
        ctx->pc = 0x125E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E0Cu;
        // 0x125e10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E14u;
        goto label_125e14;
    }
    ctx->pc = 0x125E0Cu;
    {
        const bool branch_taken_0x125e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E0Cu;
        // 0x125e10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e0c) {
            ctx->pc = 0x125E24u;
            goto label_125e24;
        }
    }
    ctx->pc = 0x125E14u;
label_125e14:
    // 0x125e14: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_125e18:
    if (ctx->pc == 0x125E18u) {
        ctx->pc = 0x125E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E14u;
        // 0x125e18: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E1Cu;
        goto label_125e1c;
    }
    ctx->pc = 0x125E14u;
    {
        const bool branch_taken_0x125e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x125E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E14u;
        // 0x125e18: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e14) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125E1Cu;
label_125e1c:
    // 0x125e1c: 0x1000000f  b           . + 4 + (0xF << 2)
label_125e20:
    if (ctx->pc == 0x125E20u) {
        ctx->pc = 0x125E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E1Cu;
        // 0x125e20: 0x8ca30640  lw          $v1, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E24u;
        goto label_125e24;
    }
    ctx->pc = 0x125E1Cu;
    {
        const bool branch_taken_0x125e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E1Cu;
        // 0x125e20: 0x8ca30640  lw          $v1, 0x640($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e1c) {
            ctx->pc = 0x125E5Cu;
            goto label_125e5c;
        }
    }
    ctx->pc = 0x125E24u;
label_125e24:
    // 0x125e24: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x125e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_125e28:
    // 0x125e28: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_125e2c:
    if (ctx->pc == 0x125E2Cu) {
        ctx->pc = 0x125E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E28u;
        // 0x125e2c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E30u;
        goto label_125e30;
    }
    ctx->pc = 0x125E28u;
    {
        const bool branch_taken_0x125e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x125E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E28u;
        // 0x125e2c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e28) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125E30u;
label_125e30:
    // 0x125e30: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_125e34:
    if (ctx->pc == 0x125E34u) {
        ctx->pc = 0x125E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E30u;
        // 0x125e34: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E38u;
        goto label_125e38;
    }
    ctx->pc = 0x125E30u;
    {
        const bool branch_taken_0x125e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x125E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E30u;
        // 0x125e34: 0x8fa50650  lw          $a1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e30) {
            ctx->pc = 0x125E58u;
            goto label_125e58;
        }
    }
    ctx->pc = 0x125E38u;
label_125e38:
    // 0x125e38: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125e3c:
    // 0x125e3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125e40:
    // 0x125e40: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125e44:
    // 0x125e44: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125e48:
    // 0x125e48: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x125e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125e4c:
    // 0x125e4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125e50:
    // 0x125e50: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x125e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_125e54:
    // 0x125e54: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x125e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_125e58:
    // 0x125e58: 0x8ca30640  lw          $v1, 0x640($a1)
    ctx->pc = 0x125e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1600)));
label_125e5c:
    // 0x125e5c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x125e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_125e60:
    // 0x125e60: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x125e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_125e64:
    // 0x125e64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_125e68:
    if (ctx->pc == 0x125E68u) {
        ctx->pc = 0x125E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E64u;
        // 0x125e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E6Cu;
        goto label_125e6c;
    }
    ctx->pc = 0x125E64u;
    {
        const bool branch_taken_0x125e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E64u;
        // 0x125e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e64) {
            ctx->pc = 0x125E74u;
            goto label_125e74;
        }
    }
    ctx->pc = 0x125E6Cu;
label_125e6c:
    // 0x125e6c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x125e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_125e70:
    // 0x125e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125e74:
    // 0x125e74: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x125e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_125e78:
    // 0x125e78: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_125e7c:
    if (ctx->pc == 0x125E7Cu) {
        ctx->pc = 0x125E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E78u;
        // 0x125e7c: 0x8fa50654  lw          $a1, 0x654($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E80u;
        goto label_125e80;
    }
    ctx->pc = 0x125E78u;
    {
        const bool branch_taken_0x125e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E78u;
        // 0x125e7c: 0x8fa50654  lw          $a1, 0x654($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e78) {
            ctx->pc = 0x125ED8u;
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125E80u;
label_125e80:
    // 0x125e80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125e84:
    // 0x125e84: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x125e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_125e88:
    // 0x125e88: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_125e8c:
    // 0x125e8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125e90:
    // 0x125e90: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_125e94:
    // 0x125e94: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x125e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_125e98:
    // 0x125e98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_125e9c:
    if (ctx->pc == 0x125E9Cu) {
        ctx->pc = 0x125E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E98u;
        // 0x125e9c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125EA0u;
        goto label_125ea0;
    }
    ctx->pc = 0x125E98u;
    {
        const bool branch_taken_0x125e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E98u;
        // 0x125e9c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e98) {
            ctx->pc = 0x125ED8u;
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125EA0u;
label_125ea0:
    // 0x125ea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_125ea4:
    // 0x125ea4: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
label_125ea8:
    // 0x125ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125eac:
    // 0x125eac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125eb0:
    // 0x125eb0: 0x800008  jr          $a0
label_125eb4:
    if (ctx->pc == 0x125EB4u) {
        ctx->pc = 0x125EB8u;
        goto label_125eb8;
    }
    ctx->pc = 0x125EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125EB8u: goto label_125eb8;
            case 0x125ED4u: goto label_125ed4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125EB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x125EB8u;
label_125eb8:
    // 0x125eb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x125eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125ebc:
    // 0x125ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125ec0:
    // 0x125ec0: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x125ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_125ec4:
    // 0x125ec4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x125ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_125ec8:
    // 0x125ec8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x125ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_125ecc:
    // 0x125ecc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125ed0:
    // 0x125ed0: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x125ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_125ed4:
    // 0x125ed4: 0x8fa50654  lw          $a1, 0x654($sp)
    ctx->pc = 0x125ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_125ed8:
    // 0x125ed8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125edc:
    // 0x125edc: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x125edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_125ee0:
    // 0x125ee0: 0x1440fdc1  bnez        $v0, . + 4 + (-0x23F << 2)
label_125ee4:
    if (ctx->pc == 0x125EE4u) {
        ctx->pc = 0x125EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EE0u;
        // 0x125ee4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125EE8u;
        goto label_125ee8;
    }
    ctx->pc = 0x125EE0u;
    {
        const bool branch_taken_0x125ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EE0u;
        // 0x125ee4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ee0) {
            ctx->pc = 0x1255E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1255e8;
        }
    }
    ctx->pc = 0x125EE8u;
label_125ee8:
    // 0x125ee8: 0x8fa60658  lw          $a2, 0x658($sp)
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_125eec:
    // 0x125eec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x125eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_125ef0:
    // 0x125ef0: 0x8fa80654  lw          $t0, 0x654($sp)
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_125ef4:
    // 0x125ef4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_125ef8:
    // 0x125ef8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_125efc:
    // 0x125efc: 0xc07de40  jal         func_1F7900
label_125f00:
    if (ctx->pc == 0x125F00u) {
        ctx->pc = 0x125F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EFCu;
        // 0x125f00: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F04u;
        goto label_125f04;
    }
    ctx->pc = 0x125EFCu;
    SET_GPR_U32(ctx, 31, 0x125F04u);
    ctx->pc = 0x125F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125EFCu;
    // 0x125f00: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7900u, 0x125EFCu, 0x125F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F04u;
label_125f04:
    // 0x125f04: 0x7bb006f0  lq          $s0, 0x6F0($sp)
    ctx->pc = 0x125f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
label_125f08:
    // 0x125f08: 0x7bb106e0  lq          $s1, 0x6E0($sp)
    ctx->pc = 0x125f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
label_125f0c:
    // 0x125f0c: 0x7bb206d0  lq          $s2, 0x6D0($sp)
    ctx->pc = 0x125f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
label_125f10:
    // 0x125f10: 0x7bb306c0  lq          $s3, 0x6C0($sp)
    ctx->pc = 0x125f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_125f14:
    // 0x125f14: 0x7bb406b0  lq          $s4, 0x6B0($sp)
    ctx->pc = 0x125f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
label_125f18:
    // 0x125f18: 0x7bb506a0  lq          $s5, 0x6A0($sp)
    ctx->pc = 0x125f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1696)));
label_125f1c:
    // 0x125f1c: 0x7bb60690  lq          $s6, 0x690($sp)
    ctx->pc = 0x125f1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
label_125f20:
    // 0x125f20: 0x7bb70680  lq          $s7, 0x680($sp)
    ctx->pc = 0x125f20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_125f24:
    // 0x125f24: 0x7bbe0670  lq          $fp, 0x670($sp)
    ctx->pc = 0x125f24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
label_125f28:
    // 0x125f28: 0xdfbf0660  ld          $ra, 0x660($sp)
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_125f2c:
    // 0x125f2c: 0x3e00008  jr          $ra
label_125f30:
    if (ctx->pc == 0x125F30u) {
        ctx->pc = 0x125F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F2Cu;
        // 0x125f30: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125F34u;
        goto label_125f34;
    }
    ctx->pc = 0x125F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F2Cu;
        // 0x125f30: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F34u;
label_125f34:
    // 0x125f34: 0x0  nop
    ctx->pc = 0x125f34u;
    // NOP
    ctx->pc = 0x125f38u;
}
