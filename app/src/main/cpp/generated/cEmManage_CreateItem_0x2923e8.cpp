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

// Function: cEmManage_CreateItem
// Address: 0x2923e8 - 0x292af0
void cEmManage_CreateItem_0x2923e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_CreateItem_0x2923e8");
#endif

    switch (ctx->pc) {
        case 0x2923e8u: goto label_2923e8;
        case 0x2923ecu: goto label_2923ec;
        case 0x2923f0u: goto label_2923f0;
        case 0x2923f4u: goto label_2923f4;
        case 0x2923f8u: goto label_2923f8;
        case 0x2923fcu: goto label_2923fc;
        case 0x292400u: goto label_292400;
        case 0x292404u: goto label_292404;
        case 0x292408u: goto label_292408;
        case 0x29240cu: goto label_29240c;
        case 0x292410u: goto label_292410;
        case 0x292414u: goto label_292414;
        case 0x292418u: goto label_292418;
        case 0x29241cu: goto label_29241c;
        case 0x292420u: goto label_292420;
        case 0x292424u: goto label_292424;
        case 0x292428u: goto label_292428;
        case 0x29242cu: goto label_29242c;
        case 0x292430u: goto label_292430;
        case 0x292434u: goto label_292434;
        case 0x292438u: goto label_292438;
        case 0x29243cu: goto label_29243c;
        case 0x292440u: goto label_292440;
        case 0x292444u: goto label_292444;
        case 0x292448u: goto label_292448;
        case 0x29244cu: goto label_29244c;
        case 0x292450u: goto label_292450;
        case 0x292454u: goto label_292454;
        case 0x292458u: goto label_292458;
        case 0x29245cu: goto label_29245c;
        case 0x292460u: goto label_292460;
        case 0x292464u: goto label_292464;
        case 0x292468u: goto label_292468;
        case 0x29246cu: goto label_29246c;
        case 0x292470u: goto label_292470;
        case 0x292474u: goto label_292474;
        case 0x292478u: goto label_292478;
        case 0x29247cu: goto label_29247c;
        case 0x292480u: goto label_292480;
        case 0x292484u: goto label_292484;
        case 0x292488u: goto label_292488;
        case 0x29248cu: goto label_29248c;
        case 0x292490u: goto label_292490;
        case 0x292494u: goto label_292494;
        case 0x292498u: goto label_292498;
        case 0x29249cu: goto label_29249c;
        case 0x2924a0u: goto label_2924a0;
        case 0x2924a4u: goto label_2924a4;
        case 0x2924a8u: goto label_2924a8;
        case 0x2924acu: goto label_2924ac;
        case 0x2924b0u: goto label_2924b0;
        case 0x2924b4u: goto label_2924b4;
        case 0x2924b8u: goto label_2924b8;
        case 0x2924bcu: goto label_2924bc;
        case 0x2924c0u: goto label_2924c0;
        case 0x2924c4u: goto label_2924c4;
        case 0x2924c8u: goto label_2924c8;
        case 0x2924ccu: goto label_2924cc;
        case 0x2924d0u: goto label_2924d0;
        case 0x2924d4u: goto label_2924d4;
        case 0x2924d8u: goto label_2924d8;
        case 0x2924dcu: goto label_2924dc;
        case 0x2924e0u: goto label_2924e0;
        case 0x2924e4u: goto label_2924e4;
        case 0x2924e8u: goto label_2924e8;
        case 0x2924ecu: goto label_2924ec;
        case 0x2924f0u: goto label_2924f0;
        case 0x2924f4u: goto label_2924f4;
        case 0x2924f8u: goto label_2924f8;
        case 0x2924fcu: goto label_2924fc;
        case 0x292500u: goto label_292500;
        case 0x292504u: goto label_292504;
        case 0x292508u: goto label_292508;
        case 0x29250cu: goto label_29250c;
        case 0x292510u: goto label_292510;
        case 0x292514u: goto label_292514;
        case 0x292518u: goto label_292518;
        case 0x29251cu: goto label_29251c;
        case 0x292520u: goto label_292520;
        case 0x292524u: goto label_292524;
        case 0x292528u: goto label_292528;
        case 0x29252cu: goto label_29252c;
        case 0x292530u: goto label_292530;
        case 0x292534u: goto label_292534;
        case 0x292538u: goto label_292538;
        case 0x29253cu: goto label_29253c;
        case 0x292540u: goto label_292540;
        case 0x292544u: goto label_292544;
        case 0x292548u: goto label_292548;
        case 0x29254cu: goto label_29254c;
        case 0x292550u: goto label_292550;
        case 0x292554u: goto label_292554;
        case 0x292558u: goto label_292558;
        case 0x29255cu: goto label_29255c;
        case 0x292560u: goto label_292560;
        case 0x292564u: goto label_292564;
        case 0x292568u: goto label_292568;
        case 0x29256cu: goto label_29256c;
        case 0x292570u: goto label_292570;
        case 0x292574u: goto label_292574;
        case 0x292578u: goto label_292578;
        case 0x29257cu: goto label_29257c;
        case 0x292580u: goto label_292580;
        case 0x292584u: goto label_292584;
        case 0x292588u: goto label_292588;
        case 0x29258cu: goto label_29258c;
        case 0x292590u: goto label_292590;
        case 0x292594u: goto label_292594;
        case 0x292598u: goto label_292598;
        case 0x29259cu: goto label_29259c;
        case 0x2925a0u: goto label_2925a0;
        case 0x2925a4u: goto label_2925a4;
        case 0x2925a8u: goto label_2925a8;
        case 0x2925acu: goto label_2925ac;
        case 0x2925b0u: goto label_2925b0;
        case 0x2925b4u: goto label_2925b4;
        case 0x2925b8u: goto label_2925b8;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925c0u: goto label_2925c0;
        case 0x2925c4u: goto label_2925c4;
        case 0x2925c8u: goto label_2925c8;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925d0u: goto label_2925d0;
        case 0x2925d4u: goto label_2925d4;
        case 0x2925d8u: goto label_2925d8;
        case 0x2925dcu: goto label_2925dc;
        case 0x2925e0u: goto label_2925e0;
        case 0x2925e4u: goto label_2925e4;
        case 0x2925e8u: goto label_2925e8;
        case 0x2925ecu: goto label_2925ec;
        case 0x2925f0u: goto label_2925f0;
        case 0x2925f4u: goto label_2925f4;
        case 0x2925f8u: goto label_2925f8;
        case 0x2925fcu: goto label_2925fc;
        case 0x292600u: goto label_292600;
        case 0x292604u: goto label_292604;
        case 0x292608u: goto label_292608;
        case 0x29260cu: goto label_29260c;
        case 0x292610u: goto label_292610;
        case 0x292614u: goto label_292614;
        case 0x292618u: goto label_292618;
        case 0x29261cu: goto label_29261c;
        case 0x292620u: goto label_292620;
        case 0x292624u: goto label_292624;
        case 0x292628u: goto label_292628;
        case 0x29262cu: goto label_29262c;
        case 0x292630u: goto label_292630;
        case 0x292634u: goto label_292634;
        case 0x292638u: goto label_292638;
        case 0x29263cu: goto label_29263c;
        case 0x292640u: goto label_292640;
        case 0x292644u: goto label_292644;
        case 0x292648u: goto label_292648;
        case 0x29264cu: goto label_29264c;
        case 0x292650u: goto label_292650;
        case 0x292654u: goto label_292654;
        case 0x292658u: goto label_292658;
        case 0x29265cu: goto label_29265c;
        case 0x292660u: goto label_292660;
        case 0x292664u: goto label_292664;
        case 0x292668u: goto label_292668;
        case 0x29266cu: goto label_29266c;
        case 0x292670u: goto label_292670;
        case 0x292674u: goto label_292674;
        case 0x292678u: goto label_292678;
        case 0x29267cu: goto label_29267c;
        case 0x292680u: goto label_292680;
        case 0x292684u: goto label_292684;
        case 0x292688u: goto label_292688;
        case 0x29268cu: goto label_29268c;
        case 0x292690u: goto label_292690;
        case 0x292694u: goto label_292694;
        case 0x292698u: goto label_292698;
        case 0x29269cu: goto label_29269c;
        case 0x2926a0u: goto label_2926a0;
        case 0x2926a4u: goto label_2926a4;
        case 0x2926a8u: goto label_2926a8;
        case 0x2926acu: goto label_2926ac;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926b4u: goto label_2926b4;
        case 0x2926b8u: goto label_2926b8;
        case 0x2926bcu: goto label_2926bc;
        case 0x2926c0u: goto label_2926c0;
        case 0x2926c4u: goto label_2926c4;
        case 0x2926c8u: goto label_2926c8;
        case 0x2926ccu: goto label_2926cc;
        case 0x2926d0u: goto label_2926d0;
        case 0x2926d4u: goto label_2926d4;
        case 0x2926d8u: goto label_2926d8;
        case 0x2926dcu: goto label_2926dc;
        case 0x2926e0u: goto label_2926e0;
        case 0x2926e4u: goto label_2926e4;
        case 0x2926e8u: goto label_2926e8;
        case 0x2926ecu: goto label_2926ec;
        case 0x2926f0u: goto label_2926f0;
        case 0x2926f4u: goto label_2926f4;
        case 0x2926f8u: goto label_2926f8;
        case 0x2926fcu: goto label_2926fc;
        case 0x292700u: goto label_292700;
        case 0x292704u: goto label_292704;
        case 0x292708u: goto label_292708;
        case 0x29270cu: goto label_29270c;
        case 0x292710u: goto label_292710;
        case 0x292714u: goto label_292714;
        case 0x292718u: goto label_292718;
        case 0x29271cu: goto label_29271c;
        case 0x292720u: goto label_292720;
        case 0x292724u: goto label_292724;
        case 0x292728u: goto label_292728;
        case 0x29272cu: goto label_29272c;
        case 0x292730u: goto label_292730;
        case 0x292734u: goto label_292734;
        case 0x292738u: goto label_292738;
        case 0x29273cu: goto label_29273c;
        case 0x292740u: goto label_292740;
        case 0x292744u: goto label_292744;
        case 0x292748u: goto label_292748;
        case 0x29274cu: goto label_29274c;
        case 0x292750u: goto label_292750;
        case 0x292754u: goto label_292754;
        case 0x292758u: goto label_292758;
        case 0x29275cu: goto label_29275c;
        case 0x292760u: goto label_292760;
        case 0x292764u: goto label_292764;
        case 0x292768u: goto label_292768;
        case 0x29276cu: goto label_29276c;
        case 0x292770u: goto label_292770;
        case 0x292774u: goto label_292774;
        case 0x292778u: goto label_292778;
        case 0x29277cu: goto label_29277c;
        case 0x292780u: goto label_292780;
        case 0x292784u: goto label_292784;
        case 0x292788u: goto label_292788;
        case 0x29278cu: goto label_29278c;
        case 0x292790u: goto label_292790;
        case 0x292794u: goto label_292794;
        case 0x292798u: goto label_292798;
        case 0x29279cu: goto label_29279c;
        case 0x2927a0u: goto label_2927a0;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927a8u: goto label_2927a8;
        case 0x2927acu: goto label_2927ac;
        case 0x2927b0u: goto label_2927b0;
        case 0x2927b4u: goto label_2927b4;
        case 0x2927b8u: goto label_2927b8;
        case 0x2927bcu: goto label_2927bc;
        case 0x2927c0u: goto label_2927c0;
        case 0x2927c4u: goto label_2927c4;
        case 0x2927c8u: goto label_2927c8;
        case 0x2927ccu: goto label_2927cc;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927d4u: goto label_2927d4;
        case 0x2927d8u: goto label_2927d8;
        case 0x2927dcu: goto label_2927dc;
        case 0x2927e0u: goto label_2927e0;
        case 0x2927e4u: goto label_2927e4;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927ecu: goto label_2927ec;
        case 0x2927f0u: goto label_2927f0;
        case 0x2927f4u: goto label_2927f4;
        case 0x2927f8u: goto label_2927f8;
        case 0x2927fcu: goto label_2927fc;
        case 0x292800u: goto label_292800;
        case 0x292804u: goto label_292804;
        case 0x292808u: goto label_292808;
        case 0x29280cu: goto label_29280c;
        case 0x292810u: goto label_292810;
        case 0x292814u: goto label_292814;
        case 0x292818u: goto label_292818;
        case 0x29281cu: goto label_29281c;
        case 0x292820u: goto label_292820;
        case 0x292824u: goto label_292824;
        case 0x292828u: goto label_292828;
        case 0x29282cu: goto label_29282c;
        case 0x292830u: goto label_292830;
        case 0x292834u: goto label_292834;
        case 0x292838u: goto label_292838;
        case 0x29283cu: goto label_29283c;
        case 0x292840u: goto label_292840;
        case 0x292844u: goto label_292844;
        case 0x292848u: goto label_292848;
        case 0x29284cu: goto label_29284c;
        case 0x292850u: goto label_292850;
        case 0x292854u: goto label_292854;
        case 0x292858u: goto label_292858;
        case 0x29285cu: goto label_29285c;
        case 0x292860u: goto label_292860;
        case 0x292864u: goto label_292864;
        case 0x292868u: goto label_292868;
        case 0x29286cu: goto label_29286c;
        case 0x292870u: goto label_292870;
        case 0x292874u: goto label_292874;
        case 0x292878u: goto label_292878;
        case 0x29287cu: goto label_29287c;
        case 0x292880u: goto label_292880;
        case 0x292884u: goto label_292884;
        case 0x292888u: goto label_292888;
        case 0x29288cu: goto label_29288c;
        case 0x292890u: goto label_292890;
        case 0x292894u: goto label_292894;
        case 0x292898u: goto label_292898;
        case 0x29289cu: goto label_29289c;
        case 0x2928a0u: goto label_2928a0;
        case 0x2928a4u: goto label_2928a4;
        case 0x2928a8u: goto label_2928a8;
        case 0x2928acu: goto label_2928ac;
        case 0x2928b0u: goto label_2928b0;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928b8u: goto label_2928b8;
        case 0x2928bcu: goto label_2928bc;
        case 0x2928c0u: goto label_2928c0;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928c8u: goto label_2928c8;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928d0u: goto label_2928d0;
        case 0x2928d4u: goto label_2928d4;
        case 0x2928d8u: goto label_2928d8;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e0u: goto label_2928e0;
        case 0x2928e4u: goto label_2928e4;
        case 0x2928e8u: goto label_2928e8;
        case 0x2928ecu: goto label_2928ec;
        case 0x2928f0u: goto label_2928f0;
        case 0x2928f4u: goto label_2928f4;
        case 0x2928f8u: goto label_2928f8;
        case 0x2928fcu: goto label_2928fc;
        case 0x292900u: goto label_292900;
        case 0x292904u: goto label_292904;
        case 0x292908u: goto label_292908;
        case 0x29290cu: goto label_29290c;
        case 0x292910u: goto label_292910;
        case 0x292914u: goto label_292914;
        case 0x292918u: goto label_292918;
        case 0x29291cu: goto label_29291c;
        case 0x292920u: goto label_292920;
        case 0x292924u: goto label_292924;
        case 0x292928u: goto label_292928;
        case 0x29292cu: goto label_29292c;
        case 0x292930u: goto label_292930;
        case 0x292934u: goto label_292934;
        case 0x292938u: goto label_292938;
        case 0x29293cu: goto label_29293c;
        case 0x292940u: goto label_292940;
        case 0x292944u: goto label_292944;
        case 0x292948u: goto label_292948;
        case 0x29294cu: goto label_29294c;
        case 0x292950u: goto label_292950;
        case 0x292954u: goto label_292954;
        case 0x292958u: goto label_292958;
        case 0x29295cu: goto label_29295c;
        case 0x292960u: goto label_292960;
        case 0x292964u: goto label_292964;
        case 0x292968u: goto label_292968;
        case 0x29296cu: goto label_29296c;
        case 0x292970u: goto label_292970;
        case 0x292974u: goto label_292974;
        case 0x292978u: goto label_292978;
        case 0x29297cu: goto label_29297c;
        case 0x292980u: goto label_292980;
        case 0x292984u: goto label_292984;
        case 0x292988u: goto label_292988;
        case 0x29298cu: goto label_29298c;
        case 0x292990u: goto label_292990;
        case 0x292994u: goto label_292994;
        case 0x292998u: goto label_292998;
        case 0x29299cu: goto label_29299c;
        case 0x2929a0u: goto label_2929a0;
        case 0x2929a4u: goto label_2929a4;
        case 0x2929a8u: goto label_2929a8;
        case 0x2929acu: goto label_2929ac;
        case 0x2929b0u: goto label_2929b0;
        case 0x2929b4u: goto label_2929b4;
        case 0x2929b8u: goto label_2929b8;
        case 0x2929bcu: goto label_2929bc;
        case 0x2929c0u: goto label_2929c0;
        case 0x2929c4u: goto label_2929c4;
        case 0x2929c8u: goto label_2929c8;
        case 0x2929ccu: goto label_2929cc;
        case 0x2929d0u: goto label_2929d0;
        case 0x2929d4u: goto label_2929d4;
        case 0x2929d8u: goto label_2929d8;
        case 0x2929dcu: goto label_2929dc;
        case 0x2929e0u: goto label_2929e0;
        case 0x2929e4u: goto label_2929e4;
        case 0x2929e8u: goto label_2929e8;
        case 0x2929ecu: goto label_2929ec;
        case 0x2929f0u: goto label_2929f0;
        case 0x2929f4u: goto label_2929f4;
        case 0x2929f8u: goto label_2929f8;
        case 0x2929fcu: goto label_2929fc;
        case 0x292a00u: goto label_292a00;
        case 0x292a04u: goto label_292a04;
        case 0x292a08u: goto label_292a08;
        case 0x292a0cu: goto label_292a0c;
        case 0x292a10u: goto label_292a10;
        case 0x292a14u: goto label_292a14;
        case 0x292a18u: goto label_292a18;
        case 0x292a1cu: goto label_292a1c;
        case 0x292a20u: goto label_292a20;
        case 0x292a24u: goto label_292a24;
        case 0x292a28u: goto label_292a28;
        case 0x292a2cu: goto label_292a2c;
        case 0x292a30u: goto label_292a30;
        case 0x292a34u: goto label_292a34;
        case 0x292a38u: goto label_292a38;
        case 0x292a3cu: goto label_292a3c;
        case 0x292a40u: goto label_292a40;
        case 0x292a44u: goto label_292a44;
        case 0x292a48u: goto label_292a48;
        case 0x292a4cu: goto label_292a4c;
        case 0x292a50u: goto label_292a50;
        case 0x292a54u: goto label_292a54;
        case 0x292a58u: goto label_292a58;
        case 0x292a5cu: goto label_292a5c;
        case 0x292a60u: goto label_292a60;
        case 0x292a64u: goto label_292a64;
        case 0x292a68u: goto label_292a68;
        case 0x292a6cu: goto label_292a6c;
        case 0x292a70u: goto label_292a70;
        case 0x292a74u: goto label_292a74;
        case 0x292a78u: goto label_292a78;
        case 0x292a7cu: goto label_292a7c;
        case 0x292a80u: goto label_292a80;
        case 0x292a84u: goto label_292a84;
        case 0x292a88u: goto label_292a88;
        case 0x292a8cu: goto label_292a8c;
        case 0x292a90u: goto label_292a90;
        case 0x292a94u: goto label_292a94;
        case 0x292a98u: goto label_292a98;
        case 0x292a9cu: goto label_292a9c;
        case 0x292aa0u: goto label_292aa0;
        case 0x292aa4u: goto label_292aa4;
        case 0x292aa8u: goto label_292aa8;
        case 0x292aacu: goto label_292aac;
        case 0x292ab0u: goto label_292ab0;
        case 0x292ab4u: goto label_292ab4;
        case 0x292ab8u: goto label_292ab8;
        case 0x292abcu: goto label_292abc;
        case 0x292ac0u: goto label_292ac0;
        case 0x292ac4u: goto label_292ac4;
        case 0x292ac8u: goto label_292ac8;
        case 0x292accu: goto label_292acc;
        case 0x292ad0u: goto label_292ad0;
        case 0x292ad4u: goto label_292ad4;
        case 0x292ad8u: goto label_292ad8;
        case 0x292adcu: goto label_292adc;
        case 0x292ae0u: goto label_292ae0;
        case 0x292ae4u: goto label_292ae4;
        case 0x292ae8u: goto label_292ae8;
        case 0x292aecu: goto label_292aec;
        default: break;
    }

    ctx->pc = 0x2923e8u;

