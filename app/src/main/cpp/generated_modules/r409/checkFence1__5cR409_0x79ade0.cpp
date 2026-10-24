#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: checkFence1__5cR409
// Address: 0x79ade0 - 0x79b5a8
void checkFence1__5cR409_0x79ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkFence1__5cR409_0x79ade0");
#endif

    switch (ctx->pc) {
        case 0x79ade0u: goto label_79ade0;
        case 0x79ade4u: goto label_79ade4;
        case 0x79ade8u: goto label_79ade8;
        case 0x79adecu: goto label_79adec;
        case 0x79adf0u: goto label_79adf0;
        case 0x79adf4u: goto label_79adf4;
        case 0x79adf8u: goto label_79adf8;
        case 0x79adfcu: goto label_79adfc;
        case 0x79ae00u: goto label_79ae00;
        case 0x79ae04u: goto label_79ae04;
        case 0x79ae08u: goto label_79ae08;
        case 0x79ae0cu: goto label_79ae0c;
        case 0x79ae10u: goto label_79ae10;
        case 0x79ae14u: goto label_79ae14;
        case 0x79ae18u: goto label_79ae18;
        case 0x79ae1cu: goto label_79ae1c;
        case 0x79ae20u: goto label_79ae20;
        case 0x79ae24u: goto label_79ae24;
        case 0x79ae28u: goto label_79ae28;
        case 0x79ae2cu: goto label_79ae2c;
        case 0x79ae30u: goto label_79ae30;
        case 0x79ae34u: goto label_79ae34;
        case 0x79ae38u: goto label_79ae38;
        case 0x79ae3cu: goto label_79ae3c;
        case 0x79ae40u: goto label_79ae40;
        case 0x79ae44u: goto label_79ae44;
        case 0x79ae48u: goto label_79ae48;
        case 0x79ae4cu: goto label_79ae4c;
        case 0x79ae50u: goto label_79ae50;
        case 0x79ae54u: goto label_79ae54;
        case 0x79ae58u: goto label_79ae58;
        case 0x79ae5cu: goto label_79ae5c;
        case 0x79ae60u: goto label_79ae60;
        case 0x79ae64u: goto label_79ae64;
        case 0x79ae68u: goto label_79ae68;
        case 0x79ae6cu: goto label_79ae6c;
        case 0x79ae70u: goto label_79ae70;
        case 0x79ae74u: goto label_79ae74;
        case 0x79ae78u: goto label_79ae78;
        case 0x79ae7cu: goto label_79ae7c;
        case 0x79ae80u: goto label_79ae80;
        case 0x79ae84u: goto label_79ae84;
        case 0x79ae88u: goto label_79ae88;
        case 0x79ae8cu: goto label_79ae8c;
        case 0x79ae90u: goto label_79ae90;
        case 0x79ae94u: goto label_79ae94;
        case 0x79ae98u: goto label_79ae98;
        case 0x79ae9cu: goto label_79ae9c;
        case 0x79aea0u: goto label_79aea0;
        case 0x79aea4u: goto label_79aea4;
        case 0x79aea8u: goto label_79aea8;
        case 0x79aeacu: goto label_79aeac;
        case 0x79aeb0u: goto label_79aeb0;
        case 0x79aeb4u: goto label_79aeb4;
        case 0x79aeb8u: goto label_79aeb8;
        case 0x79aebcu: goto label_79aebc;
        case 0x79aec0u: goto label_79aec0;
        case 0x79aec4u: goto label_79aec4;
        case 0x79aec8u: goto label_79aec8;
        case 0x79aeccu: goto label_79aecc;
        case 0x79aed0u: goto label_79aed0;
        case 0x79aed4u: goto label_79aed4;
        case 0x79aed8u: goto label_79aed8;
        case 0x79aedcu: goto label_79aedc;
        case 0x79aee0u: goto label_79aee0;
        case 0x79aee4u: goto label_79aee4;
        case 0x79aee8u: goto label_79aee8;
        case 0x79aeecu: goto label_79aeec;
        case 0x79aef0u: goto label_79aef0;
        case 0x79aef4u: goto label_79aef4;
        case 0x79aef8u: goto label_79aef8;
        case 0x79aefcu: goto label_79aefc;
        case 0x79af00u: goto label_79af00;
        case 0x79af04u: goto label_79af04;
        case 0x79af08u: goto label_79af08;
        case 0x79af0cu: goto label_79af0c;
        case 0x79af10u: goto label_79af10;
        case 0x79af14u: goto label_79af14;
        case 0x79af18u: goto label_79af18;
        case 0x79af1cu: goto label_79af1c;
        case 0x79af20u: goto label_79af20;
        case 0x79af24u: goto label_79af24;
        case 0x79af28u: goto label_79af28;
        case 0x79af2cu: goto label_79af2c;
        case 0x79af30u: goto label_79af30;
        case 0x79af34u: goto label_79af34;
        case 0x79af38u: goto label_79af38;
        case 0x79af3cu: goto label_79af3c;
        case 0x79af40u: goto label_79af40;
        case 0x79af44u: goto label_79af44;
        case 0x79af48u: goto label_79af48;
        case 0x79af4cu: goto label_79af4c;
        case 0x79af50u: goto label_79af50;
        case 0x79af54u: goto label_79af54;
        case 0x79af58u: goto label_79af58;
        case 0x79af5cu: goto label_79af5c;
        case 0x79af60u: goto label_79af60;
        case 0x79af64u: goto label_79af64;
        case 0x79af68u: goto label_79af68;
        case 0x79af6cu: goto label_79af6c;
        case 0x79af70u: goto label_79af70;
        case 0x79af74u: goto label_79af74;
        case 0x79af78u: goto label_79af78;
        case 0x79af7cu: goto label_79af7c;
        case 0x79af80u: goto label_79af80;
        case 0x79af84u: goto label_79af84;
        case 0x79af88u: goto label_79af88;
        case 0x79af8cu: goto label_79af8c;
        case 0x79af90u: goto label_79af90;
        case 0x79af94u: goto label_79af94;
        case 0x79af98u: goto label_79af98;
        case 0x79af9cu: goto label_79af9c;
        case 0x79afa0u: goto label_79afa0;
        case 0x79afa4u: goto label_79afa4;
        case 0x79afa8u: goto label_79afa8;
        case 0x79afacu: goto label_79afac;
        case 0x79afb0u: goto label_79afb0;
        case 0x79afb4u: goto label_79afb4;
        case 0x79afb8u: goto label_79afb8;
        case 0x79afbcu: goto label_79afbc;
        case 0x79afc0u: goto label_79afc0;
        case 0x79afc4u: goto label_79afc4;
        case 0x79afc8u: goto label_79afc8;
        case 0x79afccu: goto label_79afcc;
        case 0x79afd0u: goto label_79afd0;
        case 0x79afd4u: goto label_79afd4;
        case 0x79afd8u: goto label_79afd8;
        case 0x79afdcu: goto label_79afdc;
        case 0x79afe0u: goto label_79afe0;
        case 0x79afe4u: goto label_79afe4;
        case 0x79afe8u: goto label_79afe8;
        case 0x79afecu: goto label_79afec;
        case 0x79aff0u: goto label_79aff0;
        case 0x79aff4u: goto label_79aff4;
        case 0x79aff8u: goto label_79aff8;
        case 0x79affcu: goto label_79affc;
        case 0x79b000u: goto label_79b000;
        case 0x79b004u: goto label_79b004;
        case 0x79b008u: goto label_79b008;
        case 0x79b00cu: goto label_79b00c;
        case 0x79b010u: goto label_79b010;
        case 0x79b014u: goto label_79b014;
        case 0x79b018u: goto label_79b018;
        case 0x79b01cu: goto label_79b01c;
        case 0x79b020u: goto label_79b020;
        case 0x79b024u: goto label_79b024;
        case 0x79b028u: goto label_79b028;
        case 0x79b02cu: goto label_79b02c;
        case 0x79b030u: goto label_79b030;
        case 0x79b034u: goto label_79b034;
        case 0x79b038u: goto label_79b038;
        case 0x79b03cu: goto label_79b03c;
        case 0x79b040u: goto label_79b040;
        case 0x79b044u: goto label_79b044;
        case 0x79b048u: goto label_79b048;
        case 0x79b04cu: goto label_79b04c;
        case 0x79b050u: goto label_79b050;
        case 0x79b054u: goto label_79b054;
        case 0x79b058u: goto label_79b058;
        case 0x79b05cu: goto label_79b05c;
        case 0x79b060u: goto label_79b060;
        case 0x79b064u: goto label_79b064;
        case 0x79b068u: goto label_79b068;
        case 0x79b06cu: goto label_79b06c;
        case 0x79b070u: goto label_79b070;
        case 0x79b074u: goto label_79b074;
        case 0x79b078u: goto label_79b078;
        case 0x79b07cu: goto label_79b07c;
        case 0x79b080u: goto label_79b080;
        case 0x79b084u: goto label_79b084;
        case 0x79b088u: goto label_79b088;
        case 0x79b08cu: goto label_79b08c;
        case 0x79b090u: goto label_79b090;
        case 0x79b094u: goto label_79b094;
        case 0x79b098u: goto label_79b098;
        case 0x79b09cu: goto label_79b09c;
        case 0x79b0a0u: goto label_79b0a0;
        case 0x79b0a4u: goto label_79b0a4;
        case 0x79b0a8u: goto label_79b0a8;
        case 0x79b0acu: goto label_79b0ac;
        case 0x79b0b0u: goto label_79b0b0;
        case 0x79b0b4u: goto label_79b0b4;
        case 0x79b0b8u: goto label_79b0b8;
        case 0x79b0bcu: goto label_79b0bc;
        case 0x79b0c0u: goto label_79b0c0;
        case 0x79b0c4u: goto label_79b0c4;
        case 0x79b0c8u: goto label_79b0c8;
        case 0x79b0ccu: goto label_79b0cc;
        case 0x79b0d0u: goto label_79b0d0;
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b0d8u: goto label_79b0d8;
        case 0x79b0dcu: goto label_79b0dc;
        case 0x79b0e0u: goto label_79b0e0;
        case 0x79b0e4u: goto label_79b0e4;
        case 0x79b0e8u: goto label_79b0e8;
        case 0x79b0ecu: goto label_79b0ec;
        case 0x79b0f0u: goto label_79b0f0;
        case 0x79b0f4u: goto label_79b0f4;
        case 0x79b0f8u: goto label_79b0f8;
        case 0x79b0fcu: goto label_79b0fc;
        case 0x79b100u: goto label_79b100;
        case 0x79b104u: goto label_79b104;
        case 0x79b108u: goto label_79b108;
        case 0x79b10cu: goto label_79b10c;
        case 0x79b110u: goto label_79b110;
        case 0x79b114u: goto label_79b114;
        case 0x79b118u: goto label_79b118;
        case 0x79b11cu: goto label_79b11c;
        case 0x79b120u: goto label_79b120;
        case 0x79b124u: goto label_79b124;
        case 0x79b128u: goto label_79b128;
        case 0x79b12cu: goto label_79b12c;
        case 0x79b130u: goto label_79b130;
        case 0x79b134u: goto label_79b134;
        case 0x79b138u: goto label_79b138;
        case 0x79b13cu: goto label_79b13c;
        case 0x79b140u: goto label_79b140;
        case 0x79b144u: goto label_79b144;
        case 0x79b148u: goto label_79b148;
        case 0x79b14cu: goto label_79b14c;
        case 0x79b150u: goto label_79b150;
        case 0x79b154u: goto label_79b154;
        case 0x79b158u: goto label_79b158;
        case 0x79b15cu: goto label_79b15c;
        case 0x79b160u: goto label_79b160;
        case 0x79b164u: goto label_79b164;
        case 0x79b168u: goto label_79b168;
        case 0x79b16cu: goto label_79b16c;
        case 0x79b170u: goto label_79b170;
        case 0x79b174u: goto label_79b174;
        case 0x79b178u: goto label_79b178;
        case 0x79b17cu: goto label_79b17c;
        case 0x79b180u: goto label_79b180;
        case 0x79b184u: goto label_79b184;
        case 0x79b188u: goto label_79b188;
        case 0x79b18cu: goto label_79b18c;
        case 0x79b190u: goto label_79b190;
        case 0x79b194u: goto label_79b194;
        case 0x79b198u: goto label_79b198;
        case 0x79b19cu: goto label_79b19c;
        case 0x79b1a0u: goto label_79b1a0;
        case 0x79b1a4u: goto label_79b1a4;
        case 0x79b1a8u: goto label_79b1a8;
        case 0x79b1acu: goto label_79b1ac;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1b4u: goto label_79b1b4;
        case 0x79b1b8u: goto label_79b1b8;
        case 0x79b1bcu: goto label_79b1bc;
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1c4u: goto label_79b1c4;
        case 0x79b1c8u: goto label_79b1c8;
        case 0x79b1ccu: goto label_79b1cc;
        case 0x79b1d0u: goto label_79b1d0;
        case 0x79b1d4u: goto label_79b1d4;
        case 0x79b1d8u: goto label_79b1d8;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1e0u: goto label_79b1e0;
        case 0x79b1e4u: goto label_79b1e4;
        case 0x79b1e8u: goto label_79b1e8;
        case 0x79b1ecu: goto label_79b1ec;
        case 0x79b1f0u: goto label_79b1f0;
        case 0x79b1f4u: goto label_79b1f4;
        case 0x79b1f8u: goto label_79b1f8;
        case 0x79b1fcu: goto label_79b1fc;
        case 0x79b200u: goto label_79b200;
        case 0x79b204u: goto label_79b204;
        case 0x79b208u: goto label_79b208;
        case 0x79b20cu: goto label_79b20c;
        case 0x79b210u: goto label_79b210;
        case 0x79b214u: goto label_79b214;
        case 0x79b218u: goto label_79b218;
        case 0x79b21cu: goto label_79b21c;
        case 0x79b220u: goto label_79b220;
        case 0x79b224u: goto label_79b224;
        case 0x79b228u: goto label_79b228;
        case 0x79b22cu: goto label_79b22c;
        case 0x79b230u: goto label_79b230;
        case 0x79b234u: goto label_79b234;
        case 0x79b238u: goto label_79b238;
        case 0x79b23cu: goto label_79b23c;
        case 0x79b240u: goto label_79b240;
        case 0x79b244u: goto label_79b244;
        case 0x79b248u: goto label_79b248;
        case 0x79b24cu: goto label_79b24c;
        case 0x79b250u: goto label_79b250;
        case 0x79b254u: goto label_79b254;
        case 0x79b258u: goto label_79b258;
        case 0x79b25cu: goto label_79b25c;
        case 0x79b260u: goto label_79b260;
        case 0x79b264u: goto label_79b264;
        case 0x79b268u: goto label_79b268;
        case 0x79b26cu: goto label_79b26c;
        case 0x79b270u: goto label_79b270;
        case 0x79b274u: goto label_79b274;
        case 0x79b278u: goto label_79b278;
        case 0x79b27cu: goto label_79b27c;
        case 0x79b280u: goto label_79b280;
        case 0x79b284u: goto label_79b284;
        case 0x79b288u: goto label_79b288;
        case 0x79b28cu: goto label_79b28c;
        case 0x79b290u: goto label_79b290;
        case 0x79b294u: goto label_79b294;
        case 0x79b298u: goto label_79b298;
        case 0x79b29cu: goto label_79b29c;
        case 0x79b2a0u: goto label_79b2a0;
        case 0x79b2a4u: goto label_79b2a4;
        case 0x79b2a8u: goto label_79b2a8;
        case 0x79b2acu: goto label_79b2ac;
        case 0x79b2b0u: goto label_79b2b0;
        case 0x79b2b4u: goto label_79b2b4;
        case 0x79b2b8u: goto label_79b2b8;
        case 0x79b2bcu: goto label_79b2bc;
        case 0x79b2c0u: goto label_79b2c0;
        case 0x79b2c4u: goto label_79b2c4;
        case 0x79b2c8u: goto label_79b2c8;
        case 0x79b2ccu: goto label_79b2cc;
        case 0x79b2d0u: goto label_79b2d0;
        case 0x79b2d4u: goto label_79b2d4;
        case 0x79b2d8u: goto label_79b2d8;
        case 0x79b2dcu: goto label_79b2dc;
        case 0x79b2e0u: goto label_79b2e0;
        case 0x79b2e4u: goto label_79b2e4;
        case 0x79b2e8u: goto label_79b2e8;
        case 0x79b2ecu: goto label_79b2ec;
        case 0x79b2f0u: goto label_79b2f0;
        case 0x79b2f4u: goto label_79b2f4;
        case 0x79b2f8u: goto label_79b2f8;
        case 0x79b2fcu: goto label_79b2fc;
        case 0x79b300u: goto label_79b300;
        case 0x79b304u: goto label_79b304;
        case 0x79b308u: goto label_79b308;
        case 0x79b30cu: goto label_79b30c;
        case 0x79b310u: goto label_79b310;
        case 0x79b314u: goto label_79b314;
        case 0x79b318u: goto label_79b318;
        case 0x79b31cu: goto label_79b31c;
        case 0x79b320u: goto label_79b320;
        case 0x79b324u: goto label_79b324;
        case 0x79b328u: goto label_79b328;
        case 0x79b32cu: goto label_79b32c;
        case 0x79b330u: goto label_79b330;
        case 0x79b334u: goto label_79b334;
        case 0x79b338u: goto label_79b338;
        case 0x79b33cu: goto label_79b33c;
        case 0x79b340u: goto label_79b340;
        case 0x79b344u: goto label_79b344;
        case 0x79b348u: goto label_79b348;
        case 0x79b34cu: goto label_79b34c;
        case 0x79b350u: goto label_79b350;
        case 0x79b354u: goto label_79b354;
        case 0x79b358u: goto label_79b358;
        case 0x79b35cu: goto label_79b35c;
        case 0x79b360u: goto label_79b360;
        case 0x79b364u: goto label_79b364;
        case 0x79b368u: goto label_79b368;
        case 0x79b36cu: goto label_79b36c;
        case 0x79b370u: goto label_79b370;
        case 0x79b374u: goto label_79b374;
        case 0x79b378u: goto label_79b378;
        case 0x79b37cu: goto label_79b37c;
        case 0x79b380u: goto label_79b380;
        case 0x79b384u: goto label_79b384;
        case 0x79b388u: goto label_79b388;
        case 0x79b38cu: goto label_79b38c;
        case 0x79b390u: goto label_79b390;
        case 0x79b394u: goto label_79b394;
        case 0x79b398u: goto label_79b398;
        case 0x79b39cu: goto label_79b39c;
        case 0x79b3a0u: goto label_79b3a0;
        case 0x79b3a4u: goto label_79b3a4;
        case 0x79b3a8u: goto label_79b3a8;
        case 0x79b3acu: goto label_79b3ac;
        case 0x79b3b0u: goto label_79b3b0;
        case 0x79b3b4u: goto label_79b3b4;
        case 0x79b3b8u: goto label_79b3b8;
        case 0x79b3bcu: goto label_79b3bc;
        case 0x79b3c0u: goto label_79b3c0;
        case 0x79b3c4u: goto label_79b3c4;
        case 0x79b3c8u: goto label_79b3c8;
        case 0x79b3ccu: goto label_79b3cc;
        case 0x79b3d0u: goto label_79b3d0;
        case 0x79b3d4u: goto label_79b3d4;
        case 0x79b3d8u: goto label_79b3d8;
        case 0x79b3dcu: goto label_79b3dc;
        case 0x79b3e0u: goto label_79b3e0;
        case 0x79b3e4u: goto label_79b3e4;
        case 0x79b3e8u: goto label_79b3e8;
        case 0x79b3ecu: goto label_79b3ec;
        case 0x79b3f0u: goto label_79b3f0;
        case 0x79b3f4u: goto label_79b3f4;
        case 0x79b3f8u: goto label_79b3f8;
        case 0x79b3fcu: goto label_79b3fc;
        case 0x79b400u: goto label_79b400;
        case 0x79b404u: goto label_79b404;
        case 0x79b408u: goto label_79b408;
        case 0x79b40cu: goto label_79b40c;
        case 0x79b410u: goto label_79b410;
        case 0x79b414u: goto label_79b414;
        case 0x79b418u: goto label_79b418;
        case 0x79b41cu: goto label_79b41c;
        case 0x79b420u: goto label_79b420;
        case 0x79b424u: goto label_79b424;
        case 0x79b428u: goto label_79b428;
        case 0x79b42cu: goto label_79b42c;
        case 0x79b430u: goto label_79b430;
        case 0x79b434u: goto label_79b434;
        case 0x79b438u: goto label_79b438;
        case 0x79b43cu: goto label_79b43c;
        case 0x79b440u: goto label_79b440;
        case 0x79b444u: goto label_79b444;
        case 0x79b448u: goto label_79b448;
        case 0x79b44cu: goto label_79b44c;
        case 0x79b450u: goto label_79b450;
        case 0x79b454u: goto label_79b454;
        case 0x79b458u: goto label_79b458;
        case 0x79b45cu: goto label_79b45c;
        case 0x79b460u: goto label_79b460;
        case 0x79b464u: goto label_79b464;
        case 0x79b468u: goto label_79b468;
        case 0x79b46cu: goto label_79b46c;
        case 0x79b470u: goto label_79b470;
        case 0x79b474u: goto label_79b474;
        case 0x79b478u: goto label_79b478;
        case 0x79b47cu: goto label_79b47c;
        case 0x79b480u: goto label_79b480;
        case 0x79b484u: goto label_79b484;
        case 0x79b488u: goto label_79b488;
        case 0x79b48cu: goto label_79b48c;
        case 0x79b490u: goto label_79b490;
        case 0x79b494u: goto label_79b494;
        case 0x79b498u: goto label_79b498;
        case 0x79b49cu: goto label_79b49c;
        case 0x79b4a0u: goto label_79b4a0;
        case 0x79b4a4u: goto label_79b4a4;
        case 0x79b4a8u: goto label_79b4a8;
        case 0x79b4acu: goto label_79b4ac;
        case 0x79b4b0u: goto label_79b4b0;
        case 0x79b4b4u: goto label_79b4b4;
        case 0x79b4b8u: goto label_79b4b8;
        case 0x79b4bcu: goto label_79b4bc;
        case 0x79b4c0u: goto label_79b4c0;
        case 0x79b4c4u: goto label_79b4c4;
        case 0x79b4c8u: goto label_79b4c8;
        case 0x79b4ccu: goto label_79b4cc;
        case 0x79b4d0u: goto label_79b4d0;
        case 0x79b4d4u: goto label_79b4d4;
        case 0x79b4d8u: goto label_79b4d8;
        case 0x79b4dcu: goto label_79b4dc;
        case 0x79b4e0u: goto label_79b4e0;
        case 0x79b4e4u: goto label_79b4e4;
        case 0x79b4e8u: goto label_79b4e8;
        case 0x79b4ecu: goto label_79b4ec;
        case 0x79b4f0u: goto label_79b4f0;
        case 0x79b4f4u: goto label_79b4f4;
        case 0x79b4f8u: goto label_79b4f8;
        case 0x79b4fcu: goto label_79b4fc;
        case 0x79b500u: goto label_79b500;
        case 0x79b504u: goto label_79b504;
        case 0x79b508u: goto label_79b508;
        case 0x79b50cu: goto label_79b50c;
        case 0x79b510u: goto label_79b510;
        case 0x79b514u: goto label_79b514;
        case 0x79b518u: goto label_79b518;
        case 0x79b51cu: goto label_79b51c;
        case 0x79b520u: goto label_79b520;
        case 0x79b524u: goto label_79b524;
        case 0x79b528u: goto label_79b528;
        case 0x79b52cu: goto label_79b52c;
        case 0x79b530u: goto label_79b530;
        case 0x79b534u: goto label_79b534;
        case 0x79b538u: goto label_79b538;
        case 0x79b53cu: goto label_79b53c;
        case 0x79b540u: goto label_79b540;
        case 0x79b544u: goto label_79b544;
        case 0x79b548u: goto label_79b548;
        case 0x79b54cu: goto label_79b54c;
        case 0x79b550u: goto label_79b550;
        case 0x79b554u: goto label_79b554;
        case 0x79b558u: goto label_79b558;
        case 0x79b55cu: goto label_79b55c;
        case 0x79b560u: goto label_79b560;
        case 0x79b564u: goto label_79b564;
        case 0x79b568u: goto label_79b568;
        case 0x79b56cu: goto label_79b56c;
        case 0x79b570u: goto label_79b570;
        case 0x79b574u: goto label_79b574;
        case 0x79b578u: goto label_79b578;
        case 0x79b57cu: goto label_79b57c;
        case 0x79b580u: goto label_79b580;
        case 0x79b584u: goto label_79b584;
        case 0x79b588u: goto label_79b588;
        case 0x79b58cu: goto label_79b58c;
        case 0x79b590u: goto label_79b590;
        case 0x79b594u: goto label_79b594;
        case 0x79b598u: goto label_79b598;
        case 0x79b59cu: goto label_79b59c;
        case 0x79b5a0u: goto label_79b5a0;
        case 0x79b5a4u: goto label_79b5a4;
        default: break;
    }

    ctx->pc = 0x79ade0u;

