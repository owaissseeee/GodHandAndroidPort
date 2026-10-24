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

// Function: func_001BEBA0
// Address: 0x1beba0 - 0x1bf2e8
void func_001BEBA0_0x1beba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BEBA0_0x1beba0");
#endif

    switch (ctx->pc) {
        case 0x1beba0u: goto label_1beba0;
        case 0x1beba4u: goto label_1beba4;
        case 0x1beba8u: goto label_1beba8;
        case 0x1bebacu: goto label_1bebac;
        case 0x1bebb0u: goto label_1bebb0;
        case 0x1bebb4u: goto label_1bebb4;
        case 0x1bebb8u: goto label_1bebb8;
        case 0x1bebbcu: goto label_1bebbc;
        case 0x1bebc0u: goto label_1bebc0;
        case 0x1bebc4u: goto label_1bebc4;
        case 0x1bebc8u: goto label_1bebc8;
        case 0x1bebccu: goto label_1bebcc;
        case 0x1bebd0u: goto label_1bebd0;
        case 0x1bebd4u: goto label_1bebd4;
        case 0x1bebd8u: goto label_1bebd8;
        case 0x1bebdcu: goto label_1bebdc;
        case 0x1bebe0u: goto label_1bebe0;
        case 0x1bebe4u: goto label_1bebe4;
        case 0x1bebe8u: goto label_1bebe8;
        case 0x1bebecu: goto label_1bebec;
        case 0x1bebf0u: goto label_1bebf0;
        case 0x1bebf4u: goto label_1bebf4;
        case 0x1bebf8u: goto label_1bebf8;
        case 0x1bebfcu: goto label_1bebfc;
        case 0x1bec00u: goto label_1bec00;
        case 0x1bec04u: goto label_1bec04;
        case 0x1bec08u: goto label_1bec08;
        case 0x1bec0cu: goto label_1bec0c;
        case 0x1bec10u: goto label_1bec10;
        case 0x1bec14u: goto label_1bec14;
        case 0x1bec18u: goto label_1bec18;
        case 0x1bec1cu: goto label_1bec1c;
        case 0x1bec20u: goto label_1bec20;
        case 0x1bec24u: goto label_1bec24;
        case 0x1bec28u: goto label_1bec28;
        case 0x1bec2cu: goto label_1bec2c;
        case 0x1bec30u: goto label_1bec30;
        case 0x1bec34u: goto label_1bec34;
        case 0x1bec38u: goto label_1bec38;
        case 0x1bec3cu: goto label_1bec3c;
        case 0x1bec40u: goto label_1bec40;
        case 0x1bec44u: goto label_1bec44;
        case 0x1bec48u: goto label_1bec48;
        case 0x1bec4cu: goto label_1bec4c;
        case 0x1bec50u: goto label_1bec50;
        case 0x1bec54u: goto label_1bec54;
        case 0x1bec58u: goto label_1bec58;
        case 0x1bec5cu: goto label_1bec5c;
        case 0x1bec60u: goto label_1bec60;
        case 0x1bec64u: goto label_1bec64;
        case 0x1bec68u: goto label_1bec68;
        case 0x1bec6cu: goto label_1bec6c;
        case 0x1bec70u: goto label_1bec70;
        case 0x1bec74u: goto label_1bec74;
        case 0x1bec78u: goto label_1bec78;
        case 0x1bec7cu: goto label_1bec7c;
        case 0x1bec80u: goto label_1bec80;
        case 0x1bec84u: goto label_1bec84;
        case 0x1bec88u: goto label_1bec88;
        case 0x1bec8cu: goto label_1bec8c;
        case 0x1bec90u: goto label_1bec90;
        case 0x1bec94u: goto label_1bec94;
        case 0x1bec98u: goto label_1bec98;
        case 0x1bec9cu: goto label_1bec9c;
        case 0x1beca0u: goto label_1beca0;
        case 0x1beca4u: goto label_1beca4;
        case 0x1beca8u: goto label_1beca8;
        case 0x1becacu: goto label_1becac;
        case 0x1becb0u: goto label_1becb0;
        case 0x1becb4u: goto label_1becb4;
        case 0x1becb8u: goto label_1becb8;
        case 0x1becbcu: goto label_1becbc;
        case 0x1becc0u: goto label_1becc0;
        case 0x1becc4u: goto label_1becc4;
        case 0x1becc8u: goto label_1becc8;
        case 0x1becccu: goto label_1beccc;
        case 0x1becd0u: goto label_1becd0;
        case 0x1becd4u: goto label_1becd4;
        case 0x1becd8u: goto label_1becd8;
        case 0x1becdcu: goto label_1becdc;
        case 0x1bece0u: goto label_1bece0;
        case 0x1bece4u: goto label_1bece4;
        case 0x1bece8u: goto label_1bece8;
        case 0x1bececu: goto label_1becec;
        case 0x1becf0u: goto label_1becf0;
        case 0x1becf4u: goto label_1becf4;
        case 0x1becf8u: goto label_1becf8;
        case 0x1becfcu: goto label_1becfc;
        case 0x1bed00u: goto label_1bed00;
        case 0x1bed04u: goto label_1bed04;
        case 0x1bed08u: goto label_1bed08;
        case 0x1bed0cu: goto label_1bed0c;
        case 0x1bed10u: goto label_1bed10;
        case 0x1bed14u: goto label_1bed14;
        case 0x1bed18u: goto label_1bed18;
        case 0x1bed1cu: goto label_1bed1c;
        case 0x1bed20u: goto label_1bed20;
        case 0x1bed24u: goto label_1bed24;
        case 0x1bed28u: goto label_1bed28;
        case 0x1bed2cu: goto label_1bed2c;
        case 0x1bed30u: goto label_1bed30;
        case 0x1bed34u: goto label_1bed34;
        case 0x1bed38u: goto label_1bed38;
        case 0x1bed3cu: goto label_1bed3c;
        case 0x1bed40u: goto label_1bed40;
        case 0x1bed44u: goto label_1bed44;
        case 0x1bed48u: goto label_1bed48;
        case 0x1bed4cu: goto label_1bed4c;
        case 0x1bed50u: goto label_1bed50;
        case 0x1bed54u: goto label_1bed54;
        case 0x1bed58u: goto label_1bed58;
        case 0x1bed5cu: goto label_1bed5c;
        case 0x1bed60u: goto label_1bed60;
        case 0x1bed64u: goto label_1bed64;
        case 0x1bed68u: goto label_1bed68;
        case 0x1bed6cu: goto label_1bed6c;
        case 0x1bed70u: goto label_1bed70;
        case 0x1bed74u: goto label_1bed74;
        case 0x1bed78u: goto label_1bed78;
        case 0x1bed7cu: goto label_1bed7c;
        case 0x1bed80u: goto label_1bed80;
        case 0x1bed84u: goto label_1bed84;
        case 0x1bed88u: goto label_1bed88;
        case 0x1bed8cu: goto label_1bed8c;
        case 0x1bed90u: goto label_1bed90;
        case 0x1bed94u: goto label_1bed94;
        case 0x1bed98u: goto label_1bed98;
        case 0x1bed9cu: goto label_1bed9c;
        case 0x1beda0u: goto label_1beda0;
        case 0x1beda4u: goto label_1beda4;
        case 0x1beda8u: goto label_1beda8;
        case 0x1bedacu: goto label_1bedac;
        case 0x1bedb0u: goto label_1bedb0;
        case 0x1bedb4u: goto label_1bedb4;
        case 0x1bedb8u: goto label_1bedb8;
        case 0x1bedbcu: goto label_1bedbc;
        case 0x1bedc0u: goto label_1bedc0;
        case 0x1bedc4u: goto label_1bedc4;
        case 0x1bedc8u: goto label_1bedc8;
        case 0x1bedccu: goto label_1bedcc;
        case 0x1bedd0u: goto label_1bedd0;
        case 0x1bedd4u: goto label_1bedd4;
        case 0x1bedd8u: goto label_1bedd8;
        case 0x1beddcu: goto label_1beddc;
        case 0x1bede0u: goto label_1bede0;
        case 0x1bede4u: goto label_1bede4;
        case 0x1bede8u: goto label_1bede8;
        case 0x1bedecu: goto label_1bedec;
        case 0x1bedf0u: goto label_1bedf0;
        case 0x1bedf4u: goto label_1bedf4;
        case 0x1bedf8u: goto label_1bedf8;
        case 0x1bedfcu: goto label_1bedfc;
        case 0x1bee00u: goto label_1bee00;
        case 0x1bee04u: goto label_1bee04;
        case 0x1bee08u: goto label_1bee08;
        case 0x1bee0cu: goto label_1bee0c;
        case 0x1bee10u: goto label_1bee10;
        case 0x1bee14u: goto label_1bee14;
        case 0x1bee18u: goto label_1bee18;
        case 0x1bee1cu: goto label_1bee1c;
        case 0x1bee20u: goto label_1bee20;
        case 0x1bee24u: goto label_1bee24;
        case 0x1bee28u: goto label_1bee28;
        case 0x1bee2cu: goto label_1bee2c;
        case 0x1bee30u: goto label_1bee30;
        case 0x1bee34u: goto label_1bee34;
        case 0x1bee38u: goto label_1bee38;
        case 0x1bee3cu: goto label_1bee3c;
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee44u: goto label_1bee44;
        case 0x1bee48u: goto label_1bee48;
        case 0x1bee4cu: goto label_1bee4c;
        case 0x1bee50u: goto label_1bee50;
        case 0x1bee54u: goto label_1bee54;
        case 0x1bee58u: goto label_1bee58;
        case 0x1bee5cu: goto label_1bee5c;
        case 0x1bee60u: goto label_1bee60;
        case 0x1bee64u: goto label_1bee64;
        case 0x1bee68u: goto label_1bee68;
        case 0x1bee6cu: goto label_1bee6c;
        case 0x1bee70u: goto label_1bee70;
        case 0x1bee74u: goto label_1bee74;
        case 0x1bee78u: goto label_1bee78;
        case 0x1bee7cu: goto label_1bee7c;
        case 0x1bee80u: goto label_1bee80;
        case 0x1bee84u: goto label_1bee84;
        case 0x1bee88u: goto label_1bee88;
        case 0x1bee8cu: goto label_1bee8c;
        case 0x1bee90u: goto label_1bee90;
        case 0x1bee94u: goto label_1bee94;
        case 0x1bee98u: goto label_1bee98;
        case 0x1bee9cu: goto label_1bee9c;
        case 0x1beea0u: goto label_1beea0;
        case 0x1beea4u: goto label_1beea4;
        case 0x1beea8u: goto label_1beea8;
        case 0x1beeacu: goto label_1beeac;
        case 0x1beeb0u: goto label_1beeb0;
        case 0x1beeb4u: goto label_1beeb4;
        case 0x1beeb8u: goto label_1beeb8;
        case 0x1beebcu: goto label_1beebc;
        case 0x1beec0u: goto label_1beec0;
        case 0x1beec4u: goto label_1beec4;
        case 0x1beec8u: goto label_1beec8;
        case 0x1beeccu: goto label_1beecc;
        case 0x1beed0u: goto label_1beed0;
        case 0x1beed4u: goto label_1beed4;
        case 0x1beed8u: goto label_1beed8;
        case 0x1beedcu: goto label_1beedc;
        case 0x1beee0u: goto label_1beee0;
        case 0x1beee4u: goto label_1beee4;
        case 0x1beee8u: goto label_1beee8;
        case 0x1beeecu: goto label_1beeec;
        case 0x1beef0u: goto label_1beef0;
        case 0x1beef4u: goto label_1beef4;
        case 0x1beef8u: goto label_1beef8;
        case 0x1beefcu: goto label_1beefc;
        case 0x1bef00u: goto label_1bef00;
        case 0x1bef04u: goto label_1bef04;
        case 0x1bef08u: goto label_1bef08;
        case 0x1bef0cu: goto label_1bef0c;
        case 0x1bef10u: goto label_1bef10;
        case 0x1bef14u: goto label_1bef14;
        case 0x1bef18u: goto label_1bef18;
        case 0x1bef1cu: goto label_1bef1c;
        case 0x1bef20u: goto label_1bef20;
        case 0x1bef24u: goto label_1bef24;
        case 0x1bef28u: goto label_1bef28;
        case 0x1bef2cu: goto label_1bef2c;
        case 0x1bef30u: goto label_1bef30;
        case 0x1bef34u: goto label_1bef34;
        case 0x1bef38u: goto label_1bef38;
        case 0x1bef3cu: goto label_1bef3c;
        case 0x1bef40u: goto label_1bef40;
        case 0x1bef44u: goto label_1bef44;
        case 0x1bef48u: goto label_1bef48;
        case 0x1bef4cu: goto label_1bef4c;
        case 0x1bef50u: goto label_1bef50;
        case 0x1bef54u: goto label_1bef54;
        case 0x1bef58u: goto label_1bef58;
        case 0x1bef5cu: goto label_1bef5c;
        case 0x1bef60u: goto label_1bef60;
        case 0x1bef64u: goto label_1bef64;
        case 0x1bef68u: goto label_1bef68;
        case 0x1bef6cu: goto label_1bef6c;
        case 0x1bef70u: goto label_1bef70;
        case 0x1bef74u: goto label_1bef74;
        case 0x1bef78u: goto label_1bef78;
        case 0x1bef7cu: goto label_1bef7c;
        case 0x1bef80u: goto label_1bef80;
        case 0x1bef84u: goto label_1bef84;
        case 0x1bef88u: goto label_1bef88;
        case 0x1bef8cu: goto label_1bef8c;
        case 0x1bef90u: goto label_1bef90;
        case 0x1bef94u: goto label_1bef94;
        case 0x1bef98u: goto label_1bef98;
        case 0x1bef9cu: goto label_1bef9c;
        case 0x1befa0u: goto label_1befa0;
        case 0x1befa4u: goto label_1befa4;
        case 0x1befa8u: goto label_1befa8;
        case 0x1befacu: goto label_1befac;
        case 0x1befb0u: goto label_1befb0;
        case 0x1befb4u: goto label_1befb4;
        case 0x1befb8u: goto label_1befb8;
        case 0x1befbcu: goto label_1befbc;
        case 0x1befc0u: goto label_1befc0;
        case 0x1befc4u: goto label_1befc4;
        case 0x1befc8u: goto label_1befc8;
        case 0x1befccu: goto label_1befcc;
        case 0x1befd0u: goto label_1befd0;
        case 0x1befd4u: goto label_1befd4;
        case 0x1befd8u: goto label_1befd8;
        case 0x1befdcu: goto label_1befdc;
        case 0x1befe0u: goto label_1befe0;
        case 0x1befe4u: goto label_1befe4;
        case 0x1befe8u: goto label_1befe8;
        case 0x1befecu: goto label_1befec;
        case 0x1beff0u: goto label_1beff0;
        case 0x1beff4u: goto label_1beff4;
        case 0x1beff8u: goto label_1beff8;
        case 0x1beffcu: goto label_1beffc;
        case 0x1bf000u: goto label_1bf000;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf008u: goto label_1bf008;
        case 0x1bf00cu: goto label_1bf00c;
        case 0x1bf010u: goto label_1bf010;
        case 0x1bf014u: goto label_1bf014;
        case 0x1bf018u: goto label_1bf018;
        case 0x1bf01cu: goto label_1bf01c;
        case 0x1bf020u: goto label_1bf020;
        case 0x1bf024u: goto label_1bf024;
        case 0x1bf028u: goto label_1bf028;
        case 0x1bf02cu: goto label_1bf02c;
        case 0x1bf030u: goto label_1bf030;
        case 0x1bf034u: goto label_1bf034;
        case 0x1bf038u: goto label_1bf038;
        case 0x1bf03cu: goto label_1bf03c;
        case 0x1bf040u: goto label_1bf040;
        case 0x1bf044u: goto label_1bf044;
        case 0x1bf048u: goto label_1bf048;
        case 0x1bf04cu: goto label_1bf04c;
        case 0x1bf050u: goto label_1bf050;
        case 0x1bf054u: goto label_1bf054;
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf05cu: goto label_1bf05c;
        case 0x1bf060u: goto label_1bf060;
        case 0x1bf064u: goto label_1bf064;
        case 0x1bf068u: goto label_1bf068;
        case 0x1bf06cu: goto label_1bf06c;
        case 0x1bf070u: goto label_1bf070;
        case 0x1bf074u: goto label_1bf074;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf07cu: goto label_1bf07c;
        case 0x1bf080u: goto label_1bf080;
        case 0x1bf084u: goto label_1bf084;
        case 0x1bf088u: goto label_1bf088;
        case 0x1bf08cu: goto label_1bf08c;
        case 0x1bf090u: goto label_1bf090;
        case 0x1bf094u: goto label_1bf094;
        case 0x1bf098u: goto label_1bf098;
        case 0x1bf09cu: goto label_1bf09c;
        case 0x1bf0a0u: goto label_1bf0a0;
        case 0x1bf0a4u: goto label_1bf0a4;
        case 0x1bf0a8u: goto label_1bf0a8;
        case 0x1bf0acu: goto label_1bf0ac;
        case 0x1bf0b0u: goto label_1bf0b0;
        case 0x1bf0b4u: goto label_1bf0b4;
        case 0x1bf0b8u: goto label_1bf0b8;
        case 0x1bf0bcu: goto label_1bf0bc;
        case 0x1bf0c0u: goto label_1bf0c0;
        case 0x1bf0c4u: goto label_1bf0c4;
        case 0x1bf0c8u: goto label_1bf0c8;
        case 0x1bf0ccu: goto label_1bf0cc;
        case 0x1bf0d0u: goto label_1bf0d0;
        case 0x1bf0d4u: goto label_1bf0d4;
        case 0x1bf0d8u: goto label_1bf0d8;
        case 0x1bf0dcu: goto label_1bf0dc;
        case 0x1bf0e0u: goto label_1bf0e0;
        case 0x1bf0e4u: goto label_1bf0e4;
        case 0x1bf0e8u: goto label_1bf0e8;
        case 0x1bf0ecu: goto label_1bf0ec;
        case 0x1bf0f0u: goto label_1bf0f0;
        case 0x1bf0f4u: goto label_1bf0f4;
        case 0x1bf0f8u: goto label_1bf0f8;
        case 0x1bf0fcu: goto label_1bf0fc;
        case 0x1bf100u: goto label_1bf100;
        case 0x1bf104u: goto label_1bf104;
        case 0x1bf108u: goto label_1bf108;
        case 0x1bf10cu: goto label_1bf10c;
        case 0x1bf110u: goto label_1bf110;
        case 0x1bf114u: goto label_1bf114;
        case 0x1bf118u: goto label_1bf118;
        case 0x1bf11cu: goto label_1bf11c;
        case 0x1bf120u: goto label_1bf120;
        case 0x1bf124u: goto label_1bf124;
        case 0x1bf128u: goto label_1bf128;
        case 0x1bf12cu: goto label_1bf12c;
        case 0x1bf130u: goto label_1bf130;
        case 0x1bf134u: goto label_1bf134;
        case 0x1bf138u: goto label_1bf138;
        case 0x1bf13cu: goto label_1bf13c;
        case 0x1bf140u: goto label_1bf140;
        case 0x1bf144u: goto label_1bf144;
        case 0x1bf148u: goto label_1bf148;
        case 0x1bf14cu: goto label_1bf14c;
        case 0x1bf150u: goto label_1bf150;
        case 0x1bf154u: goto label_1bf154;
        case 0x1bf158u: goto label_1bf158;
        case 0x1bf15cu: goto label_1bf15c;
        case 0x1bf160u: goto label_1bf160;
        case 0x1bf164u: goto label_1bf164;
        case 0x1bf168u: goto label_1bf168;
        case 0x1bf16cu: goto label_1bf16c;
        case 0x1bf170u: goto label_1bf170;
        case 0x1bf174u: goto label_1bf174;
        case 0x1bf178u: goto label_1bf178;
        case 0x1bf17cu: goto label_1bf17c;
        case 0x1bf180u: goto label_1bf180;
        case 0x1bf184u: goto label_1bf184;
        case 0x1bf188u: goto label_1bf188;
        case 0x1bf18cu: goto label_1bf18c;
        case 0x1bf190u: goto label_1bf190;
        case 0x1bf194u: goto label_1bf194;
        case 0x1bf198u: goto label_1bf198;
        case 0x1bf19cu: goto label_1bf19c;
        case 0x1bf1a0u: goto label_1bf1a0;
        case 0x1bf1a4u: goto label_1bf1a4;
        case 0x1bf1a8u: goto label_1bf1a8;
        case 0x1bf1acu: goto label_1bf1ac;
        case 0x1bf1b0u: goto label_1bf1b0;
        case 0x1bf1b4u: goto label_1bf1b4;
        case 0x1bf1b8u: goto label_1bf1b8;
        case 0x1bf1bcu: goto label_1bf1bc;
        case 0x1bf1c0u: goto label_1bf1c0;
        case 0x1bf1c4u: goto label_1bf1c4;
        case 0x1bf1c8u: goto label_1bf1c8;
        case 0x1bf1ccu: goto label_1bf1cc;
        case 0x1bf1d0u: goto label_1bf1d0;
        case 0x1bf1d4u: goto label_1bf1d4;
        case 0x1bf1d8u: goto label_1bf1d8;
        case 0x1bf1dcu: goto label_1bf1dc;
        case 0x1bf1e0u: goto label_1bf1e0;
        case 0x1bf1e4u: goto label_1bf1e4;
        case 0x1bf1e8u: goto label_1bf1e8;
        case 0x1bf1ecu: goto label_1bf1ec;
        case 0x1bf1f0u: goto label_1bf1f0;
        case 0x1bf1f4u: goto label_1bf1f4;
        case 0x1bf1f8u: goto label_1bf1f8;
        case 0x1bf1fcu: goto label_1bf1fc;
        case 0x1bf200u: goto label_1bf200;
        case 0x1bf204u: goto label_1bf204;
        case 0x1bf208u: goto label_1bf208;
        case 0x1bf20cu: goto label_1bf20c;
        case 0x1bf210u: goto label_1bf210;
        case 0x1bf214u: goto label_1bf214;
        case 0x1bf218u: goto label_1bf218;
        case 0x1bf21cu: goto label_1bf21c;
        case 0x1bf220u: goto label_1bf220;
        case 0x1bf224u: goto label_1bf224;
        case 0x1bf228u: goto label_1bf228;
        case 0x1bf22cu: goto label_1bf22c;
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf234u: goto label_1bf234;
        case 0x1bf238u: goto label_1bf238;
        case 0x1bf23cu: goto label_1bf23c;
        case 0x1bf240u: goto label_1bf240;
        case 0x1bf244u: goto label_1bf244;
        case 0x1bf248u: goto label_1bf248;
        case 0x1bf24cu: goto label_1bf24c;
        case 0x1bf250u: goto label_1bf250;
        case 0x1bf254u: goto label_1bf254;
        case 0x1bf258u: goto label_1bf258;
        case 0x1bf25cu: goto label_1bf25c;
        case 0x1bf260u: goto label_1bf260;
        case 0x1bf264u: goto label_1bf264;
        case 0x1bf268u: goto label_1bf268;
        case 0x1bf26cu: goto label_1bf26c;
        case 0x1bf270u: goto label_1bf270;
        case 0x1bf274u: goto label_1bf274;
        case 0x1bf278u: goto label_1bf278;
        case 0x1bf27cu: goto label_1bf27c;
        case 0x1bf280u: goto label_1bf280;
        case 0x1bf284u: goto label_1bf284;
        case 0x1bf288u: goto label_1bf288;
        case 0x1bf28cu: goto label_1bf28c;
        case 0x1bf290u: goto label_1bf290;
        case 0x1bf294u: goto label_1bf294;
        case 0x1bf298u: goto label_1bf298;
        case 0x1bf29cu: goto label_1bf29c;
        case 0x1bf2a0u: goto label_1bf2a0;
        case 0x1bf2a4u: goto label_1bf2a4;
        case 0x1bf2a8u: goto label_1bf2a8;
        case 0x1bf2acu: goto label_1bf2ac;
        case 0x1bf2b0u: goto label_1bf2b0;
        case 0x1bf2b4u: goto label_1bf2b4;
        case 0x1bf2b8u: goto label_1bf2b8;
        case 0x1bf2bcu: goto label_1bf2bc;
        case 0x1bf2c0u: goto label_1bf2c0;
        case 0x1bf2c4u: goto label_1bf2c4;
        case 0x1bf2c8u: goto label_1bf2c8;
        case 0x1bf2ccu: goto label_1bf2cc;
        case 0x1bf2d0u: goto label_1bf2d0;
        case 0x1bf2d4u: goto label_1bf2d4;
        case 0x1bf2d8u: goto label_1bf2d8;
        case 0x1bf2dcu: goto label_1bf2dc;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf2e4u: goto label_1bf2e4;
        default: break;
    }

    ctx->pc = 0x1beba0u;

