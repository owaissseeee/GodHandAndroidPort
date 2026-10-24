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

// Function: func_0026BEF0
// Address: 0x26bef0 - 0x26db00
void func_0026BEF0_0x26bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026BEF0_0x26bef0");
#endif

    switch (ctx->pc) {
        case 0x26bef0u: goto label_26bef0;
        case 0x26bef4u: goto label_26bef4;
        case 0x26bef8u: goto label_26bef8;
        case 0x26befcu: goto label_26befc;
        case 0x26bf00u: goto label_26bf00;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf08u: goto label_26bf08;
        case 0x26bf0cu: goto label_26bf0c;
        case 0x26bf10u: goto label_26bf10;
        case 0x26bf14u: goto label_26bf14;
        case 0x26bf18u: goto label_26bf18;
        case 0x26bf1cu: goto label_26bf1c;
        case 0x26bf20u: goto label_26bf20;
        case 0x26bf24u: goto label_26bf24;
        case 0x26bf28u: goto label_26bf28;
        case 0x26bf2cu: goto label_26bf2c;
        case 0x26bf30u: goto label_26bf30;
        case 0x26bf34u: goto label_26bf34;
        case 0x26bf38u: goto label_26bf38;
        case 0x26bf3cu: goto label_26bf3c;
        case 0x26bf40u: goto label_26bf40;
        case 0x26bf44u: goto label_26bf44;
        case 0x26bf48u: goto label_26bf48;
        case 0x26bf4cu: goto label_26bf4c;
        case 0x26bf50u: goto label_26bf50;
        case 0x26bf54u: goto label_26bf54;
        case 0x26bf58u: goto label_26bf58;
        case 0x26bf5cu: goto label_26bf5c;
        case 0x26bf60u: goto label_26bf60;
        case 0x26bf64u: goto label_26bf64;
        case 0x26bf68u: goto label_26bf68;
        case 0x26bf6cu: goto label_26bf6c;
        case 0x26bf70u: goto label_26bf70;
        case 0x26bf74u: goto label_26bf74;
        case 0x26bf78u: goto label_26bf78;
        case 0x26bf7cu: goto label_26bf7c;
        case 0x26bf80u: goto label_26bf80;
        case 0x26bf84u: goto label_26bf84;
        case 0x26bf88u: goto label_26bf88;
        case 0x26bf8cu: goto label_26bf8c;
        case 0x26bf90u: goto label_26bf90;
        case 0x26bf94u: goto label_26bf94;
        case 0x26bf98u: goto label_26bf98;
        case 0x26bf9cu: goto label_26bf9c;
        case 0x26bfa0u: goto label_26bfa0;
        case 0x26bfa4u: goto label_26bfa4;
        case 0x26bfa8u: goto label_26bfa8;
        case 0x26bfacu: goto label_26bfac;
        case 0x26bfb0u: goto label_26bfb0;
        case 0x26bfb4u: goto label_26bfb4;
        case 0x26bfb8u: goto label_26bfb8;
        case 0x26bfbcu: goto label_26bfbc;
        case 0x26bfc0u: goto label_26bfc0;
        case 0x26bfc4u: goto label_26bfc4;
        case 0x26bfc8u: goto label_26bfc8;
        case 0x26bfccu: goto label_26bfcc;
        case 0x26bfd0u: goto label_26bfd0;
        case 0x26bfd4u: goto label_26bfd4;
        case 0x26bfd8u: goto label_26bfd8;
        case 0x26bfdcu: goto label_26bfdc;
        case 0x26bfe0u: goto label_26bfe0;
        case 0x26bfe4u: goto label_26bfe4;
        case 0x26bfe8u: goto label_26bfe8;
        case 0x26bfecu: goto label_26bfec;
        case 0x26bff0u: goto label_26bff0;
        case 0x26bff4u: goto label_26bff4;
        case 0x26bff8u: goto label_26bff8;
        case 0x26bffcu: goto label_26bffc;
        case 0x26c000u: goto label_26c000;
        case 0x26c004u: goto label_26c004;
        case 0x26c008u: goto label_26c008;
        case 0x26c00cu: goto label_26c00c;
        case 0x26c010u: goto label_26c010;
        case 0x26c014u: goto label_26c014;
        case 0x26c018u: goto label_26c018;
        case 0x26c01cu: goto label_26c01c;
        case 0x26c020u: goto label_26c020;
        case 0x26c024u: goto label_26c024;
        case 0x26c028u: goto label_26c028;
        case 0x26c02cu: goto label_26c02c;
        case 0x26c030u: goto label_26c030;
        case 0x26c034u: goto label_26c034;
        case 0x26c038u: goto label_26c038;
        case 0x26c03cu: goto label_26c03c;
        case 0x26c040u: goto label_26c040;
        case 0x26c044u: goto label_26c044;
        case 0x26c048u: goto label_26c048;
        case 0x26c04cu: goto label_26c04c;
        case 0x26c050u: goto label_26c050;
        case 0x26c054u: goto label_26c054;
        case 0x26c058u: goto label_26c058;
        case 0x26c05cu: goto label_26c05c;
        case 0x26c060u: goto label_26c060;
        case 0x26c064u: goto label_26c064;
        case 0x26c068u: goto label_26c068;
        case 0x26c06cu: goto label_26c06c;
        case 0x26c070u: goto label_26c070;
        case 0x26c074u: goto label_26c074;
        case 0x26c078u: goto label_26c078;
        case 0x26c07cu: goto label_26c07c;
        case 0x26c080u: goto label_26c080;
        case 0x26c084u: goto label_26c084;
        case 0x26c088u: goto label_26c088;
        case 0x26c08cu: goto label_26c08c;
        case 0x26c090u: goto label_26c090;
        case 0x26c094u: goto label_26c094;
        case 0x26c098u: goto label_26c098;
        case 0x26c09cu: goto label_26c09c;
        case 0x26c0a0u: goto label_26c0a0;
        case 0x26c0a4u: goto label_26c0a4;
        case 0x26c0a8u: goto label_26c0a8;
        case 0x26c0acu: goto label_26c0ac;
        case 0x26c0b0u: goto label_26c0b0;
        case 0x26c0b4u: goto label_26c0b4;
        case 0x26c0b8u: goto label_26c0b8;
        case 0x26c0bcu: goto label_26c0bc;
        case 0x26c0c0u: goto label_26c0c0;
        case 0x26c0c4u: goto label_26c0c4;
        case 0x26c0c8u: goto label_26c0c8;
        case 0x26c0ccu: goto label_26c0cc;
        case 0x26c0d0u: goto label_26c0d0;
        case 0x26c0d4u: goto label_26c0d4;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c0dcu: goto label_26c0dc;
        case 0x26c0e0u: goto label_26c0e0;
        case 0x26c0e4u: goto label_26c0e4;
        case 0x26c0e8u: goto label_26c0e8;
        case 0x26c0ecu: goto label_26c0ec;
        case 0x26c0f0u: goto label_26c0f0;
        case 0x26c0f4u: goto label_26c0f4;
        case 0x26c0f8u: goto label_26c0f8;
        case 0x26c0fcu: goto label_26c0fc;
        case 0x26c100u: goto label_26c100;
        case 0x26c104u: goto label_26c104;
        case 0x26c108u: goto label_26c108;
        case 0x26c10cu: goto label_26c10c;
        case 0x26c110u: goto label_26c110;
        case 0x26c114u: goto label_26c114;
        case 0x26c118u: goto label_26c118;
        case 0x26c11cu: goto label_26c11c;
        case 0x26c120u: goto label_26c120;
        case 0x26c124u: goto label_26c124;
        case 0x26c128u: goto label_26c128;
        case 0x26c12cu: goto label_26c12c;
        case 0x26c130u: goto label_26c130;
        case 0x26c134u: goto label_26c134;
        case 0x26c138u: goto label_26c138;
        case 0x26c13cu: goto label_26c13c;
        case 0x26c140u: goto label_26c140;
        case 0x26c144u: goto label_26c144;
        case 0x26c148u: goto label_26c148;
        case 0x26c14cu: goto label_26c14c;
        case 0x26c150u: goto label_26c150;
        case 0x26c154u: goto label_26c154;
        case 0x26c158u: goto label_26c158;
        case 0x26c15cu: goto label_26c15c;
        case 0x26c160u: goto label_26c160;
        case 0x26c164u: goto label_26c164;
        case 0x26c168u: goto label_26c168;
        case 0x26c16cu: goto label_26c16c;
        case 0x26c170u: goto label_26c170;
        case 0x26c174u: goto label_26c174;
        case 0x26c178u: goto label_26c178;
        case 0x26c17cu: goto label_26c17c;
        case 0x26c180u: goto label_26c180;
        case 0x26c184u: goto label_26c184;
        case 0x26c188u: goto label_26c188;
        case 0x26c18cu: goto label_26c18c;
        case 0x26c190u: goto label_26c190;
        case 0x26c194u: goto label_26c194;
        case 0x26c198u: goto label_26c198;
        case 0x26c19cu: goto label_26c19c;
        case 0x26c1a0u: goto label_26c1a0;
        case 0x26c1a4u: goto label_26c1a4;
        case 0x26c1a8u: goto label_26c1a8;
        case 0x26c1acu: goto label_26c1ac;
        case 0x26c1b0u: goto label_26c1b0;
        case 0x26c1b4u: goto label_26c1b4;
        case 0x26c1b8u: goto label_26c1b8;
        case 0x26c1bcu: goto label_26c1bc;
        case 0x26c1c0u: goto label_26c1c0;
        case 0x26c1c4u: goto label_26c1c4;
        case 0x26c1c8u: goto label_26c1c8;
        case 0x26c1ccu: goto label_26c1cc;
        case 0x26c1d0u: goto label_26c1d0;
        case 0x26c1d4u: goto label_26c1d4;
        case 0x26c1d8u: goto label_26c1d8;
        case 0x26c1dcu: goto label_26c1dc;
        case 0x26c1e0u: goto label_26c1e0;
        case 0x26c1e4u: goto label_26c1e4;
        case 0x26c1e8u: goto label_26c1e8;
        case 0x26c1ecu: goto label_26c1ec;
        case 0x26c1f0u: goto label_26c1f0;
        case 0x26c1f4u: goto label_26c1f4;
        case 0x26c1f8u: goto label_26c1f8;
        case 0x26c1fcu: goto label_26c1fc;
        case 0x26c200u: goto label_26c200;
        case 0x26c204u: goto label_26c204;
        case 0x26c208u: goto label_26c208;
        case 0x26c20cu: goto label_26c20c;
        case 0x26c210u: goto label_26c210;
        case 0x26c214u: goto label_26c214;
        case 0x26c218u: goto label_26c218;
        case 0x26c21cu: goto label_26c21c;
        case 0x26c220u: goto label_26c220;
        case 0x26c224u: goto label_26c224;
        case 0x26c228u: goto label_26c228;
        case 0x26c22cu: goto label_26c22c;
        case 0x26c230u: goto label_26c230;
        case 0x26c234u: goto label_26c234;
        case 0x26c238u: goto label_26c238;
        case 0x26c23cu: goto label_26c23c;
        case 0x26c240u: goto label_26c240;
        case 0x26c244u: goto label_26c244;
        case 0x26c248u: goto label_26c248;
        case 0x26c24cu: goto label_26c24c;
        case 0x26c250u: goto label_26c250;
        case 0x26c254u: goto label_26c254;
        case 0x26c258u: goto label_26c258;
        case 0x26c25cu: goto label_26c25c;
        case 0x26c260u: goto label_26c260;
        case 0x26c264u: goto label_26c264;
        case 0x26c268u: goto label_26c268;
        case 0x26c26cu: goto label_26c26c;
        case 0x26c270u: goto label_26c270;
        case 0x26c274u: goto label_26c274;
        case 0x26c278u: goto label_26c278;
        case 0x26c27cu: goto label_26c27c;
        case 0x26c280u: goto label_26c280;
        case 0x26c284u: goto label_26c284;
        case 0x26c288u: goto label_26c288;
        case 0x26c28cu: goto label_26c28c;
        case 0x26c290u: goto label_26c290;
        case 0x26c294u: goto label_26c294;
        case 0x26c298u: goto label_26c298;
        case 0x26c29cu: goto label_26c29c;
        case 0x26c2a0u: goto label_26c2a0;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2a8u: goto label_26c2a8;
        case 0x26c2acu: goto label_26c2ac;
        case 0x26c2b0u: goto label_26c2b0;
        case 0x26c2b4u: goto label_26c2b4;
        case 0x26c2b8u: goto label_26c2b8;
        case 0x26c2bcu: goto label_26c2bc;
        case 0x26c2c0u: goto label_26c2c0;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c2c8u: goto label_26c2c8;
        case 0x26c2ccu: goto label_26c2cc;
        case 0x26c2d0u: goto label_26c2d0;
        case 0x26c2d4u: goto label_26c2d4;
        case 0x26c2d8u: goto label_26c2d8;
        case 0x26c2dcu: goto label_26c2dc;
        case 0x26c2e0u: goto label_26c2e0;
        case 0x26c2e4u: goto label_26c2e4;
        case 0x26c2e8u: goto label_26c2e8;
        case 0x26c2ecu: goto label_26c2ec;
        case 0x26c2f0u: goto label_26c2f0;
        case 0x26c2f4u: goto label_26c2f4;
        case 0x26c2f8u: goto label_26c2f8;
        case 0x26c2fcu: goto label_26c2fc;
        case 0x26c300u: goto label_26c300;
        case 0x26c304u: goto label_26c304;
        case 0x26c308u: goto label_26c308;
        case 0x26c30cu: goto label_26c30c;
        case 0x26c310u: goto label_26c310;
        case 0x26c314u: goto label_26c314;
        case 0x26c318u: goto label_26c318;
        case 0x26c31cu: goto label_26c31c;
        case 0x26c320u: goto label_26c320;
        case 0x26c324u: goto label_26c324;
        case 0x26c328u: goto label_26c328;
        case 0x26c32cu: goto label_26c32c;
        case 0x26c330u: goto label_26c330;
        case 0x26c334u: goto label_26c334;
        case 0x26c338u: goto label_26c338;
        case 0x26c33cu: goto label_26c33c;
        case 0x26c340u: goto label_26c340;
        case 0x26c344u: goto label_26c344;
        case 0x26c348u: goto label_26c348;
        case 0x26c34cu: goto label_26c34c;
        case 0x26c350u: goto label_26c350;
        case 0x26c354u: goto label_26c354;
        case 0x26c358u: goto label_26c358;
        case 0x26c35cu: goto label_26c35c;
        case 0x26c360u: goto label_26c360;
        case 0x26c364u: goto label_26c364;
        case 0x26c368u: goto label_26c368;
        case 0x26c36cu: goto label_26c36c;
        case 0x26c370u: goto label_26c370;
        case 0x26c374u: goto label_26c374;
        case 0x26c378u: goto label_26c378;
        case 0x26c37cu: goto label_26c37c;
        case 0x26c380u: goto label_26c380;
        case 0x26c384u: goto label_26c384;
        case 0x26c388u: goto label_26c388;
        case 0x26c38cu: goto label_26c38c;
        case 0x26c390u: goto label_26c390;
        case 0x26c394u: goto label_26c394;
        case 0x26c398u: goto label_26c398;
        case 0x26c39cu: goto label_26c39c;
        case 0x26c3a0u: goto label_26c3a0;
        case 0x26c3a4u: goto label_26c3a4;
        case 0x26c3a8u: goto label_26c3a8;
        case 0x26c3acu: goto label_26c3ac;
        case 0x26c3b0u: goto label_26c3b0;
        case 0x26c3b4u: goto label_26c3b4;
        case 0x26c3b8u: goto label_26c3b8;
        case 0x26c3bcu: goto label_26c3bc;
        case 0x26c3c0u: goto label_26c3c0;
        case 0x26c3c4u: goto label_26c3c4;
        case 0x26c3c8u: goto label_26c3c8;
        case 0x26c3ccu: goto label_26c3cc;
        case 0x26c3d0u: goto label_26c3d0;
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c3dcu: goto label_26c3dc;
        case 0x26c3e0u: goto label_26c3e0;
        case 0x26c3e4u: goto label_26c3e4;
        case 0x26c3e8u: goto label_26c3e8;
        case 0x26c3ecu: goto label_26c3ec;
        case 0x26c3f0u: goto label_26c3f0;
        case 0x26c3f4u: goto label_26c3f4;
        case 0x26c3f8u: goto label_26c3f8;
        case 0x26c3fcu: goto label_26c3fc;
        case 0x26c400u: goto label_26c400;
        case 0x26c404u: goto label_26c404;
        case 0x26c408u: goto label_26c408;
        case 0x26c40cu: goto label_26c40c;
        case 0x26c410u: goto label_26c410;
        case 0x26c414u: goto label_26c414;
        case 0x26c418u: goto label_26c418;
        case 0x26c41cu: goto label_26c41c;
        case 0x26c420u: goto label_26c420;
        case 0x26c424u: goto label_26c424;
        case 0x26c428u: goto label_26c428;
        case 0x26c42cu: goto label_26c42c;
        case 0x26c430u: goto label_26c430;
        case 0x26c434u: goto label_26c434;
        case 0x26c438u: goto label_26c438;
        case 0x26c43cu: goto label_26c43c;
        case 0x26c440u: goto label_26c440;
        case 0x26c444u: goto label_26c444;
        case 0x26c448u: goto label_26c448;
        case 0x26c44cu: goto label_26c44c;
        case 0x26c450u: goto label_26c450;
        case 0x26c454u: goto label_26c454;
        case 0x26c458u: goto label_26c458;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c460u: goto label_26c460;
        case 0x26c464u: goto label_26c464;
        case 0x26c468u: goto label_26c468;
        case 0x26c46cu: goto label_26c46c;
        case 0x26c470u: goto label_26c470;
        case 0x26c474u: goto label_26c474;
        case 0x26c478u: goto label_26c478;
        case 0x26c47cu: goto label_26c47c;
        case 0x26c480u: goto label_26c480;
        case 0x26c484u: goto label_26c484;
        case 0x26c488u: goto label_26c488;
        case 0x26c48cu: goto label_26c48c;
        case 0x26c490u: goto label_26c490;
        case 0x26c494u: goto label_26c494;
        case 0x26c498u: goto label_26c498;
        case 0x26c49cu: goto label_26c49c;
        case 0x26c4a0u: goto label_26c4a0;
        case 0x26c4a4u: goto label_26c4a4;
        case 0x26c4a8u: goto label_26c4a8;
        case 0x26c4acu: goto label_26c4ac;
        case 0x26c4b0u: goto label_26c4b0;
        case 0x26c4b4u: goto label_26c4b4;
        case 0x26c4b8u: goto label_26c4b8;
        case 0x26c4bcu: goto label_26c4bc;
        case 0x26c4c0u: goto label_26c4c0;
        case 0x26c4c4u: goto label_26c4c4;
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4ccu: goto label_26c4cc;
        case 0x26c4d0u: goto label_26c4d0;
        case 0x26c4d4u: goto label_26c4d4;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4dcu: goto label_26c4dc;
        case 0x26c4e0u: goto label_26c4e0;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4e8u: goto label_26c4e8;
        case 0x26c4ecu: goto label_26c4ec;
        case 0x26c4f0u: goto label_26c4f0;
        case 0x26c4f4u: goto label_26c4f4;
        case 0x26c4f8u: goto label_26c4f8;
        case 0x26c4fcu: goto label_26c4fc;
        case 0x26c500u: goto label_26c500;
        case 0x26c504u: goto label_26c504;
        case 0x26c508u: goto label_26c508;
        case 0x26c50cu: goto label_26c50c;
        case 0x26c510u: goto label_26c510;
        case 0x26c514u: goto label_26c514;
        case 0x26c518u: goto label_26c518;
        case 0x26c51cu: goto label_26c51c;
        case 0x26c520u: goto label_26c520;
        case 0x26c524u: goto label_26c524;
        case 0x26c528u: goto label_26c528;
        case 0x26c52cu: goto label_26c52c;
        case 0x26c530u: goto label_26c530;
        case 0x26c534u: goto label_26c534;
        case 0x26c538u: goto label_26c538;
        case 0x26c53cu: goto label_26c53c;
        case 0x26c540u: goto label_26c540;
        case 0x26c544u: goto label_26c544;
        case 0x26c548u: goto label_26c548;
        case 0x26c54cu: goto label_26c54c;
        case 0x26c550u: goto label_26c550;
        case 0x26c554u: goto label_26c554;
        case 0x26c558u: goto label_26c558;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c560u: goto label_26c560;
        case 0x26c564u: goto label_26c564;
        case 0x26c568u: goto label_26c568;
        case 0x26c56cu: goto label_26c56c;
        case 0x26c570u: goto label_26c570;
        case 0x26c574u: goto label_26c574;
        case 0x26c578u: goto label_26c578;
        case 0x26c57cu: goto label_26c57c;
        case 0x26c580u: goto label_26c580;
        case 0x26c584u: goto label_26c584;
        case 0x26c588u: goto label_26c588;
        case 0x26c58cu: goto label_26c58c;
        case 0x26c590u: goto label_26c590;
        case 0x26c594u: goto label_26c594;
        case 0x26c598u: goto label_26c598;
        case 0x26c59cu: goto label_26c59c;
        case 0x26c5a0u: goto label_26c5a0;
        case 0x26c5a4u: goto label_26c5a4;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        case 0x26c620u: goto label_26c620;
        case 0x26c624u: goto label_26c624;
        case 0x26c628u: goto label_26c628;
        case 0x26c62cu: goto label_26c62c;
        case 0x26c630u: goto label_26c630;
        case 0x26c634u: goto label_26c634;
        case 0x26c638u: goto label_26c638;
        case 0x26c63cu: goto label_26c63c;
        case 0x26c640u: goto label_26c640;
        case 0x26c644u: goto label_26c644;
        case 0x26c648u: goto label_26c648;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c650u: goto label_26c650;
        case 0x26c654u: goto label_26c654;
        case 0x26c658u: goto label_26c658;
        case 0x26c65cu: goto label_26c65c;
        case 0x26c660u: goto label_26c660;
        case 0x26c664u: goto label_26c664;
        case 0x26c668u: goto label_26c668;
        case 0x26c66cu: goto label_26c66c;
        case 0x26c670u: goto label_26c670;
        case 0x26c674u: goto label_26c674;
        case 0x26c678u: goto label_26c678;
        case 0x26c67cu: goto label_26c67c;
        case 0x26c680u: goto label_26c680;
        case 0x26c684u: goto label_26c684;
        case 0x26c688u: goto label_26c688;
        case 0x26c68cu: goto label_26c68c;
        case 0x26c690u: goto label_26c690;
        case 0x26c694u: goto label_26c694;
        case 0x26c698u: goto label_26c698;
        case 0x26c69cu: goto label_26c69c;
        case 0x26c6a0u: goto label_26c6a0;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6acu: goto label_26c6ac;
        case 0x26c6b0u: goto label_26c6b0;
        case 0x26c6b4u: goto label_26c6b4;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6c0u: goto label_26c6c0;
        case 0x26c6c4u: goto label_26c6c4;
        case 0x26c6c8u: goto label_26c6c8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6d8u: goto label_26c6d8;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6e4u: goto label_26c6e4;
        case 0x26c6e8u: goto label_26c6e8;
        case 0x26c6ecu: goto label_26c6ec;
        case 0x26c6f0u: goto label_26c6f0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c6fcu: goto label_26c6fc;
        case 0x26c700u: goto label_26c700;
        case 0x26c704u: goto label_26c704;
        case 0x26c708u: goto label_26c708;
        case 0x26c70cu: goto label_26c70c;
        case 0x26c710u: goto label_26c710;
        case 0x26c714u: goto label_26c714;
        case 0x26c718u: goto label_26c718;
        case 0x26c71cu: goto label_26c71c;
        case 0x26c720u: goto label_26c720;
        case 0x26c724u: goto label_26c724;
        case 0x26c728u: goto label_26c728;
        case 0x26c72cu: goto label_26c72c;
        case 0x26c730u: goto label_26c730;
        case 0x26c734u: goto label_26c734;
        case 0x26c738u: goto label_26c738;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c740u: goto label_26c740;
        case 0x26c744u: goto label_26c744;
        case 0x26c748u: goto label_26c748;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c750u: goto label_26c750;
        case 0x26c754u: goto label_26c754;
        case 0x26c758u: goto label_26c758;
        case 0x26c75cu: goto label_26c75c;
        case 0x26c760u: goto label_26c760;
        case 0x26c764u: goto label_26c764;
        case 0x26c768u: goto label_26c768;
        case 0x26c76cu: goto label_26c76c;
        case 0x26c770u: goto label_26c770;
        case 0x26c774u: goto label_26c774;
        case 0x26c778u: goto label_26c778;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c780u: goto label_26c780;
        case 0x26c784u: goto label_26c784;
        case 0x26c788u: goto label_26c788;
        case 0x26c78cu: goto label_26c78c;
        case 0x26c790u: goto label_26c790;
        case 0x26c794u: goto label_26c794;
        case 0x26c798u: goto label_26c798;
        case 0x26c79cu: goto label_26c79c;
        case 0x26c7a0u: goto label_26c7a0;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c7b4u: goto label_26c7b4;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7bcu: goto label_26c7bc;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7c4u: goto label_26c7c4;
        case 0x26c7c8u: goto label_26c7c8;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7dcu: goto label_26c7dc;
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c7e4u: goto label_26c7e4;
        case 0x26c7e8u: goto label_26c7e8;
        case 0x26c7ecu: goto label_26c7ec;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c7f4u: goto label_26c7f4;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c7fcu: goto label_26c7fc;
        case 0x26c800u: goto label_26c800;
        case 0x26c804u: goto label_26c804;
        case 0x26c808u: goto label_26c808;
        case 0x26c80cu: goto label_26c80c;
        case 0x26c810u: goto label_26c810;
        case 0x26c814u: goto label_26c814;
        case 0x26c818u: goto label_26c818;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c820u: goto label_26c820;
        case 0x26c824u: goto label_26c824;
        case 0x26c828u: goto label_26c828;
        case 0x26c82cu: goto label_26c82c;
        case 0x26c830u: goto label_26c830;
        case 0x26c834u: goto label_26c834;
        case 0x26c838u: goto label_26c838;
        case 0x26c83cu: goto label_26c83c;
        case 0x26c840u: goto label_26c840;
        case 0x26c844u: goto label_26c844;
        case 0x26c848u: goto label_26c848;
        case 0x26c84cu: goto label_26c84c;
        case 0x26c850u: goto label_26c850;
        case 0x26c854u: goto label_26c854;
        case 0x26c858u: goto label_26c858;
        case 0x26c85cu: goto label_26c85c;
        case 0x26c860u: goto label_26c860;
        case 0x26c864u: goto label_26c864;
        case 0x26c868u: goto label_26c868;
        case 0x26c86cu: goto label_26c86c;
        case 0x26c870u: goto label_26c870;
        case 0x26c874u: goto label_26c874;
        case 0x26c878u: goto label_26c878;
        case 0x26c87cu: goto label_26c87c;
        case 0x26c880u: goto label_26c880;
        case 0x26c884u: goto label_26c884;
        case 0x26c888u: goto label_26c888;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c890u: goto label_26c890;
        case 0x26c894u: goto label_26c894;
        case 0x26c898u: goto label_26c898;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8a4u: goto label_26c8a4;
        case 0x26c8a8u: goto label_26c8a8;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8b0u: goto label_26c8b0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8b8u: goto label_26c8b8;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c4u: goto label_26c8c4;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8ccu: goto label_26c8cc;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8d4u: goto label_26c8d4;
        case 0x26c8d8u: goto label_26c8d8;
        case 0x26c8dcu: goto label_26c8dc;
        case 0x26c8e0u: goto label_26c8e0;
        case 0x26c8e4u: goto label_26c8e4;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8ecu: goto label_26c8ec;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c8f4u: goto label_26c8f4;
        case 0x26c8f8u: goto label_26c8f8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c900u: goto label_26c900;
        case 0x26c904u: goto label_26c904;
        case 0x26c908u: goto label_26c908;
        case 0x26c90cu: goto label_26c90c;
        case 0x26c910u: goto label_26c910;
        case 0x26c914u: goto label_26c914;
        case 0x26c918u: goto label_26c918;
        case 0x26c91cu: goto label_26c91c;
        case 0x26c920u: goto label_26c920;
        case 0x26c924u: goto label_26c924;
        case 0x26c928u: goto label_26c928;
        case 0x26c92cu: goto label_26c92c;
        case 0x26c930u: goto label_26c930;
        case 0x26c934u: goto label_26c934;
        case 0x26c938u: goto label_26c938;
        case 0x26c93cu: goto label_26c93c;
        case 0x26c940u: goto label_26c940;
        case 0x26c944u: goto label_26c944;
        case 0x26c948u: goto label_26c948;
        case 0x26c94cu: goto label_26c94c;
        case 0x26c950u: goto label_26c950;
        case 0x26c954u: goto label_26c954;
        case 0x26c958u: goto label_26c958;
        case 0x26c95cu: goto label_26c95c;
        case 0x26c960u: goto label_26c960;
        case 0x26c964u: goto label_26c964;
        case 0x26c968u: goto label_26c968;
        case 0x26c96cu: goto label_26c96c;
        case 0x26c970u: goto label_26c970;
        case 0x26c974u: goto label_26c974;
        case 0x26c978u: goto label_26c978;
        case 0x26c97cu: goto label_26c97c;
        case 0x26c980u: goto label_26c980;
        case 0x26c984u: goto label_26c984;
        case 0x26c988u: goto label_26c988;
        case 0x26c98cu: goto label_26c98c;
        case 0x26c990u: goto label_26c990;
        case 0x26c994u: goto label_26c994;
        case 0x26c998u: goto label_26c998;
        case 0x26c99cu: goto label_26c99c;
        case 0x26c9a0u: goto label_26c9a0;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9a8u: goto label_26c9a8;
        case 0x26c9acu: goto label_26c9ac;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9c0u: goto label_26c9c0;
        case 0x26c9c4u: goto label_26c9c4;
        case 0x26c9c8u: goto label_26c9c8;
        case 0x26c9ccu: goto label_26c9cc;
        case 0x26c9d0u: goto label_26c9d0;
        case 0x26c9d4u: goto label_26c9d4;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26c9dcu: goto label_26c9dc;
        case 0x26c9e0u: goto label_26c9e0;
        case 0x26c9e4u: goto label_26c9e4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26c9ecu: goto label_26c9ec;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9f4u: goto label_26c9f4;
        case 0x26c9f8u: goto label_26c9f8;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca08u: goto label_26ca08;
        case 0x26ca0cu: goto label_26ca0c;
        case 0x26ca10u: goto label_26ca10;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca18u: goto label_26ca18;
        case 0x26ca1cu: goto label_26ca1c;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca2cu: goto label_26ca2c;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca3cu: goto label_26ca3c;
        case 0x26ca40u: goto label_26ca40;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca48u: goto label_26ca48;
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca50u: goto label_26ca50;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca60u: goto label_26ca60;
        case 0x26ca64u: goto label_26ca64;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca6cu: goto label_26ca6c;
        case 0x26ca70u: goto label_26ca70;
        case 0x26ca74u: goto label_26ca74;
        case 0x26ca78u: goto label_26ca78;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca80u: goto label_26ca80;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca88u: goto label_26ca88;
        case 0x26ca8cu: goto label_26ca8c;
        case 0x26ca90u: goto label_26ca90;
        case 0x26ca94u: goto label_26ca94;
        case 0x26ca98u: goto label_26ca98;
        case 0x26ca9cu: goto label_26ca9c;
        case 0x26caa0u: goto label_26caa0;
        case 0x26caa4u: goto label_26caa4;
        case 0x26caa8u: goto label_26caa8;
        case 0x26caacu: goto label_26caac;
        case 0x26cab0u: goto label_26cab0;
        case 0x26cab4u: goto label_26cab4;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cabcu: goto label_26cabc;
        case 0x26cac0u: goto label_26cac0;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cac8u: goto label_26cac8;
        case 0x26caccu: goto label_26cacc;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad4u: goto label_26cad4;
        case 0x26cad8u: goto label_26cad8;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cae0u: goto label_26cae0;
        case 0x26cae4u: goto label_26cae4;
        case 0x26cae8u: goto label_26cae8;
        case 0x26caecu: goto label_26caec;
        case 0x26caf0u: goto label_26caf0;
        case 0x26caf4u: goto label_26caf4;
        case 0x26caf8u: goto label_26caf8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb08u: goto label_26cb08;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb14u: goto label_26cb14;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb1cu: goto label_26cb1c;
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb24u: goto label_26cb24;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb2cu: goto label_26cb2c;
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb34u: goto label_26cb34;
        case 0x26cb38u: goto label_26cb38;
        case 0x26cb3cu: goto label_26cb3c;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb4cu: goto label_26cb4c;
        case 0x26cb50u: goto label_26cb50;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cb58u: goto label_26cb58;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb60u: goto label_26cb60;
        case 0x26cb64u: goto label_26cb64;
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb74u: goto label_26cb74;
        case 0x26cb78u: goto label_26cb78;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb84u: goto label_26cb84;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb90u: goto label_26cb90;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cb98u: goto label_26cb98;
        case 0x26cb9cu: goto label_26cb9c;
        case 0x26cba0u: goto label_26cba0;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbb8u: goto label_26cbb8;
        case 0x26cbbcu: goto label_26cbbc;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbd8u: goto label_26cbd8;
        case 0x26cbdcu: goto label_26cbdc;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbecu: goto label_26cbec;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cbfcu: goto label_26cbfc;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc04u: goto label_26cc04;
        case 0x26cc08u: goto label_26cc08;
        case 0x26cc0cu: goto label_26cc0c;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc14u: goto label_26cc14;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc24u: goto label_26cc24;
        case 0x26cc28u: goto label_26cc28;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc30u: goto label_26cc30;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc3cu: goto label_26cc3c;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc44u: goto label_26cc44;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc4cu: goto label_26cc4c;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc58u: goto label_26cc58;
        case 0x26cc5cu: goto label_26cc5c;
        case 0x26cc60u: goto label_26cc60;
        case 0x26cc64u: goto label_26cc64;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc6cu: goto label_26cc6c;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc74u: goto label_26cc74;
        case 0x26cc78u: goto label_26cc78;
        case 0x26cc7cu: goto label_26cc7c;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc84u: goto label_26cc84;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc8cu: goto label_26cc8c;
        case 0x26cc90u: goto label_26cc90;
        case 0x26cc94u: goto label_26cc94;
        case 0x26cc98u: goto label_26cc98;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26cca0u: goto label_26cca0;
        case 0x26cca4u: goto label_26cca4;
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccacu: goto label_26ccac;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccb4u: goto label_26ccb4;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccbcu: goto label_26ccbc;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccc4u: goto label_26ccc4;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccccu: goto label_26cccc;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccd4u: goto label_26ccd4;
        case 0x26ccd8u: goto label_26ccd8;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26cce0u: goto label_26cce0;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cce8u: goto label_26cce8;
        case 0x26ccecu: goto label_26ccec;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26ccf8u: goto label_26ccf8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd00u: goto label_26cd00;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd0cu: goto label_26cd0c;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd14u: goto label_26cd14;
        case 0x26cd18u: goto label_26cd18;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd20u: goto label_26cd20;
        case 0x26cd24u: goto label_26cd24;
        case 0x26cd28u: goto label_26cd28;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd34u: goto label_26cd34;
        case 0x26cd38u: goto label_26cd38;
        case 0x26cd3cu: goto label_26cd3c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd44u: goto label_26cd44;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd4cu: goto label_26cd4c;
        case 0x26cd50u: goto label_26cd50;
        case 0x26cd54u: goto label_26cd54;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26cd60u: goto label_26cd60;
        case 0x26cd64u: goto label_26cd64;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd6cu: goto label_26cd6c;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd74u: goto label_26cd74;
        case 0x26cd78u: goto label_26cd78;
        case 0x26cd7cu: goto label_26cd7c;
        case 0x26cd80u: goto label_26cd80;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cd88u: goto label_26cd88;
        case 0x26cd8cu: goto label_26cd8c;
        case 0x26cd90u: goto label_26cd90;
        case 0x26cd94u: goto label_26cd94;
        case 0x26cd98u: goto label_26cd98;
        case 0x26cd9cu: goto label_26cd9c;
        case 0x26cda0u: goto label_26cda0;
        case 0x26cda4u: goto label_26cda4;
        case 0x26cda8u: goto label_26cda8;
        case 0x26cdacu: goto label_26cdac;
        case 0x26cdb0u: goto label_26cdb0;
        case 0x26cdb4u: goto label_26cdb4;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdbcu: goto label_26cdbc;
        case 0x26cdc0u: goto label_26cdc0;
        case 0x26cdc4u: goto label_26cdc4;
        case 0x26cdc8u: goto label_26cdc8;
        case 0x26cdccu: goto label_26cdcc;
        case 0x26cdd0u: goto label_26cdd0;
        case 0x26cdd4u: goto label_26cdd4;
        case 0x26cdd8u: goto label_26cdd8;
        case 0x26cddcu: goto label_26cddc;
        case 0x26cde0u: goto label_26cde0;
        case 0x26cde4u: goto label_26cde4;
        case 0x26cde8u: goto label_26cde8;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdf0u: goto label_26cdf0;
        case 0x26cdf4u: goto label_26cdf4;
        case 0x26cdf8u: goto label_26cdf8;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce00u: goto label_26ce00;
        case 0x26ce04u: goto label_26ce04;
        case 0x26ce08u: goto label_26ce08;
        case 0x26ce0cu: goto label_26ce0c;
        case 0x26ce10u: goto label_26ce10;
        case 0x26ce14u: goto label_26ce14;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce1cu: goto label_26ce1c;
        case 0x26ce20u: goto label_26ce20;
        case 0x26ce24u: goto label_26ce24;
        case 0x26ce28u: goto label_26ce28;
        case 0x26ce2cu: goto label_26ce2c;
        case 0x26ce30u: goto label_26ce30;
        case 0x26ce34u: goto label_26ce34;
        case 0x26ce38u: goto label_26ce38;
        case 0x26ce3cu: goto label_26ce3c;
        case 0x26ce40u: goto label_26ce40;
        case 0x26ce44u: goto label_26ce44;
        case 0x26ce48u: goto label_26ce48;
        case 0x26ce4cu: goto label_26ce4c;
        case 0x26ce50u: goto label_26ce50;
        case 0x26ce54u: goto label_26ce54;
        case 0x26ce58u: goto label_26ce58;
        case 0x26ce5cu: goto label_26ce5c;
        case 0x26ce60u: goto label_26ce60;
        case 0x26ce64u: goto label_26ce64;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce6cu: goto label_26ce6c;
        case 0x26ce70u: goto label_26ce70;
        case 0x26ce74u: goto label_26ce74;
        case 0x26ce78u: goto label_26ce78;
        case 0x26ce7cu: goto label_26ce7c;
        case 0x26ce80u: goto label_26ce80;
        case 0x26ce84u: goto label_26ce84;
        case 0x26ce88u: goto label_26ce88;
        case 0x26ce8cu: goto label_26ce8c;
        case 0x26ce90u: goto label_26ce90;
        case 0x26ce94u: goto label_26ce94;
        case 0x26ce98u: goto label_26ce98;
        case 0x26ce9cu: goto label_26ce9c;
        case 0x26cea0u: goto label_26cea0;
        case 0x26cea4u: goto label_26cea4;
        case 0x26cea8u: goto label_26cea8;
        case 0x26ceacu: goto label_26ceac;
        case 0x26ceb0u: goto label_26ceb0;
        case 0x26ceb4u: goto label_26ceb4;
        case 0x26ceb8u: goto label_26ceb8;
        case 0x26cebcu: goto label_26cebc;
        case 0x26cec0u: goto label_26cec0;
        case 0x26cec4u: goto label_26cec4;
        case 0x26cec8u: goto label_26cec8;
        case 0x26ceccu: goto label_26cecc;
        case 0x26ced0u: goto label_26ced0;
        case 0x26ced4u: goto label_26ced4;
        case 0x26ced8u: goto label_26ced8;
        case 0x26cedcu: goto label_26cedc;
        case 0x26cee0u: goto label_26cee0;
        case 0x26cee4u: goto label_26cee4;
        case 0x26cee8u: goto label_26cee8;
        case 0x26ceecu: goto label_26ceec;
        case 0x26cef0u: goto label_26cef0;
        case 0x26cef4u: goto label_26cef4;
        case 0x26cef8u: goto label_26cef8;
        case 0x26cefcu: goto label_26cefc;
        case 0x26cf00u: goto label_26cf00;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf08u: goto label_26cf08;
        case 0x26cf0cu: goto label_26cf0c;
        case 0x26cf10u: goto label_26cf10;
        case 0x26cf14u: goto label_26cf14;
        case 0x26cf18u: goto label_26cf18;
        case 0x26cf1cu: goto label_26cf1c;
        case 0x26cf20u: goto label_26cf20;
        case 0x26cf24u: goto label_26cf24;
        case 0x26cf28u: goto label_26cf28;
        case 0x26cf2cu: goto label_26cf2c;
        case 0x26cf30u: goto label_26cf30;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf38u: goto label_26cf38;
        case 0x26cf3cu: goto label_26cf3c;
        case 0x26cf40u: goto label_26cf40;
        case 0x26cf44u: goto label_26cf44;
        case 0x26cf48u: goto label_26cf48;
        case 0x26cf4cu: goto label_26cf4c;
        case 0x26cf50u: goto label_26cf50;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cf58u: goto label_26cf58;
        case 0x26cf5cu: goto label_26cf5c;
        case 0x26cf60u: goto label_26cf60;
        case 0x26cf64u: goto label_26cf64;
        case 0x26cf68u: goto label_26cf68;
        case 0x26cf6cu: goto label_26cf6c;
        case 0x26cf70u: goto label_26cf70;
        case 0x26cf74u: goto label_26cf74;
        case 0x26cf78u: goto label_26cf78;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cf80u: goto label_26cf80;
        case 0x26cf84u: goto label_26cf84;
        case 0x26cf88u: goto label_26cf88;
        case 0x26cf8cu: goto label_26cf8c;
        case 0x26cf90u: goto label_26cf90;
        case 0x26cf94u: goto label_26cf94;
        case 0x26cf98u: goto label_26cf98;
        case 0x26cf9cu: goto label_26cf9c;
        case 0x26cfa0u: goto label_26cfa0;
        case 0x26cfa4u: goto label_26cfa4;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cfacu: goto label_26cfac;
        case 0x26cfb0u: goto label_26cfb0;
        case 0x26cfb4u: goto label_26cfb4;
        case 0x26cfb8u: goto label_26cfb8;
        case 0x26cfbcu: goto label_26cfbc;
        case 0x26cfc0u: goto label_26cfc0;
        case 0x26cfc4u: goto label_26cfc4;
        case 0x26cfc8u: goto label_26cfc8;
        case 0x26cfccu: goto label_26cfcc;
        case 0x26cfd0u: goto label_26cfd0;
        case 0x26cfd4u: goto label_26cfd4;
        case 0x26cfd8u: goto label_26cfd8;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        case 0x26cff0u: goto label_26cff0;
        case 0x26cff4u: goto label_26cff4;
        case 0x26cff8u: goto label_26cff8;
        case 0x26cffcu: goto label_26cffc;
        case 0x26d000u: goto label_26d000;
        case 0x26d004u: goto label_26d004;
        case 0x26d008u: goto label_26d008;
        case 0x26d00cu: goto label_26d00c;
        case 0x26d010u: goto label_26d010;
        case 0x26d014u: goto label_26d014;
        case 0x26d018u: goto label_26d018;
        case 0x26d01cu: goto label_26d01c;
        case 0x26d020u: goto label_26d020;
        case 0x26d024u: goto label_26d024;
        case 0x26d028u: goto label_26d028;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d030u: goto label_26d030;
        case 0x26d034u: goto label_26d034;
        case 0x26d038u: goto label_26d038;
        case 0x26d03cu: goto label_26d03c;
        case 0x26d040u: goto label_26d040;
        case 0x26d044u: goto label_26d044;
        case 0x26d048u: goto label_26d048;
        case 0x26d04cu: goto label_26d04c;
        case 0x26d050u: goto label_26d050;
        case 0x26d054u: goto label_26d054;
        case 0x26d058u: goto label_26d058;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d060u: goto label_26d060;
        case 0x26d064u: goto label_26d064;
        case 0x26d068u: goto label_26d068;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d070u: goto label_26d070;
        case 0x26d074u: goto label_26d074;
        case 0x26d078u: goto label_26d078;
        case 0x26d07cu: goto label_26d07c;
        case 0x26d080u: goto label_26d080;
        case 0x26d084u: goto label_26d084;
        case 0x26d088u: goto label_26d088;
        case 0x26d08cu: goto label_26d08c;
        case 0x26d090u: goto label_26d090;
        case 0x26d094u: goto label_26d094;
        case 0x26d098u: goto label_26d098;
        case 0x26d09cu: goto label_26d09c;
        case 0x26d0a0u: goto label_26d0a0;
        case 0x26d0a4u: goto label_26d0a4;
        case 0x26d0a8u: goto label_26d0a8;
        case 0x26d0acu: goto label_26d0ac;
        case 0x26d0b0u: goto label_26d0b0;
        case 0x26d0b4u: goto label_26d0b4;
        case 0x26d0b8u: goto label_26d0b8;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d0c0u: goto label_26d0c0;
        case 0x26d0c4u: goto label_26d0c4;
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0ccu: goto label_26d0cc;
        case 0x26d0d0u: goto label_26d0d0;
        case 0x26d0d4u: goto label_26d0d4;
        case 0x26d0d8u: goto label_26d0d8;
        case 0x26d0dcu: goto label_26d0dc;
        case 0x26d0e0u: goto label_26d0e0;
        case 0x26d0e4u: goto label_26d0e4;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d0ecu: goto label_26d0ec;
        case 0x26d0f0u: goto label_26d0f0;
        case 0x26d0f4u: goto label_26d0f4;
        case 0x26d0f8u: goto label_26d0f8;
        case 0x26d0fcu: goto label_26d0fc;
        case 0x26d100u: goto label_26d100;
        case 0x26d104u: goto label_26d104;
        case 0x26d108u: goto label_26d108;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d110u: goto label_26d110;
        case 0x26d114u: goto label_26d114;
        case 0x26d118u: goto label_26d118;
        case 0x26d11cu: goto label_26d11c;
        case 0x26d120u: goto label_26d120;
        case 0x26d124u: goto label_26d124;
        case 0x26d128u: goto label_26d128;
        case 0x26d12cu: goto label_26d12c;
        case 0x26d130u: goto label_26d130;
        case 0x26d134u: goto label_26d134;
        case 0x26d138u: goto label_26d138;
        case 0x26d13cu: goto label_26d13c;
        case 0x26d140u: goto label_26d140;
        case 0x26d144u: goto label_26d144;
        case 0x26d148u: goto label_26d148;
        case 0x26d14cu: goto label_26d14c;
        case 0x26d150u: goto label_26d150;
        case 0x26d154u: goto label_26d154;
        case 0x26d158u: goto label_26d158;
        case 0x26d15cu: goto label_26d15c;
        case 0x26d160u: goto label_26d160;
        case 0x26d164u: goto label_26d164;
        case 0x26d168u: goto label_26d168;
        case 0x26d16cu: goto label_26d16c;
        case 0x26d170u: goto label_26d170;
        case 0x26d174u: goto label_26d174;
        case 0x26d178u: goto label_26d178;
        case 0x26d17cu: goto label_26d17c;
        case 0x26d180u: goto label_26d180;
        case 0x26d184u: goto label_26d184;
        case 0x26d188u: goto label_26d188;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        case 0x26d370u: goto label_26d370;
        case 0x26d374u: goto label_26d374;
        case 0x26d378u: goto label_26d378;
        case 0x26d37cu: goto label_26d37c;
        case 0x26d380u: goto label_26d380;
        case 0x26d384u: goto label_26d384;
        case 0x26d388u: goto label_26d388;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d390u: goto label_26d390;
        case 0x26d394u: goto label_26d394;
        case 0x26d398u: goto label_26d398;
        case 0x26d39cu: goto label_26d39c;
        case 0x26d3a0u: goto label_26d3a0;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3a8u: goto label_26d3a8;
        case 0x26d3acu: goto label_26d3ac;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3c0u: goto label_26d3c0;
        case 0x26d3c4u: goto label_26d3c4;
        case 0x26d3c8u: goto label_26d3c8;
        case 0x26d3ccu: goto label_26d3cc;
        case 0x26d3d0u: goto label_26d3d0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d510u: goto label_26d510;
        case 0x26d514u: goto label_26d514;
        case 0x26d518u: goto label_26d518;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d520u: goto label_26d520;
        case 0x26d524u: goto label_26d524;
        case 0x26d528u: goto label_26d528;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d530u: goto label_26d530;
        case 0x26d534u: goto label_26d534;
        case 0x26d538u: goto label_26d538;
        case 0x26d53cu: goto label_26d53c;
        case 0x26d540u: goto label_26d540;
        case 0x26d544u: goto label_26d544;
        case 0x26d548u: goto label_26d548;
        case 0x26d54cu: goto label_26d54c;
        case 0x26d550u: goto label_26d550;
        case 0x26d554u: goto label_26d554;
        case 0x26d558u: goto label_26d558;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d560u: goto label_26d560;
        case 0x26d564u: goto label_26d564;
        case 0x26d568u: goto label_26d568;
        case 0x26d56cu: goto label_26d56c;
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6ccu: goto label_26d6cc;
        case 0x26d6d0u: goto label_26d6d0;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6d8u: goto label_26d6d8;
        case 0x26d6dcu: goto label_26d6dc;
        case 0x26d6e0u: goto label_26d6e0;
        case 0x26d6e4u: goto label_26d6e4;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d6f4u: goto label_26d6f4;
        case 0x26d6f8u: goto label_26d6f8;
        case 0x26d6fcu: goto label_26d6fc;
        case 0x26d700u: goto label_26d700;
        case 0x26d704u: goto label_26d704;
        case 0x26d708u: goto label_26d708;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d710u: goto label_26d710;
        case 0x26d714u: goto label_26d714;
        case 0x26d718u: goto label_26d718;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d720u: goto label_26d720;
        case 0x26d724u: goto label_26d724;
        case 0x26d728u: goto label_26d728;
        case 0x26d72cu: goto label_26d72c;
        case 0x26d730u: goto label_26d730;
        case 0x26d734u: goto label_26d734;
        case 0x26d738u: goto label_26d738;
        case 0x26d73cu: goto label_26d73c;
        case 0x26d740u: goto label_26d740;
        case 0x26d744u: goto label_26d744;
        case 0x26d748u: goto label_26d748;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d750u: goto label_26d750;
        case 0x26d754u: goto label_26d754;
        case 0x26d758u: goto label_26d758;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d760u: goto label_26d760;
        case 0x26d764u: goto label_26d764;
        case 0x26d768u: goto label_26d768;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d770u: goto label_26d770;
        case 0x26d774u: goto label_26d774;
        case 0x26d778u: goto label_26d778;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d780u: goto label_26d780;
        case 0x26d784u: goto label_26d784;
        case 0x26d788u: goto label_26d788;
        case 0x26d78cu: goto label_26d78c;
        case 0x26d790u: goto label_26d790;
        case 0x26d794u: goto label_26d794;
        case 0x26d798u: goto label_26d798;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7b0u: goto label_26d7b0;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7b8u: goto label_26d7b8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7c8u: goto label_26d7c8;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7e0u: goto label_26d7e0;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7e8u: goto label_26d7e8;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7f0u: goto label_26d7f0;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d800u: goto label_26d800;
        case 0x26d804u: goto label_26d804;
        case 0x26d808u: goto label_26d808;
        case 0x26d80cu: goto label_26d80c;
        case 0x26d810u: goto label_26d810;
        case 0x26d814u: goto label_26d814;
        case 0x26d818u: goto label_26d818;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d820u: goto label_26d820;
        case 0x26d824u: goto label_26d824;
        case 0x26d828u: goto label_26d828;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d830u: goto label_26d830;
        case 0x26d834u: goto label_26d834;
        case 0x26d838u: goto label_26d838;
        case 0x26d83cu: goto label_26d83c;
        case 0x26d840u: goto label_26d840;
        case 0x26d844u: goto label_26d844;
        case 0x26d848u: goto label_26d848;
        case 0x26d84cu: goto label_26d84c;
        case 0x26d850u: goto label_26d850;
        case 0x26d854u: goto label_26d854;
        case 0x26d858u: goto label_26d858;
        case 0x26d85cu: goto label_26d85c;
        case 0x26d860u: goto label_26d860;
        case 0x26d864u: goto label_26d864;
        case 0x26d868u: goto label_26d868;
        case 0x26d86cu: goto label_26d86c;
        case 0x26d870u: goto label_26d870;
        case 0x26d874u: goto label_26d874;
        case 0x26d878u: goto label_26d878;
        case 0x26d87cu: goto label_26d87c;
        case 0x26d880u: goto label_26d880;
        case 0x26d884u: goto label_26d884;
        case 0x26d888u: goto label_26d888;
        case 0x26d88cu: goto label_26d88c;
        case 0x26d890u: goto label_26d890;
        case 0x26d894u: goto label_26d894;
        case 0x26d898u: goto label_26d898;
        case 0x26d89cu: goto label_26d89c;
        case 0x26d8a0u: goto label_26d8a0;
        case 0x26d8a4u: goto label_26d8a4;
        case 0x26d8a8u: goto label_26d8a8;
        case 0x26d8acu: goto label_26d8ac;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8b4u: goto label_26d8b4;
        case 0x26d8b8u: goto label_26d8b8;
        case 0x26d8bcu: goto label_26d8bc;
        case 0x26d8c0u: goto label_26d8c0;
        case 0x26d8c4u: goto label_26d8c4;
        case 0x26d8c8u: goto label_26d8c8;
        case 0x26d8ccu: goto label_26d8cc;
        case 0x26d8d0u: goto label_26d8d0;
        case 0x26d8d4u: goto label_26d8d4;
        case 0x26d8d8u: goto label_26d8d8;
        case 0x26d8dcu: goto label_26d8dc;
        case 0x26d8e0u: goto label_26d8e0;
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8e8u: goto label_26d8e8;
        case 0x26d8ecu: goto label_26d8ec;
        case 0x26d8f0u: goto label_26d8f0;
        case 0x26d8f4u: goto label_26d8f4;
        case 0x26d8f8u: goto label_26d8f8;
        case 0x26d8fcu: goto label_26d8fc;
        case 0x26d900u: goto label_26d900;
        case 0x26d904u: goto label_26d904;
        case 0x26d908u: goto label_26d908;
        case 0x26d90cu: goto label_26d90c;
        case 0x26d910u: goto label_26d910;
        case 0x26d914u: goto label_26d914;
        case 0x26d918u: goto label_26d918;
        case 0x26d91cu: goto label_26d91c;
        case 0x26d920u: goto label_26d920;
        case 0x26d924u: goto label_26d924;
        case 0x26d928u: goto label_26d928;
        case 0x26d92cu: goto label_26d92c;
        case 0x26d930u: goto label_26d930;
        case 0x26d934u: goto label_26d934;
        case 0x26d938u: goto label_26d938;
        case 0x26d93cu: goto label_26d93c;
        case 0x26d940u: goto label_26d940;
        case 0x26d944u: goto label_26d944;
        case 0x26d948u: goto label_26d948;
        case 0x26d94cu: goto label_26d94c;
        case 0x26d950u: goto label_26d950;
        case 0x26d954u: goto label_26d954;
        case 0x26d958u: goto label_26d958;
        case 0x26d95cu: goto label_26d95c;
        case 0x26d960u: goto label_26d960;
        case 0x26d964u: goto label_26d964;
        case 0x26d968u: goto label_26d968;
        case 0x26d96cu: goto label_26d96c;
        case 0x26d970u: goto label_26d970;
        case 0x26d974u: goto label_26d974;
        case 0x26d978u: goto label_26d978;
        case 0x26d97cu: goto label_26d97c;
        case 0x26d980u: goto label_26d980;
        case 0x26d984u: goto label_26d984;
        case 0x26d988u: goto label_26d988;
        case 0x26d98cu: goto label_26d98c;
        case 0x26d990u: goto label_26d990;
        case 0x26d994u: goto label_26d994;
        case 0x26d998u: goto label_26d998;
        case 0x26d99cu: goto label_26d99c;
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9a4u: goto label_26d9a4;
        case 0x26d9a8u: goto label_26d9a8;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9b4u: goto label_26d9b4;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9bcu: goto label_26d9bc;
        case 0x26d9c0u: goto label_26d9c0;
        case 0x26d9c4u: goto label_26d9c4;
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9ccu: goto label_26d9cc;
        case 0x26d9d0u: goto label_26d9d0;
        case 0x26d9d4u: goto label_26d9d4;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9dcu: goto label_26d9dc;
        case 0x26d9e0u: goto label_26d9e0;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9e8u: goto label_26d9e8;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26d9f0u: goto label_26d9f0;
        case 0x26d9f4u: goto label_26d9f4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26d9fcu: goto label_26d9fc;
        case 0x26da00u: goto label_26da00;
        case 0x26da04u: goto label_26da04;
        case 0x26da08u: goto label_26da08;
        case 0x26da0cu: goto label_26da0c;
        case 0x26da10u: goto label_26da10;
        case 0x26da14u: goto label_26da14;
        case 0x26da18u: goto label_26da18;
        case 0x26da1cu: goto label_26da1c;
        case 0x26da20u: goto label_26da20;
        case 0x26da24u: goto label_26da24;
        case 0x26da28u: goto label_26da28;
        case 0x26da2cu: goto label_26da2c;
        case 0x26da30u: goto label_26da30;
        case 0x26da34u: goto label_26da34;
        case 0x26da38u: goto label_26da38;
        case 0x26da3cu: goto label_26da3c;
        case 0x26da40u: goto label_26da40;
        case 0x26da44u: goto label_26da44;
        case 0x26da48u: goto label_26da48;
        case 0x26da4cu: goto label_26da4c;
        case 0x26da50u: goto label_26da50;
        case 0x26da54u: goto label_26da54;
        case 0x26da58u: goto label_26da58;
        case 0x26da5cu: goto label_26da5c;
        case 0x26da60u: goto label_26da60;
        case 0x26da64u: goto label_26da64;
        case 0x26da68u: goto label_26da68;
        case 0x26da6cu: goto label_26da6c;
        case 0x26da70u: goto label_26da70;
        case 0x26da74u: goto label_26da74;
        case 0x26da78u: goto label_26da78;
        case 0x26da7cu: goto label_26da7c;
        case 0x26da80u: goto label_26da80;
        case 0x26da84u: goto label_26da84;
        case 0x26da88u: goto label_26da88;
        case 0x26da8cu: goto label_26da8c;
        case 0x26da90u: goto label_26da90;
        case 0x26da94u: goto label_26da94;
        case 0x26da98u: goto label_26da98;
        case 0x26da9cu: goto label_26da9c;
        case 0x26daa0u: goto label_26daa0;
        case 0x26daa4u: goto label_26daa4;
        case 0x26daa8u: goto label_26daa8;
        case 0x26daacu: goto label_26daac;
        case 0x26dab0u: goto label_26dab0;
        case 0x26dab4u: goto label_26dab4;
        case 0x26dab8u: goto label_26dab8;
        case 0x26dabcu: goto label_26dabc;
        case 0x26dac0u: goto label_26dac0;
        case 0x26dac4u: goto label_26dac4;
        case 0x26dac8u: goto label_26dac8;
        case 0x26daccu: goto label_26dacc;
        case 0x26dad0u: goto label_26dad0;
        case 0x26dad4u: goto label_26dad4;
        case 0x26dad8u: goto label_26dad8;
        case 0x26dadcu: goto label_26dadc;
        case 0x26dae0u: goto label_26dae0;
        case 0x26dae4u: goto label_26dae4;
        case 0x26dae8u: goto label_26dae8;
        case 0x26daecu: goto label_26daec;
        case 0x26daf0u: goto label_26daf0;
        case 0x26daf4u: goto label_26daf4;
        case 0x26daf8u: goto label_26daf8;
        case 0x26dafcu: goto label_26dafc;
        default: break;
    }

    ctx->pc = 0x26bef0u;