label_79ade0:
    // 0x79ade0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_79ade4:
    // 0x79ade4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_79ade8:
    // 0x79ade8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_79adec:
    // 0x79adec: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_79adf0:
    // 0x79adf0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x79adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_79adf4:
    // 0x79adf4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_79adf8:
    // 0x79adf8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_79adfc:
    // 0x79adfc: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79adfcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_79ae00:
    // 0x79ae00: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_79ae04:
    // 0x79ae04: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79ae04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79ae08:
    // 0x79ae08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_79ae0c:
    // 0x79ae0c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79ae10:
    // 0x79ae10: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x79ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_79ae14:
    // 0x79ae14: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_79ae18:
    // 0x79ae18: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x79ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_79ae1c:
    // 0x79ae1c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x79ae1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79ae20:
    // 0x79ae20: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x79ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_79ae24:
    // 0x79ae24: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x79ae24u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
label_79ae28:
    // 0x79ae28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_79ae2c:
    // 0x79ae2c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x79ae2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_79ae30:
    // 0x79ae30: 0x10000004  b           . + 4 + (0x4 << 2)
label_79ae34:
    if (ctx->pc == 0x79AE34u) {
        ctx->pc = 0x79AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE30u;
        // 0x79ae34: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE38u;
        goto label_79ae38;
    }
    ctx->pc = 0x79AE30u;
    {
        const bool branch_taken_0x79ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE30u;
        // 0x79ae34: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae30) {
            ctx->pc = 0x79AE44u;
            goto label_79ae44;
        }
    }
    ctx->pc = 0x79AE38u;