label_2923e8:
    // 0x2923e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2923e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2923ec:
    // 0x2923ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2923ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2923f0:
    // 0x2923f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2923f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2923f4:
    // 0x2923f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2923f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2923f8:
    // 0x2923f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2923f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2923fc:
    // 0x2923fc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2923fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292400:
    // 0x292400: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x292400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_292404:
    // 0x292404: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x292404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292408:
    // 0x292408: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x292408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_29240c:
    // 0x29240c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x29240cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_292410:
    // 0x292410: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x292410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_292414:
    // 0x292414: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x292414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_292418:
    // 0x292418: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x292418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_29241c:
    // 0x29241c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_292420:
    // 0x292420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292424:
    // 0x292424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_292428:
    // 0x292428: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29242c:
    // 0x29242c: 0xc0a4812  jal         func_292048
label_292430:
    if (ctx->pc == 0x292430u) {
        ctx->pc = 0x292430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29242Cu;
        // 0x292430: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292434u;
        goto label_292434;
    }
    ctx->pc = 0x29242Cu;
    SET_GPR_U32(ctx, 31, 0x292434u);
    ctx->pc = 0x292430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29242Cu;
    // 0x292430: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292048u, 0x29242Cu, 0x292434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292434u;
label_292434:
    // 0x292434: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x292434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292438:
    // 0x292438: 0x240209c0  addiu       $v0, $zero, 0x9C0
    ctx->pc = 0x292438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