label_26bef0:
    // 0x26bef0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x26bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_26bef4:
    // 0x26bef4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x26bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_26bef8:
    // 0x26bef8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x26bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_26befc:
    // 0x26befc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26befcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bf00:
    // 0x26bf00: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x26bf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_26bf04:
    // 0x26bf04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26bf04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26bf08:
    // 0x26bf08: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x26bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_26bf0c:
    // 0x26bf0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26bf0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26bf10:
    // 0x26bf10: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x26bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_26bf14:
    // 0x26bf14: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x26bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_26bf18:
    // 0x26bf18: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x26bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_26bf1c:
    // 0x26bf1c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x26bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_26bf20:
    // 0x26bf20: 0xc0b6dac  jal         func_2DB6B0
label_26bf24:
    if (ctx->pc == 0x26BF24u) {
        ctx->pc = 0x26BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF20u;
        // 0x26bf24: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF28u;
        goto label_26bf28;
    }
    ctx->pc = 0x26BF20u;
    SET_GPR_U32(ctx, 31, 0x26BF28u);
    ctx->pc = 0x26BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF20u;
    // 0x26bf24: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26BF20u, 0x26BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF28u;
label_26bf28:
    // 0x26bf28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26bf28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bf2c:
    // 0x26bf2c: 0x240403be  addiu       $a0, $zero, 0x3BE
    ctx->pc = 0x26bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
label_26bf30:
    // 0x26bf30: 0xc0c3ea6  jal         func_30FA98
label_26bf34:
    if (ctx->pc == 0x26BF34u) {
        ctx->pc = 0x26BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF30u;
        // 0x26bf34: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF38u;
        goto label_26bf38;
    }
    ctx->pc = 0x26BF30u;
    SET_GPR_U32(ctx, 31, 0x26BF38u);
    ctx->pc = 0x26BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF30u;
    // 0x26bf34: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x26BF30u, 0x26BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF38u;
label_26bf38:
    // 0x26bf38: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26bf38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bf3c:
    // 0x26bf3c: 0x52c006e6  beql        $s6, $zero, . + 4 + (0x6E6 << 2)
label_26bf40:
    if (ctx->pc == 0x26BF40u) {
        ctx->pc = 0x26BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF3Cu;
        // 0x26bf40: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF44u;
        goto label_26bf44;
    }
    ctx->pc = 0x26BF3Cu;
    {
        const bool branch_taken_0x26bf3c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf3c) {
            ctx->pc = 0x26BF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BF3Cu;
            // 0x26bf40: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DAD8u;
            goto label_26dad8;
        }
    }
    ctx->pc = 0x26BF44u;
label_26bf44:
    // 0x26bf44: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26bf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_26bf48:
    // 0x26bf48: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_26bf4c:
    // 0x26bf4c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x26bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_26bf50:
    // 0x26bf50: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x26bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_26bf54:
    // 0x26bf54: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x26bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_26bf58:
    // 0x26bf58: 0xc0b6dac  jal         func_2DB6B0
label_26bf5c:
    if (ctx->pc == 0x26BF5Cu) {
        ctx->pc = 0x26BF60u;
        goto label_26bf60;
    }
    ctx->pc = 0x26BF58u;
    SET_GPR_U32(ctx, 31, 0x26BF60u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26BF58u, 0x26BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF60u;
label_26bf60:
    // 0x26bf60: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26bf64:
    // 0x26bf64: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x26bf64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_26bf68:
    // 0x26bf68: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
label_26bf6c:
    if (ctx->pc == 0x26BF6Cu) {
        ctx->pc = 0x26BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF68u;
        // 0x26bf6c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF70u;
        goto label_26bf70;
    }
    ctx->pc = 0x26BF68u;
    {
        const bool branch_taken_0x26bf68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF68u;
        // 0x26bf6c: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf68) {
            ctx->pc = 0x26BF8Cu;
            goto label_26bf8c;
        }
    }
    ctx->pc = 0x26BF70u;
label_26bf70:
    // 0x26bf70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bf74:
    // 0x26bf74: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26bf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_26bf78:
    // 0x26bf78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bf7c:
    // 0x26bf7c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x26bf7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_26bf80:
    // 0x26bf80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bf84:
    // 0x26bf84: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x26bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_26bf88:
    // 0x26bf88: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x26bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bf8c:
    // 0x26bf8c: 0x2e22001c  sltiu       $v0, $s1, 0x1C
    ctx->pc = 0x26bf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
label_26bf90:
    // 0x26bf90: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26bf94:
    // 0x26bf94: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26bf94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26bf98:
    // 0x26bf98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26bf9c:
    // 0x26bf9c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x26bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_26bfa0:
    // 0x26bfa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26bfa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26bfa4:
    // 0x26bfa4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x26bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_26bfa8:
    // 0x26bfa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26bfac:
    if (ctx->pc == 0x26BFACu) {
        ctx->pc = 0x26BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFA8u;
        // 0x26bfac: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFB0u;
        goto label_26bfb0;
    }
    ctx->pc = 0x26BFA8u;
    {
        const bool branch_taken_0x26bfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFA8u;
        // 0x26bfac: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfa8) {
            ctx->pc = 0x26BFCCu;
            goto label_26bfcc;
        }
    }
    ctx->pc = 0x26BFB0u;