label_1beba0:
    // 0x1beba0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1beba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1beba4:
    // 0x1beba4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1beba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1beba8:
    // 0x1beba8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1beba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1bebac:
    // 0x1bebac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bebacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bebb0:
    // 0x1bebb0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1bebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1bebb4:
    // 0x1bebb4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1bebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1bebb8:
    // 0x1bebb8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1bebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1bebbc:
    // 0x1bebbc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1bebc0:
    // 0x1bebc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bebc4:
    // 0x1bebc4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1bebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1bebc8:
    // 0x1bebc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bebcc:
    // 0x1bebcc: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1bebccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_1bebd0:
    // 0x1bebd0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1bebd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1bebd4:
    // 0x1bebd4: 0x104001b7  beqz        $v0, . + 4 + (0x1B7 << 2)
label_1bebd8:
    if (ctx->pc == 0x1BEBD8u) {
        ctx->pc = 0x1BEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBD4u;
        // 0x1bebd8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBDCu;
        goto label_1bebdc;
    }
    ctx->pc = 0x1BEBD4u;
    {
        const bool branch_taken_0x1bebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBD4u;
        // 0x1bebd8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebd4) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BEBDCu;
label_1bebdc:
    // 0x1bebdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bebe0:
    // 0x1bebe0: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x1bebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
label_1bebe4:
    // 0x1bebe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bebe8:
    // 0x1bebe8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bebec:
    // 0x1bebec: 0x800008  jr          $a0
label_1bebf0:
    if (ctx->pc == 0x1BEBF0u) {
        ctx->pc = 0x1BEBF4u;
        goto label_1bebf4;
    }
    ctx->pc = 0x1BEBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEBF4u: goto label_1bebf4;
            case 0x1BECE0u: goto label_1bece0;
            case 0x1BF060u: goto label_1bf060;
            case 0x1BF158u: goto label_1bf158;
            case 0x1BF22Cu: goto label_1bf22c;
            case 0x1BF284u: goto label_1bf284;
            case 0x1BF2B4u: goto label_1bf2b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEBECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BEBF4u;
label_1bebf4:
    // 0x1bebf4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1bebf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1bebf8:
    // 0x1bebf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bebfc:
    // 0x1bebfc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bebfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bec00:
    // 0x1bec00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bec04:
    if (ctx->pc == 0x1BEC04u) {
        ctx->pc = 0x1BEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC00u;
        // 0x1bec04: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC08u;
        goto label_1bec08;
    }
    ctx->pc = 0x1BEC00u;
    {
        const bool branch_taken_0x1bec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC00u;
        // 0x1bec04: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec00) {
            ctx->pc = 0x1BEC14u;
            goto label_1bec14;
        }
    }
    ctx->pc = 0x1BEC08u;
