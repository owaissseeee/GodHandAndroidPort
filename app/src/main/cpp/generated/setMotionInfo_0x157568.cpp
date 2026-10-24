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

// Function: setMotionInfo
// Address: 0x157568 - 0x157c18
void setMotionInfo_0x157568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setMotionInfo_0x157568");
#endif

    switch (ctx->pc) {
        case 0x157568u: goto label_157568;
        case 0x15756cu: goto label_15756c;
        case 0x157570u: goto label_157570;
        case 0x157574u: goto label_157574;
        case 0x157578u: goto label_157578;
        case 0x15757cu: goto label_15757c;
        case 0x157580u: goto label_157580;
        case 0x157584u: goto label_157584;
        case 0x157588u: goto label_157588;
        case 0x15758cu: goto label_15758c;
        case 0x157590u: goto label_157590;
        case 0x157594u: goto label_157594;
        case 0x157598u: goto label_157598;
        case 0x15759cu: goto label_15759c;
        case 0x1575a0u: goto label_1575a0;
        case 0x1575a4u: goto label_1575a4;
        case 0x1575a8u: goto label_1575a8;
        case 0x1575acu: goto label_1575ac;
        case 0x1575b0u: goto label_1575b0;
        case 0x1575b4u: goto label_1575b4;
        case 0x1575b8u: goto label_1575b8;
        case 0x1575bcu: goto label_1575bc;
        case 0x1575c0u: goto label_1575c0;
        case 0x1575c4u: goto label_1575c4;
        case 0x1575c8u: goto label_1575c8;
        case 0x1575ccu: goto label_1575cc;
        case 0x1575d0u: goto label_1575d0;
        case 0x1575d4u: goto label_1575d4;
        case 0x1575d8u: goto label_1575d8;
        case 0x1575dcu: goto label_1575dc;
        case 0x1575e0u: goto label_1575e0;
        case 0x1575e4u: goto label_1575e4;
        case 0x1575e8u: goto label_1575e8;
        case 0x1575ecu: goto label_1575ec;
        case 0x1575f0u: goto label_1575f0;
        case 0x1575f4u: goto label_1575f4;
        case 0x1575f8u: goto label_1575f8;
        case 0x1575fcu: goto label_1575fc;
        case 0x157600u: goto label_157600;
        case 0x157604u: goto label_157604;
        case 0x157608u: goto label_157608;
        case 0x15760cu: goto label_15760c;
        case 0x157610u: goto label_157610;
        case 0x157614u: goto label_157614;
        case 0x157618u: goto label_157618;
        case 0x15761cu: goto label_15761c;
        case 0x157620u: goto label_157620;
        case 0x157624u: goto label_157624;
        case 0x157628u: goto label_157628;
        case 0x15762cu: goto label_15762c;
        case 0x157630u: goto label_157630;
        case 0x157634u: goto label_157634;
        case 0x157638u: goto label_157638;
        case 0x15763cu: goto label_15763c;
        case 0x157640u: goto label_157640;
        case 0x157644u: goto label_157644;
        case 0x157648u: goto label_157648;
        case 0x15764cu: goto label_15764c;
        case 0x157650u: goto label_157650;
        case 0x157654u: goto label_157654;
        case 0x157658u: goto label_157658;
        case 0x15765cu: goto label_15765c;
        case 0x157660u: goto label_157660;
        case 0x157664u: goto label_157664;
        case 0x157668u: goto label_157668;
        case 0x15766cu: goto label_15766c;
        case 0x157670u: goto label_157670;
        case 0x157674u: goto label_157674;
        case 0x157678u: goto label_157678;
        case 0x15767cu: goto label_15767c;
        case 0x157680u: goto label_157680;
        case 0x157684u: goto label_157684;
        case 0x157688u: goto label_157688;
        case 0x15768cu: goto label_15768c;
        case 0x157690u: goto label_157690;
        case 0x157694u: goto label_157694;
        case 0x157698u: goto label_157698;
        case 0x15769cu: goto label_15769c;
        case 0x1576a0u: goto label_1576a0;
        case 0x1576a4u: goto label_1576a4;
        case 0x1576a8u: goto label_1576a8;
        case 0x1576acu: goto label_1576ac;
        case 0x1576b0u: goto label_1576b0;
        case 0x1576b4u: goto label_1576b4;
        case 0x1576b8u: goto label_1576b8;
        case 0x1576bcu: goto label_1576bc;
        case 0x1576c0u: goto label_1576c0;
        case 0x1576c4u: goto label_1576c4;
        case 0x1576c8u: goto label_1576c8;
        case 0x1576ccu: goto label_1576cc;
        case 0x1576d0u: goto label_1576d0;
        case 0x1576d4u: goto label_1576d4;
        case 0x1576d8u: goto label_1576d8;
        case 0x1576dcu: goto label_1576dc;
        case 0x1576e0u: goto label_1576e0;
        case 0x1576e4u: goto label_1576e4;
        case 0x1576e8u: goto label_1576e8;
        case 0x1576ecu: goto label_1576ec;
        case 0x1576f0u: goto label_1576f0;
        case 0x1576f4u: goto label_1576f4;
        case 0x1576f8u: goto label_1576f8;
        case 0x1576fcu: goto label_1576fc;
        case 0x157700u: goto label_157700;
        case 0x157704u: goto label_157704;
        case 0x157708u: goto label_157708;
        case 0x15770cu: goto label_15770c;
        case 0x157710u: goto label_157710;
        case 0x157714u: goto label_157714;
        case 0x157718u: goto label_157718;
        case 0x15771cu: goto label_15771c;
        case 0x157720u: goto label_157720;
        case 0x157724u: goto label_157724;
        case 0x157728u: goto label_157728;
        case 0x15772cu: goto label_15772c;
        case 0x157730u: goto label_157730;
        case 0x157734u: goto label_157734;
        case 0x157738u: goto label_157738;
        case 0x15773cu: goto label_15773c;
        case 0x157740u: goto label_157740;
        case 0x157744u: goto label_157744;
        case 0x157748u: goto label_157748;
        case 0x15774cu: goto label_15774c;
        case 0x157750u: goto label_157750;
        case 0x157754u: goto label_157754;
        case 0x157758u: goto label_157758;
        case 0x15775cu: goto label_15775c;
        case 0x157760u: goto label_157760;
        case 0x157764u: goto label_157764;
        case 0x157768u: goto label_157768;
        case 0x15776cu: goto label_15776c;
        case 0x157770u: goto label_157770;
        case 0x157774u: goto label_157774;
        case 0x157778u: goto label_157778;
        case 0x15777cu: goto label_15777c;
        case 0x157780u: goto label_157780;
        case 0x157784u: goto label_157784;
        case 0x157788u: goto label_157788;
        case 0x15778cu: goto label_15778c;
        case 0x157790u: goto label_157790;
        case 0x157794u: goto label_157794;
        case 0x157798u: goto label_157798;
        case 0x15779cu: goto label_15779c;
        case 0x1577a0u: goto label_1577a0;
        case 0x1577a4u: goto label_1577a4;
        case 0x1577a8u: goto label_1577a8;
        case 0x1577acu: goto label_1577ac;
        case 0x1577b0u: goto label_1577b0;
        case 0x1577b4u: goto label_1577b4;
        case 0x1577b8u: goto label_1577b8;
        case 0x1577bcu: goto label_1577bc;
        case 0x1577c0u: goto label_1577c0;
        case 0x1577c4u: goto label_1577c4;
        case 0x1577c8u: goto label_1577c8;
        case 0x1577ccu: goto label_1577cc;
        case 0x1577d0u: goto label_1577d0;
        case 0x1577d4u: goto label_1577d4;
        case 0x1577d8u: goto label_1577d8;
        case 0x1577dcu: goto label_1577dc;
        case 0x1577e0u: goto label_1577e0;
        case 0x1577e4u: goto label_1577e4;
        case 0x1577e8u: goto label_1577e8;
        case 0x1577ecu: goto label_1577ec;
        case 0x1577f0u: goto label_1577f0;
        case 0x1577f4u: goto label_1577f4;
        case 0x1577f8u: goto label_1577f8;
        case 0x1577fcu: goto label_1577fc;
        case 0x157800u: goto label_157800;
        case 0x157804u: goto label_157804;
        case 0x157808u: goto label_157808;
        case 0x15780cu: goto label_15780c;
        case 0x157810u: goto label_157810;
        case 0x157814u: goto label_157814;
        case 0x157818u: goto label_157818;
        case 0x15781cu: goto label_15781c;
        case 0x157820u: goto label_157820;
        case 0x157824u: goto label_157824;
        case 0x157828u: goto label_157828;
        case 0x15782cu: goto label_15782c;
        case 0x157830u: goto label_157830;
        case 0x157834u: goto label_157834;
        case 0x157838u: goto label_157838;
        case 0x15783cu: goto label_15783c;
        case 0x157840u: goto label_157840;
        case 0x157844u: goto label_157844;
        case 0x157848u: goto label_157848;
        case 0x15784cu: goto label_15784c;
        case 0x157850u: goto label_157850;
        case 0x157854u: goto label_157854;
        case 0x157858u: goto label_157858;
        case 0x15785cu: goto label_15785c;
        case 0x157860u: goto label_157860;
        case 0x157864u: goto label_157864;
        case 0x157868u: goto label_157868;
        case 0x15786cu: goto label_15786c;
        case 0x157870u: goto label_157870;
        case 0x157874u: goto label_157874;
        case 0x157878u: goto label_157878;
        case 0x15787cu: goto label_15787c;
        case 0x157880u: goto label_157880;
        case 0x157884u: goto label_157884;
        case 0x157888u: goto label_157888;
        case 0x15788cu: goto label_15788c;
        case 0x157890u: goto label_157890;
        case 0x157894u: goto label_157894;
        case 0x157898u: goto label_157898;
        case 0x15789cu: goto label_15789c;
        case 0x1578a0u: goto label_1578a0;
        case 0x1578a4u: goto label_1578a4;
        case 0x1578a8u: goto label_1578a8;
        case 0x1578acu: goto label_1578ac;
        case 0x1578b0u: goto label_1578b0;
        case 0x1578b4u: goto label_1578b4;
        case 0x1578b8u: goto label_1578b8;
        case 0x1578bcu: goto label_1578bc;
        case 0x1578c0u: goto label_1578c0;
        case 0x1578c4u: goto label_1578c4;
        case 0x1578c8u: goto label_1578c8;
        case 0x1578ccu: goto label_1578cc;
        case 0x1578d0u: goto label_1578d0;
        case 0x1578d4u: goto label_1578d4;
        case 0x1578d8u: goto label_1578d8;
        case 0x1578dcu: goto label_1578dc;
        case 0x1578e0u: goto label_1578e0;
        case 0x1578e4u: goto label_1578e4;
        case 0x1578e8u: goto label_1578e8;
        case 0x1578ecu: goto label_1578ec;
        case 0x1578f0u: goto label_1578f0;
        case 0x1578f4u: goto label_1578f4;
        case 0x1578f8u: goto label_1578f8;
        case 0x1578fcu: goto label_1578fc;
        case 0x157900u: goto label_157900;
        case 0x157904u: goto label_157904;
        case 0x157908u: goto label_157908;
        case 0x15790cu: goto label_15790c;
        case 0x157910u: goto label_157910;
        case 0x157914u: goto label_157914;
        case 0x157918u: goto label_157918;
        case 0x15791cu: goto label_15791c;
        case 0x157920u: goto label_157920;
        case 0x157924u: goto label_157924;
        case 0x157928u: goto label_157928;
        case 0x15792cu: goto label_15792c;
        case 0x157930u: goto label_157930;
        case 0x157934u: goto label_157934;
        case 0x157938u: goto label_157938;
        case 0x15793cu: goto label_15793c;
        case 0x157940u: goto label_157940;
        case 0x157944u: goto label_157944;
        case 0x157948u: goto label_157948;
        case 0x15794cu: goto label_15794c;
        case 0x157950u: goto label_157950;
        case 0x157954u: goto label_157954;
        case 0x157958u: goto label_157958;
        case 0x15795cu: goto label_15795c;
        case 0x157960u: goto label_157960;
        case 0x157964u: goto label_157964;
        case 0x157968u: goto label_157968;
        case 0x15796cu: goto label_15796c;
        case 0x157970u: goto label_157970;
        case 0x157974u: goto label_157974;
        case 0x157978u: goto label_157978;
        case 0x15797cu: goto label_15797c;
        case 0x157980u: goto label_157980;
        case 0x157984u: goto label_157984;
        case 0x157988u: goto label_157988;
        case 0x15798cu: goto label_15798c;
        case 0x157990u: goto label_157990;
        case 0x157994u: goto label_157994;
        case 0x157998u: goto label_157998;
        case 0x15799cu: goto label_15799c;
        case 0x1579a0u: goto label_1579a0;
        case 0x1579a4u: goto label_1579a4;
        case 0x1579a8u: goto label_1579a8;
        case 0x1579acu: goto label_1579ac;
        case 0x1579b0u: goto label_1579b0;
        case 0x1579b4u: goto label_1579b4;
        case 0x1579b8u: goto label_1579b8;
        case 0x1579bcu: goto label_1579bc;
        case 0x1579c0u: goto label_1579c0;
        case 0x1579c4u: goto label_1579c4;
        case 0x1579c8u: goto label_1579c8;
        case 0x1579ccu: goto label_1579cc;
        case 0x1579d0u: goto label_1579d0;
        case 0x1579d4u: goto label_1579d4;
        case 0x1579d8u: goto label_1579d8;
        case 0x1579dcu: goto label_1579dc;
        case 0x1579e0u: goto label_1579e0;
        case 0x1579e4u: goto label_1579e4;
        case 0x1579e8u: goto label_1579e8;
        case 0x1579ecu: goto label_1579ec;
        case 0x1579f0u: goto label_1579f0;
        case 0x1579f4u: goto label_1579f4;
        case 0x1579f8u: goto label_1579f8;
        case 0x1579fcu: goto label_1579fc;
        case 0x157a00u: goto label_157a00;
        case 0x157a04u: goto label_157a04;
        case 0x157a08u: goto label_157a08;
        case 0x157a0cu: goto label_157a0c;
        case 0x157a10u: goto label_157a10;
        case 0x157a14u: goto label_157a14;
        case 0x157a18u: goto label_157a18;
        case 0x157a1cu: goto label_157a1c;
        case 0x157a20u: goto label_157a20;
        case 0x157a24u: goto label_157a24;
        case 0x157a28u: goto label_157a28;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a30u: goto label_157a30;
        case 0x157a34u: goto label_157a34;
        case 0x157a38u: goto label_157a38;
        case 0x157a3cu: goto label_157a3c;
        case 0x157a40u: goto label_157a40;
        case 0x157a44u: goto label_157a44;
        case 0x157a48u: goto label_157a48;
        case 0x157a4cu: goto label_157a4c;
        case 0x157a50u: goto label_157a50;
        case 0x157a54u: goto label_157a54;
        case 0x157a58u: goto label_157a58;
        case 0x157a5cu: goto label_157a5c;
        case 0x157a60u: goto label_157a60;
        case 0x157a64u: goto label_157a64;
        case 0x157a68u: goto label_157a68;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a70u: goto label_157a70;
        case 0x157a74u: goto label_157a74;
        case 0x157a78u: goto label_157a78;
        case 0x157a7cu: goto label_157a7c;
        case 0x157a80u: goto label_157a80;
        case 0x157a84u: goto label_157a84;
        case 0x157a88u: goto label_157a88;
        case 0x157a8cu: goto label_157a8c;
        case 0x157a90u: goto label_157a90;
        case 0x157a94u: goto label_157a94;
        case 0x157a98u: goto label_157a98;
        case 0x157a9cu: goto label_157a9c;
        case 0x157aa0u: goto label_157aa0;
        case 0x157aa4u: goto label_157aa4;
        case 0x157aa8u: goto label_157aa8;
        case 0x157aacu: goto label_157aac;
        case 0x157ab0u: goto label_157ab0;
        case 0x157ab4u: goto label_157ab4;
        case 0x157ab8u: goto label_157ab8;
        case 0x157abcu: goto label_157abc;
        case 0x157ac0u: goto label_157ac0;
        case 0x157ac4u: goto label_157ac4;
        case 0x157ac8u: goto label_157ac8;
        case 0x157accu: goto label_157acc;
        case 0x157ad0u: goto label_157ad0;
        case 0x157ad4u: goto label_157ad4;
        case 0x157ad8u: goto label_157ad8;
        case 0x157adcu: goto label_157adc;
        case 0x157ae0u: goto label_157ae0;
        case 0x157ae4u: goto label_157ae4;
        case 0x157ae8u: goto label_157ae8;
        case 0x157aecu: goto label_157aec;
        case 0x157af0u: goto label_157af0;
        case 0x157af4u: goto label_157af4;
        case 0x157af8u: goto label_157af8;
        case 0x157afcu: goto label_157afc;
        case 0x157b00u: goto label_157b00;
        case 0x157b04u: goto label_157b04;
        case 0x157b08u: goto label_157b08;
        case 0x157b0cu: goto label_157b0c;
        case 0x157b10u: goto label_157b10;
        case 0x157b14u: goto label_157b14;
        case 0x157b18u: goto label_157b18;
        case 0x157b1cu: goto label_157b1c;
        case 0x157b20u: goto label_157b20;
        case 0x157b24u: goto label_157b24;
        case 0x157b28u: goto label_157b28;
        case 0x157b2cu: goto label_157b2c;
        case 0x157b30u: goto label_157b30;
        case 0x157b34u: goto label_157b34;
        case 0x157b38u: goto label_157b38;
        case 0x157b3cu: goto label_157b3c;
        case 0x157b40u: goto label_157b40;
        case 0x157b44u: goto label_157b44;
        case 0x157b48u: goto label_157b48;
        case 0x157b4cu: goto label_157b4c;
        case 0x157b50u: goto label_157b50;
        case 0x157b54u: goto label_157b54;
        case 0x157b58u: goto label_157b58;
        case 0x157b5cu: goto label_157b5c;
        case 0x157b60u: goto label_157b60;
        case 0x157b64u: goto label_157b64;
        case 0x157b68u: goto label_157b68;
        case 0x157b6cu: goto label_157b6c;
        case 0x157b70u: goto label_157b70;
        case 0x157b74u: goto label_157b74;
        case 0x157b78u: goto label_157b78;
        case 0x157b7cu: goto label_157b7c;
        case 0x157b80u: goto label_157b80;
        case 0x157b84u: goto label_157b84;
        case 0x157b88u: goto label_157b88;
        case 0x157b8cu: goto label_157b8c;
        case 0x157b90u: goto label_157b90;
        case 0x157b94u: goto label_157b94;
        case 0x157b98u: goto label_157b98;
        case 0x157b9cu: goto label_157b9c;
        case 0x157ba0u: goto label_157ba0;
        case 0x157ba4u: goto label_157ba4;
        case 0x157ba8u: goto label_157ba8;
        case 0x157bacu: goto label_157bac;
        case 0x157bb0u: goto label_157bb0;
        case 0x157bb4u: goto label_157bb4;
        case 0x157bb8u: goto label_157bb8;
        case 0x157bbcu: goto label_157bbc;
        case 0x157bc0u: goto label_157bc0;
        case 0x157bc4u: goto label_157bc4;
        case 0x157bc8u: goto label_157bc8;
        case 0x157bccu: goto label_157bcc;
        case 0x157bd0u: goto label_157bd0;
        case 0x157bd4u: goto label_157bd4;
        case 0x157bd8u: goto label_157bd8;
        case 0x157bdcu: goto label_157bdc;
        case 0x157be0u: goto label_157be0;
        case 0x157be4u: goto label_157be4;
        case 0x157be8u: goto label_157be8;
        case 0x157becu: goto label_157bec;
        case 0x157bf0u: goto label_157bf0;
        case 0x157bf4u: goto label_157bf4;
        case 0x157bf8u: goto label_157bf8;
        case 0x157bfcu: goto label_157bfc;
        case 0x157c00u: goto label_157c00;
        case 0x157c04u: goto label_157c04;
        case 0x157c08u: goto label_157c08;
        case 0x157c0cu: goto label_157c0c;
        case 0x157c10u: goto label_157c10;
        case 0x157c14u: goto label_157c14;
        default: break;
    }

    ctx->pc = 0x157568u;

