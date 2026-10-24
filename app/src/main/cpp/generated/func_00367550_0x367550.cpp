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

// Function: func_00367550
// Address: 0x367550 - 0x367dc0
void func_00367550_0x367550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00367550_0x367550");
#endif

    switch (ctx->pc) {
        case 0x367550u: goto label_367550;
        case 0x367554u: goto label_367554;
        case 0x367558u: goto label_367558;
        case 0x36755cu: goto label_36755c;
        case 0x367560u: goto label_367560;
        case 0x367564u: goto label_367564;
        case 0x367568u: goto label_367568;
        case 0x36756cu: goto label_36756c;
        case 0x367570u: goto label_367570;
        case 0x367574u: goto label_367574;
        case 0x367578u: goto label_367578;
        case 0x36757cu: goto label_36757c;
        case 0x367580u: goto label_367580;
        case 0x367584u: goto label_367584;
        case 0x367588u: goto label_367588;
        case 0x36758cu: goto label_36758c;
        case 0x367590u: goto label_367590;
        case 0x367594u: goto label_367594;
        case 0x367598u: goto label_367598;
        case 0x36759cu: goto label_36759c;
        case 0x3675a0u: goto label_3675a0;
        case 0x3675a4u: goto label_3675a4;
        case 0x3675a8u: goto label_3675a8;
        case 0x3675acu: goto label_3675ac;
        case 0x3675b0u: goto label_3675b0;
        case 0x3675b4u: goto label_3675b4;
        case 0x3675b8u: goto label_3675b8;
        case 0x3675bcu: goto label_3675bc;
        case 0x3675c0u: goto label_3675c0;
        case 0x3675c4u: goto label_3675c4;
        case 0x3675c8u: goto label_3675c8;
        case 0x3675ccu: goto label_3675cc;
        case 0x3675d0u: goto label_3675d0;
        case 0x3675d4u: goto label_3675d4;
        case 0x3675d8u: goto label_3675d8;
        case 0x3675dcu: goto label_3675dc;
        case 0x3675e0u: goto label_3675e0;
        case 0x3675e4u: goto label_3675e4;
        case 0x3675e8u: goto label_3675e8;
        case 0x3675ecu: goto label_3675ec;
        case 0x3675f0u: goto label_3675f0;
        case 0x3675f4u: goto label_3675f4;
        case 0x3675f8u: goto label_3675f8;
        case 0x3675fcu: goto label_3675fc;
        case 0x367600u: goto label_367600;
        case 0x367604u: goto label_367604;
        case 0x367608u: goto label_367608;
        case 0x36760cu: goto label_36760c;
        case 0x367610u: goto label_367610;
        case 0x367614u: goto label_367614;
        case 0x367618u: goto label_367618;
        case 0x36761cu: goto label_36761c;
        case 0x367620u: goto label_367620;
        case 0x367624u: goto label_367624;
        case 0x367628u: goto label_367628;
        case 0x36762cu: goto label_36762c;
        case 0x367630u: goto label_367630;
        case 0x367634u: goto label_367634;
        case 0x367638u: goto label_367638;
        case 0x36763cu: goto label_36763c;
        case 0x367640u: goto label_367640;
        case 0x367644u: goto label_367644;
        case 0x367648u: goto label_367648;
        case 0x36764cu: goto label_36764c;
        case 0x367650u: goto label_367650;
        case 0x367654u: goto label_367654;
        case 0x367658u: goto label_367658;
        case 0x36765cu: goto label_36765c;
        case 0x367660u: goto label_367660;
        case 0x367664u: goto label_367664;
        case 0x367668u: goto label_367668;
        case 0x36766cu: goto label_36766c;
        case 0x367670u: goto label_367670;
        case 0x367674u: goto label_367674;
        case 0x367678u: goto label_367678;
        case 0x36767cu: goto label_36767c;
        case 0x367680u: goto label_367680;
        case 0x367684u: goto label_367684;
        case 0x367688u: goto label_367688;
        case 0x36768cu: goto label_36768c;
        case 0x367690u: goto label_367690;
        case 0x367694u: goto label_367694;
        case 0x367698u: goto label_367698;
        case 0x36769cu: goto label_36769c;
        case 0x3676a0u: goto label_3676a0;
        case 0x3676a4u: goto label_3676a4;
        case 0x3676a8u: goto label_3676a8;
        case 0x3676acu: goto label_3676ac;
        case 0x3676b0u: goto label_3676b0;
        case 0x3676b4u: goto label_3676b4;
        case 0x3676b8u: goto label_3676b8;
        case 0x3676bcu: goto label_3676bc;
        case 0x3676c0u: goto label_3676c0;
        case 0x3676c4u: goto label_3676c4;
        case 0x3676c8u: goto label_3676c8;
        case 0x3676ccu: goto label_3676cc;
        case 0x3676d0u: goto label_3676d0;
        case 0x3676d4u: goto label_3676d4;
        case 0x3676d8u: goto label_3676d8;
        case 0x3676dcu: goto label_3676dc;
        case 0x3676e0u: goto label_3676e0;
        case 0x3676e4u: goto label_3676e4;
        case 0x3676e8u: goto label_3676e8;
        case 0x3676ecu: goto label_3676ec;
        case 0x3676f0u: goto label_3676f0;
        case 0x3676f4u: goto label_3676f4;
        case 0x3676f8u: goto label_3676f8;
        case 0x3676fcu: goto label_3676fc;
        case 0x367700u: goto label_367700;
        case 0x367704u: goto label_367704;
        case 0x367708u: goto label_367708;
        case 0x36770cu: goto label_36770c;
        case 0x367710u: goto label_367710;
        case 0x367714u: goto label_367714;
        case 0x367718u: goto label_367718;
        case 0x36771cu: goto label_36771c;
        case 0x367720u: goto label_367720;
        case 0x367724u: goto label_367724;
        case 0x367728u: goto label_367728;
        case 0x36772cu: goto label_36772c;
        case 0x367730u: goto label_367730;
        case 0x367734u: goto label_367734;
        case 0x367738u: goto label_367738;
        case 0x36773cu: goto label_36773c;
        case 0x367740u: goto label_367740;
        case 0x367744u: goto label_367744;
        case 0x367748u: goto label_367748;
        case 0x36774cu: goto label_36774c;
        case 0x367750u: goto label_367750;
        case 0x367754u: goto label_367754;
        case 0x367758u: goto label_367758;
        case 0x36775cu: goto label_36775c;
        case 0x367760u: goto label_367760;
        case 0x367764u: goto label_367764;
        case 0x367768u: goto label_367768;
        case 0x36776cu: goto label_36776c;
        case 0x367770u: goto label_367770;
        case 0x367774u: goto label_367774;
        case 0x367778u: goto label_367778;
        case 0x36777cu: goto label_36777c;
        case 0x367780u: goto label_367780;
        case 0x367784u: goto label_367784;
        case 0x367788u: goto label_367788;
        case 0x36778cu: goto label_36778c;
        case 0x367790u: goto label_367790;
        case 0x367794u: goto label_367794;
        case 0x367798u: goto label_367798;
        case 0x36779cu: goto label_36779c;
        case 0x3677a0u: goto label_3677a0;
        case 0x3677a4u: goto label_3677a4;
        case 0x3677a8u: goto label_3677a8;
        case 0x3677acu: goto label_3677ac;
        case 0x3677b0u: goto label_3677b0;
        case 0x3677b4u: goto label_3677b4;
        case 0x3677b8u: goto label_3677b8;
        case 0x3677bcu: goto label_3677bc;
        case 0x3677c0u: goto label_3677c0;
        case 0x3677c4u: goto label_3677c4;
        case 0x3677c8u: goto label_3677c8;
        case 0x3677ccu: goto label_3677cc;
        case 0x3677d0u: goto label_3677d0;
        case 0x3677d4u: goto label_3677d4;
        case 0x3677d8u: goto label_3677d8;
        case 0x3677dcu: goto label_3677dc;
        case 0x3677e0u: goto label_3677e0;
        case 0x3677e4u: goto label_3677e4;
        case 0x3677e8u: goto label_3677e8;
        case 0x3677ecu: goto label_3677ec;
        case 0x3677f0u: goto label_3677f0;
        case 0x3677f4u: goto label_3677f4;
        case 0x3677f8u: goto label_3677f8;
        case 0x3677fcu: goto label_3677fc;
        case 0x367800u: goto label_367800;
        case 0x367804u: goto label_367804;
        case 0x367808u: goto label_367808;
        case 0x36780cu: goto label_36780c;
        case 0x367810u: goto label_367810;
        case 0x367814u: goto label_367814;
        case 0x367818u: goto label_367818;
        case 0x36781cu: goto label_36781c;
        case 0x367820u: goto label_367820;
        case 0x367824u: goto label_367824;
        case 0x367828u: goto label_367828;
        case 0x36782cu: goto label_36782c;
        case 0x367830u: goto label_367830;
        case 0x367834u: goto label_367834;
        case 0x367838u: goto label_367838;
        case 0x36783cu: goto label_36783c;
        case 0x367840u: goto label_367840;
        case 0x367844u: goto label_367844;
        case 0x367848u: goto label_367848;
        case 0x36784cu: goto label_36784c;
        case 0x367850u: goto label_367850;
        case 0x367854u: goto label_367854;
        case 0x367858u: goto label_367858;
        case 0x36785cu: goto label_36785c;
        case 0x367860u: goto label_367860;
        case 0x367864u: goto label_367864;
        case 0x367868u: goto label_367868;
        case 0x36786cu: goto label_36786c;
        case 0x367870u: goto label_367870;
        case 0x367874u: goto label_367874;
        case 0x367878u: goto label_367878;
        case 0x36787cu: goto label_36787c;
        case 0x367880u: goto label_367880;
        case 0x367884u: goto label_367884;
        case 0x367888u: goto label_367888;
        case 0x36788cu: goto label_36788c;
        case 0x367890u: goto label_367890;
        case 0x367894u: goto label_367894;
        case 0x367898u: goto label_367898;
        case 0x36789cu: goto label_36789c;
        case 0x3678a0u: goto label_3678a0;
        case 0x3678a4u: goto label_3678a4;
        case 0x3678a8u: goto label_3678a8;
        case 0x3678acu: goto label_3678ac;
        case 0x3678b0u: goto label_3678b0;
        case 0x3678b4u: goto label_3678b4;
        case 0x3678b8u: goto label_3678b8;
        case 0x3678bcu: goto label_3678bc;
        case 0x3678c0u: goto label_3678c0;
        case 0x3678c4u: goto label_3678c4;
        case 0x3678c8u: goto label_3678c8;
        case 0x3678ccu: goto label_3678cc;
        case 0x3678d0u: goto label_3678d0;
        case 0x3678d4u: goto label_3678d4;
        case 0x3678d8u: goto label_3678d8;
        case 0x3678dcu: goto label_3678dc;
        case 0x3678e0u: goto label_3678e0;
        case 0x3678e4u: goto label_3678e4;
        case 0x3678e8u: goto label_3678e8;
        case 0x3678ecu: goto label_3678ec;
        case 0x3678f0u: goto label_3678f0;
        case 0x3678f4u: goto label_3678f4;
        case 0x3678f8u: goto label_3678f8;
        case 0x3678fcu: goto label_3678fc;
        case 0x367900u: goto label_367900;
        case 0x367904u: goto label_367904;
        case 0x367908u: goto label_367908;
        case 0x36790cu: goto label_36790c;
        case 0x367910u: goto label_367910;
        case 0x367914u: goto label_367914;
        case 0x367918u: goto label_367918;
        case 0x36791cu: goto label_36791c;
        case 0x367920u: goto label_367920;
        case 0x367924u: goto label_367924;
        case 0x367928u: goto label_367928;
        case 0x36792cu: goto label_36792c;
        case 0x367930u: goto label_367930;
        case 0x367934u: goto label_367934;
        case 0x367938u: goto label_367938;
        case 0x36793cu: goto label_36793c;
        case 0x367940u: goto label_367940;
        case 0x367944u: goto label_367944;
        case 0x367948u: goto label_367948;
        case 0x36794cu: goto label_36794c;
        case 0x367950u: goto label_367950;
        case 0x367954u: goto label_367954;
        case 0x367958u: goto label_367958;
        case 0x36795cu: goto label_36795c;
        case 0x367960u: goto label_367960;
        case 0x367964u: goto label_367964;
        case 0x367968u: goto label_367968;
        case 0x36796cu: goto label_36796c;
        case 0x367970u: goto label_367970;
        case 0x367974u: goto label_367974;
        case 0x367978u: goto label_367978;
        case 0x36797cu: goto label_36797c;
        case 0x367980u: goto label_367980;
        case 0x367984u: goto label_367984;
        case 0x367988u: goto label_367988;
        case 0x36798cu: goto label_36798c;
        case 0x367990u: goto label_367990;
        case 0x367994u: goto label_367994;
        case 0x367998u: goto label_367998;
        case 0x36799cu: goto label_36799c;
        case 0x3679a0u: goto label_3679a0;
        case 0x3679a4u: goto label_3679a4;
        case 0x3679a8u: goto label_3679a8;
        case 0x3679acu: goto label_3679ac;
        case 0x3679b0u: goto label_3679b0;
        case 0x3679b4u: goto label_3679b4;
        case 0x3679b8u: goto label_3679b8;
        case 0x3679bcu: goto label_3679bc;
        case 0x3679c0u: goto label_3679c0;
        case 0x3679c4u: goto label_3679c4;
        case 0x3679c8u: goto label_3679c8;
        case 0x3679ccu: goto label_3679cc;
        case 0x3679d0u: goto label_3679d0;
        case 0x3679d4u: goto label_3679d4;
        case 0x3679d8u: goto label_3679d8;
        case 0x3679dcu: goto label_3679dc;
        case 0x3679e0u: goto label_3679e0;
        case 0x3679e4u: goto label_3679e4;
        case 0x3679e8u: goto label_3679e8;
        case 0x3679ecu: goto label_3679ec;
        case 0x3679f0u: goto label_3679f0;
        case 0x3679f4u: goto label_3679f4;
        case 0x3679f8u: goto label_3679f8;
        case 0x3679fcu: goto label_3679fc;
        case 0x367a00u: goto label_367a00;
        case 0x367a04u: goto label_367a04;
        case 0x367a08u: goto label_367a08;
        case 0x367a0cu: goto label_367a0c;
        case 0x367a10u: goto label_367a10;
        case 0x367a14u: goto label_367a14;
        case 0x367a18u: goto label_367a18;
        case 0x367a1cu: goto label_367a1c;
        case 0x367a20u: goto label_367a20;
        case 0x367a24u: goto label_367a24;
        case 0x367a28u: goto label_367a28;
        case 0x367a2cu: goto label_367a2c;
        case 0x367a30u: goto label_367a30;
        case 0x367a34u: goto label_367a34;
        case 0x367a38u: goto label_367a38;
        case 0x367a3cu: goto label_367a3c;
        case 0x367a40u: goto label_367a40;
        case 0x367a44u: goto label_367a44;
        case 0x367a48u: goto label_367a48;
        case 0x367a4cu: goto label_367a4c;
        case 0x367a50u: goto label_367a50;
        case 0x367a54u: goto label_367a54;
        case 0x367a58u: goto label_367a58;
        case 0x367a5cu: goto label_367a5c;
        case 0x367a60u: goto label_367a60;
        case 0x367a64u: goto label_367a64;
        case 0x367a68u: goto label_367a68;
        case 0x367a6cu: goto label_367a6c;
        case 0x367a70u: goto label_367a70;
        case 0x367a74u: goto label_367a74;
        case 0x367a78u: goto label_367a78;
        case 0x367a7cu: goto label_367a7c;
        case 0x367a80u: goto label_367a80;
        case 0x367a84u: goto label_367a84;
        case 0x367a88u: goto label_367a88;
        case 0x367a8cu: goto label_367a8c;
        case 0x367a90u: goto label_367a90;
        case 0x367a94u: goto label_367a94;
        case 0x367a98u: goto label_367a98;
        case 0x367a9cu: goto label_367a9c;
        case 0x367aa0u: goto label_367aa0;
        case 0x367aa4u: goto label_367aa4;
        case 0x367aa8u: goto label_367aa8;
        case 0x367aacu: goto label_367aac;
        case 0x367ab0u: goto label_367ab0;
        case 0x367ab4u: goto label_367ab4;
        case 0x367ab8u: goto label_367ab8;
        case 0x367abcu: goto label_367abc;
        case 0x367ac0u: goto label_367ac0;
        case 0x367ac4u: goto label_367ac4;
        case 0x367ac8u: goto label_367ac8;
        case 0x367accu: goto label_367acc;
        case 0x367ad0u: goto label_367ad0;
        case 0x367ad4u: goto label_367ad4;
        case 0x367ad8u: goto label_367ad8;
        case 0x367adcu: goto label_367adc;
        case 0x367ae0u: goto label_367ae0;
        case 0x367ae4u: goto label_367ae4;
        case 0x367ae8u: goto label_367ae8;
        case 0x367aecu: goto label_367aec;
        case 0x367af0u: goto label_367af0;
        case 0x367af4u: goto label_367af4;
        case 0x367af8u: goto label_367af8;
        case 0x367afcu: goto label_367afc;
        case 0x367b00u: goto label_367b00;
        case 0x367b04u: goto label_367b04;
        case 0x367b08u: goto label_367b08;
        case 0x367b0cu: goto label_367b0c;
        case 0x367b10u: goto label_367b10;
        case 0x367b14u: goto label_367b14;
        case 0x367b18u: goto label_367b18;
        case 0x367b1cu: goto label_367b1c;
        case 0x367b20u: goto label_367b20;
        case 0x367b24u: goto label_367b24;
        case 0x367b28u: goto label_367b28;
        case 0x367b2cu: goto label_367b2c;
        case 0x367b30u: goto label_367b30;
        case 0x367b34u: goto label_367b34;
        case 0x367b38u: goto label_367b38;
        case 0x367b3cu: goto label_367b3c;
        case 0x367b40u: goto label_367b40;
        case 0x367b44u: goto label_367b44;
        case 0x367b48u: goto label_367b48;
        case 0x367b4cu: goto label_367b4c;
        case 0x367b50u: goto label_367b50;
        case 0x367b54u: goto label_367b54;
        case 0x367b58u: goto label_367b58;
        case 0x367b5cu: goto label_367b5c;
        case 0x367b60u: goto label_367b60;
        case 0x367b64u: goto label_367b64;
        case 0x367b68u: goto label_367b68;
        case 0x367b6cu: goto label_367b6c;
        case 0x367b70u: goto label_367b70;
        case 0x367b74u: goto label_367b74;
        case 0x367b78u: goto label_367b78;
        case 0x367b7cu: goto label_367b7c;
        case 0x367b80u: goto label_367b80;
        case 0x367b84u: goto label_367b84;
        case 0x367b88u: goto label_367b88;
        case 0x367b8cu: goto label_367b8c;
        case 0x367b90u: goto label_367b90;
        case 0x367b94u: goto label_367b94;
        case 0x367b98u: goto label_367b98;
        case 0x367b9cu: goto label_367b9c;
        case 0x367ba0u: goto label_367ba0;
        case 0x367ba4u: goto label_367ba4;
        case 0x367ba8u: goto label_367ba8;
        case 0x367bacu: goto label_367bac;
        case 0x367bb0u: goto label_367bb0;
        case 0x367bb4u: goto label_367bb4;
        case 0x367bb8u: goto label_367bb8;
        case 0x367bbcu: goto label_367bbc;
        case 0x367bc0u: goto label_367bc0;
        case 0x367bc4u: goto label_367bc4;
        case 0x367bc8u: goto label_367bc8;
        case 0x367bccu: goto label_367bcc;
        case 0x367bd0u: goto label_367bd0;
        case 0x367bd4u: goto label_367bd4;
        case 0x367bd8u: goto label_367bd8;
        case 0x367bdcu: goto label_367bdc;
        case 0x367be0u: goto label_367be0;
        case 0x367be4u: goto label_367be4;
        case 0x367be8u: goto label_367be8;
        case 0x367becu: goto label_367bec;
        case 0x367bf0u: goto label_367bf0;
        case 0x367bf4u: goto label_367bf4;
        case 0x367bf8u: goto label_367bf8;
        case 0x367bfcu: goto label_367bfc;
        case 0x367c00u: goto label_367c00;
        case 0x367c04u: goto label_367c04;
        case 0x367c08u: goto label_367c08;
        case 0x367c0cu: goto label_367c0c;
        case 0x367c10u: goto label_367c10;
        case 0x367c14u: goto label_367c14;
        case 0x367c18u: goto label_367c18;
        case 0x367c1cu: goto label_367c1c;
        case 0x367c20u: goto label_367c20;
        case 0x367c24u: goto label_367c24;
        case 0x367c28u: goto label_367c28;
        case 0x367c2cu: goto label_367c2c;
        case 0x367c30u: goto label_367c30;
        case 0x367c34u: goto label_367c34;
        case 0x367c38u: goto label_367c38;
        case 0x367c3cu: goto label_367c3c;
        case 0x367c40u: goto label_367c40;
        case 0x367c44u: goto label_367c44;
        case 0x367c48u: goto label_367c48;
        case 0x367c4cu: goto label_367c4c;
        case 0x367c50u: goto label_367c50;
        case 0x367c54u: goto label_367c54;
        case 0x367c58u: goto label_367c58;
        case 0x367c5cu: goto label_367c5c;
        case 0x367c60u: goto label_367c60;
        case 0x367c64u: goto label_367c64;
        case 0x367c68u: goto label_367c68;
        case 0x367c6cu: goto label_367c6c;
        case 0x367c70u: goto label_367c70;
        case 0x367c74u: goto label_367c74;
        case 0x367c78u: goto label_367c78;
        case 0x367c7cu: goto label_367c7c;
        case 0x367c80u: goto label_367c80;
        case 0x367c84u: goto label_367c84;
        case 0x367c88u: goto label_367c88;
        case 0x367c8cu: goto label_367c8c;
        case 0x367c90u: goto label_367c90;
        case 0x367c94u: goto label_367c94;
        case 0x367c98u: goto label_367c98;
        case 0x367c9cu: goto label_367c9c;
        case 0x367ca0u: goto label_367ca0;
        case 0x367ca4u: goto label_367ca4;
        case 0x367ca8u: goto label_367ca8;
        case 0x367cacu: goto label_367cac;
        case 0x367cb0u: goto label_367cb0;
        case 0x367cb4u: goto label_367cb4;
        case 0x367cb8u: goto label_367cb8;
        case 0x367cbcu: goto label_367cbc;
        case 0x367cc0u: goto label_367cc0;
        case 0x367cc4u: goto label_367cc4;
        case 0x367cc8u: goto label_367cc8;
        case 0x367cccu: goto label_367ccc;
        case 0x367cd0u: goto label_367cd0;
        case 0x367cd4u: goto label_367cd4;
        case 0x367cd8u: goto label_367cd8;
        case 0x367cdcu: goto label_367cdc;
        case 0x367ce0u: goto label_367ce0;
        case 0x367ce4u: goto label_367ce4;
        case 0x367ce8u: goto label_367ce8;
        case 0x367cecu: goto label_367cec;
        case 0x367cf0u: goto label_367cf0;
        case 0x367cf4u: goto label_367cf4;
        case 0x367cf8u: goto label_367cf8;
        case 0x367cfcu: goto label_367cfc;
        case 0x367d00u: goto label_367d00;
        case 0x367d04u: goto label_367d04;
        case 0x367d08u: goto label_367d08;
        case 0x367d0cu: goto label_367d0c;
        case 0x367d10u: goto label_367d10;
        case 0x367d14u: goto label_367d14;
        case 0x367d18u: goto label_367d18;
        case 0x367d1cu: goto label_367d1c;
        case 0x367d20u: goto label_367d20;
        case 0x367d24u: goto label_367d24;
        case 0x367d28u: goto label_367d28;
        case 0x367d2cu: goto label_367d2c;
        case 0x367d30u: goto label_367d30;
        case 0x367d34u: goto label_367d34;
        case 0x367d38u: goto label_367d38;
        case 0x367d3cu: goto label_367d3c;
        case 0x367d40u: goto label_367d40;
        case 0x367d44u: goto label_367d44;
        case 0x367d48u: goto label_367d48;
        case 0x367d4cu: goto label_367d4c;
        case 0x367d50u: goto label_367d50;
        case 0x367d54u: goto label_367d54;
        case 0x367d58u: goto label_367d58;
        case 0x367d5cu: goto label_367d5c;
        case 0x367d60u: goto label_367d60;
        case 0x367d64u: goto label_367d64;
        case 0x367d68u: goto label_367d68;
        case 0x367d6cu: goto label_367d6c;
        case 0x367d70u: goto label_367d70;
        case 0x367d74u: goto label_367d74;
        case 0x367d78u: goto label_367d78;
        case 0x367d7cu: goto label_367d7c;
        case 0x367d80u: goto label_367d80;
        case 0x367d84u: goto label_367d84;
        case 0x367d88u: goto label_367d88;
        case 0x367d8cu: goto label_367d8c;
        case 0x367d90u: goto label_367d90;
        case 0x367d94u: goto label_367d94;
        case 0x367d98u: goto label_367d98;
        case 0x367d9cu: goto label_367d9c;
        case 0x367da0u: goto label_367da0;
        case 0x367da4u: goto label_367da4;
        case 0x367da8u: goto label_367da8;
        case 0x367dacu: goto label_367dac;
        case 0x367db0u: goto label_367db0;
        case 0x367db4u: goto label_367db4;
        case 0x367db8u: goto label_367db8;
        case 0x367dbcu: goto label_367dbc;
        default: break;
    }

    ctx->pc = 0x367550u;