label_1bec08:
    // 0x1bec08: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1bec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1bec0c:
    // 0x1bec0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bec10:
    if (ctx->pc == 0x1BEC10u) {
        ctx->pc = 0x1BEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC0Cu;
        // 0x1bec10: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC14u;
        goto label_1bec14;
    }
    ctx->pc = 0x1BEC0Cu;
    {
        const bool branch_taken_0x1bec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC0Cu;
        // 0x1bec10: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec0c) {
            ctx->pc = 0x1BEC18u;
            goto label_1bec18;
        }
    }
    ctx->pc = 0x1BEC14u;
label_1bec14:
    // 0x1bec14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bec14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bec18:
    // 0x1bec18: 0x104001a6  beqz        $v0, . + 4 + (0x1A6 << 2)
label_1bec1c:
    if (ctx->pc == 0x1BEC1Cu) {
        ctx->pc = 0x1BEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC18u;
        // 0x1bec1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC20u;
        goto label_1bec20;
    }
    ctx->pc = 0x1BEC18u;
    {
        const bool branch_taken_0x1bec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC18u;
        // 0x1bec1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec18) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BEC20u;
label_1bec20:
    // 0x1bec20: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1bec20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1bec24:
    // 0x1bec24: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bec24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bec28:
    // 0x1bec28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bec2c:
    if (ctx->pc == 0x1BEC2Cu) {
        ctx->pc = 0x1BEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC28u;
        // 0x1bec2c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC30u;
        goto label_1bec30;
    }
    ctx->pc = 0x1BEC28u;
    {
        const bool branch_taken_0x1bec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC28u;
        // 0x1bec2c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec28) {
            ctx->pc = 0x1BEC3Cu;
            goto label_1bec3c;
        }
    }
    ctx->pc = 0x1BEC30u;
label_1bec30:
    // 0x1bec30: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1bec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1bec34:
    // 0x1bec34: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bec38:
    if (ctx->pc == 0x1BEC38u) {
        ctx->pc = 0x1BEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC34u;
        // 0x1bec38: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC3Cu;
        goto label_1bec3c;
    }
    ctx->pc = 0x1BEC34u;
    {
        const bool branch_taken_0x1bec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC34u;
        // 0x1bec38: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec34) {
            ctx->pc = 0x1BEC40u;
            goto label_1bec40;
        }
    }
    ctx->pc = 0x1BEC3Cu;
label_1bec3c:
    // 0x1bec3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bec3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bec40:
    // 0x1bec40: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1bec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bec44:
    // 0x1bec44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bec48:
    // 0x1bec48: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x1bec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
label_1bec4c:
    // 0x1bec4c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bec4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_1bec50:
    // 0x1bec50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bec50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bec54:
    // 0x1bec54: 0x0  nop
    ctx->pc = 0x1bec54u;
    // NOP
label_1bec58:
    // 0x1bec58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bec58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bec5c:
    // 0x1bec5c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1bec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1bec60:
    // 0x1bec60: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1bec60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1bec64:
    // 0x1bec64: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1bec64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bec68:
    // 0x1bec68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bec6c:
    if (ctx->pc == 0x1BEC6Cu) {
        ctx->pc = 0x1BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC68u;
        // 0x1bec6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC70u;
        goto label_1bec70;
    }
    ctx->pc = 0x1BEC68u;
    {
        const bool branch_taken_0x1bec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC68u;
        // 0x1bec6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec68) {
            ctx->pc = 0x1BEC7Cu;
            goto label_1bec7c;
        }
    }
    ctx->pc = 0x1BEC70u;
label_1bec70:
    // 0x1bec70: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1bec74:
    // 0x1bec74: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bec78:
    if (ctx->pc == 0x1BEC78u) {
        ctx->pc = 0x1BEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC74u;
        // 0x1bec78: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC7Cu;
        goto label_1bec7c;
    }
    ctx->pc = 0x1BEC74u;
    {
        const bool branch_taken_0x1bec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC74u;
        // 0x1bec78: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec74) {
            ctx->pc = 0x1BEC80u;
            goto label_1bec80;
        }
    }
    ctx->pc = 0x1BEC7Cu;
label_1bec7c:
    // 0x1bec7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bec7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bec80:
    // 0x1bec80: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1bec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bec84:
    // 0x1bec84: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1bec88:
    // 0x1bec88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bec88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1bec8c:
    // 0x1bec8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bec8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bec90:
    // 0x1bec90: 0x0  nop
    ctx->pc = 0x1bec90u;
    // NOP
label_1bec94:
    // 0x1bec94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bec94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bec98:
    // 0x1bec98: 0x0  nop
    ctx->pc = 0x1bec98u;
    // NOP
label_1bec9c:
    // 0x1bec9c: 0x45000185  bc1f        . + 4 + (0x185 << 2)
label_1beca0:
    if (ctx->pc == 0x1BECA0u) {
        ctx->pc = 0x1BECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC9Cu;
        // 0x1beca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECA4u;
        goto label_1beca4;
    }
    ctx->pc = 0x1BEC9Cu;
    {
        const bool branch_taken_0x1bec9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC9Cu;
        // 0x1beca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec9c) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BECA4u;
label_1beca4:
    // 0x1beca4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1beca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1beca8:
    // 0x1beca8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1beca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1becac:
    // 0x1becac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1becb0:
    if (ctx->pc == 0x1BECB0u) {
        ctx->pc = 0x1BECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECACu;
        // 0x1becb0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECB4u;
        goto label_1becb4;
    }
    ctx->pc = 0x1BECACu;
    {
        const bool branch_taken_0x1becac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECACu;
        // 0x1becb0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becac) {
            ctx->pc = 0x1BECC0u;
            goto label_1becc0;
        }
    }
    ctx->pc = 0x1BECB4u;
label_1becb4:
    // 0x1becb4: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1becb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1becb8:
    // 0x1becb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1becbc:
    if (ctx->pc == 0x1BECBCu) {
        ctx->pc = 0x1BECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECB8u;
        // 0x1becbc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECC0u;
        goto label_1becc0;
    }
    ctx->pc = 0x1BECB8u;
    {
        const bool branch_taken_0x1becb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECB8u;
        // 0x1becbc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becb8) {
            ctx->pc = 0x1BECD0u;
            goto label_1becd0;
        }
    }
    ctx->pc = 0x1BECC0u;
label_1becc0:
    // 0x1becc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1becc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1becc4:
    // 0x1becc4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1becc8:
    // 0x1becc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1becc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1beccc:
    // 0x1beccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1becccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1becd0:
    // 0x1becd0: 0x0  nop
    ctx->pc = 0x1becd0u;
    // NOP
label_1becd4:
    // 0x1becd4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1becd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1becd8:
    // 0x1becd8: 0x1000011c  b           . + 4 + (0x11C << 2)
label_1becdc:
    if (ctx->pc == 0x1BECDCu) {
        ctx->pc = 0x1BECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECD8u;
        // 0x1becdc: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECE0u;
        goto label_1bece0;
    }
    ctx->pc = 0x1BECD8u;
    {
        const bool branch_taken_0x1becd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECD8u;
        // 0x1becdc: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becd8) {
            ctx->pc = 0x1BF14Cu;
            goto label_1bf14c;
        }
    }
    ctx->pc = 0x1BECE0u;
label_1bece0:
    // 0x1bece0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1bece4:
    // 0x1bece4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bece8:
    // 0x1bece8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1bece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1becec:
    // 0x1becec: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1bececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1becf0:
    // 0x1becf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1becf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1becf4:
    // 0x1becf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1becf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1becf8:
    // 0x1becf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1becf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1becfc:
    // 0x1becfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1becfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bed00:
    // 0x1bed00: 0xc0b2e92  jal         func_2CBA48
label_1bed04:
    if (ctx->pc == 0x1BED04u) {
        ctx->pc = 0x1BED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED00u;
        // 0x1bed04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BED08u;
        goto label_1bed08;
    }
    ctx->pc = 0x1BED00u;
    SET_GPR_U32(ctx, 31, 0x1BED08u);
    ctx->pc = 0x1BED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED00u;
    // 0x1bed04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BED00u, 0x1BED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED08u;
label_1bed08:
    // 0x1bed08: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1bed0c:
    // 0x1bed0c: 0x246695c0  addiu       $a2, $v1, -0x6A40
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940096));
label_1bed10:
    // 0x1bed10: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1bed10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1bed14:
    // 0x1bed14: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1bed14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1bed18:
    // 0x1bed18: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1bed18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bed1c:
    // 0x1bed1c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1bed1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bed20:
    // 0x1bed20: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1bed20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bed24:
    // 0x1bed24: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1bed24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bed28:
    // 0x1bed28: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1bed28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed2c:
    // 0x1bed2c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1bed2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed30:
    // 0x1bed30: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1bed30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed34:
    // 0x1bed34: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1bed34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed38:
    // 0x1bed38: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x1bed38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed3c:
    // 0x1bed3c: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x1bed3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed40:
    // 0x1bed40: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x1bed40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1bed44:
    // 0x1bed44: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x1bed44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1bed48:
    // 0x1bed48: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_1bed4c:
    // 0x1bed4c: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x1bed4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed50:
    // 0x1bed50: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x1bed50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bed54:
    // 0x1bed54: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1bed58:
    // 0x1bed58: 0xc0c73f8  jal         func_31CFE0