label_157568:
    // 0x157568: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x157568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_15756c:
    // 0x15756c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x15756cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_157570:
    // 0x157570: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x157570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_157574:
    // 0x157574: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x157574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_157578:
    // 0x157578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15757c:
    // 0x15757c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x15757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_157580:
    // 0x157580: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x157580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_157584:
    // 0x157584: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x157584u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_157588:
    // 0x157588: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x157588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15758c:
    // 0x15758c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x15758cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_157590:
    // 0x157590: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x157590u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_157594:
    // 0x157594: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x157594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_157598:
    // 0x157598: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x157598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_15759c:
    // 0x15759c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x15759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1575a0:
    // 0x1575a0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1575a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1575a4:
    // 0x1575a4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1575a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1575a8:
    // 0x1575a8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1575a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1575ac:
    // 0x1575ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1575acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1575b0:
    // 0x1575b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1575b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1575b4:
    // 0x1575b4: 0xae250428  sw          $a1, 0x428($s1)
    ctx->pc = 0x1575b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 5));
label_1575b8:
    // 0x1575b8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1575bc:
    // 0x1575bc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1575bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1575c0:
    // 0x1575c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1575c4:
    if (ctx->pc == 0x1575C4u) {
        ctx->pc = 0x1575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575C0u;
        // 0x1575c4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575C8u;
        goto label_1575c8;
    }
    ctx->pc = 0x1575C0u;
    {
        const bool branch_taken_0x1575c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575C0u;
        // 0x1575c4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575c0) {
            ctx->pc = 0x1575E8u;
            goto label_1575e8;
        }
    }
    ctx->pc = 0x1575C8u;