label_29243c:
    // 0x29243c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_292440:
    if (ctx->pc == 0x292440u) {
        ctx->pc = 0x292440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29243Cu;
        // 0x292440: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292444u;
        goto label_292444;
    }
    ctx->pc = 0x29243Cu;
    {
        const bool branch_taken_0x29243c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x292440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29243Cu;
        // 0x292440: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29243c) {
            ctx->pc = 0x292458u;
            goto label_292458;
        }
    }
    ctx->pc = 0x292444u;
label_292444:
    // 0x292444: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x292444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_292448:
    // 0x292448: 0xc0a4b0a  jal         func_292C28
label_29244c:
    if (ctx->pc == 0x29244Cu) {
        ctx->pc = 0x29244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292448u;
        // 0x29244c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292450u;
        goto label_292450;
    }
    ctx->pc = 0x292448u;
    SET_GPR_U32(ctx, 31, 0x292450u);
    ctx->pc = 0x29244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292448u;
    // 0x29244c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C28u, 0x292448u, 0x292450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292450u;
label_292450:
    // 0x292450: 0x1000019b  b           . + 4 + (0x19B << 2)
label_292454:
    if (ctx->pc == 0x292454u) {
        ctx->pc = 0x292454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292450u;
        // 0x292454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292458u;
        goto label_292458;
    }
    ctx->pc = 0x292450u;
    {
        const bool branch_taken_0x292450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292450u;
        // 0x292454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292450) {
            ctx->pc = 0x292AC0u;
            goto label_292ac0;
        }
    }
    ctx->pc = 0x292458u;
label_292458:
    // 0x292458: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_29245c:
    if (ctx->pc == 0x29245Cu) {
        ctx->pc = 0x29245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292458u;
        // 0x29245c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292460u;
        goto label_292460;
    }
    ctx->pc = 0x292458u;
    {
        const bool branch_taken_0x292458 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x29245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292458u;
        // 0x29245c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292458) {
            ctx->pc = 0x292490u;
            goto label_292490;
        }
    }
    ctx->pc = 0x292460u;
label_292460:
    // 0x292460: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x292460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_292464:
    // 0x292464: 0xc07e804  jal         func_1FA010
label_292468:
    if (ctx->pc == 0x292468u) {
        ctx->pc = 0x292468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292464u;
        // 0x292468: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29246Cu;
        goto label_29246c;
    }
    ctx->pc = 0x292464u;
    SET_GPR_U32(ctx, 31, 0x29246Cu);
    ctx->pc = 0x292468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292464u;
    // 0x292468: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x292464u, 0x29246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29246Cu;
label_29246c:
    // 0x29246c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x29246cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_292470:
    // 0x292470: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_292474:
    if (ctx->pc == 0x292474u) {
        ctx->pc = 0x292474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292470u;
        // 0x292474: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292478u;
        goto label_292478;
    }
    ctx->pc = 0x292470u;
    {
        const bool branch_taken_0x292470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292470u;
        // 0x292474: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292470) {
            ctx->pc = 0x292490u;
            goto label_292490;
        }
    }
    ctx->pc = 0x292478u;
label_292478:
    // 0x292478: 0xc0c73f8  jal         func_31CFE0
label_29247c:
    if (ctx->pc == 0x29247Cu) {
        ctx->pc = 0x292480u;
        goto label_292480;
    }
    ctx->pc = 0x292478u;
    SET_GPR_U32(ctx, 31, 0x292480u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x292478u, 0x292480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292480u;
label_292480:
    // 0x292480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_292484:
    // 0x292484: 0x240303d1  addiu       $v1, $zero, 0x3D1
    ctx->pc = 0x292484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
label_292488:
    // 0x292488: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x292488u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_29248c:
    // 0x29248c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29248cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_292490:
    // 0x292490: 0x16620063  bne         $s3, $v0, . + 4 + (0x63 << 2)
label_292494:
    if (ctx->pc == 0x292494u) {
        ctx->pc = 0x292494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292490u;
        // 0x292494: 0x240209c1  addiu       $v0, $zero, 0x9C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292498u;
        goto label_292498;
    }
    ctx->pc = 0x292490u;
    {
        const bool branch_taken_0x292490 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x292494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292490u;
        // 0x292494: 0x240209c1  addiu       $v0, $zero, 0x9C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292490) {
            ctx->pc = 0x292620u;
            goto label_292620;
        }
    }
    ctx->pc = 0x292498u;
label_292498:
    // 0x292498: 0x8ea30534  lw          $v1, 0x534($s5)
    ctx->pc = 0x292498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1332)));
label_29249c:
    // 0x29249c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2924a0:
    // 0x2924a0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2924a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_2924a4:
    // 0x2924a4: 0x628818  mult        $s1, $v1, $v0
    ctx->pc = 0x2924a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2924a8:
    // 0x2924a8: 0xc07e804  jal         func_1FA010
label_2924ac:
    if (ctx->pc == 0x2924ACu) {
        ctx->pc = 0x2924ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924A8u;
        // 0x2924ac: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2924B0u;
        goto label_2924b0;
    }
    ctx->pc = 0x2924A8u;
    SET_GPR_U32(ctx, 31, 0x2924B0u);
    ctx->pc = 0x2924ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924A8u;
    // 0x2924ac: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2924A8u, 0x2924B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924B0u;
label_2924b0:
    // 0x2924b0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2924b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2924b4:
    // 0x2924b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2924b8:
    // 0x2924b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2924bc:
    if (ctx->pc == 0x2924BCu) {
        ctx->pc = 0x2924BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924B8u;
        // 0x2924bc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2924C0u;
        goto label_2924c0;
    }
    ctx->pc = 0x2924B8u;
    {
        const bool branch_taken_0x2924b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2924BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924B8u;
        // 0x2924bc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924b8) {
            ctx->pc = 0x2924D8u;
            goto label_2924d8;
        }
    }
    ctx->pc = 0x2924C0u;
label_2924c0:
    // 0x2924c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2924c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2924c4:
    // 0x2924c4: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2924c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2924c8:
    // 0x2924c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2924c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2924cc:
    // 0x2924cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2924ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2924d0:
    // 0x2924d0: 0x800008  jr          $a0
label_2924d4:
    if (ctx->pc == 0x2924D4u) {
        ctx->pc = 0x2924D8u;
        goto label_2924d8;
    }
    ctx->pc = 0x2924D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2924D8u: goto label_2924d8;
            case 0x2924ECu: goto label_2924ec;
            case 0x29250Cu: goto label_29250c;
            case 0x29252Cu: goto label_29252c;
            case 0x29254Cu: goto label_29254c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2924D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2924D8u;
label_2924d8:
    // 0x2924d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2924d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2924dc:
    // 0x2924dc: 0x0  nop
    ctx->pc = 0x2924dcu;
    // NOP
label_2924e0:
    // 0x2924e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2924e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2924e4:
    // 0x2924e4: 0x10000021  b           . + 4 + (0x21 << 2)
label_2924e8:
    if (ctx->pc == 0x2924E8u) {
        ctx->pc = 0x2924ECu;
        goto label_2924ec;
    }
    ctx->pc = 0x2924E4u;
    {
        const bool branch_taken_0x2924e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924e4) {
            ctx->pc = 0x29256Cu;
            goto label_29256c;
        }
    }
    ctx->pc = 0x2924ECu;
label_2924ec:
    // 0x2924ec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2924ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2924f0:
    // 0x2924f0: 0x0  nop
    ctx->pc = 0x2924f0u;
    // NOP
label_2924f4:
    // 0x2924f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2924f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2924f8:
    // 0x2924f8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2924f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_2924fc:
    // 0x2924fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2924fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_292500:
    // 0x292500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292504:
    // 0x292504: 0x10000019  b           . + 4 + (0x19 << 2)
label_292508:
    if (ctx->pc == 0x292508u) {
        ctx->pc = 0x292508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292504u;
        // 0x292508: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29250Cu;
        goto label_29250c;
    }
    ctx->pc = 0x292504u;
    {
        const bool branch_taken_0x292504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292504u;
        // 0x292508: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292504) {
            ctx->pc = 0x29256Cu;
            goto label_29256c;
        }
    }
    ctx->pc = 0x29250Cu;
label_29250c:
    // 0x29250c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x29250cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292510:
    // 0x292510: 0x0  nop
    ctx->pc = 0x292510u;
    // NOP
label_292514:
    // 0x292514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_292518:
    // 0x292518: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x292518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_29251c:
    // 0x29251c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29251cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_292520:
    // 0x292520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292524:
    // 0x292524: 0x10000011  b           . + 4 + (0x11 << 2)
label_292528:
    if (ctx->pc == 0x292528u) {
        ctx->pc = 0x292528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292524u;
        // 0x292528: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29252Cu;
        goto label_29252c;
    }
    ctx->pc = 0x292524u;
    {
        const bool branch_taken_0x292524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292524u;
        // 0x292528: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292524) {
            ctx->pc = 0x29256Cu;
            goto label_29256c;
        }
    }
    ctx->pc = 0x29252Cu;
label_29252c:
    // 0x29252c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x29252cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292530:
    // 0x292530: 0x0  nop
    ctx->pc = 0x292530u;
    // NOP
label_292534:
    // 0x292534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_292538:
    // 0x292538: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x292538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_29253c:
    // 0x29253c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29253cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_292540:
    // 0x292540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292544:
    // 0x292544: 0x10000009  b           . + 4 + (0x9 << 2)