label_1bed5c:
    if (ctx->pc == 0x1BED5Cu) {
        ctx->pc = 0x1BED60u;
        goto label_1bed60;
    }
    ctx->pc = 0x1BED58u;
    SET_GPR_U32(ctx, 31, 0x1BED60u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1BED58u, 0x1BED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED60u;
label_1bed60:
    // 0x1bed60: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bed64:
    // 0x1bed64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bed64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1bed68:
    // 0x1bed68: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1bed6c:
    if (ctx->pc == 0x1BED6Cu) {
        ctx->pc = 0x1BED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED68u;
        // 0x1bed6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BED70u;
        goto label_1bed70;
    }
    ctx->pc = 0x1BED68u;
    {
        const bool branch_taken_0x1bed68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed68) {
            ctx->pc = 0x1BED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BED68u;
            // 0x1bed6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BED70u;
            goto label_1bed70;
        }
    }
    ctx->pc = 0x1BED70u;
label_1bed70:
    // 0x1bed70: 0x2010  mfhi        $a0
    ctx->pc = 0x1bed70u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bed74:
    // 0x1bed74: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x1bed74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1bed78:
    // 0x1bed78: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_1bed7c:
    if (ctx->pc == 0x1BED7Cu) {
        ctx->pc = 0x1BED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED78u;
        // 0x1bed7c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BED80u;
        goto label_1bed80;
    }
    ctx->pc = 0x1BED78u;
    {
        const bool branch_taken_0x1bed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED78u;
        // 0x1bed7c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed78) {
            ctx->pc = 0x1BEF40u;
            goto label_1bef40;
        }
    }
    ctx->pc = 0x1BED80u;
label_1bed80:
    // 0x1bed80: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1bed84:
    // 0x1bed84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1bed88:
    // 0x1bed88: 0x24b09b70  addiu       $s0, $a1, -0x6490
    ctx->pc = 0x1bed88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
label_1bed8c:
    // 0x1bed8c: 0x2491f600  addiu       $s1, $a0, -0xA00
    ctx->pc = 0x1bed8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964736));
label_1bed90:
    // 0x1bed90: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1bed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1bed94:
    // 0x1bed94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1bed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1bed98:
    // 0x1bed98: 0x2453f600  addiu       $s3, $v0, -0xA00
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
label_1bed9c:
    // 0x1bed9c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1beda0:
    // 0x1beda0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1beda0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1beda4:
    // 0x1beda4: 0x2496f700  addiu       $s6, $a0, -0x900
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
label_1beda8:
    // 0x1beda8: 0x2475f700  addiu       $s5, $v1, -0x900
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
label_1bedac:
    // 0x1bedac: 0x2457f700  addiu       $s7, $v0, -0x900
    ctx->pc = 0x1bedacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_1bedb0:
    // 0x1bedb0: 0xc07e9b0  jal         func_1FA6C0
label_1bedb4:
    if (ctx->pc == 0x1BEDB4u) {
        ctx->pc = 0x1BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB0u;
        // 0x1bedb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDB8u;
        goto label_1bedb8;
    }
    ctx->pc = 0x1BEDB0u;
    SET_GPR_U32(ctx, 31, 0x1BEDB8u);
    ctx->pc = 0x1BEDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDB0u;
    // 0x1bedb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEDB0u, 0x1BEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDB8u;
label_1bedb8:
    // 0x1bedb8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1bedbc:
    if (ctx->pc == 0x1BEDBCu) {
        ctx->pc = 0x1BEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB8u;
        // 0x1bedbc: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDC0u;
        goto label_1bedc0;
    }
    ctx->pc = 0x1BEDB8u;
    {
        const bool branch_taken_0x1bedb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bedb8) {
            ctx->pc = 0x1BEDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEDB8u;
            // 0x1bedbc: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEDDCu;
            goto label_1beddc;
        }
    }
    ctx->pc = 0x1BEDC0u;
label_1bedc0:
    // 0x1bedc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bedc4:
    // 0x1bedc4: 0xc07ebd6  jal         func_1FAF58
label_1bedc8:
    if (ctx->pc == 0x1BEDC8u) {
        ctx->pc = 0x1BEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDC4u;
        // 0x1bedc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDCCu;
        goto label_1bedcc;
    }
    ctx->pc = 0x1BEDC4u;
    SET_GPR_U32(ctx, 31, 0x1BEDCCu);
    ctx->pc = 0x1BEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDC4u;
    // 0x1bedc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x1BEDC4u, 0x1BEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDCCu;
label_1bedcc:
    // 0x1bedcc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bedd0:
    if (ctx->pc == 0x1BEDD0u) {
        ctx->pc = 0x1BEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDCCu;
        // 0x1bedd0: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDD4u;
        goto label_1bedd4;
    }
    ctx->pc = 0x1BEDCCu;
    {
        const bool branch_taken_0x1bedcc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDCCu;
        // 0x1bedd0: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedcc) {
            ctx->pc = 0x1BEDDCu;
            goto label_1beddc;
        }
    }
    ctx->pc = 0x1BEDD4u;
label_1bedd4:
    // 0x1bedd4: 0x10000063  b           . + 4 + (0x63 << 2)
label_1bedd8:
    if (ctx->pc == 0x1BEDD8u) {
        ctx->pc = 0x1BEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDD4u;
        // 0x1bedd8: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDDCu;
        goto label_1beddc;
    }
    ctx->pc = 0x1BEDD4u;
    {
        const bool branch_taken_0x1bedd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDD4u;
        // 0x1bedd8: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedd4) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEDDCu;
label_1beddc:
    // 0x1beddc: 0xc07e9b0  jal         func_1FA6C0
label_1bede0:
    if (ctx->pc == 0x1BEDE0u) {
        ctx->pc = 0x1BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDDCu;
        // 0x1bede0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDE4u;
        goto label_1bede4;
    }
    ctx->pc = 0x1BEDDCu;
    SET_GPR_U32(ctx, 31, 0x1BEDE4u);
    ctx->pc = 0x1BEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDDCu;
    // 0x1bede0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEDDCu, 0x1BEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDE4u;
label_1bede4:
    // 0x1bede4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1bede8:
    if (ctx->pc == 0x1BEDE8u) {
        ctx->pc = 0x1BEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDE4u;
        // 0x1bede8: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDECu;
        goto label_1bedec;
    }
    ctx->pc = 0x1BEDE4u;
    {
        const bool branch_taken_0x1bede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bede4) {
            ctx->pc = 0x1BEDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEDE4u;
            // 0x1bede8: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEE1Cu;
            goto label_1bee1c;
        }
    }
    ctx->pc = 0x1BEDECu;
label_1bedec:
    // 0x1bedec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bedf0:
    // 0x1bedf0: 0xc07eff4  jal         func_1FBFD0
label_1bedf4:
    if (ctx->pc == 0x1BEDF4u) {
        ctx->pc = 0x1BEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF0u;
        // 0x1bedf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDF8u;
        goto label_1bedf8;
    }
    ctx->pc = 0x1BEDF0u;
    SET_GPR_U32(ctx, 31, 0x1BEDF8u);
    ctx->pc = 0x1BEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDF0u;
    // 0x1bedf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1BEDF0u, 0x1BEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDF8u;
label_1bedf8:
    // 0x1bedf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bedfc:
    if (ctx->pc == 0x1BEDFCu) {
        ctx->pc = 0x1BEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF8u;
        // 0x1bedfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE00u;
        goto label_1bee00;
    }
    ctx->pc = 0x1BEDF8u;
    {
        const bool branch_taken_0x1bedf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF8u;
        // 0x1bedfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedf8) {
            ctx->pc = 0x1BEE18u;
            goto label_1bee18;
        }
    }
    ctx->pc = 0x1BEE00u;
label_1bee00:
    // 0x1bee00: 0xc07ebd6  jal         func_1FAF58
label_1bee04:
    if (ctx->pc == 0x1BEE04u) {
        ctx->pc = 0x1BEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE00u;
        // 0x1bee04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE08u;
        goto label_1bee08;
    }
    ctx->pc = 0x1BEE00u;
    SET_GPR_U32(ctx, 31, 0x1BEE08u);
    ctx->pc = 0x1BEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE00u;
    // 0x1bee04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x1BEE00u, 0x1BEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE08u;
label_1bee08:
    // 0x1bee08: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1bee0c:
    if (ctx->pc == 0x1BEE0Cu) {
        ctx->pc = 0x1BEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE08u;
        // 0x1bee0c: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE10u;
        goto label_1bee10;
    }
    ctx->pc = 0x1BEE08u;
    {
        const bool branch_taken_0x1bee08 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE08u;
        // 0x1bee0c: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee08) {
            ctx->pc = 0x1BEE1Cu;
            goto label_1bee1c;
        }
    }
    ctx->pc = 0x1BEE10u;
label_1bee10:
    // 0x1bee10: 0x10000054  b           . + 4 + (0x54 << 2)
label_1bee14:
    if (ctx->pc == 0x1BEE14u) {
        ctx->pc = 0x1BEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE10u;
        // 0x1bee14: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE18u;
        goto label_1bee18;
    }
    ctx->pc = 0x1BEE10u;
    {
        const bool branch_taken_0x1bee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE10u;
        // 0x1bee14: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee10) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEE18u;
label_1bee18:
    // 0x1bee18: 0x26909b70  addiu       $s0, $s4, -0x6490
    ctx->pc = 0x1bee18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
label_1bee1c:
    // 0x1bee1c: 0xc07e9b0  jal         func_1FA6C0
label_1bee20:
    if (ctx->pc == 0x1BEE20u) {
        ctx->pc = 0x1BEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE1Cu;
        // 0x1bee20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE24u;
        goto label_1bee24;
    }
    ctx->pc = 0x1BEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE24u);
    ctx->pc = 0x1BEE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE1Cu;
    // 0x1bee20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEE1Cu, 0x1BEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE24u;
label_1bee24:
    // 0x1bee24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bee28:
    if (ctx->pc == 0x1BEE28u) {
        ctx->pc = 0x1BEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE24u;
        // 0x1bee28: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE2Cu;
        goto label_1bee2c;
    }
    ctx->pc = 0x1BEE24u;
    {
        const bool branch_taken_0x1bee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE24u;
        // 0x1bee28: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee24) {
            ctx->pc = 0x1BEE40u;
            goto label_1bee40;
        }
    }
    ctx->pc = 0x1BEE2Cu;
label_1bee2c:
    // 0x1bee2c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1bee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1bee30:
    // 0x1bee30: 0x8c437a28  lw          $v1, 0x7A28($v0)
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31272)));
label_1bee34:
    // 0x1bee34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bee34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1bee38:
    // 0x1bee38: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_1bee3c:
    if (ctx->pc == 0x1BEE3Cu) {
        ctx->pc = 0x1BEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE38u;
        // 0x1bee3c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE40u;
        goto label_1bee40;
    }
    ctx->pc = 0x1BEE38u;
    {
        const bool branch_taken_0x1bee38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE38u;
        // 0x1bee3c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee38) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEE40u;
label_1bee40:
    // 0x1bee40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bee44:
    // 0x1bee44: 0xc07eff4  jal         func_1FBFD0
label_1bee48:
    if (ctx->pc == 0x1BEE48u) {
        ctx->pc = 0x1BEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE44u;
        // 0x1bee48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE4Cu;
        goto label_1bee4c;
    }
    ctx->pc = 0x1BEE44u;
    SET_GPR_U32(ctx, 31, 0x1BEE4Cu);
    ctx->pc = 0x1BEE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE44u;
    // 0x1bee48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1BEE44u, 0x1BEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE4Cu;
label_1bee4c:
    // 0x1bee4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1bee50:
    if (ctx->pc == 0x1BEE50u) {
        ctx->pc = 0x1BEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE4Cu;
        // 0x1bee50: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE54u;
        goto label_1bee54;
    }
    ctx->pc = 0x1BEE4Cu;
    {
        const bool branch_taken_0x1bee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee4c) {
            ctx->pc = 0x1BEE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEE4Cu;
            // 0x1bee50: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEE7Cu;
            goto label_1bee7c;
        }
    }
    ctx->pc = 0x1BEE54u;