label_79ae38:
    // 0x79ae38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ae3c:
    // 0x79ae3c: 0xc0b56a8  jal         func_2D5AA0
label_79ae40:
    if (ctx->pc == 0x79AE40u) {
        ctx->pc = 0x79AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE3Cu;
        // 0x79ae40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE44u;
        goto label_79ae44;
    }
    ctx->pc = 0x79AE3Cu;
    SET_GPR_U32(ctx, 31, 0x79AE44u);
    ctx->pc = 0x79AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE3Cu;
    // 0x79ae40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AE3Cu, 0x79AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE44u;
label_79ae44:
    // 0x79ae44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79ae48:
    // 0x79ae48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79ae4c:
    // 0x79ae4c: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79ae50:
    // 0x79ae50: 0xc0b0aa6  jal         func_2C2A98
label_79ae54:
    if (ctx->pc == 0x79AE54u) {
        ctx->pc = 0x79AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE50u;
        // 0x79ae54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE58u;
        goto label_79ae58;
    }
    ctx->pc = 0x79AE50u;
    SET_GPR_U32(ctx, 31, 0x79AE58u);
    ctx->pc = 0x79AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE50u;
    // 0x79ae54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79AE50u, 0x79AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE58u;
label_79ae58:
    // 0x79ae58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ae5c:
    // 0x79ae5c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
label_79ae60:
    if (ctx->pc == 0x79AE60u) {
        ctx->pc = 0x79AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE5Cu;
        // 0x79ae60: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE64u;
        goto label_79ae64;
    }
    ctx->pc = 0x79AE5Cu;
    {
        const bool branch_taken_0x79ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE5Cu;
        // 0x79ae60: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae5c) {
            ctx->pc = 0x79AE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae38;
        }
    }
    ctx->pc = 0x79AE64u;
label_79ae64:
    // 0x79ae64: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x79ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_79ae68:
    // 0x79ae68: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_79ae6c:
    // 0x79ae6c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x79ae6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ae70:
    // 0x79ae70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79ae70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ae74:
    // 0x79ae74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79ae78:
    // 0x79ae78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79ae7c:
    // 0x79ae7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_79ae80:
    // 0x79ae80: 0xc1e6db4  jal         func_79B6D0
label_79ae84:
    if (ctx->pc == 0x79AE84u) {
        ctx->pc = 0x79AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE80u;
        // 0x79ae84: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE88u;
        goto label_79ae88;
    }
    ctx->pc = 0x79AE80u;
    SET_GPR_U32(ctx, 31, 0x79AE88u);
    ctx->pc = 0x79AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE80u;
    // 0x79ae84: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B6D0u, 0x79AE80u, 0x79AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE88u;
label_79ae88:
    // 0x79ae88: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79ae8c:
    // 0x79ae8c: 0x26c59620  addiu       $a1, $s6, -0x69E0
    ctx->pc = 0x79ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940192));
label_79ae90:
    // 0x79ae90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ae94:
    // 0x79ae94: 0xc0b0e48  jal         func_2C3920
label_79ae98:
    if (ctx->pc == 0x79AE98u) {
        ctx->pc = 0x79AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE94u;
        // 0x79ae98: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE9Cu;
        goto label_79ae9c;
    }
    ctx->pc = 0x79AE94u;
    SET_GPR_U32(ctx, 31, 0x79AE9Cu);
    ctx->pc = 0x79AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE94u;
    // 0x79ae98: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79AE94u, 0x79AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE9Cu;
label_79ae9c:
    // 0x79ae9c: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79aea0:
    // 0x79aea0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x79aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_79aea4:
    // 0x79aea4: 0xc0b56a8  jal         func_2D5AA0
label_79aea8:
    if (ctx->pc == 0x79AEA8u) {
        ctx->pc = 0x79AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEA4u;
        // 0x79aea8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AEACu;
        goto label_79aeac;
    }
    ctx->pc = 0x79AEA4u;
    SET_GPR_U32(ctx, 31, 0x79AEACu);
    ctx->pc = 0x79AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA4u;
    // 0x79aea8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AEA4u, 0x79AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEACu;
label_79aeac:
    // 0x79aeac: 0x10000005  b           . + 4 + (0x5 << 2)
label_79aeb0:
    if (ctx->pc == 0x79AEB0u) {
        ctx->pc = 0x79AEB4u;
        goto label_79aeb4;
    }
    ctx->pc = 0x79AEACu;
    {
        const bool branch_taken_0x79aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aeac) {
            ctx->pc = 0x79AEC4u;
            goto label_79aec4;
        }
    }
    ctx->pc = 0x79AEB4u;
label_79aeb4:
    // 0x79aeb4: 0x0  nop
    ctx->pc = 0x79aeb4u;
    // NOP
label_79aeb8:
    // 0x79aeb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aebc:
    // 0x79aebc: 0xc0b56a8  jal         func_2D5AA0
label_79aec0:
    if (ctx->pc == 0x79AEC0u) {
        ctx->pc = 0x79AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEBCu;
        // 0x79aec0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AEC4u;
        goto label_79aec4;
    }
    ctx->pc = 0x79AEBCu;
    SET_GPR_U32(ctx, 31, 0x79AEC4u);
    ctx->pc = 0x79AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEBCu;
    // 0x79aec0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AEBCu, 0x79AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEC4u;
label_79aec4:
    // 0x79aec4: 0xc0b0f90  jal         func_2C3E40
label_79aec8:
    if (ctx->pc == 0x79AEC8u) {
        ctx->pc = 0x79AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC4u;
        // 0x79aec8: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AECCu;
        goto label_79aecc;
    }
    ctx->pc = 0x79AEC4u;
    SET_GPR_U32(ctx, 31, 0x79AECCu);
    ctx->pc = 0x79AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEC4u;
    // 0x79aec8: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79AEC4u, 0x79AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AECCu;
label_79aecc:
    // 0x79aecc: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_79aed0:
    if (ctx->pc == 0x79AED0u) {
        ctx->pc = 0x79AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AECCu;
        // 0x79aed0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AED4u;
        goto label_79aed4;
    }
    ctx->pc = 0x79AECCu;
    {
        const bool branch_taken_0x79aecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AECCu;
        // 0x79aed0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aecc) {
            ctx->pc = 0x79AEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aeb8;
        }
    }
    ctx->pc = 0x79AED4u;
label_79aed4:
    // 0x79aed4: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x79aed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_79aed8:
    // 0x79aed8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79aedc:
    // 0x79aedc: 0x8ce39b70  lw          $v1, -0x6490($a3)
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941552)));
label_79aee0:
    // 0x79aee0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79aee4:
    // 0x79aee4: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x79aee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_79aee8:
    // 0x79aee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aeec:
    // 0x79aeec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_79aef0:
    // 0x79aef0: 0x24f06ab0  addiu       $s0, $a3, 0x6AB0
    ctx->pc = 0x79aef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 27312));
label_79aef4:
    // 0x79aef4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x79aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_79aef8:
    // 0x79aef8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x79aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_79aefc:
    // 0x79aefc: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x79aefcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
label_79af00:
    // 0x79af00: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79af04:
    // 0x79af04: 0xc0b0e6c  jal         func_2C39B0
label_79af08:
    if (ctx->pc == 0x79AF08u) {
        ctx->pc = 0x79AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF04u;
        // 0x79af08: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF0Cu;
        goto label_79af0c;
    }
    ctx->pc = 0x79AF04u;
    SET_GPR_U32(ctx, 31, 0x79AF0Cu);
    ctx->pc = 0x79AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF04u;
    // 0x79af08: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79AF04u, 0x79AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF0Cu;
label_79af0c:
    // 0x79af0c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79af10:
    // 0x79af10: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79af14:
    // 0x79af14: 0xc0b0fb6  jal         func_2C3ED8
label_79af18:
    if (ctx->pc == 0x79AF18u) {
        ctx->pc = 0x79AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF14u;
        // 0x79af18: 0x2445c088  addiu       $a1, $v0, -0x3F78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF1Cu;
        goto label_79af1c;
    }
    ctx->pc = 0x79AF14u;
    SET_GPR_U32(ctx, 31, 0x79AF1Cu);
    ctx->pc = 0x79AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF14u;
    // 0x79af18: 0x2445c088  addiu       $a1, $v0, -0x3F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79AF14u, 0x79AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF1Cu;
label_79af1c:
    // 0x79af1c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79af1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79af20:
    // 0x79af20: 0xc0a54b4  jal         func_2952D0
label_79af24:
    if (ctx->pc == 0x79AF24u) {
        ctx->pc = 0x79AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF20u;
        // 0x79af24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF28u;
        goto label_79af28;
    }
    ctx->pc = 0x79AF20u;
    SET_GPR_U32(ctx, 31, 0x79AF28u);
    ctx->pc = 0x79AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF20u;
    // 0x79af24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AF20u, 0x79AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF28u;
label_79af28:
    // 0x79af28: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79af28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79af2c:
    // 0x79af2c: 0xc0a54b4  jal         func_2952D0
label_79af30:
    if (ctx->pc == 0x79AF30u) {
        ctx->pc = 0x79AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF2Cu;
        // 0x79af30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF34u;
        goto label_79af34;
    }
    ctx->pc = 0x79AF2Cu;
    SET_GPR_U32(ctx, 31, 0x79AF34u);
    ctx->pc = 0x79AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF2Cu;
    // 0x79af30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AF2Cu, 0x79AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF34u;
label_79af34:
    // 0x79af34: 0xc0a56ae  jal         func_295AB8
label_79af38:
    if (ctx->pc == 0x79AF38u) {
        ctx->pc = 0x79AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF34u;
        // 0x79af38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF3Cu;
        goto label_79af3c;
    }
    ctx->pc = 0x79AF34u;
    SET_GPR_U32(ctx, 31, 0x79AF3Cu);
    ctx->pc = 0x79AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF34u;
    // 0x79af38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79AF34u, 0x79AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF3Cu;
label_79af3c:
    // 0x79af3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79af3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79af40:
    // 0x79af40: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79af40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79af44:
    // 0x79af44: 0xc0a56ae  jal         func_295AB8