label_367550:
    // 0x367550: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x367550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_367554:
    // 0x367554: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x367554u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_367558:
    // 0x367558: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x367558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
label_36755c:
    // 0x36755c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x36755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_367560:
    // 0x367560: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x367560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
label_367564:
    // 0x367564: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x367564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_367568:
    // 0x367568: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x367568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_36756c:
    // 0x36756c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36756cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_367570:
    // 0x367570: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x367570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_367574:
    // 0x367574: 0x25620004  addiu       $v0, $t3, 0x4
    ctx->pc = 0x367574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_367578:
    // 0x367578: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x367578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_36757c:
    // 0x36757c: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x36757cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_367580:
    // 0x367580: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x367580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
label_367584:
    // 0x367584: 0x1681823  subu        $v1, $t3, $t0
    ctx->pc = 0x367584u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_367588:
    // 0x367588: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x367588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_36758c:
    // 0x36758c: 0x26910028  addiu       $s1, $s4, 0x28
    ctx->pc = 0x36758cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_367590:
    // 0x367590: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x367590u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367594:
    // 0x367594: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367598:
    // 0x367598: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x367598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36759c:
    // 0x36759c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36759cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3675a0:
    // 0x3675a0: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x3675a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3675a4:
    // 0x3675a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3675a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3675a8:
    // 0x3675a8: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3675a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3675ac:
    // 0x3675ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3675acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3675b0:
    // 0x3675b0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3675b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3675b4:
    // 0x3675b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3675b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3675b8:
    // 0x3675b8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3675b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3675bc:
    // 0x3675bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3675bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3675c0:
    // 0x3675c0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3675c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_3675c4:
    // 0x3675c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3675c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3675c8:
    // 0x3675c8: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x3675c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_3675cc:
    // 0x3675cc: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3675ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3675d0:
    // 0x3675d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3675d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3675d4:
    // 0x3675d4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3675d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_3675d8:
    // 0x3675d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3675d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3675dc:
    // 0x3675dc: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x3675dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_3675e0:
    // 0x3675e0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3675e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3675e4:
    // 0x3675e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3675e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3675e8:
    // 0x3675e8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x3675e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3675ec:
    // 0x3675ec: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x3675ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_3675f0:
    // 0x3675f0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3675f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_3675f4:
    // 0x3675f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3675f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3675f8:
    // 0x3675f8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x3675f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_3675fc:
    // 0x3675fc: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x3675fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_367600:
    // 0x367600: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367604:
    // 0x367604: 0xa94804  sllv        $t1, $t1, $a1
    ctx->pc = 0x367604u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