label_26bfb0:
    // 0x26bfb0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26bfb4:
    // 0x26bfb4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_26bfb8:
    // 0x26bfb8: 0x24425640  addiu       $v0, $v0, 0x5640
    ctx->pc = 0x26bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22080));
label_26bfbc:
    // 0x26bfbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26bfc0:
    // 0x26bfc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26bfc4:
    // 0x26bfc4: 0x800008  jr          $a0
label_26bfc8:
    if (ctx->pc == 0x26BFC8u) {
        ctx->pc = 0x26BFCCu;
        goto label_26bfcc;
    }
    ctx->pc = 0x26BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BFCCu: goto label_26bfcc;
            case 0x26C018u: goto label_26c018;
            case 0x26C068u: goto label_26c068;
            case 0x26C1E8u: goto label_26c1e8;
            case 0x26C268u: goto label_26c268;
            case 0x26C410u: goto label_26c410;
            case 0x26C544u: goto label_26c544;
            case 0x26C694u: goto label_26c694;
            case 0x26C7CCu: goto label_26c7cc;
            case 0x26C998u: goto label_26c998;
            case 0x26C9E0u: goto label_26c9e0;
            case 0x26CA28u: goto label_26ca28;
            case 0x26CAE0u: goto label_26cae0;
            case 0x26CB8Cu: goto label_26cb8c;
            case 0x26CC4Cu: goto label_26cc4c;
            case 0x26CC94u: goto label_26cc94;
            case 0x26CE5Cu: goto label_26ce5c;
            case 0x26CF64u: goto label_26cf64;
            case 0x26D014u: goto label_26d014;
            case 0x26D12Cu: goto label_26d12c;
            case 0x26D1C8u: goto label_26d1c8;
            case 0x26D358u: goto label_26d358;
            case 0x26D3D8u: goto label_26d3d8;
            case 0x26D42Cu: goto label_26d42c;
            case 0x26D4C8u: goto label_26d4c8;
            case 0x26D724u: goto label_26d724;
            case 0x26D99Cu: goto label_26d99c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26BFCCu;
label_26bfcc:
    // 0x26bfcc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26bfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26bfd0:
    // 0x26bfd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26bfd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26bfd4:
    // 0x26bfd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bfd8:
    // 0x26bfd8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26bfdc:
    // 0x26bfdc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26bfe0:
    // 0x26bfe0: 0xc07e804  jal         func_1FA010
label_26bfe4:
    if (ctx->pc == 0x26BFE4u) {
        ctx->pc = 0x26BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFE0u;
        // 0x26bfe4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFE8u;
        goto label_26bfe8;
    }
    ctx->pc = 0x26BFE0u;
    SET_GPR_U32(ctx, 31, 0x26BFE8u);
    ctx->pc = 0x26BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFE0u;
    // 0x26bfe4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26BFE0u, 0x26BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFE8u;
label_26bfe8:
    // 0x26bfe8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26bfec:
    // 0x26bfec: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26bff0:
    if (ctx->pc == 0x26BFF0u) {
        ctx->pc = 0x26BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFECu;
        // 0x26bff0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFF4u;
        goto label_26bff4;
    }
    ctx->pc = 0x26BFECu;
    {
        const bool branch_taken_0x26bfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26bfec) {
            ctx->pc = 0x26BFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BFECu;
            // 0x26bff0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C00Cu;
            goto label_26c00c;
        }
    }
    ctx->pc = 0x26BFF4u;
label_26bff4:
    // 0x26bff4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26bff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26bff8:
    // 0x26bff8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26bff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26bffc:
    // 0x26bffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c000:
    // 0x26c000: 0x0  nop
    ctx->pc = 0x26c000u;
    // NOP
label_26c004:
    // 0x26c004: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c008:
    // 0x26c008: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c00c:
    // 0x26c00c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c010:
    // 0x26c010: 0x10000517  b           . + 4 + (0x517 << 2)
label_26c014:
    if (ctx->pc == 0x26C014u) {
        ctx->pc = 0x26C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C010u;
        // 0x26c014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C018u;
        goto label_26c018;
    }
    ctx->pc = 0x26C010u;
    {
        const bool branch_taken_0x26c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C010u;
        // 0x26c014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c010) {
            ctx->pc = 0x26D470u;
            goto label_26d470;
        }
    }
    ctx->pc = 0x26C018u;
label_26c018:
    // 0x26c018: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26c018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26c01c:
    // 0x26c01c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c020:
    // 0x26c020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c024:
    // 0x26c024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c028:
    // 0x26c028: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c02c:
    // 0x26c02c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x26c02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c030:
    // 0x26c030: 0xc051e62  jal         func_147988
label_26c034:
    if (ctx->pc == 0x26C034u) {
        ctx->pc = 0x26C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C030u;
        // 0x26c034: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C038u;
        goto label_26c038;
    }
    ctx->pc = 0x26C030u;
    SET_GPR_U32(ctx, 31, 0x26C038u);
    ctx->pc = 0x26C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C030u;
    // 0x26c034: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26C030u, 0x26C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C038u;
label_26c038:
    // 0x26c038: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26c03c:
    // 0x26c03c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c040:
    // 0x26c040: 0xc0c28ac  jal         func_30A2B0
label_26c044:
    if (ctx->pc == 0x26C044u) {
        ctx->pc = 0x26C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C040u;
        // 0x26c044: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C048u;
        goto label_26c048;
    }
    ctx->pc = 0x26C040u;
    SET_GPR_U32(ctx, 31, 0x26C048u);
    ctx->pc = 0x26C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C040u;
    // 0x26c044: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C040u, 0x26C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C048u;
label_26c048:
    // 0x26c048: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26c048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26c04c:
    // 0x26c04c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26c04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26c050:
    // 0x26c050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c054:
    // 0x26c054: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26c054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26c058:
    // 0x26c058: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c05c:
    // 0x26c05c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c060:
    // 0x26c060: 0x10000510  b           . + 4 + (0x510 << 2)
label_26c064:
    if (ctx->pc == 0x26C064u) {
        ctx->pc = 0x26C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C060u;
        // 0x26c064: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C068u;
        goto label_26c068;
    }
    ctx->pc = 0x26C060u;
    {
        const bool branch_taken_0x26c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C060u;
        // 0x26c064: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c060) {
            ctx->pc = 0x26D4A4u;
            goto label_26d4a4;
        }
    }
    ctx->pc = 0x26C068u;
label_26c068:
    // 0x26c068: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26c068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26c06c:
    // 0x26c06c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c070:
    // 0x26c070: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c074:
    // 0x26c074: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c078:
    // 0x26c078: 0xc07e804  jal         func_1FA010
label_26c07c:
    if (ctx->pc == 0x26C07Cu) {
        ctx->pc = 0x26C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C078u;
        // 0x26c07c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C080u;
        goto label_26c080;
    }
    ctx->pc = 0x26C078u;
    SET_GPR_U32(ctx, 31, 0x26C080u);
    ctx->pc = 0x26C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C078u;
    // 0x26c07c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C078u, 0x26C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C080u;
label_26c080:
    // 0x26c080: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c084:
    // 0x26c084: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_26c088:
    if (ctx->pc == 0x26C088u) {
        ctx->pc = 0x26C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C084u;
        // 0x26c088: 0x3a250003  xori        $a1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C08Cu;
        goto label_26c08c;
    }
    ctx->pc = 0x26C084u;
    {
        const bool branch_taken_0x26c084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C084u;
        // 0x26c088: 0x3a250003  xori        $a1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c084) {
            ctx->pc = 0x26C0A0u;
            goto label_26c0a0;
        }
    }
    ctx->pc = 0x26C08Cu;
label_26c08c:
    // 0x26c08c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c090:
    // 0x26c090: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c094:
    // 0x26c094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c098:
    // 0x26c098: 0x0  nop
    ctx->pc = 0x26c098u;
    // NOP
label_26c09c:
    // 0x26c09c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c0a0:
    // 0x26c0a0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c0a4:
    // 0x26c0a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26c0a8:
    // 0x26c0a8: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x26c0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
label_26c0ac:
    // 0x26c0ac: 0x3a230002  xori        $v1, $s1, 0x2
    ctx->pc = 0x26c0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
label_26c0b0:
    // 0x26c0b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c0b4:
    if (ctx->pc == 0x26C0B4u) {
        ctx->pc = 0x26C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0B0u;
        // 0x26c0b4: 0xc5200a  movz        $a0, $a2, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0B8u;
        goto label_26c0b8;
    }
    ctx->pc = 0x26C0B0u;
    {
        const bool branch_taken_0x26c0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0B0u;
        // 0x26c0b4: 0xc5200a  movz        $a0, $a2, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0b0) {
            ctx->pc = 0x26C0C4u;
            goto label_26c0c4;
        }
    }
    ctx->pc = 0x26C0B8u;
label_26c0b8:
    // 0x26c0b8: 0xc3200a  movz        $a0, $a2, $v1
    ctx->pc = 0x26c0b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_26c0bc:
    // 0x26c0bc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c0c0:
    // 0x26c0c0: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x26c0c0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_26c0c4:
    // 0x26c0c4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26c0c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26c0c8:
    // 0x26c0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c0cc:
    // 0x26c0cc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x26c0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_26c0d0:
    // 0x26c0d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c0d4:
    if (ctx->pc == 0x26C0D4u) {
        ctx->pc = 0x26C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0D0u;
        // 0x26c0d4: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0D8u;
        goto label_26c0d8;
    }
    ctx->pc = 0x26C0D0u;
    {
        const bool branch_taken_0x26c0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0D0u;
        // 0x26c0d4: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0d0) {
            ctx->pc = 0x26C0E0u;
            goto label_26c0e0;
        }
    }
    ctx->pc = 0x26C0D8u;
label_26c0d8:
    // 0x26c0d8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x26c0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26c0dc:
    // 0x26c0dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c0e0:
    // 0x26c0e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x26c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_26c0e4:
    // 0x26c0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26c0e8:
    if (ctx->pc == 0x26C0E8u) {
        ctx->pc = 0x26C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0E4u;
        // 0x26c0e8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0ECu;
        goto label_26c0ec;
    }
    ctx->pc = 0x26C0E4u;
    {
        const bool branch_taken_0x26c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0E4u;
        // 0x26c0e8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0e4) {
            ctx->pc = 0x26C0FCu;
            goto label_26c0fc;
        }
    }
    ctx->pc = 0x26C0ECu;
label_26c0ec:
    // 0x26c0ec: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x26c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26c0f0:
    // 0x26c0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26c0f4:
    // 0x26c0f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26c0f8:
    if (ctx->pc == 0x26C0F8u) {
        ctx->pc = 0x26C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0F4u;
        // 0x26c0f8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0FCu;
        goto label_26c0fc;
    }
    ctx->pc = 0x26C0F4u;
    {
        const bool branch_taken_0x26c0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0F4u;
        // 0x26c0f8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0f4) {
            ctx->pc = 0x26C100u;
            goto label_26c100;
        }
    }
    ctx->pc = 0x26C0FCu;
label_26c0fc:
    // 0x26c0fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c100:
    // 0x26c100: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26c104:
    if (ctx->pc == 0x26C104u) {
        ctx->pc = 0x26C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C100u;
        // 0x26c104: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C108u;
        goto label_26c108;
    }
    ctx->pc = 0x26C100u;
    {
        const bool branch_taken_0x26c100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C100u;
        // 0x26c104: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c100) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C108u;
label_26c108:
    // 0x26c108: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c10c:
    // 0x26c10c: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
label_26c110:
    if (ctx->pc == 0x26C110u) {
        ctx->pc = 0x26C114u;
        goto label_26c114;
    }
    ctx->pc = 0x26C10Cu;
    {
        const bool branch_taken_0x26c10c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c10c) {
            ctx->pc = 0x26C168u;
            goto label_26c168;
        }
    }
    ctx->pc = 0x26C114u;
label_26c114:
    // 0x26c114: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c118:
    // 0x26c118: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26c118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26c11c:
    // 0x26c11c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c120:
    // 0x26c120: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26c120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c124:
    // 0x26c124: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c128:
    // 0x26c128: 0x1000000f  b           . + 4 + (0xF << 2)
label_26c12c:
    if (ctx->pc == 0x26C12Cu) {
        ctx->pc = 0x26C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C128u;
        // 0x26c12c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C130u;
        goto label_26c130;
    }
    ctx->pc = 0x26C128u;
    {
        const bool branch_taken_0x26c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C128u;
        // 0x26c12c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c128) {
            ctx->pc = 0x26C168u;
            goto label_26c168;
        }
    }
    ctx->pc = 0x26C130u;
label_26c130:
    // 0x26c130: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26c130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26c134:
    // 0x26c134: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26c134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26c138:
    // 0x26c138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c13c:
    // 0x26c13c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c140:
    // 0x26c140: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26c140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26c144:
    // 0x26c144: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c148:
    // 0x26c148: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c14c:
    // 0x26c14c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c150:
    // 0x26c150: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26c150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c154:
    // 0x26c154: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c158:
    // 0x26c158: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26c158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26c15c:
    // 0x26c15c: 0xc0c28ac  jal         func_30A2B0
label_26c160:
    if (ctx->pc == 0x26C160u) {
        ctx->pc = 0x26C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C15Cu;
        // 0x26c160: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C164u;
        goto label_26c164;
    }
    ctx->pc = 0x26C15Cu;
    SET_GPR_U32(ctx, 31, 0x26C164u);
    ctx->pc = 0x26C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C15Cu;
    // 0x26c160: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C15Cu, 0x26C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C164u;
label_26c164:
    // 0x26c164: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26c164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c168:
    // 0x26c168: 0xc0b6dac  jal         func_2DB6B0
label_26c16c:
    if (ctx->pc == 0x26C16Cu) {
        ctx->pc = 0x26C170u;
        goto label_26c170;
    }
    ctx->pc = 0x26C168u;
    SET_GPR_U32(ctx, 31, 0x26C170u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26C168u, 0x26C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C170u;
label_26c170:
    // 0x26c170: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x26c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c174:
    // 0x26c174: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x26c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_26c178:
    // 0x26c178: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x26c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_26c17c:
    // 0x26c17c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26c17cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26c180:
    // 0x26c180: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x26c180u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26c184:
    // 0x26c184: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26c184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26c188:
    // 0x26c188: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c18c:
    // 0x26c18c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26c18cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26c190:
    // 0x26c190: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c194:
    // 0x26c194: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x26c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c198:
    // 0x26c198: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x26c198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26c19c:
    // 0x26c19c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x26c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c1a0:
    // 0x26c1a0: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x26c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c1a4:
    // 0x26c1a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26c1a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26c1a8:
    // 0x26c1a8: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26c1a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_26c1ac:
    // 0x26c1ac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26c1b0:
    // 0x26c1b0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x26c1b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26c1b4:
    // 0x26c1b4: 0xc07e060  jal         func_1F8180
label_26c1b8:
    if (ctx->pc == 0x26C1B8u) {
        ctx->pc = 0x26C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1B4u;
        // 0x26c1b8: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1BCu;
        goto label_26c1bc;
    }
    ctx->pc = 0x26C1B4u;
    SET_GPR_U32(ctx, 31, 0x26C1BCu);
    ctx->pc = 0x26C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1B4u;
    // 0x26c1b8: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26C1B4u, 0x26C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1BCu;
label_26c1bc:
    // 0x26c1bc: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_26c1c0:
    // 0x26c1c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26c1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26c1c4:
    // 0x26c1c4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26c1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26c1c8:
    // 0x26c1c8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x26c1c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_26c1cc:
    // 0x26c1cc: 0xc0b687e  jal         func_2DA1F8
label_26c1d0:
    if (ctx->pc == 0x26C1D0u) {
        ctx->pc = 0x26C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1CCu;
        // 0x26c1d0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1D4u;
        goto label_26c1d4;
    }
    ctx->pc = 0x26C1CCu;
    SET_GPR_U32(ctx, 31, 0x26C1D4u);
    ctx->pc = 0x26C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1CCu;
    // 0x26c1d0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26C1CCu, 0x26C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1D4u;
label_26c1d4:
    // 0x26c1d4: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c1d8:
    // 0x26c1d8: 0xc07df52  jal         func_1F7D48
label_26c1dc:
    if (ctx->pc == 0x26C1DCu) {
        ctx->pc = 0x26C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1D8u;
        // 0x26c1dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1E0u;
        goto label_26c1e0;
    }
    ctx->pc = 0x26C1D8u;
    SET_GPR_U32(ctx, 31, 0x26C1E0u);
    ctx->pc = 0x26C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1D8u;
    // 0x26c1dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26C1D8u, 0x26C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1E0u;
label_26c1e0:
    // 0x26c1e0: 0x100005e5  b           . + 4 + (0x5E5 << 2)
label_26c1e4:
    if (ctx->pc == 0x26C1E4u) {
        ctx->pc = 0x26C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1E0u;
        // 0x26c1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1E8u;
        goto label_26c1e8;
    }
    ctx->pc = 0x26C1E0u;
    {
        const bool branch_taken_0x26c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1E0u;
        // 0x26c1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1e0) {
            ctx->pc = 0x26D978u;
            goto label_26d978;
        }
    }
    ctx->pc = 0x26C1E8u;
label_26c1e8:
    // 0x26c1e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26c1ec:
    // 0x26c1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c1f0:
    // 0x26c1f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c1f4:
    // 0x26c1f4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c1f8:
    // 0x26c1f8: 0xc07e804  jal         func_1FA010
label_26c1fc:
    if (ctx->pc == 0x26C1FCu) {
        ctx->pc = 0x26C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1F8u;
        // 0x26c1fc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C200u;
        goto label_26c200;
    }
    ctx->pc = 0x26C1F8u;
    SET_GPR_U32(ctx, 31, 0x26C200u);
    ctx->pc = 0x26C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1F8u;
    // 0x26c1fc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C1F8u, 0x26C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C200u;
label_26c200:
    // 0x26c200: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c204:
    // 0x26c204: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26c208:
    if (ctx->pc == 0x26C208u) {
        ctx->pc = 0x26C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C204u;
        // 0x26c208: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C20Cu;
        goto label_26c20c;
    }
    ctx->pc = 0x26C204u;
    {
        const bool branch_taken_0x26c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c204) {
            ctx->pc = 0x26C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C204u;
            // 0x26c208: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C224u;
            goto label_26c224;
        }
    }
    ctx->pc = 0x26C20Cu;
label_26c20c:
    // 0x26c20c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c210:
    // 0x26c210: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c214:
    // 0x26c214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c218:
    // 0x26c218: 0x0  nop
    ctx->pc = 0x26c218u;
    // NOP
label_26c21c:
    // 0x26c21c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c220:
    // 0x26c220: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c224:
    // 0x26c224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c228:
    // 0x26c228: 0xc051e62  jal         func_147988
label_26c22c:
    if (ctx->pc == 0x26C22Cu) {
        ctx->pc = 0x26C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C228u;
        // 0x26c22c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C230u;
        goto label_26c230;
    }
    ctx->pc = 0x26C228u;
    SET_GPR_U32(ctx, 31, 0x26C230u);
    ctx->pc = 0x26C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C228u;
    // 0x26c22c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26C228u, 0x26C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C230u;
label_26c230:
    // 0x26c230: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26c234:
    // 0x26c234: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c238:
    // 0x26c238: 0xc0c28ac  jal         func_30A2B0
label_26c23c:
    if (ctx->pc == 0x26C23Cu) {
        ctx->pc = 0x26C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C238u;
        // 0x26c23c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C240u;
        goto label_26c240;
    }
    ctx->pc = 0x26C238u;
    SET_GPR_U32(ctx, 31, 0x26C240u);
    ctx->pc = 0x26C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C238u;
    // 0x26c23c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C238u, 0x26C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C240u;
label_26c240:
    // 0x26c240: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26c240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26c244:
    // 0x26c244: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c248:
    // 0x26c248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c24c:
    // 0x26c24c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c250:
    // 0x26c250: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26c250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26c254:
    // 0x26c254: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c258:
    // 0x26c258: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26c258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26c25c:
    // 0x26c25c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c260:
    // 0x26c260: 0x10000495  b           . + 4 + (0x495 << 2)
label_26c264:
    if (ctx->pc == 0x26C264u) {
        ctx->pc = 0x26C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C260u;
        // 0x26c264: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C268u;
        goto label_26c268;
    }
    ctx->pc = 0x26C260u;
    {
        const bool branch_taken_0x26c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C260u;
        // 0x26c264: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c260) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26C268u;
label_26c268:
    // 0x26c268: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c26c:
    // 0x26c26c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c26cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c270:
    // 0x26c270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c274:
    // 0x26c274: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c278:
    // 0x26c278: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c27c:
    // 0x26c27c: 0xc07e804  jal         func_1FA010
label_26c280:
    if (ctx->pc == 0x26C280u) {
        ctx->pc = 0x26C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C27Cu;
        // 0x26c280: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C284u;
        goto label_26c284;
    }
    ctx->pc = 0x26C27Cu;
    SET_GPR_U32(ctx, 31, 0x26C284u);
    ctx->pc = 0x26C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C27Cu;
    // 0x26c280: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C27Cu, 0x26C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C284u;
label_26c284:
    // 0x26c284: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c288:
    // 0x26c288: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26c28c:
    if (ctx->pc == 0x26C28Cu) {
        ctx->pc = 0x26C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C288u;
        // 0x26c28c: 0x920317c3  lbu         $v1, 0x17C3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C290u;
        goto label_26c290;
    }
    ctx->pc = 0x26C288u;
    {
        const bool branch_taken_0x26c288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c288) {
            ctx->pc = 0x26C28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C288u;
            // 0x26c28c: 0x920317c3  lbu         $v1, 0x17C3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C2A4u;
            goto label_26c2a4;
        }
    }
    ctx->pc = 0x26C290u;
label_26c290:
    // 0x26c290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26c294:
    // 0x26c294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c298:
    // 0x26c298: 0x0  nop
    ctx->pc = 0x26c298u;
    // NOP
label_26c29c:
    // 0x26c29c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c2a0:
    // 0x26c2a0: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x26c2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
label_26c2a4:
    // 0x26c2a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26c2a8:
    // 0x26c2a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c2ac:
    // 0x26c2ac: 0x920502b4  lbu         $a1, 0x2B4($s0)
    ctx->pc = 0x26c2acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26c2b0:
    // 0x26c2b0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x26c2b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_26c2b4:
    // 0x26c2b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26c2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c2b8:
    // 0x26c2b8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x26c2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_26c2bc:
    // 0x26c2bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c2c0:
    if (ctx->pc == 0x26C2C0u) {
        ctx->pc = 0x26C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2BCu;
        // 0x26c2c0: 0xafa50090  sw          $a1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2C4u;
        goto label_26c2c4;
    }
    ctx->pc = 0x26C2BCu;
    {
        const bool branch_taken_0x26c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2BCu;
        // 0x26c2c0: 0xafa50090  sw          $a1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2bc) {
            ctx->pc = 0x26C2CCu;
            goto label_26c2cc;
        }
    }
    ctx->pc = 0x26C2C4u;
label_26c2c4:
    // 0x26c2c4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x26c2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_26c2c8:
    // 0x26c2c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26c2c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c2cc:
    // 0x26c2cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x26c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26c2d0:
    // 0x26c2d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26c2d4:
    if (ctx->pc == 0x26C2D4u) {
        ctx->pc = 0x26C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2D0u;
        // 0x26c2d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2D8u;
        goto label_26c2d8;
    }
    ctx->pc = 0x26C2D0u;
    {
        const bool branch_taken_0x26c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2D0u;
        // 0x26c2d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2d0) {
            ctx->pc = 0x26C2E8u;
            goto label_26c2e8;
        }
    }
    ctx->pc = 0x26C2D8u;
label_26c2d8:
    // 0x26c2d8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x26c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26c2dc:
    // 0x26c2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26c2e0:
    // 0x26c2e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_26c2e4:
    if (ctx->pc == 0x26C2E4u) {
        ctx->pc = 0x26C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2E0u;
        // 0x26c2e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2E8u;
        goto label_26c2e8;
    }
    ctx->pc = 0x26C2E0u;
    {
        const bool branch_taken_0x26c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2E0u;
        // 0x26c2e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2e0) {
            ctx->pc = 0x26C2ECu;
            goto label_26c2ec;
        }
    }
    ctx->pc = 0x26C2E8u;
label_26c2e8:
    // 0x26c2e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c2ec:
    // 0x26c2ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26c2f0:
    if (ctx->pc == 0x26C2F0u) {
        ctx->pc = 0x26C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2ECu;
        // 0x26c2f0: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2F4u;
        goto label_26c2f4;
    }
    ctx->pc = 0x26C2ECu;
    {
        const bool branch_taken_0x26c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2ECu;
        // 0x26c2f0: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2ec) {
            ctx->pc = 0x26C31Cu;
            goto label_26c31c;
        }
    }
    ctx->pc = 0x26C2F4u;
label_26c2f4:
    // 0x26c2f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c2f8:
    // 0x26c2f8: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
label_26c2fc:
    if (ctx->pc == 0x26C2FCu) {
        ctx->pc = 0x26C300u;
        goto label_26c300;
    }
    ctx->pc = 0x26C2F8u;
    {
        const bool branch_taken_0x26c2f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c2f8) {
            ctx->pc = 0x26C354u;
            goto label_26c354;
        }
    }
    ctx->pc = 0x26C300u;
label_26c300:
    // 0x26c300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c304:
    // 0x26c304: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26c304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26c308:
    // 0x26c308: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c30c:
    // 0x26c30c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26c30cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c310:
    // 0x26c310: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c314:
    // 0x26c314: 0x1000000f  b           . + 4 + (0xF << 2)
label_26c318:
    if (ctx->pc == 0x26C318u) {
        ctx->pc = 0x26C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C314u;
        // 0x26c318: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C31Cu;
        goto label_26c31c;
    }
    ctx->pc = 0x26C314u;
    {
        const bool branch_taken_0x26c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C314u;
        // 0x26c318: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c314) {
            ctx->pc = 0x26C354u;
            goto label_26c354;
        }
    }
    ctx->pc = 0x26C31Cu;
label_26c31c:
    // 0x26c31c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26c31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26c320:
    // 0x26c320: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26c320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26c324:
    // 0x26c324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c328:
    // 0x26c328: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c32c:
    // 0x26c32c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26c32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26c330:
    // 0x26c330: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c334:
    // 0x26c334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c338:
    // 0x26c338: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c33c:
    // 0x26c33c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26c33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c340:
    // 0x26c340: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c344:
    // 0x26c344: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26c344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26c348:
    // 0x26c348: 0xc0c28ac  jal         func_30A2B0
label_26c34c:
    if (ctx->pc == 0x26C34Cu) {
        ctx->pc = 0x26C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C348u;
        // 0x26c34c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C350u;
        goto label_26c350;
    }
    ctx->pc = 0x26C348u;
    SET_GPR_U32(ctx, 31, 0x26C350u);
    ctx->pc = 0x26C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C348u;
    // 0x26c34c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C348u, 0x26C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C350u;
label_26c350:
    // 0x26c350: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26c350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c354:
    // 0x26c354: 0xc0b6dac  jal         func_2DB6B0
label_26c358:
    if (ctx->pc == 0x26C358u) {
        ctx->pc = 0x26C35Cu;
        goto label_26c35c;
    }
    ctx->pc = 0x26C354u;
    SET_GPR_U32(ctx, 31, 0x26C35Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26C354u, 0x26C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C35Cu;
label_26c35c:
    // 0x26c35c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x26c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c360:
    // 0x26c360: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x26c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_26c364:
    // 0x26c364: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26c368:
    // 0x26c368: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26c368u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26c36c:
    // 0x26c36c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x26c36cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26c370:
    // 0x26c370: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26c370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26c374:
    // 0x26c374: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26c374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c378:
    // 0x26c378: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26c378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26c37c:
    // 0x26c37c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26c37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c380:
    // 0x26c380: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c384:
    // 0x26c384: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x26c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c388:
    // 0x26c388: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c38c:
    // 0x26c38c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26c38cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26c390:
    // 0x26c390: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26c390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_26c394:
    // 0x26c394: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26c398:
    // 0x26c398: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x26c398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26c39c:
    // 0x26c39c: 0xc07e060  jal         func_1F8180
label_26c3a0:
    if (ctx->pc == 0x26C3A0u) {
        ctx->pc = 0x26C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C39Cu;
        // 0x26c3a0: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3A4u;
        goto label_26c3a4;
    }
    ctx->pc = 0x26C39Cu;
    SET_GPR_U32(ctx, 31, 0x26C3A4u);
    ctx->pc = 0x26C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C39Cu;
    // 0x26c3a0: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26C39Cu, 0x26C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3A4u;
label_26c3a4:
    // 0x26c3a4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_26c3a8:
    // 0x26c3a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26c3a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26c3ac:
    // 0x26c3ac: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26c3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26c3b0:
    // 0x26c3b0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x26c3b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_26c3b4:
    // 0x26c3b4: 0xc0b687e  jal         func_2DA1F8
label_26c3b8:
    if (ctx->pc == 0x26C3B8u) {
        ctx->pc = 0x26C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3B4u;
        // 0x26c3b8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3BCu;
        goto label_26c3bc;
    }
    ctx->pc = 0x26C3B4u;
    SET_GPR_U32(ctx, 31, 0x26C3BCu);
    ctx->pc = 0x26C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3B4u;
    // 0x26c3b8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26C3B4u, 0x26C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3BCu;
label_26c3bc:
    // 0x26c3bc: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c3c0:
    // 0x26c3c0: 0xc07df52  jal         func_1F7D48
label_26c3c4:
    if (ctx->pc == 0x26C3C4u) {
        ctx->pc = 0x26C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3C0u;
        // 0x26c3c4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3C8u;
        goto label_26c3c8;
    }
    ctx->pc = 0x26C3C0u;
    SET_GPR_U32(ctx, 31, 0x26C3C8u);
    ctx->pc = 0x26C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3C0u;
    // 0x26c3c4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26C3C0u, 0x26C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3C8u;
label_26c3c8:
    // 0x26c3c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c3cc:
    // 0x26c3cc: 0xc051e62  jal         func_147988
label_26c3d0:
    if (ctx->pc == 0x26C3D0u) {
        ctx->pc = 0x26C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3CCu;
        // 0x26c3d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3D4u;
        goto label_26c3d4;
    }
    ctx->pc = 0x26C3CCu;
    SET_GPR_U32(ctx, 31, 0x26C3D4u);
    ctx->pc = 0x26C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3CCu;
    // 0x26c3d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26C3CCu, 0x26C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3D4u;
label_26c3d4:
    // 0x26c3d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26c3d8:
    // 0x26c3d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c3dc:
    // 0x26c3dc: 0xc0c28ac  jal         func_30A2B0
label_26c3e0:
    if (ctx->pc == 0x26C3E0u) {
        ctx->pc = 0x26C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3DCu;
        // 0x26c3e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3E4u;
        goto label_26c3e4;
    }
    ctx->pc = 0x26C3DCu;
    SET_GPR_U32(ctx, 31, 0x26C3E4u);
    ctx->pc = 0x26C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3DCu;
    // 0x26c3e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C3DCu, 0x26C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3E4u;
label_26c3e4:
    // 0x26c3e4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_26c3e8:
    // 0x26c3e8: 0x2444fd90  addiu       $a0, $v0, -0x270
    ctx->pc = 0x26c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
label_26c3ec:
    // 0x26c3ec: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x26c3ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_26c3f0:
    // 0x26c3f0: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_26c3f4:
    if (ctx->pc == 0x26C3F4u) {
        ctx->pc = 0x26C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3F0u;
        // 0x26c3f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3F8u;
        goto label_26c3f8;
    }
    ctx->pc = 0x26C3F0u;
    {
        const bool branch_taken_0x26c3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3F0u;
        // 0x26c3f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f0) {
            ctx->pc = 0x26C51Cu;
            goto label_26c51c;
        }
    }
    ctx->pc = 0x26C3F8u;
label_26c3f8:
    // 0x26c3f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_26c3fc:
    // 0x26c3fc: 0x244256b0  addiu       $v0, $v0, 0x56B0
    ctx->pc = 0x26c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22192));
label_26c400:
    // 0x26c400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c404:
    // 0x26c404: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26c408:
    // 0x26c408: 0x800008  jr          $a0