label_1575c8:
    // 0x1575c8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1575c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1575cc:
    // 0x1575cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1575ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1575d0:
    // 0x1575d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1575d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1575d4:
    // 0x1575d4: 0x0  nop
    ctx->pc = 0x1575d4u;
    // NOP
label_1575d8:
    // 0x1575d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1575d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1575dc:
    // 0x1575dc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1575dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1575e0:
    // 0x1575e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1575e4:
    if (ctx->pc == 0x1575E4u) {
        ctx->pc = 0x1575E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575E0u;
        // 0x1575e4: 0xe6200430  swc1        $f0, 0x430($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575E8u;
        goto label_1575e8;
    }
    ctx->pc = 0x1575E0u;
    {
        const bool branch_taken_0x1575e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575E0u;
        // 0x1575e4: 0xe6200430  swc1        $f0, 0x430($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575e0) {
            ctx->pc = 0x1575ECu;
            goto label_1575ec;
        }
    }
    ctx->pc = 0x1575E8u;
label_1575e8:
    // 0x1575e8: 0xe6340430  swc1        $f20, 0x430($s1)
    ctx->pc = 0x1575e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
label_1575ec:
    // 0x1575ec: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1575ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1575f0:
    // 0x1575f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1575f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1575f4:
    // 0x1575f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1575f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1575f8:
    // 0x1575f8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1575f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1575fc:
    // 0x1575fc: 0xa6230434  sh          $v1, 0x434($s1)
    ctx->pc = 0x1575fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 3));
label_157600:
    // 0x157600: 0xe6200440  swc1        $f0, 0x440($s1)
    ctx->pc = 0x157600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1088), bits); }
label_157604:
    // 0x157604: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_157608:
    if (ctx->pc == 0x157608u) {
        ctx->pc = 0x157608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157604u;
        // 0x157608: 0xe6350444  swc1        $f21, 0x444($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15760Cu;
        goto label_15760c;
    }
    ctx->pc = 0x157604u;
    {
        const bool branch_taken_0x157604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157604u;
        // 0x157608: 0xe6350444  swc1        $f21, 0x444($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157604) {
            ctx->pc = 0x157614u;
            goto label_157614;
        }
    }
    ctx->pc = 0x15760Cu;
label_15760c:
    // 0x15760c: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x15760cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
label_157610:
    // 0x157610: 0xe6200444  swc1        $f0, 0x444($s1)
    ctx->pc = 0x157610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
label_157614:
    // 0x157614: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_157618:
    if (ctx->pc == 0x157618u) {
        ctx->pc = 0x157618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157614u;
        // 0x157618: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15761Cu;
        goto label_15761c;
    }
    ctx->pc = 0x157614u;
    {
        const bool branch_taken_0x157614 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x157618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157614u;
        // 0x157618: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157614) {
            ctx->pc = 0x157630u;
            goto label_157630;
        }
    }
    ctx->pc = 0x15761Cu;
label_15761c:
    // 0x15761c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x15761cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157620:
    // 0x157620: 0x0  nop
    ctx->pc = 0x157620u;
    // NOP
label_157624:
    // 0x157624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_157628:
    // 0x157628: 0x1000000a  b           . + 4 + (0xA << 2)
label_15762c:
    if (ctx->pc == 0x15762Cu) {
        ctx->pc = 0x15762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157628u;
        // 0x15762c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157630u;
        goto label_157630;
    }
    ctx->pc = 0x157628u;
    {
        const bool branch_taken_0x157628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157628u;
        // 0x15762c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157628) {
            ctx->pc = 0x157654u;
            goto label_157654;
        }
    }
    ctx->pc = 0x157630u;
label_157630:
    // 0x157630: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x157630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_157634:
    // 0x157634: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x157634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_157638:
    // 0x157638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x157638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_15763c:
    // 0x15763c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157640:
    // 0x157640: 0x0  nop
    ctx->pc = 0x157640u;
    // NOP
label_157644:
    // 0x157644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_157648:
    // 0x157648: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x157648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15764c:
    // 0x15764c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x15764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_157650:
    // 0x157650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157654:
    // 0x157654: 0x90447a09  lbu         $a0, 0x7A09($v0)
    ctx->pc = 0x157654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31241)));
label_157658:
    // 0x157658: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
label_15765c:
    if (ctx->pc == 0x15765Cu) {
        ctx->pc = 0x15765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157658u;
        // 0x15765c: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157660u;
        goto label_157660;
    }
    ctx->pc = 0x157658u;
    {
        const bool branch_taken_0x157658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157658) {
            ctx->pc = 0x15765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157658u;
            // 0x15765c: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x157660u;
            goto label_157660;
        }
    }
    ctx->pc = 0x157660u;
label_157660:
    // 0x157660: 0xa2200436  sb          $zero, 0x436($s1)
    ctx->pc = 0x157660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1078), (uint8_t)GPR_U32(ctx, 0));
label_157664:
    // 0x157664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157668:
    // 0x157668: 0xe6200438  swc1        $f0, 0x438($s1)
    ctx->pc = 0x157668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1080), bits); }
label_15766c:
    // 0x15766c: 0xc0b1fe2  jal         func_2C7F88
label_157670:
    if (ctx->pc == 0x157670u) {
        ctx->pc = 0x157670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15766Cu;
        // 0x157670: 0xe620043c  swc1        $f0, 0x43C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1084), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157674u;
        goto label_157674;
    }
    ctx->pc = 0x15766Cu;
    SET_GPR_U32(ctx, 31, 0x157674u);
    ctx->pc = 0x157670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15766Cu;
    // 0x157670: 0xe620043c  swc1        $f0, 0x43C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1084), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F88u, 0x15766Cu, 0x157674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157674u;
