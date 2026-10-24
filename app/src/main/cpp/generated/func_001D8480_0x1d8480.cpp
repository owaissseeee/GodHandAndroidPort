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

// Function: func_001D8480
// Address: 0x1d8480 - 0x1d8b98
void func_001D8480_0x1d8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D8480_0x1d8480");
#endif

    switch (ctx->pc) {
        case 0x1d8480u: goto label_1d8480;
        case 0x1d8484u: goto label_1d8484;
        case 0x1d8488u: goto label_1d8488;
        case 0x1d848cu: goto label_1d848c;
        case 0x1d8490u: goto label_1d8490;
        case 0x1d8494u: goto label_1d8494;
        case 0x1d8498u: goto label_1d8498;
        case 0x1d849cu: goto label_1d849c;
        case 0x1d84a0u: goto label_1d84a0;
        case 0x1d84a4u: goto label_1d84a4;
        case 0x1d84a8u: goto label_1d84a8;
        case 0x1d84acu: goto label_1d84ac;
        case 0x1d84b0u: goto label_1d84b0;
        case 0x1d84b4u: goto label_1d84b4;
        case 0x1d84b8u: goto label_1d84b8;
        case 0x1d84bcu: goto label_1d84bc;
        case 0x1d84c0u: goto label_1d84c0;
        case 0x1d84c4u: goto label_1d84c4;
        case 0x1d84c8u: goto label_1d84c8;
        case 0x1d84ccu: goto label_1d84cc;
        case 0x1d84d0u: goto label_1d84d0;
        case 0x1d84d4u: goto label_1d84d4;
        case 0x1d84d8u: goto label_1d84d8;
        case 0x1d84dcu: goto label_1d84dc;
        case 0x1d84e0u: goto label_1d84e0;
        case 0x1d84e4u: goto label_1d84e4;
        case 0x1d84e8u: goto label_1d84e8;
        case 0x1d84ecu: goto label_1d84ec;
        case 0x1d84f0u: goto label_1d84f0;
        case 0x1d84f4u: goto label_1d84f4;
        case 0x1d84f8u: goto label_1d84f8;
        case 0x1d84fcu: goto label_1d84fc;
        case 0x1d8500u: goto label_1d8500;
        case 0x1d8504u: goto label_1d8504;
        case 0x1d8508u: goto label_1d8508;
        case 0x1d850cu: goto label_1d850c;
        case 0x1d8510u: goto label_1d8510;
        case 0x1d8514u: goto label_1d8514;
        case 0x1d8518u: goto label_1d8518;
        case 0x1d851cu: goto label_1d851c;
        case 0x1d8520u: goto label_1d8520;
        case 0x1d8524u: goto label_1d8524;
        case 0x1d8528u: goto label_1d8528;
        case 0x1d852cu: goto label_1d852c;
        case 0x1d8530u: goto label_1d8530;
        case 0x1d8534u: goto label_1d8534;
        case 0x1d8538u: goto label_1d8538;
        case 0x1d853cu: goto label_1d853c;
        case 0x1d8540u: goto label_1d8540;
        case 0x1d8544u: goto label_1d8544;
        case 0x1d8548u: goto label_1d8548;
        case 0x1d854cu: goto label_1d854c;
        case 0x1d8550u: goto label_1d8550;
        case 0x1d8554u: goto label_1d8554;
        case 0x1d8558u: goto label_1d8558;
        case 0x1d855cu: goto label_1d855c;
        case 0x1d8560u: goto label_1d8560;
        case 0x1d8564u: goto label_1d8564;
        case 0x1d8568u: goto label_1d8568;
        case 0x1d856cu: goto label_1d856c;
        case 0x1d8570u: goto label_1d8570;
        case 0x1d8574u: goto label_1d8574;
        case 0x1d8578u: goto label_1d8578;
        case 0x1d857cu: goto label_1d857c;
        case 0x1d8580u: goto label_1d8580;
        case 0x1d8584u: goto label_1d8584;
        case 0x1d8588u: goto label_1d8588;
        case 0x1d858cu: goto label_1d858c;
        case 0x1d8590u: goto label_1d8590;
        case 0x1d8594u: goto label_1d8594;
        case 0x1d8598u: goto label_1d8598;
        case 0x1d859cu: goto label_1d859c;
        case 0x1d85a0u: goto label_1d85a0;
        case 0x1d85a4u: goto label_1d85a4;
        case 0x1d85a8u: goto label_1d85a8;
        case 0x1d85acu: goto label_1d85ac;
        case 0x1d85b0u: goto label_1d85b0;
        case 0x1d85b4u: goto label_1d85b4;
        case 0x1d85b8u: goto label_1d85b8;
        case 0x1d85bcu: goto label_1d85bc;
        case 0x1d85c0u: goto label_1d85c0;
        case 0x1d85c4u: goto label_1d85c4;
        case 0x1d85c8u: goto label_1d85c8;
        case 0x1d85ccu: goto label_1d85cc;
        case 0x1d85d0u: goto label_1d85d0;
        case 0x1d85d4u: goto label_1d85d4;
        case 0x1d85d8u: goto label_1d85d8;
        case 0x1d85dcu: goto label_1d85dc;
        case 0x1d85e0u: goto label_1d85e0;
        case 0x1d85e4u: goto label_1d85e4;
        case 0x1d85e8u: goto label_1d85e8;
        case 0x1d85ecu: goto label_1d85ec;
        case 0x1d85f0u: goto label_1d85f0;
        case 0x1d85f4u: goto label_1d85f4;
        case 0x1d85f8u: goto label_1d85f8;
        case 0x1d85fcu: goto label_1d85fc;
        case 0x1d8600u: goto label_1d8600;
        case 0x1d8604u: goto label_1d8604;
        case 0x1d8608u: goto label_1d8608;
        case 0x1d860cu: goto label_1d860c;
        case 0x1d8610u: goto label_1d8610;
        case 0x1d8614u: goto label_1d8614;
        case 0x1d8618u: goto label_1d8618;
        case 0x1d861cu: goto label_1d861c;
        case 0x1d8620u: goto label_1d8620;
        case 0x1d8624u: goto label_1d8624;
        case 0x1d8628u: goto label_1d8628;
        case 0x1d862cu: goto label_1d862c;
        case 0x1d8630u: goto label_1d8630;
        case 0x1d8634u: goto label_1d8634;
        case 0x1d8638u: goto label_1d8638;
        case 0x1d863cu: goto label_1d863c;
        case 0x1d8640u: goto label_1d8640;
        case 0x1d8644u: goto label_1d8644;
        case 0x1d8648u: goto label_1d8648;
        case 0x1d864cu: goto label_1d864c;
        case 0x1d8650u: goto label_1d8650;
        case 0x1d8654u: goto label_1d8654;
        case 0x1d8658u: goto label_1d8658;
        case 0x1d865cu: goto label_1d865c;
        case 0x1d8660u: goto label_1d8660;
        case 0x1d8664u: goto label_1d8664;
        case 0x1d8668u: goto label_1d8668;
        case 0x1d866cu: goto label_1d866c;
        case 0x1d8670u: goto label_1d8670;
        case 0x1d8674u: goto label_1d8674;
        case 0x1d8678u: goto label_1d8678;
        case 0x1d867cu: goto label_1d867c;
        case 0x1d8680u: goto label_1d8680;
        case 0x1d8684u: goto label_1d8684;
        case 0x1d8688u: goto label_1d8688;
        case 0x1d868cu: goto label_1d868c;
        case 0x1d8690u: goto label_1d8690;
        case 0x1d8694u: goto label_1d8694;
        case 0x1d8698u: goto label_1d8698;
        case 0x1d869cu: goto label_1d869c;
        case 0x1d86a0u: goto label_1d86a0;
        case 0x1d86a4u: goto label_1d86a4;
        case 0x1d86a8u: goto label_1d86a8;
        case 0x1d86acu: goto label_1d86ac;
        case 0x1d86b0u: goto label_1d86b0;
        case 0x1d86b4u: goto label_1d86b4;
        case 0x1d86b8u: goto label_1d86b8;
        case 0x1d86bcu: goto label_1d86bc;
        case 0x1d86c0u: goto label_1d86c0;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86c8u: goto label_1d86c8;
        case 0x1d86ccu: goto label_1d86cc;
        case 0x1d86d0u: goto label_1d86d0;
        case 0x1d86d4u: goto label_1d86d4;
        case 0x1d86d8u: goto label_1d86d8;
        case 0x1d86dcu: goto label_1d86dc;
        case 0x1d86e0u: goto label_1d86e0;
        case 0x1d86e4u: goto label_1d86e4;
        case 0x1d86e8u: goto label_1d86e8;
        case 0x1d86ecu: goto label_1d86ec;
        case 0x1d86f0u: goto label_1d86f0;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d86f8u: goto label_1d86f8;
        case 0x1d86fcu: goto label_1d86fc;
        case 0x1d8700u: goto label_1d8700;
        case 0x1d8704u: goto label_1d8704;
        case 0x1d8708u: goto label_1d8708;
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8710u: goto label_1d8710;
        case 0x1d8714u: goto label_1d8714;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d871cu: goto label_1d871c;
        case 0x1d8720u: goto label_1d8720;
        case 0x1d8724u: goto label_1d8724;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d872cu: goto label_1d872c;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8734u: goto label_1d8734;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d873cu: goto label_1d873c;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8744u: goto label_1d8744;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d874cu: goto label_1d874c;
        case 0x1d8750u: goto label_1d8750;
        case 0x1d8754u: goto label_1d8754;
        case 0x1d8758u: goto label_1d8758;
        case 0x1d875cu: goto label_1d875c;
        case 0x1d8760u: goto label_1d8760;
        case 0x1d8764u: goto label_1d8764;
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        case 0x1d878cu: goto label_1d878c;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d8794u: goto label_1d8794;
        case 0x1d8798u: goto label_1d8798;
        case 0x1d879cu: goto label_1d879c;
        case 0x1d87a0u: goto label_1d87a0;
        case 0x1d87a4u: goto label_1d87a4;
        case 0x1d87a8u: goto label_1d87a8;
        case 0x1d87acu: goto label_1d87ac;
        case 0x1d87b0u: goto label_1d87b0;
        case 0x1d87b4u: goto label_1d87b4;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87bcu: goto label_1d87bc;
        case 0x1d87c0u: goto label_1d87c0;
        case 0x1d87c4u: goto label_1d87c4;
        case 0x1d87c8u: goto label_1d87c8;
        case 0x1d87ccu: goto label_1d87cc;
        case 0x1d87d0u: goto label_1d87d0;
        case 0x1d87d4u: goto label_1d87d4;
        case 0x1d87d8u: goto label_1d87d8;
        case 0x1d87dcu: goto label_1d87dc;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d87e8u: goto label_1d87e8;
        case 0x1d87ecu: goto label_1d87ec;
        case 0x1d87f0u: goto label_1d87f0;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d87f8u: goto label_1d87f8;
        case 0x1d87fcu: goto label_1d87fc;
        case 0x1d8800u: goto label_1d8800;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8810u: goto label_1d8810;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8824u: goto label_1d8824;
        case 0x1d8828u: goto label_1d8828;
        case 0x1d882cu: goto label_1d882c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8834u: goto label_1d8834;
        case 0x1d8838u: goto label_1d8838;
        case 0x1d883cu: goto label_1d883c;
        case 0x1d8840u: goto label_1d8840;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8848u: goto label_1d8848;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8850u: goto label_1d8850;
        case 0x1d8854u: goto label_1d8854;
        case 0x1d8858u: goto label_1d8858;
        case 0x1d885cu: goto label_1d885c;
        case 0x1d8860u: goto label_1d8860;
        case 0x1d8864u: goto label_1d8864;
        case 0x1d8868u: goto label_1d8868;
        case 0x1d886cu: goto label_1d886c;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d8874u: goto label_1d8874;
        case 0x1d8878u: goto label_1d8878;
        case 0x1d887cu: goto label_1d887c;
        case 0x1d8880u: goto label_1d8880;
        case 0x1d8884u: goto label_1d8884;
        case 0x1d8888u: goto label_1d8888;
        case 0x1d888cu: goto label_1d888c;
        case 0x1d8890u: goto label_1d8890;
        case 0x1d8894u: goto label_1d8894;
        case 0x1d8898u: goto label_1d8898;
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88a0u: goto label_1d88a0;
        case 0x1d88a4u: goto label_1d88a4;
        case 0x1d88a8u: goto label_1d88a8;
        case 0x1d88acu: goto label_1d88ac;
        case 0x1d88b0u: goto label_1d88b0;
        case 0x1d88b4u: goto label_1d88b4;
        case 0x1d88b8u: goto label_1d88b8;
        case 0x1d88bcu: goto label_1d88bc;
        case 0x1d88c0u: goto label_1d88c0;
        case 0x1d88c4u: goto label_1d88c4;
        case 0x1d88c8u: goto label_1d88c8;
        case 0x1d88ccu: goto label_1d88cc;
        case 0x1d88d0u: goto label_1d88d0;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d88d8u: goto label_1d88d8;
        case 0x1d88dcu: goto label_1d88dc;
        case 0x1d88e0u: goto label_1d88e0;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d88e8u: goto label_1d88e8;
        case 0x1d88ecu: goto label_1d88ec;
        case 0x1d88f0u: goto label_1d88f0;
        case 0x1d88f4u: goto label_1d88f4;
        case 0x1d88f8u: goto label_1d88f8;
        case 0x1d88fcu: goto label_1d88fc;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8964u: goto label_1d8964;
        case 0x1d8968u: goto label_1d8968;
        case 0x1d896cu: goto label_1d896c;
        case 0x1d8970u: goto label_1d8970;
        case 0x1d8974u: goto label_1d8974;
        case 0x1d8978u: goto label_1d8978;
        case 0x1d897cu: goto label_1d897c;
        case 0x1d8980u: goto label_1d8980;
        case 0x1d8984u: goto label_1d8984;
        case 0x1d8988u: goto label_1d8988;
        case 0x1d898cu: goto label_1d898c;
        case 0x1d8990u: goto label_1d8990;
        case 0x1d8994u: goto label_1d8994;
        case 0x1d8998u: goto label_1d8998;
        case 0x1d899cu: goto label_1d899c;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89a4u: goto label_1d89a4;
        case 0x1d89a8u: goto label_1d89a8;
        case 0x1d89acu: goto label_1d89ac;
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89b4u: goto label_1d89b4;
        case 0x1d89b8u: goto label_1d89b8;
        case 0x1d89bcu: goto label_1d89bc;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89ccu: goto label_1d89cc;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89d8u: goto label_1d89d8;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e0u: goto label_1d89e0;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89ecu: goto label_1d89ec;
        case 0x1d89f0u: goto label_1d89f0;
        case 0x1d89f4u: goto label_1d89f4;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a00u: goto label_1d8a00;
        case 0x1d8a04u: goto label_1d8a04;
        case 0x1d8a08u: goto label_1d8a08;
        case 0x1d8a0cu: goto label_1d8a0c;
        case 0x1d8a10u: goto label_1d8a10;
        case 0x1d8a14u: goto label_1d8a14;
        case 0x1d8a18u: goto label_1d8a18;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a20u: goto label_1d8a20;
        case 0x1d8a24u: goto label_1d8a24;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a2cu: goto label_1d8a2c;
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a34u: goto label_1d8a34;
        case 0x1d8a38u: goto label_1d8a38;
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a40u: goto label_1d8a40;
        case 0x1d8a44u: goto label_1d8a44;
        case 0x1d8a48u: goto label_1d8a48;
        case 0x1d8a4cu: goto label_1d8a4c;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a54u: goto label_1d8a54;
        case 0x1d8a58u: goto label_1d8a58;
        case 0x1d8a5cu: goto label_1d8a5c;
        case 0x1d8a60u: goto label_1d8a60;
        case 0x1d8a64u: goto label_1d8a64;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a6cu: goto label_1d8a6c;
        case 0x1d8a70u: goto label_1d8a70;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a78u: goto label_1d8a78;
        case 0x1d8a7cu: goto label_1d8a7c;
        case 0x1d8a80u: goto label_1d8a80;
        case 0x1d8a84u: goto label_1d8a84;
        case 0x1d8a88u: goto label_1d8a88;
        case 0x1d8a8cu: goto label_1d8a8c;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8a94u: goto label_1d8a94;
        case 0x1d8a98u: goto label_1d8a98;
        case 0x1d8a9cu: goto label_1d8a9c;
        case 0x1d8aa0u: goto label_1d8aa0;
        case 0x1d8aa4u: goto label_1d8aa4;
        case 0x1d8aa8u: goto label_1d8aa8;
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ab0u: goto label_1d8ab0;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ab8u: goto label_1d8ab8;
        case 0x1d8abcu: goto label_1d8abc;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ac4u: goto label_1d8ac4;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8accu: goto label_1d8acc;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8ad4u: goto label_1d8ad4;
        case 0x1d8ad8u: goto label_1d8ad8;
        case 0x1d8adcu: goto label_1d8adc;
        case 0x1d8ae0u: goto label_1d8ae0;
        case 0x1d8ae4u: goto label_1d8ae4;
        case 0x1d8ae8u: goto label_1d8ae8;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8af0u: goto label_1d8af0;
        case 0x1d8af4u: goto label_1d8af4;
        case 0x1d8af8u: goto label_1d8af8;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b00u: goto label_1d8b00;
        case 0x1d8b04u: goto label_1d8b04;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b0cu: goto label_1d8b0c;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b14u: goto label_1d8b14;
        case 0x1d8b18u: goto label_1d8b18;
        case 0x1d8b1cu: goto label_1d8b1c;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b24u: goto label_1d8b24;
        case 0x1d8b28u: goto label_1d8b28;
        case 0x1d8b2cu: goto label_1d8b2c;
        case 0x1d8b30u: goto label_1d8b30;
        case 0x1d8b34u: goto label_1d8b34;
        case 0x1d8b38u: goto label_1d8b38;
        case 0x1d8b3cu: goto label_1d8b3c;
        case 0x1d8b40u: goto label_1d8b40;
        case 0x1d8b44u: goto label_1d8b44;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b4cu: goto label_1d8b4c;
        case 0x1d8b50u: goto label_1d8b50;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b58u: goto label_1d8b58;
        case 0x1d8b5cu: goto label_1d8b5c;
        case 0x1d8b60u: goto label_1d8b60;
        case 0x1d8b64u: goto label_1d8b64;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b6cu: goto label_1d8b6c;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b74u: goto label_1d8b74;
        case 0x1d8b78u: goto label_1d8b78;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8b80u: goto label_1d8b80;
        case 0x1d8b84u: goto label_1d8b84;
        case 0x1d8b88u: goto label_1d8b88;
        case 0x1d8b8cu: goto label_1d8b8c;
        case 0x1d8b90u: goto label_1d8b90;
        case 0x1d8b94u: goto label_1d8b94;
        default: break;
    }

    ctx->pc = 0x1d8480u;