label_292548:
    if (ctx->pc == 0x292548u) {
        ctx->pc = 0x292548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292544u;
        // 0x292548: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29254Cu;
        goto label_29254c;
    }
    ctx->pc = 0x292544u;
    {
        const bool branch_taken_0x292544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292544u;
        // 0x292548: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292544) {
            ctx->pc = 0x29256Cu;
            goto label_29256c;
        }
    }
    ctx->pc = 0x29254Cu;
label_29254c:
    // 0x29254c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x29254cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292550:
    // 0x292550: 0x0  nop
    ctx->pc = 0x292550u;
    // NOP
label_292554:
    // 0x292554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_292558:
    // 0x292558: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x292558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_29255c:
    // 0x29255c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x29255cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_292560:
    // 0x292560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292564:
    // 0x292564: 0x0  nop
    ctx->pc = 0x292564u;
    // NOP
label_292568:
    // 0x292568: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x292568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29256c:
    // 0x29256c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29256cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_292570:
    // 0x292570: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x292570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_292574:
    // 0x292574: 0x26149b70  addiu       $s4, $s0, -0x6490
    ctx->pc = 0x292574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_292578:
    // 0x292578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29257c:
    // 0x29257c: 0xc07e99e  jal         func_1FA678
label_292580:
    if (ctx->pc == 0x292580u) {
        ctx->pc = 0x292580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29257Cu;
        // 0x292580: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292584u;
        goto label_292584;
    }
    ctx->pc = 0x29257Cu;
    SET_GPR_U32(ctx, 31, 0x292584u);
    ctx->pc = 0x292580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29257Cu;
    // 0x292580: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x29257Cu, 0x292584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292584u;
label_292584:
    // 0x292584: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x292584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_292588:
    // 0x292588: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29258c:
    if (ctx->pc == 0x29258Cu) {
        ctx->pc = 0x29258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292588u;
        // 0x29258c: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292590u;
        goto label_292590;
    }
    ctx->pc = 0x292588u;
    {
        const bool branch_taken_0x292588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292588u;
        // 0x29258c: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292588) {
            ctx->pc = 0x2925B4u;
            goto label_2925b4;
        }
    }
    ctx->pc = 0x292590u;
label_292590:
    // 0x292590: 0x9462ac94  lhu         $v0, -0x536C($v1)
    ctx->pc = 0x292590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294945940)));
label_292594:
    // 0x292594: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x292594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_292598:
    // 0x292598: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_29259c:
    if (ctx->pc == 0x29259Cu) {
        ctx->pc = 0x29259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292598u;
        // 0x29259c: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925A0u;
        goto label_2925a0;
    }
    ctx->pc = 0x292598u;
    {
        const bool branch_taken_0x292598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292598) {
            ctx->pc = 0x29259Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292598u;
            // 0x29259c: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2925B4u;
            goto label_2925b4;
        }
    }
    ctx->pc = 0x2925A0u;
label_2925a0:
    // 0x2925a0: 0xc07e99e  jal         func_1FA678
label_2925a4:
    if (ctx->pc == 0x2925A4u) {
        ctx->pc = 0x2925A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925A0u;
        // 0x2925a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925A8u;
        goto label_2925a8;
    }
    ctx->pc = 0x2925A0u;
    SET_GPR_U32(ctx, 31, 0x2925A8u);
    ctx->pc = 0x2925A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925A0u;
    // 0x2925a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x2925A0u, 0x2925A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925A8u;
label_2925a8:
    // 0x2925a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2925ac:
    if (ctx->pc == 0x2925ACu) {
        ctx->pc = 0x2925ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925A8u;
        // 0x2925ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925B0u;
        goto label_2925b0;
    }
    ctx->pc = 0x2925A8u;
    {
        const bool branch_taken_0x2925a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2925ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925A8u;
        // 0x2925ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925a8) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x2925B0u;
label_2925b0:
    // 0x2925b0: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2925b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2925b4:
    // 0x2925b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2925b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2925b8:
    // 0x2925b8: 0x52c20023  beql        $s6, $v0, . + 4 + (0x23 << 2)
label_2925bc:
    if (ctx->pc == 0x2925BCu) {
        ctx->pc = 0x2925BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925B8u;
        // 0x2925bc: 0xaea00534  sw          $zero, 0x534($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925C0u;
        goto label_2925c0;
    }
    ctx->pc = 0x2925B8u;
    {
        const bool branch_taken_0x2925b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2925b8) {
            ctx->pc = 0x2925BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925B8u;
            // 0x2925bc: 0xaea00534  sw          $zero, 0x534($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x2925C0u;
label_2925c0:
    // 0x2925c0: 0xc0c73f8  jal         func_31CFE0
label_2925c4:
    if (ctx->pc == 0x2925C4u) {
        ctx->pc = 0x2925C8u;
        goto label_2925c8;
    }
    ctx->pc = 0x2925C0u;
    SET_GPR_U32(ctx, 31, 0x2925C8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2925C0u, 0x2925C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925C8u;
label_2925c8:
    // 0x2925c8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2925c8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2925cc:
    // 0x2925cc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_2925d0:
    if (ctx->pc == 0x2925D0u) {
        ctx->pc = 0x2925D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925CCu;
        // 0x2925d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925D4u;
        goto label_2925d4;
    }
    ctx->pc = 0x2925CCu;
    {
        const bool branch_taken_0x2925cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925cc) {
            ctx->pc = 0x2925D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925CCu;
            // 0x2925d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2925D4u;
            goto label_2925d4;
        }
    }
    ctx->pc = 0x2925D4u;
label_2925d4:
    // 0x2925d4: 0x1810  mfhi        $v1
    ctx->pc = 0x2925d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2925d8:
    // 0x2925d8: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2925d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2925dc:
    // 0x2925dc: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_2925e0:
    if (ctx->pc == 0x2925E0u) {
        ctx->pc = 0x2925E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925DCu;
        // 0x2925e0: 0xaea00534  sw          $zero, 0x534($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925E4u;
        goto label_2925e4;
    }
    ctx->pc = 0x2925DCu;
    {
        const bool branch_taken_0x2925dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925dc) {
            ctx->pc = 0x2925E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925DCu;
            // 0x2925e0: 0xaea00534  sw          $zero, 0x534($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x2925E4u;
label_2925e4:
    // 0x2925e4: 0x8ea20534  lw          $v0, 0x534($s5)
    ctx->pc = 0x2925e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1332)));
label_2925e8:
    // 0x2925e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2925e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2925ec:
    // 0x2925ec: 0xc0c73f8  jal         func_31CFE0
label_2925f0:
    if (ctx->pc == 0x2925F0u) {
        ctx->pc = 0x2925F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925ECu;
        // 0x2925f0: 0xaea20534  sw          $v0, 0x534($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2925F4u;
        goto label_2925f4;
    }
    ctx->pc = 0x2925ECu;
    SET_GPR_U32(ctx, 31, 0x2925F4u);
    ctx->pc = 0x2925F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925ECu;
    // 0x2925f0: 0xaea20534  sw          $v0, 0x534($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2925ECu, 0x2925F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925F4u;
label_2925f4:
    // 0x2925f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2925f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2925f8:
    // 0x2925f8: 0x14400131  bnez        $v0, . + 4 + (0x131 << 2)
label_2925fc:
    if (ctx->pc == 0x2925FCu) {
        ctx->pc = 0x2925FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925F8u;
        // 0x2925fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292600u;
        goto label_292600;
    }
    ctx->pc = 0x2925F8u;
    {
        const bool branch_taken_0x2925f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2925FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925F8u;
        // 0x2925fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925f8) {
            ctx->pc = 0x292AC0u;
            goto label_292ac0;
        }
    }
    ctx->pc = 0x292600u;
label_292600:
    // 0x292600: 0x241003d6  addiu       $s0, $zero, 0x3D6
    ctx->pc = 0x292600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 982));
label_292604:
    // 0x292604: 0x240403c4  addiu       $a0, $zero, 0x3C4
    ctx->pc = 0x292604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_292608:
    // 0x292608: 0x216200a  movz        $a0, $s0, $s6
    ctx->pc = 0x292608u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_29260c:
    // 0x29260c: 0xc0c3ea6  jal         func_30FA98
label_292610:
    if (ctx->pc == 0x292610u) {
        ctx->pc = 0x292610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29260Cu;
        // 0x292610: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292614u;
        goto label_292614;
    }
    ctx->pc = 0x29260Cu;
    SET_GPR_U32(ctx, 31, 0x292614u);
    ctx->pc = 0x292610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29260Cu;
    // 0x292610: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x29260Cu, 0x292614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292614u;
label_292614:
    // 0x292614: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x292614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292618:
    // 0x292618: 0x1000000b  b           . + 4 + (0xB << 2)
label_29261c:
    if (ctx->pc == 0x29261Cu) {
        ctx->pc = 0x29261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292618u;
        // 0x29261c: 0xaea00534  sw          $zero, 0x534($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292620u;
        goto label_292620;
    }
    ctx->pc = 0x292618u;
    {
        const bool branch_taken_0x292618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292618u;
        // 0x29261c: 0xaea00534  sw          $zero, 0x534($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292618) {
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x292620u;
label_292620:
    // 0x292620: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_292624:
    if (ctx->pc == 0x292624u) {
        ctx->pc = 0x292624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292620u;
        // 0x292624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292628u;
        goto label_292628;
    }
    ctx->pc = 0x292620u;
    {
        const bool branch_taken_0x292620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x292624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292620u;
        // 0x292624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292620) {
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x292628u;
label_292628:
    // 0x292628: 0xc0c3ea6  jal         func_30FA98
label_29262c:
    if (ctx->pc == 0x29262Cu) {
        ctx->pc = 0x29262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292628u;
        // 0x29262c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292630u;
        goto label_292630;
    }
    ctx->pc = 0x292628u;
    SET_GPR_U32(ctx, 31, 0x292630u);
    ctx->pc = 0x29262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292628u;
    // 0x29262c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x292628u, 0x292630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292630u;
label_292630:
    // 0x292630: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x292630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292634:
    // 0x292634: 0x2a6203dd  slti        $v0, $s3, 0x3DD
    ctx->pc = 0x292634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)989) ? 1 : 0);