label_79af48:
    if (ctx->pc == 0x79AF48u) {
        ctx->pc = 0x79AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF44u;
        // 0x79af48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF4Cu;
        goto label_79af4c;
    }
    ctx->pc = 0x79AF44u;
    SET_GPR_U32(ctx, 31, 0x79AF4Cu);
    ctx->pc = 0x79AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF44u;
    // 0x79af48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79AF44u, 0x79AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF4Cu;
label_79af4c:
    // 0x79af4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79af4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79af50:
    // 0x79af50: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79af50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_79af54:
    // 0x79af54: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x79af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79af58:
    // 0x79af58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79af58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79af5c:
    // 0x79af5c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x79af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79af60:
    // 0x79af60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79af60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79af64:
    // 0x79af64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79af64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_79af68:
    // 0x79af68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79af68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79af6c:
    // 0x79af6c: 0x0  nop
    ctx->pc = 0x79af6cu;
    // NOP
label_79af70:
    // 0x79af70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79af70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_79af74:
    // 0x79af74: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x79af74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_79af78:
    // 0x79af78: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x79af78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79af7c:
    // 0x79af7c: 0xc0a566c  jal         func_2959B0
label_79af80:
    if (ctx->pc == 0x79AF80u) {
        ctx->pc = 0x79AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF7Cu;
        // 0x79af80: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF84u;
        goto label_79af84;
    }
    ctx->pc = 0x79AF7Cu;
    SET_GPR_U32(ctx, 31, 0x79AF84u);
    ctx->pc = 0x79AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF7Cu;
    // 0x79af80: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79AF7Cu, 0x79AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF84u;
label_79af84:
    // 0x79af84: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x79af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79af88:
    // 0x79af88: 0xc0a566c  jal         func_2959B0
label_79af8c:
    if (ctx->pc == 0x79AF8Cu) {
        ctx->pc = 0x79AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF88u;
        // 0x79af8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF90u;
        goto label_79af90;
    }
    ctx->pc = 0x79AF88u;
    SET_GPR_U32(ctx, 31, 0x79AF90u);
    ctx->pc = 0x79AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF88u;
    // 0x79af8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79AF88u, 0x79AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF90u;
label_79af90:
    // 0x79af90: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79af90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79af94:
    // 0x79af94: 0xc0a421a  jal         func_290868
label_79af98:
    if (ctx->pc == 0x79AF98u) {
        ctx->pc = 0x79AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF94u;
        // 0x79af98: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF9Cu;
        goto label_79af9c;
    }
    ctx->pc = 0x79AF94u;
    SET_GPR_U32(ctx, 31, 0x79AF9Cu);
    ctx->pc = 0x79AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF94u;
    // 0x79af98: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AF94u, 0x79AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF9Cu;
label_79af9c:
    // 0x79af9c: 0x8e43c180  lw          $v1, -0x3E80($s2)
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79afa0:
    // 0x79afa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79afa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79afa4:
    // 0x79afa4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79afa8:
    if (ctx->pc == 0x79AFA8u) {
        ctx->pc = 0x79AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA4u;
        // 0x79afa8: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFACu;
        goto label_79afac;
    }
    ctx->pc = 0x79AFA4u;
    {
        const bool branch_taken_0x79afa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA4u;
        // 0x79afa8: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afa4) {
            ctx->pc = 0x79AFE8u;
            goto label_79afe8;
        }
    }
    ctx->pc = 0x79AFACu;
label_79afac:
    // 0x79afac: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x79afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_79afb0:
    // 0x79afb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79afb4:
    if (ctx->pc == 0x79AFB4u) {
        ctx->pc = 0x79AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB0u;
        // 0x79afb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFB8u;
        goto label_79afb8;
    }
    ctx->pc = 0x79AFB0u;
    {
        const bool branch_taken_0x79afb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB0u;
        // 0x79afb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afb0) {
            ctx->pc = 0x79AFC0u;
            goto label_79afc0;
        }
    }
    ctx->pc = 0x79AFB8u;
label_79afb8:
    // 0x79afb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_79afbc:
    if (ctx->pc == 0x79AFBCu) {
        ctx->pc = 0x79AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB8u;
        // 0x79afbc: 0xac66019c  sw          $a2, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFC0u;
        goto label_79afc0;
    }
    ctx->pc = 0x79AFB8u;
    {
        const bool branch_taken_0x79afb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB8u;
        // 0x79afbc: 0xac66019c  sw          $a2, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afb8) {
            ctx->pc = 0x79AFE8u;
            goto label_79afe8;
        }
    }
    ctx->pc = 0x79AFC0u;
label_79afc0:
    // 0x79afc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79afc4:
    // 0x79afc4: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79afc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79afc8:
    // 0x79afc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79afcc:
    if (ctx->pc == 0x79AFCCu) {
        ctx->pc = 0x79AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC8u;
        // 0x79afcc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFD0u;
        goto label_79afd0;
    }
    ctx->pc = 0x79AFC8u;
    {
        const bool branch_taken_0x79afc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC8u;
        // 0x79afcc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afc8) {
            ctx->pc = 0x79AFE8u;
            goto label_79afe8;
        }
    }
    ctx->pc = 0x79AFD0u;
label_79afd0:
    // 0x79afd0: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79afd4:
    // 0x79afd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79afd8:
    // 0x79afd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79afdc:
    // 0x79afdc: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79afe0:
    if (ctx->pc == 0x79AFE0u) {
        ctx->pc = 0x79AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFDCu;
        // 0x79afe0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFE4u;
        goto label_79afe4;
    }
    ctx->pc = 0x79AFDCu;
    {
        const bool branch_taken_0x79afdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFDCu;
        // 0x79afe0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afdc) {
            ctx->pc = 0x79AFC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afc4;
        }
    }
    ctx->pc = 0x79AFE4u;
label_79afe4:
    // 0x79afe4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79afe8:
    // 0x79afe8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79afe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79afec:
    // 0x79afec: 0xc0a421a  jal         func_290868
label_79aff0:
    if (ctx->pc == 0x79AFF0u) {
        ctx->pc = 0x79AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFECu;
        // 0x79aff0: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFF4u;
        goto label_79aff4;
    }
    ctx->pc = 0x79AFECu;
    SET_GPR_U32(ctx, 31, 0x79AFF4u);
    ctx->pc = 0x79AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFECu;
    // 0x79aff0: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AFECu, 0x79AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFF4u;
label_79aff4:
    // 0x79aff4: 0x8e43c180  lw          $v1, -0x3E80($s2)
    ctx->pc = 0x79aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79aff8:
    // 0x79aff8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79aff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79affc:
    // 0x79affc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79b000:
    if (ctx->pc == 0x79B000u) {
        ctx->pc = 0x79B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFFCu;
        // 0x79b000: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B004u;
        goto label_79b004;
    }
    ctx->pc = 0x79AFFCu;
    {
        const bool branch_taken_0x79affc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFFCu;
        // 0x79b000: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79affc) {
            ctx->pc = 0x79B040u;
            goto label_79b040;
        }
    }
    ctx->pc = 0x79B004u;
label_79b004:
    // 0x79b004: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x79b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_79b008:
    // 0x79b008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79b00c:
    if (ctx->pc == 0x79B00Cu) {
        ctx->pc = 0x79B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B008u;
        // 0x79b00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B010u;
        goto label_79b010;
    }
    ctx->pc = 0x79B008u;
    {
        const bool branch_taken_0x79b008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B008u;
        // 0x79b00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b008) {
            ctx->pc = 0x79B018u;
            goto label_79b018;
        }
    }
    ctx->pc = 0x79B010u;
label_79b010:
    // 0x79b010: 0x1000000b  b           . + 4 + (0xB << 2)
label_79b014:
    if (ctx->pc == 0x79B014u) {
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0xac66019c  sw          $a2, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B018u;
        goto label_79b018;
    }
    ctx->pc = 0x79B010u;
    {
        const bool branch_taken_0x79b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0xac66019c  sw          $a2, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b010) {
            ctx->pc = 0x79B040u;
            goto label_79b040;
        }
    }
    ctx->pc = 0x79B018u;
label_79b018:
    // 0x79b018: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79b01c:
    // 0x79b01c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79b01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b020:
    // 0x79b020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79b024:
    if (ctx->pc == 0x79B024u) {
        ctx->pc = 0x79B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B020u;
        // 0x79b024: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B028u;
        goto label_79b028;
    }
    ctx->pc = 0x79B020u;
    {
        const bool branch_taken_0x79b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B020u;
        // 0x79b024: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b020) {
            ctx->pc = 0x79B040u;
            goto label_79b040;
        }
    }
    ctx->pc = 0x79B028u;
label_79b028:
    // 0x79b028: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79b02c:
    // 0x79b02c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b030:
    // 0x79b030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79b034:
    // 0x79b034: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79b038:
    if (ctx->pc == 0x79B038u) {
        ctx->pc = 0x79B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B034u;
        // 0x79b038: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B03Cu;
        goto label_79b03c;
    }
    ctx->pc = 0x79B034u;
    {
        const bool branch_taken_0x79b034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B034u;
        // 0x79b038: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b034) {
            ctx->pc = 0x79B01Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b01c;
        }
    }
    ctx->pc = 0x79B03Cu;
label_79b03c:
    // 0x79b03c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79b040:
    // 0x79b040: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x79b040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_79b044:
    // 0x79b044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79b048:
    // 0x79b048: 0x24e4ee00  addiu       $a0, $a3, -0x1200
    ctx->pc = 0x79b048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962688));
label_79b04c:
    // 0x79b04c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79b04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_79b050:
    // 0x79b050: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b054:
    // 0x79b054: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b058:
    // 0x79b058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b05c:
    // 0x79b05c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b05cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b060:
    // 0x79b060: 0xc0b2e28  jal         func_2CB8A0
label_79b064:
    if (ctx->pc == 0x79B064u) {
        ctx->pc = 0x79B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B060u;
        // 0x79b064: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B068u;
        goto label_79b068;
    }
    ctx->pc = 0x79B060u;
    SET_GPR_U32(ctx, 31, 0x79B068u);
    ctx->pc = 0x79B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B060u;
    // 0x79b064: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B060u, 0x79B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B068u;
label_79b068:
    // 0x79b068: 0x10000006  b           . + 4 + (0x6 << 2)
label_79b06c:
    if (ctx->pc == 0x79B06Cu) {
        ctx->pc = 0x79B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B068u;
        // 0x79b06c: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B070u;
        goto label_79b070;
    }
    ctx->pc = 0x79B068u;
    {
        const bool branch_taken_0x79b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B068u;
        // 0x79b06c: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b068) {
            ctx->pc = 0x79B084u;
            goto label_79b084;
        }
    }
    ctx->pc = 0x79B070u;
label_79b070:
    // 0x79b070: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b074:
    // 0x79b074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b078:
    // 0x79b078: 0xc0b56a8  jal         func_2D5AA0
label_79b07c:
    if (ctx->pc == 0x79B07Cu) {
        ctx->pc = 0x79B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B078u;
        // 0x79b07c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B080u;
        goto label_79b080;
    }
    ctx->pc = 0x79B078u;
    SET_GPR_U32(ctx, 31, 0x79B080u);
    ctx->pc = 0x79B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B078u;
    // 0x79b07c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B078u, 0x79B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B080u;
label_79b080:
    // 0x79b080: 0x8e44c180  lw          $a0, -0x3E80($s2)
    ctx->pc = 0x79b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b084:
    // 0x79b084: 0xc070fce  jal         func_1C3F38
label_79b088:
    if (ctx->pc == 0x79B088u) {
        ctx->pc = 0x79B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B084u;
        // 0x79b088: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B08Cu;
        goto label_79b08c;
    }
    ctx->pc = 0x79B084u;
    SET_GPR_U32(ctx, 31, 0x79B08Cu);
    ctx->pc = 0x79B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B084u;
    // 0x79b088: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79B084u, 0x79B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B08Cu;
label_79b08c:
    // 0x79b08c: 0x1050fff8  beq         $v0, $s0, . + 4 + (-0x8 << 2)
label_79b090:
    if (ctx->pc == 0x79B090u) {
        ctx->pc = 0x79B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B08Cu;
        // 0x79b090: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B094u;
        goto label_79b094;
    }
    ctx->pc = 0x79B08Cu;
    {
        const bool branch_taken_0x79b08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B08Cu;
        // 0x79b090: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b08c) {
            ctx->pc = 0x79B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b070;
        }
    }
    ctx->pc = 0x79B094u;
label_79b094:
    // 0x79b094: 0xc0a421a  jal         func_290868