label_1d8480:
    // 0x1d8480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d8480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d8484:
    // 0x1d8484: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d8484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d8488:
    // 0x1d8488: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d8488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d848c:
    // 0x1d848c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d848cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8490:
    // 0x1d8490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d8494:
    // 0x1d8494: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d8494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d8498:
    // 0x1d8498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d849c:
    // 0x1d849c: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d849cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d84a0:
    // 0x1d84a0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d84a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1d84a4:
    // 0x1d84a4: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
label_1d84a8:
    if (ctx->pc == 0x1D84A8u) {
        ctx->pc = 0x1D84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84A4u;
        // 0x1d84a8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84ACu;
        goto label_1d84ac;
    }
    ctx->pc = 0x1D84A4u;
    {
        const bool branch_taken_0x1d84a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84A4u;
        // 0x1d84a8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84a4) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D84ACu;
label_1d84ac:
    // 0x1d84ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d84acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d84b0:
    // 0x1d84b0: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x1d84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
label_1d84b4:
    // 0x1d84b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d84b8:
    // 0x1d84b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d84bc:
    // 0x1d84bc: 0x800008  jr          $a0
label_1d84c0:
    if (ctx->pc == 0x1D84C0u) {
        ctx->pc = 0x1D84C4u;
        goto label_1d84c4;
    }
    ctx->pc = 0x1D84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D84C4u: goto label_1d84c4;
            case 0x1D864Cu: goto label_1d864c;
            case 0x1D86A4u: goto label_1d86a4;
            case 0x1D8780u: goto label_1d8780;
            case 0x1D8848u: goto label_1d8848;
            case 0x1D8910u: goto label_1d8910;
            case 0x1D89F4u: goto label_1d89f4;
            case 0x1D8A80u: goto label_1d8a80;
            case 0x1D8AD8u: goto label_1d8ad8;
            case 0x1D8B60u: goto label_1d8b60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D84BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D84C4u;
label_1d84c4:
    // 0x1d84c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d84c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d84c8:
    // 0x1d84c8: 0xc076fac  jal         func_1DBEB0
label_1d84cc:
    if (ctx->pc == 0x1D84CCu) {
        ctx->pc = 0x1D84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84C8u;
        // 0x1d84cc: 0x26303004  addiu       $s0, $s1, 0x3004 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84D0u;
        goto label_1d84d0;
    }
    ctx->pc = 0x1D84C8u;
    SET_GPR_U32(ctx, 31, 0x1D84D0u);
    ctx->pc = 0x1D84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84C8u;
    // 0x1d84cc: 0x26303004  addiu       $s0, $s1, 0x3004 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBEB0u, 0x1D84C8u, 0x1D84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84D0u;
label_1d84d0:
    // 0x1d84d0: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
label_1d84d4:
    // 0x1d84d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d84d8:
    // 0x1d84d8: 0xc076f86  jal         func_1DBE18
label_1d84dc:
    if (ctx->pc == 0x1D84DCu) {
        ctx->pc = 0x1D84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84D8u;
        // 0x1d84dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84E0u;
        goto label_1d84e0;
    }
    ctx->pc = 0x1D84D8u;
    SET_GPR_U32(ctx, 31, 0x1D84E0u);
    ctx->pc = 0x1D84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84D8u;
    // 0x1d84dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1D84D8u, 0x1D84E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84E0u;
label_1d84e0:
    // 0x1d84e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d84e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d84e4:
    // 0x1d84e4: 0xc076f86  jal         func_1DBE18
label_1d84e8:
    if (ctx->pc == 0x1D84E8u) {
        ctx->pc = 0x1D84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84E4u;
        // 0x1d84e8: 0x26253008  addiu       $a1, $s1, 0x3008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84ECu;
        goto label_1d84ec;
    }
    ctx->pc = 0x1D84E4u;
    SET_GPR_U32(ctx, 31, 0x1D84ECu);
    ctx->pc = 0x1D84E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84E4u;
    // 0x1d84e8: 0x26253008  addiu       $a1, $s1, 0x3008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1D84E4u, 0x1D84ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84ECu;
label_1d84ec:
    // 0x1d84ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d84ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d84f0:
    // 0x1d84f0: 0xc076f86  jal         func_1DBE18
label_1d84f4:
    if (ctx->pc == 0x1D84F4u) {
        ctx->pc = 0x1D84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84F0u;
        // 0x1d84f4: 0x2625300c  addiu       $a1, $s1, 0x300C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84F8u;
        goto label_1d84f8;
    }
    ctx->pc = 0x1D84F0u;
    SET_GPR_U32(ctx, 31, 0x1D84F8u);
    ctx->pc = 0x1D84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84F0u;
    // 0x1d84f4: 0x2625300c  addiu       $a1, $s1, 0x300C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1D84F0u, 0x1D84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84F8u;
label_1d84f8:
    // 0x1d84f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d84f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d84fc:
    // 0x1d84fc: 0xc076f86  jal         func_1DBE18
label_1d8500:
    if (ctx->pc == 0x1D8500u) {
        ctx->pc = 0x1D8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84FCu;
        // 0x1d8500: 0x26253010  addiu       $a1, $s1, 0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8504u;
        goto label_1d8504;
    }
    ctx->pc = 0x1D84FCu;
    SET_GPR_U32(ctx, 31, 0x1D8504u);
    ctx->pc = 0x1D8500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84FCu;
    // 0x1d8500: 0x26253010  addiu       $a1, $s1, 0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1D84FCu, 0x1D8504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8504u;
label_1d8504:
    // 0x1d8504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8508:
    // 0x1d8508: 0xc076f86  jal         func_1DBE18
label_1d850c:
    if (ctx->pc == 0x1D850Cu) {
        ctx->pc = 0x1D850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8508u;
        // 0x1d850c: 0x26253014  addiu       $a1, $s1, 0x3014 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8510u;
        goto label_1d8510;
    }
    ctx->pc = 0x1D8508u;
    SET_GPR_U32(ctx, 31, 0x1D8510u);
    ctx->pc = 0x1D850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8508u;
    // 0x1d850c: 0x26253014  addiu       $a1, $s1, 0x3014 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1D8508u, 0x1D8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8510u;
label_1d8510:
    // 0x1d8510: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d8510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d8514:
    // 0x1d8514: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1d8514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_1d8518:
    // 0x1d8518: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d8518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1d851c:
    // 0x1d851c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1d8520:
    if (ctx->pc == 0x1D8520u) {
        ctx->pc = 0x1D8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D851Cu;
        // 0x1d8520: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8524u;
        goto label_1d8524;
    }
    ctx->pc = 0x1D851Cu;
    {
        const bool branch_taken_0x1d851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D851Cu;
        // 0x1d8520: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d851c) {
            ctx->pc = 0x1D8558u;
            goto label_1d8558;
        }
    }
    ctx->pc = 0x1D8524u;