label_292638:
    // 0x292638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29263c:
    if (ctx->pc == 0x29263Cu) {
        ctx->pc = 0x29263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292638u;
        // 0x29263c: 0x2a6203da  slti        $v0, $s3, 0x3DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)986) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292640u;
        goto label_292640;
    }
    ctx->pc = 0x292638u;
    {
        const bool branch_taken_0x292638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292638u;
        // 0x29263c: 0x2a6203da  slti        $v0, $s3, 0x3DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)986) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292638) {
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x292640u;
label_292640:
    // 0x292640: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_292644:
    if (ctx->pc == 0x292644u) {
        ctx->pc = 0x292644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292640u;
        // 0x292644: 0xae500560  sw          $s0, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292648u;
        goto label_292648;
    }
    ctx->pc = 0x292640u;
    {
        const bool branch_taken_0x292640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292640) {
            ctx->pc = 0x292644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292640u;
            // 0x292644: 0xae500560  sw          $s0, 0x560($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x292648u;
label_292648:
    // 0x292648: 0x564000d7  bnel        $s2, $zero, . + 4 + (0xD7 << 2)
label_29264c:
    if (ctx->pc == 0x29264Cu) {
        ctx->pc = 0x29264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292648u;
        // 0x29264c: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292650u;
        goto label_292650;
    }
    ctx->pc = 0x292648u;
    {
        const bool branch_taken_0x292648 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x292648) {
            ctx->pc = 0x29264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292648u;
            // 0x29264c: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2929A8u;
            goto label_2929a8;
        }
    }
    ctx->pc = 0x292650u;
label_292650:
    // 0x292650: 0xc0c7400  jal         func_31D000
label_292654:
    if (ctx->pc == 0x292654u) {
        ctx->pc = 0x292654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292650u;
        // 0x292654: 0x241003c1  addiu       $s0, $zero, 0x3C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292658u;
        goto label_292658;
    }
    ctx->pc = 0x292650u;
    SET_GPR_U32(ctx, 31, 0x292658u);
    ctx->pc = 0x292654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292650u;
    // 0x292654: 0x241003c1  addiu       $s0, $zero, 0x3C1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x292650u, 0x292658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292658u;
label_292658:
    // 0x292658: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_29265c:
    // 0x29265c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29265cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292660:
    // 0x292660: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x292660u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_292664:
    // 0x292664: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x292664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292668:
    // 0x292668: 0x0  nop
    ctx->pc = 0x292668u;
    // NOP
label_29266c:
    // 0x29266c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292670:
    if (ctx->pc == 0x292670u) {
        ctx->pc = 0x292670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29266Cu;
        // 0x292670: 0x241003e0  addiu       $s0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292674u;
        goto label_292674;
    }
    ctx->pc = 0x29266Cu;
    {
        const bool branch_taken_0x29266c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29266c) {
            ctx->pc = 0x292670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29266Cu;
            // 0x292670: 0x241003e0  addiu       $s0, $zero, 0x3E0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292674u;
            goto label_292674;
        }
    }
    ctx->pc = 0x292674u;
label_292674:
    // 0x292674: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x292674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_292678:
    // 0x292678: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x292678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_29267c:
    // 0x29267c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29267cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_292680:
    // 0x292680: 0x0  nop
    ctx->pc = 0x292680u;
    // NOP
label_292684:
    // 0x292684: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x292684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292688:
    // 0x292688: 0x0  nop
    ctx->pc = 0x292688u;
    // NOP
label_29268c:
    // 0x29268c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292690:
    if (ctx->pc == 0x292690u) {
        ctx->pc = 0x292690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29268Cu;
        // 0x292690: 0x241003e2  addiu       $s0, $zero, 0x3E2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 994));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292694u;
        goto label_292694;
    }
    ctx->pc = 0x29268Cu;
    {
        const bool branch_taken_0x29268c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29268c) {
            ctx->pc = 0x292690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29268Cu;
            // 0x292690: 0x241003e2  addiu       $s0, $zero, 0x3E2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 994));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292694u;
            goto label_292694;
        }
    }
    ctx->pc = 0x292694u;
label_292694:
    // 0x292694: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x292694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_292698:
    // 0x292698: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x292698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_29269c:
    // 0x29269c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29269cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2926a0:
    // 0x2926a0: 0x0  nop
    ctx->pc = 0x2926a0u;
    // NOP
label_2926a4:
    // 0x2926a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2926a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2926a8:
    // 0x2926a8: 0x0  nop
    ctx->pc = 0x2926a8u;
    // NOP
label_2926ac:
    // 0x2926ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2926b0:
    if (ctx->pc == 0x2926B0u) {
        ctx->pc = 0x2926B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926ACu;
        // 0x2926b0: 0x241003df  addiu       $s0, $zero, 0x3DF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2926B4u;
        goto label_2926b4;
    }
    ctx->pc = 0x2926ACu;
    {
        const bool branch_taken_0x2926ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2926ac) {
            ctx->pc = 0x2926B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2926ACu;
            // 0x2926b0: 0x241003df  addiu       $s0, $zero, 0x3DF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2926B4u;
            goto label_2926b4;
        }
    }
    ctx->pc = 0x2926B4u;
label_2926b4:
    // 0x2926b4: 0x240203c1  addiu       $v0, $zero, 0x3C1
    ctx->pc = 0x2926b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
label_2926b8:
    // 0x2926b8: 0x16020026  bne         $s0, $v0, . + 4 + (0x26 << 2)
label_2926bc:
    if (ctx->pc == 0x2926BCu) {
        ctx->pc = 0x2926BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926B8u;
        // 0x2926bc: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2926C0u;
        goto label_2926c0;
    }
    ctx->pc = 0x2926B8u;
    {
        const bool branch_taken_0x2926b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2926BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926B8u;
        // 0x2926bc: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926b8) {
            ctx->pc = 0x292754u;
            goto label_292754;
        }
    }
    ctx->pc = 0x2926C0u;
label_2926c0:
    // 0x2926c0: 0xc0c7400  jal         func_31D000
label_2926c4:
    if (ctx->pc == 0x2926C4u) {
        ctx->pc = 0x2926C8u;
        goto label_2926c8;
    }
    ctx->pc = 0x2926C0u;
    SET_GPR_U32(ctx, 31, 0x2926C8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x2926C0u, 0x2926C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926C8u;
label_2926c8:
    // 0x2926c8: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_2926cc:
    // 0x2926cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2926ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2926d0:
    // 0x2926d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2926d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2926d4:
    // 0x2926d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2926d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2926d8:
    // 0x2926d8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2926d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2926dc:
    // 0x2926dc: 0x0  nop
    ctx->pc = 0x2926dcu;
    // NOP
label_2926e0:
    // 0x2926e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2926e4:
    if (ctx->pc == 0x2926E4u) {
        ctx->pc = 0x2926E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926E0u;
        // 0x2926e4: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2926E8u;
        goto label_2926e8;
    }
    ctx->pc = 0x2926E0u;
    {
        const bool branch_taken_0x2926e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2926e0) {
            ctx->pc = 0x2926E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2926E0u;
            // 0x2926e4: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2926E8u;
            goto label_2926e8;
        }
    }
    ctx->pc = 0x2926E8u;
label_2926e8:
    // 0x2926e8: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x2926e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2926ec:
    // 0x2926ec: 0x0  nop
    ctx->pc = 0x2926ecu;
    // NOP
label_2926f0:
    // 0x2926f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2926f4:
    if (ctx->pc == 0x2926F4u) {
        ctx->pc = 0x2926F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926F0u;
        // 0x2926f4: 0x241003d1  addiu       $s0, $zero, 0x3D1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2926F8u;
        goto label_2926f8;
    }
    ctx->pc = 0x2926F0u;
    {
        const bool branch_taken_0x2926f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2926f0) {
            ctx->pc = 0x2926F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2926F0u;
            // 0x2926f4: 0x241003d1  addiu       $s0, $zero, 0x3D1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2926F8u;
            goto label_2926f8;
        }
    }
    ctx->pc = 0x2926F8u;
label_2926f8:
    // 0x2926f8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2926fc:
    // 0x2926fc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2926fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_292700:
    // 0x292700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292704:
    // 0x292704: 0x0  nop
    ctx->pc = 0x292704u;
    // NOP
label_292708:
    // 0x292708: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x292708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29270c:
    // 0x29270c: 0x0  nop
    ctx->pc = 0x29270cu;
    // NOP
label_292710:
    // 0x292710: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292714:
    if (ctx->pc == 0x292714u) {
        ctx->pc = 0x292714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292710u;
        // 0x292714: 0x241003d0  addiu       $s0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292718u;
        goto label_292718;
    }
    ctx->pc = 0x292710u;
    {
        const bool branch_taken_0x292710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292710) {
            ctx->pc = 0x292714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292710u;
            // 0x292714: 0x241003d0  addiu       $s0, $zero, 0x3D0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292718u;
            goto label_292718;
        }
    }
    ctx->pc = 0x292718u;
label_292718:
    // 0x292718: 0x240203d0  addiu       $v0, $zero, 0x3D0
    ctx->pc = 0x292718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
label_29271c:
    // 0x29271c: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_292720:
    if (ctx->pc == 0x292720u) {
        ctx->pc = 0x292720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29271Cu;
        // 0x292720: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292724u;
        goto label_292724;
    }
    ctx->pc = 0x29271Cu;
    {
        const bool branch_taken_0x29271c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x292720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29271Cu;
        // 0x292720: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29271c) {
            ctx->pc = 0x292754u;
            goto label_292754;
        }
    }
    ctx->pc = 0x292724u;
label_292724:
    // 0x292724: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_292728:
    // 0x292728: 0xc07e804  jal         func_1FA010
label_29272c:
    if (ctx->pc == 0x29272Cu) {
        ctx->pc = 0x29272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292728u;
        // 0x29272c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292730u;
        goto label_292730;
    }
    ctx->pc = 0x292728u;
    SET_GPR_U32(ctx, 31, 0x292730u);
    ctx->pc = 0x29272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292728u;
    // 0x29272c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x292728u, 0x292730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292730u;
label_292730:
    // 0x292730: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x292730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_292734:
    // 0x292734: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_292738:
    if (ctx->pc == 0x292738u) {
        ctx->pc = 0x292738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292734u;
        // 0x292738: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29273Cu;
        goto label_29273c;
    }
    ctx->pc = 0x292734u;
    {
        const bool branch_taken_0x292734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292734u;
        // 0x292738: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292734) {
            ctx->pc = 0x292754u;
            goto label_292754;
        }
    }
    ctx->pc = 0x29273Cu;
label_29273c:
    // 0x29273c: 0xc0c73f8  jal         func_31CFE0