label_79b098:
    if (ctx->pc == 0x79B098u) {
        ctx->pc = 0x79B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B094u;
        // 0x79b098: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B09Cu;
        goto label_79b09c;
    }
    ctx->pc = 0x79B094u;
    SET_GPR_U32(ctx, 31, 0x79B09Cu);
    ctx->pc = 0x79B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B094u;
    // 0x79b098: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B094u, 0x79B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B09Cu;
label_79b09c:
    // 0x79b09c: 0x8e43c180  lw          $v1, -0x3E80($s2)
    ctx->pc = 0x79b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b0a0:
    // 0x79b0a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b0a4:
    // 0x79b0a4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79b0a8:
    if (ctx->pc == 0x79B0A8u) {
        ctx->pc = 0x79B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A4u;
        // 0x79b0a8: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0ACu;
        goto label_79b0ac;
    }
    ctx->pc = 0x79B0A4u;
    {
        const bool branch_taken_0x79b0a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A4u;
        // 0x79b0a8: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0a4) {
            ctx->pc = 0x79B0E8u;
            goto label_79b0e8;
        }
    }
    ctx->pc = 0x79B0ACu;
label_79b0ac:
    // 0x79b0ac: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x79b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_79b0b0:
    // 0x79b0b0: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79b0b4:
    if (ctx->pc == 0x79B0B4u) {
        ctx->pc = 0x79B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B0u;
        // 0x79b0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0B8u;
        goto label_79b0b8;
    }
    ctx->pc = 0x79B0B0u;
    {
        const bool branch_taken_0x79b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B0u;
        // 0x79b0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0b0) {
            ctx->pc = 0x79B0C0u;
            goto label_79b0c0;
        }
    }
    ctx->pc = 0x79B0B8u;
label_79b0b8:
    // 0x79b0b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_79b0bc:
    if (ctx->pc == 0x79B0BCu) {
        ctx->pc = 0x79B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B8u;
        // 0x79b0bc: 0xac60019c  sw          $zero, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0C0u;
        goto label_79b0c0;
    }
    ctx->pc = 0x79B0B8u;
    {
        const bool branch_taken_0x79b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B8u;
        // 0x79b0bc: 0xac60019c  sw          $zero, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0b8) {
            ctx->pc = 0x79B0E8u;
            goto label_79b0e8;
        }
    }
    ctx->pc = 0x79B0C0u;
label_79b0c0:
    // 0x79b0c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79b0c4:
    // 0x79b0c4: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79b0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b0c8:
    // 0x79b0c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79b0cc:
    if (ctx->pc == 0x79B0CCu) {
        ctx->pc = 0x79B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C8u;
        // 0x79b0cc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0D0u;
        goto label_79b0d0;
    }
    ctx->pc = 0x79B0C8u;
    {
        const bool branch_taken_0x79b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C8u;
        // 0x79b0cc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0c8) {
            ctx->pc = 0x79B0E8u;
            goto label_79b0e8;
        }
    }
    ctx->pc = 0x79B0D0u;
label_79b0d0:
    // 0x79b0d0: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79b0d4:
    // 0x79b0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b0d8:
    // 0x79b0d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79b0dc:
    // 0x79b0dc: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79b0e0:
    if (ctx->pc == 0x79B0E0u) {
        ctx->pc = 0x79B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0DCu;
        // 0x79b0e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0E4u;
        goto label_79b0e4;
    }
    ctx->pc = 0x79B0DCu;
    {
        const bool branch_taken_0x79b0dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0DCu;
        // 0x79b0e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0dc) {
            ctx->pc = 0x79B0C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0c4;
        }
    }
    ctx->pc = 0x79B0E4u;
label_79b0e4:
    // 0x79b0e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79b0e8:
    // 0x79b0e8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79b0e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79b0ec:
    // 0x79b0ec: 0xc0a421a  jal         func_290868
label_79b0f0:
    if (ctx->pc == 0x79B0F0u) {
        ctx->pc = 0x79B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0ECu;
        // 0x79b0f0: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0F4u;
        goto label_79b0f4;
    }
    ctx->pc = 0x79B0ECu;
    SET_GPR_U32(ctx, 31, 0x79B0F4u);
    ctx->pc = 0x79B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0ECu;
    // 0x79b0f0: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B0ECu, 0x79B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0F4u;
label_79b0f4:
    // 0x79b0f4: 0x8e43c180  lw          $v1, -0x3E80($s2)
    ctx->pc = 0x79b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b0f8:
    // 0x79b0f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b0fc:
    // 0x79b0fc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79b100:
    if (ctx->pc == 0x79B100u) {
        ctx->pc = 0x79B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0FCu;
        // 0x79b100: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B104u;
        goto label_79b104;
    }
    ctx->pc = 0x79B0FCu;
    {
        const bool branch_taken_0x79b0fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0FCu;
        // 0x79b100: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0fc) {
            ctx->pc = 0x79B140u;
            goto label_79b140;
        }
    }
    ctx->pc = 0x79B104u;
label_79b104:
    // 0x79b104: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x79b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_79b108:
    // 0x79b108: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79b10c:
    if (ctx->pc == 0x79B10Cu) {
        ctx->pc = 0x79B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B108u;
        // 0x79b10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B110u;
        goto label_79b110;
    }
    ctx->pc = 0x79B108u;
    {
        const bool branch_taken_0x79b108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B108u;
        // 0x79b10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b108) {
            ctx->pc = 0x79B118u;
            goto label_79b118;
        }
    }
    ctx->pc = 0x79B110u;
label_79b110:
    // 0x79b110: 0x1000000b  b           . + 4 + (0xB << 2)
label_79b114:
    if (ctx->pc == 0x79B114u) {
        ctx->pc = 0x79B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B110u;
        // 0x79b114: 0xac60019c  sw          $zero, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B118u;
        goto label_79b118;
    }
    ctx->pc = 0x79B110u;
    {
        const bool branch_taken_0x79b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B110u;
        // 0x79b114: 0xac60019c  sw          $zero, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b110) {
            ctx->pc = 0x79B140u;
            goto label_79b140;
        }
    }
    ctx->pc = 0x79B118u;
label_79b118:
    // 0x79b118: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79b11c:
    // 0x79b11c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79b11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b120:
    // 0x79b120: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79b124:
    if (ctx->pc == 0x79B124u) {
        ctx->pc = 0x79B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B120u;
        // 0x79b124: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B128u;
        goto label_79b128;
    }
    ctx->pc = 0x79B120u;
    {
        const bool branch_taken_0x79b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B120u;
        // 0x79b124: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b120) {
            ctx->pc = 0x79B140u;
            goto label_79b140;
        }
    }
    ctx->pc = 0x79B128u;
label_79b128:
    // 0x79b128: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79b12c:
    // 0x79b12c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b130:
    // 0x79b130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79b134:
    // 0x79b134: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79b138:
    if (ctx->pc == 0x79B138u) {
        ctx->pc = 0x79B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B134u;
        // 0x79b138: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B13Cu;
        goto label_79b13c;
    }
    ctx->pc = 0x79B134u;
    {
        const bool branch_taken_0x79b134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B134u;
        // 0x79b138: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b134) {
            ctx->pc = 0x79B11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b11c;
        }
    }
    ctx->pc = 0x79B13Cu;
label_79b13c:
    // 0x79b13c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79b140:
    // 0x79b140: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b144:
    // 0x79b144: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79b148:
    // 0x79b148: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79b14c:
    // 0x79b14c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79b150:
    // 0x79b150: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b154:
    // 0x79b154: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79b158:
    // 0x79b158: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79b15c:
    // 0x79b15c: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_79b160:
    // 0x79b160: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79b160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79b164:
    // 0x79b164: 0xc0b0a92  jal         func_2C2A48
label_79b168:
    if (ctx->pc == 0x79B168u) {
        ctx->pc = 0x79B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B164u;
        // 0x79b168: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B16Cu;
        goto label_79b16c;
    }
    ctx->pc = 0x79B164u;
    SET_GPR_U32(ctx, 31, 0x79B16Cu);
    ctx->pc = 0x79B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B164u;
    // 0x79b168: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B164u, 0x79B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B16Cu;
label_79b16c:
    // 0x79b16c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79b16cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b170:
    // 0x79b170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b174:
    // 0x79b174: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79b178:
    // 0x79b178: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79b178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79b17c:
    // 0x79b17c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b180:
    // 0x79b180: 0xc0a57e0  jal         func_295F80
label_79b184:
    if (ctx->pc == 0x79B184u) {
        ctx->pc = 0x79B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B180u;
        // 0x79b184: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B188u;
        goto label_79b188;
    }
    ctx->pc = 0x79B180u;
    SET_GPR_U32(ctx, 31, 0x79B188u);
    ctx->pc = 0x79B184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B180u;
    // 0x79b184: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B180u, 0x79B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B188u;
label_79b188:
    // 0x79b188: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79b18c:
    // 0x79b18c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b190:
    // 0x79b190: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79b190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79b194:
    // 0x79b194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79b198:
    // 0x79b198: 0xc0a57e0  jal         func_295F80
label_79b19c:
    if (ctx->pc == 0x79B19Cu) {
        ctx->pc = 0x79B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B198u;
        // 0x79b19c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1A0u;
        goto label_79b1a0;
    }
    ctx->pc = 0x79B198u;
    SET_GPR_U32(ctx, 31, 0x79B1A0u);
    ctx->pc = 0x79B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B198u;
    // 0x79b19c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B198u, 0x79B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1A0u;
label_79b1a0:
    // 0x79b1a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b1a4:
    // 0x79b1a4: 0xc0a56e0  jal         func_295B80
label_79b1a8:
    if (ctx->pc == 0x79B1A8u) {
        ctx->pc = 0x79B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1A4u;
        // 0x79b1a8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1ACu;
        goto label_79b1ac;
    }
    ctx->pc = 0x79B1A4u;
    SET_GPR_U32(ctx, 31, 0x79B1ACu);
    ctx->pc = 0x79B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A4u;
    // 0x79b1a8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79B1A4u, 0x79B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1ACu;
label_79b1ac:
    // 0x79b1ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79b1acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79b1b0:
    // 0x79b1b0: 0xc0a56e0  jal         func_295B80
label_79b1b4:
    if (ctx->pc == 0x79B1B4u) {
        ctx->pc = 0x79B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B0u;
        // 0x79b1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1B8u;
        goto label_79b1b8;
    }
    ctx->pc = 0x79B1B0u;
    SET_GPR_U32(ctx, 31, 0x79B1B8u);
    ctx->pc = 0x79B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1B0u;
    // 0x79b1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79B1B0u, 0x79B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B8u;
label_79b1b8:
    // 0x79b1b8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b1bc:
    // 0x79b1bc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79b1c0:
    // 0x79b1c0: 0xc0b56a8  jal         func_2D5AA0
label_79b1c4:
    if (ctx->pc == 0x79B1C4u) {
        ctx->pc = 0x79B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1C0u;
        // 0x79b1c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1C8u;
        goto label_79b1c8;
    }
    ctx->pc = 0x79B1C0u;
    SET_GPR_U32(ctx, 31, 0x79B1C8u);
    ctx->pc = 0x79B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1C0u;
    // 0x79b1c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B1C0u, 0x79B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1C8u;
label_79b1c8:
    // 0x79b1c8: 0xc0b101e  jal         func_2C4078
label_79b1cc:
    if (ctx->pc == 0x79B1CCu) {
        ctx->pc = 0x79B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1C8u;
        // 0x79b1cc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1D0u;
        goto label_79b1d0;
    }
    ctx->pc = 0x79B1C8u;
    SET_GPR_U32(ctx, 31, 0x79B1D0u);
    ctx->pc = 0x79B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1C8u;
    // 0x79b1cc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B1C8u, 0x79B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1D0u;
label_79b1d0:
    // 0x79b1d0: 0xc0b0f04  jal         func_2C3C10
label_79b1d4:
    if (ctx->pc == 0x79B1D4u) {
        ctx->pc = 0x79B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D0u;
        // 0x79b1d4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1D8u;
        goto label_79b1d8;
    }
    ctx->pc = 0x79B1D0u;
    SET_GPR_U32(ctx, 31, 0x79B1D8u);
    ctx->pc = 0x79B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1D0u;
    // 0x79b1d4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B1D0u, 0x79B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1D8u;
label_79b1d8:
    // 0x79b1d8: 0xc0b6dac  jal         func_2DB6B0