label_1bee54:
    // 0x1bee54: 0xc07e9b0  jal         func_1FA6C0
label_1bee58:
    if (ctx->pc == 0x1BEE58u) {
        ctx->pc = 0x1BEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE54u;
        // 0x1bee58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE5Cu;
        goto label_1bee5c;
    }
    ctx->pc = 0x1BEE54u;
    SET_GPR_U32(ctx, 31, 0x1BEE5Cu);
    ctx->pc = 0x1BEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE54u;
    // 0x1bee58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEE54u, 0x1BEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE5Cu;
label_1bee5c:
    // 0x1bee5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1bee60:
    if (ctx->pc == 0x1BEE60u) {
        ctx->pc = 0x1BEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE5Cu;
        // 0x1bee60: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE64u;
        goto label_1bee64;
    }
    ctx->pc = 0x1BEE5Cu;
    {
        const bool branch_taken_0x1bee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE5Cu;
        // 0x1bee60: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee5c) {
            ctx->pc = 0x1BEE7Cu;
            goto label_1bee7c;
        }
    }
    ctx->pc = 0x1BEE64u;
label_1bee64:
    // 0x1bee64: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1bee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1bee68:
    // 0x1bee68: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1bee6c:
    // 0x1bee6c: 0x8c437a28  lw          $v1, 0x7A28($v0)
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31272)));
label_1bee70:
    // 0x1bee70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bee70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1bee74:
    // 0x1bee74: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_1bee78:
    if (ctx->pc == 0x1BEE78u) {
        ctx->pc = 0x1BEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE74u;
        // 0x1bee78: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE7Cu;
        goto label_1bee7c;
    }
    ctx->pc = 0x1BEE74u;
    {
        const bool branch_taken_0x1bee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE74u;
        // 0x1bee78: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee74) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEE7Cu;
label_1bee7c:
    // 0x1bee7c: 0xc07e9b0  jal         func_1FA6C0
label_1bee80:
    if (ctx->pc == 0x1BEE80u) {
        ctx->pc = 0x1BEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE7Cu;
        // 0x1bee80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE84u;
        goto label_1bee84;
    }
    ctx->pc = 0x1BEE7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE84u);
    ctx->pc = 0x1BEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE7Cu;
    // 0x1bee80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEE7Cu, 0x1BEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE84u;
label_1bee84:
    // 0x1bee84: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1bee88:
    if (ctx->pc == 0x1BEE88u) {
        ctx->pc = 0x1BEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE84u;
        // 0x1bee88: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE8Cu;
        goto label_1bee8c;
    }
    ctx->pc = 0x1BEE84u;
    {
        const bool branch_taken_0x1bee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bee84) {
            ctx->pc = 0x1BEE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEE84u;
            // 0x1bee88: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEEBCu;
            goto label_1beebc;
        }
    }
    ctx->pc = 0x1BEE8Cu;
label_1bee8c:
    // 0x1bee8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bee90:
    // 0x1bee90: 0xc07eff4  jal         func_1FBFD0
label_1bee94:
    if (ctx->pc == 0x1BEE94u) {
        ctx->pc = 0x1BEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE90u;
        // 0x1bee94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE98u;
        goto label_1bee98;
    }
    ctx->pc = 0x1BEE90u;
    SET_GPR_U32(ctx, 31, 0x1BEE98u);
    ctx->pc = 0x1BEE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE90u;
    // 0x1bee94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1BEE90u, 0x1BEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE98u;
label_1bee98:
    // 0x1bee98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bee9c:
    if (ctx->pc == 0x1BEE9Cu) {
        ctx->pc = 0x1BEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE98u;
        // 0x1bee9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEA0u;
        goto label_1beea0;
    }
    ctx->pc = 0x1BEE98u;
    {
        const bool branch_taken_0x1bee98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE98u;
        // 0x1bee9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee98) {
            ctx->pc = 0x1BEEB8u;
            goto label_1beeb8;
        }
    }
    ctx->pc = 0x1BEEA0u;
label_1beea0:
    // 0x1beea0: 0xc07ee4a  jal         func_1FB928
label_1beea4:
    if (ctx->pc == 0x1BEEA4u) {
        ctx->pc = 0x1BEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA0u;
        // 0x1beea4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEA8u;
        goto label_1beea8;
    }
    ctx->pc = 0x1BEEA0u;
    SET_GPR_U32(ctx, 31, 0x1BEEA8u);
    ctx->pc = 0x1BEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEA0u;
    // 0x1beea4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1BEEA0u, 0x1BEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEA8u;
label_1beea8:
    // 0x1beea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1beeac:
    if (ctx->pc == 0x1BEEACu) {
        ctx->pc = 0x1BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA8u;
        // 0x1beeac: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEB0u;
        goto label_1beeb0;
    }
    ctx->pc = 0x1BEEA8u;
    {
        const bool branch_taken_0x1beea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA8u;
        // 0x1beeac: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beea8) {
            ctx->pc = 0x1BEEBCu;
            goto label_1beebc;
        }
    }
    ctx->pc = 0x1BEEB0u;
label_1beeb0:
    // 0x1beeb0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1beeb4:
    if (ctx->pc == 0x1BEEB4u) {
        ctx->pc = 0x1BEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB0u;
        // 0x1beeb4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEB8u;
        goto label_1beeb8;
    }
    ctx->pc = 0x1BEEB0u;
    {
        const bool branch_taken_0x1beeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB0u;
        // 0x1beeb4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb0) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEEB8u;
label_1beeb8:
    // 0x1beeb8: 0x26909b70  addiu       $s0, $s4, -0x6490
    ctx->pc = 0x1beeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
label_1beebc:
    // 0x1beebc: 0xc07e9b0  jal         func_1FA6C0
label_1beec0:
    if (ctx->pc == 0x1BEEC0u) {
        ctx->pc = 0x1BEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEBCu;
        // 0x1beec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEC4u;
        goto label_1beec4;
    }
    ctx->pc = 0x1BEEBCu;
    SET_GPR_U32(ctx, 31, 0x1BEEC4u);
    ctx->pc = 0x1BEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEBCu;
    // 0x1beec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEEBCu, 0x1BEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEC4u;
label_1beec4:
    // 0x1beec4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1beec8:
    if (ctx->pc == 0x1BEEC8u) {
        ctx->pc = 0x1BEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEC4u;
        // 0x1beec8: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEECCu;
        goto label_1beecc;
    }
    ctx->pc = 0x1BEEC4u;
    {
        const bool branch_taken_0x1beec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beec4) {
            ctx->pc = 0x1BEEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEEC4u;
            // 0x1beec8: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEEFCu;
            goto label_1beefc;
        }
    }
    ctx->pc = 0x1BEECCu;
label_1beecc:
    // 0x1beecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beed0:
    // 0x1beed0: 0xc07eff4  jal         func_1FBFD0
label_1beed4:
    if (ctx->pc == 0x1BEED4u) {
        ctx->pc = 0x1BEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED0u;
        // 0x1beed4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEED8u;
        goto label_1beed8;
    }
    ctx->pc = 0x1BEED0u;
    SET_GPR_U32(ctx, 31, 0x1BEED8u);
    ctx->pc = 0x1BEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEED0u;
    // 0x1beed4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1BEED0u, 0x1BEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEED8u;
label_1beed8:
    // 0x1beed8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1beedc:
    if (ctx->pc == 0x1BEEDCu) {
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEE0u;
        goto label_1beee0;
    }
    ctx->pc = 0x1BEED8u;
    {
        const bool branch_taken_0x1beed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed8) {
            ctx->pc = 0x1BEEF8u;
            goto label_1beef8;
        }
    }
    ctx->pc = 0x1BEEE0u;
label_1beee0:
    // 0x1beee0: 0xc07ee4a  jal         func_1FB928
label_1beee4:
    if (ctx->pc == 0x1BEEE4u) {
        ctx->pc = 0x1BEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE0u;
        // 0x1beee4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEE8u;
        goto label_1beee8;
    }
    ctx->pc = 0x1BEEE0u;
    SET_GPR_U32(ctx, 31, 0x1BEEE8u);
    ctx->pc = 0x1BEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEE0u;
    // 0x1beee4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1BEEE0u, 0x1BEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEE8u;
label_1beee8:
    // 0x1beee8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1beeec:
    if (ctx->pc == 0x1BEEECu) {
        ctx->pc = 0x1BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE8u;
        // 0x1beeec: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEF0u;
        goto label_1beef0;
    }
    ctx->pc = 0x1BEEE8u;
    {
        const bool branch_taken_0x1beee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE8u;
        // 0x1beeec: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beee8) {
            ctx->pc = 0x1BEEFCu;
            goto label_1beefc;
        }
    }
    ctx->pc = 0x1BEEF0u;