label_26c40c:
    if (ctx->pc == 0x26C40Cu) {
        ctx->pc = 0x26C410u;
        goto label_26c410;
    }
    ctx->pc = 0x26C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C51Cu: goto label_26c51c;
            case 0x26C524u: goto label_26c524;
            case 0x26C52Cu: goto label_26c52c;
            case 0x26C534u: goto label_26c534;
            case 0x26C53Cu: goto label_26c53c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C410u;
label_26c410:
    // 0x26c410: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c414:
    // 0x26c414: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c418:
    // 0x26c418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c41c:
    // 0x26c41c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c420:
    // 0x26c420: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c424:
    // 0x26c424: 0xc07e804  jal         func_1FA010
label_26c428:
    if (ctx->pc == 0x26C428u) {
        ctx->pc = 0x26C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C424u;
        // 0x26c428: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C42Cu;
        goto label_26c42c;
    }
    ctx->pc = 0x26C424u;
    SET_GPR_U32(ctx, 31, 0x26C42Cu);
    ctx->pc = 0x26C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C424u;
    // 0x26c428: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C424u, 0x26C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C42Cu;
label_26c42c:
    // 0x26c42c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c430:
    // 0x26c430: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26c434:
    if (ctx->pc == 0x26C434u) {
        ctx->pc = 0x26C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C430u;
        // 0x26c434: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C438u;
        goto label_26c438;
    }
    ctx->pc = 0x26C430u;
    {
        const bool branch_taken_0x26c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c430) {
            ctx->pc = 0x26C434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C430u;
            // 0x26c434: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C44Cu;
            goto label_26c44c;
        }
    }
    ctx->pc = 0x26C438u;
label_26c438:
    // 0x26c438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26c43c:
    // 0x26c43c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c440:
    // 0x26c440: 0x0  nop
    ctx->pc = 0x26c440u;
    // NOP
label_26c444:
    // 0x26c444: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c448:
    // 0x26c448: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x26c448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26c44c:
    // 0x26c44c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c450:
    // 0x26c450: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x26c450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26c454:
    // 0x26c454: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_26c458:
    if (ctx->pc == 0x26C458u) {
        ctx->pc = 0x26C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C454u;
        // 0x26c458: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C45Cu;
        goto label_26c45c;
    }
    ctx->pc = 0x26C454u;
    {
        const bool branch_taken_0x26c454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C454u;
        // 0x26c458: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c454) {
            ctx->pc = 0x26C468u;
            goto label_26c468;
        }
    }
    ctx->pc = 0x26C45Cu;
label_26c45c:
    // 0x26c45c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26c460:
    // 0x26c460: 0x10000002  b           . + 4 + (0x2 << 2)
label_26c464:
    if (ctx->pc == 0x26C464u) {
        ctx->pc = 0x26C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C460u;
        // 0x26c464: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C468u;
        goto label_26c468;
    }
    ctx->pc = 0x26C460u;
    {
        const bool branch_taken_0x26c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C460u;
        // 0x26c464: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c460) {
            ctx->pc = 0x26C46Cu;
            goto label_26c46c;
        }
    }
    ctx->pc = 0x26C468u;
label_26c468:
    // 0x26c468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c46c:
    // 0x26c46c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26c470:
    if (ctx->pc == 0x26C470u) {
        ctx->pc = 0x26C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C46Cu;
        // 0x26c470: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C474u;
        goto label_26c474;
    }
    ctx->pc = 0x26C46Cu;
    {
        const bool branch_taken_0x26c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C46Cu;
        // 0x26c470: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c46c) {
            ctx->pc = 0x26C49Cu;
            goto label_26c49c;
        }
    }
    ctx->pc = 0x26C474u;
label_26c474:
    // 0x26c474: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c478:
    // 0x26c478: 0x52620017  beql        $s3, $v0, . + 4 + (0x17 << 2)
label_26c47c:
    if (ctx->pc == 0x26C47Cu) {
        ctx->pc = 0x26C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C478u;
        // 0x26c47c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C480u;
        goto label_26c480;
    }
    ctx->pc = 0x26C478u;
    {
        const bool branch_taken_0x26c478 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c478) {
            ctx->pc = 0x26C47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C478u;
            // 0x26c47c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C4D8u;
            goto label_26c4d8;
        }
    }
    ctx->pc = 0x26C480u;
label_26c480:
    // 0x26c480: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c484:
    // 0x26c484: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26c484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26c488:
    // 0x26c488: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c48c:
    // 0x26c48c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26c48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c490:
    // 0x26c490: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c494:
    // 0x26c494: 0x1000000f  b           . + 4 + (0xF << 2)
label_26c498:
    if (ctx->pc == 0x26C498u) {
        ctx->pc = 0x26C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C494u;
        // 0x26c498: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C49Cu;
        goto label_26c49c;
    }
    ctx->pc = 0x26C494u;
    {
        const bool branch_taken_0x26c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C494u;
        // 0x26c498: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c494) {
            ctx->pc = 0x26C4D4u;
            goto label_26c4d4;
        }
    }
    ctx->pc = 0x26C49Cu;
label_26c49c:
    // 0x26c49c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26c4a0:
    // 0x26c4a0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26c4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26c4a4:
    // 0x26c4a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c4a8:
    // 0x26c4a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c4ac:
    // 0x26c4ac: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26c4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26c4b0:
    // 0x26c4b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c4b4:
    // 0x26c4b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c4b8:
    // 0x26c4b8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c4bc:
    // 0x26c4bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26c4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c4c0:
    // 0x26c4c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c4c4:
    // 0x26c4c4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26c4c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26c4c8:
    // 0x26c4c8: 0xc0c28ac  jal         func_30A2B0
label_26c4cc:
    if (ctx->pc == 0x26C4CCu) {
        ctx->pc = 0x26C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4C8u;
        // 0x26c4cc: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4D0u;
        goto label_26c4d0;
    }
    ctx->pc = 0x26C4C8u;
    SET_GPR_U32(ctx, 31, 0x26C4D0u);
    ctx->pc = 0x26C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4C8u;
    // 0x26c4cc: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C4C8u, 0x26C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4D0u;
label_26c4d0:
    // 0x26c4d0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26c4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c4d4:
    // 0x26c4d4: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c4d8:
    // 0x26c4d8: 0xc051e62  jal         func_147988
label_26c4dc:
    if (ctx->pc == 0x26C4DCu) {
        ctx->pc = 0x26C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4D8u;
        // 0x26c4dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4E0u;
        goto label_26c4e0;
    }
    ctx->pc = 0x26C4D8u;
    SET_GPR_U32(ctx, 31, 0x26C4E0u);
    ctx->pc = 0x26C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4D8u;
    // 0x26c4dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26C4D8u, 0x26C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4E0u;
label_26c4e0:
    // 0x26c4e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26c4e4:
    // 0x26c4e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c4e8:
    // 0x26c4e8: 0xc0c28ac  jal         func_30A2B0
label_26c4ec:
    if (ctx->pc == 0x26C4ECu) {
        ctx->pc = 0x26C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4E8u;
        // 0x26c4ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4F0u;
        goto label_26c4f0;
    }
    ctx->pc = 0x26C4E8u;
    SET_GPR_U32(ctx, 31, 0x26C4F0u);
    ctx->pc = 0x26C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4E8u;
    // 0x26c4ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C4E8u, 0x26C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4F0u;
label_26c4f0:
    // 0x26c4f0: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_26c4f4:
    // 0x26c4f4: 0x2444fd90  addiu       $a0, $v0, -0x270
    ctx->pc = 0x26c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
label_26c4f8:
    // 0x26c4f8: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x26c4f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_26c4fc:
    // 0x26c4fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_26c500:
    if (ctx->pc == 0x26C500u) {
        ctx->pc = 0x26C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4FCu;
        // 0x26c500: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C504u;
        goto label_26c504;
    }
    ctx->pc = 0x26C4FCu;
    {
        const bool branch_taken_0x26c4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4FCu;
        // 0x26c500: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4fc) {
            ctx->pc = 0x26C51Cu;
            goto label_26c51c;
        }
    }
    ctx->pc = 0x26C504u;
label_26c504:
    // 0x26c504: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26c504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_26c508:
    // 0x26c508: 0x244256d0  addiu       $v0, $v0, 0x56D0
    ctx->pc = 0x26c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22224));
label_26c50c:
    // 0x26c50c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c510:
    // 0x26c510: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26c510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26c514:
    // 0x26c514: 0x800008  jr          $a0
label_26c518:
    if (ctx->pc == 0x26C518u) {
        ctx->pc = 0x26C51Cu;
        goto label_26c51c;
    }
    ctx->pc = 0x26C514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C51Cu: goto label_26c51c;
            case 0x26C524u: goto label_26c524;
            case 0x26C52Cu: goto label_26c52c;
            case 0x26C534u: goto label_26c534;
            case 0x26C53Cu: goto label_26c53c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C514u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C51Cu;
label_26c51c:
    // 0x26c51c: 0x1000054d  b           . + 4 + (0x54D << 2)
label_26c520:
    if (ctx->pc == 0x26C520u) {
        ctx->pc = 0x26C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C51Cu;
        // 0x26c520: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C524u;
        goto label_26c524;
    }
    ctx->pc = 0x26C51Cu;
    {
        const bool branch_taken_0x26c51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C51Cu;
        // 0x26c520: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c51c) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26C524u;
label_26c524:
    // 0x26c524: 0x1000054b  b           . + 4 + (0x54B << 2)
label_26c528:
    if (ctx->pc == 0x26C528u) {
        ctx->pc = 0x26C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C524u;
        // 0x26c528: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C52Cu;
        goto label_26c52c;
    }
    ctx->pc = 0x26C524u;
    {
        const bool branch_taken_0x26c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C524u;
        // 0x26c528: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c524) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26C52Cu;
label_26c52c:
    // 0x26c52c: 0x10000549  b           . + 4 + (0x549 << 2)
label_26c530:
    if (ctx->pc == 0x26C530u) {
        ctx->pc = 0x26C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C52Cu;
        // 0x26c530: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C534u;
        goto label_26c534;
    }
    ctx->pc = 0x26C52Cu;
    {
        const bool branch_taken_0x26c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C52Cu;
        // 0x26c530: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c52c) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26C534u;
label_26c534:
    // 0x26c534: 0x10000547  b           . + 4 + (0x547 << 2)
label_26c538:
    if (ctx->pc == 0x26C538u) {
        ctx->pc = 0x26C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C534u;
        // 0x26c538: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C53Cu;
        goto label_26c53c;
    }
    ctx->pc = 0x26C534u;
    {
        const bool branch_taken_0x26c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C534u;
        // 0x26c538: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c534) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26C53Cu;
label_26c53c:
    // 0x26c53c: 0x10000545  b           . + 4 + (0x545 << 2)
label_26c540:
    if (ctx->pc == 0x26C540u) {
        ctx->pc = 0x26C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C53Cu;
        // 0x26c540: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C544u;
        goto label_26c544;
    }
    ctx->pc = 0x26C53Cu;
    {
        const bool branch_taken_0x26c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C53Cu;
        // 0x26c540: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c53c) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26C544u;
label_26c544:
    // 0x26c544: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26c544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26c548:
    // 0x26c548: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26c548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26c54c:
    // 0x26c54c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c550:
    // 0x26c550: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c554:
    // 0x26c554: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26c558:
    // 0x26c558: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c55c:
    // 0x26c55c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c560:
    // 0x26c560: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c564:
    // 0x26c564: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26c564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c568:
    // 0x26c568: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c56c:
    // 0x26c56c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26c56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26c570:
    // 0x26c570: 0xc0c28ac  jal         func_30A2B0
label_26c574:
    if (ctx->pc == 0x26C574u) {
        ctx->pc = 0x26C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C570u;
        // 0x26c574: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C578u;
        goto label_26c578;
    }
    ctx->pc = 0x26C570u;
    SET_GPR_U32(ctx, 31, 0x26C578u);
    ctx->pc = 0x26C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C570u;
    // 0x26c574: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C570u, 0x26C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C578u;
label_26c578:
    // 0x26c578: 0x8e030734  lw          $v1, 0x734($s0)
    ctx->pc = 0x26c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
label_26c57c:
    // 0x26c57c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_26c580:
    if (ctx->pc == 0x26C580u) {
        ctx->pc = 0x26C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C57Cu;
        // 0x26c580: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C584u;
        goto label_26c584;
    }
    ctx->pc = 0x26C57Cu;
    {
        const bool branch_taken_0x26c57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C57Cu;
        // 0x26c580: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c57c) {
            ctx->pc = 0x26C5D0u;
            goto label_26c5d0;
        }
    }
    ctx->pc = 0x26C584u;
label_26c584:
    // 0x26c584: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x26c584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_26c588:
    // 0x26c588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c58c:
    if (ctx->pc == 0x26C58Cu) {
        ctx->pc = 0x26C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C588u;
        // 0x26c58c: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C590u;
        goto label_26c590;
    }
    ctx->pc = 0x26C588u;
    {
        const bool branch_taken_0x26c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C588u;
        // 0x26c58c: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c588) {
            ctx->pc = 0x26C59Cu;
            goto label_26c59c;
        }
    }
    ctx->pc = 0x26C590u;
label_26c590:
    // 0x26c590: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_26c594:
    // 0x26c594: 0x10000002  b           . + 4 + (0x2 << 2)
label_26c598:
    if (ctx->pc == 0x26C598u) {
        ctx->pc = 0x26C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C594u;
        // 0x26c598: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C59Cu;
        goto label_26c59c;
    }
    ctx->pc = 0x26C594u;
    {
        const bool branch_taken_0x26c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C594u;
        // 0x26c598: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c594) {
            ctx->pc = 0x26C5A0u;
            goto label_26c5a0;
        }
    }
    ctx->pc = 0x26C59Cu;
label_26c59c:
    // 0x26c59c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c5a0:
    // 0x26c5a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26c5a4:
    if (ctx->pc == 0x26C5A4u) {
        ctx->pc = 0x26C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5A0u;
        // 0x26c5a4: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5A8u;
        goto label_26c5a8;
    }
    ctx->pc = 0x26C5A0u;
    {
        const bool branch_taken_0x26c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5A0u;
        // 0x26c5a4: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5a0) {
            ctx->pc = 0x26C5CCu;
            goto label_26c5cc;
        }
    }
    ctx->pc = 0x26C5A8u;
label_26c5a8:
    // 0x26c5a8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c5ac:
    // 0x26c5ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c5b0:
    // 0x26c5b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c5b4:
    // 0x26c5b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c5b8:
    // 0x26c5b8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26c5bc:
    // 0x26c5bc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26c5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26c5c0:
    // 0x26c5c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c5c4:
    // 0x26c5c4: 0xc0c28ac  jal         func_30A2B0
label_26c5c8:
    if (ctx->pc == 0x26C5C8u) {
        ctx->pc = 0x26C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5C4u;
        // 0x26c5c8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5CCu;
        goto label_26c5cc;
    }
    ctx->pc = 0x26C5C4u;
    SET_GPR_U32(ctx, 31, 0x26C5CCu);
    ctx->pc = 0x26C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5C4u;
    // 0x26c5c8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C5C4u, 0x26C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5CCu;
label_26c5cc:
    // 0x26c5cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c5d0:
    // 0x26c5d0: 0xc07e804  jal         func_1FA010
label_26c5d4:
    if (ctx->pc == 0x26C5D4u) {
        ctx->pc = 0x26C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5D0u;
        // 0x26c5d4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5D8u;
        goto label_26c5d8;
    }
    ctx->pc = 0x26C5D0u;
    SET_GPR_U32(ctx, 31, 0x26C5D8u);
    ctx->pc = 0x26C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5D0u;
    // 0x26c5d4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C5D0u, 0x26C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5D8u;
label_26c5d8:
    // 0x26c5d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c5dc:
    // 0x26c5dc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c5e0:
    // 0x26c5e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c5e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c5e4:
    // 0x26c5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c5e8:
    // 0x26c5e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_26c5ec:
    if (ctx->pc == 0x26C5ECu) {
        ctx->pc = 0x26C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5E8u;
        // 0x26c5ec: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5F0u;
        goto label_26c5f0;
    }
    ctx->pc = 0x26C5E8u;
    {
        const bool branch_taken_0x26c5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5E8u;
        // 0x26c5ec: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5e8) {
            ctx->pc = 0x26C5F8u;
            goto label_26c5f8;
        }
    }
    ctx->pc = 0x26C5F0u;
label_26c5f0:
    // 0x26c5f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26c5f4:
    // 0x26c5f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c5f8:
    // 0x26c5f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26c5fc:
    if (ctx->pc == 0x26C5FCu) {
        ctx->pc = 0x26C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5F8u;
        // 0x26c5fc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C600u;
        goto label_26c600;
    }
    ctx->pc = 0x26C5F8u;
    {
        const bool branch_taken_0x26c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5F8u;
        // 0x26c5fc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5f8) {
            ctx->pc = 0x26C61Cu;
            goto label_26c61c;
        }
    }
    ctx->pc = 0x26C600u;
label_26c600:
    // 0x26c600: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26c600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26c604:
    // 0x26c604: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x26c604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26c608:
    // 0x26c608: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x26c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_26c60c:
    // 0x26c60c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c610:
    // 0x26c610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26c610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26c614:
    // 0x26c614: 0x800008  jr          $a0
label_26c618:
    if (ctx->pc == 0x26C618u) {
        ctx->pc = 0x26C61Cu;
        goto label_26c61c;
    }
    ctx->pc = 0x26C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C61Cu: goto label_26c61c;
            case 0x26C624u: goto label_26c624;
            case 0x26C638u: goto label_26c638;
            case 0x26C64Cu: goto label_26c64c;
            case 0x26C660u: goto label_26c660;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C614u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C61Cu;
label_26c61c:
    // 0x26c61c: 0x10000015  b           . + 4 + (0x15 << 2)
label_26c620:
    if (ctx->pc == 0x26C620u) {
        ctx->pc = 0x26C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C61Cu;
        // 0x26c620: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C624u;
        goto label_26c624;
    }
    ctx->pc = 0x26C61Cu;
    {
        const bool branch_taken_0x26c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C61Cu;
        // 0x26c620: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c61c) {
            ctx->pc = 0x26C674u;
            goto label_26c674;
        }
    }
    ctx->pc = 0x26C624u;
label_26c624:
    // 0x26c624: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26c624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26c628:
    // 0x26c628: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c62c:
    // 0x26c62c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c630:
    // 0x26c630: 0x10000010  b           . + 4 + (0x10 << 2)
label_26c634:
    if (ctx->pc == 0x26C634u) {
        ctx->pc = 0x26C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C630u;
        // 0x26c634: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C638u;
        goto label_26c638;
    }
    ctx->pc = 0x26C630u;
    {
        const bool branch_taken_0x26c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C630u;
        // 0x26c634: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c630) {
            ctx->pc = 0x26C674u;
            goto label_26c674;
        }
    }
    ctx->pc = 0x26C638u;
label_26c638:
    // 0x26c638: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26c638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26c63c:
    // 0x26c63c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c640:
    // 0x26c640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c644:
    // 0x26c644: 0x1000000b  b           . + 4 + (0xB << 2)
label_26c648:
    if (ctx->pc == 0x26C648u) {
        ctx->pc = 0x26C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C644u;
        // 0x26c648: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C64Cu;
        goto label_26c64c;
    }
    ctx->pc = 0x26C644u;
    {
        const bool branch_taken_0x26c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C644u;
        // 0x26c648: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c644) {
            ctx->pc = 0x26C674u;
            goto label_26c674;
        }
    }
    ctx->pc = 0x26C64Cu;
label_26c64c:
    // 0x26c64c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x26c64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_26c650:
    // 0x26c650: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c654:
    // 0x26c654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c658:
    // 0x26c658: 0x10000006  b           . + 4 + (0x6 << 2)
label_26c65c:
    if (ctx->pc == 0x26C65Cu) {
        ctx->pc = 0x26C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C658u;
        // 0x26c65c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C660u;
        goto label_26c660;
    }
    ctx->pc = 0x26C658u;
    {
        const bool branch_taken_0x26c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C658u;
        // 0x26c65c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c658) {
            ctx->pc = 0x26C674u;
            goto label_26c674;
        }
    }
    ctx->pc = 0x26C660u;
label_26c660:
    // 0x26c660: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x26c660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_26c664:
    // 0x26c664: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c668:
    // 0x26c668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c66c:
    // 0x26c66c: 0x0  nop
    ctx->pc = 0x26c66cu;
    // NOP
label_26c670:
    // 0x26c670: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26c670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26c674:
    // 0x26c674: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c678:
    // 0x26c678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c67c:
    // 0x26c67c: 0xc051e62  jal         func_147988
label_26c680:
    if (ctx->pc == 0x26C680u) {
        ctx->pc = 0x26C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C67Cu;
        // 0x26c680: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C684u;
        goto label_26c684;
    }
    ctx->pc = 0x26C67Cu;
    SET_GPR_U32(ctx, 31, 0x26C684u);
    ctx->pc = 0x26C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C67Cu;
    // 0x26c680: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26C67Cu, 0x26C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C684u;
label_26c684:
    // 0x26c684: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26c684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26c688:
    // 0x26c688: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c68c:
    // 0x26c68c: 0x1000038a  b           . + 4 + (0x38A << 2)
label_26c690:
    if (ctx->pc == 0x26C690u) {
        ctx->pc = 0x26C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C68Cu;
        // 0x26c690: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C694u;
        goto label_26c694;
    }
    ctx->pc = 0x26C68Cu;
    {
        const bool branch_taken_0x26c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C68Cu;
        // 0x26c690: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c68c) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26C694u;
label_26c694:
    // 0x26c694: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c698:
    // 0x26c698: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c69c:
    // 0x26c69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c6a0:
    // 0x26c6a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c6a4:
    // 0x26c6a4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c6a8:
    // 0x26c6a8: 0xc07e804  jal         func_1FA010
label_26c6ac:
    if (ctx->pc == 0x26C6ACu) {
        ctx->pc = 0x26C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6A8u;
        // 0x26c6ac: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6B0u;
        goto label_26c6b0;
    }
    ctx->pc = 0x26C6A8u;
    SET_GPR_U32(ctx, 31, 0x26C6B0u);
    ctx->pc = 0x26C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6A8u;
    // 0x26c6ac: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C6A8u, 0x26C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6B0u;
label_26c6b0:
    // 0x26c6b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c6b4:
    // 0x26c6b4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26c6b8:
    if (ctx->pc == 0x26C6B8u) {
        ctx->pc = 0x26C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B4u;
        // 0x26c6b8: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6BCu;
        goto label_26c6bc;
    }
    ctx->pc = 0x26C6B4u;
    {
        const bool branch_taken_0x26c6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c6b4) {
            ctx->pc = 0x26C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C6B4u;
            // 0x26c6b8: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C6D0u;
            goto label_26c6d0;
        }
    }
    ctx->pc = 0x26C6BCu;
label_26c6bc:
    // 0x26c6bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26c6c0:
    // 0x26c6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c6c4:
    // 0x26c6c4: 0x0  nop
    ctx->pc = 0x26c6c4u;
    // NOP
label_26c6c8:
    // 0x26c6c8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c6cc:
    // 0x26c6cc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x26c6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26c6d0:
    // 0x26c6d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c6d4:
    // 0x26c6d4: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x26c6d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26c6d8:
    // 0x26c6d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_26c6dc:
    if (ctx->pc == 0x26C6DCu) {
        ctx->pc = 0x26C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6D8u;
        // 0x26c6dc: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6E0u;
        goto label_26c6e0;
    }
    ctx->pc = 0x26C6D8u;
    {
        const bool branch_taken_0x26c6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6D8u;
        // 0x26c6dc: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6d8) {
            ctx->pc = 0x26C6ECu;
            goto label_26c6ec;
        }
    }
    ctx->pc = 0x26C6E0u;
label_26c6e0:
    // 0x26c6e0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26c6e4:
    // 0x26c6e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26c6e8:
    if (ctx->pc == 0x26C6E8u) {
        ctx->pc = 0x26C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6E4u;
        // 0x26c6e8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6ECu;
        goto label_26c6ec;
    }
    ctx->pc = 0x26C6E4u;
    {
        const bool branch_taken_0x26c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6E4u;
        // 0x26c6e8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6e4) {
            ctx->pc = 0x26C6F0u;
            goto label_26c6f0;
        }
    }
    ctx->pc = 0x26C6ECu;
label_26c6ec:
    // 0x26c6ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c6f0:
    // 0x26c6f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26c6f4:
    if (ctx->pc == 0x26C6F4u) {
        ctx->pc = 0x26C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6F0u;
        // 0x26c6f4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6F8u;
        goto label_26c6f8;
    }
    ctx->pc = 0x26C6F0u;
    {
        const bool branch_taken_0x26c6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6F0u;
        // 0x26c6f4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6f0) {
            ctx->pc = 0x26C720u;
            goto label_26c720;
        }
    }
    ctx->pc = 0x26C6F8u;
label_26c6f8:
    // 0x26c6f8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c6fc:
    // 0x26c6fc: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
label_26c700:
    if (ctx->pc == 0x26C700u) {
        ctx->pc = 0x26C704u;
        goto label_26c704;
    }
    ctx->pc = 0x26C6FCu;
    {
        const bool branch_taken_0x26c6fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c6fc) {
            ctx->pc = 0x26C74Cu;
            goto label_26c74c;
        }
    }
    ctx->pc = 0x26C704u;
label_26c704:
    // 0x26c704: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c708:
    // 0x26c708: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26c70c:
    // 0x26c70c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c710:
    // 0x26c710: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26c710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c714:
    // 0x26c714: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c718:
    // 0x26c718: 0x1000000c  b           . + 4 + (0xC << 2)
label_26c71c:
    if (ctx->pc == 0x26C71Cu) {
        ctx->pc = 0x26C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C718u;
        // 0x26c71c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C720u;
        goto label_26c720;
    }
    ctx->pc = 0x26C718u;
    {
        const bool branch_taken_0x26c718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C718u;
        // 0x26c71c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c718) {
            ctx->pc = 0x26C74Cu;
            goto label_26c74c;
        }
    }
    ctx->pc = 0x26C720u;
label_26c720:
    // 0x26c720: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x26c720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_26c724:
    // 0x26c724: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26c724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26c728:
    // 0x26c728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c72c:
    // 0x26c72c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c730:
    // 0x26c730: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26c734:
    // 0x26c734: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c738:
    // 0x26c738: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c73c:
    // 0x26c73c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c740:
    // 0x26c740: 0xc0c28ac  jal         func_30A2B0
label_26c744:
    if (ctx->pc == 0x26C744u) {
        ctx->pc = 0x26C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C740u;
        // 0x26c744: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C748u;
        goto label_26c748;
    }
    ctx->pc = 0x26C740u;
    SET_GPR_U32(ctx, 31, 0x26C748u);
    ctx->pc = 0x26C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C740u;
    // 0x26c744: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C740u, 0x26C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C748u;
label_26c748:
    // 0x26c748: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26c748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c74c:
    // 0x26c74c: 0xc0b6dac  jal         func_2DB6B0
label_26c750:
    if (ctx->pc == 0x26C750u) {
        ctx->pc = 0x26C754u;
        goto label_26c754;
    }
    ctx->pc = 0x26C74Cu;
    SET_GPR_U32(ctx, 31, 0x26C754u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26C74Cu, 0x26C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C754u;
label_26c754:
    // 0x26c754: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x26c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c758:
    // 0x26c758: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x26c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_26c75c:
    // 0x26c75c: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26c760:
    // 0x26c760: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26c760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26c764:
    // 0x26c764: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x26c764u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26c768:
    // 0x26c768: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26c768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26c76c:
    // 0x26c76c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c770:
    // 0x26c770: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26c770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26c774:
    // 0x26c774: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c778:
    // 0x26c778: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c77c:
    // 0x26c77c: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x26c77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_26c780:
    // 0x26c780: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x26c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c784:
    // 0x26c784: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c788:
    // 0x26c788: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26c788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26c78c:
    // 0x26c78c: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26c78cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_26c790:
    // 0x26c790: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26c794:
    // 0x26c794: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x26c794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26c798:
    // 0x26c798: 0xc07e060  jal         func_1F8180
label_26c79c:
    if (ctx->pc == 0x26C79Cu) {
        ctx->pc = 0x26C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C798u;
        // 0x26c79c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7A0u;
        goto label_26c7a0;
    }
    ctx->pc = 0x26C798u;
    SET_GPR_U32(ctx, 31, 0x26C7A0u);
    ctx->pc = 0x26C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C798u;
    // 0x26c79c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26C798u, 0x26C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7A0u;
label_26c7a0:
    // 0x26c7a0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26c7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_26c7a4:
    // 0x26c7a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26c7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26c7a8:
    // 0x26c7a8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26c7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26c7ac:
    // 0x26c7ac: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x26c7acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_26c7b0:
    // 0x26c7b0: 0xc0b687e  jal         func_2DA1F8
label_26c7b4:
    if (ctx->pc == 0x26C7B4u) {
        ctx->pc = 0x26C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7B0u;
        // 0x26c7b4: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7B8u;
        goto label_26c7b8;
    }
    ctx->pc = 0x26C7B0u;
    SET_GPR_U32(ctx, 31, 0x26C7B8u);
    ctx->pc = 0x26C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7B0u;
    // 0x26c7b4: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26C7B0u, 0x26C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7B8u;
label_26c7b8:
    // 0x26c7b8: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c7bc:
    // 0x26c7bc: 0xc07df52  jal         func_1F7D48
label_26c7c0:
    if (ctx->pc == 0x26C7C0u) {
        ctx->pc = 0x26C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7BCu;
        // 0x26c7c0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7C4u;
        goto label_26c7c4;
    }
    ctx->pc = 0x26C7BCu;
    SET_GPR_U32(ctx, 31, 0x26C7C4u);
    ctx->pc = 0x26C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7BCu;
    // 0x26c7c0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26C7BCu, 0x26C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7C4u;
label_26c7c4:
    // 0x26c7c4: 0x1000046c  b           . + 4 + (0x46C << 2)
label_26c7c8:
    if (ctx->pc == 0x26C7C8u) {
        ctx->pc = 0x26C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7C4u;
        // 0x26c7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7CCu;
        goto label_26c7cc;
    }
    ctx->pc = 0x26C7C4u;
    {
        const bool branch_taken_0x26c7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7C4u;
        // 0x26c7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7c4) {
            ctx->pc = 0x26D978u;
            goto label_26d978;
        }
    }
    ctx->pc = 0x26C7CCu;
label_26c7cc:
    // 0x26c7cc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26c7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26c7d0:
    // 0x26c7d0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x26c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_26c7d4:
    // 0x26c7d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26c7d8:
    // 0x26c7d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c7dc:
    if (ctx->pc == 0x26C7DCu) {
        ctx->pc = 0x26C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7D8u;
        // 0x26c7dc: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7E0u;
        goto label_26c7e0;
    }
    ctx->pc = 0x26C7D8u;
    {
        const bool branch_taken_0x26c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7D8u;
        // 0x26c7dc: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7d8) {
            ctx->pc = 0x26C7ECu;
            goto label_26c7ec;
        }
    }
    ctx->pc = 0x26C7E0u;
label_26c7e0:
    // 0x26c7e0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26c7e4:
    // 0x26c7e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26c7e8:
    if (ctx->pc == 0x26C7E8u) {
        ctx->pc = 0x26C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7E4u;
        // 0x26c7e8: 0x8c42007c  lw          $v0, 0x7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7ECu;
        goto label_26c7ec;
    }
    ctx->pc = 0x26C7E4u;
    {
        const bool branch_taken_0x26c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7E4u;
        // 0x26c7e8: 0x8c42007c  lw          $v0, 0x7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7e4) {
            ctx->pc = 0x26C7F0u;
            goto label_26c7f0;
        }
    }
    ctx->pc = 0x26C7ECu;
label_26c7ec:
    // 0x26c7ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c7f0:
    // 0x26c7f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26c7f4:
    if (ctx->pc == 0x26C7F4u) {
        ctx->pc = 0x26C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7F0u;
        // 0x26c7f4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7F8u;
        goto label_26c7f8;
    }
    ctx->pc = 0x26C7F0u;
    {
        const bool branch_taken_0x26c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7F0u;
        // 0x26c7f4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7f0) {
            ctx->pc = 0x26C820u;
            goto label_26c820;
        }
    }
    ctx->pc = 0x26C7F8u;
label_26c7f8:
    // 0x26c7f8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c7fc:
    // 0x26c7fc: 0x12620012  beq         $s3, $v0, . + 4 + (0x12 << 2)
label_26c800:
    if (ctx->pc == 0x26C800u) {
        ctx->pc = 0x26C804u;
        goto label_26c804;
    }
    ctx->pc = 0x26C7FCu;
    {
        const bool branch_taken_0x26c7fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c7fc) {
            ctx->pc = 0x26C848u;
            goto label_26c848;
        }
    }
    ctx->pc = 0x26C804u;