label_157674:
    // 0x157674: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_157678:
    if (ctx->pc == 0x157678u) {
        ctx->pc = 0x157678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157674u;
        // 0x157678: 0xae20042c  sw          $zero, 0x42C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15767Cu;
        goto label_15767c;
    }
    ctx->pc = 0x157674u;
    {
        const bool branch_taken_0x157674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157674) {
            ctx->pc = 0x157678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157674u;
            // 0x157678: 0xae20042c  sw          $zero, 0x42C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1068), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157680u;
            goto label_157680;
        }
    }
    ctx->pc = 0x15767Cu;
label_15767c:
    // 0x15767c: 0xae32042c  sw          $s2, 0x42C($s1)
    ctx->pc = 0x15767cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1068), GPR_U32(ctx, 18));
label_157680:
    // 0x157680: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x157680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
label_157684:
    // 0x157684: 0x263e0320  addiu       $fp, $s1, 0x320
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_157688:
    // 0x157688: 0xae200314  sw          $zero, 0x314($s1)
    ctx->pc = 0x157688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
label_15768c:
    // 0x15768c: 0x26370310  addiu       $s7, $s1, 0x310
    ctx->pc = 0x15768cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_157690:
    // 0x157690: 0x13d70007  beq         $fp, $s7, . + 4 + (0x7 << 2)
label_157694:
    if (ctx->pc == 0x157694u) {
        ctx->pc = 0x157694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157690u;
        // 0x157694: 0xae200318  sw          $zero, 0x318($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157698u;
        goto label_157698;
    }
    ctx->pc = 0x157690u;
    {
        const bool branch_taken_0x157690 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 23));
        ctx->pc = 0x157694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157690u;
        // 0x157694: 0xae200318  sw          $zero, 0x318($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157690) {
            ctx->pc = 0x1576B0u;
            goto label_1576b0;
        }
    }
    ctx->pc = 0x157698u;
label_157698:
    // 0x157698: 0xc6200310  lwc1        $f0, 0x310($s1)
    ctx->pc = 0x157698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15769c:
    // 0x15769c: 0xe6200320  swc1        $f0, 0x320($s1)
    ctx->pc = 0x15769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
label_1576a0:
    // 0x1576a0: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x1576a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1576a4:
    // 0x1576a4: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x1576a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_1576a8:
    // 0x1576a8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x1576a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1576ac:
    // 0x1576ac: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x1576acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_1576b0:
    // 0x1576b0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1576b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1576b4:
    // 0x1576b4: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1576b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1576b8:
    // 0x1576b8: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1576b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1576bc:
    // 0x1576bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1576bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1576c0:
    // 0x1576c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1576c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1576c4:
    // 0x1576c4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1576c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1576c8:
    // 0x1576c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1576c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1576cc:
    // 0x1576cc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1576ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1576d0:
    // 0x1576d0: 0x26220330  addiu       $v0, $s1, 0x330
    ctx->pc = 0x1576d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_1576d4:
    // 0x1576d4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_1576d8:
    if (ctx->pc == 0x1576D8u) {
        ctx->pc = 0x1576D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576D4u;
        // 0x1576d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576DCu;
        goto label_1576dc;
    }
    ctx->pc = 0x1576D4u;
    {
        const bool branch_taken_0x1576d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1576D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576D4u;
        // 0x1576d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576d4) {
            ctx->pc = 0x1576F0u;
            goto label_1576f0;
        }
    }
    ctx->pc = 0x1576DCu;
label_1576dc:
    // 0x1576dc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1576dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1576e0:
    // 0x1576e0: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x1576e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
label_1576e4:
    // 0x1576e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1576e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1576e8:
    // 0x1576e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1576e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1576ec:
    // 0x1576ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1576ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1576f0:
    // 0x1576f0: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1576f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
label_1576f4:
    // 0x1576f4: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x1576f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_1576f8:
    // 0x1576f8: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x1576f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_1576fc:
    // 0x1576fc: 0x26230350  addiu       $v1, $s1, 0x350
    ctx->pc = 0x1576fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_157700:
    // 0x157700: 0xc6270340  lwc1        $f7, 0x340($s1)
    ctx->pc = 0x157700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_157704:
    // 0x157704: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x157704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_157708:
    // 0x157708: 0xae200348  sw          $zero, 0x348($s1)
    ctx->pc = 0x157708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 0));
label_15770c:
    // 0x15770c: 0xe6270350  swc1        $f7, 0x350($s1)
    ctx->pc = 0x15770cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 848), bits); }
label_157710:
    // 0x157710: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x157710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_157714:
    // 0x157714: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x157714u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_157718:
    // 0x157718: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x157718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_15771c:
    // 0x15771c: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x15771cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_157720:
    // 0x157720: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x157720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_157724:
    // 0x157724: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x157724u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_157728:
    // 0x157728: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x157728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15772c:
    // 0x15772c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_157730:
    // 0x157730: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x157730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157734:
    // 0x157734: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x157734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_157738:
    // 0x157738: 0xc6200340  lwc1        $f0, 0x340($s1)
    ctx->pc = 0x157738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15773c:
    // 0x15773c: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x15773cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_157740:
    // 0x157740: 0xc6240350  lwc1        $f4, 0x350($s1)
    ctx->pc = 0x157740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_157744:
    // 0x157744: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x157744u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_157748:
    // 0x157748: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x157748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_15774c:
    // 0x15774c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x15774cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_157750:
    // 0x157750: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x157750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_157754:
    // 0x157754: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x157754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_157758:
    // 0x157758: 0xe6200360  swc1        $f0, 0x360($s1)
    ctx->pc = 0x157758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
label_15775c:
    // 0x15775c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15775cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_157760:
    // 0x157760: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x157760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_157764:
    // 0x157764: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x157764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157768:
    // 0x157768: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_15776c:
    if (ctx->pc == 0x15776Cu) {
        ctx->pc = 0x15776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157768u;
        // 0x15776c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157770u;
        goto label_157770;
    }
    ctx->pc = 0x157768u;
    {
        const bool branch_taken_0x157768 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157768u;
        // 0x15776c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157768) {
            ctx->pc = 0x157784u;
            goto label_157784;
        }
    }
    ctx->pc = 0x157770u;
label_157770:
    // 0x157770: 0xe627027c  swc1        $f7, 0x27C($s1)
    ctx->pc = 0x157770u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_157774:
    // 0x157774: 0xc056066  jal         func_158198
label_157778:
    if (ctx->pc == 0x157778u) {
        ctx->pc = 0x157778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157774u;
        // 0x157778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15777Cu;
        goto label_15777c;
    }
    ctx->pc = 0x157774u;
    SET_GPR_U32(ctx, 31, 0x15777Cu);
    ctx->pc = 0x157778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157774u;
    // 0x157778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158198u, 0x157774u, 0x15777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15777Cu;
label_15777c:
    // 0x15777c: 0x10000045  b           . + 4 + (0x45 << 2)
label_157780:
    if (ctx->pc == 0x157780u) {
        ctx->pc = 0x157780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15777Cu;
        // 0x157780: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157784u;
        goto label_157784;
    }
    ctx->pc = 0x15777Cu;
    {
        const bool branch_taken_0x15777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15777Cu;
        // 0x157780: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15777c) {
            ctx->pc = 0x157894u;
            goto label_157894;
        }
    }
    ctx->pc = 0x157784u;
label_157784:
    // 0x157784: 0x923602b4  lbu         $s6, 0x2B4($s1)
    ctx->pc = 0x157784u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_157788:
    // 0x157788: 0x12c0003c  beqz        $s6, . + 4 + (0x3C << 2)
label_15778c:
    if (ctx->pc == 0x15778Cu) {
        ctx->pc = 0x15778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157788u;
        // 0x15778c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157790u;
        goto label_157790;
    }
    ctx->pc = 0x157788u;
    {
        const bool branch_taken_0x157788 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157788u;
        // 0x15778c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157788) {
            ctx->pc = 0x15787Cu;
            goto label_15787c;
        }
    }
    ctx->pc = 0x157790u;
label_157790:
    // 0x157790: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x157790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_157794:
    // 0x157794: 0x0  nop
    ctx->pc = 0x157794u;
    // NOP
label_157798:
    // 0x157798: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15779c:
    // 0x15779c: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_1577a0:
    if (ctx->pc == 0x1577A0u) {
        ctx->pc = 0x1577A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15779Cu;
        // 0x1577a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577A4u;
        goto label_1577a4;
    }
    ctx->pc = 0x15779Cu;
    {
        const bool branch_taken_0x15779c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1577A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15779Cu;
        // 0x1577a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15779c) {
            ctx->pc = 0x1577A8u;
            goto label_1577a8;
        }
    }
    ctx->pc = 0x1577A4u;
label_1577a4:
    // 0x1577a4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1577a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1577a8:
    // 0x1577a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1577a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1577ac:
    // 0x1577ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1577b0:
    if (ctx->pc == 0x1577B0u) {
        ctx->pc = 0x1577B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577ACu;
        // 0x1577b0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577B4u;
        goto label_1577b4;
    }
    ctx->pc = 0x1577ACu;
    {
        const bool branch_taken_0x1577ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577ACu;
        // 0x1577b0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577ac) {
            ctx->pc = 0x1577C4u;
            goto label_1577c4;
        }
    }
    ctx->pc = 0x1577B4u;