label_292740:
    if (ctx->pc == 0x292740u) {
        ctx->pc = 0x292744u;
        goto label_292744;
    }
    ctx->pc = 0x29273Cu;
    SET_GPR_U32(ctx, 31, 0x292744u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x29273Cu, 0x292744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292744u;
label_292744:
    // 0x292744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_292748:
    // 0x292748: 0x240303d1  addiu       $v1, $zero, 0x3D1
    ctx->pc = 0x292748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
label_29274c:
    // 0x29274c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x29274cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_292750:
    // 0x292750: 0x240203e0  addiu       $v0, $zero, 0x3E0
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
label_292754:
    // 0x292754: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_292758:
    if (ctx->pc == 0x292758u) {
        ctx->pc = 0x292758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292754u;
        // 0x292758: 0x240203df  addiu       $v0, $zero, 0x3DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29275Cu;
        goto label_29275c;
    }
    ctx->pc = 0x292754u;
    {
        const bool branch_taken_0x292754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x292758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292754u;
        // 0x292758: 0x240203df  addiu       $v0, $zero, 0x3DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292754) {
            ctx->pc = 0x2927A4u;
            goto label_2927a4;
        }
    }
    ctx->pc = 0x29275Cu;
label_29275c:
    // 0x29275c: 0xc0c7400  jal         func_31D000
label_292760:
    if (ctx->pc == 0x292760u) {
        ctx->pc = 0x292764u;
        goto label_292764;
    }
    ctx->pc = 0x29275Cu;
    SET_GPR_U32(ctx, 31, 0x292764u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x29275Cu, 0x292764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292764u;
label_292764:
    // 0x292764: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x292764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_292768:
    // 0x292768: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29276c:
    // 0x29276c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x29276cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_292770:
    // 0x292770: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x292770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292774:
    // 0x292774: 0x0  nop
    ctx->pc = 0x292774u;
    // NOP
label_292778:
    // 0x292778: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_29277c:
    if (ctx->pc == 0x29277Cu) {
        ctx->pc = 0x29277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292778u;
        // 0x29277c: 0x241003e1  addiu       $s0, $zero, 0x3E1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 993));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292780u;
        goto label_292780;
    }
    ctx->pc = 0x292778u;
    {
        const bool branch_taken_0x292778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292778) {
            ctx->pc = 0x29277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292778u;
            // 0x29277c: 0x241003e1  addiu       $s0, $zero, 0x3E1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 993));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292780u;
            goto label_292780;
        }
    }
    ctx->pc = 0x292780u;
label_292780:
    // 0x292780: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x292780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_292784:
    // 0x292784: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x292784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_292788:
    // 0x292788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29278c:
    // 0x29278c: 0x0  nop
    ctx->pc = 0x29278cu;
    // NOP
label_292790:
    // 0x292790: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x292790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292794:
    // 0x292794: 0x0  nop
    ctx->pc = 0x292794u;
    // NOP
label_292798:
    // 0x292798: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_29279c:
    if (ctx->pc == 0x29279Cu) {
        ctx->pc = 0x29279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292798u;
        // 0x29279c: 0x241003de  addiu       $s0, $zero, 0x3DE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 990));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2927A0u;
        goto label_2927a0;
    }
    ctx->pc = 0x292798u;
    {
        const bool branch_taken_0x292798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292798) {
            ctx->pc = 0x29279Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292798u;
            // 0x29279c: 0x241003de  addiu       $s0, $zero, 0x3DE (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 990));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2927A0u;
            goto label_2927a0;
        }
    }
    ctx->pc = 0x2927A0u;
label_2927a0:
    // 0x2927a0: 0x240203df  addiu       $v0, $zero, 0x3DF
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
label_2927a4:
    // 0x2927a4: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
label_2927a8:
    if (ctx->pc == 0x2927A8u) {
        ctx->pc = 0x2927A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927A4u;
        // 0x2927a8: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2927ACu;
        goto label_2927ac;
    }
    ctx->pc = 0x2927A4u;
    {
        const bool branch_taken_0x2927a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2927A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927A4u;
        // 0x2927a8: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927a4) {
            ctx->pc = 0x292804u;
            goto label_292804;
        }
    }
    ctx->pc = 0x2927ACu;
label_2927ac:
    // 0x2927ac: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2927acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2927b0:
    // 0x2927b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2927b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2927b4:
    // 0x2927b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2927b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2927b8:
    // 0x2927b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2927b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2927bc:
    // 0x2927bc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2927bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2927c0:
    // 0x2927c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2927c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2927c4:
    // 0x2927c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2927c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2927c8:
    // 0x2927c8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2927c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2927cc:
    // 0x2927cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2927ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2927d0:
    // 0x2927d0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2927d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2927d4:
    // 0x2927d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2927d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2927d8:
    // 0x2927d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2927d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2927dc:
    // 0x2927dc: 0xc0a4404  jal         func_291010
label_2927e0:
    if (ctx->pc == 0x2927E0u) {
        ctx->pc = 0x2927E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927DCu;
        // 0x2927e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2927E4u;
        goto label_2927e4;
    }
    ctx->pc = 0x2927DCu;
    SET_GPR_U32(ctx, 31, 0x2927E4u);
    ctx->pc = 0x2927E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927DCu;
    // 0x2927e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x2927DCu, 0x2927E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927E4u;
label_2927e4:
    // 0x2927e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2927e8:
    if (ctx->pc == 0x2927E8u) {
        ctx->pc = 0x2927E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927E4u;
        // 0x2927e8: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2927ECu;
        goto label_2927ec;
    }
    ctx->pc = 0x2927E4u;
    {
        const bool branch_taken_0x2927e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2927E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927E4u;
        // 0x2927e8: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927e4) {
            ctx->pc = 0x292804u;
            goto label_292804;
        }
    }
    ctx->pc = 0x2927ECu;
label_2927ec:
    // 0x2927ec: 0xc0c73f8  jal         func_31CFE0
label_2927f0:
    if (ctx->pc == 0x2927F0u) {
        ctx->pc = 0x2927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927ECu;
        // 0x2927f0: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2927F4u;
        goto label_2927f4;
    }
    ctx->pc = 0x2927ECu;
    SET_GPR_U32(ctx, 31, 0x2927F4u);
    ctx->pc = 0x2927F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927ECu;
    // 0x2927f0: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2927ECu, 0x2927F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927F4u;
label_2927f4:
    // 0x2927f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2927f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2927f8:
    // 0x2927f8: 0x240303e0  addiu       $v1, $zero, 0x3E0
    ctx->pc = 0x2927f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
label_2927fc:
    // 0x2927fc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2927fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_292800:
    // 0x292800: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x292800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_292804:
    // 0x292804: 0x9462ac94  lhu         $v0, -0x536C($v1)
    ctx->pc = 0x292804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294945940)));
label_292808:
    // 0x292808: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x292808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_29280c:
    // 0x29280c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_292810:
    if (ctx->pc == 0x292810u) {
        ctx->pc = 0x292810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29280Cu;
        // 0x292810: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292814u;
        goto label_292814;
    }
    ctx->pc = 0x29280Cu;
    {
        const bool branch_taken_0x29280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29280Cu;
        // 0x292810: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29280c) {
            ctx->pc = 0x2928C0u;
            goto label_2928c0;
        }
    }
    ctx->pc = 0x292814u;
label_292814:
    // 0x292814: 0xc07e99e  jal         func_1FA678
label_292818:
    if (ctx->pc == 0x292818u) {
        ctx->pc = 0x292818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292814u;
        // 0x292818: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29281Cu;
        goto label_29281c;
    }
    ctx->pc = 0x292814u;
    SET_GPR_U32(ctx, 31, 0x29281Cu);
    ctx->pc = 0x292818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292814u;
    // 0x292818: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x292814u, 0x29281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29281Cu;
label_29281c:
    // 0x29281c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x29281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_292820:
    // 0x292820: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_292824:
    if (ctx->pc == 0x292824u) {
        ctx->pc = 0x292828u;
        goto label_292828;
    }
    ctx->pc = 0x292820u;
    {
        const bool branch_taken_0x292820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292820) {
            ctx->pc = 0x2928C0u;
            goto label_2928c0;
        }
    }
    ctx->pc = 0x292828u;
label_292828:
    // 0x292828: 0xc0c7400  jal         func_31D000
label_29282c:
    if (ctx->pc == 0x29282Cu) {
        ctx->pc = 0x292830u;
        goto label_292830;
    }
    ctx->pc = 0x292828u;
    SET_GPR_U32(ctx, 31, 0x292830u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x292828u, 0x292830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292830u;
label_292830:
    // 0x292830: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x292830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_292834:
    // 0x292834: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x292834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_292838:
    // 0x292838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29283c:
    // 0x29283c: 0x0  nop
    ctx->pc = 0x29283cu;
    // NOP
label_292840:
    // 0x292840: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x292840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292844:
    // 0x292844: 0x0  nop
    ctx->pc = 0x292844u;
    // NOP
label_292848:
    // 0x292848: 0x45020049  bc1fl       . + 4 + (0x49 << 2)
label_29284c:
    if (ctx->pc == 0x29284Cu) {
        ctx->pc = 0x29284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292848u;
        // 0x29284c: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292850u;
        goto label_292850;
    }
    ctx->pc = 0x292848u;
    {
        const bool branch_taken_0x292848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292848) {
            ctx->pc = 0x29284Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292848u;
            // 0x29284c: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292970u;
            goto label_292970;
        }
    }
    ctx->pc = 0x292850u;
label_292850:
    // 0x292850: 0xc0c7400  jal         func_31D000
label_292854:
    if (ctx->pc == 0x292854u) {
        ctx->pc = 0x292854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292850u;
        // 0x292854: 0x241003c1  addiu       $s0, $zero, 0x3C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292858u;
        goto label_292858;
    }
    ctx->pc = 0x292850u;
    SET_GPR_U32(ctx, 31, 0x292858u);
    ctx->pc = 0x292854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292850u;
    // 0x292854: 0x241003c1  addiu       $s0, $zero, 0x3C1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x292850u, 0x292858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292858u;
label_292858:
    // 0x292858: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_29285c:
    // 0x29285c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29285cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_292860:
    // 0x292860: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292864:
    // 0x292864: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x292864u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_292868:
    // 0x292868: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x292868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29286c:
    // 0x29286c: 0x0  nop
    ctx->pc = 0x29286cu;
    // NOP
label_292870:
    // 0x292870: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292874:
    if (ctx->pc == 0x292874u) {
        ctx->pc = 0x292874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292870u;
        // 0x292874: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292878u;
        goto label_292878;
    }
    ctx->pc = 0x292870u;
    {
        const bool branch_taken_0x292870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292870) {
            ctx->pc = 0x292874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292870u;
            // 0x292874: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292878u;
            goto label_292878;
        }
    }
    ctx->pc = 0x292878u;