label_26c804:
    // 0x26c804: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c808:
    // 0x26c808: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26c808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26c80c:
    // 0x26c80c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c810:
    // 0x26c810: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26c810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c814:
    // 0x26c814: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c818:
    // 0x26c818: 0x1000000b  b           . + 4 + (0xB << 2)
label_26c81c:
    if (ctx->pc == 0x26C81Cu) {
        ctx->pc = 0x26C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C818u;
        // 0x26c81c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C820u;
        goto label_26c820;
    }
    ctx->pc = 0x26C818u;
    {
        const bool branch_taken_0x26c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C818u;
        // 0x26c81c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c818) {
            ctx->pc = 0x26C848u;
            goto label_26c848;
        }
    }
    ctx->pc = 0x26C820u;
label_26c820:
    // 0x26c820: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26c820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26c824:
    // 0x26c824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c828:
    // 0x26c828: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26c828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c82c:
    // 0x26c82c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26c830:
    // 0x26c830: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26c834:
    // 0x26c834: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26c834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26c838:
    // 0x26c838: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c83c:
    // 0x26c83c: 0xc0c28ac  jal         func_30A2B0
label_26c840:
    if (ctx->pc == 0x26C840u) {
        ctx->pc = 0x26C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C83Cu;
        // 0x26c840: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C844u;
        goto label_26c844;
    }
    ctx->pc = 0x26C83Cu;
    SET_GPR_U32(ctx, 31, 0x26C844u);
    ctx->pc = 0x26C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C83Cu;
    // 0x26c840: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26C83Cu, 0x26C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26c844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26c848:
    // 0x26c848: 0xc0b6dac  jal         func_2DB6B0
label_26c84c:
    if (ctx->pc == 0x26C84Cu) {
        ctx->pc = 0x26C850u;
        goto label_26c850;
    }
    ctx->pc = 0x26C848u;
    SET_GPR_U32(ctx, 31, 0x26C850u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26C848u, 0x26C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C850u;
label_26c850:
    // 0x26c850: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26c854:
    // 0x26c854: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26c858:
    // 0x26c858: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_26c85c:
    if (ctx->pc == 0x26C85Cu) {
        ctx->pc = 0x26C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C858u;
        // 0x26c85c: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C860u;
        goto label_26c860;
    }
    ctx->pc = 0x26C858u;
    {
        const bool branch_taken_0x26c858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C858u;
        // 0x26c85c: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c858) {
            ctx->pc = 0x26C87Cu;
            goto label_26c87c;
        }
    }
    ctx->pc = 0x26C860u;
label_26c860:
    // 0x26c860: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c864:
    // 0x26c864: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26c868:
    // 0x26c868: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c86c:
    // 0x26c86c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26c86cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26c870:
    // 0x26c870: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c874:
    // 0x26c874: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x26c874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26c878:
    // 0x26c878: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x26c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c87c:
    // 0x26c87c: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x26c87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_26c880:
    // 0x26c880: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x26c880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_26c884:
    // 0x26c884: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c888:
    // 0x26c888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c88c:
    // 0x26c88c: 0x0  nop
    ctx->pc = 0x26c88cu;
    // NOP
label_26c890:
    // 0x26c890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26c894:
    // 0x26c894: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x26c894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26c898:
    // 0x26c898: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26c89c:
    // 0x26c89c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26c89cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26c8a0:
    // 0x26c8a0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x26c8a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26c8a4:
    // 0x26c8a4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26c8a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26c8a8:
    // 0x26c8a8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c8ac:
    // 0x26c8ac: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26c8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26c8b0:
    // 0x26c8b0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c8b4:
    // 0x26c8b4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c8b8:
    // 0x26c8b8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x26c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c8bc:
    // 0x26c8bc: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x26c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c8c0:
    // 0x26c8c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26c8c4:
    // 0x26c8c4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26c8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26c8c8:
    // 0x26c8c8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26c8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26c8cc:
    // 0x26c8cc: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26c8d0:
    // 0x26c8d0: 0xc04078a  jal         func_101E28
label_26c8d4:
    if (ctx->pc == 0x26C8D4u) {
        ctx->pc = 0x26C8D8u;
        goto label_26c8d8;
    }
    ctx->pc = 0x26C8D0u;
    SET_GPR_U32(ctx, 31, 0x26C8D8u);
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x26C8D0u, 0x26C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8D8u;
label_26c8d8:
    // 0x26c8d8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x26c8d8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26c8dc:
    // 0x26c8dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c8e0:
    // 0x26c8e0: 0x0  nop
    ctx->pc = 0x26c8e0u;
    // NOP
label_26c8e4:
    // 0x26c8e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26c8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26c8e8:
    // 0x26c8e8: 0x0  nop
    ctx->pc = 0x26c8e8u;
    // NOP
label_26c8ec:
    // 0x26c8ec: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_26c8f0:
    if (ctx->pc == 0x26C8F0u) {
        ctx->pc = 0x26C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8ECu;
        // 0x26c8f0: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8F4u;
        goto label_26c8f4;
    }
    ctx->pc = 0x26C8ECu;
    {
        const bool branch_taken_0x26c8ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8ECu;
        // 0x26c8f0: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8ec) {
            ctx->pc = 0x26C930u;
            goto label_26c930;
        }
    }
    ctx->pc = 0x26C8F4u;
label_26c8f4:
    // 0x26c8f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26c8f8:
    // 0x26c8f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c8fc:
    // 0x26c8fc: 0x0  nop
    ctx->pc = 0x26c8fcu;
    // NOP
label_26c900:
    // 0x26c900: 0x0  nop
    ctx->pc = 0x26c900u;
    // NOP
label_26c904:
    // 0x26c904: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x26c904u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_26c908:
    // 0x26c908: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x26c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26c90c:
    // 0x26c90c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x26c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c910:
    // 0x26c910: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x26c910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c914:
    // 0x26c914: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x26c914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_26c918:
    // 0x26c918: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x26c918u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_26c91c:
    // 0x26c91c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x26c91cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_26c920:
    // 0x26c920: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x26c920u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_26c924:
    // 0x26c924: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x26c924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_26c928:
    // 0x26c928: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x26c928u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_26c92c:
    // 0x26c92c: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x26c92cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_26c930:
    // 0x26c930: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26c930u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26c934:
    // 0x26c934: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c938:
    // 0x26c938: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x26c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c93c:
    // 0x26c93c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c940:
    // 0x26c940: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x26c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c944:
    // 0x26c944: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c948:
    // 0x26c948: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x26c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c94c:
    // 0x26c94c: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x26c94cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26c950:
    // 0x26c950: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26c950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_26c954:
    // 0x26c954: 0xc07e804  jal         func_1FA010
label_26c958:
    if (ctx->pc == 0x26C958u) {
        ctx->pc = 0x26C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C954u;
        // 0x26c958: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C95Cu;
        goto label_26c95c;
    }
    ctx->pc = 0x26C954u;
    SET_GPR_U32(ctx, 31, 0x26C95Cu);
    ctx->pc = 0x26C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C954u;
    // 0x26c958: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C954u, 0x26C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C95Cu;
label_26c95c:
    // 0x26c95c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c960:
    // 0x26c960: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26c964:
    // 0x26c964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c968:
    // 0x26c968: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_26c96c:
    if (ctx->pc == 0x26C96Cu) {
        ctx->pc = 0x26C970u;
        goto label_26c970;
    }
    ctx->pc = 0x26C968u;
    {
        const bool branch_taken_0x26c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c968) {
            ctx->pc = 0x26C97Cu;
            goto label_26c97c;
        }
    }
    ctx->pc = 0x26C970u;
label_26c970:
    // 0x26c970: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c974:
    // 0x26c974: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c978:
    // 0x26c978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c97c:
    // 0x26c97c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26c97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26c980:
    // 0x26c980: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26c980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26c984:
    // 0x26c984: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26c984u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26c988:
    // 0x26c988: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26c988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26c98c:
    // 0x26c98c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_26c990:
    // 0x26c990: 0x10000430  b           . + 4 + (0x430 << 2)
label_26c994:
    if (ctx->pc == 0x26C994u) {
        ctx->pc = 0x26C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C990u;
        // 0x26c994: 0x24110013  addiu       $s1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C998u;
        goto label_26c998;
    }
    ctx->pc = 0x26C990u;
    {
        const bool branch_taken_0x26c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C990u;
        // 0x26c994: 0x24110013  addiu       $s1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c990) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26C998u;
label_26c998:
    // 0x26c998: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26c99c:
    // 0x26c99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c9a0:
    // 0x26c9a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c9a4:
    // 0x26c9a4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c9a8:
    // 0x26c9a8: 0xc07e804  jal         func_1FA010
label_26c9ac:
    if (ctx->pc == 0x26C9ACu) {
        ctx->pc = 0x26C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9A8u;
        // 0x26c9ac: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9B0u;
        goto label_26c9b0;
    }
    ctx->pc = 0x26C9A8u;
    SET_GPR_U32(ctx, 31, 0x26C9B0u);
    ctx->pc = 0x26C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9A8u;
    // 0x26c9ac: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C9A8u, 0x26C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9B0u;
label_26c9b0:
    // 0x26c9b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c9b4:
    // 0x26c9b4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26c9b8:
    if (ctx->pc == 0x26C9B8u) {
        ctx->pc = 0x26C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9B4u;
        // 0x26c9b8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9BCu;
        goto label_26c9bc;
    }
    ctx->pc = 0x26C9B4u;
    {
        const bool branch_taken_0x26c9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c9b4) {
            ctx->pc = 0x26C9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C9B4u;
            // 0x26c9b8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C9D4u;
            goto label_26c9d4;
        }
    }
    ctx->pc = 0x26C9BCu;
label_26c9bc:
    // 0x26c9bc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26c9c0:
    // 0x26c9c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26c9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26c9c4:
    // 0x26c9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c9c8:
    // 0x26c9c8: 0x0  nop
    ctx->pc = 0x26c9c8u;
    // NOP
label_26c9cc:
    // 0x26c9cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26c9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26c9d0:
    // 0x26c9d0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c9d4:
    // 0x26c9d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26c9d8:
    // 0x26c9d8: 0x100002a5  b           . + 4 + (0x2A5 << 2)
label_26c9dc:
    if (ctx->pc == 0x26C9DCu) {
        ctx->pc = 0x26C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9D8u;
        // 0x26c9dc: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9E0u;
        goto label_26c9e0;
    }
    ctx->pc = 0x26C9D8u;
    {
        const bool branch_taken_0x26c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9D8u;
        // 0x26c9dc: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9d8) {
            ctx->pc = 0x26D470u;
            goto label_26d470;
        }
    }
    ctx->pc = 0x26C9E0u;
label_26c9e0:
    // 0x26c9e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26c9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26c9e4:
    // 0x26c9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c9e8:
    // 0x26c9e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26c9ec:
    // 0x26c9ec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26c9f0:
    // 0x26c9f0: 0xc07e804  jal         func_1FA010
label_26c9f4:
    if (ctx->pc == 0x26C9F4u) {
        ctx->pc = 0x26C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9F0u;
        // 0x26c9f4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9F8u;
        goto label_26c9f8;
    }
    ctx->pc = 0x26C9F0u;
    SET_GPR_U32(ctx, 31, 0x26C9F8u);
    ctx->pc = 0x26C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9F0u;
    // 0x26c9f4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26C9F0u, 0x26C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9F8u;
label_26c9f8:
    // 0x26c9f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c9fc:
    // 0x26c9fc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26ca00:
    if (ctx->pc == 0x26CA00u) {
        ctx->pc = 0x26CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9FCu;
        // 0x26ca00: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA04u;
        goto label_26ca04;
    }
    ctx->pc = 0x26C9FCu;
    {
        const bool branch_taken_0x26c9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c9fc) {
            ctx->pc = 0x26CA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C9FCu;
            // 0x26ca00: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CA1Cu;
            goto label_26ca1c;
        }
    }
    ctx->pc = 0x26CA04u;
label_26ca04:
    // 0x26ca04: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26ca04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26ca08:
    // 0x26ca08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ca08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ca0c:
    // 0x26ca0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ca0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ca10:
    // 0x26ca10: 0x0  nop
    ctx->pc = 0x26ca10u;
    // NOP
label_26ca14:
    // 0x26ca14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26ca18:
    // 0x26ca18: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26ca1c:
    // 0x26ca1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26ca20:
    // 0x26ca20: 0x10000293  b           . + 4 + (0x293 << 2)
label_26ca24:
    if (ctx->pc == 0x26CA24u) {
        ctx->pc = 0x26CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA20u;
        // 0x26ca24: 0x24110015  addiu       $s1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA28u;
        goto label_26ca28;
    }
    ctx->pc = 0x26CA20u;
    {
        const bool branch_taken_0x26ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA20u;
        // 0x26ca24: 0x24110015  addiu       $s1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca20) {
            ctx->pc = 0x26D470u;
            goto label_26d470;
        }
    }
    ctx->pc = 0x26CA28u;
label_26ca28:
    // 0x26ca28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26ca28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26ca2c:
    // 0x26ca2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ca2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ca30:
    // 0x26ca30: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26ca34:
    // 0x26ca34: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26ca38:
    // 0x26ca38: 0xc07e804  jal         func_1FA010
label_26ca3c:
    if (ctx->pc == 0x26CA3Cu) {
        ctx->pc = 0x26CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA38u;
        // 0x26ca3c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA40u;
        goto label_26ca40;
    }
    ctx->pc = 0x26CA38u;
    SET_GPR_U32(ctx, 31, 0x26CA40u);
    ctx->pc = 0x26CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA38u;
    // 0x26ca3c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26CA38u, 0x26CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA40u;
label_26ca40:
    // 0x26ca40: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26ca44:
    // 0x26ca44: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_26ca48:
    if (ctx->pc == 0x26CA48u) {
        ctx->pc = 0x26CA4Cu;
        goto label_26ca4c;
    }
    ctx->pc = 0x26CA44u;
    {
        const bool branch_taken_0x26ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26ca44) {
            ctx->pc = 0x26CA60u;
            goto label_26ca60;
        }
    }
    ctx->pc = 0x26CA4Cu;
label_26ca4c:
    // 0x26ca4c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26ca4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26ca50:
    // 0x26ca50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ca50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ca54:
    // 0x26ca54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ca54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ca58:
    // 0x26ca58: 0x0  nop
    ctx->pc = 0x26ca58u;
    // NOP
label_26ca5c:
    // 0x26ca5c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26ca5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26ca60:
    // 0x26ca60: 0xc0c7408  jal         func_31D020
label_26ca64:
    if (ctx->pc == 0x26CA64u) {
        ctx->pc = 0x26CA68u;
        goto label_26ca68;
    }
    ctx->pc = 0x26CA60u;
    SET_GPR_U32(ctx, 31, 0x26CA68u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CA60u, 0x26CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA68u;
label_26ca68:
    // 0x26ca68: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26ca6c:
    // 0x26ca6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ca70:
    // 0x26ca70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26ca70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26ca74:
    // 0x26ca74: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x26ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ca78:
    // 0x26ca78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26ca78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26ca7c:
    // 0x26ca7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ca7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26ca80:
    // 0x26ca80: 0xc0c73f8  jal         func_31CFE0
label_26ca84:
    if (ctx->pc == 0x26CA84u) {
        ctx->pc = 0x26CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA80u;
        // 0x26ca84: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA88u;
        goto label_26ca88;
    }
    ctx->pc = 0x26CA80u;
    SET_GPR_U32(ctx, 31, 0x26CA88u);
    ctx->pc = 0x26CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA80u;
    // 0x26ca84: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x26CA80u, 0x26CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA88u;
label_26ca88:
    // 0x26ca88: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x26ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_26ca8c:
    // 0x26ca8c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_26ca90:
    if (ctx->pc == 0x26CA90u) {
        ctx->pc = 0x26CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA8Cu;
        // 0x26ca90: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA94u;
        goto label_26ca94;
    }
    ctx->pc = 0x26CA8Cu;
    {
        const bool branch_taken_0x26ca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca8c) {
            ctx->pc = 0x26CA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA8Cu;
            // 0x26ca90: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CAD4u;
            goto label_26cad4;
        }
    }
    ctx->pc = 0x26CA94u;
label_26ca94:
    // 0x26ca94: 0xc0c7408  jal         func_31D020
label_26ca98:
    if (ctx->pc == 0x26CA98u) {
        ctx->pc = 0x26CA9Cu;
        goto label_26ca9c;
    }
    ctx->pc = 0x26CA94u;
    SET_GPR_U32(ctx, 31, 0x26CA9Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CA94u, 0x26CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA9Cu;
label_26ca9c:
    // 0x26ca9c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26caa0:
    // 0x26caa0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26caa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26caa4:
    // 0x26caa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26caa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26caa8:
    // 0x26caa8: 0x0  nop
    ctx->pc = 0x26caa8u;
    // NOP
label_26caac:
    // 0x26caac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26caacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26cab0:
    // 0x26cab0: 0xc0c7408  jal         func_31D020
label_26cab4:
    if (ctx->pc == 0x26CAB4u) {
        ctx->pc = 0x26CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB0u;
        // 0x26cab4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAB8u;
        goto label_26cab8;
    }
    ctx->pc = 0x26CAB0u;
    SET_GPR_U32(ctx, 31, 0x26CAB8u);
    ctx->pc = 0x26CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAB0u;
    // 0x26cab4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CAB0u, 0x26CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAB8u;
label_26cab8:
    // 0x26cab8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26cab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26cabc:
    // 0x26cabc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26cabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26cac0:
    // 0x26cac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26cac4:
    // 0x26cac4: 0x0  nop
    ctx->pc = 0x26cac4u;
    // NOP
label_26cac8:
    // 0x26cac8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26cac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26cacc:
    // 0x26cacc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_26cad0:
    // 0x26cad0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cad4:
    // 0x26cad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26cad8:
    // 0x26cad8: 0x10000265  b           . + 4 + (0x265 << 2)
label_26cadc:
    if (ctx->pc == 0x26CADCu) {
        ctx->pc = 0x26CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD8u;
        // 0x26cadc: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAE0u;
        goto label_26cae0;
    }
    ctx->pc = 0x26CAD8u;
    {
        const bool branch_taken_0x26cad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD8u;
        // 0x26cadc: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cad8) {
            ctx->pc = 0x26D470u;
            goto label_26d470;
        }
    }
    ctx->pc = 0x26CAE0u;
label_26cae0:
    // 0x26cae0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26cae4:
    // 0x26cae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cae8:
    // 0x26cae8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26caec:
    // 0x26caec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26caf0:
    // 0x26caf0: 0xc07e804  jal         func_1FA010
label_26caf4:
    if (ctx->pc == 0x26CAF4u) {
        ctx->pc = 0x26CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAF0u;
        // 0x26caf4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAF8u;
        goto label_26caf8;
    }
    ctx->pc = 0x26CAF0u;
    SET_GPR_U32(ctx, 31, 0x26CAF8u);
    ctx->pc = 0x26CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAF0u;
    // 0x26caf4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26CAF0u, 0x26CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAF8u;
label_26caf8:
    // 0x26caf8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26cafc:
    // 0x26cafc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_26cb00:
    if (ctx->pc == 0x26CB00u) {
        ctx->pc = 0x26CB04u;
        goto label_26cb04;
    }
    ctx->pc = 0x26CAFCu;
    {
        const bool branch_taken_0x26cafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cafc) {
            ctx->pc = 0x26CB18u;
            goto label_26cb18;
        }
    }
    ctx->pc = 0x26CB04u;
label_26cb04:
    // 0x26cb04: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26cb08:
    // 0x26cb08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cb0c:
    // 0x26cb0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cb10:
    // 0x26cb10: 0x0  nop
    ctx->pc = 0x26cb10u;
    // NOP
label_26cb14:
    // 0x26cb14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26cb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26cb18:
    // 0x26cb18: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26cb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26cb1c:
    // 0x26cb1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cb1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cb20:
    // 0x26cb20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26cb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26cb24:
    // 0x26cb24: 0xc0c7408  jal         func_31D020
label_26cb28:
    if (ctx->pc == 0x26CB28u) {
        ctx->pc = 0x26CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB24u;
        // 0x26cb28: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB2Cu;
        goto label_26cb2c;
    }
    ctx->pc = 0x26CB24u;
    SET_GPR_U32(ctx, 31, 0x26CB2Cu);
    ctx->pc = 0x26CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB24u;
    // 0x26cb28: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CB24u, 0x26CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB2Cu;
label_26cb2c:
    // 0x26cb2c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x26cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cb30:
    // 0x26cb30: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26cb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26cb34:
    // 0x26cb34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cb34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cb38:
    // 0x26cb38: 0xc0c7408  jal         func_31D020
label_26cb3c:
    if (ctx->pc == 0x26CB3Cu) {
        ctx->pc = 0x26CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB38u;
        // 0x26cb3c: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB40u;
        goto label_26cb40;
    }
    ctx->pc = 0x26CB38u;
    SET_GPR_U32(ctx, 31, 0x26CB40u);
    ctx->pc = 0x26CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB38u;
    // 0x26cb3c: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CB38u, 0x26CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB40u;
label_26cb40:
    // 0x26cb40: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26cb40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26cb44:
    // 0x26cb44: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cb48:
    // 0x26cb48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26cb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26cb4c:
    // 0x26cb4c: 0xc051e62  jal         func_147988
label_26cb50:
    if (ctx->pc == 0x26CB50u) {
        ctx->pc = 0x26CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB4Cu;
        // 0x26cb50: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB54u;
        goto label_26cb54;
    }
    ctx->pc = 0x26CB4Cu;
    SET_GPR_U32(ctx, 31, 0x26CB54u);
    ctx->pc = 0x26CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB4Cu;
    // 0x26cb50: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26CB4Cu, 0x26CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB54u;
label_26cb54:
    // 0x26cb54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26cb58:
    // 0x26cb58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26cb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26cb5c:
    // 0x26cb5c: 0xc0c28ac  jal         func_30A2B0
label_26cb60:
    if (ctx->pc == 0x26CB60u) {
        ctx->pc = 0x26CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB5Cu;
        // 0x26cb60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB64u;
        goto label_26cb64;
    }
    ctx->pc = 0x26CB5Cu;
    SET_GPR_U32(ctx, 31, 0x26CB64u);
    ctx->pc = 0x26CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB5Cu;
    // 0x26cb60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26CB5Cu, 0x26CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB64u;
label_26cb64:
    // 0x26cb64: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26cb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26cb68:
    // 0x26cb68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26cb68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26cb6c:
    // 0x26cb6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cb70:
    // 0x26cb70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cb74:
    // 0x26cb74: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26cb78:
    // 0x26cb78: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26cb7c:
    // 0x26cb7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26cb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26cb80:
    // 0x26cb80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26cb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cb84:
    // 0x26cb84: 0x1000024c  b           . + 4 + (0x24C << 2)
label_26cb88:
    if (ctx->pc == 0x26CB88u) {
        ctx->pc = 0x26CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB84u;
        // 0x26cb88: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB8Cu;
        goto label_26cb8c;
    }
    ctx->pc = 0x26CB84u;
    {
        const bool branch_taken_0x26cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB84u;
        // 0x26cb88: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb84) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26CB8Cu;
label_26cb8c:
    // 0x26cb8c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26cb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26cb90:
    // 0x26cb90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cb90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cb94:
    // 0x26cb94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cb98:
    // 0x26cb98: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26cb9c:
    // 0x26cb9c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26cba0:
    // 0x26cba0: 0xc07e804  jal         func_1FA010
label_26cba4:
    if (ctx->pc == 0x26CBA4u) {
        ctx->pc = 0x26CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBA0u;
        // 0x26cba4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBA8u;
        goto label_26cba8;
    }
    ctx->pc = 0x26CBA0u;
    SET_GPR_U32(ctx, 31, 0x26CBA8u);
    ctx->pc = 0x26CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBA0u;
    // 0x26cba4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26CBA0u, 0x26CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBA8u;
label_26cba8:
    // 0x26cba8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26cbac:
    // 0x26cbac: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26cbb0:
    if (ctx->pc == 0x26CBB0u) {
        ctx->pc = 0x26CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBACu;
        // 0x26cbb0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBB4u;
        goto label_26cbb4;
    }
    ctx->pc = 0x26CBACu;
    {
        const bool branch_taken_0x26cbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cbac) {
            ctx->pc = 0x26CBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CBACu;
            // 0x26cbb0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBC8u;
            goto label_26cbc8;
        }
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26cbb8:
    // 0x26cbb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cbbc:
    // 0x26cbbc: 0x0  nop
    ctx->pc = 0x26cbbcu;
    // NOP
label_26cbc0:
    // 0x26cbc0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26cbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26cbc4:
    // 0x26cbc4: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26cbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cbc8:
    // 0x26cbc8: 0xc051e62  jal         func_147988
label_26cbcc:
    if (ctx->pc == 0x26CBCCu) {
        ctx->pc = 0x26CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBC8u;
        // 0x26cbcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBD0u;
        goto label_26cbd0;
    }
    ctx->pc = 0x26CBC8u;
    SET_GPR_U32(ctx, 31, 0x26CBD0u);
    ctx->pc = 0x26CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBC8u;
    // 0x26cbcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26CBC8u, 0x26CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBD0u;
label_26cbd0:
    // 0x26cbd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26cbd4:
    // 0x26cbd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26cbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26cbd8:
    // 0x26cbd8: 0xc0c28ac  jal         func_30A2B0
label_26cbdc:
    if (ctx->pc == 0x26CBDCu) {
        ctx->pc = 0x26CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBD8u;
        // 0x26cbdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBE0u;
        goto label_26cbe0;
    }
    ctx->pc = 0x26CBD8u;
    SET_GPR_U32(ctx, 31, 0x26CBE0u);
    ctx->pc = 0x26CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBD8u;
    // 0x26cbdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26CBD8u, 0x26CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBE0u;
label_26cbe0:
    // 0x26cbe0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26cbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26cbe4:
    // 0x26cbe4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26cbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26cbe8:
    // 0x26cbe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cbec:
    // 0x26cbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cbf0:
    // 0x26cbf0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26cbf4:
    // 0x26cbf4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26cbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26cbf8:
    // 0x26cbf8: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_26cbfc:
    if (ctx->pc == 0x26CBFCu) {
        ctx->pc = 0x26CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBF8u;
        // 0x26cbfc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC00u;
        goto label_26cc00;
    }
    ctx->pc = 0x26CBF8u;
    {
        const bool branch_taken_0x26cbf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBF8u;
        // 0x26cbfc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbf8) {
            ctx->pc = 0x26CC18u;
            goto label_26cc18;
        }
    }
    ctx->pc = 0x26CC00u;
label_26cc00:
    // 0x26cc00: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_26cc04:
    if (ctx->pc == 0x26CC04u) {
        ctx->pc = 0x26CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC00u;
        // 0x26cc04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC08u;
        goto label_26cc08;
    }
    ctx->pc = 0x26CC00u;
    {
        const bool branch_taken_0x26cc00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC00u;
        // 0x26cc04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc00) {
            ctx->pc = 0x26CC10u;
            goto label_26cc10;
        }
    }
    ctx->pc = 0x26CC08u;
label_26cc08:
    // 0x26cc08: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_26cc0c:
    if (ctx->pc == 0x26CC0Cu) {
        ctx->pc = 0x26CC10u;
        goto label_26cc10;
    }
    ctx->pc = 0x26CC08u;
    {
        const bool branch_taken_0x26cc08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x26cc08) {
            ctx->pc = 0x26CC28u;
            goto label_26cc28;
        }
    }
    ctx->pc = 0x26CC10u;
label_26cc10:
    // 0x26cc10: 0x10000009  b           . + 4 + (0x9 << 2)
label_26cc14:
    if (ctx->pc == 0x26CC14u) {
        ctx->pc = 0x26CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC10u;
        // 0x26cc14: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC18u;
        goto label_26cc18;
    }
    ctx->pc = 0x26CC10u;
    {
        const bool branch_taken_0x26cc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC10u;
        // 0x26cc14: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc10) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CC18u;
label_26cc18:
    // 0x26cc18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26cc1c:
    // 0x26cc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc20:
    // 0x26cc20: 0x10000005  b           . + 4 + (0x5 << 2)
label_26cc24:
    if (ctx->pc == 0x26CC24u) {
        ctx->pc = 0x26CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC20u;
        // 0x26cc24: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC28u;
        goto label_26cc28;
    }
    ctx->pc = 0x26CC20u;
    {
        const bool branch_taken_0x26cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC20u;
        // 0x26cc24: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc20) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CC28u;
label_26cc28:
    // 0x26cc28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_26cc2c:
    // 0x26cc2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc30:
    // 0x26cc30: 0x0  nop
    ctx->pc = 0x26cc30u;
    // NOP
label_26cc34:
    // 0x26cc34: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26cc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26cc38:
    // 0x26cc38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cc3c:
    // 0x26cc3c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26cc40:
    // 0x26cc40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26cc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cc44:
    // 0x26cc44: 0x1000021c  b           . + 4 + (0x21C << 2)
label_26cc48:
    if (ctx->pc == 0x26CC48u) {
        ctx->pc = 0x26CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC44u;
        // 0x26cc48: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC4Cu;
        goto label_26cc4c;
    }
    ctx->pc = 0x26CC44u;
    {
        const bool branch_taken_0x26cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC44u;
        // 0x26cc48: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc44) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26CC4Cu;
label_26cc4c:
    // 0x26cc4c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26cc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26cc50:
    // 0x26cc50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cc54:
    // 0x26cc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc58:
    // 0x26cc58: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26cc5c:
    // 0x26cc5c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26cc60:
    // 0x26cc60: 0xc07e804  jal         func_1FA010
label_26cc64:
    if (ctx->pc == 0x26CC64u) {
        ctx->pc = 0x26CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC60u;
        // 0x26cc64: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC68u;
        goto label_26cc68;
    }
    ctx->pc = 0x26CC60u;
    SET_GPR_U32(ctx, 31, 0x26CC68u);
    ctx->pc = 0x26CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC60u;
    // 0x26cc64: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26CC60u, 0x26CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC68u;
label_26cc68:
    // 0x26cc68: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26cc6c:
    // 0x26cc6c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26cc70:
    if (ctx->pc == 0x26CC70u) {
        ctx->pc = 0x26CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC6Cu;
        // 0x26cc70: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC74u;
        goto label_26cc74;
    }
    ctx->pc = 0x26CC6Cu;
    {
        const bool branch_taken_0x26cc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cc6c) {
            ctx->pc = 0x26CC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC6Cu;
            // 0x26cc70: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC88u;
            goto label_26cc88;
        }
    }
    ctx->pc = 0x26CC74u;
label_26cc74:
    // 0x26cc74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26cc78:
    // 0x26cc78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc7c:
    // 0x26cc7c: 0x0  nop
    ctx->pc = 0x26cc7cu;
    // NOP
label_26cc80:
    // 0x26cc80: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26cc84:
    // 0x26cc84: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cc88:
    // 0x26cc88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26cc8c:
    // 0x26cc8c: 0x100001f8  b           . + 4 + (0x1F8 << 2)
label_26cc90:
    if (ctx->pc == 0x26CC90u) {
        ctx->pc = 0x26CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC8Cu;
        // 0x26cc90: 0x24110019  addiu       $s1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC94u;
        goto label_26cc94;
    }
    ctx->pc = 0x26CC8Cu;
    {
        const bool branch_taken_0x26cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC8Cu;
        // 0x26cc90: 0x24110019  addiu       $s1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc8c) {
            ctx->pc = 0x26D470u;
            goto label_26d470;
        }
    }
    ctx->pc = 0x26CC94u;
label_26cc94:
    // 0x26cc94: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26cc98:
    // 0x26cc98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26cc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26cc9c:
    // 0x26cc9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cca0:
    // 0x26cca0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cca4:
    // 0x26cca4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26cca8:
    // 0x26cca8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26cca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26ccac:
    // 0x26ccac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ccacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ccb0:
    // 0x26ccb0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26ccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26ccb4:
    // 0x26ccb4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26ccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26ccb8:
    // 0x26ccb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26ccb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26ccbc:
    // 0x26ccbc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26ccbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26ccc0:
    // 0x26ccc0: 0xc0c28ac  jal         func_30A2B0
label_26ccc4:
    if (ctx->pc == 0x26CCC4u) {
        ctx->pc = 0x26CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCC0u;
        // 0x26ccc4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCC8u;
        goto label_26ccc8;
    }
    ctx->pc = 0x26CCC0u;
    SET_GPR_U32(ctx, 31, 0x26CCC8u);
    ctx->pc = 0x26CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCC0u;
    // 0x26ccc4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26CCC0u, 0x26CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCC8u;
label_26ccc8:
    // 0x26ccc8: 0x8e030734  lw          $v1, 0x734($s0)
    ctx->pc = 0x26ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
label_26cccc:
    // 0x26cccc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_26ccd0:
    if (ctx->pc == 0x26CCD0u) {
        ctx->pc = 0x26CCD4u;
        goto label_26ccd4;
    }
    ctx->pc = 0x26CCCCu;
    {
        const bool branch_taken_0x26cccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cccc) {
            ctx->pc = 0x26CD1Cu;
            goto label_26cd1c;
        }
    }
    ctx->pc = 0x26CCD4u;