label_1beef0:
    // 0x1beef0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1beef4:
    if (ctx->pc == 0x1BEEF4u) {
        ctx->pc = 0x1BEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF0u;
        // 0x1beef4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEF8u;
        goto label_1beef8;
    }
    ctx->pc = 0x1BEEF0u;
    {
        const bool branch_taken_0x1beef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF0u;
        // 0x1beef4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beef0) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEEF8u;
label_1beef8:
    // 0x1beef8: 0x26909b70  addiu       $s0, $s4, -0x6490
    ctx->pc = 0x1beef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
label_1beefc:
    // 0x1beefc: 0xc07e9b0  jal         func_1FA6C0
label_1bef00:
    if (ctx->pc == 0x1BEF00u) {
        ctx->pc = 0x1BEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEFCu;
        // 0x1bef00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF04u;
        goto label_1bef04;
    }
    ctx->pc = 0x1BEEFCu;
    SET_GPR_U32(ctx, 31, 0x1BEF04u);
    ctx->pc = 0x1BEF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEFCu;
    // 0x1bef00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1BEEFCu, 0x1BEF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF04u;
label_1bef04:
    // 0x1bef04: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1bef08:
    if (ctx->pc == 0x1BEF08u) {
        ctx->pc = 0x1BEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF04u;
        // 0x1bef08: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF0Cu;
        goto label_1bef0c;
    }
    ctx->pc = 0x1BEF04u;
    {
        const bool branch_taken_0x1bef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF04u;
        // 0x1bef08: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef04) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF0Cu;
label_1bef0c:
    // 0x1bef0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bef10:
    // 0x1bef10: 0xc07eff4  jal         func_1FBFD0
label_1bef14:
    if (ctx->pc == 0x1BEF14u) {
        ctx->pc = 0x1BEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF10u;
        // 0x1bef14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF18u;
        goto label_1bef18;
    }
    ctx->pc = 0x1BEF10u;
    SET_GPR_U32(ctx, 31, 0x1BEF18u);
    ctx->pc = 0x1BEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF10u;
    // 0x1bef14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1BEF10u, 0x1BEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF18u;
label_1bef18:
    // 0x1bef18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bef1c:
    if (ctx->pc == 0x1BEF1Cu) {
        ctx->pc = 0x1BEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF18u;
        // 0x1bef1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF20u;
        goto label_1bef20;
    }
    ctx->pc = 0x1BEF18u;
    {
        const bool branch_taken_0x1bef18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF18u;
        // 0x1bef1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef18) {
            ctx->pc = 0x1BEF38u;
            goto label_1bef38;
        }
    }
    ctx->pc = 0x1BEF20u;
label_1bef20:
    // 0x1bef20: 0xc07ee4a  jal         func_1FB928
label_1bef24:
    if (ctx->pc == 0x1BEF24u) {
        ctx->pc = 0x1BEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF20u;
        // 0x1bef24: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF28u;
        goto label_1bef28;
    }
    ctx->pc = 0x1BEF20u;
    SET_GPR_U32(ctx, 31, 0x1BEF28u);
    ctx->pc = 0x1BEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF20u;
    // 0x1bef24: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1BEF20u, 0x1BEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF28u;
label_1bef28:
    // 0x1bef28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1bef2c:
    if (ctx->pc == 0x1BEF2Cu) {
        ctx->pc = 0x1BEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF28u;
        // 0x1bef2c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF30u;
        goto label_1bef30;
    }
    ctx->pc = 0x1BEF28u;
    {
        const bool branch_taken_0x1bef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF28u;
        // 0x1bef2c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef28) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF30u;
label_1bef30:
    // 0x1bef30: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bef34:
    if (ctx->pc == 0x1BEF34u) {
        ctx->pc = 0x1BEF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF30u;
        // 0x1bef34: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF38u;
        goto label_1bef38;
    }
    ctx->pc = 0x1BEF30u;
    {
        const bool branch_taken_0x1bef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF30u;
        // 0x1bef34: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef30) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF38u;
label_1bef38:
    // 0x1bef38: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bef3c:
    if (ctx->pc == 0x1BEF3Cu) {
        ctx->pc = 0x1BEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF38u;
        // 0x1bef3c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF40u;
        goto label_1bef40;
    }
    ctx->pc = 0x1BEF38u;
    {
        const bool branch_taken_0x1bef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF38u;
        // 0x1bef3c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef38) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF40u;
label_1bef40:
    // 0x1bef40: 0x2482fffb  addiu       $v0, $a0, -0x5
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
label_1bef44:
    // 0x1bef44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bef44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bef48:
    // 0x1bef48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1bef4c:
    if (ctx->pc == 0x1BEF4Cu) {
        ctx->pc = 0x1BEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF48u;
        // 0x1bef4c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF50u;
        goto label_1bef50;
    }
    ctx->pc = 0x1BEF48u;
    {
        const bool branch_taken_0x1bef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF48u;
        // 0x1bef4c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef48) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF50u;
label_1bef50:
    // 0x1bef50: 0x2482fff9  addiu       $v0, $a0, -0x7
    ctx->pc = 0x1bef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
label_1bef54:
    // 0x1bef54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bef54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bef58:
    // 0x1bef58: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1bef5c:
    if (ctx->pc == 0x1BEF5Cu) {
        ctx->pc = 0x1BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF58u;
        // 0x1bef5c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF60u;
        goto label_1bef60;
    }
    ctx->pc = 0x1BEF58u;
    {
        const bool branch_taken_0x1bef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF58u;
        // 0x1bef5c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef58) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF60u;
label_1bef60:
    // 0x1bef60: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1bef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1bef64:
    // 0x1bef64: 0xae420604  sw          $v0, 0x604($s2)
    ctx->pc = 0x1bef64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 2));
label_1bef68:
    // 0x1bef68: 0x8e460604  lw          $a2, 0x604($s2)
    ctx->pc = 0x1bef68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1bef6c:
    // 0x1bef6c: 0x28c20900  slti        $v0, $a2, 0x900
    ctx->pc = 0x1bef6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2304) ? 1 : 0);
label_1bef70:
    // 0x1bef70: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1bef74:
    if (ctx->pc == 0x1BEF74u) {
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF78u;
        goto label_1bef78;
    }
    ctx->pc = 0x1BEF70u;
    {
        const bool branch_taken_0x1bef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef70) {
            ctx->pc = 0x1BEFECu;
            goto label_1befec;
        }
    }
    ctx->pc = 0x1BEF78u;
label_1bef78:
    // 0x1bef78: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1bef78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1bef7c:
    // 0x1bef7c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_1bef80:
    // 0x1bef80: 0xc0a48fa  jal         func_2923E8
label_1bef84:
    if (ctx->pc == 0x1BEF84u) {
        ctx->pc = 0x1BEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF80u;
        // 0x1bef84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF88u;
        goto label_1bef88;
    }
    ctx->pc = 0x1BEF80u;
    SET_GPR_U32(ctx, 31, 0x1BEF88u);
    ctx->pc = 0x1BEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF80u;
    // 0x1bef84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1BEF80u, 0x1BEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF88u;
label_1bef88:
    // 0x1bef88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bef88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bef8c:
    // 0x1bef8c: 0x8e430604  lw          $v1, 0x604($s2)
    ctx->pc = 0x1bef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1bef90:
    // 0x1bef90: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_1bef94:
    // 0x1bef94: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_1bef98:
    if (ctx->pc == 0x1BEF98u) {
        ctx->pc = 0x1BEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF94u;
        // 0x1bef98: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF9Cu;
        goto label_1bef9c;
    }
    ctx->pc = 0x1BEF94u;
    {
        const bool branch_taken_0x1bef94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bef94) {
            ctx->pc = 0x1BEF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEF94u;
            // 0x1bef98: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEFE4u;
            goto label_1befe4;
        }
    }
    ctx->pc = 0x1BEF9Cu;
label_1bef9c:
    // 0x1bef9c: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_1befa0:
    // 0x1befa0: 0x24a30110  addiu       $v1, $a1, 0x110
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
label_1befa4:
    // 0x1befa4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1befa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1befa8:
    // 0x1befa8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1befa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1befac:
    // 0x1befac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1befacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1befb0:
    // 0x1befb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1befb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1befb4:
    // 0x1befb4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1befb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1befb8:
    // 0x1befb8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1befb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1befbc:
    // 0x1befbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1befbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1befc0:
    // 0x1befc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1befc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1befc4:
    // 0x1befc4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1befc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1befc8:
    // 0x1befc8: 0xc6420104  lwc1        $f2, 0x104($s2)
    ctx->pc = 0x1befc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1befcc:
    // 0x1befcc: 0xe4a10110  swc1        $f1, 0x110($a1)
    ctx->pc = 0x1befccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
label_1befd0:
    // 0x1befd0: 0xe4a20104  swc1        $f2, 0x104($a1)
    ctx->pc = 0x1befd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 260), bits); }
label_1befd4:
    // 0x1befd4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1befd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1befd8:
    // 0x1befd8: 0xc06fa0c  jal         func_1BE830
label_1befdc:
    if (ctx->pc == 0x1BEFDCu) {
        ctx->pc = 0x1BEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFD8u;
        // 0x1befdc: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFE0u;
        goto label_1befe0;
    }
    ctx->pc = 0x1BEFD8u;
    SET_GPR_U32(ctx, 31, 0x1BEFE0u);
    ctx->pc = 0x1BEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFD8u;
    // 0x1befdc: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE830u, 0x1BEFD8u, 0x1BEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFE0u;
label_1befe0:
    // 0x1befe0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1befe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1befe4:
    // 0x1befe4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1befe8:
    if (ctx->pc == 0x1BEFE8u) {
        ctx->pc = 0x1BEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE4u;
        // 0x1befe8: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFECu;
        goto label_1befec;
    }
    ctx->pc = 0x1BEFE4u;
    {
        const bool branch_taken_0x1befe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE4u;
        // 0x1befe8: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befe4) {
            ctx->pc = 0x1BF278u;
            goto label_1bf278;
        }
    }
    ctx->pc = 0x1BEFECu;
label_1befec:
    // 0x1befec: 0x28c20940  slti        $v0, $a2, 0x940
    ctx->pc = 0x1befecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1beff0:
    // 0x1beff0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1beff4:
    if (ctx->pc == 0x1BEFF4u) {
        ctx->pc = 0x1BEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFF0u;
        // 0x1beff4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFF8u;
        goto label_1beff8;
    }
    ctx->pc = 0x1BEFF0u;
    {
        const bool branch_taken_0x1beff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFF0u;
        // 0x1beff4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beff0) {
            ctx->pc = 0x1BF014u;
            goto label_1bf014;
        }
    }
    ctx->pc = 0x1BEFF8u;
label_1beff8:
    // 0x1beff8: 0x24c5f700  addiu       $a1, $a2, -0x900
    ctx->pc = 0x1beff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964992));
label_1beffc:
    // 0x1beffc: 0xc07ee4a  jal         func_1FB928
label_1bf000:
    if (ctx->pc == 0x1BF000u) {
        ctx->pc = 0x1BF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFFCu;
        // 0x1bf000: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF004u;
        goto label_1bf004;
    }
    ctx->pc = 0x1BEFFCu;
    SET_GPR_U32(ctx, 31, 0x1BF004u);
    ctx->pc = 0x1BF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFFCu;
    // 0x1bf000: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1BEFFCu, 0x1BF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1bf008:
    if (ctx->pc == 0x1BF008u) {
        ctx->pc = 0x1BF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF004u;
        // 0x1bf008: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF00Cu;
        goto label_1bf00c;
    }
    ctx->pc = 0x1BF004u;
    {
        const bool branch_taken_0x1bf004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF004u;
        // 0x1bf008: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf004) {
            ctx->pc = 0x1BF030u;
            goto label_1bf030;
        }
    }
    ctx->pc = 0x1BF00Cu;
label_1bf00c:
    // 0x1bf00c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1bf010:
    if (ctx->pc == 0x1BF010u) {
        ctx->pc = 0x1BF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF00Cu;
        // 0x1bf010: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF014u;
        goto label_1bf014;
    }
    ctx->pc = 0x1BF00Cu;
    {
        const bool branch_taken_0x1bf00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF00Cu;
        // 0x1bf010: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf00c) {
            ctx->pc = 0x1BF14Cu;
            goto label_1bf14c;
        }
    }
    ctx->pc = 0x1BF014u;
label_1bf014:
    // 0x1bf014: 0x28c20b00  slti        $v0, $a2, 0xB00
    ctx->pc = 0x1bf014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2816) ? 1 : 0);
label_1bf018:
    // 0x1bf018: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_1bf01c:
    if (ctx->pc == 0x1BF01Cu) {
        ctx->pc = 0x1BF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF018u;
        // 0x1bf01c: 0x24c5f600  addiu       $a1, $a2, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF020u;
        goto label_1bf020;
    }
    ctx->pc = 0x1BF018u;
    {
        const bool branch_taken_0x1bf018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF018u;
        // 0x1bf01c: 0x24c5f600  addiu       $a1, $a2, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf018) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF020u;
label_1bf020:
    // 0x1bf020: 0xc07ebd6  jal         func_1FAF58
label_1bf024:
    if (ctx->pc == 0x1BF024u) {
        ctx->pc = 0x1BF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF020u;
        // 0x1bf024: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF028u;
        goto label_1bf028;
    }
    ctx->pc = 0x1BF020u;
    SET_GPR_U32(ctx, 31, 0x1BF028u);
    ctx->pc = 0x1BF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF020u;
    // 0x1bf024: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x1BF020u, 0x1BF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF028u;
label_1bf028:
    // 0x1bf028: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_1bf02c:
    if (ctx->pc == 0x1BF02Cu) {
        ctx->pc = 0x1BF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF028u;
        // 0x1bf02c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF030u;
        goto label_1bf030;
    }
    ctx->pc = 0x1BF028u;
    {
        const bool branch_taken_0x1bf028 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF028u;
        // 0x1bf02c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf028) {
            ctx->pc = 0x1BF058u;
            goto label_1bf058;
        }
    }
    ctx->pc = 0x1BF030u;
label_1bf030:
    // 0x1bf030: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1bf034:
    // 0x1bf034: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1bf034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_1bf038:
    // 0x1bf038: 0x240603d7  addiu       $a2, $zero, 0x3D7
    ctx->pc = 0x1bf038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
label_1bf03c:
    // 0x1bf03c: 0xc0a48fa  jal         func_2923E8
label_1bf040:
    if (ctx->pc == 0x1BF040u) {
        ctx->pc = 0x1BF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF03Cu;
        // 0x1bf040: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF044u;
        goto label_1bf044;
    }
    ctx->pc = 0x1BF03Cu;
    SET_GPR_U32(ctx, 31, 0x1BF044u);
    ctx->pc = 0x1BF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF03Cu;
    // 0x1bf040: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1BF03Cu, 0x1BF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF044u;
label_1bf044:
    // 0x1bf044: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1bf044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1bf048:
    // 0x1bf048: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bf048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bf04c:
    // 0x1bf04c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1bf04cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_1bf050:
    // 0x1bf050: 0x10000098  b           . + 4 + (0x98 << 2)
label_1bf054:
    if (ctx->pc == 0x1BF054u) {
        ctx->pc = 0x1BF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF050u;
        // 0x1bf054: 0xae43060c  sw          $v1, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF058u;
        goto label_1bf058;
    }
    ctx->pc = 0x1BF050u;
    {
        const bool branch_taken_0x1bf050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF050u;
        // 0x1bf054: 0xae43060c  sw          $v1, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf050) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF058u;
label_1bf058:
    // 0x1bf058: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1bf05c:
    if (ctx->pc == 0x1BF05Cu) {
        ctx->pc = 0x1BF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF058u;
        // 0x1bf05c: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF060u;
        goto label_1bf060;
    }
    ctx->pc = 0x1BF058u;
    {
        const bool branch_taken_0x1bf058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF058u;
        // 0x1bf05c: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf058) {
            ctx->pc = 0x1BF14Cu;
            goto label_1bf14c;
        }
    }
    ctx->pc = 0x1BF060u;