label_1577b4:
    // 0x1577b4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1577b8:
    // 0x1577b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1577bc:
    // 0x1577bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1577c0:
    if (ctx->pc == 0x1577C0u) {
        ctx->pc = 0x1577C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577BCu;
        // 0x1577c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577C4u;
        goto label_1577c4;
    }
    ctx->pc = 0x1577BCu;
    {
        const bool branch_taken_0x1577bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577BCu;
        // 0x1577c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577bc) {
            ctx->pc = 0x1577C8u;
            goto label_1577c8;
        }
    }
    ctx->pc = 0x1577C4u;
label_1577c4:
    // 0x1577c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1577c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1577c8:
    // 0x1577c8: 0x24950001  addiu       $s5, $a0, 0x1
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1577cc:
    // 0x1577cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1577ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1577d0:
    // 0x1577d0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1577d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1577d4:
    // 0x1577d4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1577d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1577d8:
    // 0x1577d8: 0x26130040  addiu       $s3, $s0, 0x40
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1577dc:
    // 0x1577dc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_1577e0:
    if (ctx->pc == 0x1577E0u) {
        ctx->pc = 0x1577E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577DCu;
        // 0x1577e0: 0x26140080  addiu       $s4, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577E4u;
        goto label_1577e4;
    }
    ctx->pc = 0x1577DCu;
    {
        const bool branch_taken_0x1577dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577DCu;
        // 0x1577e0: 0x26140080  addiu       $s4, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577dc) {
            ctx->pc = 0x15781Cu;
            goto label_15781c;
        }
    }
    ctx->pc = 0x1577E4u;
label_1577e4:
    // 0x1577e4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1577e8:
    // 0x1577e8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1577e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1577ec:
    // 0x1577ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1577ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1577f0:
    // 0x1577f0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1577f4:
    if (ctx->pc == 0x1577F4u) {
        ctx->pc = 0x1577F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577F0u;
        // 0x1577f4: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577F8u;
        goto label_1577f8;
    }
    ctx->pc = 0x1577F0u;
    {
        const bool branch_taken_0x1577f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1577f0) {
            ctx->pc = 0x1577F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1577F0u;
            // 0x1577f4: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157828u;
            goto label_157828;
        }
    }
    ctx->pc = 0x1577F8u;
label_1577f8:
    // 0x1577f8: 0x8c630148  lw          $v1, 0x148($v1)
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
label_1577fc:
    // 0x1577fc: 0x0  nop
    ctx->pc = 0x1577fcu;
    // NOP
label_157800:
    // 0x157800: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_157804:
    if (ctx->pc == 0x157804u) {
        ctx->pc = 0x157808u;
        goto label_157808;
    }
    ctx->pc = 0x157800u;
    {
        const bool branch_taken_0x157800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157800) {
            ctx->pc = 0x15781Cu;
            goto label_15781c;
        }
    }
    ctx->pc = 0x157808u;
label_157808:
    // 0x157808: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x157808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_15780c:
    // 0x15780c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_157810:
    // 0x157810: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x157810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_157814:
    // 0x157814: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
label_157818:
    if (ctx->pc == 0x157818u) {
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0x8c630148  lw          $v1, 0x148($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15781Cu;
        goto label_15781c;
    }
    ctx->pc = 0x157814u;
    {
        const bool branch_taken_0x157814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157814) {
            ctx->pc = 0x157818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157814u;
            // 0x157818: 0x8c630148  lw          $v1, 0x148($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157800;
        }
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_157820:
    if (ctx->pc == 0x157820u) {
        ctx->pc = 0x157820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15781Cu;
        // 0x157820: 0x8e050148  lw          $a1, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157824u;
        goto label_157824;
    }
    ctx->pc = 0x15781Cu;
    {
        const bool branch_taken_0x15781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15781c) {
            ctx->pc = 0x157820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15781Cu;
            // 0x157820: 0x8e050148  lw          $a1, 0x148($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157850u;
            goto label_157850;
        }
    }
    ctx->pc = 0x157824u;
label_157824:
    // 0x157824: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x157824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_157828:
    // 0x157828: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x157828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_15782c:
    // 0x15782c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157830:
    // 0x157830: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x157830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_157834:
    // 0x157834: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x157834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_157838:
    // 0x157838: 0xc054074  jal         func_1501D0
label_15783c:
    if (ctx->pc == 0x15783Cu) {
        ctx->pc = 0x15783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157838u;
        // 0x15783c: 0x8e250250  lw          $a1, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157840u;
        goto label_157840;
    }
    ctx->pc = 0x157838u;
    SET_GPR_U32(ctx, 31, 0x157840u);
    ctx->pc = 0x15783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157838u;
    // 0x15783c: 0x8e250250  lw          $a1, 0x250($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x157838u, 0x157840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157840u;
label_157840:
    // 0x157840: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x157840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_157844:
    // 0x157844: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x157844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_157848:
    // 0x157848: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x157848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_15784c:
    // 0x15784c: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x15784cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_157850:
    // 0x157850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157854:
    // 0x157854: 0xc051d5a  jal         func_147568
label_157858:
    if (ctx->pc == 0x157858u) {
        ctx->pc = 0x157858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157854u;
        // 0x157858: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15785Cu;
        goto label_15785c;
    }
    ctx->pc = 0x157854u;
    SET_GPR_U32(ctx, 31, 0x15785Cu);
    ctx->pc = 0x157858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157854u;
    // 0x157858: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x157854u, 0x15785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15785Cu;
label_15785c:
    // 0x15785c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157860:
    // 0x157860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157864:
    // 0x157864: 0xc0c28b8  jal         func_30A2E0
label_157868:
    if (ctx->pc == 0x157868u) {
        ctx->pc = 0x157868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157864u;
        // 0x157868: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15786Cu;
        goto label_15786c;
    }
    ctx->pc = 0x157864u;
    SET_GPR_U32(ctx, 31, 0x15786Cu);
    ctx->pc = 0x157868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157864u;
    // 0x157868: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x157864u, 0x15786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15786Cu;
label_15786c:
    // 0x15786c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_157870:
    // 0x157870: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x157870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_157874:
    // 0x157874: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
label_157878:
    if (ctx->pc == 0x157878u) {
        ctx->pc = 0x157878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157874u;
        // 0x157878: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15787Cu;
        goto label_15787c;
    }
    ctx->pc = 0x157874u;
    {
        const bool branch_taken_0x157874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157874) {
            ctx->pc = 0x157878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157874u;
            // 0x157878: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157798;
        }
    }
    ctx->pc = 0x15787Cu;
label_15787c:
    // 0x15787c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_157880:
    // 0x157880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x157880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157884:
    // 0x157884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157888:
    // 0x157888: 0xc056066  jal         func_158198
label_15788c:
    if (ctx->pc == 0x15788Cu) {
        ctx->pc = 0x15788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157888u;
        // 0x15788c: 0xe620027c  swc1        $f0, 0x27C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157890u;
        goto label_157890;
    }
    ctx->pc = 0x157888u;
    SET_GPR_U32(ctx, 31, 0x157890u);
    ctx->pc = 0x15788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157888u;
    // 0x15788c: 0xe620027c  swc1        $f0, 0x27C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158198u, 0x157888u, 0x157890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157890u;
label_157890:
    // 0x157890: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x157890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_157894:
    // 0x157894: 0x8e240428  lw          $a0, 0x428($s1)
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1064)));
label_157898:
    // 0x157898: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_15789c:
    // 0x15789c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1578a0:
    if (ctx->pc == 0x1578A0u) {
        ctx->pc = 0x1578A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15789Cu;
        // 0x1578a0: 0x30530001  andi        $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578A4u;
        goto label_1578a4;
    }
    ctx->pc = 0x15789Cu;
    {
        const bool branch_taken_0x15789c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15789Cu;
        // 0x1578a0: 0x30530001  andi        $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15789c) {
            ctx->pc = 0x1578BCu;
            goto label_1578bc;
        }
    }
    ctx->pc = 0x1578A4u;
label_1578a4:
    // 0x1578a4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_1578a8:
    // 0x1578a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1578ac:
    // 0x1578ac: 0xc0e942d  jal         func_3A50B4
label_1578b0:
    if (ctx->pc == 0x1578B0u) {
        ctx->pc = 0x1578B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578ACu;
        // 0x1578b0: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578B4u;
        goto label_1578b4;
    }
    ctx->pc = 0x1578ACu;
    SET_GPR_U32(ctx, 31, 0x1578B4u);
    ctx->pc = 0x1578B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578ACu;
    // 0x1578b0: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x1578ACu, 0x1578B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578B4u;
label_1578b4:
    // 0x1578b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1578b8:
    if (ctx->pc == 0x1578B8u) {
        ctx->pc = 0x1578BCu;
        goto label_1578bc;
    }
    ctx->pc = 0x1578B4u;
    {
        const bool branch_taken_0x1578b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1578b4) {
            ctx->pc = 0x1578C4u;
            goto label_1578c4;
        }
    }
    ctx->pc = 0x1578BCu;
label_1578bc:
    // 0x1578bc: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_1578c0:
    if (ctx->pc == 0x1578C0u) {
        ctx->pc = 0x1578C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578BCu;
        // 0x1578c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578C4u;
        goto label_1578c4;
    }
    ctx->pc = 0x1578BCu;
    {
        const bool branch_taken_0x1578bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578BCu;
        // 0x1578c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578bc) {
            ctx->pc = 0x157BD8u;
            goto label_157bd8;
        }
    }
    ctx->pc = 0x1578C4u;