label_1d8524:
    // 0x1d8524: 0x26233052  addiu       $v1, $s1, 0x3052
    ctx->pc = 0x1d8524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12370));
label_1d8528:
    // 0x1d8528: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d8528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d852c:
    // 0x1d852c: 0x0  nop
    ctx->pc = 0x1d852cu;
    // NOP
label_1d8530:
    // 0x1d8530: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8534:
    // 0x1d8534: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
label_1d8538:
    if (ctx->pc == 0x1D8538u) {
        ctx->pc = 0x1D8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8534u;
        // 0x1d8538: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D853Cu;
        goto label_1d853c;
    }
    ctx->pc = 0x1D8534u;
    {
        const bool branch_taken_0x1d8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8534u;
        // 0x1d8538: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8534) {
            ctx->pc = 0x1D8548u;
            goto label_1d8548;
        }
    }
    ctx->pc = 0x1D853Cu;
label_1d853c:
    // 0x1d853c: 0x24422e64  addiu       $v0, $v0, 0x2E64
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11876));
label_1d8540:
    // 0x1d8540: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d8540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d8544:
    // 0x1d8544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d8544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1d8548:
    // 0x1d8548: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d8548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1d854c:
    // 0x1d854c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1d8550:
    // 0x1d8550: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
label_1d8554:
    if (ctx->pc == 0x1D8554u) {
        ctx->pc = 0x1D8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8550u;
        // 0x1d8554: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8558u;
        goto label_1d8558;
    }
    ctx->pc = 0x1D8550u;
    {
        const bool branch_taken_0x1d8550 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1D8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8550u;
        // 0x1d8554: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8550) {
            ctx->pc = 0x1D8530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8530;
        }
    }
    ctx->pc = 0x1D8558u;