label_26ccd4:
    // 0x26ccd4: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x26ccd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_26ccd8:
    // 0x26ccd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26ccdc:
    if (ctx->pc == 0x26CCDCu) {
        ctx->pc = 0x26CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCD8u;
        // 0x26ccdc: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCE0u;
        goto label_26cce0;
    }
    ctx->pc = 0x26CCD8u;
    {
        const bool branch_taken_0x26ccd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCD8u;
        // 0x26ccdc: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccd8) {
            ctx->pc = 0x26CCECu;
            goto label_26ccec;
        }
    }
    ctx->pc = 0x26CCE0u;
label_26cce0:
    // 0x26cce0: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x26cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_26cce4:
    // 0x26cce4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26cce8:
    if (ctx->pc == 0x26CCE8u) {
        ctx->pc = 0x26CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCE4u;
        // 0x26cce8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCECu;
        goto label_26ccec;
    }
    ctx->pc = 0x26CCE4u;
    {
        const bool branch_taken_0x26cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCE4u;
        // 0x26cce8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cce4) {
            ctx->pc = 0x26CCF0u;
            goto label_26ccf0;
        }
    }
    ctx->pc = 0x26CCECu;
label_26ccec:
    // 0x26ccec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ccecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ccf0:
    // 0x26ccf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26ccf4:
    if (ctx->pc == 0x26CCF4u) {
        ctx->pc = 0x26CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCF0u;
        // 0x26ccf4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCF8u;
        goto label_26ccf8;
    }
    ctx->pc = 0x26CCF0u;
    {
        const bool branch_taken_0x26ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCF0u;
        // 0x26ccf4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccf0) {
            ctx->pc = 0x26CD1Cu;
            goto label_26cd1c;
        }
    }
    ctx->pc = 0x26CCF8u;
label_26ccf8:
    // 0x26ccf8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26ccfc:
    // 0x26ccfc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ccfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cd00:
    // 0x26cd00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cd00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cd04:
    // 0x26cd04: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x26cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_26cd08:
    // 0x26cd08: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26cd0c:
    // 0x26cd0c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26cd10:
    // 0x26cd10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26cd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cd14:
    // 0x26cd14: 0xc0c28ac  jal         func_30A2B0
label_26cd18:
    if (ctx->pc == 0x26CD18u) {
        ctx->pc = 0x26CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD14u;
        // 0x26cd18: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD1Cu;
        goto label_26cd1c;
    }
    ctx->pc = 0x26CD14u;
    SET_GPR_U32(ctx, 31, 0x26CD1Cu);
    ctx->pc = 0x26CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD14u;
    // 0x26cd18: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26CD14u, 0x26CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD1Cu;
label_26cd1c:
    // 0x26cd1c: 0xc0c7408  jal         func_31D020
label_26cd20:
    if (ctx->pc == 0x26CD20u) {
        ctx->pc = 0x26CD24u;
        goto label_26cd24;
    }
    ctx->pc = 0x26CD1Cu;
    SET_GPR_U32(ctx, 31, 0x26CD24u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CD1Cu, 0x26CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD24u;
label_26cd24:
    // 0x26cd24: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x26cd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cd28:
    // 0x26cd28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cd28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cd2c:
    // 0x26cd2c: 0xc0c7408  jal         func_31D020
label_26cd30:
    if (ctx->pc == 0x26CD30u) {
        ctx->pc = 0x26CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD2Cu;
        // 0x26cd30: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD34u;
        goto label_26cd34;
    }
    ctx->pc = 0x26CD2Cu;
    SET_GPR_U32(ctx, 31, 0x26CD34u);
    ctx->pc = 0x26CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD2Cu;
    // 0x26cd30: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CD2Cu, 0x26CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD34u;
label_26cd34:
    // 0x26cd34: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x26cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cd38:
    // 0x26cd38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cd38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cd3c:
    // 0x26cd3c: 0xc0c7408  jal         func_31D020
label_26cd40:
    if (ctx->pc == 0x26CD40u) {
        ctx->pc = 0x26CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD3Cu;
        // 0x26cd40: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD44u;
        goto label_26cd44;
    }
    ctx->pc = 0x26CD3Cu;
    SET_GPR_U32(ctx, 31, 0x26CD44u);
    ctx->pc = 0x26CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD3Cu;
    // 0x26cd40: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CD3Cu, 0x26CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD44u;
label_26cd44:
    // 0x26cd44: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x26cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cd48:
    // 0x26cd48: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_26cd4c:
    // 0x26cd4c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cd50:
    // 0x26cd50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cd54:
    // 0x26cd54: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x26cd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_26cd58:
    // 0x26cd58: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26cd5c:
    // 0x26cd5c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x26cd5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26cd60:
    // 0x26cd60: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x26cd60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26cd64:
    // 0x26cd64: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26cd64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26cd68:
    // 0x26cd68: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26cd6c:
    // 0x26cd6c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26cd6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26cd70:
    // 0x26cd70: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26cd74:
    // 0x26cd74: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cd78:
    // 0x26cd78: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x26cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cd7c:
    // 0x26cd7c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x26cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cd80:
    // 0x26cd80: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26cd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26cd84:
    // 0x26cd84: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26cd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26cd88:
    // 0x26cd88: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26cd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26cd8c:
    // 0x26cd8c: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26cd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26cd90:
    // 0x26cd90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26cd94:
    // 0x26cd94: 0xc04078a  jal         func_101E28
label_26cd98:
    if (ctx->pc == 0x26CD98u) {
        ctx->pc = 0x26CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD94u;
        // 0x26cd98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD9Cu;
        goto label_26cd9c;
    }
    ctx->pc = 0x26CD94u;
    SET_GPR_U32(ctx, 31, 0x26CD9Cu);
    ctx->pc = 0x26CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD94u;
    // 0x26cd98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x26CD94u, 0x26CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD9Cu;
label_26cd9c:
    // 0x26cd9c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x26cd9cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26cda0:
    // 0x26cda0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cda4:
    // 0x26cda4: 0x0  nop
    ctx->pc = 0x26cda4u;
    // NOP
label_26cda8:
    // 0x26cda8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26cda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cdac:
    // 0x26cdac: 0x0  nop
    ctx->pc = 0x26cdacu;
    // NOP
label_26cdb0:
    // 0x26cdb0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_26cdb4:
    if (ctx->pc == 0x26CDB4u) {
        ctx->pc = 0x26CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDB0u;
        // 0x26cdb4: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDB8u;
        goto label_26cdb8;
    }
    ctx->pc = 0x26CDB0u;
    {
        const bool branch_taken_0x26cdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDB0u;
        // 0x26cdb4: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdb0) {
            ctx->pc = 0x26CDF4u;
            goto label_26cdf4;
        }
    }
    ctx->pc = 0x26CDB8u;
label_26cdb8:
    // 0x26cdb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26cdbc:
    // 0x26cdbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26cdc0:
    // 0x26cdc0: 0x0  nop
    ctx->pc = 0x26cdc0u;
    // NOP
label_26cdc4:
    // 0x26cdc4: 0x0  nop
    ctx->pc = 0x26cdc4u;
    // NOP
label_26cdc8:
    // 0x26cdc8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x26cdc8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_26cdcc:
    // 0x26cdcc: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x26cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26cdd0:
    // 0x26cdd0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x26cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cdd4:
    // 0x26cdd4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x26cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cdd8:
    // 0x26cdd8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x26cdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_26cddc:
    // 0x26cddc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x26cddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_26cde0:
    // 0x26cde0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x26cde0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_26cde4:
    // 0x26cde4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x26cde4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_26cde8:
    // 0x26cde8: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x26cde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_26cdec:
    // 0x26cdec: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x26cdecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_26cdf0:
    // 0x26cdf0: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x26cdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_26cdf4:
    // 0x26cdf4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26cdf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26cdf8:
    // 0x26cdf8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26cdfc:
    // 0x26cdfc: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x26cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26ce00:
    // 0x26ce00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26ce04:
    // 0x26ce04: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x26ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ce08:
    // 0x26ce08: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26ce0c:
    // 0x26ce0c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x26ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ce10:
    // 0x26ce10: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x26ce10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26ce14:
    // 0x26ce14: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26ce14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_26ce18:
    // 0x26ce18: 0xc07e804  jal         func_1FA010
label_26ce1c:
    if (ctx->pc == 0x26CE1Cu) {
        ctx->pc = 0x26CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE18u;
        // 0x26ce1c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE20u;
        goto label_26ce20;
    }
    ctx->pc = 0x26CE18u;
    SET_GPR_U32(ctx, 31, 0x26CE20u);
    ctx->pc = 0x26CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE18u;
    // 0x26ce1c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26CE18u, 0x26CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE20u;
label_26ce20:
    // 0x26ce20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26ce24:
    // 0x26ce24: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26ce24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26ce28:
    // 0x26ce28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26ce28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26ce2c:
    // 0x26ce2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ce2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce30:
    // 0x26ce30: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_26ce34:
    if (ctx->pc == 0x26CE34u) {
        ctx->pc = 0x26CE38u;
        goto label_26ce38;
    }
    ctx->pc = 0x26CE30u;
    {
        const bool branch_taken_0x26ce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26ce30) {
            ctx->pc = 0x26CE40u;
            goto label_26ce40;
        }
    }
    ctx->pc = 0x26CE38u;
label_26ce38:
    // 0x26ce38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26ce38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26ce3c:
    // 0x26ce3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ce3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce40:
    // 0x26ce40: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26ce40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26ce44:
    // 0x26ce44: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26ce44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26ce48:
    // 0x26ce48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26ce48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26ce4c:
    // 0x26ce4c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26ce4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26ce50:
    // 0x26ce50: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26ce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_26ce54:
    // 0x26ce54: 0x100002ff  b           . + 4 + (0x2FF << 2)
label_26ce58:
    if (ctx->pc == 0x26CE58u) {
        ctx->pc = 0x26CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE54u;
        // 0x26ce58: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE5Cu;
        goto label_26ce5c;
    }
    ctx->pc = 0x26CE54u;
    {
        const bool branch_taken_0x26ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE54u;
        // 0x26ce58: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce54) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26CE5Cu;
label_26ce5c:
    // 0x26ce5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26ce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26ce60:
    // 0x26ce60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ce60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ce64:
    // 0x26ce64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ce64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce68:
    // 0x26ce68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ce6c:
    // 0x26ce6c: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_26ce70:
    if (ctx->pc == 0x26CE70u) {
        ctx->pc = 0x26CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE6Cu;
        // 0x26ce70: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE74u;
        goto label_26ce74;
    }
    ctx->pc = 0x26CE6Cu;
    {
        const bool branch_taken_0x26ce6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE6Cu;
        // 0x26ce70: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce6c) {
            ctx->pc = 0x26CE8Cu;
            goto label_26ce8c;
        }
    }
    ctx->pc = 0x26CE74u;
label_26ce74:
    // 0x26ce74: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_26ce78:
    if (ctx->pc == 0x26CE78u) {
        ctx->pc = 0x26CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE74u;
        // 0x26ce78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE7Cu;
        goto label_26ce7c;
    }
    ctx->pc = 0x26CE74u;
    {
        const bool branch_taken_0x26ce74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE74u;
        // 0x26ce78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce74) {
            ctx->pc = 0x26CEB4u;
            goto label_26ceb4;
        }
    }
    ctx->pc = 0x26CE7Cu;
label_26ce7c:
    // 0x26ce7c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_26ce80:
    if (ctx->pc == 0x26CE80u) {
        ctx->pc = 0x26CE84u;
        goto label_26ce84;
    }
    ctx->pc = 0x26CE7Cu;
    {
        const bool branch_taken_0x26ce7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ce7c) {
            ctx->pc = 0x26CEA0u;
            goto label_26cea0;
        }
    }
    ctx->pc = 0x26CE84u;
label_26ce84:
    // 0x26ce84: 0x1000000b  b           . + 4 + (0xB << 2)
label_26ce88:
    if (ctx->pc == 0x26CE88u) {
        ctx->pc = 0x26CE8Cu;
        goto label_26ce8c;
    }
    ctx->pc = 0x26CE84u;
    {
        const bool branch_taken_0x26ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce84) {
            ctx->pc = 0x26CEB4u;
            goto label_26ceb4;
        }
    }
    ctx->pc = 0x26CE8Cu;
label_26ce8c:
    // 0x26ce8c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26ce8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26ce90:
    // 0x26ce90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ce90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ce94:
    // 0x26ce94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ce94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce98:
    // 0x26ce98: 0x10000006  b           . + 4 + (0x6 << 2)
label_26ce9c:
    if (ctx->pc == 0x26CE9Cu) {
        ctx->pc = 0x26CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE98u;
        // 0x26ce9c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEA0u;
        goto label_26cea0;
    }
    ctx->pc = 0x26CE98u;
    {
        const bool branch_taken_0x26ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE98u;
        // 0x26ce9c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce98) {
            ctx->pc = 0x26CEB4u;
            goto label_26ceb4;
        }
    }
    ctx->pc = 0x26CEA0u;
label_26cea0:
    // 0x26cea0: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x26cea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_26cea4:
    // 0x26cea4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cea8:
    // 0x26cea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ceac:
    // 0x26ceac: 0x0  nop
    ctx->pc = 0x26ceacu;
    // NOP
label_26ceb0:
    // 0x26ceb0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26ceb4:
    // 0x26ceb4: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26ceb8:
    // 0x26ceb8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26ceb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26cebc:
    // 0x26cebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cec0:
    // 0x26cec0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cec4:
    // 0x26cec4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26cec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26cec8:
    // 0x26cec8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26cec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26cecc:
    // 0x26cecc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ceccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ced0:
    // 0x26ced0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26ced4:
    // 0x26ced4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26ced8:
    // 0x26ced8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cedc:
    // 0x26cedc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26cedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26cee0:
    // 0x26cee0: 0xc0c28ac  jal         func_30A2B0
label_26cee4:
    if (ctx->pc == 0x26CEE4u) {
        ctx->pc = 0x26CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEE0u;
        // 0x26cee4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEE8u;
        goto label_26cee8;
    }
    ctx->pc = 0x26CEE0u;
    SET_GPR_U32(ctx, 31, 0x26CEE8u);
    ctx->pc = 0x26CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEE0u;
    // 0x26cee4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26CEE0u, 0x26CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEE8u;
label_26cee8:
    // 0x26cee8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x26cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_26ceec:
    // 0x26ceec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cef0:
    // 0x26cef0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26cef4:
    // 0x26cef4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x26cef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26cef8:
    // 0x26cef8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x26cef8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26cefc:
    // 0x26cefc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26cefcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26cf00:
    // 0x26cf00: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26cf04:
    // 0x26cf04: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26cf04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26cf08:
    // 0x26cf08: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26cf0c:
    // 0x26cf0c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x26cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cf10:
    // 0x26cf10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26cf10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cf14:
    // 0x26cf14: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x26cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cf18:
    // 0x26cf18: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x26cf18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26cf1c:
    // 0x26cf1c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x26cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cf20:
    // 0x26cf20: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x26cf20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_26cf24:
    // 0x26cf24: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x26cf24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_26cf28:
    // 0x26cf28: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x26cf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26cf2c:
    // 0x26cf2c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x26cf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26cf30:
    // 0x26cf30: 0xc07e060  jal         func_1F8180
label_26cf34:
    if (ctx->pc == 0x26CF34u) {
        ctx->pc = 0x26CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF30u;
        // 0x26cf34: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF38u;
        goto label_26cf38;
    }
    ctx->pc = 0x26CF30u;
    SET_GPR_U32(ctx, 31, 0x26CF38u);
    ctx->pc = 0x26CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF30u;
    // 0x26cf34: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26CF30u, 0x26CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF38u;
label_26cf38:
    // 0x26cf38: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_26cf3c:
    // 0x26cf3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26cf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26cf40:
    // 0x26cf40: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26cf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26cf44:
    // 0x26cf44: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x26cf44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_26cf48:
    // 0x26cf48: 0xc0b687e  jal         func_2DA1F8
label_26cf4c:
    if (ctx->pc == 0x26CF4Cu) {
        ctx->pc = 0x26CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF48u;
        // 0x26cf4c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF50u;
        goto label_26cf50;
    }
    ctx->pc = 0x26CF48u;
    SET_GPR_U32(ctx, 31, 0x26CF50u);
    ctx->pc = 0x26CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF48u;
    // 0x26cf4c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26CF48u, 0x26CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF50u;
label_26cf50:
    // 0x26cf50: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cf54:
    // 0x26cf54: 0xc07df52  jal         func_1F7D48
label_26cf58:
    if (ctx->pc == 0x26CF58u) {
        ctx->pc = 0x26CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF54u;
        // 0x26cf58: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF5Cu;
        goto label_26cf5c;
    }
    ctx->pc = 0x26CF54u;
    SET_GPR_U32(ctx, 31, 0x26CF5Cu);
    ctx->pc = 0x26CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF54u;
    // 0x26cf58: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26CF54u, 0x26CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF5Cu;
label_26cf5c:
    // 0x26cf5c: 0x10000286  b           . + 4 + (0x286 << 2)
label_26cf60:
    if (ctx->pc == 0x26CF60u) {
        ctx->pc = 0x26CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF5Cu;
        // 0x26cf60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF64u;
        goto label_26cf64;
    }
    ctx->pc = 0x26CF5Cu;
    {
        const bool branch_taken_0x26cf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF5Cu;
        // 0x26cf60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf5c) {
            ctx->pc = 0x26D978u;
            goto label_26d978;
        }
    }
    ctx->pc = 0x26CF64u;
label_26cf64:
    // 0x26cf64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26cf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26cf68:
    // 0x26cf68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cf68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf6c:
    // 0x26cf6c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26cf70:
    // 0x26cf70: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26cf74:
    // 0x26cf74: 0xc07e804  jal         func_1FA010
label_26cf78:
    if (ctx->pc == 0x26CF78u) {
        ctx->pc = 0x26CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF74u;
        // 0x26cf78: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF7Cu;
        goto label_26cf7c;
    }
    ctx->pc = 0x26CF74u;
    SET_GPR_U32(ctx, 31, 0x26CF7Cu);
    ctx->pc = 0x26CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF74u;
    // 0x26cf78: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26CF74u, 0x26CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF7Cu;
label_26cf7c:
    // 0x26cf7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26cf80:
    // 0x26cf80: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_26cf84:
    if (ctx->pc == 0x26CF84u) {
        ctx->pc = 0x26CF88u;
        goto label_26cf88;
    }
    ctx->pc = 0x26CF80u;
    {
        const bool branch_taken_0x26cf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26cf80) {
            ctx->pc = 0x26CF9Cu;
            goto label_26cf9c;
        }
    }
    ctx->pc = 0x26CF88u;
label_26cf88:
    // 0x26cf88: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26cf8c:
    // 0x26cf8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cf90:
    // 0x26cf90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf94:
    // 0x26cf94: 0x0  nop
    ctx->pc = 0x26cf94u;
    // NOP
label_26cf98:
    // 0x26cf98: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26cf9c:
    // 0x26cf9c: 0xc0c7408  jal         func_31D020
label_26cfa0:
    if (ctx->pc == 0x26CFA0u) {
        ctx->pc = 0x26CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF9Cu;
        // 0x26cfa0: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFA4u;
        goto label_26cfa4;
    }
    ctx->pc = 0x26CF9Cu;
    SET_GPR_U32(ctx, 31, 0x26CFA4u);
    ctx->pc = 0x26CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF9Cu;
    // 0x26cfa0: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CF9Cu, 0x26CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFA4u;
label_26cfa4:
    // 0x26cfa4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26cfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26cfa8:
    // 0x26cfa8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26cfa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26cfac:
    // 0x26cfac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26cfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26cfb0:
    // 0x26cfb0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26cfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26cfb4:
    // 0x26cfb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cfb8:
    // 0x26cfb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26cfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26cfbc:
    // 0x26cfbc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x26cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cfc0:
    // 0x26cfc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26cfc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26cfc4:
    // 0x26cfc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cfc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cfc8:
    // 0x26cfc8: 0xc0c7408  jal         func_31D020
label_26cfcc:
    if (ctx->pc == 0x26CFCCu) {
        ctx->pc = 0x26CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFC8u;
        // 0x26cfcc: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFD0u;
        goto label_26cfd0;
    }
    ctx->pc = 0x26CFC8u;
    SET_GPR_U32(ctx, 31, 0x26CFD0u);
    ctx->pc = 0x26CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFC8u;
    // 0x26cfcc: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CFC8u, 0x26CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFD0u;
label_26cfd0:
    // 0x26cfd0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26cfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26cfd4:
    // 0x26cfd4: 0xc0c7408  jal         func_31D020
label_26cfd8:
    if (ctx->pc == 0x26CFD8u) {
        ctx->pc = 0x26CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFD4u;
        // 0x26cfd8: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFDCu;
        goto label_26cfdc;
    }
    ctx->pc = 0x26CFD4u;
    SET_GPR_U32(ctx, 31, 0x26CFDCu);
    ctx->pc = 0x26CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFD4u;
    // 0x26cfd8: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26CFD4u, 0x26CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFDCu;
label_26cfdc:
    // 0x26cfdc: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cfe0:
    // 0x26cfe0: 0xc051e62  jal         func_147988
label_26cfe4:
    if (ctx->pc == 0x26CFE4u) {
        ctx->pc = 0x26CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFE0u;
        // 0x26cfe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFE8u;
        goto label_26cfe8;
    }
    ctx->pc = 0x26CFE0u;
    SET_GPR_U32(ctx, 31, 0x26CFE8u);
    ctx->pc = 0x26CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFE0u;
    // 0x26cfe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26CFE0u, 0x26CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFE8u;
label_26cfe8:
    // 0x26cfe8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26cfec:
    // 0x26cfec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26cfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26cff0:
    // 0x26cff0: 0xc0c28ac  jal         func_30A2B0
label_26cff4:
    if (ctx->pc == 0x26CFF4u) {
        ctx->pc = 0x26CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFF0u;
        // 0x26cff4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFF8u;
        goto label_26cff8;
    }
    ctx->pc = 0x26CFF0u;
    SET_GPR_U32(ctx, 31, 0x26CFF8u);
    ctx->pc = 0x26CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFF0u;
    // 0x26cff4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26CFF0u, 0x26CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFF8u;
label_26cff8:
    // 0x26cff8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26cffc:
    // 0x26cffc: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x26cffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d000:
    // 0x26d000: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26d004:
    // 0x26d004: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26d004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26d008:
    // 0x26d008: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x26d008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_26d00c:
    // 0x26d00c: 0x1000012a  b           . + 4 + (0x12A << 2)
label_26d010:
    if (ctx->pc == 0x26D010u) {
        ctx->pc = 0x26D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D00Cu;
        // 0x26d010: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D014u;
        goto label_26d014;
    }
    ctx->pc = 0x26D00Cu;
    {
        const bool branch_taken_0x26d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D00Cu;
        // 0x26d010: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d00c) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26D014u;
label_26d014:
    // 0x26d014: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26d014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26d018:
    // 0x26d018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d01c:
    // 0x26d01c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d020:
    // 0x26d020: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26d024:
    // 0x26d024: 0xc07e804  jal         func_1FA010
label_26d028:
    if (ctx->pc == 0x26D028u) {
        ctx->pc = 0x26D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D024u;
        // 0x26d028: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D02Cu;
        goto label_26d02c;
    }
    ctx->pc = 0x26D024u;
    SET_GPR_U32(ctx, 31, 0x26D02Cu);
    ctx->pc = 0x26D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D024u;
    // 0x26d028: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26D024u, 0x26D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D02Cu;
label_26d02c:
    // 0x26d02c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d030:
    // 0x26d030: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_26d034:
    if (ctx->pc == 0x26D034u) {
        ctx->pc = 0x26D038u;
        goto label_26d038;
    }
    ctx->pc = 0x26D030u;
    {
        const bool branch_taken_0x26d030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d030) {
            ctx->pc = 0x26D04Cu;
            goto label_26d04c;
        }
    }
    ctx->pc = 0x26D038u;
label_26d038:
    // 0x26d038: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26d038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26d03c:
    // 0x26d03c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d040:
    // 0x26d040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d044:
    // 0x26d044: 0x0  nop
    ctx->pc = 0x26d044u;
    // NOP
label_26d048:
    // 0x26d048: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26d048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26d04c:
    // 0x26d04c: 0xc0c7408  jal         func_31D020
label_26d050:
    if (ctx->pc == 0x26D050u) {
        ctx->pc = 0x26D054u;
        goto label_26d054;
    }
    ctx->pc = 0x26D04Cu;
    SET_GPR_U32(ctx, 31, 0x26D054u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26D04Cu, 0x26D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D054u;
label_26d054:
    // 0x26d054: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26d054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26d058:
    // 0x26d058: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d05c:
    // 0x26d05c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26d05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26d060:
    // 0x26d060: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x26d060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_26d064:
    // 0x26d064: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x26d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d068:
    // 0x26d068: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26d068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26d06c:
    // 0x26d06c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26d06cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d070:
    // 0x26d070: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_26d074:
    if (ctx->pc == 0x26D074u) {
        ctx->pc = 0x26D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D070u;
        // 0x26d074: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D078u;
        goto label_26d078;
    }
    ctx->pc = 0x26D070u;
    {
        const bool branch_taken_0x26d070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D070u;
        // 0x26d074: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d070) {
            ctx->pc = 0x26D0E4u;
            goto label_26d0e4;
        }
    }
    ctx->pc = 0x26D078u;
label_26d078:
    // 0x26d078: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26d078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26d07c:
    // 0x26d07c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x26d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26d080:
    // 0x26d080: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x26d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_26d084:
    // 0x26d084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d088:
    // 0x26d088: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26d088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26d08c:
    // 0x26d08c: 0x800008  jr          $a0
label_26d090:
    if (ctx->pc == 0x26D090u) {
        ctx->pc = 0x26D094u;
        goto label_26d094;
    }
    ctx->pc = 0x26D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D094u: goto label_26d094;
            case 0x26D0A8u: goto label_26d0a8;
            case 0x26D0BCu: goto label_26d0bc;
            case 0x26D0D0u: goto label_26d0d0;
            case 0x26D0E4u: goto label_26d0e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D08Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D094u;
label_26d094:
    // 0x26d094: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d098:
    // 0x26d098: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d09c:
    // 0x26d09c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d0a0:
    // 0x26d0a0: 0x10000010  b           . + 4 + (0x10 << 2)
label_26d0a4:
    if (ctx->pc == 0x26D0A4u) {
        ctx->pc = 0x26D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0A0u;
        // 0x26d0a4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D0A8u;
        goto label_26d0a8;
    }
    ctx->pc = 0x26D0A0u;
    {
        const bool branch_taken_0x26d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0A0u;
        // 0x26d0a4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0a0) {
            ctx->pc = 0x26D0E4u;
            goto label_26d0e4;
        }
    }
    ctx->pc = 0x26D0A8u;
label_26d0a8:
    // 0x26d0a8: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x26d0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_26d0ac:
    // 0x26d0ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d0b0:
    // 0x26d0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d0b4:
    // 0x26d0b4: 0x1000000b  b           . + 4 + (0xB << 2)
label_26d0b8:
    if (ctx->pc == 0x26D0B8u) {
        ctx->pc = 0x26D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0B4u;
        // 0x26d0b8: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D0BCu;
        goto label_26d0bc;
    }
    ctx->pc = 0x26D0B4u;
    {
        const bool branch_taken_0x26d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0B4u;
        // 0x26d0b8: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0b4) {
            ctx->pc = 0x26D0E4u;
            goto label_26d0e4;
        }
    }
    ctx->pc = 0x26D0BCu;
label_26d0bc:
    // 0x26d0bc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x26d0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_26d0c0:
    // 0x26d0c0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d0c4:
    // 0x26d0c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d0c8:
    // 0x26d0c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_26d0cc:
    if (ctx->pc == 0x26D0CCu) {
        ctx->pc = 0x26D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0C8u;
        // 0x26d0cc: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D0D0u;
        goto label_26d0d0;
    }
    ctx->pc = 0x26D0C8u;
    {
        const bool branch_taken_0x26d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0C8u;
        // 0x26d0cc: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0c8) {
            ctx->pc = 0x26D0E4u;
            goto label_26d0e4;
        }
    }
    ctx->pc = 0x26D0D0u;
label_26d0d0:
    // 0x26d0d0: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x26d0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_26d0d4:
    // 0x26d0d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d0d8:
    // 0x26d0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d0dc:
    // 0x26d0dc: 0x0  nop
    ctx->pc = 0x26d0dcu;
    // NOP
label_26d0e0:
    // 0x26d0e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26d0e4:
    // 0x26d0e4: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d0e8:
    // 0x26d0e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d0ec:
    // 0x26d0ec: 0xc051e62  jal         func_147988
label_26d0f0:
    if (ctx->pc == 0x26D0F0u) {
        ctx->pc = 0x26D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0ECu;
        // 0x26d0f0: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D0F4u;
        goto label_26d0f4;
    }
    ctx->pc = 0x26D0ECu;
    SET_GPR_U32(ctx, 31, 0x26D0F4u);
    ctx->pc = 0x26D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0ECu;
    // 0x26d0f0: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D0ECu, 0x26D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0F4u;
label_26d0f4:
    // 0x26d0f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d0f8:
    // 0x26d0f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d0fc:
    // 0x26d0fc: 0xc0c28ac  jal         func_30A2B0
label_26d100:
    if (ctx->pc == 0x26D100u) {
        ctx->pc = 0x26D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0FCu;
        // 0x26d100: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D104u;
        goto label_26d104;
    }
    ctx->pc = 0x26D0FCu;
    SET_GPR_U32(ctx, 31, 0x26D104u);
    ctx->pc = 0x26D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0FCu;
    // 0x26d100: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D0FCu, 0x26D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D104u;
label_26d104:
    // 0x26d104: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d108:
    // 0x26d108: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d10c:
    // 0x26d10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d110:
    // 0x26d110: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26d110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d114:
    // 0x26d114: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26d114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26d118:
    // 0x26d118: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26d11c:
    // 0x26d11c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26d11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d120:
    // 0x26d120: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26d120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d124:
    // 0x26d124: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_26d128:
    if (ctx->pc == 0x26D128u) {
        ctx->pc = 0x26D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D124u;
        // 0x26d128: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D12Cu;
        goto label_26d12c;
    }
    ctx->pc = 0x26D124u;
    {
        const bool branch_taken_0x26d124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D124u;
        // 0x26d128: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d124) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26D12Cu;
label_26d12c:
    // 0x26d12c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26d12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26d130:
    // 0x26d130: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d134:
    // 0x26d134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d138:
    // 0x26d138: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d13c:
    // 0x26d13c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26d140:
    // 0x26d140: 0xc07e804  jal         func_1FA010
label_26d144:
    if (ctx->pc == 0x26D144u) {
        ctx->pc = 0x26D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D140u;
        // 0x26d144: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D148u;
        goto label_26d148;
    }
    ctx->pc = 0x26D140u;
    SET_GPR_U32(ctx, 31, 0x26D148u);
    ctx->pc = 0x26D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D140u;
    // 0x26d144: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26D140u, 0x26D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D148u;
label_26d148:
    // 0x26d148: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d14c:
    // 0x26d14c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26d150:
    if (ctx->pc == 0x26D150u) {
        ctx->pc = 0x26D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D14Cu;
        // 0x26d150: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D154u;
        goto label_26d154;
    }
    ctx->pc = 0x26D14Cu;
    {
        const bool branch_taken_0x26d14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d14c) {
            ctx->pc = 0x26D150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D14Cu;
            // 0x26d150: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D168u;
            goto label_26d168;
        }
    }
    ctx->pc = 0x26D154u;
label_26d154:
    // 0x26d154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26d154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26d158:
    // 0x26d158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d15c:
    // 0x26d15c: 0x0  nop
    ctx->pc = 0x26d15cu;
    // NOP
label_26d160:
    // 0x26d160: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26d160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26d164:
    // 0x26d164: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d168:
    // 0x26d168: 0xc051e62  jal         func_147988