label_367608:
    // 0x367608: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_36760c:
    if (ctx->pc == 0x36760Cu) {
        ctx->pc = 0x36760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367608u;
        // 0x36760c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367610u;
        goto label_367610;
    }
    ctx->pc = 0x367608u;
    {
        const bool branch_taken_0x367608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367608u;
        // 0x36760c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367608) {
            ctx->pc = 0x367680u;
            goto label_367680;
        }
    }
    ctx->pc = 0x367610u;
label_367610:
    // 0x367610: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x367610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_367614:
    // 0x367614: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_367618:
    if (ctx->pc == 0x367618u) {
        ctx->pc = 0x367618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367614u;
        // 0x367618: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36761Cu;
        goto label_36761c;
    }
    ctx->pc = 0x367614u;
    {
        const bool branch_taken_0x367614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367614u;
        // 0x367618: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367614) {
            ctx->pc = 0x367638u;
            goto label_367638;
        }
    }
    ctx->pc = 0x36761Cu;
label_36761c:
    // 0x36761c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36761cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_367620:
    // 0x367620: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x367620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_367624:
    // 0x367624: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x367624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_367628:
    // 0x367628: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x367628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_36762c:
    // 0x36762c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x36762cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_367630:
    // 0x367630: 0x10000004  b           . + 4 + (0x4 << 2)