label_1d8558:
    // 0x1d8558: 0x8e243004  lw          $a0, 0x3004($s1)
    ctx->pc = 0x1d8558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d855c:
    // 0x1d855c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8560:
    // 0x1d8560: 0xc075bb2  jal         func_1D6EC8
label_1d8564:
    if (ctx->pc == 0x1D8564u) {
        ctx->pc = 0x1D8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8560u;
        // 0x1d8564: 0x26508160  addiu       $s0, $s2, -0x7EA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8568u;
        goto label_1d8568;
    }
    ctx->pc = 0x1D8560u;
    SET_GPR_U32(ctx, 31, 0x1D8568u);
    ctx->pc = 0x1D8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8560u;
    // 0x1d8564: 0x26508160  addiu       $s0, $s2, -0x7EA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1D8560u, 0x1D8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8568u;
label_1d8568:
    // 0x1d8568: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1d8568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d856c:
    // 0x1d856c: 0xc075bb2  jal         func_1D6EC8
label_1d8570:
    if (ctx->pc == 0x1D8570u) {
        ctx->pc = 0x1D8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D856Cu;
        // 0x1d8570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8574u;
        goto label_1d8574;
    }
    ctx->pc = 0x1D856Cu;
    SET_GPR_U32(ctx, 31, 0x1D8574u);
    ctx->pc = 0x1D8570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D856Cu;
    // 0x1d8570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1D856Cu, 0x1D8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8574u;
label_1d8574:
    // 0x1d8574: 0x8e24300c  lw          $a0, 0x300C($s1)
    ctx->pc = 0x1d8574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d8578:
    // 0x1d8578: 0xc075bb2  jal         func_1D6EC8
label_1d857c:
    if (ctx->pc == 0x1D857Cu) {
        ctx->pc = 0x1D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8578u;
        // 0x1d857c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8580u;
        goto label_1d8580;
    }
    ctx->pc = 0x1D8578u;
    SET_GPR_U32(ctx, 31, 0x1D8580u);
    ctx->pc = 0x1D857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8578u;
    // 0x1d857c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1D8578u, 0x1D8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8580u;
label_1d8580:
    // 0x1d8580: 0x8e243010  lw          $a0, 0x3010($s1)
    ctx->pc = 0x1d8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d8584:
    // 0x1d8584: 0xc075bb2  jal         func_1D6EC8
label_1d8588:
    if (ctx->pc == 0x1D8588u) {
        ctx->pc = 0x1D8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8584u;
        // 0x1d8588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D858Cu;
        goto label_1d858c;
    }
    ctx->pc = 0x1D8584u;
    SET_GPR_U32(ctx, 31, 0x1D858Cu);
    ctx->pc = 0x1D8588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8584u;
    // 0x1d8588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1D8584u, 0x1D858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D858Cu;
label_1d858c:
    // 0x1d858c: 0x8e243014  lw          $a0, 0x3014($s1)
    ctx->pc = 0x1d858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d8590:
    // 0x1d8590: 0xc075bb2  jal         func_1D6EC8
label_1d8594:
    if (ctx->pc == 0x1D8594u) {
        ctx->pc = 0x1D8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8590u;
        // 0x1d8594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8598u;
        goto label_1d8598;
    }
    ctx->pc = 0x1D8590u;
    SET_GPR_U32(ctx, 31, 0x1D8598u);
    ctx->pc = 0x1D8594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8590u;
    // 0x1d8594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1D8590u, 0x1D8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8598u;
label_1d8598:
    // 0x1d8598: 0x8e233004  lw          $v1, 0x3004($s1)
    ctx->pc = 0x1d8598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d859c:
    // 0x1d859c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d85a0:
    // 0x1d85a0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d85a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d85a4:
    // 0x1d85a4: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d85a8:
    // 0x1d85a8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d85ac:
    // 0x1d85ac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d85b0:
    // 0x1d85b0: 0x60f809  jalr        $v1
label_1d85b4:
    if (ctx->pc == 0x1D85B4u) {
        ctx->pc = 0x1D85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B0u;
        // 0x1d85b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85B8u;
        goto label_1d85b8;
    }
    ctx->pc = 0x1D85B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D85B8u);
        ctx->pc = 0x1D85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B0u;
        // 0x1d85b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85B0u, 0x1D85B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D85B8u;
label_1d85b8:
    // 0x1d85b8: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1d85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d85bc:
    // 0x1d85bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d85bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d85c0:
    // 0x1d85c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d85c4:
    // 0x1d85c4: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d85c8:
    // 0x1d85c8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d85cc:
    // 0x1d85cc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d85d0:
    // 0x1d85d0: 0x60f809  jalr        $v1
label_1d85d4:
    if (ctx->pc == 0x1D85D4u) {
        ctx->pc = 0x1D85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85D0u;
        // 0x1d85d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85D8u;
        goto label_1d85d8;
    }
    ctx->pc = 0x1D85D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D85D8u);
        ctx->pc = 0x1D85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85D0u;
        // 0x1d85d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85D0u, 0x1D85D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D85D8u;
label_1d85d8:
    // 0x1d85d8: 0x8e24300c  lw          $a0, 0x300C($s1)
    ctx->pc = 0x1d85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d85dc:
    // 0x1d85dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d85dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d85e0:
    // 0x1d85e0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d85e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d85e4:
    // 0x1d85e4: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d85e8:
    // 0x1d85e8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d85e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d85ec:
    // 0x1d85ec: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d85f0:
    // 0x1d85f0: 0x60f809  jalr        $v1