label_26d16c:
    if (ctx->pc == 0x26D16Cu) {
        ctx->pc = 0x26D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D168u;
        // 0x26d16c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D170u;
        goto label_26d170;
    }
    ctx->pc = 0x26D168u;
    SET_GPR_U32(ctx, 31, 0x26D170u);
    ctx->pc = 0x26D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D168u;
    // 0x26d16c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D168u, 0x26D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D170u;
label_26d170:
    // 0x26d170: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d174:
    // 0x26d174: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d178:
    // 0x26d178: 0xc0c28ac  jal         func_30A2B0
label_26d17c:
    if (ctx->pc == 0x26D17Cu) {
        ctx->pc = 0x26D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D178u;
        // 0x26d17c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D180u;
        goto label_26d180;
    }
    ctx->pc = 0x26D178u;
    SET_GPR_U32(ctx, 31, 0x26D180u);
    ctx->pc = 0x26D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D178u;
    // 0x26d17c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D178u, 0x26D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D180u;
label_26d180:
    // 0x26d180: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26d184:
    // 0x26d184: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26d184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d188:
    // 0x26d188: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_26d18c:
    if (ctx->pc == 0x26D18Cu) {
        ctx->pc = 0x26D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D188u;
        // 0x26d18c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D190u;
        goto label_26d190;
    }
    ctx->pc = 0x26D188u;
    {
        const bool branch_taken_0x26d188 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D188u;
        // 0x26d18c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d188) {
            ctx->pc = 0x26D1ACu;
            goto label_26d1ac;
        }
    }
    ctx->pc = 0x26D190u;
label_26d190:
    // 0x26d190: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d194:
    // 0x26d194: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d198:
    // 0x26d198: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d19c:
    // 0x26d19c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26d19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d1a0:
    // 0x26d1a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d1a4:
    // 0x26d1a4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d1a8:
    // 0x26d1a8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d1ac:
    // 0x26d1ac: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x26d1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26d1b0:
    // 0x26d1b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26d1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_26d1b4:
    // 0x26d1b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d1b8:
    // 0x26d1b8: 0x0  nop
    ctx->pc = 0x26d1b8u;
    // NOP
label_26d1bc:
    // 0x26d1bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26d1bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26d1c0:
    // 0x26d1c0: 0x10000224  b           . + 4 + (0x224 << 2)
label_26d1c4:
    if (ctx->pc == 0x26D1C4u) {
        ctx->pc = 0x26D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1C0u;
        // 0x26d1c4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1C8u;
        goto label_26d1c8;
    }
    ctx->pc = 0x26D1C0u;
    {
        const bool branch_taken_0x26d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1C0u;
        // 0x26d1c4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1c0) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26D1C8u;
label_26d1c8:
    // 0x26d1c8: 0x3c013edf  lui         $at, 0x3EDF
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16095 << 16));
label_26d1cc:
    // 0x26d1cc: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x26d1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
label_26d1d0:
    // 0x26d1d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d1d4:
    // 0x26d1d4: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x26d1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_26d1d8:
    // 0x26d1d8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x26d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_26d1dc:
    // 0x26d1dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26d1e0:
    if (ctx->pc == 0x26D1E0u) {
        ctx->pc = 0x26D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1DCu;
        // 0x26d1e0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1E4u;
        goto label_26d1e4;
    }
    ctx->pc = 0x26D1DCu;
    {
        const bool branch_taken_0x26d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1DCu;
        // 0x26d1e0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1dc) {
            ctx->pc = 0x26D200u;
            goto label_26d200;
        }
    }
    ctx->pc = 0x26D1E4u;
label_26d1e4:
    // 0x26d1e4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26d1e8:
    // 0x26d1e8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x26d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26d1ec:
    // 0x26d1ec: 0x24425730  addiu       $v0, $v0, 0x5730
    ctx->pc = 0x26d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22320));
label_26d1f0:
    // 0x26d1f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d1f4:
    // 0x26d1f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26d1f8:
    // 0x26d1f8: 0x800008  jr          $a0
label_26d1fc:
    if (ctx->pc == 0x26D1FCu) {
        ctx->pc = 0x26D200u;
        goto label_26d200;
    }
    ctx->pc = 0x26D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D200u: goto label_26d200;
            case 0x26D214u: goto label_26d214;
            case 0x26D228u: goto label_26d228;
            case 0x26D23Cu: goto label_26d23c;
            case 0x26D250u: goto label_26d250;
            case 0x26D264u: goto label_26d264;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D1F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D200u;
label_26d200:
    // 0x26d200: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x26d200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_26d204:
    // 0x26d204: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26d204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26d208:
    // 0x26d208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d20c:
    // 0x26d20c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_26d210:
    if (ctx->pc == 0x26D210u) {
        ctx->pc = 0x26D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D20Cu;
        // 0x26d210: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D214u;
        goto label_26d214;
    }
    ctx->pc = 0x26D20Cu;
    {
        const bool branch_taken_0x26d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D20Cu;
        // 0x26d210: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d20c) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D214u;
label_26d214:
    // 0x26d214: 0x3c01bef1  lui         $at, 0xBEF1
    ctx->pc = 0x26d214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48881 << 16));
label_26d218:
    // 0x26d218: 0x34214639  ori         $at, $at, 0x4639
    ctx->pc = 0x26d218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17977);
label_26d21c:
    // 0x26d21c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d220:
    // 0x26d220: 0x10000015  b           . + 4 + (0x15 << 2)
label_26d224:
    if (ctx->pc == 0x26D224u) {
        ctx->pc = 0x26D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D220u;
        // 0x26d224: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D228u;
        goto label_26d228;
    }
    ctx->pc = 0x26D220u;
    {
        const bool branch_taken_0x26d220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D220u;
        // 0x26d224: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d220) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D228u;
label_26d228:
    // 0x26d228: 0x3c01be20  lui         $at, 0xBE20
    ctx->pc = 0x26d228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48672 << 16));
label_26d22c:
    // 0x26d22c: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x26d22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_26d230:
    // 0x26d230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d234:
    // 0x26d234: 0x10000010  b           . + 4 + (0x10 << 2)
label_26d238:
    if (ctx->pc == 0x26D238u) {
        ctx->pc = 0x26D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D234u;
        // 0x26d238: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D23Cu;
        goto label_26d23c;
    }
    ctx->pc = 0x26D234u;
    {
        const bool branch_taken_0x26d234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D234u;
        // 0x26d238: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d234) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D23Cu;
label_26d23c:
    // 0x26d23c: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x26d23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
label_26d240:
    // 0x26d240: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x26d240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_26d244:
    // 0x26d244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d248:
    // 0x26d248: 0x1000000b  b           . + 4 + (0xB << 2)
label_26d24c:
    if (ctx->pc == 0x26D24Cu) {
        ctx->pc = 0x26D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D248u;
        // 0x26d24c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D250u;
        goto label_26d250;
    }
    ctx->pc = 0x26D248u;
    {
        const bool branch_taken_0x26d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D248u;
        // 0x26d24c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d248) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D250u;
label_26d250:
    // 0x26d250: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x26d250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
label_26d254:
    // 0x26d254: 0x34214639  ori         $at, $at, 0x4639
    ctx->pc = 0x26d254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17977);
label_26d258:
    // 0x26d258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d25c:
    // 0x26d25c: 0x10000006  b           . + 4 + (0x6 << 2)
label_26d260:
    if (ctx->pc == 0x26D260u) {
        ctx->pc = 0x26D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D25Cu;
        // 0x26d260: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D264u;
        goto label_26d264;
    }
    ctx->pc = 0x26D25Cu;
    {
        const bool branch_taken_0x26d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D25Cu;
        // 0x26d260: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d25c) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D264u;
label_26d264:
    // 0x26d264: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26d264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_26d268:
    // 0x26d268: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26d268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26d26c:
    // 0x26d26c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d270:
    // 0x26d270: 0x0  nop
    ctx->pc = 0x26d270u;
    // NOP
label_26d274:
    // 0x26d274: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x26d274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_26d278:
    // 0x26d278: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x26d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d27c:
    // 0x26d27c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x26d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d280:
    // 0x26d280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26d280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26d284:
    // 0x26d284: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26d284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26d288:
    // 0x26d288: 0xc07df52  jal         func_1F7D48
label_26d28c:
    if (ctx->pc == 0x26D28Cu) {
        ctx->pc = 0x26D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D288u;
        // 0x26d28c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D290u;
        goto label_26d290;
    }
    ctx->pc = 0x26D288u;
    SET_GPR_U32(ctx, 31, 0x26D290u);
    ctx->pc = 0x26D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D288u;
    // 0x26d28c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26D288u, 0x26D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D290u;
label_26d290:
    // 0x26d290: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x26d290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_26d294:
    // 0x26d294: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d298:
    // 0x26d298: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x26d298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_26d29c:
    // 0x26d29c: 0xc051dca  jal         func_147728
label_26d2a0:
    if (ctx->pc == 0x26D2A0u) {
        ctx->pc = 0x26D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D29Cu;
        // 0x26d2a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2A4u;
        goto label_26d2a4;
    }
    ctx->pc = 0x26D29Cu;
    SET_GPR_U32(ctx, 31, 0x26D2A4u);
    ctx->pc = 0x26D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D29Cu;
    // 0x26d2a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x26D29Cu, 0x26D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2A4u;
label_26d2a4:
    // 0x26d2a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26d2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26d2a8:
    // 0x26d2a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d2ac:
    // 0x26d2ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d2b0:
    // 0x26d2b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d2b4:
    // 0x26d2b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26d2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d2b8:
    // 0x26d2b8: 0xc0c28ac  jal         func_30A2B0
label_26d2bc:
    if (ctx->pc == 0x26D2BCu) {
        ctx->pc = 0x26D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2B8u;
        // 0x26d2bc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2C0u;
        goto label_26d2c0;
    }
    ctx->pc = 0x26D2B8u;
    SET_GPR_U32(ctx, 31, 0x26D2C0u);
    ctx->pc = 0x26D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2B8u;
    // 0x26d2bc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D2B8u, 0x26D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2C0u;
label_26d2c0:
    // 0x26d2c0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26d2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26d2c4:
    // 0x26d2c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26d2c8:
    // 0x26d2c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26d2cc:
    // 0x26d2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26d2d0:
    if (ctx->pc == 0x26D2D0u) {
        ctx->pc = 0x26D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2CCu;
        // 0x26d2d0: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2D4u;
        goto label_26d2d4;
    }
    ctx->pc = 0x26D2CCu;
    {
        const bool branch_taken_0x26d2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2CCu;
        // 0x26d2d0: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2cc) {
            ctx->pc = 0x26D2E0u;
            goto label_26d2e0;
        }
    }
    ctx->pc = 0x26D2D4u;
label_26d2d4:
    // 0x26d2d4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26d2d8:
    // 0x26d2d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_26d2dc:
    if (ctx->pc == 0x26D2DCu) {
        ctx->pc = 0x26D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2D8u;
        // 0x26d2dc: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2E0u;
        goto label_26d2e0;
    }
    ctx->pc = 0x26D2D8u;
    {
        const bool branch_taken_0x26d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2D8u;
        // 0x26d2dc: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2d8) {
            ctx->pc = 0x26D2E4u;
            goto label_26d2e4;
        }
    }
    ctx->pc = 0x26D2E0u;
label_26d2e0:
    // 0x26d2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d2e4:
    // 0x26d2e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26d2e8:
    if (ctx->pc == 0x26D2E8u) {
        ctx->pc = 0x26D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2E4u;
        // 0x26d2e8: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2ECu;
        goto label_26d2ec;
    }
    ctx->pc = 0x26D2E4u;
    {
        const bool branch_taken_0x26d2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2E4u;
        // 0x26d2e8: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2e4) {
            ctx->pc = 0x26D314u;
            goto label_26d314;
        }
    }
    ctx->pc = 0x26D2ECu;
label_26d2ec:
    // 0x26d2ec: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26d2f0:
    // 0x26d2f0: 0x126201d8  beq         $s3, $v0, . + 4 + (0x1D8 << 2)
label_26d2f4:
    if (ctx->pc == 0x26D2F4u) {
        ctx->pc = 0x26D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2F0u;
        // 0x26d2f4: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2F8u;
        goto label_26d2f8;
    }
    ctx->pc = 0x26D2F0u;
    {
        const bool branch_taken_0x26d2f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2F0u;
        // 0x26d2f4: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2f0) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26D2F8u;
label_26d2f8:
    // 0x26d2f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d2fc:
    // 0x26d2fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26d2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d300:
    // 0x26d300: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d304:
    // 0x26d304: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26d304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d308:
    // 0x26d308: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d30c:
    // 0x26d30c: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_26d310:
    if (ctx->pc == 0x26D310u) {
        ctx->pc = 0x26D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D30Cu;
        // 0x26d310: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D314u;
        goto label_26d314;
    }
    ctx->pc = 0x26D30Cu;
    {
        const bool branch_taken_0x26d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D30Cu;
        // 0x26d310: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d30c) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26D314u;
label_26d314:
    // 0x26d314: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26d318:
    // 0x26d318: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_26d31c:
    if (ctx->pc == 0x26D31Cu) {
        ctx->pc = 0x26D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D318u;
        // 0x26d31c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D320u;
        goto label_26d320;
    }
    ctx->pc = 0x26D318u;
    {
        const bool branch_taken_0x26d318 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D318u;
        // 0x26d31c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d318) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26D320u;
label_26d320:
    // 0x26d320: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d324:
    // 0x26d324: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26d324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d328:
    // 0x26d328: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d32c:
    // 0x26d32c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26d32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d330:
    // 0x26d330: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d334:
    // 0x26d334: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26d334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d338:
    // 0x26d338: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d33c:
    // 0x26d33c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26d33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26d340:
    // 0x26d340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d344:
    // 0x26d344: 0x0  nop
    ctx->pc = 0x26d344u;
    // NOP
label_26d348:
    // 0x26d348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26d348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26d34c:
    // 0x26d34c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d350:
    // 0x26d350: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_26d354:
    if (ctx->pc == 0x26D354u) {
        ctx->pc = 0x26D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D350u;
        // 0x26d354: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D358u;
        goto label_26d358;
    }
    ctx->pc = 0x26D350u;
    {
        const bool branch_taken_0x26d350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D350u;
        // 0x26d354: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d350) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26D358u;
label_26d358:
    // 0x26d358: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26d358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26d35c:
    // 0x26d35c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d360:
    // 0x26d360: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d364:
    // 0x26d364: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26d368:
    // 0x26d368: 0xc07e804  jal         func_1FA010
label_26d36c:
    if (ctx->pc == 0x26D36Cu) {
        ctx->pc = 0x26D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D368u;
        // 0x26d36c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D370u;
        goto label_26d370;
    }
    ctx->pc = 0x26D368u;
    SET_GPR_U32(ctx, 31, 0x26D370u);
    ctx->pc = 0x26D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D368u;
    // 0x26d36c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26D368u, 0x26D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D370u;
label_26d370:
    // 0x26d370: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d374:
    // 0x26d374: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26d378:
    if (ctx->pc == 0x26D378u) {
        ctx->pc = 0x26D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D374u;
        // 0x26d378: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D37Cu;
        goto label_26d37c;
    }
    ctx->pc = 0x26D374u;
    {
        const bool branch_taken_0x26d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d374) {
            ctx->pc = 0x26D378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D374u;
            // 0x26d378: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D394u;
            goto label_26d394;
        }
    }
    ctx->pc = 0x26D37Cu;
label_26d37c:
    // 0x26d37c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26d37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26d380:
    // 0x26d380: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d384:
    // 0x26d384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d388:
    // 0x26d388: 0x0  nop
    ctx->pc = 0x26d388u;
    // NOP
label_26d38c:
    // 0x26d38c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26d38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26d390:
    // 0x26d390: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d394:
    // 0x26d394: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d398:
    // 0x26d398: 0xc051e62  jal         func_147988
label_26d39c:
    if (ctx->pc == 0x26D39Cu) {
        ctx->pc = 0x26D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D398u;
        // 0x26d39c: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3A0u;
        goto label_26d3a0;
    }
    ctx->pc = 0x26D398u;
    SET_GPR_U32(ctx, 31, 0x26D3A0u);
    ctx->pc = 0x26D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D398u;
    // 0x26d39c: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D398u, 0x26D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3A0u;
label_26d3a0:
    // 0x26d3a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d3a4:
    // 0x26d3a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d3a8:
    // 0x26d3a8: 0xc0c28ac  jal         func_30A2B0
label_26d3ac:
    if (ctx->pc == 0x26D3ACu) {
        ctx->pc = 0x26D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3A8u;
        // 0x26d3ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3B0u;
        goto label_26d3b0;
    }
    ctx->pc = 0x26D3A8u;
    SET_GPR_U32(ctx, 31, 0x26D3B0u);
    ctx->pc = 0x26D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3A8u;
    // 0x26d3ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D3A8u, 0x26D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3B0u;
label_26d3b0:
    // 0x26d3b0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d3b4:
    // 0x26d3b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d3b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d3b8:
    // 0x26d3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d3bc:
    // 0x26d3bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d3c0:
    // 0x26d3c0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26d3c4:
    // 0x26d3c4: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26d3c8:
    // 0x26d3c8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26d3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d3cc:
    // 0x26d3cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26d3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d3d0:
    // 0x26d3d0: 0x10000039  b           . + 4 + (0x39 << 2)
label_26d3d4:
    if (ctx->pc == 0x26D3D4u) {
        ctx->pc = 0x26D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D0u;
        // 0x26d3d4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3D8u;
        goto label_26d3d8;
    }
    ctx->pc = 0x26D3D0u;
    {
        const bool branch_taken_0x26d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D0u;
        // 0x26d3d4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3d0) {
            ctx->pc = 0x26D4B8u;
            goto label_26d4b8;
        }
    }
    ctx->pc = 0x26D3D8u;
label_26d3d8:
    // 0x26d3d8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d3dc:
    // 0x26d3dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d3e0:
    // 0x26d3e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26d3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26d3e4:
    // 0x26d3e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d3e8:
    // 0x26d3e8: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d3ec:
    // 0x26d3ec: 0x2411001a  addiu       $s1, $zero, 0x1A
    ctx->pc = 0x26d3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_26d3f0:
    // 0x26d3f0: 0xc051e62  jal         func_147988
label_26d3f4:
    if (ctx->pc == 0x26D3F4u) {
        ctx->pc = 0x26D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3F0u;
        // 0x26d3f4: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3F8u;
        goto label_26d3f8;
    }
    ctx->pc = 0x26D3F0u;
    SET_GPR_U32(ctx, 31, 0x26D3F8u);
    ctx->pc = 0x26D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3F0u;
    // 0x26d3f4: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D3F0u, 0x26D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3F8u;
label_26d3f8:
    // 0x26d3f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d3fc:
    // 0x26d3fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d400:
    // 0x26d400: 0xc0c28ac  jal         func_30A2B0
label_26d404:
    if (ctx->pc == 0x26D404u) {
        ctx->pc = 0x26D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D400u;
        // 0x26d404: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D408u;
        goto label_26d408;
    }
    ctx->pc = 0x26D400u;
    SET_GPR_U32(ctx, 31, 0x26D408u);
    ctx->pc = 0x26D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D400u;
    // 0x26d404: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D400u, 0x26D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D408u;
label_26d408:
    // 0x26d408: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26d40c:
    // 0x26d40c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26d40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26d410:
    // 0x26d410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d414:
    // 0x26d414: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d418:
    // 0x26d418: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x26d418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d41c:
    // 0x26d41c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26d420:
    // 0x26d420: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d424:
    // 0x26d424: 0x10000023  b           . + 4 + (0x23 << 2)
label_26d428:
    if (ctx->pc == 0x26D428u) {
        ctx->pc = 0x26D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D424u;
        // 0x26d428: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D42Cu;
        goto label_26d42c;
    }
    ctx->pc = 0x26D424u;
    {
        const bool branch_taken_0x26d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D424u;
        // 0x26d428: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d424) {
            ctx->pc = 0x26D4B4u;
            goto label_26d4b4;
        }
    }
    ctx->pc = 0x26D42Cu;
label_26d42c:
    // 0x26d42c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26d42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26d430:
    // 0x26d430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d434:
    // 0x26d434: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d438:
    // 0x26d438: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26d43c:
    // 0x26d43c: 0xc07e804  jal         func_1FA010
label_26d440:
    if (ctx->pc == 0x26D440u) {
        ctx->pc = 0x26D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D43Cu;
        // 0x26d440: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D444u;
        goto label_26d444;
    }
    ctx->pc = 0x26D43Cu;
    SET_GPR_U32(ctx, 31, 0x26D444u);
    ctx->pc = 0x26D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D43Cu;
    // 0x26d440: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26D43Cu, 0x26D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D444u;
label_26d444:
    // 0x26d444: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d448:
    // 0x26d448: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_26d44c:
    if (ctx->pc == 0x26D44Cu) {
        ctx->pc = 0x26D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D448u;
        // 0x26d44c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D450u;
        goto label_26d450;
    }
    ctx->pc = 0x26D448u;
    {
        const bool branch_taken_0x26d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d448) {
            ctx->pc = 0x26D44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D448u;
            // 0x26d44c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D468u;
            goto label_26d468;
        }
    }
    ctx->pc = 0x26D450u;
label_26d450:
    // 0x26d450: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26d454:
    // 0x26d454: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d458:
    // 0x26d458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d45c:
    // 0x26d45c: 0x0  nop
    ctx->pc = 0x26d45cu;
    // NOP
label_26d460:
    // 0x26d460: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26d460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26d464:
    // 0x26d464: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x26d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d468:
    // 0x26d468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d46c:
    // 0x26d46c: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x26d46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_26d470:
    // 0x26d470: 0xc051e62  jal         func_147988
label_26d474:
    if (ctx->pc == 0x26D474u) {
        ctx->pc = 0x26D478u;
        goto label_26d478;
    }
    ctx->pc = 0x26D470u;
    SET_GPR_U32(ctx, 31, 0x26D478u);
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D470u, 0x26D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D478u;
label_26d478:
    // 0x26d478: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d47c:
    // 0x26d47c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d480:
    // 0x26d480: 0xc0c28ac  jal         func_30A2B0
label_26d484:
    if (ctx->pc == 0x26D484u) {
        ctx->pc = 0x26D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D480u;
        // 0x26d484: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D488u;
        goto label_26d488;
    }
    ctx->pc = 0x26D480u;
    SET_GPR_U32(ctx, 31, 0x26D488u);
    ctx->pc = 0x26D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D480u;
    // 0x26d484: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D480u, 0x26D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D488u;
label_26d488:
    // 0x26d488: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26d488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26d48c:
    // 0x26d48c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26d48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26d490:
    // 0x26d490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d494:
    // 0x26d494: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d498:
    // 0x26d498: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d49c:
    // 0x26d49c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d4a0:
    // 0x26d4a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d4a4:
    // 0x26d4a4: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26d4a8:
    // 0x26d4a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d4ac:
    // 0x26d4ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26d4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d4b0:
    // 0x26d4b0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26d4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d4b4:
    // 0x26d4b4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_26d4b8:
    // 0x26d4b8: 0xc0c28ac  jal         func_30A2B0
label_26d4bc:
    if (ctx->pc == 0x26D4BCu) {
        ctx->pc = 0x26D4C0u;
        goto label_26d4c0;
    }
    ctx->pc = 0x26D4B8u;
    SET_GPR_U32(ctx, 31, 0x26D4C0u);
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D4B8u, 0x26D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4C0u;
label_26d4c0:
    // 0x26d4c0: 0x10000164  b           . + 4 + (0x164 << 2)
label_26d4c4:
    if (ctx->pc == 0x26D4C4u) {
        ctx->pc = 0x26D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4C0u;
        // 0x26d4c4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4C8u;
        goto label_26d4c8;
    }
    ctx->pc = 0x26D4C0u;
    {
        const bool branch_taken_0x26d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4C0u;
        // 0x26d4c4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4c0) {
            ctx->pc = 0x26DA54u;
            goto label_26da54;
        }
    }
    ctx->pc = 0x26D4C8u;
label_26d4c8:
    // 0x26d4c8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26d4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26d4cc:
    // 0x26d4cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d4d0:
    // 0x26d4d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d4d4:
    // 0x26d4d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d4d8:
    // 0x26d4d8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26d4dc:
    // 0x26d4dc: 0xc07e804  jal         func_1FA010
label_26d4e0:
    if (ctx->pc == 0x26D4E0u) {
        ctx->pc = 0x26D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4DCu;
        // 0x26d4e0: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4E4u;
        goto label_26d4e4;
    }
    ctx->pc = 0x26D4DCu;
    SET_GPR_U32(ctx, 31, 0x26D4E4u);
    ctx->pc = 0x26D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4DCu;
    // 0x26d4e0: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26D4DCu, 0x26D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4E4u;
label_26d4e4:
    // 0x26d4e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d4e8:
    // 0x26d4e8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26d4ec:
    if (ctx->pc == 0x26D4ECu) {
        ctx->pc = 0x26D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4E8u;
        // 0x26d4ec: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4F0u;
        goto label_26d4f0;
    }
    ctx->pc = 0x26D4E8u;
    {
        const bool branch_taken_0x26d4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d4e8) {
            ctx->pc = 0x26D4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4E8u;
            // 0x26d4ec: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D504u;
            goto label_26d504;
        }
    }
    ctx->pc = 0x26D4F0u;
label_26d4f0:
    // 0x26d4f0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26d4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_26d4f4:
    // 0x26d4f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d4f8:
    // 0x26d4f8: 0x0  nop
    ctx->pc = 0x26d4f8u;
    // NOP
label_26d4fc:
    // 0x26d4fc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26d500:
    // 0x26d500: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26d504:
    // 0x26d504: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26d504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d508:
    // 0x26d508: 0x52620008  beql        $s3, $v0, . + 4 + (0x8 << 2)
label_26d50c:
    if (ctx->pc == 0x26D50Cu) {
        ctx->pc = 0x26D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D508u;
        // 0x26d50c: 0x8e8400f0  lw          $a0, 0xF0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D510u;
        goto label_26d510;
    }
    ctx->pc = 0x26D508u;
    {
        const bool branch_taken_0x26d508 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d508) {
            ctx->pc = 0x26D50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D508u;
            // 0x26d50c: 0x8e8400f0  lw          $a0, 0xF0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D52Cu;
            goto label_26d52c;
        }
    }
    ctx->pc = 0x26D510u;
label_26d510:
    // 0x26d510: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d514:
    // 0x26d514: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d518:
    // 0x26d518: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d51c:
    // 0x26d51c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26d51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d520:
    // 0x26d520: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d524:
    // 0x26d524: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26d524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d528:
    // 0x26d528: 0x8e8400f0  lw          $a0, 0xF0($s4)
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_26d52c:
    // 0x26d52c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d530:
    // 0x26d530: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26d530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26d534:
    // 0x26d534: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x26d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d538:
    // 0x26d538: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26d53c:
    // 0x26d53c: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x26d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_26d540:
    // 0x26d540: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26d544:
    if (ctx->pc == 0x26D544u) {
        ctx->pc = 0x26D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D540u;
        // 0x26d544: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D548u;
        goto label_26d548;
    }
    ctx->pc = 0x26D540u;
    {
        const bool branch_taken_0x26d540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D540u;
        // 0x26d544: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d540) {
            ctx->pc = 0x26D554u;
            goto label_26d554;
        }
    }
    ctx->pc = 0x26D548u;
label_26d548:
    // 0x26d548: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26d54c:
    // 0x26d54c: 0x10000002  b           . + 4 + (0x2 << 2)
label_26d550:
    if (ctx->pc == 0x26D550u) {
        ctx->pc = 0x26D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D54Cu;
        // 0x26d550: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D554u;
        goto label_26d554;
    }
    ctx->pc = 0x26D54Cu;
    {
        const bool branch_taken_0x26d54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D54Cu;
        // 0x26d550: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d54c) {
            ctx->pc = 0x26D558u;
            goto label_26d558;
        }
    }
    ctx->pc = 0x26D554u;
label_26d554:
    // 0x26d554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d558:
    // 0x26d558: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26d558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26d55c:
    // 0x26d55c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_26d560:
    // 0x26d560: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26d564:
    // 0x26d564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26d568:
    if (ctx->pc == 0x26D568u) {
        ctx->pc = 0x26D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D564u;
        // 0x26d568: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D56Cu;
        goto label_26d56c;
    }
    ctx->pc = 0x26D564u;
    {
        const bool branch_taken_0x26d564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D564u;
        // 0x26d568: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d564) {
            ctx->pc = 0x26D578u;
            goto label_26d578;
        }
    }
    ctx->pc = 0x26D56Cu;
label_26d56c:
    // 0x26d56c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26d570:
    // 0x26d570: 0x10000002  b           . + 4 + (0x2 << 2)
label_26d574:
    if (ctx->pc == 0x26D574u) {
        ctx->pc = 0x26D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D570u;
        // 0x26d574: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D578u;
        goto label_26d578;
    }
    ctx->pc = 0x26D570u;
    {
        const bool branch_taken_0x26d570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D570u;
        // 0x26d574: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d570) {
            ctx->pc = 0x26D57Cu;
            goto label_26d57c;
        }
    }
    ctx->pc = 0x26D578u;
label_26d578:
    // 0x26d578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d57c:
    // 0x26d57c: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
label_26d580:
    if (ctx->pc == 0x26D580u) {
        ctx->pc = 0x26D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D57Cu;
        // 0x26d580: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D584u;
        goto label_26d584;
    }
    ctx->pc = 0x26D57Cu;
    {
        const bool branch_taken_0x26d57c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D57Cu;
        // 0x26d580: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d57c) {
            ctx->pc = 0x26D604u;
            goto label_26d604;
        }
    }
    ctx->pc = 0x26D584u;
label_26d584:
    // 0x26d584: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_26d588:
    if (ctx->pc == 0x26D588u) {
        ctx->pc = 0x26D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D584u;
        // 0x26d588: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D58Cu;
        goto label_26d58c;
    }
    ctx->pc = 0x26D584u;
    {
        const bool branch_taken_0x26d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D584u;
        // 0x26d588: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d584) {
            ctx->pc = 0x26D604u;
            goto label_26d604;
        }
    }
    ctx->pc = 0x26D58Cu;
label_26d58c:
    // 0x26d58c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x26d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26d590:
    // 0x26d590: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x26d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_26d594:
    // 0x26d594: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26d594u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26d598:
    // 0x26d598: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x26d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d59c:
    // 0x26d59c: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x26d59cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_26d5a0:
    // 0x26d5a0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x26d5a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26d5a4:
    // 0x26d5a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26d5a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26d5a8:
    // 0x26d5a8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x26d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d5ac:
    // 0x26d5ac: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26d5acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26d5b0:
    // 0x26d5b0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d5b4:
    // 0x26d5b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26d5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26d5b8:
    // 0x26d5b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d5bc:
    // 0x26d5bc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x26d5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26d5c0:
    // 0x26d5c0: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x26d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d5c4:
    // 0x26d5c4: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x26d5c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_26d5c8:
    // 0x26d5c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26d5c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26d5cc:
    // 0x26d5cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26d5ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26d5d0:
    // 0x26d5d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26d5d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26d5d4:
    // 0x26d5d4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x26d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d5d8:
    // 0x26d5d8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26d5d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26d5dc:
    // 0x26d5dc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26d5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d5e0:
    // 0x26d5e0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x26d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d5e4:
    // 0x26d5e4: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x26d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d5e8:
    // 0x26d5e8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x26d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d5ec:
    // 0x26d5ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d5f0:
    // 0x26d5f0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x26d5f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d5f4:
    // 0x26d5f4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26d5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d5f8:
    // 0x26d5f8: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x26d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_26d5fc:
    // 0x26d5fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d600:
    // 0x26d600: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d604:
    // 0x26d604: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d608:
    // 0x26d608: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d60c:
    // 0x26d60c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d610:
    // 0x26d610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d614:
    // 0x26d614: 0x0  nop
    ctx->pc = 0x26d614u;
    // NOP
label_26d618:
    // 0x26d618: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26d618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26d61c:
    // 0x26d61c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d620:
    // 0x26d620: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26d624:
    // 0x26d624: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x26d624u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26d628:
    // 0x26d628: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x26d628u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26d62c:
    // 0x26d62c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26d62cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26d630:
    // 0x26d630: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26d630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d634:
    // 0x26d634: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x26d634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26d638:
    // 0x26d638: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26d638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d63c:
    // 0x26d63c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d640:
    // 0x26d640: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x26d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d644:
    // 0x26d644: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d648:
    // 0x26d648: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26d648u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26d64c:
    // 0x26d64c: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26d64cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_26d650:
    // 0x26d650: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26d650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26d654:
    // 0x26d654: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x26d654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26d658:
    // 0x26d658: 0xc07e060  jal         func_1F8180