label_79b1dc:
    if (ctx->pc == 0x79B1DCu) {
        ctx->pc = 0x79B1E0u;
        goto label_79b1e0;
    }
    ctx->pc = 0x79B1D8u;
    SET_GPR_U32(ctx, 31, 0x79B1E0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B1D8u, 0x79B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1E0u;
label_79b1e0:
    // 0x79b1e0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b1e4:
    // 0x79b1e4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79b1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79b1e8:
    // 0x79b1e8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79b1ec:
    // 0x79b1ec: 0xa0f809  jalr        $a1
label_79b1f0:
    if (ctx->pc == 0x79B1F0u) {
        ctx->pc = 0x79B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1ECu;
        // 0x79b1f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1F4u;
        goto label_79b1f4;
    }
    ctx->pc = 0x79B1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79B1F4u);
        ctx->pc = 0x79B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1ECu;
        // 0x79b1f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B1ECu, 0x79B1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B1F4u;
label_79b1f4:
    // 0x79b1f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b1f8:
    // 0x79b1f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b1fc:
    // 0x79b1fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79b200:
    // 0x79b200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b204:
    // 0x79b204: 0xc0a57e0  jal         func_295F80
label_79b208:
    if (ctx->pc == 0x79B208u) {
        ctx->pc = 0x79B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B204u;
        // 0x79b208: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B20Cu;
        goto label_79b20c;
    }
    ctx->pc = 0x79B204u;
    SET_GPR_U32(ctx, 31, 0x79B20Cu);
    ctx->pc = 0x79B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B204u;
    // 0x79b208: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B204u, 0x79B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B20Cu;
label_79b20c:
    // 0x79b20c: 0xc0b6dac  jal         func_2DB6B0
label_79b210:
    if (ctx->pc == 0x79B210u) {
        ctx->pc = 0x79B214u;
        goto label_79b214;
    }
    ctx->pc = 0x79B20Cu;
    SET_GPR_U32(ctx, 31, 0x79B214u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B20Cu, 0x79B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B214u;
label_79b214:
    // 0x79b214: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b218:
    // 0x79b218: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79b21c:
    // 0x79b21c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79b220:
    // 0x79b220: 0xa0f809  jalr        $a1
label_79b224:
    if (ctx->pc == 0x79B224u) {
        ctx->pc = 0x79B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B220u;
        // 0x79b224: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B228u;
        goto label_79b228;
    }
    ctx->pc = 0x79B220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79B228u);
        ctx->pc = 0x79B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B220u;
        // 0x79b224: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B220u, 0x79B228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B228u;
label_79b228:
    // 0x79b228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b22c:
    // 0x79b22c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b22cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79b230:
    // 0x79b230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79b234:
    // 0x79b234: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79b234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79b238:
    // 0x79b238: 0xc0a57e0  jal         func_295F80
label_79b23c:
    if (ctx->pc == 0x79B23Cu) {
        ctx->pc = 0x79B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B238u;
        // 0x79b23c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B240u;
        goto label_79b240;
    }
    ctx->pc = 0x79B238u;
    SET_GPR_U32(ctx, 31, 0x79B240u);
    ctx->pc = 0x79B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B238u;
    // 0x79b23c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B238u, 0x79B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B240u;
label_79b240:
    // 0x79b240: 0x10000007  b           . + 4 + (0x7 << 2)
label_79b244:
    if (ctx->pc == 0x79B244u) {
        ctx->pc = 0x79B248u;
        goto label_79b248;
    }
    ctx->pc = 0x79B240u;
    {
        const bool branch_taken_0x79b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b240) {
            ctx->pc = 0x79B260u;
            goto label_79b260;
        }
    }
    ctx->pc = 0x79B248u;
label_79b248:
    // 0x79b248: 0xc1e6ed0  jal         func_79BB40
label_79b24c:
    if (ctx->pc == 0x79B24Cu) {
        ctx->pc = 0x79B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B248u;
        // 0x79b24c: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B250u;
        goto label_79b250;
    }
    ctx->pc = 0x79B248u;
    SET_GPR_U32(ctx, 31, 0x79B250u);
    ctx->pc = 0x79B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B248u;
    // 0x79b24c: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BB40u, 0x79B248u, 0x79B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B250u;
label_79b250:
    // 0x79b250: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b254:
    // 0x79b254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b258:
    // 0x79b258: 0xc0b56a8  jal         func_2D5AA0
label_79b25c:
    if (ctx->pc == 0x79B25Cu) {
        ctx->pc = 0x79B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B258u;
        // 0x79b25c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B260u;
        goto label_79b260;
    }
    ctx->pc = 0x79B258u;
    SET_GPR_U32(ctx, 31, 0x79B260u);
    ctx->pc = 0x79B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B258u;
    // 0x79b25c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B258u, 0x79B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B260u;
label_79b260:
    // 0x79b260: 0xc1e64e6  jal         func_799398
label_79b264:
    if (ctx->pc == 0x79B264u) {
        ctx->pc = 0x79B268u;
        goto label_79b268;
    }
    ctx->pc = 0x79B260u;
    SET_GPR_U32(ctx, 31, 0x79B268u);
    ctx->pc = 0x799398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799398u, 0x79B260u, 0x79B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B268u;
label_79b268:
    // 0x79b268: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_79b26c:
    if (ctx->pc == 0x79B26Cu) {
        ctx->pc = 0x79B270u;
        goto label_79b270;
    }
    ctx->pc = 0x79B268u;
    {
        const bool branch_taken_0x79b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b268) {
            ctx->pc = 0x79B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b248;
        }
    }
    ctx->pc = 0x79B270u;
label_79b270:
    // 0x79b270: 0xc0b0f90  jal         func_2C3E40
label_79b274:
    if (ctx->pc == 0x79B274u) {
        ctx->pc = 0x79B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B270u;
        // 0x79b274: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B278u;
        goto label_79b278;
    }
    ctx->pc = 0x79B270u;
    SET_GPR_U32(ctx, 31, 0x79B278u);
    ctx->pc = 0x79B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B270u;
    // 0x79b274: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B270u, 0x79B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B278u;
label_79b278:
    // 0x79b278: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
label_79b27c:
    if (ctx->pc == 0x79B27Cu) {
        ctx->pc = 0x79B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B278u;
        // 0x79b27c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B280u;
        goto label_79b280;
    }
    ctx->pc = 0x79B278u;
    {
        const bool branch_taken_0x79b278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B278u;
        // 0x79b27c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b278) {
            ctx->pc = 0x79B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b248;
        }
    }
    ctx->pc = 0x79B280u;
label_79b280:
    // 0x79b280: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b284:
    // 0x79b284: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79b288:
    // 0x79b288: 0xc0b0e6c  jal         func_2C39B0
label_79b28c:
    if (ctx->pc == 0x79B28Cu) {
        ctx->pc = 0x79B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B288u;
        // 0x79b28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B290u;
        goto label_79b290;
    }
    ctx->pc = 0x79B288u;
    SET_GPR_U32(ctx, 31, 0x79B290u);
    ctx->pc = 0x79B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B288u;
    // 0x79b28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B288u, 0x79B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B290u;
label_79b290:
    // 0x79b290: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b290u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b294:
    // 0x79b294: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b298:
    // 0x79b298: 0xc0b0fb6  jal         func_2C3ED8
label_79b29c:
    if (ctx->pc == 0x79B29Cu) {
        ctx->pc = 0x79B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B298u;
        // 0x79b29c: 0x24e5c088  addiu       $a1, $a3, -0x3F78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2A0u;
        goto label_79b2a0;
    }
    ctx->pc = 0x79B298u;
    SET_GPR_U32(ctx, 31, 0x79B2A0u);
    ctx->pc = 0x79B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B298u;
    // 0x79b29c: 0x24e5c088  addiu       $a1, $a3, -0x3F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B298u, 0x79B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2A0u;
label_79b2a0:
    // 0x79b2a0: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79b2a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79b2a4:
    // 0x79b2a4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79b2a8:
    // 0x79b2a8: 0xc0a54b4  jal         func_2952D0
label_79b2ac:
    if (ctx->pc == 0x79B2ACu) {
        ctx->pc = 0x79B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2A8u;
        // 0x79b2ac: 0x24446ab0  addiu       $a0, $v0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2B0u;
        goto label_79b2b0;
    }
    ctx->pc = 0x79B2A8u;
    SET_GPR_U32(ctx, 31, 0x79B2B0u);
    ctx->pc = 0x79B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2A8u;
    // 0x79b2ac: 0x24446ab0  addiu       $a0, $v0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B2A8u, 0x79B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2B0u;
label_79b2b0:
    // 0x79b2b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b2b4:
    // 0x79b2b4: 0xc0a578e  jal         func_295E38
label_79b2b8:
    if (ctx->pc == 0x79B2B8u) {
        ctx->pc = 0x79B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B4u;
        // 0x79b2b8: 0x24050a5c  addiu       $a1, $zero, 0xA5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2652));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2BCu;
        goto label_79b2bc;
    }
    ctx->pc = 0x79B2B4u;
    SET_GPR_U32(ctx, 31, 0x79B2BCu);
    ctx->pc = 0x79B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2B4u;
    // 0x79b2b8: 0x24050a5c  addiu       $a1, $zero, 0xA5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79B2B4u, 0x79B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2BCu;
label_79b2bc:
    // 0x79b2bc: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79b2bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79b2c0:
    // 0x79b2c0: 0xc0a421a  jal         func_290868
label_79b2c4:
    if (ctx->pc == 0x79B2C4u) {
        ctx->pc = 0x79B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2C0u;
        // 0x79b2c4: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2C8u;
        goto label_79b2c8;
    }
    ctx->pc = 0x79B2C0u;
    SET_GPR_U32(ctx, 31, 0x79B2C8u);
    ctx->pc = 0x79B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2C0u;
    // 0x79b2c4: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B2C0u, 0x79B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2C8u;
label_79b2c8:
    // 0x79b2c8: 0x8e43c180  lw          $v1, -0x3E80($s2)
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b2cc:
    // 0x79b2cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b2d0:
    // 0x79b2d0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79b2d4:
    if (ctx->pc == 0x79B2D4u) {
        ctx->pc = 0x79B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D0u;
        // 0x79b2d4: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2D8u;
        goto label_79b2d8;
    }
    ctx->pc = 0x79B2D0u;
    {
        const bool branch_taken_0x79b2d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D0u;
        // 0x79b2d4: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2d0) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B2D8u;
label_79b2d8:
    // 0x79b2d8: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x79b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_79b2dc:
    // 0x79b2dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79b2e0:
    if (ctx->pc == 0x79B2E0u) {
        ctx->pc = 0x79B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2DCu;
        // 0x79b2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2E4u;
        goto label_79b2e4;
    }
    ctx->pc = 0x79B2DCu;
    {
        const bool branch_taken_0x79b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2DCu;
        // 0x79b2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2dc) {
            ctx->pc = 0x79B2F0u;
            goto label_79b2f0;
        }
    }
    ctx->pc = 0x79B2E4u;