label_367634:
    if (ctx->pc == 0x367634u) {
        ctx->pc = 0x367634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367630u;
        // 0x367634: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367638u;
        goto label_367638;
    }
    ctx->pc = 0x367630u;
    {
        const bool branch_taken_0x367630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367630u;
        // 0x367634: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367630) {
            ctx->pc = 0x367644u;
            goto label_367644;
        }
    }
    ctx->pc = 0x367638u;
label_367638:
    // 0x367638: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x367638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_36763c:
    // 0x36763c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x36763cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367640:
    // 0x367640: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x367640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_367644:
    // 0x367644: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367644u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367648:
    // 0x367648: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36764c:
    // 0x36764c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36764cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367650:
    // 0x367650: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367654:
    // 0x367654: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367654u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367658:
    // 0x367658: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36765c:
    // 0x36765c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36765cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367660:
    // 0x367660: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367664:
    // 0x367664: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367664u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367668:
    // 0x367668: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36766c:
    // 0x36766c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36766cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367670:
    // 0x367670: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367674:
    // 0x367674: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367678:
    // 0x367678: 0x10000005  b           . + 4 + (0x5 << 2)
label_36767c:
    if (ctx->pc == 0x36767Cu) {
        ctx->pc = 0x36767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367678u;
        // 0x36767c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367680u;
        goto label_367680;
    }
    ctx->pc = 0x367678u;
    {
        const bool branch_taken_0x367678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367678u;
        // 0x36767c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367678) {
            ctx->pc = 0x367690u;
            goto label_367690;
        }
    }
    ctx->pc = 0x367680u;
label_367680:
    // 0x367680: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x367680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_367684:
    // 0x367684: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x367684u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_367688:
    // 0x367688: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x367688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36768c:
    // 0x36768c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x36768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_367690:
    // 0x367690: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_367694:
    // 0x367694: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x367694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_367698:
    // 0x367698: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_36769c:
    if (ctx->pc == 0x36769Cu) {
        ctx->pc = 0x36769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367698u;
        // 0x36769c: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3676A0u;
        goto label_3676a0;
    }
    ctx->pc = 0x367698u;
    {
        const bool branch_taken_0x367698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367698) {
            ctx->pc = 0x36769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367698u;
            // 0x36769c: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3676E0u;
            goto label_3676e0;
        }
    }
    ctx->pc = 0x3676A0u;
label_3676a0:
    // 0x3676a0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x3676a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_3676a4:
    // 0x3676a4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x3676a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_3676a8:
    // 0x3676a8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3676a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3676ac:
    // 0x3676ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3676acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3676b0:
    // 0x3676b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3676b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3676b4:
    // 0x3676b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3676b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3676b8:
    // 0x3676b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3676b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3676bc:
    // 0x3676bc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3676bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3676c0:
    // 0x3676c0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3676c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3676c4:
    // 0x3676c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3676c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3676c8:
    // 0x3676c8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3676c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3676cc:
    // 0x3676cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3676ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3676d0:
    // 0x3676d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3676d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3676d4:
    // 0x3676d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3676d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3676d8:
    // 0x3676d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3676d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3676dc:
    // 0x3676dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3676dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3676e0:
    // 0x3676e0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x3676e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_3676e4:
    // 0x3676e4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_3676e8:
    if (ctx->pc == 0x3676E8u) {
        ctx->pc = 0x3676E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3676E4u;
        // 0x3676e8: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3676ECu;
        goto label_3676ec;
    }
    ctx->pc = 0x3676E4u;
    {
        const bool branch_taken_0x3676e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3676E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3676E4u;
        // 0x3676e8: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3676e4) {
            ctx->pc = 0x367760u;
            goto label_367760;
        }
    }
    ctx->pc = 0x3676ECu;
label_3676ec:
    // 0x3676ec: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x3676ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
label_3676f0:
    // 0x3676f0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_3676f4:
    if (ctx->pc == 0x3676F4u) {
        ctx->pc = 0x3676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3676F0u;
        // 0x3676f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3676F8u;
        goto label_3676f8;
    }
    ctx->pc = 0x3676F0u;
    {
        const bool branch_taken_0x3676f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3676F0u;
        // 0x3676f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3676f0) {
            ctx->pc = 0x367718u;
            goto label_367718;
        }
    }
    ctx->pc = 0x3676F8u;
label_3676f8:
    // 0x3676f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3676f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3676fc:
    // 0x3676fc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3676fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_367700:
    // 0x367700: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x367700u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_367704:
    // 0x367704: 0x91a82  srl         $v1, $t1, 10
    ctx->pc = 0x367704u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_367708:
    // 0x367708: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x367708u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_36770c:
    // 0x36770c: 0x10000005  b           . + 4 + (0x5 << 2)
label_367710:
    if (ctx->pc == 0x367710u) {
        ctx->pc = 0x367710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36770Cu;
        // 0x367710: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367714u;
        goto label_367714;
    }
    ctx->pc = 0x36770Cu;
    {
        const bool branch_taken_0x36770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36770Cu;
        // 0x367710: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36770c) {
            ctx->pc = 0x367724u;
            goto label_367724;
        }
    }
    ctx->pc = 0x367714u;
label_367714:
    // 0x367714: 0x0  nop
    ctx->pc = 0x367714u;
    // NOP
label_367718:
    // 0x367718: 0x91282  srl         $v0, $t1, 10
    ctx->pc = 0x367718u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_36771c:
    // 0x36771c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x36771cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367720:
    // 0x367720: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x367720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_367724:
    // 0x367724: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367724u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367728:
    // 0x367728: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36772c:
    // 0x36772c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36772cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367730:
    // 0x367730: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367734:
    // 0x367734: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367738:
    // 0x367738: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36773c:
    // 0x36773c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36773cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367740:
    // 0x367740: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367744:
    // 0x367744: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367748:
    // 0x367748: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36774c:
    // 0x36774c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36774cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367750:
    // 0x367750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367754:
    // 0x367754: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367754u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367758:
    // 0x367758: 0x10000004  b           . + 4 + (0x4 << 2)
label_36775c:
    if (ctx->pc == 0x36775Cu) {
        ctx->pc = 0x36775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367758u;
        // 0x36775c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367760u;
        goto label_367760;
    }
    ctx->pc = 0x367758u;
    {
        const bool branch_taken_0x367758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367758u;
        // 0x36775c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367758) {
            ctx->pc = 0x36776Cu;
            goto label_36776c;
        }
    }
    ctx->pc = 0x367760u;
label_367760:
    // 0x367760: 0x94d80  sll         $t1, $t1, 22
    ctx->pc = 0x367760u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_367764:
    // 0x367764: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x367764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_367768:
    // 0x367768: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x367768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
label_36776c:
    // 0x36776c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_367770:
    // 0x367770: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x367770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_367774:
    // 0x367774: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_367778:
    if (ctx->pc == 0x367778u) {
        ctx->pc = 0x367778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367774u;
        // 0x367778: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36777Cu;
        goto label_36777c;
    }
    ctx->pc = 0x367774u;
    {
        const bool branch_taken_0x367774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367774) {
            ctx->pc = 0x367778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367774u;
            // 0x367778: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3677BCu;
            goto label_3677bc;
        }
    }
    ctx->pc = 0x36777Cu;