label_1d85f4:
    if (ctx->pc == 0x1D85F4u) {
        ctx->pc = 0x1D85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85F0u;
        // 0x1d85f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85F8u;
        goto label_1d85f8;
    }
    ctx->pc = 0x1D85F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D85F8u);
        ctx->pc = 0x1D85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85F0u;
        // 0x1d85f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85F0u, 0x1D85F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D85F8u;
label_1d85f8:
    // 0x1d85f8: 0x8e243010  lw          $a0, 0x3010($s1)
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d85fc:
    // 0x1d85fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d85fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8600:
    // 0x1d8600: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8604:
    // 0x1d8604: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d8608:
    // 0x1d8608: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d860c:
    // 0x1d860c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d8610:
    // 0x1d8610: 0x60f809  jalr        $v1
label_1d8614:
    if (ctx->pc == 0x1D8614u) {
        ctx->pc = 0x1D8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8610u;
        // 0x1d8614: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8618u;
        goto label_1d8618;
    }
    ctx->pc = 0x1D8610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8618u);
        ctx->pc = 0x1D8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8610u;
        // 0x1d8614: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8610u, 0x1D8618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8618u;
label_1d8618:
    // 0x1d8618: 0x8e243014  lw          $a0, 0x3014($s1)
    ctx->pc = 0x1d8618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d861c:
    // 0x1d861c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d861cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8620:
    // 0x1d8620: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d8620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8624:
    // 0x1d8624: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d8628:
    // 0x1d8628: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d862c:
    // 0x1d862c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d8630:
    // 0x1d8630: 0x60f809  jalr        $v1
label_1d8634:
    if (ctx->pc == 0x1D8634u) {
        ctx->pc = 0x1D8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8630u;
        // 0x1d8634: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8638u;
        goto label_1d8638;
    }
    ctx->pc = 0x1D8630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8638u);
        ctx->pc = 0x1D8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8630u;
        // 0x1d8634: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8630u, 0x1D8638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8638u;
label_1d8638:
    // 0x1d8638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d863c:
    // 0x1d863c: 0xc077afa  jal         func_1DEBE8
label_1d8640:
    if (ctx->pc == 0x1D8640u) {
        ctx->pc = 0x1D8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D863Cu;
        // 0x1d8640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8644u;
        goto label_1d8644;
    }
    ctx->pc = 0x1D863Cu;
    SET_GPR_U32(ctx, 31, 0x1D8644u);
    ctx->pc = 0x1D8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D863Cu;
    // 0x1d8640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBE8u, 0x1D863Cu, 0x1D8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8644u;
label_1d8644:
    // 0x1d8644: 0x10000143  b           . + 4 + (0x143 << 2)
label_1d8648:
    if (ctx->pc == 0x1D8648u) {
        ctx->pc = 0x1D8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8644u;
        // 0x1d8648: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D864Cu;
        goto label_1d864c;
    }
    ctx->pc = 0x1D8644u;
    {
        const bool branch_taken_0x1d8644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8644u;
        // 0x1d8648: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8644) {
            ctx->pc = 0x1D8B54u;
            goto label_1d8b54;
        }
    }
    ctx->pc = 0x1D864Cu;
label_1d864c:
    // 0x1d864c: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d8650:
    // 0x1d8650: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d8650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d8654:
    // 0x1d8654: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d8654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d8658:
    // 0x1d8658: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d865c:
    // 0x1d865c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d865cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8660:
    // 0x1d8660: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8664:
    // 0x1d8664: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d8664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d8668:
    // 0x1d8668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d866c:
    // 0x1d866c: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d8670:
    // 0x1d8670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8674:
    // 0x1d8674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8678:
    // 0x1d8678: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d867c:
    // 0x1d867c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d867cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d8680:
    // 0x1d8680: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8684:
    // 0x1d8684: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d8684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d8688:
    // 0x1d8688: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8688u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d868c:
    // 0x1d868c: 0xae2c302c  sw          $t4, 0x302C($s1)
    ctx->pc = 0x1d868cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 12));
label_1d8690:
    // 0x1d8690: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1d8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d8694:
    // 0x1d8694: 0xc0b2e92  jal         func_2CBA48
label_1d8698:
    if (ctx->pc == 0x1D8698u) {
        ctx->pc = 0x1D8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8694u;
        // 0x1d8698: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D869Cu;
        goto label_1d869c;
    }
    ctx->pc = 0x1D8694u;
    SET_GPR_U32(ctx, 31, 0x1D869Cu);
    ctx->pc = 0x1D8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8694u;
    // 0x1d8698: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D8694u, 0x1D869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D869Cu;
label_1d869c:
    // 0x1d869c: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1d86a0:
    if (ctx->pc == 0x1D86A0u) {
        ctx->pc = 0x1D86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D869Cu;
        // 0x1d86a0: 0x92233025  lbu         $v1, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86A4u;
        goto label_1d86a4;
    }
    ctx->pc = 0x1D869Cu;
    {
        const bool branch_taken_0x1d869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D869Cu;
        // 0x1d86a0: 0x92233025  lbu         $v1, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d869c) {
            ctx->pc = 0x1D89E8u;
            goto label_1d89e8;
        }
    }
    ctx->pc = 0x1D86A4u;
label_1d86a4:
    // 0x1d86a4: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d86a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d86a8:
    // 0x1d86a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d86a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d86ac:
    // 0x1d86ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d86b0:
    // 0x1d86b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d86b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d86b4:
    // 0x1d86b4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d86b8:
    // 0x1d86b8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d86bc:
    // 0x1d86bc: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1d86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d86c0:
    // 0x1d86c0: 0x24658170  addiu       $a1, $v1, -0x7E90
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d86c4:
    // 0x1d86c4: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1d86c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d86c8:
    // 0x1d86c8: 0xc4618170  lwc1        $f1, -0x7E90($v1)
    ctx->pc = 0x1d86c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d86cc:
    // 0x1d86cc: 0x8e243004  lw          $a0, 0x3004($s1)
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d86d0:
    // 0x1d86d0: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d86d4:
    // 0x1d86d4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1d86d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d86d8:
    // 0x1d86d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d86d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d86dc:
    // 0x1d86dc: 0x0  nop
    ctx->pc = 0x1d86dcu;
    // NOP
label_1d86e0:
    // 0x1d86e0: 0x0  nop
    ctx->pc = 0x1d86e0u;
    // NOP
label_1d86e4:
    // 0x1d86e4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1d86e4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1d86e8:
    // 0x1d86e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d86ec:
    // 0x1d86ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d86f0:
    // 0x1d86f0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d86f4:
    // 0x1d86f4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d86f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d86f8:
    // 0x1d86f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d86f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d86fc:
    // 0x1d86fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d86fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d8700:
    // 0x1d8700: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1d8700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1d8704:
    // 0x1d8704: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d8704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d8708:
    // 0x1d8708: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1d8708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d870c:
    // 0x1d870c: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d8710:
    // 0x1d8710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8714:
    // 0x1d8714: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d8718:
    // 0x1d8718: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d8718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1d871c:
    // 0x1d871c: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d8720:
    // 0x1d8720: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
label_1d8724:
    if (ctx->pc == 0x1D8724u) {
        ctx->pc = 0x1D8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8720u;
        // 0x1d8724: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8728u;
        goto label_1d8728;
    }
    ctx->pc = 0x1D8720u;
    {
        const bool branch_taken_0x1d8720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8720u;
        // 0x1d8724: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8720) {
            ctx->pc = 0x1D8A78u;
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D8728u;
label_1d8728:
    // 0x1d8728: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1d8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d872c:
    // 0x1d872c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d872cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d8730:
    // 0x1d8730: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d8730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d8734:
    // 0x1d8734: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x1d8734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8738:
    // 0x1d8738: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d8738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d873c:
    // 0x1d873c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d873cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8740:
    // 0x1d8740: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d8744:
    // 0x1d8744: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8748:
    // 0x1d8748: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d874c:
    // 0x1d874c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d874cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8750:
    // 0x1d8750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8754:
    // 0x1d8754: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8758:
    // 0x1d8758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d8758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d875c:
    // 0x1d875c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d875cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8760:
    // 0x1d8760: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d8760u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d8764:
    // 0x1d8764: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8768:
    // 0x1d8768: 0xae2c302c  sw          $t4, 0x302C($s1)
    ctx->pc = 0x1d8768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 12));
label_1d876c:
    // 0x1d876c: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1d876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d8770:
    // 0x1d8770: 0xc0b2e92  jal         func_2CBA48