label_26d65c:
    if (ctx->pc == 0x26D65Cu) {
        ctx->pc = 0x26D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D658u;
        // 0x26d65c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D660u;
        goto label_26d660;
    }
    ctx->pc = 0x26D658u;
    SET_GPR_U32(ctx, 31, 0x26D660u);
    ctx->pc = 0x26D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D658u;
    // 0x26d65c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26D658u, 0x26D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D660u;
label_26d660:
    // 0x26d660: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x26d660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_26d664:
    // 0x26d664: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26d668:
    if (ctx->pc == 0x26D668u) {
        ctx->pc = 0x26D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D664u;
        // 0x26d668: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D66Cu;
        goto label_26d66c;
    }
    ctx->pc = 0x26D664u;
    {
        const bool branch_taken_0x26d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D664u;
        // 0x26d668: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d664) {
            ctx->pc = 0x26D688u;
            goto label_26d688;
        }
    }
    ctx->pc = 0x26D66Cu;
label_26d66c:
    // 0x26d66c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26d670:
    // 0x26d670: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26d674:
    // 0x26d674: 0x24425750  addiu       $v0, $v0, 0x5750
    ctx->pc = 0x26d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
label_26d678:
    // 0x26d678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d67c:
    // 0x26d67c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26d680:
    // 0x26d680: 0x800008  jr          $a0
label_26d684:
    if (ctx->pc == 0x26D684u) {
        ctx->pc = 0x26D688u;
        goto label_26d688;
    }
    ctx->pc = 0x26D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D688u: goto label_26d688;
            case 0x26D694u: goto label_26d694;
            case 0x26D6A8u: goto label_26d6a8;
            case 0x26D6BCu: goto label_26d6bc;
            case 0x26D6D0u: goto label_26d6d0;
            case 0x26D6DCu: goto label_26d6dc;
            case 0x26D6F0u: goto label_26d6f0;
            case 0x26D704u: goto label_26d704;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D688u;
label_26d688:
    // 0x26d688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d68c:
    // 0x26d68c: 0x10000022  b           . + 4 + (0x22 << 2)
label_26d690:
    if (ctx->pc == 0x26D690u) {
        ctx->pc = 0x26D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D68Cu;
        // 0x26d690: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D694u;
        goto label_26d694;
    }
    ctx->pc = 0x26D68Cu;
    {
        const bool branch_taken_0x26d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D68Cu;
        // 0x26d690: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d68c) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D694u;
label_26d694:
    // 0x26d694: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
label_26d698:
    // 0x26d698: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d69c:
    // 0x26d69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d6a0:
    // 0x26d6a0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26d6a4:
    if (ctx->pc == 0x26D6A4u) {
        ctx->pc = 0x26D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6A0u;
        // 0x26d6a4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6A8u;
        goto label_26d6a8;
    }
    ctx->pc = 0x26D6A0u;
    {
        const bool branch_taken_0x26d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6A0u;
        // 0x26d6a4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6a0) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D6A8u;
label_26d6a8:
    // 0x26d6a8: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x26d6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_26d6ac:
    // 0x26d6ac: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d6b0:
    // 0x26d6b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d6b4:
    // 0x26d6b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_26d6b8:
    if (ctx->pc == 0x26D6B8u) {
        ctx->pc = 0x26D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6B4u;
        // 0x26d6b8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6BCu;
        goto label_26d6bc;
    }
    ctx->pc = 0x26D6B4u;
    {
        const bool branch_taken_0x26d6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6B4u;
        // 0x26d6b8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6b4) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D6BCu;
label_26d6bc:
    // 0x26d6bc: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x26d6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_26d6c0:
    // 0x26d6c0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26d6c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_26d6c4:
    // 0x26d6c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d6c8:
    // 0x26d6c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_26d6cc:
    if (ctx->pc == 0x26D6CCu) {
        ctx->pc = 0x26D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6C8u;
        // 0x26d6cc: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6D0u;
        goto label_26d6d0;
    }
    ctx->pc = 0x26D6C8u;
    {
        const bool branch_taken_0x26d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6C8u;
        // 0x26d6cc: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6c8) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D6D0u;
label_26d6d0:
    // 0x26d6d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d6d4:
    // 0x26d6d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_26d6d8:
    if (ctx->pc == 0x26D6D8u) {
        ctx->pc = 0x26D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6D4u;
        // 0x26d6d8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6DCu;
        goto label_26d6dc;
    }
    ctx->pc = 0x26D6D4u;
    {
        const bool branch_taken_0x26d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6D4u;
        // 0x26d6d8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6d4) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D6DCu;
label_26d6dc:
    // 0x26d6dc: 0x3c01bdb2  lui         $at, 0xBDB2
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48562 << 16));
label_26d6e0:
    // 0x26d6e0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d6e4:
    // 0x26d6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d6e8:
    // 0x26d6e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_26d6ec:
    if (ctx->pc == 0x26D6ECu) {
        ctx->pc = 0x26D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6E8u;
        // 0x26d6ec: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6F0u;
        goto label_26d6f0;
    }
    ctx->pc = 0x26D6E8u;
    {
        const bool branch_taken_0x26d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6E8u;
        // 0x26d6ec: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6e8) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D6F0u;
label_26d6f0:
    // 0x26d6f0: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x26d6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
label_26d6f4:
    // 0x26d6f4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d6f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d6f8:
    // 0x26d6f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d6fc:
    // 0x26d6fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_26d700:
    if (ctx->pc == 0x26D700u) {
        ctx->pc = 0x26D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6FCu;
        // 0x26d700: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D704u;
        goto label_26d704;
    }
    ctx->pc = 0x26D6FCu;
    {
        const bool branch_taken_0x26d6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6FCu;
        // 0x26d700: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6fc) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D704u;
label_26d704:
    // 0x26d704: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x26d704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
label_26d708:
    // 0x26d708: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26d708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_26d70c:
    // 0x26d70c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d710:
    // 0x26d710: 0x0  nop
    ctx->pc = 0x26d710u;
    // NOP
label_26d714:
    // 0x26d714: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x26d714u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_26d718:
    // 0x26d718: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d71c:
    // 0x26d71c: 0x10000097  b           . + 4 + (0x97 << 2)
label_26d720:
    if (ctx->pc == 0x26D720u) {
        ctx->pc = 0x26D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D71Cu;
        // 0x26d720: 0x2411001f  addiu       $s1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D724u;
        goto label_26d724;
    }
    ctx->pc = 0x26D71Cu;
    {
        const bool branch_taken_0x26d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D71Cu;
        // 0x26d720: 0x2411001f  addiu       $s1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d71c) {
            ctx->pc = 0x26D97Cu;
            goto label_26d97c;
        }
    }
    ctx->pc = 0x26D724u;
label_26d724:
    // 0x26d724: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26d724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26d728:
    // 0x26d728: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d72c:
    // 0x26d72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d730:
    // 0x26d730: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d734:
    // 0x26d734: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_26d738:
    // 0x26d738: 0xc07e804  jal         func_1FA010
label_26d73c:
    if (ctx->pc == 0x26D73Cu) {
        ctx->pc = 0x26D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D738u;
        // 0x26d73c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D740u;
        goto label_26d740;
    }
    ctx->pc = 0x26D738u;
    SET_GPR_U32(ctx, 31, 0x26D740u);
    ctx->pc = 0x26D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D738u;
    // 0x26d73c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26D738u, 0x26D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D740u;
label_26d740:
    // 0x26d740: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26d744:
    // 0x26d744: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_26d748:
    if (ctx->pc == 0x26D748u) {
        ctx->pc = 0x26D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D744u;
        // 0x26d748: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D74Cu;
        goto label_26d74c;
    }
    ctx->pc = 0x26D744u;
    {
        const bool branch_taken_0x26d744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d744) {
            ctx->pc = 0x26D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D744u;
            // 0x26d748: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D760u;
            goto label_26d760;
        }
    }
    ctx->pc = 0x26D74Cu;
label_26d74c:
    // 0x26d74c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26d750:
    // 0x26d750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d754:
    // 0x26d754: 0x0  nop
    ctx->pc = 0x26d754u;
    // NOP
label_26d758:
    // 0x26d758: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26d758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26d75c:
    // 0x26d75c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26d760:
    // 0x26d760: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26d760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26d764:
    // 0x26d764: 0x52620008  beql        $s3, $v0, . + 4 + (0x8 << 2)
label_26d768:
    if (ctx->pc == 0x26D768u) {
        ctx->pc = 0x26D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D764u;
        // 0x26d768: 0x8e8400f0  lw          $a0, 0xF0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D76Cu;
        goto label_26d76c;
    }
    ctx->pc = 0x26D764u;
    {
        const bool branch_taken_0x26d764 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d764) {
            ctx->pc = 0x26D768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D764u;
            // 0x26d768: 0x8e8400f0  lw          $a0, 0xF0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D788u;
            goto label_26d788;
        }
    }
    ctx->pc = 0x26D76Cu;
label_26d76c:
    // 0x26d76c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d770:
    // 0x26d770: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26d770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d774:
    // 0x26d774: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d778:
    // 0x26d778: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26d778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d77c:
    // 0x26d77c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d780:
    // 0x26d780: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26d780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d784:
    // 0x26d784: 0x8e8400f0  lw          $a0, 0xF0($s4)
    ctx->pc = 0x26d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_26d788:
    // 0x26d788: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d78c:
    // 0x26d78c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26d78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26d790:
    // 0x26d790: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x26d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d794:
    // 0x26d794: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26d798:
    // 0x26d798: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x26d798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_26d79c:
    // 0x26d79c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26d7a0:
    if (ctx->pc == 0x26D7A0u) {
        ctx->pc = 0x26D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D79Cu;
        // 0x26d7a0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7A4u;
        goto label_26d7a4;
    }
    ctx->pc = 0x26D79Cu;
    {
        const bool branch_taken_0x26d79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D79Cu;
        // 0x26d7a0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d79c) {
            ctx->pc = 0x26D7B0u;
            goto label_26d7b0;
        }
    }
    ctx->pc = 0x26D7A4u;
label_26d7a4:
    // 0x26d7a4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26d7a8:
    // 0x26d7a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_26d7ac:
    if (ctx->pc == 0x26D7ACu) {
        ctx->pc = 0x26D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7A8u;
        // 0x26d7ac: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7B0u;
        goto label_26d7b0;
    }
    ctx->pc = 0x26D7A8u;
    {
        const bool branch_taken_0x26d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7A8u;
        // 0x26d7ac: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7a8) {
            ctx->pc = 0x26D7B4u;
            goto label_26d7b4;
        }
    }
    ctx->pc = 0x26D7B0u;
label_26d7b0:
    // 0x26d7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d7b4:
    // 0x26d7b4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x26d7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_26d7b8:
    // 0x26d7b8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_26d7bc:
    // 0x26d7bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26d7c0:
    // 0x26d7c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26d7c4:
    if (ctx->pc == 0x26D7C4u) {
        ctx->pc = 0x26D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7C0u;
        // 0x26d7c4: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7C8u;
        goto label_26d7c8;
    }
    ctx->pc = 0x26D7C0u;
    {
        const bool branch_taken_0x26d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7C0u;
        // 0x26d7c4: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7c0) {
            ctx->pc = 0x26D7D4u;
            goto label_26d7d4;
        }
    }
    ctx->pc = 0x26D7C8u;
label_26d7c8:
    // 0x26d7c8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_26d7cc:
    // 0x26d7cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_26d7d0:
    if (ctx->pc == 0x26D7D0u) {
        ctx->pc = 0x26D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7CCu;
        // 0x26d7d0: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7D4u;
        goto label_26d7d4;
    }
    ctx->pc = 0x26D7CCu;
    {
        const bool branch_taken_0x26d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7CCu;
        // 0x26d7d0: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7cc) {
            ctx->pc = 0x26D7D8u;
            goto label_26d7d8;
        }
    }
    ctx->pc = 0x26D7D4u;
label_26d7d4:
    // 0x26d7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d7d8:
    // 0x26d7d8: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
label_26d7dc:
    if (ctx->pc == 0x26D7DCu) {
        ctx->pc = 0x26D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D8u;
        // 0x26d7dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7E0u;
        goto label_26d7e0;
    }
    ctx->pc = 0x26D7D8u;
    {
        const bool branch_taken_0x26d7d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D8u;
        // 0x26d7dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7d8) {
            ctx->pc = 0x26D860u;
            goto label_26d860;
        }
    }
    ctx->pc = 0x26D7E0u;
label_26d7e0:
    // 0x26d7e0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_26d7e4:
    if (ctx->pc == 0x26D7E4u) {
        ctx->pc = 0x26D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7E0u;
        // 0x26d7e4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7E8u;
        goto label_26d7e8;
    }
    ctx->pc = 0x26D7E0u;
    {
        const bool branch_taken_0x26d7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7E0u;
        // 0x26d7e4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7e0) {
            ctx->pc = 0x26D860u;
            goto label_26d860;
        }
    }
    ctx->pc = 0x26D7E8u;
label_26d7e8:
    // 0x26d7e8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x26d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26d7ec:
    // 0x26d7ec: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x26d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_26d7f0:
    // 0x26d7f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26d7f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26d7f4:
    // 0x26d7f4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26d7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d7f8:
    // 0x26d7f8: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26d7f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26d7fc:
    // 0x26d7fc: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x26d7fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26d800:
    // 0x26d800: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26d800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26d804:
    // 0x26d804: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26d804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d808:
    // 0x26d808: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26d808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26d80c:
    // 0x26d80c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d810:
    // 0x26d810: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26d814:
    // 0x26d814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d818:
    // 0x26d818: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x26d818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26d81c:
    // 0x26d81c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d820:
    // 0x26d820: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26d820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26d824:
    // 0x26d824: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26d824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26d828:
    // 0x26d828: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26d828u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26d82c:
    // 0x26d82c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26d82cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26d830:
    // 0x26d830: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x26d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d834:
    // 0x26d834: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26d834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26d838:
    // 0x26d838: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d83c:
    // 0x26d83c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x26d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d840:
    // 0x26d840: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x26d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d844:
    // 0x26d844: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x26d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d848:
    // 0x26d848: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d84c:
    // 0x26d84c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x26d84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26d850:
    // 0x26d850: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26d850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26d854:
    // 0x26d854: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x26d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_26d858:
    // 0x26d858: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d85c:
    // 0x26d85c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d860:
    // 0x26d860: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d864:
    // 0x26d864: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_26d868:
    // 0x26d868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d86c:
    // 0x26d86c: 0x0  nop
    ctx->pc = 0x26d86cu;
    // NOP
label_26d870:
    // 0x26d870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26d870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26d874:
    // 0x26d874: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26d874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26d878:
    // 0x26d878: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x26d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_26d87c:
    // 0x26d87c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x26d87cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26d880:
    // 0x26d880: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x26d880u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26d884:
    // 0x26d884: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26d884u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26d888:
    // 0x26d888: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x26d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d88c:
    // 0x26d88c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x26d88cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26d890:
    // 0x26d890: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x26d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_26d894:
    // 0x26d894: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d898:
    // 0x26d898: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x26d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d89c:
    // 0x26d89c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d8a0:
    // 0x26d8a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26d8a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26d8a4:
    // 0x26d8a4: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26d8a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_26d8a8:
    // 0x26d8a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26d8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26d8ac:
    // 0x26d8ac: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x26d8acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26d8b0:
    // 0x26d8b0: 0xc07e060  jal         func_1F8180
label_26d8b4:
    if (ctx->pc == 0x26D8B4u) {
        ctx->pc = 0x26D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8B0u;
        // 0x26d8b4: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8B8u;
        goto label_26d8b8;
    }
    ctx->pc = 0x26D8B0u;
    SET_GPR_U32(ctx, 31, 0x26D8B8u);
    ctx->pc = 0x26D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8B0u;
    // 0x26d8b4: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26D8B0u, 0x26D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8B8u;
label_26d8b8:
    // 0x26d8b8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x26d8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_26d8bc:
    // 0x26d8bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26d8c0:
    if (ctx->pc == 0x26D8C0u) {
        ctx->pc = 0x26D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8BCu;
        // 0x26d8c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8C4u;
        goto label_26d8c4;
    }
    ctx->pc = 0x26D8BCu;
    {
        const bool branch_taken_0x26d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8BCu;
        // 0x26d8c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8bc) {
            ctx->pc = 0x26D8E0u;
            goto label_26d8e0;
        }
    }
    ctx->pc = 0x26D8C4u;
label_26d8c4:
    // 0x26d8c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26d8c8:
    // 0x26d8c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x26d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26d8cc:
    // 0x26d8cc: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x26d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
label_26d8d0:
    // 0x26d8d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d8d4:
    // 0x26d8d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26d8d8:
    // 0x26d8d8: 0x800008  jr          $a0
label_26d8dc:
    if (ctx->pc == 0x26D8DCu) {
        ctx->pc = 0x26D8E0u;
        goto label_26d8e0;
    }
    ctx->pc = 0x26D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D8E0u: goto label_26d8e0;
            case 0x26D8ECu: goto label_26d8ec;
            case 0x26D900u: goto label_26d900;
            case 0x26D914u: goto label_26d914;
            case 0x26D928u: goto label_26d928;
            case 0x26D934u: goto label_26d934;
            case 0x26D948u: goto label_26d948;
            case 0x26D95Cu: goto label_26d95c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D8D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D8E0u;
label_26d8e0:
    // 0x26d8e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d8e4:
    // 0x26d8e4: 0x10000020  b           . + 4 + (0x20 << 2)
label_26d8e8:
    if (ctx->pc == 0x26D8E8u) {
        ctx->pc = 0x26D8ECu;
        goto label_26d8ec;
    }
    ctx->pc = 0x26D8E4u;
    {
        const bool branch_taken_0x26d8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8e4) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D8ECu;
label_26d8ec:
    // 0x26d8ec: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_26d8f0:
    // 0x26d8f0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d8f4:
    // 0x26d8f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d8f8:
    // 0x26d8f8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_26d8fc:
    if (ctx->pc == 0x26D8FCu) {
        ctx->pc = 0x26D900u;
        goto label_26d900;
    }
    ctx->pc = 0x26D8F8u;
    {
        const bool branch_taken_0x26d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8f8) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D900u;
label_26d900:
    // 0x26d900: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
label_26d904:
    // 0x26d904: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d908:
    // 0x26d908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d90c:
    // 0x26d90c: 0x10000016  b           . + 4 + (0x16 << 2)
label_26d910:
    if (ctx->pc == 0x26D910u) {
        ctx->pc = 0x26D914u;
        goto label_26d914;
    }
    ctx->pc = 0x26D90Cu;
    {
        const bool branch_taken_0x26d90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d90c) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D914u;
label_26d914:
    // 0x26d914: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_26d918:
    // 0x26d918: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26d918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_26d91c:
    // 0x26d91c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d920:
    // 0x26d920: 0x10000011  b           . + 4 + (0x11 << 2)
label_26d924:
    if (ctx->pc == 0x26D924u) {
        ctx->pc = 0x26D928u;
        goto label_26d928;
    }
    ctx->pc = 0x26D920u;
    {
        const bool branch_taken_0x26d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d920) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D928u;
label_26d928:
    // 0x26d928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d92c:
    // 0x26d92c: 0x1000000e  b           . + 4 + (0xE << 2)
label_26d930:
    if (ctx->pc == 0x26D930u) {
        ctx->pc = 0x26D934u;
        goto label_26d934;
    }
    ctx->pc = 0x26D92Cu;
    {
        const bool branch_taken_0x26d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d92c) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D934u;
label_26d934:
    // 0x26d934: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
label_26d938:
    // 0x26d938: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d93c:
    // 0x26d93c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d940:
    // 0x26d940: 0x10000009  b           . + 4 + (0x9 << 2)
label_26d944:
    if (ctx->pc == 0x26D944u) {
        ctx->pc = 0x26D948u;
        goto label_26d948;
    }
    ctx->pc = 0x26D940u;
    {
        const bool branch_taken_0x26d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d940) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D948u;
label_26d948:
    // 0x26d948: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
label_26d94c:
    // 0x26d94c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d950:
    // 0x26d950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d954:
    // 0x26d954: 0x10000004  b           . + 4 + (0x4 << 2)
label_26d958:
    if (ctx->pc == 0x26D958u) {
        ctx->pc = 0x26D95Cu;
        goto label_26d95c;
    }
    ctx->pc = 0x26D954u;
    {
        const bool branch_taken_0x26d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d954) {
            ctx->pc = 0x26D968u;
            goto label_26d968;
        }
    }
    ctx->pc = 0x26D95Cu;
label_26d95c:
    // 0x26d95c: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_26d960:
    // 0x26d960: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26d960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_26d964:
    // 0x26d964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d968:
    // 0x26d968: 0xc07df52  jal         func_1F7D48
label_26d96c:
    if (ctx->pc == 0x26D96Cu) {
        ctx->pc = 0x26D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D968u;
        // 0x26d96c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D970u;
        goto label_26d970;
    }
    ctx->pc = 0x26D968u;
    SET_GPR_U32(ctx, 31, 0x26D970u);
    ctx->pc = 0x26D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D968u;
    // 0x26d96c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26D968u, 0x26D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D970u;
label_26d970:
    // 0x26d970: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x26d970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_26d974:
    // 0x26d974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d978:
    // 0x26d978: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26d978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26d97c:
    // 0x26d97c: 0xc051e62  jal         func_147988
label_26d980:
    if (ctx->pc == 0x26D980u) {
        ctx->pc = 0x26D984u;
        goto label_26d984;
    }
    ctx->pc = 0x26D97Cu;
    SET_GPR_U32(ctx, 31, 0x26D984u);
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D97Cu, 0x26D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D984u;
label_26d984:
    // 0x26d984: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d988:
    // 0x26d988: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d98c:
    // 0x26d98c: 0xc0c28ac  jal         func_30A2B0
label_26d990:
    if (ctx->pc == 0x26D990u) {
        ctx->pc = 0x26D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D98Cu;
        // 0x26d990: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D994u;
        goto label_26d994;
    }
    ctx->pc = 0x26D98Cu;
    SET_GPR_U32(ctx, 31, 0x26D994u);
    ctx->pc = 0x26D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D98Cu;
    // 0x26d990: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D98Cu, 0x26D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D994u;
label_26d994:
    // 0x26d994: 0x10000030  b           . + 4 + (0x30 << 2)
label_26d998:
    if (ctx->pc == 0x26D998u) {
        ctx->pc = 0x26D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D994u;
        // 0x26d998: 0x8ec30214  lw          $v1, 0x214($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D99Cu;
        goto label_26d99c;
    }
    ctx->pc = 0x26D994u;
    {
        const bool branch_taken_0x26d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D994u;
        // 0x26d998: 0x8ec30214  lw          $v1, 0x214($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d994) {
            ctx->pc = 0x26DA58u;
            goto label_26da58;
        }
    }
    ctx->pc = 0x26D99Cu;
label_26d99c:
    // 0x26d99c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_26d9a0:
    if (ctx->pc == 0x26D9A0u) {
        ctx->pc = 0x26D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D99Cu;
        // 0x26d9a0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9A4u;
        goto label_26d9a4;
    }
    ctx->pc = 0x26D99Cu;
    {
        const bool branch_taken_0x26d99c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D99Cu;
        // 0x26d9a0: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d99c) {
            ctx->pc = 0x26D9B8u;
            goto label_26d9b8;
        }
    }
    ctx->pc = 0x26D9A4u;
label_26d9a4:
    // 0x26d9a4: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x26d9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_26d9a8:
    // 0x26d9a8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d9ac:
    // 0x26d9ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d9b0:
    // 0x26d9b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_26d9b4:
    if (ctx->pc == 0x26D9B4u) {
        ctx->pc = 0x26D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9B0u;
        // 0x26d9b4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9B8u;
        goto label_26d9b8;
    }
    ctx->pc = 0x26D9B0u;
    {
        const bool branch_taken_0x26d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9B0u;
        // 0x26d9b4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9b0) {
            ctx->pc = 0x26D9CCu;
            goto label_26d9cc;
        }
    }
    ctx->pc = 0x26D9B8u;
label_26d9b8:
    // 0x26d9b8: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x26d9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_26d9bc:
    // 0x26d9bc: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26d9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_26d9c0:
    // 0x26d9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d9c4:
    // 0x26d9c4: 0x0  nop
    ctx->pc = 0x26d9c4u;
    // NOP
label_26d9c8:
    // 0x26d9c8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x26d9c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_26d9cc:
    // 0x26d9cc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26d9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26d9d0:
    // 0x26d9d0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26d9d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26d9d4:
    // 0x26d9d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26d9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26d9d8:
    // 0x26d9d8: 0xc07df52  jal         func_1F7D48
label_26d9dc:
    if (ctx->pc == 0x26D9DCu) {
        ctx->pc = 0x26D9E0u;
        goto label_26d9e0;
    }
    ctx->pc = 0x26D9D8u;
    SET_GPR_U32(ctx, 31, 0x26D9E0u);
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26D9D8u, 0x26D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9E0u;
label_26d9e0:
    // 0x26d9e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26d9e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26d9e4:
    // 0x26d9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d9e8:
    // 0x26d9e8: 0xc051e62  jal         func_147988
label_26d9ec:
    if (ctx->pc == 0x26D9ECu) {
        ctx->pc = 0x26D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9E8u;
        // 0x26d9ec: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9F0u;
        goto label_26d9f0;
    }
    ctx->pc = 0x26D9E8u;
    SET_GPR_U32(ctx, 31, 0x26D9F0u);
    ctx->pc = 0x26D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9E8u;
    // 0x26d9ec: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26D9E8u, 0x26D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9F0u;
label_26d9f0:
    // 0x26d9f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26d9f4:
    // 0x26d9f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d9f8:
    // 0x26d9f8: 0xc0c28ac  jal         func_30A2B0
label_26d9fc:
    if (ctx->pc == 0x26D9FCu) {
        ctx->pc = 0x26D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9F8u;
        // 0x26d9fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA00u;
        goto label_26da00;
    }
    ctx->pc = 0x26D9F8u;
    SET_GPR_U32(ctx, 31, 0x26DA00u);
    ctx->pc = 0x26D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9F8u;
    // 0x26d9fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26D9F8u, 0x26DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA00u;
label_26da00:
    // 0x26da00: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26da00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_26da04:
    // 0x26da04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26da04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26da08:
    // 0x26da08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26da08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26da0c:
    // 0x26da0c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x26da0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26da10:
    // 0x26da10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26da10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26da14:
    // 0x26da14: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_26da18:
    // 0x26da18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26da18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26da1c:
    // 0x26da1c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_26da20:
    if (ctx->pc == 0x26DA20u) {
        ctx->pc = 0x26DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA1Cu;
        // 0x26da20: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA24u;
        goto label_26da24;
    }
    ctx->pc = 0x26DA1Cu;
    {
        const bool branch_taken_0x26da1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA1Cu;
        // 0x26da20: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da1c) {
            ctx->pc = 0x26DA2Cu;
            goto label_26da2c;
        }
    }
    ctx->pc = 0x26DA24u;
label_26da24:
    // 0x26da24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26da28:
    // 0x26da28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26da28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26da2c:
    // 0x26da2c: 0x0  nop
    ctx->pc = 0x26da2cu;
    // NOP
label_26da30:
    // 0x26da30: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26da30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26da34:
    // 0x26da34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26da38:
    // 0x26da38: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26da3c:
    // 0x26da3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26da3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26da40:
    // 0x26da40: 0xc0c28ac  jal         func_30A2B0
label_26da44:
    if (ctx->pc == 0x26DA44u) {
        ctx->pc = 0x26DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA40u;
        // 0x26da44: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA48u;
        goto label_26da48;
    }
    ctx->pc = 0x26DA40u;
    SET_GPR_U32(ctx, 31, 0x26DA48u);
    ctx->pc = 0x26DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA40u;
    // 0x26da44: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26DA40u, 0x26DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA48u;
label_26da48:
    // 0x26da48: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x26da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26da4c:
    // 0x26da4c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26da4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26da50:
    // 0x26da50: 0x52880b  movn        $s1, $v0, $s2
    ctx->pc = 0x26da50u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_26da54:
    // 0x26da54: 0x8ec30214  lw          $v1, 0x214($s6)
    ctx->pc = 0x26da54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 532)));
label_26da58:
    // 0x26da58: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26da58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26da5c:
    // 0x26da5c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26da60:
    // 0x26da60: 0x40f809  jalr        $v0
label_26da64:
    if (ctx->pc == 0x26DA64u) {
        ctx->pc = 0x26DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA60u;
        // 0x26da64: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA68u;
        goto label_26da68;
    }
    ctx->pc = 0x26DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26DA68u);
        ctx->pc = 0x26DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA60u;
        // 0x26da64: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DA60u, 0x26DA68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DA68u;
label_26da68:
    // 0x26da68: 0x8ec200f0  lw          $v0, 0xF0($s6)
    ctx->pc = 0x26da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_26da6c:
    // 0x26da6c: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
label_26da70:
    if (ctx->pc == 0x26DA70u) {
        ctx->pc = 0x26DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA6Cu;
        // 0x26da70: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA74u;
        goto label_26da74;
    }
    ctx->pc = 0x26DA6Cu;
    {
        const bool branch_taken_0x26da6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x26DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA6Cu;
        // 0x26da70: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da6c) {
            ctx->pc = 0x26DA8Cu;
            goto label_26da8c;
        }
    }
    ctx->pc = 0x26DA74u;
label_26da74:
    // 0x26da74: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26da74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26da78:
    // 0x26da78: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26da7c:
    // 0x26da7c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26da7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26da80:
    // 0x26da80: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26da84:
    // 0x26da84: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26da84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26da88:
    // 0x26da88: 0x8ec200f0  lw          $v0, 0xF0($s6)
    ctx->pc = 0x26da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
label_26da8c:
    // 0x26da8c: 0x26c30490  addiu       $v1, $s6, 0x490
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1168));
label_26da90:
    // 0x26da90: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26da94:
    if (ctx->pc == 0x26DA94u) {
        ctx->pc = 0x26DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA90u;
        // 0x26da94: 0x26c20100  addiu       $v0, $s6, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA98u;
        goto label_26da98;
    }
    ctx->pc = 0x26DA90u;
    {
        const bool branch_taken_0x26da90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26da90) {
            ctx->pc = 0x26DA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DA90u;
            // 0x26da94: 0x26c20100  addiu       $v0, $s6, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DAB4u;
            goto label_26dab4;
        }
    }
    ctx->pc = 0x26DA98u;
label_26da98:
    // 0x26da98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26da9c:
    // 0x26da9c: 0xe6c00490  swc1        $f0, 0x490($s6)
    ctx->pc = 0x26da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1168), bits); }
label_26daa0:
    // 0x26daa0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26daa4:
    // 0x26daa4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26daa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26daa8:
    // 0x26daa8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26daac:
    // 0x26daac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26daacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26dab0:
    // 0x26dab0: 0x26c20100  addiu       $v0, $s6, 0x100
    ctx->pc = 0x26dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
label_26dab4:
    // 0x26dab4: 0xaec00100  sw          $zero, 0x100($s6)
    ctx->pc = 0x26dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 256), GPR_U32(ctx, 0));
label_26dab8:
    // 0x26dab8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26dabc:
    // 0x26dabc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26dabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26dac0:
    // 0x26dac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26dac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26dac4:
    // 0x26dac4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26dac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26dac8:
    // 0x26dac8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26dacc:
    // 0x26dacc: 0xc06ed52  jal         func_1BB548
label_26dad0:
    if (ctx->pc == 0x26DAD0u) {
        ctx->pc = 0x26DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DACCu;
        // 0x26dad0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DAD4u;
        goto label_26dad4;
    }
    ctx->pc = 0x26DACCu;
    SET_GPR_U32(ctx, 31, 0x26DAD4u);
    ctx->pc = 0x26DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DACCu;
    // 0x26dad0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB548u, 0x26DACCu, 0x26DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DAD4u;
label_26dad4:
    // 0x26dad4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x26dad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_26dad8:
    // 0x26dad8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x26dad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_26dadc:
    // 0x26dadc: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x26dadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_26dae0:
    // 0x26dae0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x26dae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_26dae4:
    // 0x26dae4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x26dae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_26dae8:
    // 0x26dae8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x26dae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_26daec:
    // 0x26daec: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x26daecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_26daf0:
    // 0x26daf0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x26daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_26daf4:
    // 0x26daf4: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x26daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26daf8:
    // 0x26daf8: 0x3e00008  jr          $ra
label_26dafc:
    if (ctx->pc == 0x26DAFCu) {
        ctx->pc = 0x26DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAF8u;
        // 0x26dafc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB00u;
        goto label_fallthrough_0x26daf8;
    }
    ctx->pc = 0x26DAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAF8u;
        // 0x26dafc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26daf8:
    ctx->pc = 0x26DB00u;
}