label_1578c4:
    // 0x1578c4: 0xc05657e  jal         func_1595F8
label_1578c8:
    if (ctx->pc == 0x1578C8u) {
        ctx->pc = 0x1578C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578C4u;
        // 0x1578c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578CCu;
        goto label_1578cc;
    }
    ctx->pc = 0x1578C4u;
    SET_GPR_U32(ctx, 31, 0x1578CCu);
    ctx->pc = 0x1578C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578C4u;
    // 0x1578c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F8u, 0x1578C4u, 0x1578CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578CCu;
label_1578cc:
    // 0x1578cc: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1578ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1578d0:
    // 0x1578d0: 0x0  nop
    ctx->pc = 0x1578d0u;
    // NOP
label_1578d4:
    // 0x1578d4: 0x450000af  bc1f        . + 4 + (0xAF << 2)
label_1578d8:
    if (ctx->pc == 0x1578D8u) {
        ctx->pc = 0x1578D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578D4u;
        // 0x1578d8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578DCu;
        goto label_1578dc;
    }
    ctx->pc = 0x1578D4u;
    {
        const bool branch_taken_0x1578d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1578D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578D4u;
        // 0x1578d8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578d4) {
            ctx->pc = 0x157B94u;
            goto label_157b94;
        }
    }
    ctx->pc = 0x1578DCu;
label_1578dc:
    // 0x1578dc: 0x8e320428  lw          $s2, 0x428($s1)
    ctx->pc = 0x1578dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1064)));
label_1578e0:
    // 0x1578e0: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1578e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1578e4:
    // 0x1578e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1578e8:
    // 0x1578e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1578e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1578ec:
    // 0x1578ec: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1578f0:
    if (ctx->pc == 0x1578F0u) {
        ctx->pc = 0x1578F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578ECu;
        // 0x1578f0: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578F4u;
        goto label_1578f4;
    }
    ctx->pc = 0x1578ECu;
    {
        const bool branch_taken_0x1578ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1578F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578ECu;
        // 0x1578f0: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578ec) {
            ctx->pc = 0x157914u;
            goto label_157914;
        }
    }
    ctx->pc = 0x1578F4u;
label_1578f4:
    // 0x1578f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1578f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1578f8:
    // 0x1578f8: 0x262401b4  addiu       $a0, $s1, 0x1B4
    ctx->pc = 0x1578f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
label_1578fc:
    // 0x1578fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1578fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157900:
    // 0x157900: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157904:
    // 0x157904: 0xc0566b4  jal         func_159AD0
label_157908:
    if (ctx->pc == 0x157908u) {
        ctx->pc = 0x157908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157904u;
        // 0x157908: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15790Cu;
        goto label_15790c;
    }
    ctx->pc = 0x157904u;
    SET_GPR_U32(ctx, 31, 0x15790Cu);
    ctx->pc = 0x157908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157904u;
    // 0x157908: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x157904u, 0x15790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15790Cu;
label_15790c:
    // 0x15790c: 0x10000004  b           . + 4 + (0x4 << 2)
label_157910:
    if (ctx->pc == 0x157910u) {
        ctx->pc = 0x157910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15790Cu;
        // 0x157910: 0xe6200310  swc1        $f0, 0x310($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 784), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157914u;
        goto label_157914;
    }
    ctx->pc = 0x15790Cu;
    {
        const bool branch_taken_0x15790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15790Cu;
        // 0x157910: 0xe6200310  swc1        $f0, 0x310($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15790c) {
            ctx->pc = 0x157920u;
            goto label_157920;
        }
    }
    ctx->pc = 0x157914u;
label_157914:
    // 0x157914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157918:
    // 0x157918: 0x0  nop
    ctx->pc = 0x157918u;
    // NOP
label_15791c:
    // 0x15791c: 0xe6200310  swc1        $f0, 0x310($s1)
    ctx->pc = 0x15791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 784), bits); }
label_157920:
    // 0x157920: 0x240301ff  addiu       $v1, $zero, 0x1FF
    ctx->pc = 0x157920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_157924:
    // 0x157924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x157924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157928:
    // 0x157928: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_15792c:
    // 0x15792c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_157930:
    if (ctx->pc == 0x157930u) {
        ctx->pc = 0x157930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15792Cu;
        // 0x157930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157934u;
        goto label_157934;
    }
    ctx->pc = 0x15792Cu;
    {
        const bool branch_taken_0x15792c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15792Cu;
        // 0x157930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15792c) {
            ctx->pc = 0x157950u;
            goto label_157950;
        }
    }
    ctx->pc = 0x157934u;
label_157934:
    // 0x157934: 0x262401d4  addiu       $a0, $s1, 0x1D4
    ctx->pc = 0x157934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
label_157938:
    // 0x157938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15793c:
    // 0x15793c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15793cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157940:
    // 0x157940: 0xc0566b4  jal         func_159AD0
label_157944:
    if (ctx->pc == 0x157944u) {
        ctx->pc = 0x157944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157940u;
        // 0x157944: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157948u;
        goto label_157948;
    }
    ctx->pc = 0x157940u;
    SET_GPR_U32(ctx, 31, 0x157948u);
    ctx->pc = 0x157944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157940u;
    // 0x157944: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x157940u, 0x157948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157948u;
label_157948:
    // 0x157948: 0x10000004  b           . + 4 + (0x4 << 2)
label_15794c:
    if (ctx->pc == 0x15794Cu) {
        ctx->pc = 0x15794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157948u;
        // 0x15794c: 0xe6200314  swc1        $f0, 0x314($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 788), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157950u;
        goto label_157950;
    }
    ctx->pc = 0x157948u;
    {
        const bool branch_taken_0x157948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157948u;
        // 0x15794c: 0xe6200314  swc1        $f0, 0x314($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157948) {
            ctx->pc = 0x15795Cu;
            goto label_15795c;
        }
    }
    ctx->pc = 0x157950u;
label_157950:
    // 0x157950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157954:
    // 0x157954: 0x0  nop
    ctx->pc = 0x157954u;
    // NOP
label_157958:
    // 0x157958: 0xe6200314  swc1        $f0, 0x314($s1)
    ctx->pc = 0x157958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 788), bits); }
label_15795c:
    // 0x15795c: 0x240302ff  addiu       $v1, $zero, 0x2FF
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
label_157960:
    // 0x157960: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x157960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157964:
    // 0x157964: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x157964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_157968:
    // 0x157968: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_15796c:
    if (ctx->pc == 0x15796Cu) {
        ctx->pc = 0x15796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157968u;
        // 0x15796c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157970u;
        goto label_157970;
    }
    ctx->pc = 0x157968u;
    {
        const bool branch_taken_0x157968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157968u;
        // 0x15796c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157968) {
            ctx->pc = 0x15798Cu;
            goto label_15798c;
        }
    }
    ctx->pc = 0x157970u;
label_157970:
    // 0x157970: 0x262401f4  addiu       $a0, $s1, 0x1F4
    ctx->pc = 0x157970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
label_157974:
    // 0x157974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157978:
    // 0x157978: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15797c:
    // 0x15797c: 0xc0566b4  jal         func_159AD0
label_157980:
    if (ctx->pc == 0x157980u) {
        ctx->pc = 0x157980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15797Cu;
        // 0x157980: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157984u;
        goto label_157984;
    }
    ctx->pc = 0x15797Cu;
    SET_GPR_U32(ctx, 31, 0x157984u);
    ctx->pc = 0x157980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15797Cu;
    // 0x157980: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AD0u, 0x15797Cu, 0x157984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157984u;
label_157984:
    // 0x157984: 0x10000004  b           . + 4 + (0x4 << 2)
label_157988:
    if (ctx->pc == 0x157988u) {
        ctx->pc = 0x157988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157984u;
        // 0x157988: 0xe6200318  swc1        $f0, 0x318($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15798Cu;
        goto label_15798c;
    }
    ctx->pc = 0x157984u;
    {
        const bool branch_taken_0x157984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157984u;
        // 0x157988: 0xe6200318  swc1        $f0, 0x318($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 792), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157984) {
            ctx->pc = 0x157998u;
            goto label_157998;
        }
    }
    ctx->pc = 0x15798Cu;
label_15798c:
    // 0x15798c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15798cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157990:
    // 0x157990: 0x0  nop
    ctx->pc = 0x157990u;
    // NOP
label_157994:
    // 0x157994: 0xe6200318  swc1        $f0, 0x318($s1)
    ctx->pc = 0x157994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 792), bits); }
label_157998:
    // 0x157998: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_15799c:
    if (ctx->pc == 0x15799Cu) {
        ctx->pc = 0x15799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157998u;
        // 0x15799c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579A0u;
        goto label_1579a0;
    }
    ctx->pc = 0x157998u;
    {
        const bool branch_taken_0x157998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x157998) {
            ctx->pc = 0x15799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157998u;
            // 0x15799c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1579B0u;
            goto label_1579b0;
        }
    }
    ctx->pc = 0x1579A0u;
label_1579a0:
    // 0x1579a0: 0xc6200310  lwc1        $f0, 0x310($s1)
    ctx->pc = 0x1579a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1579a4:
    // 0x1579a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1579a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1579a8:
    // 0x1579a8: 0xe6200310  swc1        $f0, 0x310($s1)
    ctx->pc = 0x1579a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 784), bits); }