label_292878:
    // 0x292878: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_29287c:
    // 0x29287c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x29287cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_292880:
    // 0x292880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292884:
    // 0x292884: 0x0  nop
    ctx->pc = 0x292884u;
    // NOP
label_292888:
    // 0x292888: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x292888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29288c:
    // 0x29288c: 0x0  nop
    ctx->pc = 0x29288cu;
    // NOP
label_292890:
    // 0x292890: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292894:
    if (ctx->pc == 0x292894u) {
        ctx->pc = 0x292894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292890u;
        // 0x292894: 0x241003d1  addiu       $s0, $zero, 0x3D1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292898u;
        goto label_292898;
    }
    ctx->pc = 0x292890u;
    {
        const bool branch_taken_0x292890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292890) {
            ctx->pc = 0x292894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292890u;
            // 0x292894: 0x241003d1  addiu       $s0, $zero, 0x3D1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292898u;
            goto label_292898;
        }
    }
    ctx->pc = 0x292898u;
label_292898:
    // 0x292898: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_29289c:
    // 0x29289c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x29289cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2928a0:
    // 0x2928a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2928a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2928a4:
    // 0x2928a4: 0x0  nop
    ctx->pc = 0x2928a4u;
    // NOP
label_2928a8:
    // 0x2928a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2928a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2928ac:
    // 0x2928ac: 0x0  nop
    ctx->pc = 0x2928acu;
    // NOP
label_2928b0:
    // 0x2928b0: 0x4503002e  bc1tl       . + 4 + (0x2E << 2)
label_2928b4:
    if (ctx->pc == 0x2928B4u) {
        ctx->pc = 0x2928B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928B0u;
        // 0x2928b4: 0x241003d0  addiu       $s0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2928B8u;
        goto label_2928b8;
    }
    ctx->pc = 0x2928B0u;
    {
        const bool branch_taken_0x2928b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2928b0) {
            ctx->pc = 0x2928B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2928B0u;
            // 0x2928b4: 0x241003d0  addiu       $s0, $zero, 0x3D0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29296Cu;
            goto label_29296c;
        }
    }
    ctx->pc = 0x2928B8u;
label_2928b8:
    // 0x2928b8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2928bc:
    if (ctx->pc == 0x2928BCu) {
        ctx->pc = 0x2928BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928B8u;
        // 0x2928bc: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2928C0u;
        goto label_2928c0;
    }
    ctx->pc = 0x2928B8u;
    {
        const bool branch_taken_0x2928b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928B8u;
        // 0x2928bc: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928b8) {
            ctx->pc = 0x292970u;
            goto label_292970;
        }
    }
    ctx->pc = 0x2928C0u;
label_2928c0:
    // 0x2928c0: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
label_2928c4:
    if (ctx->pc == 0x2928C4u) {
        ctx->pc = 0x2928C8u;
        goto label_2928c8;
    }
    ctx->pc = 0x2928C0u;
    {
        const bool branch_taken_0x2928c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2928c0) {
            ctx->pc = 0x292924u;
            goto label_292924;
        }
    }
    ctx->pc = 0x2928C8u;
label_2928c8:
    // 0x2928c8: 0xc0c7400  jal         func_31D000
label_2928cc:
    if (ctx->pc == 0x2928CCu) {
        ctx->pc = 0x2928D0u;
        goto label_2928d0;
    }
    ctx->pc = 0x2928C8u;
    SET_GPR_U32(ctx, 31, 0x2928D0u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x2928C8u, 0x2928D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928D0u;
label_2928d0:
    // 0x2928d0: 0x240209c1  addiu       $v0, $zero, 0x9C1
    ctx->pc = 0x2928d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
label_2928d4:
    // 0x2928d4: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
label_2928d8:
    if (ctx->pc == 0x2928D8u) {
        ctx->pc = 0x2928D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928D4u;
        // 0x2928d8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2928DCu;
        goto label_2928dc;
    }
    ctx->pc = 0x2928D4u;
    {
        const bool branch_taken_0x2928d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2928D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928D4u;
        // 0x2928d8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928d4) {
            ctx->pc = 0x292900u;
            goto label_292900;
        }
    }
    ctx->pc = 0x2928DCu;
label_2928dc:
    // 0x2928dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2928dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2928e0:
    // 0x2928e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2928e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2928e4:
    // 0x2928e4: 0x0  nop
    ctx->pc = 0x2928e4u;
    // NOP
label_2928e8:
    // 0x2928e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2928e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2928ec:
    // 0x2928ec: 0x0  nop
    ctx->pc = 0x2928ecu;
    // NOP
label_2928f0:
    // 0x2928f0: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_2928f4:
    if (ctx->pc == 0x2928F4u) {
        ctx->pc = 0x2928F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928F0u;
        // 0x2928f4: 0x241003c3  addiu       $s0, $zero, 0x3C3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 963));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2928F8u;
        goto label_2928f8;
    }
    ctx->pc = 0x2928F0u;
    {
        const bool branch_taken_0x2928f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2928f0) {
            ctx->pc = 0x2928F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2928F0u;
            // 0x2928f4: 0x241003c3  addiu       $s0, $zero, 0x3C3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 963));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29296Cu;
            goto label_29296c;
        }
    }
    ctx->pc = 0x2928F8u;
label_2928f8:
    // 0x2928f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2928fc:
    if (ctx->pc == 0x2928FCu) {
        ctx->pc = 0x2928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928F8u;
        // 0x2928fc: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292900u;
        goto label_292900;
    }
    ctx->pc = 0x2928F8u;
    {
        const bool branch_taken_0x2928f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928F8u;
        // 0x2928fc: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928f8) {
            ctx->pc = 0x292970u;
            goto label_292970;
        }
    }
    ctx->pc = 0x292900u;
label_292900:
    // 0x292900: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x292900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_292904:
    // 0x292904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292908:
    // 0x292908: 0x0  nop
    ctx->pc = 0x292908u;
    // NOP
label_29290c:
    // 0x29290c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x29290cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292910:
    // 0x292910: 0x0  nop
    ctx->pc = 0x292910u;
    // NOP
label_292914:
    // 0x292914: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_292918:
    if (ctx->pc == 0x292918u) {
        ctx->pc = 0x292918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292914u;
        // 0x292918: 0x241003c4  addiu       $s0, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29291Cu;
        goto label_29291c;
    }
    ctx->pc = 0x292914u;
    {
        const bool branch_taken_0x292914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292914) {
            ctx->pc = 0x292918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292914u;
            // 0x292918: 0x241003c4  addiu       $s0, $zero, 0x3C4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29296Cu;
            goto label_29296c;
        }
    }
    ctx->pc = 0x29291Cu;
label_29291c:
    // 0x29291c: 0x10000014  b           . + 4 + (0x14 << 2)
label_292920:
    if (ctx->pc == 0x292920u) {
        ctx->pc = 0x292920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29291Cu;
        // 0x292920: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292924u;
        goto label_292924;
    }
    ctx->pc = 0x29291Cu;
    {
        const bool branch_taken_0x29291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29291Cu;
        // 0x292920: 0x8ea205a8  lw          $v0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29291c) {
            ctx->pc = 0x292970u;
            goto label_292970;
        }
    }
    ctx->pc = 0x292924u;
label_292924:
    // 0x292924: 0xc0c7400  jal         func_31D000
label_292928:
    if (ctx->pc == 0x292928u) {
        ctx->pc = 0x29292Cu;
        goto label_29292c;
    }
    ctx->pc = 0x292924u;
    SET_GPR_U32(ctx, 31, 0x29292Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x292924u, 0x29292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29292Cu;
label_29292c:
    // 0x29292c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x29292cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_292930:
    // 0x292930: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x292930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_292934:
    // 0x292934: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292938:
    // 0x292938: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x292938u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_29293c:
    // 0x29293c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29293cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292940:
    // 0x292940: 0x0  nop
    ctx->pc = 0x292940u;
    // NOP
label_292944:
    // 0x292944: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292948:
    if (ctx->pc == 0x292948u) {
        ctx->pc = 0x292948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292944u;
        // 0x292948: 0x241003d7  addiu       $s0, $zero, 0x3D7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29294Cu;
        goto label_29294c;
    }
    ctx->pc = 0x292944u;
    {
        const bool branch_taken_0x292944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292944) {
            ctx->pc = 0x292948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292944u;
            // 0x292948: 0x241003d7  addiu       $s0, $zero, 0x3D7 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29294Cu;
            goto label_29294c;
        }
    }
    ctx->pc = 0x29294Cu;
label_29294c:
    // 0x29294c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x29294cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_292950:
    // 0x292950: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x292950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_292954:
    // 0x292954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292958:
    // 0x292958: 0x0  nop
    ctx->pc = 0x292958u;
    // NOP
label_29295c:
    // 0x29295c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x29295cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292960:
    // 0x292960: 0x0  nop
    ctx->pc = 0x292960u;
    // NOP
label_292964:
    // 0x292964: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_292968:
    if (ctx->pc == 0x292968u) {
        ctx->pc = 0x292968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292964u;
        // 0x292968: 0x241003d8  addiu       $s0, $zero, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29296Cu;
        goto label_29296c;
    }
    ctx->pc = 0x292964u;
    {
        const bool branch_taken_0x292964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292964) {
            ctx->pc = 0x292968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292964u;
            // 0x292968: 0x241003d8  addiu       $s0, $zero, 0x3D8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29296Cu;
            goto label_29296c;
        }
    }
    ctx->pc = 0x29296Cu;
label_29296c:
    // 0x29296c: 0x8ea205a8  lw          $v0, 0x5A8($s5)
    ctx->pc = 0x29296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
label_292970:
    // 0x292970: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_292974:
    if (ctx->pc == 0x292974u) {
        ctx->pc = 0x292974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292970u;
        // 0x292974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292978u;
        goto label_292978;
    }
    ctx->pc = 0x292970u;
    {
        const bool branch_taken_0x292970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x292974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292970u;
        // 0x292974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292970) {
            ctx->pc = 0x292990u;
            goto label_292990;
        }
    }
    ctx->pc = 0x292978u;
label_292978:
    // 0x292978: 0xc0c73f8  jal         func_31CFE0