label_36777c:
    // 0x36777c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x36777cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_367780:
    // 0x367780: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x367780u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_367784:
    // 0x367784: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367784u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367788:
    // 0x367788: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36778c:
    // 0x36778c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36778cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367790:
    // 0x367790: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367794:
    // 0x367794: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367798:
    // 0x367798: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36779c:
    // 0x36779c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36779cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3677a0:
    // 0x3677a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3677a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3677a4:
    // 0x3677a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3677a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3677a8:
    // 0x3677a8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3677a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3677ac:
    // 0x3677ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3677acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3677b0:
    // 0x3677b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3677b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3677b4:
    // 0x3677b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3677b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3677b8:
    // 0x3677b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3677b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3677bc:
    // 0x3677bc: 0x28a2001a  slti        $v0, $a1, 0x1A
    ctx->pc = 0x3677bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_3677c0:
    // 0x3677c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_3677c4:
    if (ctx->pc == 0x3677C4u) {
        ctx->pc = 0x3677C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677C0u;
        // 0x3677c4: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3677C8u;
        goto label_3677c8;
    }
    ctx->pc = 0x3677C0u;
    {
        const bool branch_taken_0x3677c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3677C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677C0u;
        // 0x3677c4: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3677c0) {
            ctx->pc = 0x367838u;
            goto label_367838;
        }
    }
    ctx->pc = 0x3677C8u;
label_3677c8:
    // 0x3677c8: 0x24a5ffe6  addiu       $a1, $a1, -0x1A
    ctx->pc = 0x3677c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967270));
label_3677cc:
    // 0x3677cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3677d0:
    if (ctx->pc == 0x3677D0u) {
        ctx->pc = 0x3677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677CCu;
        // 0x3677d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3677D4u;
        goto label_3677d4;
    }
    ctx->pc = 0x3677CCu;
    {
        const bool branch_taken_0x3677cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677CCu;
        // 0x3677d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3677cc) {
            ctx->pc = 0x3677F0u;
            goto label_3677f0;
        }
    }
    ctx->pc = 0x3677D4u;
label_3677d4:
    // 0x3677d4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3677d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3677d8:
    // 0x3677d8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3677d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_3677dc:
    // 0x3677dc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3677dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_3677e0:
    // 0x3677e0: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x3677e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_3677e4:
    // 0x3677e4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x3677e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_3677e8:
    // 0x3677e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3677ec:
    if (ctx->pc == 0x3677ECu) {
        ctx->pc = 0x3677ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677E8u;
        // 0x3677ec: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3677F0u;
        goto label_3677f0;
    }
    ctx->pc = 0x3677E8u;
    {
        const bool branch_taken_0x3677e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3677ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677E8u;
        // 0x3677ec: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3677e8) {
            ctx->pc = 0x3677FCu;
            goto label_3677fc;
        }
    }
    ctx->pc = 0x3677F0u;
label_3677f0:
    // 0x3677f0: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x3677f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_3677f4:
    // 0x3677f4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3677f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3677f8:
    // 0x3677f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3677f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3677fc:
    // 0x3677fc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3677fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367800:
    // 0x367800: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367804:
    // 0x367804: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367808:
    // 0x367808: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36780c:
    // 0x36780c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36780cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367810:
    // 0x367810: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367814:
    // 0x367814: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367818:
    // 0x367818: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36781c:
    // 0x36781c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36781cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367820:
    // 0x367820: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367824:
    // 0x367824: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367828:
    // 0x367828: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36782c:
    // 0x36782c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36782cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367830:
    // 0x367830: 0x10000004  b           . + 4 + (0x4 << 2)
label_367834:
    if (ctx->pc == 0x367834u) {
        ctx->pc = 0x367834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367830u;
        // 0x367834: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367838u;
        goto label_367838;
    }
    ctx->pc = 0x367830u;
    {
        const bool branch_taken_0x367830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367830u;
        // 0x367834: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367830) {
            ctx->pc = 0x367844u;
            goto label_367844;
        }
    }
    ctx->pc = 0x367838u;
label_367838:
    // 0x367838: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x367838u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_36783c:
    // 0x36783c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x36783cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_367840:
    // 0x367840: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x367840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_367844:
    // 0x367844: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x367844u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_367848:
    // 0x367848: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x367848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36784c:
    // 0x36784c: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_367850:
    if (ctx->pc == 0x367850u) {
        ctx->pc = 0x367850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36784Cu;
        // 0x367850: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367854u;
        goto label_367854;
    }
    ctx->pc = 0x36784Cu;
    {
        const bool branch_taken_0x36784c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x367850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36784Cu;
        // 0x367850: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36784c) {
            ctx->pc = 0x367898u;
            goto label_367898;
        }
    }
    ctx->pc = 0x367854u;
label_367854:
    // 0x367854: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367858:
    // 0x367858: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367858u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36785c:
    // 0x36785c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36785cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367860:
    // 0x367860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367864:
    // 0x367864: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367868:
    // 0x367868: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36786c:
    // 0x36786c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36786cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367870:
    // 0x367870: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367874:
    // 0x367874: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367878:
    // 0x367878: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36787c:
    // 0x36787c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36787cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367880:
    // 0x367880: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367884:
    // 0x367884: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367888:
    // 0x367888: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36788c:
    // 0x36788c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36788cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367890:
    // 0x367890: 0x10000003  b           . + 4 + (0x3 << 2)
label_367894:
    if (ctx->pc == 0x367894u) {
        ctx->pc = 0x367894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367890u;
        // 0x367894: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367898u;
        goto label_367898;
    }
    ctx->pc = 0x367890u;
    {
        const bool branch_taken_0x367890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367890u;
        // 0x367894: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367890) {
            ctx->pc = 0x3678A0u;
            goto label_3678a0;
        }
    }
    ctx->pc = 0x367898u;
label_367898:
    // 0x367898: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36789c:
    // 0x36789c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x36789cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3678a0:
    // 0x3678a0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x3678a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_3678a4:
    // 0x3678a4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x3678a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3678a8:
    // 0x3678a8: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_3678ac:
    if (ctx->pc == 0x3678ACu) {
        ctx->pc = 0x3678ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678A8u;
        // 0x3678ac: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3678B0u;
        goto label_3678b0;
    }
    ctx->pc = 0x3678A8u;
    {
        const bool branch_taken_0x3678a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3678ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678A8u;
        // 0x3678ac: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678a8) {
            ctx->pc = 0x3678F8u;
            goto label_3678f8;
        }
    }
    ctx->pc = 0x3678B0u;
label_3678b0:
    // 0x3678b0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3678b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3678b4:
    // 0x3678b4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3678b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3678b8:
    // 0x3678b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3678b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3678bc:
    // 0x3678bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3678bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3678c0:
    // 0x3678c0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3678c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3678c4:
    // 0x3678c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3678c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3678c8:
    // 0x3678c8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3678c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3678cc:
    // 0x3678cc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3678ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3678d0:
    // 0x3678d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3678d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3678d4:
    // 0x3678d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3678d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3678d8:
    // 0x3678d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3678d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3678dc:
    // 0x3678dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3678dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3678e0:
    // 0x3678e0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3678e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3678e4:
    // 0x3678e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3678e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3678e8:
    // 0x3678e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3678e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3678ec:
    // 0x3678ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_3678f0:
    if (ctx->pc == 0x3678F0u) {
        ctx->pc = 0x3678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678ECu;
        // 0x3678f0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3678F4u;
        goto label_3678f4;
    }
    ctx->pc = 0x3678ECu;
    {
        const bool branch_taken_0x3678ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678ECu;
        // 0x3678f0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678ec) {
            ctx->pc = 0x367900u;
            goto label_367900;
        }
    }
    ctx->pc = 0x3678F4u;
label_3678f4:
    // 0x3678f4: 0x0  nop
    ctx->pc = 0x3678f4u;
    // NOP
label_3678f8:
    // 0x3678f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3678f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3678fc:
    // 0x3678fc: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x3678fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_367900:
    // 0x367900: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x367900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_367904:
    // 0x367904: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x367904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_367908:
    // 0x367908: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_36790c:
    if (ctx->pc == 0x36790Cu) {
        ctx->pc = 0x36790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367908u;
        // 0x36790c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367910u;
        goto label_367910;
    }
    ctx->pc = 0x367908u;
    {
        const bool branch_taken_0x367908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x36790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367908u;
        // 0x36790c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367908) {
            ctx->pc = 0x367958u;
            goto label_367958;
        }
    }
    ctx->pc = 0x367910u;
label_367910:
    // 0x367910: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367914:
    // 0x367914: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367914u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367918:
    // 0x367918: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36791c:
    // 0x36791c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367920:
    // 0x367920: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367924:
    // 0x367924: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367928:
    // 0x367928: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367928u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_36792c:
    // 0x36792c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36792cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367930:
    // 0x367930: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367934:
    // 0x367934: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367938:
    // 0x367938: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367938u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_36793c:
    // 0x36793c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36793cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367940:
    // 0x367940: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367944:
    // 0x367944: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367948:
    // 0x367948: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367948u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_36794c:
    // 0x36794c: 0x10000004  b           . + 4 + (0x4 << 2)
label_367950:
    if (ctx->pc == 0x367950u) {
        ctx->pc = 0x367950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36794Cu;
        // 0x367950: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367954u;
        goto label_367954;
    }
    ctx->pc = 0x36794Cu;
    {
        const bool branch_taken_0x36794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36794Cu;
        // 0x367950: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36794c) {
            ctx->pc = 0x367960u;
            goto label_367960;
        }
    }
    ctx->pc = 0x367954u;
label_367954:
    // 0x367954: 0x0  nop
    ctx->pc = 0x367954u;
    // NOP