label_1579ac:
    // 0x1579ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1579acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1579b0:
    // 0x1579b0: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1579b4:
    // 0x1579b4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1579b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_1579b8:
    // 0x1579b8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1579bc:
    if (ctx->pc == 0x1579BCu) {
        ctx->pc = 0x1579BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B8u;
        // 0x1579bc: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579C0u;
        goto label_1579c0;
    }
    ctx->pc = 0x1579B8u;
    {
        const bool branch_taken_0x1579b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1579BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B8u;
        // 0x1579bc: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579b8) {
            ctx->pc = 0x1579F0u;
            goto label_1579f0;
        }
    }
    ctx->pc = 0x1579C0u;
label_1579c0:
    // 0x1579c0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1579c4:
    // 0x1579c4: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x1579c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_1579c8:
    // 0x1579c8: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x1579c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_1579cc:
    // 0x1579cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1579ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1579d0:
    // 0x1579d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1579d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1579d4:
    // 0x1579d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1579d8:
    // 0x1579d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1579d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1579dc:
    // 0x1579dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1579dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1579e0:
    // 0x1579e0: 0x40f809  jalr        $v0
label_1579e4:
    if (ctx->pc == 0x1579E4u) {
        ctx->pc = 0x1579E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579E0u;
        // 0x1579e4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579E8u;
        goto label_1579e8;
    }
    ctx->pc = 0x1579E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1579E8u);
        ctx->pc = 0x1579E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579E0u;
        // 0x1579e4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1579E0u, 0x1579E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1579E8u;
label_1579e8:
    // 0x1579e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1579ec:
    if (ctx->pc == 0x1579ECu) {
        ctx->pc = 0x1579ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579E8u;
        // 0x1579ec: 0xe6200340  swc1        $f0, 0x340($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579F0u;
        goto label_1579f0;
    }
    ctx->pc = 0x1579E8u;
    {
        const bool branch_taken_0x1579e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579E8u;
        // 0x1579ec: 0xe6200340  swc1        $f0, 0x340($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579e8) {
            ctx->pc = 0x1579FCu;
            goto label_1579fc;
        }
    }
    ctx->pc = 0x1579F0u;
label_1579f0:
    // 0x1579f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1579f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1579f4:
    // 0x1579f4: 0x0  nop
    ctx->pc = 0x1579f4u;
    // NOP
label_1579f8:
    // 0x1579f8: 0xe6200340  swc1        $f0, 0x340($s1)
    ctx->pc = 0x1579f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
label_1579fc:
    // 0x1579fc: 0x240304ff  addiu       $v1, $zero, 0x4FF
    ctx->pc = 0x1579fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1279));
label_157a00:
    // 0x157a00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157a04:
    // 0x157a04: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x157a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_157a08:
    // 0x157a08: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_157a0c:
    if (ctx->pc == 0x157A0Cu) {
        ctx->pc = 0x157A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A08u;
        // 0x157a0c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A10u;
        goto label_157a10;
    }
    ctx->pc = 0x157A08u;
    {
        const bool branch_taken_0x157a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A08u;
        // 0x157a0c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a08) {
            ctx->pc = 0x157A40u;
            goto label_157a40;
        }
    }
    ctx->pc = 0x157A10u;
label_157a10:
    // 0x157a10: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x157a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_157a14:
    // 0x157a14: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x157a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_157a18:
    // 0x157a18: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x157a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_157a1c:
    // 0x157a1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_157a20:
    // 0x157a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157a24:
    // 0x157a24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x157a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_157a28:
    // 0x157a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157a2c:
    // 0x157a2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157a2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157a30:
    // 0x157a30: 0x40f809  jalr        $v0
label_157a34:
    if (ctx->pc == 0x157A34u) {
        ctx->pc = 0x157A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A30u;
        // 0x157a34: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A38u;
        goto label_157a38;
    }
    ctx->pc = 0x157A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157A38u);
        ctx->pc = 0x157A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A30u;
        // 0x157a34: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A30u, 0x157A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157A38u;
label_157a38:
    // 0x157a38: 0x10000004  b           . + 4 + (0x4 << 2)
label_157a3c:
    if (ctx->pc == 0x157A3Cu) {
        ctx->pc = 0x157A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A38u;
        // 0x157a3c: 0xe6200344  swc1        $f0, 0x344($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 836), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A40u;
        goto label_157a40;
    }
    ctx->pc = 0x157A38u;
    {
        const bool branch_taken_0x157a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A38u;
        // 0x157a3c: 0xe6200344  swc1        $f0, 0x344($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 836), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a38) {
            ctx->pc = 0x157A4Cu;
            goto label_157a4c;
        }
    }
    ctx->pc = 0x157A40u;
label_157a40:
    // 0x157a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157a44:
    // 0x157a44: 0x0  nop
    ctx->pc = 0x157a44u;
    // NOP
label_157a48:
    // 0x157a48: 0xe6200344  swc1        $f0, 0x344($s1)
    ctx->pc = 0x157a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 836), bits); }
label_157a4c:
    // 0x157a4c: 0x240305ff  addiu       $v1, $zero, 0x5FF
    ctx->pc = 0x157a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1535));
label_157a50:
    // 0x157a50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157a54:
    // 0x157a54: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x157a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_157a58:
    // 0x157a58: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_157a5c:
    if (ctx->pc == 0x157A5Cu) {
        ctx->pc = 0x157A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A58u;
        // 0x157a5c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A60u;
        goto label_157a60;
    }
    ctx->pc = 0x157A58u;
    {
        const bool branch_taken_0x157a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A58u;
        // 0x157a5c: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a58) {
            ctx->pc = 0x157A90u;
            goto label_157a90;
        }
    }
    ctx->pc = 0x157A60u;
label_157a60:
    // 0x157a60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_157a64:
    // 0x157a64: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x157a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_157a68:
    // 0x157a68: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x157a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_157a6c:
    // 0x157a6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_157a70:
    // 0x157a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157a74:
    // 0x157a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x157a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_157a78:
    // 0x157a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157a7c:
    // 0x157a7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157a7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157a80:
    // 0x157a80: 0x40f809  jalr        $v0
label_157a84:
    if (ctx->pc == 0x157A84u) {
        ctx->pc = 0x157A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A80u;
        // 0x157a84: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A88u;
        goto label_157a88;
    }
    ctx->pc = 0x157A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157A88u);
        ctx->pc = 0x157A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A80u;
        // 0x157a84: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A80u, 0x157A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157A88u;
label_157a88:
    // 0x157a88: 0x10000004  b           . + 4 + (0x4 << 2)
label_157a8c:
    if (ctx->pc == 0x157A8Cu) {
        ctx->pc = 0x157A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A88u;
        // 0x157a8c: 0xe6200348  swc1        $f0, 0x348($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A90u;
        goto label_157a90;
    }
    ctx->pc = 0x157A88u;
    {
        const bool branch_taken_0x157a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A88u;
        // 0x157a8c: 0xe6200348  swc1        $f0, 0x348($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a88) {
            ctx->pc = 0x157A9Cu;
            goto label_157a9c;
        }
    }
    ctx->pc = 0x157A90u;
label_157a90:
    // 0x157a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157a94:
    // 0x157a94: 0x0  nop
    ctx->pc = 0x157a94u;
    // NOP
label_157a98:
    // 0x157a98: 0xe6200348  swc1        $f0, 0x348($s1)
    ctx->pc = 0x157a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
label_157a9c:
    // 0x157a9c: 0x240306ff  addiu       $v1, $zero, 0x6FF
    ctx->pc = 0x157a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1791));
label_157aa0:
    // 0x157aa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157aa4:
    // 0x157aa4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x157aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_157aa8:
    // 0x157aa8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_157aac:
    if (ctx->pc == 0x157AACu) {
        ctx->pc = 0x157AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AA8u;
        // 0x157aac: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AB0u;
        goto label_157ab0;
    }
    ctx->pc = 0x157AA8u;
    {
        const bool branch_taken_0x157aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AA8u;
        // 0x157aac: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157aa8) {
            ctx->pc = 0x157AE0u;
            goto label_157ae0;
        }
    }
    ctx->pc = 0x157AB0u;
label_157ab0:
    // 0x157ab0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_157ab4:
    // 0x157ab4: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x157ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_157ab8:
    // 0x157ab8: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x157ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_157abc:
    // 0x157abc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_157ac0:
    // 0x157ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157ac4:
    // 0x157ac4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x157ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_157ac8:
    // 0x157ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157acc:
    // 0x157acc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157ad0:
    // 0x157ad0: 0x40f809  jalr        $v0
label_157ad4:
    if (ctx->pc == 0x157AD4u) {
        ctx->pc = 0x157AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AD0u;
        // 0x157ad4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AD8u;
        goto label_157ad8;
    }
    ctx->pc = 0x157AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157AD8u);
        ctx->pc = 0x157AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AD0u;
        // 0x157ad4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157AD0u, 0x157AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157AD8u;
label_157ad8:
    // 0x157ad8: 0x10000005  b           . + 4 + (0x5 << 2)