label_79b2e4:
    // 0x79b2e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_79b2e8:
    if (ctx->pc == 0x79B2E8u) {
        ctx->pc = 0x79B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E4u;
        // 0x79b2e8: 0xac66019c  sw          $a2, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2ECu;
        goto label_79b2ec;
    }
    ctx->pc = 0x79B2E4u;
    {
        const bool branch_taken_0x79b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E4u;
        // 0x79b2e8: 0xac66019c  sw          $a2, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2e4) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B2ECu;
label_79b2ec:
    // 0x79b2ec: 0x0  nop
    ctx->pc = 0x79b2ecu;
    // NOP
label_79b2f0:
    // 0x79b2f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79b2f4:
    // 0x79b2f4: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79b2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b2f8:
    // 0x79b2f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79b2fc:
    if (ctx->pc == 0x79B2FCu) {
        ctx->pc = 0x79B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2F8u;
        // 0x79b2fc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B300u;
        goto label_79b300;
    }
    ctx->pc = 0x79B2F8u;
    {
        const bool branch_taken_0x79b2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2F8u;
        // 0x79b2fc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2f8) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B300u;
label_79b300:
    // 0x79b300: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79b304:
    // 0x79b304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b308:
    // 0x79b308: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79b30c:
    // 0x79b30c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79b310:
    if (ctx->pc == 0x79B310u) {
        ctx->pc = 0x79B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B30Cu;
        // 0x79b310: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B314u;
        goto label_79b314;
    }
    ctx->pc = 0x79B30Cu;
    {
        const bool branch_taken_0x79b30c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B30Cu;
        // 0x79b310: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b30c) {
            ctx->pc = 0x79B2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2f4;
        }
    }
    ctx->pc = 0x79B314u;
label_79b314:
    // 0x79b314: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79b314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79b318:
    // 0x79b318: 0x8e44c180  lw          $a0, -0x3E80($s2)
    ctx->pc = 0x79b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b31c:
    // 0x79b31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b320:
    // 0x79b320: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b324:
    // 0x79b324: 0xc071f28  jal         func_1C7CA0
label_79b328:
    if (ctx->pc == 0x79B328u) {
        ctx->pc = 0x79B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B324u;
        // 0x79b328: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B32Cu;
        goto label_79b32c;
    }
    ctx->pc = 0x79B324u;
    SET_GPR_U32(ctx, 31, 0x79B32Cu);
    ctx->pc = 0x79B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B324u;
    // 0x79b328: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79B324u, 0x79B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B32Cu;
label_79b32c:
    // 0x79b32c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b330:
    // 0x79b330: 0xc0a56f0  jal         func_295BC0
label_79b334:
    if (ctx->pc == 0x79B334u) {
        ctx->pc = 0x79B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B330u;
        // 0x79b334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B338u;
        goto label_79b338;
    }
    ctx->pc = 0x79B330u;
    SET_GPR_U32(ctx, 31, 0x79B338u);
    ctx->pc = 0x79B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B330u;
    // 0x79b334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B330u, 0x79B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B338u;
label_79b338:
    // 0x79b338: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x79b338u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_79b33c:
    // 0x79b33c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79b340:
    // 0x79b340: 0x24e4ee00  addiu       $a0, $a3, -0x1200
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962688));
label_79b344:
    // 0x79b344: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x79b344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_79b348:
    // 0x79b348: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b34c:
    // 0x79b34c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b350:
    // 0x79b350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b354:
    // 0x79b354: 0xc0b2e28  jal         func_2CB8A0
label_79b358:
    if (ctx->pc == 0x79B358u) {
        ctx->pc = 0x79B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B354u;
        // 0x79b358: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B35Cu;
        goto label_79b35c;
    }
    ctx->pc = 0x79B354u;
    SET_GPR_U32(ctx, 31, 0x79B35Cu);
    ctx->pc = 0x79B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B354u;
    // 0x79b358: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B354u, 0x79B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B35Cu;
label_79b35c:
    // 0x79b35c: 0x10000006  b           . + 4 + (0x6 << 2)
label_79b360:
    if (ctx->pc == 0x79B360u) {
        ctx->pc = 0x79B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B35Cu;
        // 0x79b360: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B364u;
        goto label_79b364;
    }
    ctx->pc = 0x79B35Cu;
    {
        const bool branch_taken_0x79b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B35Cu;
        // 0x79b360: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b35c) {
            ctx->pc = 0x79B378u;
            goto label_79b378;
        }
    }
    ctx->pc = 0x79B364u;
label_79b364:
    // 0x79b364: 0x0  nop
    ctx->pc = 0x79b364u;
    // NOP
label_79b368:
    // 0x79b368: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b36c:
    // 0x79b36c: 0xc0b56a8  jal         func_2D5AA0
label_79b370:
    if (ctx->pc == 0x79B370u) {
        ctx->pc = 0x79B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B36Cu;
        // 0x79b370: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B374u;
        goto label_79b374;
    }
    ctx->pc = 0x79B36Cu;
    SET_GPR_U32(ctx, 31, 0x79B374u);
    ctx->pc = 0x79B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B36Cu;
    // 0x79b370: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B36Cu, 0x79B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B374u;
label_79b374:
    // 0x79b374: 0x8e44c180  lw          $a0, -0x3E80($s2)
    ctx->pc = 0x79b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b378:
    // 0x79b378: 0xc070fce  jal         func_1C3F38
label_79b37c:
    if (ctx->pc == 0x79B37Cu) {
        ctx->pc = 0x79B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B378u;
        // 0x79b37c: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B380u;
        goto label_79b380;
    }
    ctx->pc = 0x79B378u;
    SET_GPR_U32(ctx, 31, 0x79B380u);
    ctx->pc = 0x79B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B378u;
    // 0x79b37c: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79B378u, 0x79B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B380u;
label_79b380:
    // 0x79b380: 0x1050fff9  beq         $v0, $s0, . + 4 + (-0x7 << 2)
label_79b384:
    if (ctx->pc == 0x79B384u) {
        ctx->pc = 0x79B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B380u;
        // 0x79b384: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B388u;
        goto label_79b388;
    }
    ctx->pc = 0x79B380u;
    {
        const bool branch_taken_0x79b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B380u;
        // 0x79b384: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b380) {
            ctx->pc = 0x79B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b368;
        }
    }
    ctx->pc = 0x79B388u;
label_79b388:
    // 0x79b388: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79b38c:
    // 0x79b38c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b390:
    // 0x79b390: 0xc0b56a8  jal         func_2D5AA0
label_79b394:
    if (ctx->pc == 0x79B394u) {
        ctx->pc = 0x79B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B390u;
        // 0x79b394: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B398u;
        goto label_79b398;
    }
    ctx->pc = 0x79B390u;
    SET_GPR_U32(ctx, 31, 0x79B398u);
    ctx->pc = 0x79B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B390u;
    // 0x79b394: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B390u, 0x79B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B398u;
label_79b398:
    // 0x79b398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b39c:
    // 0x79b39c: 0xc0a56f0  jal         func_295BC0
label_79b3a0:
    if (ctx->pc == 0x79B3A0u) {
        ctx->pc = 0x79B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B39Cu;
        // 0x79b3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3A4u;
        goto label_79b3a4;
    }
    ctx->pc = 0x79B39Cu;
    SET_GPR_U32(ctx, 31, 0x79B3A4u);
    ctx->pc = 0x79B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B39Cu;
    // 0x79b3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B39Cu, 0x79B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3A4u;
label_79b3a4:
    // 0x79b3a4: 0x8e44c180  lw          $a0, -0x3E80($s2)
    ctx->pc = 0x79b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b3a8:
    // 0x79b3a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b3ac:
    // 0x79b3ac: 0xc071f28  jal         func_1C7CA0
label_79b3b0:
    if (ctx->pc == 0x79B3B0u) {
        ctx->pc = 0x79B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3ACu;
        // 0x79b3b0: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3B4u;
        goto label_79b3b4;
    }
    ctx->pc = 0x79B3ACu;
    SET_GPR_U32(ctx, 31, 0x79B3B4u);
    ctx->pc = 0x79B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3ACu;
    // 0x79b3b0: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79B3ACu, 0x79B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3B4u;
label_79b3b4:
    // 0x79b3b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79b3b8:
    // 0x79b3b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79b3bc:
    // 0x79b3bc: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79b3c0:
    // 0x79b3c0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_79b3c4:
    // 0x79b3c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b3c8:
    // 0x79b3c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b3cc:
    // 0x79b3cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b3d0:
    // 0x79b3d0: 0xc0b2e28  jal         func_2CB8A0
label_79b3d4:
    if (ctx->pc == 0x79B3D4u) {
        ctx->pc = 0x79B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D0u;
        // 0x79b3d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3D8u;
        goto label_79b3d8;
    }
    ctx->pc = 0x79B3D0u;
    SET_GPR_U32(ctx, 31, 0x79B3D8u);
    ctx->pc = 0x79B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3D0u;
    // 0x79b3d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B3D0u, 0x79B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3D8u;
label_79b3d8:
    // 0x79b3d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_79b3dc:
    if (ctx->pc == 0x79B3DCu) {
        ctx->pc = 0x79B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D8u;
        // 0x79b3dc: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3E0u;
        goto label_79b3e0;
    }
    ctx->pc = 0x79B3D8u;
    {
        const bool branch_taken_0x79b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D8u;
        // 0x79b3dc: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d8) {
            ctx->pc = 0x79B3F4u;
            goto label_79b3f4;
        }
    }
    ctx->pc = 0x79B3E0u;
label_79b3e0:
    // 0x79b3e0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b3e4:
    // 0x79b3e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b3e8:
    // 0x79b3e8: 0xc0b56a8  jal         func_2D5AA0
label_79b3ec:
    if (ctx->pc == 0x79B3ECu) {
        ctx->pc = 0x79B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3E8u;
        // 0x79b3ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3F0u;
        goto label_79b3f0;
    }
    ctx->pc = 0x79B3E8u;
    SET_GPR_U32(ctx, 31, 0x79B3F0u);
    ctx->pc = 0x79B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3E8u;
    // 0x79b3ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B3E8u, 0x79B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3F0u;
label_79b3f0:
    // 0x79b3f0: 0x8e44c180  lw          $a0, -0x3E80($s2)
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b3f4:
    // 0x79b3f4: 0xc070fce  jal         func_1C3F38
label_79b3f8:
    if (ctx->pc == 0x79B3F8u) {
        ctx->pc = 0x79B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3F4u;
        // 0x79b3f8: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3FCu;
        goto label_79b3fc;
    }
    ctx->pc = 0x79B3F4u;
    SET_GPR_U32(ctx, 31, 0x79B3FCu);
    ctx->pc = 0x79B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3F4u;
    // 0x79b3f8: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79B3F4u, 0x79B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3FCu;
label_79b3fc:
    // 0x79b3fc: 0x1050fff8  beq         $v0, $s0, . + 4 + (-0x8 << 2)
label_79b400:
    if (ctx->pc == 0x79B400u) {
        ctx->pc = 0x79B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3FCu;
        // 0x79b400: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B404u;
        goto label_79b404;
    }
    ctx->pc = 0x79B3FCu;
    {
        const bool branch_taken_0x79b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3FCu;
        // 0x79b400: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3fc) {
            ctx->pc = 0x79B3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b3e0;
        }
    }
    ctx->pc = 0x79B404u;
label_79b404:
    // 0x79b404: 0xc0a421a  jal         func_290868
label_79b408:
    if (ctx->pc == 0x79B408u) {
        ctx->pc = 0x79B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B404u;
        // 0x79b408: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B40Cu;
        goto label_79b40c;
    }
    ctx->pc = 0x79B404u;
    SET_GPR_U32(ctx, 31, 0x79B40Cu);
    ctx->pc = 0x79B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B404u;
    // 0x79b408: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B404u, 0x79B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B40Cu;
label_79b40c:
    // 0x79b40c: 0x8e43c180  lw          $v1, -0x3E80($s2)
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
label_79b410:
    // 0x79b410: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b414:
    // 0x79b414: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79b418:
    if (ctx->pc == 0x79B418u) {
        ctx->pc = 0x79B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B414u;
        // 0x79b418: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B41Cu;
        goto label_79b41c;
    }
    ctx->pc = 0x79B414u;
    {
        const bool branch_taken_0x79b414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B414u;
        // 0x79b418: 0x24670190  addiu       $a3, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b414) {
            ctx->pc = 0x79B458u;
            goto label_79b458;
        }
    }
    ctx->pc = 0x79B41Cu;
label_79b41c:
    // 0x79b41c: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x79b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_79b420:
    // 0x79b420: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79b424:
    if (ctx->pc == 0x79B424u) {
        ctx->pc = 0x79B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B420u;
        // 0x79b424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B428u;
        goto label_79b428;
    }
    ctx->pc = 0x79B420u;
    {
        const bool branch_taken_0x79b420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B420u;
        // 0x79b424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b420) {
            ctx->pc = 0x79B430u;
            goto label_79b430;
        }
    }
    ctx->pc = 0x79B428u;
label_79b428:
    // 0x79b428: 0x1000000b  b           . + 4 + (0xB << 2)
label_79b42c:
    if (ctx->pc == 0x79B42Cu) {
        ctx->pc = 0x79B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B428u;
        // 0x79b42c: 0xac60019c  sw          $zero, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B430u;
        goto label_79b430;
    }
    ctx->pc = 0x79B428u;
    {
        const bool branch_taken_0x79b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B428u;
        // 0x79b42c: 0xac60019c  sw          $zero, 0x19C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b428) {
            ctx->pc = 0x79B458u;
            goto label_79b458;
        }
    }
    ctx->pc = 0x79B430u;