label_367958:
    // 0x367958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36795c:
    // 0x36795c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x36795cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_367960:
    // 0x367960: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x367960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_367964:
    // 0x367964: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x367964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_367968:
    // 0x367968: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_36796c:
    if (ctx->pc == 0x36796Cu) {
        ctx->pc = 0x36796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367968u;
        // 0x36796c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367970u;
        goto label_367970;
    }
    ctx->pc = 0x367968u;
    {
        const bool branch_taken_0x367968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x36796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367968u;
        // 0x36796c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367968) {
            ctx->pc = 0x3679B8u;
            goto label_3679b8;
        }
    }
    ctx->pc = 0x367970u;
label_367970:
    // 0x367970: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367974:
    // 0x367974: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367974u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367978:
    // 0x367978: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36797c:
    // 0x36797c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36797cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367980:
    // 0x367980: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367984:
    // 0x367984: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367988:
    // 0x367988: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367988u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_36798c:
    // 0x36798c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36798cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367990:
    // 0x367990: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367994:
    // 0x367994: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367998:
    // 0x367998: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367998u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_36799c:
    // 0x36799c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36799cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3679a0:
    // 0x3679a0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3679a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3679a4:
    // 0x3679a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3679a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3679a8:
    // 0x3679a8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3679a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3679ac:
    // 0x3679ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3679b0:
    if (ctx->pc == 0x3679B0u) {
        ctx->pc = 0x3679B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679ACu;
        // 0x3679b0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3679B4u;
        goto label_3679b4;
    }
    ctx->pc = 0x3679ACu;
    {
        const bool branch_taken_0x3679ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3679B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679ACu;
        // 0x3679b0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679ac) {
            ctx->pc = 0x3679C0u;
            goto label_3679c0;
        }
    }
    ctx->pc = 0x3679B4u;
label_3679b4:
    // 0x3679b4: 0x0  nop
    ctx->pc = 0x3679b4u;
    // NOP
label_3679b8:
    // 0x3679b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3679b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3679bc:
    // 0x3679bc: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x3679bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3679c0:
    // 0x3679c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3679c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3679c4:
    // 0x3679c4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3679c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_3679c8:
    // 0x3679c8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3679cc:
    if (ctx->pc == 0x3679CCu) {
        ctx->pc = 0x3679CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679C8u;
        // 0x3679cc: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3679D0u;
        goto label_3679d0;
    }
    ctx->pc = 0x3679C8u;
    {
        const bool branch_taken_0x3679c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3679c8) {
            ctx->pc = 0x3679CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3679C8u;
            // 0x3679cc: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367A10u;
            goto label_367a10;
        }
    }
    ctx->pc = 0x3679D0u;
label_3679d0:
    // 0x3679d0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x3679d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_3679d4:
    // 0x3679d4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x3679d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_3679d8:
    // 0x3679d8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x3679d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3679dc:
    // 0x3679dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3679dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3679e0:
    // 0x3679e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3679e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3679e4:
    // 0x3679e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3679e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3679e8:
    // 0x3679e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3679e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3679ec:
    // 0x3679ec: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3679ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3679f0:
    // 0x3679f0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3679f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3679f4:
    // 0x3679f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3679f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3679f8:
    // 0x3679f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3679f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_3679fc:
    // 0x3679fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3679fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367a00:
    // 0x367a00: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367a04:
    // 0x367a04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367a08:
    // 0x367a08: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367a08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367a0c:
    // 0x367a0c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367a10:
    // 0x367a10: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x367a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
label_367a14:
    // 0x367a14: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_367a18:
    if (ctx->pc == 0x367A18u) {
        ctx->pc = 0x367A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A14u;
        // 0x367a18: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367A1Cu;
        goto label_367a1c;
    }
    ctx->pc = 0x367A14u;
    {
        const bool branch_taken_0x367a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A14u;
        // 0x367a18: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a14) {
            ctx->pc = 0x367A90u;
            goto label_367a90;
        }
    }
    ctx->pc = 0x367A1Cu;
label_367a1c:
    // 0x367a1c: 0x24a5ffe5  addiu       $a1, $a1, -0x1B
    ctx->pc = 0x367a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967269));
label_367a20:
    // 0x367a20: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_367a24:
    if (ctx->pc == 0x367A24u) {
        ctx->pc = 0x367A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A20u;
        // 0x367a24: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367A28u;
        goto label_367a28;
    }
    ctx->pc = 0x367A20u;
    {
        const bool branch_taken_0x367a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A20u;
        // 0x367a24: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a20) {
            ctx->pc = 0x367A48u;
            goto label_367a48;
        }
    }
    ctx->pc = 0x367A28u;
label_367a28:
    // 0x367a28: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x367a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_367a2c:
    // 0x367a2c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x367a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_367a30:
    // 0x367a30: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x367a30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_367a34:
    // 0x367a34: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x367a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_367a38:
    // 0x367a38: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x367a38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_367a3c:
    // 0x367a3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_367a40:
    if (ctx->pc == 0x367A40u) {
        ctx->pc = 0x367A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A3Cu;
        // 0x367a40: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367A44u;
        goto label_367a44;
    }
    ctx->pc = 0x367A3Cu;
    {
        const bool branch_taken_0x367a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A3Cu;
        // 0x367a40: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a3c) {
            ctx->pc = 0x367A54u;
            goto label_367a54;
        }
    }
    ctx->pc = 0x367A44u;
label_367a44:
    // 0x367a44: 0x0  nop
    ctx->pc = 0x367a44u;
    // NOP
label_367a48:
    // 0x367a48: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x367a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_367a4c:
    // 0x367a4c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367a50:
    // 0x367a50: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x367a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_367a54:
    // 0x367a54: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367a54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367a58:
    // 0x367a58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367a5c:
    // 0x367a5c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367a60:
    // 0x367a60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367a64:
    // 0x367a64: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367a64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367a68:
    // 0x367a68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367a6c:
    // 0x367a6c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367a70:
    // 0x367a70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367a74:
    // 0x367a74: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367a74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367a78:
    // 0x367a78: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367a7c:
    // 0x367a7c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367a7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367a80:
    // 0x367a80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367a84:
    // 0x367a84: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367a84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367a88:
    // 0x367a88: 0x10000004  b           . + 4 + (0x4 << 2)
label_367a8c:
    if (ctx->pc == 0x367A8Cu) {
        ctx->pc = 0x367A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A88u;
        // 0x367a8c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367A90u;
        goto label_367a90;
    }
    ctx->pc = 0x367A88u;
    {
        const bool branch_taken_0x367a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A88u;
        // 0x367a8c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a88) {
            ctx->pc = 0x367A9Cu;
            goto label_367a9c;
        }
    }
    ctx->pc = 0x367A90u;
label_367a90:
    // 0x367a90: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x367a90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_367a94:
    // 0x367a94: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x367a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_367a98:
    // 0x367a98: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x367a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_367a9c:
    // 0x367a9c: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x367a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_367aa0:
    // 0x367aa0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_367aa4:
    if (ctx->pc == 0x367AA4u) {
        ctx->pc = 0x367AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AA0u;
        // 0x367aa4: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367AA8u;
        goto label_367aa8;
    }
    ctx->pc = 0x367AA0u;
    {
        const bool branch_taken_0x367aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AA0u;
        // 0x367aa4: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367aa0) {
            ctx->pc = 0x367B10u;
            goto label_367b10;
        }
    }
    ctx->pc = 0x367AA8u;
label_367aa8:
    // 0x367aa8: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x367aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_367aac:
    // 0x367aac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_367ab0:
    if (ctx->pc == 0x367AB0u) {
        ctx->pc = 0x367AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AACu;
        // 0x367ab0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367AB4u;
        goto label_367ab4;
    }
    ctx->pc = 0x367AACu;
    {
        const bool branch_taken_0x367aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AACu;
        // 0x367ab0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367aac) {
            ctx->pc = 0x367AD0u;
            goto label_367ad0;
        }
    }
    ctx->pc = 0x367AB4u;
label_367ab4:
    // 0x367ab4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x367ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_367ab8:
    // 0x367ab8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x367ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_367abc:
    // 0x367abc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x367abcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_367ac0:
    // 0x367ac0: 0x99602  srl         $s2, $t1, 24
    ctx->pc = 0x367ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_367ac4:
    // 0x367ac4: 0x10000003  b           . + 4 + (0x3 << 2)
label_367ac8:
    if (ctx->pc == 0x367AC8u) {
        ctx->pc = 0x367AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AC4u;
        // 0x367ac8: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367ACCu;
        goto label_367acc;
    }
    ctx->pc = 0x367AC4u;
    {
        const bool branch_taken_0x367ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AC4u;
        // 0x367ac8: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ac4) {
            ctx->pc = 0x367AD4u;
            goto label_367ad4;
        }
    }
    ctx->pc = 0x367ACCu;
label_367acc:
    // 0x367acc: 0x0  nop
    ctx->pc = 0x367accu;
    // NOP
label_367ad0:
    // 0x367ad0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367ad4:
    // 0x367ad4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367ad4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367ad8:
    // 0x367ad8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367adc:
    // 0x367adc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367ae0:
    // 0x367ae0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367ae4:
    // 0x367ae4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367ae8:
    // 0x367ae8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367aec:
    // 0x367aec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367af0:
    // 0x367af0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367af4:
    // 0x367af4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367af4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367af8:
    // 0x367af8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367afc:
    // 0x367afc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367b00:
    // 0x367b00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367b04:
    // 0x367b04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367b08:
    // 0x367b08: 0x10000003  b           . + 4 + (0x3 << 2)