label_29297c:
    if (ctx->pc == 0x29297Cu) {
        ctx->pc = 0x29297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292978u;
        // 0x29297c: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292980u;
        goto label_292980;
    }
    ctx->pc = 0x292978u;
    SET_GPR_U32(ctx, 31, 0x292980u);
    ctx->pc = 0x29297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292978u;
    // 0x29297c: 0x241003c8  addiu       $s0, $zero, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x292978u, 0x292980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292980u;
label_292980:
    // 0x292980: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_292984:
    // 0x292984: 0x240303c1  addiu       $v1, $zero, 0x3C1
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
label_292988:
    // 0x292988: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x292988u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_29298c:
    // 0x29298c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292990:
    // 0x292990: 0xc0c3ea6  jal         func_30FA98
label_292994:
    if (ctx->pc == 0x292994u) {
        ctx->pc = 0x292994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292990u;
        // 0x292994: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292998u;
        goto label_292998;
    }
    ctx->pc = 0x292990u;
    SET_GPR_U32(ctx, 31, 0x292998u);
    ctx->pc = 0x292994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292990u;
    // 0x292994: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x292990u, 0x292998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292998u;
label_292998:
    // 0x292998: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x292998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29299c:
    // 0x29299c: 0x1240feac  beqz        $s2, . + 4 + (-0x154 << 2)
label_2929a0:
    if (ctx->pc == 0x2929A0u) {
        ctx->pc = 0x2929A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29299Cu;
        // 0x2929a0: 0xaeb005a8  sw          $s0, 0x5A8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1448), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2929A4u;
        goto label_2929a4;
    }
    ctx->pc = 0x29299Cu;
    {
        const bool branch_taken_0x29299c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29299Cu;
        // 0x2929a0: 0xaeb005a8  sw          $s0, 0x5A8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1448), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29299c) {
            ctx->pc = 0x292450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292450;
        }
    }
    ctx->pc = 0x2929A4u;
label_2929a4:
    // 0x2929a4: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x2929a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_2929a8:
    // 0x2929a8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2929a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2929ac:
    // 0x2929ac: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2929acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2929b0:
    // 0x2929b0: 0x40f809  jalr        $v0
label_2929b4:
    if (ctx->pc == 0x2929B4u) {
        ctx->pc = 0x2929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929B0u;
        // 0x2929b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2929B8u;
        goto label_2929b8;
    }
    ctx->pc = 0x2929B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2929B8u);
        ctx->pc = 0x2929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929B0u;
        // 0x2929b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2929B0u, 0x2929B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2929B8u;
label_2929b8:
    // 0x2929b8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2929b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2929bc:
    // 0x2929bc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2929bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2929c0:
    // 0x2929c0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2929c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2929c4:
    // 0x2929c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2929c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2929c8:
    // 0x2929c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2929c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2929cc:
    // 0x2929cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2929ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2929d0:
    // 0x2929d0: 0x0  nop
    ctx->pc = 0x2929d0u;
    // NOP
label_2929d4:
    // 0x2929d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2929d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2929d8:
    // 0x2929d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2929d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2929dc:
    // 0x2929dc: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x2929dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_2929e0:
    // 0x2929e0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x2929e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2929e4:
    // 0x2929e4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2929e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2929e8:
    // 0x2929e8: 0x60f809  jalr        $v1
label_2929ec:
    if (ctx->pc == 0x2929ECu) {
        ctx->pc = 0x2929ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929E8u;
        // 0x2929ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2929F0u;
        goto label_2929f0;
    }
    ctx->pc = 0x2929E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2929F0u);
        ctx->pc = 0x2929ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929E8u;
        // 0x2929ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2929E8u, 0x2929F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2929F0u;
label_2929f0:
    // 0x2929f0: 0x964402fe  lhu         $a0, 0x2FE($s2)
    ctx->pc = 0x2929f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
label_2929f4:
    // 0x2929f4: 0x240203bc  addiu       $v0, $zero, 0x3BC
    ctx->pc = 0x2929f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
label_2929f8:
    // 0x2929f8: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
label_2929fc:
    if (ctx->pc == 0x2929FCu) {
        ctx->pc = 0x292A00u;
        goto label_292a00;
    }
    ctx->pc = 0x2929F8u;
    {
        const bool branch_taken_0x2929f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2929f8) {
            ctx->pc = 0x292A5Cu;
            goto label_292a5c;
        }
    }
    ctx->pc = 0x292A00u;
label_292a00:
    // 0x292a00: 0xc0b6dac  jal         func_2DB6B0
label_292a04:
    if (ctx->pc == 0x292A04u) {
        ctx->pc = 0x292A08u;
        goto label_292a08;
    }
    ctx->pc = 0x292A00u;
    SET_GPR_U32(ctx, 31, 0x292A08u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x292A00u, 0x292A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A08u;
label_292a08:
    // 0x292a08: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x292a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_292a0c:
    // 0x292a0c: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x292a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_292a10:
    // 0x292a10: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_292a14:
    if (ctx->pc == 0x292A14u) {
        ctx->pc = 0x292A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A10u;
        // 0x292a14: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292A18u;
        goto label_292a18;
    }
    ctx->pc = 0x292A10u;
    {
        const bool branch_taken_0x292a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x292a10) {
            ctx->pc = 0x292A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292A10u;
            // 0x292a14: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x292A34u;
            goto label_292a34;
        }
    }
    ctx->pc = 0x292A18u;
label_292a18:
    // 0x292a18: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x292a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a1c:
    // 0x292a1c: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x292a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
label_292a20:
    // 0x292a20: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x292a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292a24:
    // 0x292a24: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x292a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_292a28:
    // 0x292a28: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x292a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a2c:
    // 0x292a2c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x292a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_292a30:
    // 0x292a30: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x292a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a34:
    // 0x292a34: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x292a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_292a38:
    // 0x292a38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x292a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_292a3c:
    // 0x292a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292a40:
    // 0x292a40: 0x0  nop
    ctx->pc = 0x292a40u;
    // NOP
label_292a44:
    // 0x292a44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_292a48:
    // 0x292a48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x292a48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_292a4c:
    // 0x292a4c: 0xc07df52  jal         func_1F7D48
label_292a50:
    if (ctx->pc == 0x292A50u) {
        ctx->pc = 0x292A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A4Cu;
        // 0x292a50: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292A54u;
        goto label_292a54;
    }
    ctx->pc = 0x292A4Cu;
    SET_GPR_U32(ctx, 31, 0x292A54u);
    ctx->pc = 0x292A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A4Cu;
    // 0x292a50: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x292A4Cu, 0x292A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A54u;
label_292a54:
    // 0x292a54: 0x1000000d  b           . + 4 + (0xD << 2)
label_292a58:
    if (ctx->pc == 0x292A58u) {
        ctx->pc = 0x292A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A54u;
        // 0x292a58: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292A5Cu;
        goto label_292a5c;
    }
    ctx->pc = 0x292A54u;
    {
        const bool branch_taken_0x292a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A54u;
        // 0x292a58: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a54) {
            ctx->pc = 0x292A8Cu;
            goto label_292a8c;
        }
    }
    ctx->pc = 0x292A5Cu;
label_292a5c:
    // 0x292a5c: 0xc0b6dac  jal         func_2DB6B0
label_292a60:
    if (ctx->pc == 0x292A60u) {
        ctx->pc = 0x292A64u;
        goto label_292a64;
    }
    ctx->pc = 0x292A5Cu;
    SET_GPR_U32(ctx, 31, 0x292A64u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x292A5Cu, 0x292A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A64u;
label_292a64:
    // 0x292a64: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x292a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_292a68:
    // 0x292a68: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x292a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_292a6c:
    // 0x292a6c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_292a70:
    if (ctx->pc == 0x292A70u) {
        ctx->pc = 0x292A74u;
        goto label_292a74;
    }
    ctx->pc = 0x292A6Cu;
    {
        const bool branch_taken_0x292a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x292a6c) {
            ctx->pc = 0x292A8Cu;
            goto label_292a8c;
        }
    }
    ctx->pc = 0x292A74u;
label_292a74:
    // 0x292a74: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x292a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a78:
    // 0x292a78: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x292a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
label_292a7c:
    // 0x292a7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x292a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292a80:
    // 0x292a80: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x292a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_292a84:
    // 0x292a84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x292a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a88:
    // 0x292a88: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x292a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_292a8c:
    // 0x292a8c: 0xc0527ae  jal         func_149EB8
label_292a90:
    if (ctx->pc == 0x292A90u) {
        ctx->pc = 0x292A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A8Cu;
        // 0x292a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292A94u;
        goto label_292a94;
    }
    ctx->pc = 0x292A8Cu;
    SET_GPR_U32(ctx, 31, 0x292A94u);
    ctx->pc = 0x292A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A8Cu;
    // 0x292a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x292A8Cu, 0x292A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A94u;
label_292a94:
    // 0x292a94: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x292a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_292a98:
    // 0x292a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292a9c:
    // 0x292a9c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x292a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_292aa0:
    // 0x292aa0: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x292aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_292aa4:
    // 0x292aa4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x292aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_292aa8:
    // 0x292aa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x292aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292aac:
    // 0x292aac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x292aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292ab0:
    // 0x292ab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x292ab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292ab4:
    // 0x292ab4: 0xc0b2e92  jal         func_2CBA48
label_292ab8:
    if (ctx->pc == 0x292AB8u) {
        ctx->pc = 0x292AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AB4u;
        // 0x292ab8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292ABCu;
        goto label_292abc;
    }
    ctx->pc = 0x292AB4u;
    SET_GPR_U32(ctx, 31, 0x292ABCu);
    ctx->pc = 0x292AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AB4u;
    // 0x292ab8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x292AB4u, 0x292ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ABCu;
label_292abc:
    // 0x292abc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x292abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_292ac0:
    // 0x292ac0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x292ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_292ac4:
    // 0x292ac4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x292ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_292ac8:
    // 0x292ac8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x292ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_292acc:
    // 0x292acc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x292accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_292ad0:
    // 0x292ad0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x292ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_292ad4:
    // 0x292ad4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x292ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_292ad8:
    // 0x292ad8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x292ad8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_292adc:
    // 0x292adc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x292adcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292ae0:
    // 0x292ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292ae4:
    // 0x292ae4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x292ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_292ae8:
    // 0x292ae8: 0x3e00008  jr          $ra
label_292aec:
    if (ctx->pc == 0x292AECu) {
        ctx->pc = 0x292AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AE8u;
        // 0x292aec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292AF0u;
        goto label_fallthrough_0x292ae8;
    }
    ctx->pc = 0x292AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AE8u;
        // 0x292aec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x292ae8:
    ctx->pc = 0x292AF0u;
}