label_1d8774:
    if (ctx->pc == 0x1D8774u) {
        ctx->pc = 0x1D8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8770u;
        // 0x1d8774: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8778u;
        goto label_1d8778;
    }
    ctx->pc = 0x1D8770u;
    SET_GPR_U32(ctx, 31, 0x1D8778u);
    ctx->pc = 0x1D8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8770u;
    // 0x1d8774: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D8770u, 0x1D8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8778u;
label_1d8778:
    // 0x1d8778: 0x1000009b  b           . + 4 + (0x9B << 2)
label_1d877c:
    if (ctx->pc == 0x1D877Cu) {
        ctx->pc = 0x1D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8778u;
        // 0x1d877c: 0x92233025  lbu         $v1, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8780u;
        goto label_1d8780;
    }
    ctx->pc = 0x1D8778u;
    {
        const bool branch_taken_0x1d8778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8778u;
        // 0x1d877c: 0x92233025  lbu         $v1, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8778) {
            ctx->pc = 0x1D89E8u;
            goto label_1d89e8;
        }
    }
    ctx->pc = 0x1D8780u;
label_1d8780:
    // 0x1d8780: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d8780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8784:
    // 0x1d8784: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d8784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d8788:
    // 0x1d8788: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d8788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d878c:
    // 0x1d878c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d878cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8790:
    // 0x1d8790: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d8794:
    // 0x1d8794: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d8798:
    // 0x1d8798: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d8798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d879c:
    // 0x1d879c: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1d879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d87a0:
    // 0x1d87a0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1d87a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d87a4:
    // 0x1d87a4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1d87a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d87a8:
    // 0x1d87a8: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1d87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d87ac:
    // 0x1d87ac: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d87acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d87b0:
    // 0x1d87b0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1d87b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d87b4:
    // 0x1d87b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d87b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d87b8:
    // 0x1d87b8: 0x0  nop
    ctx->pc = 0x1d87b8u;
    // NOP
label_1d87bc:
    // 0x1d87bc: 0x0  nop
    ctx->pc = 0x1d87bcu;
    // NOP
label_1d87c0:
    // 0x1d87c0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1d87c0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1d87c4:
    // 0x1d87c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d87c8:
    // 0x1d87c8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1d87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d87cc:
    // 0x1d87cc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1d87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d87d0:
    // 0x1d87d0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d87d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d87d4:
    // 0x1d87d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d87d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d87d8:
    // 0x1d87d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d87d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d87dc:
    // 0x1d87dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1d87dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1d87e0:
    // 0x1d87e0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d87e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d87e4:
    // 0x1d87e4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1d87e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d87e8:
    // 0x1d87e8: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d87ec:
    // 0x1d87ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d87f0:
    // 0x1d87f0: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d87f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d87f4:
    // 0x1d87f4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d87f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1d87f8:
    // 0x1d87f8: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d87fc:
    // 0x1d87fc: 0x5440009e  bnel        $v0, $zero, . + 4 + (0x9E << 2)
label_1d8800:
    if (ctx->pc == 0x1D8800u) {
        ctx->pc = 0x1D8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87FCu;
        // 0x1d8800: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8804u;
        goto label_1d8804;
    }
    ctx->pc = 0x1D87FCu;
    {
        const bool branch_taken_0x1d87fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87fc) {
            ctx->pc = 0x1D8800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D87FCu;
            // 0x1d8800: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8A78u;
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D8804u;
label_1d8804:
    // 0x1d8804: 0x8e23300c  lw          $v1, 0x300C($s1)
    ctx->pc = 0x1d8804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d8808:
    // 0x1d8808: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1d880c:
    // 0x1d880c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1d880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1d8810:
    // 0x1d8810: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8814:
    // 0x1d8814: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d8814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8818:
    // 0x1d8818: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d8818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d881c:
    // 0x1d881c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8820:
    // 0x1d8820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8824:
    // 0x1d8824: 0x8ce30250  lw          $v1, 0x250($a3)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d8828:
    // 0x1d8828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d882c:
    // 0x1d882c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d882cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8830:
    // 0x1d8830: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8830u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8834:
    // 0x1d8834: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d8834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d8838:
    // 0x1d8838: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8838u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d883c:
    // 0x1d883c: 0xace30250  sw          $v1, 0x250($a3)
    ctx->pc = 0x1d883cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 3));
label_1d8840:
    // 0x1d8840: 0x10000064  b           . + 4 + (0x64 << 2)
label_1d8844:
    if (ctx->pc == 0x1D8844u) {
        ctx->pc = 0x1D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8840u;
        // 0x1d8844: 0x8e22300c  lw          $v0, 0x300C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8848u;
        goto label_1d8848;
    }
    ctx->pc = 0x1D8840u;
    {
        const bool branch_taken_0x1d8840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8840u;
        // 0x1d8844: 0x8e22300c  lw          $v0, 0x300C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8840) {
            ctx->pc = 0x1D89D4u;
            goto label_1d89d4;
        }
    }
    ctx->pc = 0x1D8848u;
label_1d8848:
    // 0x1d8848: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d884c:
    // 0x1d884c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d884cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d8850:
    // 0x1d8850: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d8854:
    // 0x1d8854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8858:
    // 0x1d8858: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d8858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d885c:
    // 0x1d885c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d8860:
    // 0x1d8860: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d8864:
    // 0x1d8864: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1d8864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d8868:
    // 0x1d8868: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1d8868u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d886c:
    // 0x1d886c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1d886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8870:
    // 0x1d8870: 0x8e24300c  lw          $a0, 0x300C($s1)
    ctx->pc = 0x1d8870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d8874:
    // 0x1d8874: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d8878:
    // 0x1d8878: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1d8878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d887c:
    // 0x1d887c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d8880:
    // 0x1d8880: 0x0  nop
    ctx->pc = 0x1d8880u;
    // NOP
label_1d8884:
    // 0x1d8884: 0x0  nop
    ctx->pc = 0x1d8884u;
    // NOP
label_1d8888:
    // 0x1d8888: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1d8888u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1d888c:
    // 0x1d888c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8890:
    // 0x1d8890: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1d8890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8894:
    // 0x1d8894: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d8898:
    // 0x1d8898: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d8898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d889c:
    // 0x1d889c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d889cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d88a0:
    // 0x1d88a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d88a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d88a4:
    // 0x1d88a4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1d88a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1d88a8:
    // 0x1d88a8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d88a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d88ac:
    // 0x1d88ac: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1d88acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d88b0:
    // 0x1d88b0: 0x8e22300c  lw          $v0, 0x300C($s1)
    ctx->pc = 0x1d88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d88b4:
    // 0x1d88b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d88b8:
    // 0x1d88b8: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d88bc:
    // 0x1d88bc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d88bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1d88c0:
    // 0x1d88c0: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d88c4:
    // 0x1d88c4: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
label_1d88c8:
    if (ctx->pc == 0x1D88C8u) {
        ctx->pc = 0x1D88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88C4u;
        // 0x1d88c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D88CCu;
        goto label_1d88cc;
    }
    ctx->pc = 0x1D88C4u;
    {
        const bool branch_taken_0x1d88c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d88c4) {
            ctx->pc = 0x1D88C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D88C4u;
            // 0x1d88c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8A78u;
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D88CCu;
label_1d88cc:
    // 0x1d88cc: 0x8e233010  lw          $v1, 0x3010($s1)
    ctx->pc = 0x1d88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d88d0:
    // 0x1d88d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1d88d4:
    // 0x1d88d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1d88d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1d88d8:
    // 0x1d88d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d88dc:
    // 0x1d88dc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d88dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d88e0:
    // 0x1d88e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d88e4:
    // 0x1d88e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d88e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d88e8:
    // 0x1d88e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d88e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88ec:
    // 0x1d88ec: 0x8ce30250  lw          $v1, 0x250($a3)
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d88f0:
    // 0x1d88f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d88f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88f4:
    // 0x1d88f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d88f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88f8:
    // 0x1d88f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d88f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88fc:
    // 0x1d88fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d8900:
    // 0x1d8900: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8900u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8904:
    // 0x1d8904: 0xace30250  sw          $v1, 0x250($a3)
    ctx->pc = 0x1d8904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 3));
label_1d8908:
    // 0x1d8908: 0x10000032  b           . + 4 + (0x32 << 2)