label_367b0c:
    if (ctx->pc == 0x367B0Cu) {
        ctx->pc = 0x367B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B08u;
        // 0x367b0c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367B10u;
        goto label_367b10;
    }
    ctx->pc = 0x367B08u;
    {
        const bool branch_taken_0x367b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B08u;
        // 0x367b0c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b08) {
            ctx->pc = 0x367B18u;
            goto label_367b18;
        }
    }
    ctx->pc = 0x367B10u;
label_367b10:
    // 0x367b10: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x367b10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_367b14:
    // 0x367b14: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x367b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_367b18:
    // 0x367b18: 0x5210078  bgez        $t1, . + 4 + (0x78 << 2)
label_367b1c:
    if (ctx->pc == 0x367B1Cu) {
        ctx->pc = 0x367B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B18u;
        // 0x367b1c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367B20u;
        goto label_367b20;
    }
    ctx->pc = 0x367B18u;
    {
        const bool branch_taken_0x367b18 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x367B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B18u;
        // 0x367b1c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b18) {
            ctx->pc = 0x367CFCu;
            goto label_367cfc;
        }
    }
    ctx->pc = 0x367B20u;
label_367b20:
    // 0x367b20: 0x27ac0002  addiu       $t4, $sp, 0x2
    ctx->pc = 0x367b20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_367b24:
    // 0x367b24: 0x0  nop
    ctx->pc = 0x367b24u;
    // NOP
label_367b28:
    // 0x367b28: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x367b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_367b2c:
    // 0x367b2c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_367b30:
    if (ctx->pc == 0x367B30u) {
        ctx->pc = 0x367B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B2Cu;
        // 0x367b30: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367B34u;
        goto label_367b34;
    }
    ctx->pc = 0x367B2Cu;
    {
        const bool branch_taken_0x367b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B2Cu;
        // 0x367b30: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b2c) {
            ctx->pc = 0x367B98u;
            goto label_367b98;
        }
    }
    ctx->pc = 0x367B34u;
label_367b34:
    // 0x367b34: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x367b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_367b38:
    // 0x367b38: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_367b3c:
    if (ctx->pc == 0x367B3Cu) {
        ctx->pc = 0x367B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B38u;
        // 0x367b3c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367B40u;
        goto label_367b40;
    }
    ctx->pc = 0x367B38u;
    {
        const bool branch_taken_0x367b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B38u;
        // 0x367b3c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b38) {
            ctx->pc = 0x367B58u;
            goto label_367b58;
        }
    }
    ctx->pc = 0x367B40u;
label_367b40:
    // 0x367b40: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x367b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_367b44:
    // 0x367b44: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_367b48:
    // 0x367b48: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x367b48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_367b4c:
    // 0x367b4c: 0x93602  srl         $a2, $t1, 24
    ctx->pc = 0x367b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_367b50:
    // 0x367b50: 0x10000002  b           . + 4 + (0x2 << 2)
label_367b54:
    if (ctx->pc == 0x367B54u) {
        ctx->pc = 0x367B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B50u;
        // 0x367b54: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367B58u;
        goto label_367b58;
    }
    ctx->pc = 0x367B50u;
    {
        const bool branch_taken_0x367b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B50u;
        // 0x367b54: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b50) {
            ctx->pc = 0x367B5Cu;
            goto label_367b5c;
        }
    }
    ctx->pc = 0x367B58u;
label_367b58:
    // 0x367b58: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367b5c:
    // 0x367b5c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367b5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367b60:
    // 0x367b60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367b64:
    // 0x367b64: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367b68:
    // 0x367b68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367b6c:
    // 0x367b6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367b70:
    // 0x367b70: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367b74:
    // 0x367b74: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367b78:
    // 0x367b78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367b7c:
    // 0x367b7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367b80:
    // 0x367b80: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367b84:
    // 0x367b84: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367b84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367b88:
    // 0x367b88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367b8c:
    // 0x367b8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367b90:
    // 0x367b90: 0x10000003  b           . + 4 + (0x3 << 2)
label_367b94:
    if (ctx->pc == 0x367B94u) {
        ctx->pc = 0x367B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B90u;
        // 0x367b94: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367B98u;
        goto label_367b98;
    }
    ctx->pc = 0x367B90u;
    {
        const bool branch_taken_0x367b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B90u;
        // 0x367b94: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b90) {
            ctx->pc = 0x367BA0u;
            goto label_367ba0;
        }
    }
    ctx->pc = 0x367B98u;
label_367b98:
    // 0x367b98: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x367b98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_367b9c:
    // 0x367b9c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x367b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_367ba0:
    // 0x367ba0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x367ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_367ba4:
    // 0x367ba4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x367ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_367ba8:
    // 0x367ba8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_367bac:
    if (ctx->pc == 0x367BACu) {
        ctx->pc = 0x367BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BA8u;
        // 0x367bac: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367BB0u;
        goto label_367bb0;
    }
    ctx->pc = 0x367BA8u;
    {
        const bool branch_taken_0x367ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367ba8) {
            ctx->pc = 0x367BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367BA8u;
            // 0x367bac: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367BF0u;
            goto label_367bf0;
        }
    }
    ctx->pc = 0x367BB0u;
label_367bb0:
    // 0x367bb0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x367bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_367bb4:
    // 0x367bb4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x367bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_367bb8:
    // 0x367bb8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367bb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367bbc:
    // 0x367bbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367bc0:
    // 0x367bc0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367bc4:
    // 0x367bc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367bc8:
    // 0x367bc8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367bcc:
    // 0x367bcc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367bd0:
    // 0x367bd0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367bd4:
    // 0x367bd4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367bd8:
    // 0x367bd8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367bdc:
    // 0x367bdc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367be0:
    // 0x367be0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367be4:
    // 0x367be4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367be8:
    // 0x367be8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367be8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367bec:
    // 0x367bec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367becu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367bf0:
    // 0x367bf0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x367bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_367bf4:
    // 0x367bf4: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
label_367bf8:
    if (ctx->pc == 0x367BF8u) {
        ctx->pc = 0x367BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BF4u;
        // 0x367bf8: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367BFCu;
        goto label_367bfc;
    }
    ctx->pc = 0x367BF4u;
    {
        const bool branch_taken_0x367bf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x367BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BF4u;
        // 0x367bf8: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367bf4) {
            ctx->pc = 0x367C40u;
            goto label_367c40;
        }
    }
    ctx->pc = 0x367BFCu;
label_367bfc:
    // 0x367bfc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367c00:
    // 0x367c00: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367c00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c04:
    // 0x367c04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c08:
    // 0x367c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367c0c:
    // 0x367c0c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c10:
    // 0x367c10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c14:
    // 0x367c14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367c14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367c18:
    // 0x367c18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c1c:
    // 0x367c1c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367c20:
    // 0x367c20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c24:
    // 0x367c24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367c24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367c28:
    // 0x367c28: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c2c:
    // 0x367c2c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367c30:
    // 0x367c30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c34:
    // 0x367c34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367c34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367c38:
    // 0x367c38: 0x10000003  b           . + 4 + (0x3 << 2)
label_367c3c:
    if (ctx->pc == 0x367C3Cu) {
        ctx->pc = 0x367C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C38u;
        // 0x367c3c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367C40u;
        goto label_367c40;
    }
    ctx->pc = 0x367C38u;
    {
        const bool branch_taken_0x367c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C38u;
        // 0x367c3c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c38) {
            ctx->pc = 0x367C48u;
            goto label_367c48;
        }
    }
    ctx->pc = 0x367C40u;
label_367c40:
    // 0x367c40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_367c44:
    // 0x367c44: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x367c44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_367c48:
    // 0x367c48: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x367c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_367c4c:
    // 0x367c4c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_367c50:
    if (ctx->pc == 0x367C50u) {
        ctx->pc = 0x367C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C4Cu;
        // 0x367c50: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367C54u;
        goto label_367c54;
    }
    ctx->pc = 0x367C4Cu;
    {
        const bool branch_taken_0x367c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C4Cu;
        // 0x367c50: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c4c) {
            ctx->pc = 0x367CB8u;
            goto label_367cb8;
        }
    }
    ctx->pc = 0x367C54u;
label_367c54:
    // 0x367c54: 0x24a5ffed  addiu       $a1, $a1, -0x13
    ctx->pc = 0x367c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967277));
label_367c58:
    // 0x367c58: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_367c5c:
    if (ctx->pc == 0x367C5Cu) {
        ctx->pc = 0x367C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C58u;
        // 0x367c5c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367C60u;
        goto label_367c60;
    }
    ctx->pc = 0x367C58u;
    {
        const bool branch_taken_0x367c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C58u;
        // 0x367c5c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c58) {
            ctx->pc = 0x367C78u;
            goto label_367c78;
        }
    }
    ctx->pc = 0x367C60u;
label_367c60:
    // 0x367c60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x367c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_367c64:
    // 0x367c64: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x367c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_367c68:
    // 0x367c68: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x367c68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_367c6c:
    // 0x367c6c: 0x924c2  srl         $a0, $t1, 19
    ctx->pc = 0x367c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
label_367c70:
    // 0x367c70: 0x10000002  b           . + 4 + (0x2 << 2)