label_157adc:
    if (ctx->pc == 0x157ADCu) {
        ctx->pc = 0x157ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AD8u;
        // 0x157adc: 0xe6200370  swc1        $f0, 0x370($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 880), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AE0u;
        goto label_157ae0;
    }
    ctx->pc = 0x157AD8u;
    {
        const bool branch_taken_0x157ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AD8u;
        // 0x157adc: 0xe6200370  swc1        $f0, 0x370($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ad8) {
            ctx->pc = 0x157AF0u;
            goto label_157af0;
        }
    }
    ctx->pc = 0x157AE0u;
label_157ae0:
    // 0x157ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_157ae4:
    // 0x157ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x157ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157ae8:
    // 0x157ae8: 0x0  nop
    ctx->pc = 0x157ae8u;
    // NOP
label_157aec:
    // 0x157aec: 0xe6200370  swc1        $f0, 0x370($s1)
    ctx->pc = 0x157aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 880), bits); }
label_157af0:
    // 0x157af0: 0x240307ff  addiu       $v1, $zero, 0x7FF
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_157af4:
    // 0x157af4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157af8:
    // 0x157af8: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x157af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_157afc:
    // 0x157afc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_157b00:
    if (ctx->pc == 0x157B00u) {
        ctx->pc = 0x157B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AFCu;
        // 0x157b00: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B04u;
        goto label_157b04;
    }
    ctx->pc = 0x157AFCu;
    {
        const bool branch_taken_0x157afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AFCu;
        // 0x157b00: 0x41a82  srl         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157afc) {
            ctx->pc = 0x157B34u;
            goto label_157b34;
        }
    }
    ctx->pc = 0x157B04u;
label_157b04:
    // 0x157b04: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x157b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_157b08:
    // 0x157b08: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x157b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_157b0c:
    // 0x157b0c: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x157b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_157b10:
    // 0x157b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_157b14:
    // 0x157b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157b18:
    // 0x157b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x157b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_157b1c:
    // 0x157b1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157b20:
    // 0x157b20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x157b20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157b24:
    // 0x157b24: 0x40f809  jalr        $v0
label_157b28:
    if (ctx->pc == 0x157B28u) {
        ctx->pc = 0x157B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B24u;
        // 0x157b28: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B2Cu;
        goto label_157b2c;
    }
    ctx->pc = 0x157B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157B2Cu);
        ctx->pc = 0x157B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B24u;
        // 0x157b28: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B24u, 0x157B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157B2Cu;
label_157b2c:
    // 0x157b2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_157b30:
    if (ctx->pc == 0x157B30u) {
        ctx->pc = 0x157B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B2Cu;
        // 0x157b30: 0xe6200374  swc1        $f0, 0x374($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 884), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B34u;
        goto label_157b34;
    }
    ctx->pc = 0x157B2Cu;
    {
        const bool branch_taken_0x157b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B2Cu;
        // 0x157b30: 0xe6200374  swc1        $f0, 0x374($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b2c) {
            ctx->pc = 0x157B44u;
            goto label_157b44;
        }
    }
    ctx->pc = 0x157B34u;
label_157b34:
    // 0x157b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_157b38:
    // 0x157b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x157b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157b3c:
    // 0x157b3c: 0x0  nop
    ctx->pc = 0x157b3cu;
    // NOP
label_157b40:
    // 0x157b40: 0xe6200374  swc1        $f0, 0x374($s1)
    ctx->pc = 0x157b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 884), bits); }
label_157b44:
    // 0x157b44: 0x240308ff  addiu       $v1, $zero, 0x8FF
    ctx->pc = 0x157b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2303));
label_157b48:
    // 0x157b48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157b4c:
    // 0x157b4c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x157b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_157b50:
    // 0x157b50: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_157b54:
    if (ctx->pc == 0x157B54u) {
        ctx->pc = 0x157B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B50u;
        // 0x157b54: 0x41282  srl         $v0, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B58u;
        goto label_157b58;
    }
    ctx->pc = 0x157B50u;
    {
        const bool branch_taken_0x157b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B50u;
        // 0x157b54: 0x41282  srl         $v0, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b50) {
            ctx->pc = 0x157B84u;
            goto label_157b84;
        }
    }
    ctx->pc = 0x157B58u;
label_157b58:
    // 0x157b58: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_157b5c:
    // 0x157b5c: 0x2463d910  addiu       $v1, $v1, -0x26F0
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957328));
label_157b60:
    // 0x157b60: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x157b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_157b64:
    // 0x157b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_157b68:
    // 0x157b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157b6c:
    // 0x157b6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x157b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_157b70:
    // 0x157b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157b74:
    // 0x157b74: 0x60f809  jalr        $v1
label_157b78:
    if (ctx->pc == 0x157B78u) {
        ctx->pc = 0x157B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B74u;
        // 0x157b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B7Cu;
        goto label_157b7c;
    }
    ctx->pc = 0x157B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157B7Cu);
        ctx->pc = 0x157B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B74u;
        // 0x157b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B74u, 0x157B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157B7Cu;
label_157b7c:
    // 0x157b7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_157b80:
    if (ctx->pc == 0x157B80u) {
        ctx->pc = 0x157B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B7Cu;
        // 0x157b80: 0xe6200378  swc1        $f0, 0x378($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B84u;
        goto label_157b84;
    }
    ctx->pc = 0x157B7Cu;
    {
        const bool branch_taken_0x157b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B7Cu;
        // 0x157b80: 0xe6200378  swc1        $f0, 0x378($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b7c) {
            ctx->pc = 0x157B94u;
            goto label_157b94;
        }
    }
    ctx->pc = 0x157B84u;
label_157b84:
    // 0x157b84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_157b88:
    // 0x157b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x157b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157b8c:
    // 0x157b8c: 0x0  nop
    ctx->pc = 0x157b8cu;
    // NOP
label_157b90:
    // 0x157b90: 0xe6200378  swc1        $f0, 0x378($s1)
    ctx->pc = 0x157b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 888), bits); }
label_157b94:
    // 0x157b94: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x157b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_157b98:
    // 0x157b98: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x157b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_157b9c:
    // 0x157b9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_157ba0:
    if (ctx->pc == 0x157BA0u) {
        ctx->pc = 0x157BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B9Cu;
        // 0x157ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BA4u;
        goto label_157ba4;
    }
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B9Cu;
        // 0x157ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157BC8u;
            goto label_157bc8;
        }
    }
    ctx->pc = 0x157BA4u;
label_157ba4:
    // 0x157ba4: 0x13d70009  beq         $fp, $s7, . + 4 + (0x9 << 2)
label_157ba8:
    if (ctx->pc == 0x157BA8u) {
        ctx->pc = 0x157BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BA4u;
        // 0x157ba8: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BACu;
        goto label_157bac;
    }
    ctx->pc = 0x157BA4u;
    {
        const bool branch_taken_0x157ba4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 23));
        ctx->pc = 0x157BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BA4u;
        // 0x157ba8: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ba4) {
            ctx->pc = 0x157BCCu;
            goto label_157bcc;
        }
    }
    ctx->pc = 0x157BACu;
label_157bac:
    // 0x157bac: 0xc6200310  lwc1        $f0, 0x310($s1)
    ctx->pc = 0x157bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157bb0:
    // 0x157bb0: 0xe6200320  swc1        $f0, 0x320($s1)
    ctx->pc = 0x157bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
label_157bb4:
    // 0x157bb4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x157bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157bb8:
    // 0x157bb8: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x157bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_157bbc:
    // 0x157bbc: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x157bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157bc0:
    // 0x157bc0: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x157bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_157bc4:
    // 0x157bc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157bc8:
    // 0x157bc8: 0x26240448  addiu       $a0, $s1, 0x448
    ctx->pc = 0x157bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
label_157bcc:
    // 0x157bcc: 0xc054912  jal         func_152448
label_157bd0:
    if (ctx->pc == 0x157BD0u) {
        ctx->pc = 0x157BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BCCu;
        // 0x157bd0: 0x8ca60428  lw          $a2, 0x428($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BD4u;
        goto label_157bd4;
    }
    ctx->pc = 0x157BCCu;
    SET_GPR_U32(ctx, 31, 0x157BD4u);
    ctx->pc = 0x157BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BCCu;
    // 0x157bd0: 0x8ca60428  lw          $a2, 0x428($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152448u, 0x157BCCu, 0x157BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BD4u;
label_157bd4:
    // 0x157bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157bd8:
    // 0x157bd8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x157bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_157bdc:
    // 0x157bdc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x157bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_157be0:
    // 0x157be0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x157be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_157be4:
    // 0x157be4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x157be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_157be8:
    // 0x157be8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x157be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_157bec:
    // 0x157bec: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x157becu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_157bf0:
    // 0x157bf0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x157bf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_157bf4:
    // 0x157bf4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x157bf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_157bf8:
    // 0x157bf8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x157bf8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_157bfc:
    // 0x157bfc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x157bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_157c00:
    // 0x157c00: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x157c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_157c04:
    // 0x157c04: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x157c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_157c08:
    // 0x157c08: 0x3e00008  jr          $ra
label_157c0c:
    if (ctx->pc == 0x157C0Cu) {
        ctx->pc = 0x157C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C08u;
        // 0x157c0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C10u;
        goto label_157c10;
    }
    ctx->pc = 0x157C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C08u;
        // 0x157c0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157C10u;
label_157c10:
    // 0x157c10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x157c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_157c14:
    // 0x157c14: 0x0  nop
    ctx->pc = 0x157c14u;
    // NOP
    ctx->pc = 0x157c18u;
}