label_1d890c:
    if (ctx->pc == 0x1D890Cu) {
        ctx->pc = 0x1D890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8908u;
        // 0x1d890c: 0x8e223010  lw          $v0, 0x3010($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8910u;
        goto label_1d8910;
    }
    ctx->pc = 0x1D8908u;
    {
        const bool branch_taken_0x1d8908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8908u;
        // 0x1d890c: 0x8e223010  lw          $v0, 0x3010($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8908) {
            ctx->pc = 0x1D89D4u;
            goto label_1d89d4;
        }
    }
    ctx->pc = 0x1D8910u;
label_1d8910:
    // 0x1d8910: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d8910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8914:
    // 0x1d8914: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d8914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d8918:
    // 0x1d8918: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d8918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d891c:
    // 0x1d891c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d891cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8920:
    // 0x1d8920: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d8924:
    // 0x1d8924: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d8928:
    // 0x1d8928: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d892c:
    // 0x1d892c: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1d892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d8930:
    // 0x1d8930: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1d8930u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d8934:
    // 0x1d8934: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1d8934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8938:
    // 0x1d8938: 0x8e243010  lw          $a0, 0x3010($s1)
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d893c:
    // 0x1d893c: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d8940:
    // 0x1d8940: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1d8940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d8944:
    // 0x1d8944: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d8944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d8948:
    // 0x1d8948: 0x0  nop
    ctx->pc = 0x1d8948u;
    // NOP
label_1d894c:
    // 0x1d894c: 0x0  nop
    ctx->pc = 0x1d894cu;
    // NOP
label_1d8950:
    // 0x1d8950: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1d8950u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1d8954:
    // 0x1d8954: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8958:
    // 0x1d8958: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1d8958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d895c:
    // 0x1d895c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d8960:
    // 0x1d8960: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d8960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d8964:
    // 0x1d8964: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d8964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d8968:
    // 0x1d8968: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d8968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d896c:
    // 0x1d896c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1d896cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1d8970:
    // 0x1d8970: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d8970u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d8974:
    // 0x1d8974: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1d8974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d8978:
    // 0x1d8978: 0x8e223010  lw          $v0, 0x3010($s1)
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d897c:
    // 0x1d897c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8980:
    // 0x1d8980: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d8980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d8984:
    // 0x1d8984: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d8984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1d8988:
    // 0x1d8988: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d898c:
    // 0x1d898c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1d8990:
    if (ctx->pc == 0x1D8990u) {
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8994u;
        goto label_1d8994;
    }
    ctx->pc = 0x1D898Cu;
    {
        const bool branch_taken_0x1d898c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898c) {
            ctx->pc = 0x1D8A78u;
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D8994u;
label_1d8994:
    // 0x1d8994: 0x8e233014  lw          $v1, 0x3014($s1)
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d8998:
    // 0x1d8998: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1d899c:
    // 0x1d899c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1d899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1d89a0:
    // 0x1d89a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d89a4:
    // 0x1d89a4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d89a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d89a8:
    // 0x1d89a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d89ac:
    // 0x1d89ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d89acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d89b0:
    // 0x1d89b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d89b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b4:
    // 0x1d89b4: 0x8ce30250  lw          $v1, 0x250($a3)
    ctx->pc = 0x1d89b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d89b8:
    // 0x1d89b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d89b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89bc:
    // 0x1d89bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d89bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89c0:
    // 0x1d89c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d89c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89c4:
    // 0x1d89c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d89c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d89c8:
    // 0x1d89c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d89c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89cc:
    // 0x1d89cc: 0xace30250  sw          $v1, 0x250($a3)
    ctx->pc = 0x1d89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 3));
label_1d89d0:
    // 0x1d89d0: 0x8e223014  lw          $v0, 0x3014($s1)
    ctx->pc = 0x1d89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d89d4:
    // 0x1d89d4: 0xc0b2e92  jal         func_2CBA48
label_1d89d8:
    if (ctx->pc == 0x1D89D8u) {
        ctx->pc = 0x1D89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89D4u;
        // 0x1d89d8: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89DCu;
        goto label_1d89dc;
    }
    ctx->pc = 0x1D89D4u;
    SET_GPR_U32(ctx, 31, 0x1D89DCu);
    ctx->pc = 0x1D89D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89D4u;
    // 0x1d89d8: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D89D4u, 0x1D89DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89DCu;
label_1d89dc:
    // 0x1d89dc: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d89dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d89e0:
    // 0x1d89e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d89e4:
    // 0x1d89e4: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1d89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
label_1d89e8:
    // 0x1d89e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d89ec:
    // 0x1d89ec: 0x10000062  b           . + 4 + (0x62 << 2)
label_1d89f0:
    if (ctx->pc == 0x1D89F0u) {
        ctx->pc = 0x1D89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89ECu;
        // 0x1d89f0: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89F4u;
        goto label_1d89f4;
    }
    ctx->pc = 0x1D89ECu;
    {
        const bool branch_taken_0x1d89ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89ECu;
        // 0x1d89f0: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89ec) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D89F4u;
label_1d89f4:
    // 0x1d89f4: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d89f8:
    // 0x1d89f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d89f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d89fc:
    // 0x1d89fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d89fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d8a00:
    // 0x1d8a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8a04:
    // 0x1d8a04: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d8a08:
    // 0x1d8a08: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d8a0c:
    // 0x1d8a0c: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d8a10:
    // 0x1d8a10: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1d8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d8a14:
    // 0x1d8a14: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1d8a14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d8a18:
    // 0x1d8a18: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1d8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8a1c:
    // 0x1d8a1c: 0x8e243014  lw          $a0, 0x3014($s1)
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d8a20:
    // 0x1d8a20: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d8a24:
    // 0x1d8a24: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1d8a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d8a28:
    // 0x1d8a28: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d8a2c:
    // 0x1d8a2c: 0x0  nop
    ctx->pc = 0x1d8a2cu;
    // NOP
label_1d8a30:
    // 0x1d8a30: 0x0  nop
    ctx->pc = 0x1d8a30u;
    // NOP
label_1d8a34:
    // 0x1d8a34: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1d8a34u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1d8a38:
    // 0x1d8a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8a3c:
    // 0x1d8a3c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1d8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8a40:
    // 0x1d8a40: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1d8a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d8a44:
    // 0x1d8a44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d8a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d8a48:
    // 0x1d8a48: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d8a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d8a4c:
    // 0x1d8a4c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d8a4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d8a50:
    // 0x1d8a50: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1d8a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1d8a54:
    // 0x1d8a54: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d8a54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d8a58:
    // 0x1d8a58: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1d8a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d8a5c:
    // 0x1d8a5c: 0x8e223014  lw          $v0, 0x3014($s1)
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d8a60:
    // 0x1d8a60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8a64:
    // 0x1d8a64: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d8a68:
    // 0x1d8a68: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d8a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1d8a6c:
    // 0x1d8a6c: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d8a70:
    // 0x1d8a70: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1d8a74:
    if (ctx->pc == 0x1D8A74u) {
        ctx->pc = 0x1D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70u;
        // 0x1d8a74: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A78u;
        goto label_1d8a78;
    }
    ctx->pc = 0x1D8A70u;
    {
        const bool branch_taken_0x1d8a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70u;
        // 0x1d8a74: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a70) {
            ctx->pc = 0x1D8B50u;
            goto label_1d8b50;
        }
    }
    ctx->pc = 0x1D8A78u;