label_79b430:
    // 0x79b430: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79b434:
    // 0x79b434: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79b434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b438:
    // 0x79b438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79b43c:
    if (ctx->pc == 0x79B43Cu) {
        ctx->pc = 0x79B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B438u;
        // 0x79b43c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B440u;
        goto label_79b440;
    }
    ctx->pc = 0x79B438u;
    {
        const bool branch_taken_0x79b438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B438u;
        // 0x79b43c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b438) {
            ctx->pc = 0x79B458u;
            goto label_79b458;
        }
    }
    ctx->pc = 0x79B440u;
label_79b440:
    // 0x79b440: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79b444:
    // 0x79b444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b448:
    // 0x79b448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79b44c:
    // 0x79b44c: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79b450:
    if (ctx->pc == 0x79B450u) {
        ctx->pc = 0x79B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B44Cu;
        // 0x79b450: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B454u;
        goto label_79b454;
    }
    ctx->pc = 0x79B44Cu;
    {
        const bool branch_taken_0x79b44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B44Cu;
        // 0x79b450: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b44c) {
            ctx->pc = 0x79B434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b434;
        }
    }
    ctx->pc = 0x79B454u;
label_79b454:
    // 0x79b454: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79b454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79b458:
    // 0x79b458: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b45c:
    // 0x79b45c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x79b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_79b460:
    // 0x79b460: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79b460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79b464:
    // 0x79b464: 0x24e4ea60  addiu       $a0, $a3, -0x15A0
    ctx->pc = 0x79b464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
label_79b468:
    // 0x79b468: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79b46c:
    // 0x79b46c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79b470:
    // 0x79b470: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b474:
    // 0x79b474: 0xc0b0a92  jal         func_2C2A48
label_79b478:
    if (ctx->pc == 0x79B478u) {
        ctx->pc = 0x79B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B474u;
        // 0x79b478: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B47Cu;
        goto label_79b47c;
    }
    ctx->pc = 0x79B474u;
    SET_GPR_U32(ctx, 31, 0x79B47Cu);
    ctx->pc = 0x79B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B474u;
    // 0x79b478: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B474u, 0x79B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B47Cu;
label_79b47c:
    // 0x79b47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b480:
    // 0x79b480: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79b480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79b484:
    // 0x79b484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b488:
    // 0x79b488: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79b488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79b48c:
    // 0x79b48c: 0xc0a57e0  jal         func_295F80
label_79b490:
    if (ctx->pc == 0x79B490u) {
        ctx->pc = 0x79B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B48Cu;
        // 0x79b490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B494u;
        goto label_79b494;
    }
    ctx->pc = 0x79B48Cu;
    SET_GPR_U32(ctx, 31, 0x79B494u);
    ctx->pc = 0x79B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B48Cu;
    // 0x79b490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B48Cu, 0x79B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B494u;
label_79b494:
    // 0x79b494: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x79b494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_79b498:
    // 0x79b498: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79b49c:
    // 0x79b49c: 0xc0a56e0  jal         func_295B80
label_79b4a0:
    if (ctx->pc == 0x79B4A0u) {
        ctx->pc = 0x79B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B49Cu;
        // 0x79b4a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B4A4u;
        goto label_79b4a4;
    }
    ctx->pc = 0x79B49Cu;
    SET_GPR_U32(ctx, 31, 0x79B4A4u);
    ctx->pc = 0x79B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B49Cu;
    // 0x79b4a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79B49Cu, 0x79B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4A4u;
label_79b4a4:
    // 0x79b4a4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b4a8:
    // 0x79b4a8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79b4ac:
    // 0x79b4ac: 0xc0b56a8  jal         func_2D5AA0
label_79b4b0:
    if (ctx->pc == 0x79B4B0u) {
        ctx->pc = 0x79B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4ACu;
        // 0x79b4b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B4B4u;
        goto label_79b4b4;
    }
    ctx->pc = 0x79B4ACu;
    SET_GPR_U32(ctx, 31, 0x79B4B4u);
    ctx->pc = 0x79B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4ACu;
    // 0x79b4b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B4ACu, 0x79B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4B4u;
label_79b4b4:
    // 0x79b4b4: 0xc0b101e  jal         func_2C4078
label_79b4b8:
    if (ctx->pc == 0x79B4B8u) {
        ctx->pc = 0x79B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4B4u;
        // 0x79b4b8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B4BCu;
        goto label_79b4bc;
    }
    ctx->pc = 0x79B4B4u;
    SET_GPR_U32(ctx, 31, 0x79B4BCu);
    ctx->pc = 0x79B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4B4u;
    // 0x79b4b8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B4B4u, 0x79B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4BCu;
label_79b4bc:
    // 0x79b4bc: 0xc0b0f04  jal         func_2C3C10
label_79b4c0:
    if (ctx->pc == 0x79B4C0u) {
        ctx->pc = 0x79B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4BCu;
        // 0x79b4c0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B4C4u;
        goto label_79b4c4;
    }
    ctx->pc = 0x79B4BCu;
    SET_GPR_U32(ctx, 31, 0x79B4C4u);
    ctx->pc = 0x79B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4BCu;
    // 0x79b4c0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B4BCu, 0x79B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4C4u;
label_79b4c4:
    // 0x79b4c4: 0xc0b6dac  jal         func_2DB6B0
label_79b4c8:
    if (ctx->pc == 0x79B4C8u) {
        ctx->pc = 0x79B4CCu;
        goto label_79b4cc;
    }
    ctx->pc = 0x79B4C4u;
    SET_GPR_U32(ctx, 31, 0x79B4CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B4C4u, 0x79B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4CCu;
label_79b4cc:
    // 0x79b4cc: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b4d0:
    // 0x79b4d0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79b4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79b4d4:
    // 0x79b4d4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79b4d8:
    // 0x79b4d8: 0xa0f809  jalr        $a1
label_79b4dc:
    if (ctx->pc == 0x79B4DCu) {
        ctx->pc = 0x79B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4D8u;
        // 0x79b4dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B4E0u;
        goto label_79b4e0;
    }
    ctx->pc = 0x79B4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79B4E0u);
        ctx->pc = 0x79B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4D8u;
        // 0x79b4dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B4D8u, 0x79B4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B4E0u;
label_79b4e0:
    // 0x79b4e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b4e4:
    // 0x79b4e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b4e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79b4e8:
    // 0x79b4e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b4ec:
    // 0x79b4ec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79b4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79b4f0:
    // 0x79b4f0: 0xc0a57e0  jal         func_295F80
label_79b4f4:
    if (ctx->pc == 0x79B4F4u) {
        ctx->pc = 0x79B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4F0u;
        // 0x79b4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B4F8u;
        goto label_79b4f8;
    }
    ctx->pc = 0x79B4F0u;
    SET_GPR_U32(ctx, 31, 0x79B4F8u);
    ctx->pc = 0x79B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4F0u;
    // 0x79b4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B4F0u, 0x79B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4F8u;
label_79b4f8:
    // 0x79b4f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_79b4fc:
    if (ctx->pc == 0x79B4FCu) {
        ctx->pc = 0x79B500u;
        goto label_79b500;
    }
    ctx->pc = 0x79B4F8u;
    {
        const bool branch_taken_0x79b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b4f8) {
            ctx->pc = 0x79B518u;
            goto label_79b518;
        }
    }
    ctx->pc = 0x79B500u;
label_79b500:
    // 0x79b500: 0xc1e6ed0  jal         func_79BB40
label_79b504:
    if (ctx->pc == 0x79B504u) {
        ctx->pc = 0x79B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B500u;
        // 0x79b504: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B508u;
        goto label_79b508;
    }
    ctx->pc = 0x79B500u;
    SET_GPR_U32(ctx, 31, 0x79B508u);
    ctx->pc = 0x79B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B500u;
    // 0x79b504: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BB40u, 0x79B500u, 0x79B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B508u;
label_79b508:
    // 0x79b508: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b50c:
    // 0x79b50c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b510:
    // 0x79b510: 0xc0b56a8  jal         func_2D5AA0
label_79b514:
    if (ctx->pc == 0x79B514u) {
        ctx->pc = 0x79B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B510u;
        // 0x79b514: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B518u;
        goto label_79b518;
    }
    ctx->pc = 0x79B510u;
    SET_GPR_U32(ctx, 31, 0x79B518u);
    ctx->pc = 0x79B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B510u;
    // 0x79b514: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B510u, 0x79B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B518u;
label_79b518:
    // 0x79b518: 0xc1e64e6  jal         func_799398
label_79b51c:
    if (ctx->pc == 0x79B51Cu) {
        ctx->pc = 0x79B520u;
        goto label_79b520;
    }
    ctx->pc = 0x79B518u;
    SET_GPR_U32(ctx, 31, 0x79B520u);
    ctx->pc = 0x799398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799398u, 0x79B518u, 0x79B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B520u;
label_79b520:
    // 0x79b520: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_79b524:
    if (ctx->pc == 0x79B524u) {
        ctx->pc = 0x79B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B520u;
        // 0x79b524: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B528u;
        goto label_79b528;
    }
    ctx->pc = 0x79B520u;
    {
        const bool branch_taken_0x79b520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B520u;
        // 0x79b524: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b520) {
            ctx->pc = 0x79B500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b500;
        }
    }
    ctx->pc = 0x79B528u;
label_79b528:
    // 0x79b528: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x79b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_79b52c:
    // 0x79b52c: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x79b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
label_79b530:
    // 0x79b530: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x79b530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_79b534:
    // 0x79b534: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x79b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_79b538:
    // 0x79b538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79b53c:
    // 0x79b53c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x79b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_79b540:
    // 0x79b540: 0xc1e6dee  jal         func_79B7B8
label_79b544:
    if (ctx->pc == 0x79B544u) {
        ctx->pc = 0x79B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B540u;
        // 0x79b544: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B548u;
        goto label_79b548;
    }
    ctx->pc = 0x79B540u;
    SET_GPR_U32(ctx, 31, 0x79B548u);
    ctx->pc = 0x79B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B540u;
    // 0x79b544: 0x8e44c180  lw          $a0, -0x3E80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B7B8u, 0x79B540u, 0x79B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B548u;
label_79b548:
    // 0x79b548: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b54c:
    // 0x79b54c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b550:
    // 0x79b550: 0x24e59870  addiu       $a1, $a3, -0x6790
    ctx->pc = 0x79b550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940784));
label_79b554:
    // 0x79b554: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b558:
    // 0x79b558: 0xc0b0e48  jal         func_2C3920
label_79b55c:
    if (ctx->pc == 0x79B55Cu) {
        ctx->pc = 0x79B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B558u;
        // 0x79b55c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B560u;
        goto label_79b560;
    }
    ctx->pc = 0x79B558u;
    SET_GPR_U32(ctx, 31, 0x79B560u);
    ctx->pc = 0x79B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B558u;
    // 0x79b55c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79B558u, 0x79B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B560u;
label_79b560:
    // 0x79b560: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b564:
    // 0x79b564: 0xc0b5692  jal         func_2D5A48
label_79b568:
    if (ctx->pc == 0x79B568u) {
        ctx->pc = 0x79B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B564u;
        // 0x79b568: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B56Cu;
        goto label_79b56c;
    }
    ctx->pc = 0x79B564u;
    SET_GPR_U32(ctx, 31, 0x79B56Cu);
    ctx->pc = 0x79B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B564u;
    // 0x79b568: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B564u, 0x79B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B56Cu;
label_79b56c:
    // 0x79b56c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79b56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79b570:
    // 0x79b570: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79b570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79b574:
    // 0x79b574: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79b574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79b578:
    // 0x79b578: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79b578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79b57c:
    // 0x79b57c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79b57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79b580:
    // 0x79b580: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79b580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79b584:
    // 0x79b584: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79b584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79b588:
    // 0x79b588: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x79b588u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79b58c:
    // 0x79b58c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x79b58cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79b590:
    // 0x79b590: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_79b594:
    // 0x79b594: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x79b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79b598:
    // 0x79b598: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x79b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79b59c:
    // 0x79b59c: 0x3e00008  jr          $ra
label_79b5a0:
    if (ctx->pc == 0x79B5A0u) {
        ctx->pc = 0x79B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B59Cu;
        // 0x79b5a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5A4u;
        goto label_79b5a4;
    }
    ctx->pc = 0x79B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B59Cu;
        // 0x79b5a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B5A4u;
label_79b5a4:
    // 0x79b5a4: 0x0  nop
    ctx->pc = 0x79b5a4u;
    // NOP
    ctx->pc = 0x79b5a8u;
}
} // namespace gh_r409