label_1bf060:
    // 0x1bf060: 0x8e420604  lw          $v0, 0x604($s2)
    ctx->pc = 0x1bf060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1bf064:
    // 0x1bf064: 0xae400608  sw          $zero, 0x608($s2)
    ctx->pc = 0x1bf064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 0));
label_1bf068:
    // 0x1bf068: 0x28420940  slti        $v0, $v0, 0x940
    ctx->pc = 0x1bf068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1bf06c:
    // 0x1bf06c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bf070:
    if (ctx->pc == 0x1BF070u) {
        ctx->pc = 0x1BF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF06Cu;
        // 0x1bf070: 0x240403c6  addiu       $a0, $zero, 0x3C6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 966));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF074u;
        goto label_1bf074;
    }
    ctx->pc = 0x1BF06Cu;
    {
        const bool branch_taken_0x1bf06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF06Cu;
        // 0x1bf070: 0x240403c6  addiu       $a0, $zero, 0x3C6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 966));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf06c) {
            ctx->pc = 0x1BF078u;
            goto label_1bf078;
        }
    }
    ctx->pc = 0x1BF074u;
label_1bf074:
    // 0x1bf074: 0x240403c7  addiu       $a0, $zero, 0x3C7
    ctx->pc = 0x1bf074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 967));
label_1bf078:
    // 0x1bf078: 0xc0c3ea6  jal         func_30FA98
label_1bf07c:
    if (ctx->pc == 0x1BF07Cu) {
        ctx->pc = 0x1BF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF078u;
        // 0x1bf07c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF080u;
        goto label_1bf080;
    }
    ctx->pc = 0x1BF078u;
    SET_GPR_U32(ctx, 31, 0x1BF080u);
    ctx->pc = 0x1BF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF078u;
    // 0x1bf07c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1BF078u, 0x1BF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF080u;
label_1bf080:
    // 0x1bf080: 0xae420608  sw          $v0, 0x608($s2)
    ctx->pc = 0x1bf080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 2));
label_1bf084:
    // 0x1bf084: 0x8e450608  lw          $a1, 0x608($s2)
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf088:
    // 0x1bf088: 0x50a0002e  beql        $a1, $zero, . + 4 + (0x2E << 2)
label_1bf08c:
    if (ctx->pc == 0x1BF08Cu) {
        ctx->pc = 0x1BF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF088u;
        // 0x1bf08c: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF090u;
        goto label_1bf090;
    }
    ctx->pc = 0x1BF088u;
    {
        const bool branch_taken_0x1bf088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf088) {
            ctx->pc = 0x1BF08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF088u;
            // 0x1bf08c: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF144u;
            goto label_1bf144;
        }
    }
    ctx->pc = 0x1BF090u;
label_1bf090:
    // 0x1bf090: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1bf090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1bf094:
    // 0x1bf094: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1bf098:
    // 0x1bf098: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1bf098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1bf09c:
    // 0x1bf09c: 0x40f809  jalr        $v0
label_1bf0a0:
    if (ctx->pc == 0x1BF0A0u) {
        ctx->pc = 0x1BF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF09Cu;
        // 0x1bf0a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0A4u;
        goto label_1bf0a4;
    }
    ctx->pc = 0x1BF09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF0A4u);
        ctx->pc = 0x1BF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF09Cu;
        // 0x1bf0a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF09Cu, 0x1BF0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF0A4u;
label_1bf0a4:
    // 0x1bf0a4: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf0a8:
    // 0x1bf0a8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1bf0ac:
    // 0x1bf0ac: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x1bf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_1bf0b0:
    // 0x1bf0b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bf0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1bf0b4:
    // 0x1bf0b4: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x1bf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
label_1bf0b8:
    // 0x1bf0b8: 0x8e510608  lw          $s1, 0x608($s2)
    ctx->pc = 0x1bf0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf0bc:
    // 0x1bf0bc: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1bf0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1bf0c0:
    // 0x1bf0c0: 0x8e300214  lw          $s0, 0x214($s1)
    ctx->pc = 0x1bf0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1bf0c4:
    // 0x1bf0c4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bf0c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bf0c8:
    // 0x1bf0c8: 0x86050070  lh          $a1, 0x70($s0)
    ctx->pc = 0x1bf0c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_1bf0cc:
    // 0x1bf0cc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bf0d0:
    // 0x1bf0d0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1bf0d4:
    // 0x1bf0d4: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1bf0d8:
    // 0x1bf0d8: 0x40f809  jalr        $v0
label_1bf0dc:
    if (ctx->pc == 0x1BF0DCu) {
        ctx->pc = 0x1BF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0D8u;
        // 0x1bf0dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0E0u;
        goto label_1bf0e0;
    }
    ctx->pc = 0x1BF0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF0E0u);
        ctx->pc = 0x1BF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0D8u;
        // 0x1bf0dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF0D8u, 0x1BF0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF0E0u;
label_1bf0e0:
    // 0x1bf0e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bf0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bf0e4:
    // 0x1bf0e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bf0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0e8:
    // 0x1bf0e8: 0x60f809  jalr        $v1
label_1bf0ec:
    if (ctx->pc == 0x1BF0ECu) {
        ctx->pc = 0x1BF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0E8u;
        // 0x1bf0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0F0u;
        goto label_1bf0f0;
    }
    ctx->pc = 0x1BF0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BF0F0u);
        ctx->pc = 0x1BF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0E8u;
        // 0x1bf0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF0E8u, 0x1BF0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF0F0u;
label_1bf0f0:
    // 0x1bf0f0: 0x8e420604  lw          $v0, 0x604($s2)
    ctx->pc = 0x1bf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1bf0f4:
    // 0x1bf0f4: 0x28420940  slti        $v0, $v0, 0x940
    ctx->pc = 0x1bf0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1bf0f8:
    // 0x1bf0f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1bf0fc:
    if (ctx->pc == 0x1BF0FCu) {
        ctx->pc = 0x1BF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0F8u;
        // 0x1bf0fc: 0x8e420608  lw          $v0, 0x608($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF100u;
        goto label_1bf100;
    }
    ctx->pc = 0x1BF0F8u;
    {
        const bool branch_taken_0x1bf0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf0f8) {
            ctx->pc = 0x1BF0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF0F8u;
            // 0x1bf0fc: 0x8e420608  lw          $v0, 0x608($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF12Cu;
            goto label_1bf12c;
        }
    }
    ctx->pc = 0x1BF100u;
label_1bf100:
    // 0x1bf100: 0x8e430608  lw          $v1, 0x608($s2)
    ctx->pc = 0x1bf100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf104:
    // 0x1bf104: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_1bf108:
    // 0x1bf108: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bf108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1bf10c:
    // 0x1bf10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf110:
    // 0x1bf110: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_1bf114:
    // 0x1bf114: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bf114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1bf118:
    // 0x1bf118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf11c:
    // 0x1bf11c: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1bf11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1bf120:
    // 0x1bf120: 0x8e420608  lw          $v0, 0x608($s2)
    ctx->pc = 0x1bf120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf124:
    // 0x1bf124: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bf128:
    if (ctx->pc == 0x1BF128u) {
        ctx->pc = 0x1BF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF124u;
        // 0x1bf128: 0xe4410104  swc1        $f1, 0x104($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF12Cu;
        goto label_1bf12c;
    }
    ctx->pc = 0x1BF124u;
    {
        const bool branch_taken_0x1bf124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF124u;
        // 0x1bf128: 0xe4410104  swc1        $f1, 0x104($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf124) {
            ctx->pc = 0x1BF140u;
            goto label_1bf140;
        }
    }
    ctx->pc = 0x1BF12Cu;
label_1bf12c:
    // 0x1bf12c: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x1bf12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
label_1bf130:
    // 0x1bf130: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bf130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_1bf134:
    // 0x1bf134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf138:
    // 0x1bf138: 0x0  nop
    ctx->pc = 0x1bf138u;
    // NOP
label_1bf13c:
    // 0x1bf13c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1bf13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1bf140:
    // 0x1bf140: 0x924202f5  lbu         $v0, 0x2F5($s2)
    ctx->pc = 0x1bf140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_1bf144:
    // 0x1bf144: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1bf148:
    // 0x1bf148: 0xae43060c  sw          $v1, 0x60C($s2)
    ctx->pc = 0x1bf148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 3));
label_1bf14c:
    // 0x1bf14c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bf150:
    // 0x1bf150: 0x10000058  b           . + 4 + (0x58 << 2)
label_1bf154:
    if (ctx->pc == 0x1BF154u) {
        ctx->pc = 0x1BF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF150u;
        // 0x1bf154: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF158u;
        goto label_1bf158;
    }
    ctx->pc = 0x1BF150u;
    {
        const bool branch_taken_0x1bf150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF150u;
        // 0x1bf154: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf150) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF158u;
label_1bf158:
    // 0x1bf158: 0x8e42060c  lw          $v0, 0x60C($s2)
    ctx->pc = 0x1bf158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1548)));
label_1bf15c:
    // 0x1bf15c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bf160:
    if (ctx->pc == 0x1BF160u) {
        ctx->pc = 0x1BF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF15Cu;
        // 0x1bf160: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF164u;
        goto label_1bf164;
    }
    ctx->pc = 0x1BF15Cu;
    {
        const bool branch_taken_0x1bf15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF15Cu;
        // 0x1bf160: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf15c) {
            ctx->pc = 0x1BF170u;
            goto label_1bf170;
        }
    }
    ctx->pc = 0x1BF164u;
label_1bf164:
    // 0x1bf164: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bf164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf168:
    // 0x1bf168: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf16c:
    if (ctx->pc == 0x1BF16Cu) {
        ctx->pc = 0x1BF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF168u;
        // 0x1bf16c: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF170u;
        goto label_1bf170;
    }
    ctx->pc = 0x1BF168u;
    {
        const bool branch_taken_0x1bf168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF168u;
        // 0x1bf16c: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf168) {
            ctx->pc = 0x1BF174u;
            goto label_1bf174;
        }
    }
    ctx->pc = 0x1BF170u;
label_1bf170:
    // 0x1bf170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf174:
    // 0x1bf174: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1bf174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bf178:
    // 0x1bf178: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_1bf17c:
    if (ctx->pc == 0x1BF17Cu) {
        ctx->pc = 0x1BF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF178u;
        // 0x1bf17c: 0x8e420608  lw          $v0, 0x608($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF180u;
        goto label_1bf180;
    }
    ctx->pc = 0x1BF178u;
    {
        const bool branch_taken_0x1bf178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf178) {
            ctx->pc = 0x1BF17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF178u;
            // 0x1bf17c: 0x8e420608  lw          $v0, 0x608($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF208u;
            goto label_1bf208;
        }
    }
    ctx->pc = 0x1BF180u;
label_1bf180:
    // 0x1bf180: 0x8e500604  lw          $s0, 0x604($s2)
    ctx->pc = 0x1bf180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1bf184:
    // 0x1bf184: 0x2a020940  slti        $v0, $s0, 0x940
    ctx->pc = 0x1bf184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1bf188:
    // 0x1bf188: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1bf18c:
    if (ctx->pc == 0x1BF18Cu) {
        ctx->pc = 0x1BF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF188u;
        // 0x1bf18c: 0x2610f600  addiu       $s0, $s0, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF190u;
        goto label_1bf190;
    }
    ctx->pc = 0x1BF188u;
    {
        const bool branch_taken_0x1bf188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf188) {
            ctx->pc = 0x1BF18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF188u;
            // 0x1bf18c: 0x2610f600  addiu       $s0, $s0, -0xA00 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF1C4u;
            goto label_1bf1c4;
        }
    }
    ctx->pc = 0x1BF190u;
label_1bf190:
    // 0x1bf190: 0x2610f700  addiu       $s0, $s0, -0x900
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964992));
label_1bf194:
    // 0x1bf194: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1bf198:
    // 0x1bf198: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1bf198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_1bf19c:
    // 0x1bf19c: 0xc07ee2e  jal         func_1FB8B8