label_1d8a78:
    // 0x1d8a78: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1d8a7c:
    if (ctx->pc == 0x1D8A7Cu) {
        ctx->pc = 0x1D8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A78u;
        // 0x1d8a7c: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A80u;
        goto label_1d8a80;
    }
    ctx->pc = 0x1D8A78u;
    {
        const bool branch_taken_0x1d8a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A78u;
        // 0x1d8a7c: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a78) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D8A80u;
label_1d8a80:
    // 0x1d8a80: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1d8a80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1d8a84:
    // 0x1d8a84: 0x26303004  addiu       $s0, $s1, 0x3004
    ctx->pc = 0x1d8a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1d8a88:
    // 0x1d8a88: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1d8a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8a8c:
    // 0x1d8a8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d8a90:
    // 0x1d8a90: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x1d8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
label_1d8a94:
    // 0x1d8a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8a98:
    // 0x1d8a98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8a9c:
    // 0x1d8a9c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d8a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8aa0:
    // 0x1d8aa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8aa4:
    // 0x1d8aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8aa8:
    // 0x1d8aa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8aac:
    // 0x1d8aac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8aacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ab0:
    // 0x1d8ab0: 0xc0b2e92  jal         func_2CBA48
label_1d8ab4:
    if (ctx->pc == 0x1D8AB4u) {
        ctx->pc = 0x1D8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB0u;
        // 0x1d8ab4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AB8u;
        goto label_1d8ab8;
    }
    ctx->pc = 0x1D8AB0u;
    SET_GPR_U32(ctx, 31, 0x1D8AB8u);
    ctx->pc = 0x1D8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AB0u;
    // 0x1d8ab4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D8AB0u, 0x1D8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AB8u;
label_1d8ab8:
    // 0x1d8ab8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d8abc:
    // 0x1d8abc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8ac0:
    // 0x1d8ac0: 0xc075b74  jal         func_1D6DD0
label_1d8ac4:
    if (ctx->pc == 0x1D8AC4u) {
        ctx->pc = 0x1D8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AC0u;
        // 0x1d8ac4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AC8u;
        goto label_1d8ac8;
    }
    ctx->pc = 0x1D8AC0u;
    SET_GPR_U32(ctx, 31, 0x1D8AC8u);
    ctx->pc = 0x1D8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC0u;
    // 0x1d8ac4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DD0u, 0x1D8AC0u, 0x1D8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC8u;
label_1d8ac8:
    // 0x1d8ac8: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
label_1d8acc:
    if (ctx->pc == 0x1D8ACCu) {
        ctx->pc = 0x1D8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AC8u;
        // 0x1d8acc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AD0u;
        goto label_1d8ad0;
    }
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8AC8u;
            // 0x1d8acc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a90;
        }
    }
    ctx->pc = 0x1D8AD0u;
label_1d8ad0:
    // 0x1d8ad0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d8ad4:
    if (ctx->pc == 0x1D8AD4u) {
        ctx->pc = 0x1D8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AD0u;
        // 0x1d8ad4: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AD8u;
        goto label_1d8ad8;
    }
    ctx->pc = 0x1D8AD0u;
    {
        const bool branch_taken_0x1d8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AD0u;
        // 0x1d8ad4: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ad0) {
            ctx->pc = 0x1D8B54u;
            goto label_1d8b54;
        }
    }
    ctx->pc = 0x1D8AD8u;
label_1d8ad8:
    // 0x1d8ad8: 0x8e233004  lw          $v1, 0x3004($s1)
    ctx->pc = 0x1d8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d8adc:
    // 0x1d8adc: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8adcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d8ae0:
    // 0x1d8ae0: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d8ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d8ae4:
    // 0x1d8ae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d8ae8:
    // 0x1d8ae8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1d8aec:
    if (ctx->pc == 0x1D8AECu) {
        ctx->pc = 0x1D8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AE8u;
        // 0x1d8aec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AF0u;
        goto label_1d8af0;
    }
    ctx->pc = 0x1D8AE8u;
    {
        const bool branch_taken_0x1d8ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AE8u;
        // 0x1d8aec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ae8) {
            ctx->pc = 0x1D8B7Cu;
            goto label_1d8b7c;
        }
    }
    ctx->pc = 0x1D8AF0u;
label_1d8af0:
    // 0x1d8af0: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1d8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d8af4:
    // 0x1d8af4: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8af4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d8af8:
    // 0x1d8af8: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d8af8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d8afc:
    // 0x1d8afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d8b00:
    // 0x1d8b00: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_1d8b04:
    if (ctx->pc == 0x1D8B04u) {
        ctx->pc = 0x1D8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B00u;
        // 0x1d8b04: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B08u;
        goto label_1d8b08;
    }
    ctx->pc = 0x1D8B00u;
    {
        const bool branch_taken_0x1d8b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b00) {
            ctx->pc = 0x1D8B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8B00u;
            // 0x1d8b04: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B80u;
            goto label_1d8b80;
        }
    }
    ctx->pc = 0x1D8B08u;
label_1d8b08:
    // 0x1d8b08: 0x8e23300c  lw          $v1, 0x300C($s1)
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d8b0c:
    // 0x1d8b0c: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8b0cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d8b10:
    // 0x1d8b10: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d8b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d8b14:
    // 0x1d8b14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d8b18:
    // 0x1d8b18: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_1d8b1c:
    if (ctx->pc == 0x1D8B1Cu) {
        ctx->pc = 0x1D8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B18u;
        // 0x1d8b1c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B20u;
        goto label_1d8b20;
    }
    ctx->pc = 0x1D8B18u;
    {
        const bool branch_taken_0x1d8b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b18) {
            ctx->pc = 0x1D8B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8B18u;
            // 0x1d8b1c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B80u;
            goto label_1d8b80;
        }
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0x8e233010  lw          $v1, 0x3010($s1)
    ctx->pc = 0x1d8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d8b24:
    // 0x1d8b24: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8b24u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d8b28:
    // 0x1d8b28: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d8b28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d8b2c:
    // 0x1d8b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d8b30:
    // 0x1d8b30: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1d8b34:
    if (ctx->pc == 0x1D8B34u) {
        ctx->pc = 0x1D8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B30u;
        // 0x1d8b34: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B38u;
        goto label_1d8b38;
    }
    ctx->pc = 0x1D8B30u;
    {
        const bool branch_taken_0x1d8b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b30) {
            ctx->pc = 0x1D8B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8B30u;
            // 0x1d8b34: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B80u;
            goto label_1d8b80;
        }
    }
    ctx->pc = 0x1D8B38u;
label_1d8b38:
    // 0x1d8b38: 0x8e233014  lw          $v1, 0x3014($s1)
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d8b3c:
    // 0x1d8b3c: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d8b3cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d8b40:
    // 0x1d8b40: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d8b40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d8b44:
    // 0x1d8b44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d8b48:
    // 0x1d8b48: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1d8b4c:
    if (ctx->pc == 0x1D8B4Cu) {
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B48u;
        // 0x1d8b4c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B50u;
        goto label_1d8b50;
    }
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8B48u;
            // 0x1d8b4c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B80u;
            goto label_1d8b80;
        }
    }
    ctx->pc = 0x1D8B50u;
label_1d8b50:
    // 0x1d8b50: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d8b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d8b54:
    // 0x1d8b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8b58:
    // 0x1d8b58: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d8b5c:
    if (ctx->pc == 0x1D8B5Cu) {
        ctx->pc = 0x1D8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B58u;
        // 0x1d8b5c: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B60u;
        goto label_1d8b60;
    }
    ctx->pc = 0x1D8B58u;
    {
        const bool branch_taken_0x1d8b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B58u;
        // 0x1d8b5c: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b58) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D8B60u;
label_1d8b60:
    // 0x1d8b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8b64:
    // 0x1d8b64: 0xc077afa  jal         func_1DEBE8
label_1d8b68:
    if (ctx->pc == 0x1D8B68u) {
        ctx->pc = 0x1D8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B64u;
        // 0x1d8b68: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B6Cu;
        goto label_1d8b6c;
    }
    ctx->pc = 0x1D8B64u;
    SET_GPR_U32(ctx, 31, 0x1D8B6Cu);
    ctx->pc = 0x1D8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B64u;
    // 0x1d8b68: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBE8u, 0x1D8B64u, 0x1D8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B6Cu;
label_1d8b6c:
    // 0x1d8b6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8b70:
    // 0x1d8b70: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d8b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
label_1d8b74:
    // 0x1d8b74: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d8b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1d8b78:
    // 0x1d8b78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d8b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d8b7c:
    // 0x1d8b7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d8b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d8b80:
    // 0x1d8b80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8b84:
    // 0x1d8b84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d8b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8b88:
    // 0x1d8b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8b8c:
    // 0x1d8b8c: 0x3e00008  jr          $ra
label_1d8b90:
    if (ctx->pc == 0x1D8B90u) {
        ctx->pc = 0x1D8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B8Cu;
        // 0x1d8b90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B94u;
        goto label_1d8b94;
    }
    ctx->pc = 0x1D8B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B8Cu;
        // 0x1d8b90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B94u;
label_1d8b94:
    // 0x1d8b94: 0x0  nop
    ctx->pc = 0x1d8b94u;
    // NOP
    ctx->pc = 0x1d8b98u;
}