label_367c74:
    if (ctx->pc == 0x367C74u) {
        ctx->pc = 0x367C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C70u;
        // 0x367c74: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367C78u;
        goto label_367c78;
    }
    ctx->pc = 0x367C70u;
    {
        const bool branch_taken_0x367c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C70u;
        // 0x367c74: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c70) {
            ctx->pc = 0x367C7Cu;
            goto label_367c7c;
        }
    }
    ctx->pc = 0x367C78u;
label_367c78:
    // 0x367c78: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x367c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_367c7c:
    // 0x367c7c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x367c7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c80:
    // 0x367c80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c84:
    // 0x367c84: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c88:
    // 0x367c88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c8c:
    // 0x367c8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367c90:
    // 0x367c90: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x367c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367c94:
    // 0x367c94: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x367c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_367c98:
    // 0x367c98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367c9c:
    // 0x367c9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367ca0:
    // 0x367ca0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x367ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_367ca4:
    // 0x367ca4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x367ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_367ca8:
    // 0x367ca8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x367ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_367cac:
    // 0x367cac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x367cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_367cb0:
    // 0x367cb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_367cb4:
    if (ctx->pc == 0x367CB4u) {
        ctx->pc = 0x367CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CB0u;
        // 0x367cb4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367CB8u;
        goto label_367cb8;
    }
    ctx->pc = 0x367CB0u;
    {
        const bool branch_taken_0x367cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CB0u;
        // 0x367cb4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367cb0) {
            ctx->pc = 0x367CC0u;
            goto label_367cc0;
        }
    }
    ctx->pc = 0x367CB8u;
label_367cb8:
    // 0x367cb8: 0x94b40  sll         $t1, $t1, 13
    ctx->pc = 0x367cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_367cbc:
    // 0x367cbc: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x367cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_367cc0:
    // 0x367cc0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x367cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_367cc4:
    // 0x367cc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x367cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_367cc8:
    // 0x367cc8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x367cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_367ccc:
    // 0x367ccc: 0xa0460010  sb          $a2, 0x10($v0)
    ctx->pc = 0x367cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
label_367cd0:
    // 0x367cd0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x367cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_367cd4:
    // 0x367cd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_367cd8:
    // 0x367cd8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x367cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_367cdc:
    // 0x367cdc: 0xa06a0011  sb          $t2, 0x11($v1)
    ctx->pc = 0x367cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 10));
label_367ce0:
    // 0x367ce0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x367ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_367ce4:
    // 0x367ce4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x367ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_367ce8:
    // 0x367ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367cec:
    // 0x367cec: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x367cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_367cf0:
    // 0x367cf0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x367cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_367cf4:
    // 0x367cf4: 0x520ff8c  bltz        $t1, . + 4 + (-0x74 << 2)
label_367cf8:
    if (ctx->pc == 0x367CF8u) {
        ctx->pc = 0x367CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CF4u;
        // 0x367cf8: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367CFCu;
        goto label_367cfc;
    }
    ctx->pc = 0x367CF4u;
    {
        const bool branch_taken_0x367cf4 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x367CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CF4u;
        // 0x367cf8: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367cf4) {
            ctx->pc = 0x367B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367b28;
        }
    }
    ctx->pc = 0x367CFCu;
label_367cfc:
    // 0x367cfc: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x367cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_367d00:
    // 0x367d00: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x367d00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_367d04:
    // 0x367d04: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x367d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_367d08:
    // 0x367d08: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x367d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_367d0c:
    // 0x367d0c: 0x8b1023  subu        $v0, $a0, $t3
    ctx->pc = 0x367d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_367d10:
    // 0x367d10: 0xc0da28a  jal         func_368A28
label_367d14:
    if (ctx->pc == 0x367D14u) {
        ctx->pc = 0x367D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D10u;
        // 0x367d14: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367D18u;
        goto label_367d18;
    }
    ctx->pc = 0x367D10u;
    SET_GPR_U32(ctx, 31, 0x367D18u);
    ctx->pc = 0x367D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D10u;
    // 0x367d14: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A28u, 0x367D10u, 0x367D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D18u;
label_367d18:
    // 0x367d18: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_367d1c:
    if (ctx->pc == 0x367D1Cu) {
        ctx->pc = 0x367D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D18u;
        // 0x367d1c: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367D20u;
        goto label_367d20;
    }
    ctx->pc = 0x367D18u;
    {
        const bool branch_taken_0x367d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367d18) {
            ctx->pc = 0x367D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367D18u;
            // 0x367d1c: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367D44u;
            goto label_367d44;
        }
    }
    ctx->pc = 0x367D20u;
label_367d20:
    // 0x367d20: 0xc0da28a  jal         func_368A28
label_367d24:
    if (ctx->pc == 0x367D24u) {
        ctx->pc = 0x367D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D20u;
        // 0x367d24: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367D28u;
        goto label_367d28;
    }
    ctx->pc = 0x367D20u;
    SET_GPR_U32(ctx, 31, 0x367D28u);
    ctx->pc = 0x367D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D20u;
    // 0x367d24: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A28u, 0x367D20u, 0x367D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D28u;
label_367d28:
    // 0x367d28: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x367d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_367d2c:
    // 0x367d2c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_367d30:
    if (ctx->pc == 0x367D30u) {
        ctx->pc = 0x367D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D2Cu;
        // 0x367d30: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367D34u;
        goto label_367d34;
    }
    ctx->pc = 0x367D2Cu;
    {
        const bool branch_taken_0x367d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x367d2c) {
            ctx->pc = 0x367D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367D2Cu;
            // 0x367d30: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367D44u;
            goto label_367d44;
        }
    }
    ctx->pc = 0x367D34u;
label_367d34:
    // 0x367d34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x367d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_367d38:
    // 0x367d38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367d3c:
    // 0x367d3c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x367d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_367d40:
    // 0x367d40: 0x8e8c00e4  lw          $t4, 0xE4($s4)
    ctx->pc = 0x367d40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_367d44:
    // 0x367d44: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
label_367d48:
    if (ctx->pc == 0x367D48u) {
        ctx->pc = 0x367D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D44u;
        // 0x367d48: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x367D4Cu;
        goto label_367d4c;
    }
    ctx->pc = 0x367D44u;
    {
        const bool branch_taken_0x367d44 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x367D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D44u;
        // 0x367d48: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367d44) {
            ctx->pc = 0x367D9Cu;
            goto label_367d9c;
        }
    }
    ctx->pc = 0x367D4Cu;
label_367d4c:
    // 0x367d4c: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x367d4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_367d50:
    // 0x367d50: 0x922a000c  lbu         $t2, 0xC($s1)
    ctx->pc = 0x367d50u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_367d54:
    // 0x367d54: 0x1249c2  srl         $t1, $s2, 7
    ctx->pc = 0x367d54u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_367d58:
    // 0x367d58: 0x92270008  lbu         $a3, 0x8($s1)
    ctx->pc = 0x367d58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_367d5c:
    // 0x367d5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x367d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_367d60:
    // 0x367d60: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x367d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_367d64:
    // 0x367d64: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x367d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_367d68:
    // 0x367d68: 0x9226001c  lbu         $a2, 0x1C($s1)
    ctx->pc = 0x367d68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_367d6c:
    // 0x367d6c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x367d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_367d70:
    // 0x367d70: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x367d70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
label_367d74:
    // 0x367d74: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x367d74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
label_367d78:
    // 0x367d78: 0xa3a30006  sb          $v1, 0x6($sp)
    ctx->pc = 0x367d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 3));
label_367d7c:
    // 0x367d7c: 0xa3a40007  sb          $a0, 0x7($sp)
    ctx->pc = 0x367d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 4));
label_367d80:
    // 0x367d80: 0xa3a60008  sb          $a2, 0x8($sp)
    ctx->pc = 0x367d80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 6));
label_367d84:
    // 0x367d84: 0xa3aa0009  sb          $t2, 0x9($sp)
    ctx->pc = 0x367d84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 10));
label_367d88:
    // 0x367d88: 0xa3a9000a  sb          $t1, 0xA($sp)
    ctx->pc = 0x367d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 9));
label_367d8c:
    // 0x367d8c: 0xa3ab000b  sb          $t3, 0xB($sp)
    ctx->pc = 0x367d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 11));
label_367d90:
    // 0x367d90: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x367d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_367d94:
    // 0x367d94: 0x180f809  jalr        $t4
label_367d98:
    if (ctx->pc == 0x367D98u) {
        ctx->pc = 0x367D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D94u;
        // 0x367d98: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367D9Cu;
        goto label_367d9c;
    }
    ctx->pc = 0x367D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x367D9Cu);
        ctx->pc = 0x367D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D94u;
        // 0x367d98: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367D94u, 0x367D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x367D9Cu;
label_367d9c:
    // 0x367d9c: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x367d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_367da0:
    // 0x367da0: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x367da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_367da4:
    // 0x367da4: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x367da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_367da8:
    // 0x367da8: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x367da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_367dac:
    // 0x367dac: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x367dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_367db0:
    // 0x367db0: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x367db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_367db4:
    // 0x367db4: 0x3e00008  jr          $ra
label_367db8:
    if (ctx->pc == 0x367DB8u) {
        ctx->pc = 0x367DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367DB4u;
        // 0x367db8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367DBCu;
        goto label_367dbc;
    }
    ctx->pc = 0x367DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367DB4u;
        // 0x367db8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367DBCu;
label_367dbc:
    // 0x367dbc: 0x0  nop
    ctx->pc = 0x367dbcu;
    // NOP
    ctx->pc = 0x367dc0u;
}