label_1bf1a0:
    if (ctx->pc == 0x1BF1A0u) {
        ctx->pc = 0x1BF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF19Cu;
        // 0x1bf1a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1A4u;
        goto label_1bf1a4;
    }
    ctx->pc = 0x1BF19Cu;
    SET_GPR_U32(ctx, 31, 0x1BF1A4u);
    ctx->pc = 0x1BF1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF19Cu;
    // 0x1bf1a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1BF19Cu, 0x1BF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1A4u;
label_1bf1a4:
    // 0x1bf1a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1bf1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1bf1a8:
    // 0x1bf1a8: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1bf1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1bf1ac:
    // 0x1bf1ac: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1bf1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_1bf1b0:
    // 0x1bf1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf1b4:
    // 0x1bf1b4: 0xc051a5e  jal         func_146978
label_1bf1b8:
    if (ctx->pc == 0x1BF1B8u) {
        ctx->pc = 0x1BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B4u;
        // 0x1bf1b8: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1BCu;
        goto label_1bf1bc;
    }
    ctx->pc = 0x1BF1B4u;
    SET_GPR_U32(ctx, 31, 0x1BF1BCu);
    ctx->pc = 0x1BF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1B4u;
    // 0x1bf1b8: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146978u, 0x1BF1B4u, 0x1BF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1BCu;
label_1bf1bc:
    // 0x1bf1bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bf1c0:
    if (ctx->pc == 0x1BF1C0u) {
        ctx->pc = 0x1BF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1BCu;
        // 0x1bf1c0: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1C4u;
        goto label_1bf1c4;
    }
    ctx->pc = 0x1BF1BCu;
    {
        const bool branch_taken_0x1bf1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1BCu;
        // 0x1bf1c0: 0x924202f5  lbu         $v0, 0x2F5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1bc) {
            ctx->pc = 0x1BF1F4u;
            goto label_1bf1f4;
        }
    }
    ctx->pc = 0x1BF1C4u;
label_1bf1c4:
    // 0x1bf1c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bf1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1bf1c8:
    // 0x1bf1c8: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x1bf1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
label_1bf1cc:
    // 0x1bf1cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf1d0:
    // 0x1bf1d0: 0xc0b26de  jal         func_2C9B78
label_1bf1d4:
    if (ctx->pc == 0x1BF1D4u) {
        ctx->pc = 0x1BF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1D0u;
        // 0x1bf1d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1D8u;
        goto label_1bf1d8;
    }
    ctx->pc = 0x1BF1D0u;
    SET_GPR_U32(ctx, 31, 0x1BF1D8u);
    ctx->pc = 0x1BF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1D0u;
    // 0x1bf1d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B78u, 0x1BF1D0u, 0x1BF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1D8u;
label_1bf1d8:
    // 0x1bf1d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1bf1dc:
    // 0x1bf1dc: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1bf1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1bf1e0:
    // 0x1bf1e0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1bf1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_1bf1e4:
    // 0x1bf1e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf1e8:
    // 0x1bf1e8: 0xc051a5e  jal         func_146978
label_1bf1ec:
    if (ctx->pc == 0x1BF1ECu) {
        ctx->pc = 0x1BF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1E8u;
        // 0x1bf1ec: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1F0u;
        goto label_1bf1f0;
    }
    ctx->pc = 0x1BF1E8u;
    SET_GPR_U32(ctx, 31, 0x1BF1F0u);
    ctx->pc = 0x1BF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1E8u;
    // 0x1bf1ec: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146978u, 0x1BF1E8u, 0x1BF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1F0u;
label_1bf1f0:
    // 0x1bf1f0: 0x924202f5  lbu         $v0, 0x2F5($s2)
    ctx->pc = 0x1bf1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_1bf1f4:
    // 0x1bf1f4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1bf1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1bf1f8:
    // 0x1bf1f8: 0xae43060c  sw          $v1, 0x60C($s2)
    ctx->pc = 0x1bf1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 3));
label_1bf1fc:
    // 0x1bf1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bf200:
    // 0x1bf200: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x1bf200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_1bf204:
    // 0x1bf204: 0x8e420608  lw          $v0, 0x608($s2)
    ctx->pc = 0x1bf204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf208:
    // 0x1bf208: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1bf20c:
    if (ctx->pc == 0x1BF20Cu) {
        ctx->pc = 0x1BF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF208u;
        // 0x1bf20c: 0x8e42060c  lw          $v0, 0x60C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF210u;
        goto label_1bf210;
    }
    ctx->pc = 0x1BF208u;
    {
        const bool branch_taken_0x1bf208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf208) {
            ctx->pc = 0x1BF20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF208u;
            // 0x1bf20c: 0x8e42060c  lw          $v0, 0x60C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF230u;
            goto label_1bf230;
        }
    }
    ctx->pc = 0x1BF210u;
label_1bf210:
    // 0x1bf210: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1bf214:
    // 0x1bf214: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_1bf218:
    // 0x1bf218: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bf218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1bf21c:
    // 0x1bf21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf220:
    // 0x1bf220: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1bf220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf224:
    // 0x1bf224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bf224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bf228:
    // 0x1bf228: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1bf228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1bf22c:
    // 0x1bf22c: 0x8e42060c  lw          $v0, 0x60C($s2)
    ctx->pc = 0x1bf22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1548)));
label_1bf230:
    // 0x1bf230: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bf234:
    if (ctx->pc == 0x1BF234u) {
        ctx->pc = 0x1BF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF230u;
        // 0x1bf234: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF238u;
        goto label_1bf238;
    }
    ctx->pc = 0x1BF230u;
    {
        const bool branch_taken_0x1bf230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF230u;
        // 0x1bf234: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf230) {
            ctx->pc = 0x1BF244u;
            goto label_1bf244;
        }
    }
    ctx->pc = 0x1BF238u;
label_1bf238:
    // 0x1bf238: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bf238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf23c:
    // 0x1bf23c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf240:
    if (ctx->pc == 0x1BF240u) {
        ctx->pc = 0x1BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF23Cu;
        // 0x1bf240: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF244u;
        goto label_1bf244;
    }
    ctx->pc = 0x1BF23Cu;
    {
        const bool branch_taken_0x1bf23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF23Cu;
        // 0x1bf240: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf23c) {
            ctx->pc = 0x1BF248u;
            goto label_1bf248;
        }
    }
    ctx->pc = 0x1BF244u;
label_1bf244:
    // 0x1bf244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf248:
    // 0x1bf248: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1bf248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bf24c:
    // 0x1bf24c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1bf250:
    if (ctx->pc == 0x1BF250u) {
        ctx->pc = 0x1BF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF24Cu;
        // 0x1bf250: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF254u;
        goto label_1bf254;
    }
    ctx->pc = 0x1BF24Cu;
    {
        const bool branch_taken_0x1bf24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF24Cu;
        // 0x1bf250: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf24c) {
            ctx->pc = 0x1BF2B8u;
            goto label_1bf2b8;
        }
    }
    ctx->pc = 0x1BF254u;
label_1bf254:
    // 0x1bf254: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x1bf254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1bf258:
    // 0x1bf258: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1bf25c:
    if (ctx->pc == 0x1BF25Cu) {
        ctx->pc = 0x1BF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF258u;
        // 0x1bf25c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF260u;
        goto label_1bf260;
    }
    ctx->pc = 0x1BF258u;
    {
        const bool branch_taken_0x1bf258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF258u;
        // 0x1bf25c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf258) {
            ctx->pc = 0x1BF27Cu;
            goto label_1bf27c;
        }
    }
    ctx->pc = 0x1BF260u;
label_1bf260:
    // 0x1bf260: 0xc0c49c2  jal         func_312708
label_1bf264:
    if (ctx->pc == 0x1BF264u) {
        ctx->pc = 0x1BF268u;
        goto label_1bf268;
    }
    ctx->pc = 0x1BF260u;
    SET_GPR_U32(ctx, 31, 0x1BF268u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x1BF260u, 0x1BF268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF268u;
label_1bf268:
    // 0x1bf268: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1bf268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1bf26c:
    // 0x1bf26c: 0x240530f0  addiu       $a1, $zero, 0x30F0
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12528));
label_1bf270:
    // 0x1bf270: 0xc0abb10  jal         func_2AEC40
label_1bf274:
    if (ctx->pc == 0x1BF274u) {
        ctx->pc = 0x1BF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF270u;
        // 0x1bf274: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF278u;
        goto label_1bf278;
    }
    ctx->pc = 0x1BF270u;
    SET_GPR_U32(ctx, 31, 0x1BF278u);
    ctx->pc = 0x1BF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF270u;
    // 0x1bf274: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC40u, 0x1BF270u, 0x1BF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF278u;
label_1bf278:
    // 0x1bf278: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bf27c:
    // 0x1bf27c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bf280:
    if (ctx->pc == 0x1BF280u) {
        ctx->pc = 0x1BF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF27Cu;
        // 0x1bf280: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF284u;
        goto label_1bf284;
    }
    ctx->pc = 0x1BF27Cu;
    {
        const bool branch_taken_0x1bf27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF27Cu;
        // 0x1bf280: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf27c) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF284u;
label_1bf284:
    // 0x1bf284: 0x8e42060c  lw          $v0, 0x60C($s2)
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1548)));
label_1bf288:
    // 0x1bf288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bf28c:
    if (ctx->pc == 0x1BF28Cu) {
        ctx->pc = 0x1BF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF288u;
        // 0x1bf28c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF290u;
        goto label_1bf290;
    }
    ctx->pc = 0x1BF288u;
    {
        const bool branch_taken_0x1bf288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF288u;
        // 0x1bf28c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf288) {
            ctx->pc = 0x1BF29Cu;
            goto label_1bf29c;
        }
    }
    ctx->pc = 0x1BF290u;
label_1bf290:
    // 0x1bf290: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bf290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf294:
    // 0x1bf294: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf298:
    if (ctx->pc == 0x1BF298u) {
        ctx->pc = 0x1BF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF294u;
        // 0x1bf298: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF29Cu;
        goto label_1bf29c;
    }
    ctx->pc = 0x1BF294u;
    {
        const bool branch_taken_0x1bf294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF294u;
        // 0x1bf298: 0xae42060c  sw          $v0, 0x60C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf294) {
            ctx->pc = 0x1BF2A0u;
            goto label_1bf2a0;
        }
    }
    ctx->pc = 0x1BF29Cu;
label_1bf29c:
    // 0x1bf29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf2a0:
    // 0x1bf2a0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1bf2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bf2a4:
    // 0x1bf2a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bf2a8:
    if (ctx->pc == 0x1BF2A8u) {
        ctx->pc = 0x1BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A4u;
        // 0x1bf2a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2ACu;
        goto label_1bf2ac;
    }
    ctx->pc = 0x1BF2A4u;
    {
        const bool branch_taken_0x1bf2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A4u;
        // 0x1bf2a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2a4) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF2ACu;
label_1bf2ac:
    // 0x1bf2ac: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1bf2acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bf2b0:
    // 0x1bf2b0: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1bf2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_1bf2b4:
    // 0x1bf2b4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1bf2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bf2b8:
    // 0x1bf2b8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1bf2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bf2bc:
    // 0x1bf2bc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1bf2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bf2c0:
    // 0x1bf2c0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1bf2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bf2c4:
    // 0x1bf2c4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1bf2c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bf2c8:
    // 0x1bf2c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bf2c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bf2cc:
    // 0x1bf2cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bf2ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bf2d0:
    // 0x1bf2d0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1bf2d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf2d4:
    // 0x1bf2d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bf2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bf2d8:
    // 0x1bf2d8: 0x3e00008  jr          $ra
label_1bf2dc:
    if (ctx->pc == 0x1BF2DCu) {
        ctx->pc = 0x1BF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D8u;
        // 0x1bf2dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2E0u;
        goto label_1bf2e0;
    }
    ctx->pc = 0x1BF2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D8u;
        // 0x1bf2dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF2E0u;
label_1bf2e0:
    // 0x1bf2e0: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x1bf2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
label_1bf2e4:
    // 0x1bf2e4: 0x0  nop
    ctx->pc = 0x1bf2e4u;
    // NOP
    ctx->pc = 0x1bf2e8u;
}
