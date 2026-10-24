#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079AEC0
// Address: 0x79aec0 - 0x79b438
void func_0079AEC0_0x79aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AEC0_0x79aec0");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x79aec0u;

label_79aec0:
    // 0x79aec0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x79aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_79aec4:
    // 0x79aec4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79aec8:
    // 0x79aec8: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79aecc:
    // 0x79aecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aed0:
    // 0x79aed0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x79aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_79aed4:
    // 0x79aed4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x79aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_79aed8:
    // 0x79aed8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x79aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_79aedc:
    // 0x79aedc: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x79aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_79aee0:
    // 0x79aee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79aee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aee4:
    // 0x79aee4: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x79aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_79aee8:
    // 0x79aee8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x79aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_79aeec:
    // 0x79aeec: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x79aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_79aef0:
    // 0x79aef0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x79aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_79aef4:
    // 0x79aef4: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x79aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_79aef8:
    // 0x79aef8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x79aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_79aefc:
    // 0x79aefc: 0xc0b56a8  jal         func_2D5AA0
label_79af00:
    if (ctx->pc == 0x79AF00u) {
        ctx->pc = 0x79AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEFCu;
        // 0x79af00: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF04u;
        goto label_79af04;
    }
    ctx->pc = 0x79AEFCu;
    SET_GPR_U32(ctx, 31, 0x79AF04u);
    ctx->pc = 0x79AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEFCu;
    // 0x79af00: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AEFCu, 0x79AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF04u;
label_79af04:
    // 0x79af04: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79af08:
    // 0x79af08: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79af08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_79af0c:
    // 0x79af0c: 0x8044bf58  lb          $a0, -0x40A8($v0)
    ctx->pc = 0x79af0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950744)));
label_79af10:
    // 0x79af10: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x79af10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79af14:
    // 0x79af14: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x79af14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79af18:
    // 0x79af18: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79af1c:
    // 0x79af1c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x79af1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79af20:
    // 0x79af20: 0x2446bf58  addiu       $a2, $v0, -0x40A8
    ctx->pc = 0x79af20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950744));
label_79af24:
    // 0x79af24: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79af24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_79af28:
    // 0x79af28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79af2c:
    // 0x79af2c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_79af30:
    if (ctx->pc == 0x79AF30u) {
        ctx->pc = 0x79AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF2Cu;
        // 0x79af30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF34u;
        goto label_79af34;
    }
    ctx->pc = 0x79AF2Cu;
    {
        const bool branch_taken_0x79af2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF2Cu;
        // 0x79af30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af2c) {
            ctx->pc = 0x79AF60u;
            goto label_79af60;
        }
    }
    ctx->pc = 0x79AF34u;
label_79af34:
    // 0x79af34: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79af34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79af38:
    // 0x79af38: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79af38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79af3c:
    // 0x79af3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79af3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79af40:
    // 0x79af40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79af44:
    // 0x79af44: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79af48:
    // 0x79af48: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79af48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79af4c:
    // 0x79af4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79af50:
    if (ctx->pc == 0x79AF50u) {
        ctx->pc = 0x79AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF4Cu;
        // 0x79af50: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF54u;
        goto label_79af54;
    }
    ctx->pc = 0x79AF4Cu;
    {
        const bool branch_taken_0x79af4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF4Cu;
        // 0x79af50: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af4c) {
            ctx->pc = 0x79AF60u;
            goto label_79af60;
        }
    }
    ctx->pc = 0x79AF54u;
label_79af54:
    // 0x79af54: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79af54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79af58:
    // 0x79af58: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79af5c:
    if (ctx->pc == 0x79AF5Cu) {
        ctx->pc = 0x79AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF58u;
        // 0x79af5c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF60u;
        goto label_79af60;
    }
    ctx->pc = 0x79AF58u;
    {
        const bool branch_taken_0x79af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af58) {
            ctx->pc = 0x79AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF58u;
            // 0x79af5c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af38;
        }
    }
    ctx->pc = 0x79AF60u;
label_79af60:
    // 0x79af60: 0xc053f66  jal         func_14FD98
label_79af64:
    if (ctx->pc == 0x79AF64u) {
        ctx->pc = 0x79AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF60u;
        // 0x79af64: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF68u;
        goto label_79af68;
    }
    ctx->pc = 0x79AF60u;
    SET_GPR_U32(ctx, 31, 0x79AF68u);
    ctx->pc = 0x79AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF60u;
    // 0x79af64: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AF60u, 0x79AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF68u;
label_79af68:
    // 0x79af68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79af68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79af6c:
    // 0x79af6c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_79af70:
    if (ctx->pc == 0x79AF70u) {
        ctx->pc = 0x79AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF6Cu;
        // 0x79af70: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF74u;
        goto label_79af74;
    }
    ctx->pc = 0x79AF6Cu;
    {
        const bool branch_taken_0x79af6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF6Cu;
        // 0x79af70: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af6c) {
            ctx->pc = 0x79AF80u;
            goto label_79af80;
        }
    }
    ctx->pc = 0x79AF74u;
label_79af74:
    // 0x79af74: 0x8cc205b8  lw          $v0, 0x5B8($a2)
    ctx->pc = 0x79af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1464)));
label_79af78:
    // 0x79af78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79af78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79af7c:
    // 0x79af7c: 0xacc205b8  sw          $v0, 0x5B8($a2)
    ctx->pc = 0x79af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1464), GPR_U32(ctx, 2));
label_79af80:
    // 0x79af80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x79af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_79af84:
    // 0x79af84: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x79af84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_79af88:
    // 0x79af88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79af8c:
    // 0x79af8c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79af8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_79af90:
    // 0x79af90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79af94:
    // 0x79af94: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x79af94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_79af98:
    // 0x79af98: 0xc0a5704  jal         func_295C10
label_79af9c:
    if (ctx->pc == 0x79AF9Cu) {
        ctx->pc = 0x79AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF98u;
        // 0x79af9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFA0u;
        goto label_79afa0;
    }
    ctx->pc = 0x79AF98u;
    SET_GPR_U32(ctx, 31, 0x79AFA0u);
    ctx->pc = 0x79AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF98u;
    // 0x79af9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79AF98u, 0x79AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFA0u;
label_79afa0:
    // 0x79afa0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79afa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79afa4:
    // 0x79afa4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79afa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79afa8:
    // 0x79afa8: 0xc0a5704  jal         func_295C10
label_79afac:
    if (ctx->pc == 0x79AFACu) {
        ctx->pc = 0x79AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA8u;
        // 0x79afac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFB0u;
        goto label_79afb0;
    }
    ctx->pc = 0x79AFA8u;
    SET_GPR_U32(ctx, 31, 0x79AFB0u);
    ctx->pc = 0x79AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA8u;
    // 0x79afac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79AFA8u, 0x79AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFB0u;
label_79afb0:
    // 0x79afb0: 0x2610ae80  addiu       $s0, $s0, -0x5180
    ctx->pc = 0x79afb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946432));
label_79afb4:
    // 0x79afb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79afb8:
    // 0x79afb8: 0xc0a5704  jal         func_295C10
label_79afbc:
    if (ctx->pc == 0x79AFBCu) {
        ctx->pc = 0x79AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB8u;
        // 0x79afbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFC0u;
        goto label_79afc0;
    }
    ctx->pc = 0x79AFB8u;
    SET_GPR_U32(ctx, 31, 0x79AFC0u);
    ctx->pc = 0x79AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFB8u;
    // 0x79afbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79AFB8u, 0x79AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFC0u;
label_79afc0:
    // 0x79afc0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79afc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79afc4:
    // 0x79afc4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79afc8:
    // 0x79afc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79afc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79afcc:
    // 0x79afcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79afccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79afd0:
    // 0x79afd0: 0xc0b0e48  jal         func_2C3920
label_79afd4:
    if (ctx->pc == 0x79AFD4u) {
        ctx->pc = 0x79AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFD0u;
        // 0x79afd4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFD8u;
        goto label_79afd8;
    }
    ctx->pc = 0x79AFD0u;
    SET_GPR_U32(ctx, 31, 0x79AFD8u);
    ctx->pc = 0x79AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFD0u;
    // 0x79afd4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79AFD0u, 0x79AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFD8u;
label_79afd8:
    // 0x79afd8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79afdc:
    // 0x79afdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79afdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79afe0:
    // 0x79afe0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x79afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_79afe4:
    // 0x79afe4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x79afe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_79afe8:
    // 0x79afe8: 0xc0b0e48  jal         func_2C3920
label_79afec:
    if (ctx->pc == 0x79AFECu) {
        ctx->pc = 0x79AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFE8u;
        // 0x79afec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFF0u;
        goto label_79aff0;
    }
    ctx->pc = 0x79AFE8u;
    SET_GPR_U32(ctx, 31, 0x79AFF0u);
    ctx->pc = 0x79AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFE8u;
    // 0x79afec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79AFE8u, 0x79AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFF0u;
label_79aff0:
    // 0x79aff0: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79aff4:
    // 0x79aff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aff8:
    // 0x79aff8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x79aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_79affc:
    // 0x79affc: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x79affcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_79b000:
    // 0x79b000: 0xc0b0e48  jal         func_2C3920
label_79b004:
    if (ctx->pc == 0x79B004u) {
        ctx->pc = 0x79B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B000u;
        // 0x79b004: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B008u;
        goto label_79b008;
    }
    ctx->pc = 0x79B000u;
    SET_GPR_U32(ctx, 31, 0x79B008u);
    ctx->pc = 0x79B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B000u;
    // 0x79b004: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79B000u, 0x79B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B008u;
label_79b008:
    // 0x79b008: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79b008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b00c:
    // 0x79b00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b010:
    // 0x79b010: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x79b010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_79b014:
    // 0x79b014: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x79b014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79b018:
    // 0x79b018: 0xc0b0e48  jal         func_2C3920
label_79b01c:
    if (ctx->pc == 0x79B01Cu) {
        ctx->pc = 0x79B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B018u;
        // 0x79b01c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B020u;
        goto label_79b020;
    }
    ctx->pc = 0x79B018u;
    SET_GPR_U32(ctx, 31, 0x79B020u);
    ctx->pc = 0x79B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B018u;
    // 0x79b01c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79B018u, 0x79B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B020u;
label_79b020:
    // 0x79b020: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x79b020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_79b024:
    // 0x79b024: 0x1000005d  b           . + 4 + (0x5D << 2)
label_79b028:
    if (ctx->pc == 0x79B028u) {
        ctx->pc = 0x79B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B024u;
        // 0x79b028: 0x27b60090  addiu       $s6, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B02Cu;
        goto label_79b02c;
    }
    ctx->pc = 0x79B024u;
    {
        const bool branch_taken_0x79b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B024u;
        // 0x79b028: 0x27b60090  addiu       $s6, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b024) {
            ctx->pc = 0x79B19Cu;
            goto label_79b19c;
        }
    }
    ctx->pc = 0x79B02Cu;
label_79b02c:
    // 0x79b02c: 0x0  nop
    ctx->pc = 0x79b02cu;
    // NOP
label_79b030:
    // 0x79b030: 0xc0a56ae  jal         func_295AB8
label_79b034:
    if (ctx->pc == 0x79B034u) {
        ctx->pc = 0x79B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B030u;
        // 0x79b034: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B038u;
        goto label_79b038;
    }
    ctx->pc = 0x79B030u;
    SET_GPR_U32(ctx, 31, 0x79B038u);
    ctx->pc = 0x79B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B030u;
    // 0x79b034: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79B030u, 0x79B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B038u;
label_79b038:
    // 0x79b038: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79b03c:
    // 0x79b03c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b040:
    // 0x79b040: 0xc0b6dac  jal         func_2DB6B0
label_79b044:
    if (ctx->pc == 0x79B044u) {
        ctx->pc = 0x79B048u;
        goto label_79b048;
    }
    ctx->pc = 0x79B040u;
    SET_GPR_U32(ctx, 31, 0x79B048u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B040u, 0x79B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B048u;
label_79b048:
    // 0x79b048: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b04c:
    // 0x79b04c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79b04cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79b050:
    // 0x79b050: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79b054:
    // 0x79b054: 0xa0f809  jalr        $a1
label_79b058:
    if (ctx->pc == 0x79B058u) {
        ctx->pc = 0x79B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B054u;
        // 0x79b058: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B05Cu;
        goto label_79b05c;
    }
    ctx->pc = 0x79B054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79B05Cu);
        ctx->pc = 0x79B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B054u;
        // 0x79b058: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B054u, 0x79B05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B05Cu;
label_79b05c:
    // 0x79b05c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b05cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79b060:
    // 0x79b060: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b064:
    // 0x79b064: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x79b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79b068:
    // 0x79b068: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x79b068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_79b06c:
    // 0x79b06c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x79b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b070:
    // 0x79b070: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79b070u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79b074:
    // 0x79b074: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x79b074u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_79b078:
    // 0x79b078: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79b078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79b07c:
    // 0x79b07c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b080:
    // 0x79b080: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x79b080u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_79b084:
    // 0x79b084: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x79b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b088:
    // 0x79b088: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x79b088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_79b08c:
    // 0x79b08c: 0xc07df8a  jal         func_1F7E28
label_79b090:
    if (ctx->pc == 0x79B090u) {
        ctx->pc = 0x79B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B08Cu;
        // 0x79b090: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B094u;
        goto label_79b094;
    }
    ctx->pc = 0x79B08Cu;
    SET_GPR_U32(ctx, 31, 0x79B094u);
    ctx->pc = 0x79B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B08Cu;
    // 0x79b090: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79B08Cu, 0x79B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B094u;
label_79b094:
    // 0x79b094: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x79b094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_79b098:
    // 0x79b098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b09c:
    // 0x79b09c: 0x0  nop
    ctx->pc = 0x79b09cu;
    // NOP
label_79b0a0:
    // 0x79b0a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79b0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79b0a4:
    // 0x79b0a4: 0x0  nop
    ctx->pc = 0x79b0a4u;
    // NOP
label_79b0a8:
    // 0x79b0a8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_79b0ac:
    if (ctx->pc == 0x79B0ACu) {
        ctx->pc = 0x79B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A8u;
        // 0x79b0ac: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0B0u;
        goto label_79b0b0;
    }
    ctx->pc = 0x79B0A8u;
    {
        const bool branch_taken_0x79b0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A8u;
        // 0x79b0ac: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0a8) {
            ctx->pc = 0x79B12Cu;
            goto label_79b12c;
        }
    }
    ctx->pc = 0x79B0B0u;
label_79b0b0:
    // 0x79b0b0: 0xc0b6dac  jal         func_2DB6B0
label_79b0b4:
    if (ctx->pc == 0x79B0B4u) {
        ctx->pc = 0x79B0B8u;
        goto label_79b0b8;
    }
    ctx->pc = 0x79B0B0u;
    SET_GPR_U32(ctx, 31, 0x79B0B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B0B0u, 0x79B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0B8u;
label_79b0b8:
    // 0x79b0b8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79b0bc:
    // 0x79b0bc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x79b0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_79b0c0:
    // 0x79b0c0: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x79b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_79b0c4:
    // 0x79b0c4: 0xa0f809  jalr        $a1
label_79b0c8:
    if (ctx->pc == 0x79B0C8u) {
        ctx->pc = 0x79B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C4u;
        // 0x79b0c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0CCu;
        goto label_79b0cc;
    }
    ctx->pc = 0x79B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79B0CCu);
        ctx->pc = 0x79B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C4u;
        // 0x79b0c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0C4u, 0x79B0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B0CCu;
label_79b0cc:
    // 0x79b0cc: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x79b0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79b0d0:
    // 0x79b0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79b0d4:
    // 0x79b0d4: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x79b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
label_79b0d8:
    // 0x79b0d8: 0x342135dd  ori         $at, $at, 0x35DD
    ctx->pc = 0x79b0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13789);
label_79b0dc:
    // 0x79b0dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_79b0e0:
    // 0x79b0e0: 0xc0b68b4  jal         func_2DA2D0
label_79b0e4:
    if (ctx->pc == 0x79B0E4u) {
        ctx->pc = 0x79B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E0u;
        // 0x79b0e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0E8u;
        goto label_79b0e8;
    }
    ctx->pc = 0x79B0E0u;
    SET_GPR_U32(ctx, 31, 0x79B0E8u);
    ctx->pc = 0x79B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0E0u;
    // 0x79b0e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x79B0E0u, 0x79B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0E8u;
label_79b0e8:
    // 0x79b0e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_79b0ec:
    if (ctx->pc == 0x79B0ECu) {
        ctx->pc = 0x79B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E8u;
        // 0x79b0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0F0u;
        goto label_79b0f0;
    }
    ctx->pc = 0x79B0E8u;
    {
        const bool branch_taken_0x79b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E8u;
        // 0x79b0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0e8) {
            ctx->pc = 0x79B12Cu;
            goto label_79b12c;
        }
    }
    ctx->pc = 0x79B0F0u;
label_79b0f0:
    // 0x79b0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79b0f4:
    // 0x79b0f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79b0f8:
    // 0x79b0f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b0fc:
    // 0x79b0fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79b100:
    // 0x79b100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b104:
    // 0x79b104: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79b104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79b108:
    // 0x79b108: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79b10c:
    // 0x79b10c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79b110:
    // 0x79b110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b114:
    // 0x79b114: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x79b114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
label_79b118:
    // 0x79b118: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b118u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b11c:
    // 0x79b11c: 0xc04c784  jal         func_131E10
label_79b120:
    if (ctx->pc == 0x79B120u) {
        ctx->pc = 0x79B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B11Cu;
        // 0x79b120: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B124u;
        goto label_79b124;
    }
    ctx->pc = 0x79B11Cu;
    SET_GPR_U32(ctx, 31, 0x79B124u);
    ctx->pc = 0x79B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B11Cu;
    // 0x79b120: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x79B11Cu, 0x79B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B124u;
label_79b124:
    // 0x79b124: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_79b128:
    if (ctx->pc == 0x79B128u) {
        ctx->pc = 0x79B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B124u;
        // 0x79b128: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B12Cu;
        goto label_79b12c;
    }
    ctx->pc = 0x79B124u;
    {
        const bool branch_taken_0x79b124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B124u;
        // 0x79b128: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b124) {
            ctx->pc = 0x79B1B8u;
            goto label_79b1b8;
        }
    }
    ctx->pc = 0x79B12Cu;
label_79b12c:
    // 0x79b12c: 0xc07df8a  jal         func_1F7E28
label_79b130:
    if (ctx->pc == 0x79B130u) {
        ctx->pc = 0x79B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B12Cu;
        // 0x79b130: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B134u;
        goto label_79b134;
    }
    ctx->pc = 0x79B12Cu;
    SET_GPR_U32(ctx, 31, 0x79B134u);
    ctx->pc = 0x79B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B12Cu;
    // 0x79b130: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79B12Cu, 0x79B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B134u;
label_79b134:
    // 0x79b134: 0x3c014344  lui         $at, 0x4344
    ctx->pc = 0x79b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17220 << 16));
label_79b138:
    // 0x79b138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b13c:
    // 0x79b13c: 0x0  nop
    ctx->pc = 0x79b13cu;
    // NOP
label_79b140:
    // 0x79b140: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79b140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79b144:
    // 0x79b144: 0x0  nop
    ctx->pc = 0x79b144u;
    // NOP
label_79b148:
    // 0x79b148: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_79b14c:
    if (ctx->pc == 0x79B14Cu) {
        ctx->pc = 0x79B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B148u;
        // 0x79b14c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B150u;
        goto label_79b150;
    }
    ctx->pc = 0x79B148u;
    {
        const bool branch_taken_0x79b148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B148u;
        // 0x79b14c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b148) {
            ctx->pc = 0x79B18Cu;
            goto label_79b18c;
        }
    }
    ctx->pc = 0x79B150u;
label_79b150:
    // 0x79b150: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79b150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79b154:
    // 0x79b154: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79b154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79b158:
    // 0x79b158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b15c:
    // 0x79b15c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79b160:
    // 0x79b160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b164:
    // 0x79b164: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79b164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79b168:
    // 0x79b168: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x79b168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79b16c:
    // 0x79b16c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79b170:
    // 0x79b170: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79b174:
    // 0x79b174: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x79b174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
label_79b178:
    // 0x79b178: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b17c:
    // 0x79b17c: 0xc04c784  jal         func_131E10
label_79b180:
    if (ctx->pc == 0x79B180u) {
        ctx->pc = 0x79B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B17Cu;
        // 0x79b180: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B184u;
        goto label_79b184;
    }
    ctx->pc = 0x79B17Cu;
    SET_GPR_U32(ctx, 31, 0x79B184u);
    ctx->pc = 0x79B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B17Cu;
    // 0x79b180: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x79B17Cu, 0x79B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B184u;
label_79b184:
    // 0x79b184: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_79b188:
    if (ctx->pc == 0x79B188u) {
        ctx->pc = 0x79B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B184u;
        // 0x79b188: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B18Cu;
        goto label_79b18c;
    }
    ctx->pc = 0x79B184u;
    {
        const bool branch_taken_0x79b184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B184u;
        // 0x79b188: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b184) {
            ctx->pc = 0x79B1B8u;
            goto label_79b1b8;
        }
    }
    ctx->pc = 0x79B18Cu;
label_79b18c:
    // 0x79b18c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b190:
    // 0x79b190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b194:
    // 0x79b194: 0xc0b56a8  jal         func_2D5AA0
label_79b198:
    if (ctx->pc == 0x79B198u) {
        ctx->pc = 0x79B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B194u;
        // 0x79b198: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B19Cu;
        goto label_79b19c;
    }
    ctx->pc = 0x79B194u;
    SET_GPR_U32(ctx, 31, 0x79B19Cu);
    ctx->pc = 0x79B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B194u;
    // 0x79b198: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B194u, 0x79B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B19Cu;
label_79b19c:
    // 0x79b19c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79b1a0:
    // 0x79b1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b1a4:
    // 0x79b1a4: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79b1a8:
    // 0x79b1a8: 0xc0b0aa6  jal         func_2C2A98
label_79b1ac:
    if (ctx->pc == 0x79B1ACu) {
        ctx->pc = 0x79B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1A8u;
        // 0x79b1ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1B0u;
        goto label_79b1b0;
    }
    ctx->pc = 0x79B1A8u;
    SET_GPR_U32(ctx, 31, 0x79B1B0u);
    ctx->pc = 0x79B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A8u;
    // 0x79b1ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B1A8u, 0x79B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B0u;
label_79b1b0:
    // 0x79b1b0: 0x1455ff9f  bne         $v0, $s5, . + 4 + (-0x61 << 2)
label_79b1b4:
    if (ctx->pc == 0x79B1B4u) {
        ctx->pc = 0x79B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B0u;
        // 0x79b1b4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1B8u;
        goto label_79b1b8;
    }
    ctx->pc = 0x79B1B0u;
    {
        const bool branch_taken_0x79b1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x79B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B0u;
        // 0x79b1b4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1b0) {
            ctx->pc = 0x79B030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b030;
        }
    }
    ctx->pc = 0x79B1B8u;
label_79b1b8:
    // 0x79b1b8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79b1bc:
    // 0x79b1bc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x79b1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
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
    // 0x79b1c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_79b1cc:
    if (ctx->pc == 0x79B1CCu) {
        ctx->pc = 0x79B1D0u;
        goto label_79b1d0;
    }
    ctx->pc = 0x79B1C8u;
    {
        const bool branch_taken_0x79b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b1c8) {
            ctx->pc = 0x79B1E0u;
            goto label_79b1e0;
        }
    }
    ctx->pc = 0x79B1D0u;
label_79b1d0:
    // 0x79b1d0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b1d4:
    // 0x79b1d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b1d8:
    // 0x79b1d8: 0xc0b56a8  jal         func_2D5AA0
label_79b1dc:
    if (ctx->pc == 0x79B1DCu) {
        ctx->pc = 0x79B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D8u;
        // 0x79b1dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1E0u;
        goto label_79b1e0;
    }
    ctx->pc = 0x79B1D8u;
    SET_GPR_U32(ctx, 31, 0x79B1E0u);
    ctx->pc = 0x79B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1D8u;
    // 0x79b1dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B1D8u, 0x79B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1E0u;
label_79b1e0:
    // 0x79b1e0: 0xc0b0f90  jal         func_2C3E40
label_79b1e4:
    if (ctx->pc == 0x79B1E4u) {
        ctx->pc = 0x79B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E0u;
        // 0x79b1e4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1E8u;
        goto label_79b1e8;
    }
    ctx->pc = 0x79B1E0u;
    SET_GPR_U32(ctx, 31, 0x79B1E8u);
    ctx->pc = 0x79B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1E0u;
    // 0x79b1e4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B1E0u, 0x79B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1E8u;
label_79b1e8:
    // 0x79b1e8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79b1ec:
    if (ctx->pc == 0x79B1ECu) {
        ctx->pc = 0x79B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E8u;
        // 0x79b1ec: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1F0u;
        goto label_79b1f0;
    }
    ctx->pc = 0x79B1E8u;
    {
        const bool branch_taken_0x79b1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E8u;
        // 0x79b1ec: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e8) {
            ctx->pc = 0x79B1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1d0;
        }
    }
    ctx->pc = 0x79B1F0u;
label_79b1f0:
    // 0x79b1f0: 0x83c2bf58  lb          $v0, -0x40A8($fp)
    ctx->pc = 0x79b1f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294950744)));
label_79b1f4:
    // 0x79b1f4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79b1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_79b1f8:
    // 0x79b1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b1fc:
    // 0x79b1fc: 0x27c3bf58  addiu       $v1, $fp, -0x40A8
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950744));
label_79b200:
    // 0x79b200: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79b204:
    if (ctx->pc == 0x79B204u) {
        ctx->pc = 0x79B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B200u;
        // 0x79b204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B208u;
        goto label_79b208;
    }
    ctx->pc = 0x79B200u;
    {
        const bool branch_taken_0x79b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B200u;
        // 0x79b204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b200) {
            ctx->pc = 0x79B238u;
            goto label_79b238;
        }
    }
    ctx->pc = 0x79B208u;
label_79b208:
    // 0x79b208: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b20c:
    // 0x79b20c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b20cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b210:
    // 0x79b210: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79b214:
    // 0x79b214: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79b218:
    // 0x79b218: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79b21c:
    // 0x79b21c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79b220:
    // 0x79b220: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b220u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79b224:
    // 0x79b224: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79b228:
    if (ctx->pc == 0x79B228u) {
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B22Cu;
        goto label_79b22c;
    }
    ctx->pc = 0x79B224u;
    {
        const bool branch_taken_0x79b224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b224) {
            ctx->pc = 0x79B238u;
            goto label_79b238;
        }
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b230:
    // 0x79b230: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79b234:
    if (ctx->pc == 0x79B234u) {
        ctx->pc = 0x79B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B230u;
        // 0x79b234: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B238u;
        goto label_79b238;
    }
    ctx->pc = 0x79B230u;
    {
        const bool branch_taken_0x79b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b230) {
            ctx->pc = 0x79B234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B230u;
            // 0x79b234: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b210;
        }
    }
    ctx->pc = 0x79B238u;
label_79b238:
    // 0x79b238: 0xc053f66  jal         func_14FD98
label_79b23c:
    if (ctx->pc == 0x79B23Cu) {
        ctx->pc = 0x79B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B238u;
        // 0x79b23c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B240u;
        goto label_79b240;
    }
    ctx->pc = 0x79B238u;
    SET_GPR_U32(ctx, 31, 0x79B240u);
    ctx->pc = 0x79B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B238u;
    // 0x79b23c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B238u, 0x79B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B240u;
label_79b240:
    // 0x79b240: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b244:
    // 0x79b244: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_79b248:
    if (ctx->pc == 0x79B248u) {
        ctx->pc = 0x79B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B244u;
        // 0x79b248: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B24Cu;
        goto label_79b24c;
    }
    ctx->pc = 0x79B244u;
    {
        const bool branch_taken_0x79b244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B244u;
        // 0x79b248: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b244) {
            ctx->pc = 0x79B25Cu;
            goto label_79b25c;
        }
    }
    ctx->pc = 0x79B24Cu;
label_79b24c:
    // 0x79b24c: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x79b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
label_79b250:
    // 0x79b250: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79b254:
    // 0x79b254: 0xacc20250  sw          $v0, 0x250($a2)
    ctx->pc = 0x79b254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
label_79b258:
    // 0x79b258: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79b25c:
    // 0x79b25c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x79b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_79b260:
    // 0x79b260: 0x24427a2c  addiu       $v0, $v0, 0x7A2C
    ctx->pc = 0x79b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
label_79b264:
    // 0x79b264: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79b268:
    // 0x79b268: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79b26c:
    // 0x79b26c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_79b270:
    if (ctx->pc == 0x79B270u) {
        ctx->pc = 0x79B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B26Cu;
        // 0x79b270: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B274u;
        goto label_79b274;
    }
    ctx->pc = 0x79B26Cu;
    {
        const bool branch_taken_0x79b26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B26Cu;
        // 0x79b270: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b26c) {
            ctx->pc = 0x79B288u;
            goto label_79b288;
        }
    }
    ctx->pc = 0x79B274u;
label_79b274:
    // 0x79b274: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79b278:
    // 0x79b278: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x79b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_79b27c:
    // 0x79b27c: 0xc0a58dc  jal         func_296370
label_79b280:
    if (ctx->pc == 0x79B280u) {
        ctx->pc = 0x79B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B27Cu;
        // 0x79b280: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B284u;
        goto label_79b284;
    }
    ctx->pc = 0x79B27Cu;
    SET_GPR_U32(ctx, 31, 0x79B284u);
    ctx->pc = 0x79B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B27Cu;
    // 0x79b280: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79B27Cu, 0x79B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B284u;
label_79b284:
    // 0x79b284: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79b284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_79b288:
    // 0x79b288: 0x83c2bf58  lb          $v0, -0x40A8($fp)
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294950744)));
label_79b28c:
    // 0x79b28c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79b28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_79b290:
    // 0x79b290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b294:
    // 0x79b294: 0x27c3bf58  addiu       $v1, $fp, -0x40A8
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950744));
label_79b298:
    // 0x79b298: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79b29c:
    if (ctx->pc == 0x79B29Cu) {
        ctx->pc = 0x79B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B298u;
        // 0x79b29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2A0u;
        goto label_79b2a0;
    }
    ctx->pc = 0x79B298u;
    {
        const bool branch_taken_0x79b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B298u;
        // 0x79b29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b298) {
            ctx->pc = 0x79B2D0u;
            goto label_79b2d0;
        }
    }
    ctx->pc = 0x79B2A0u;
label_79b2a0:
    // 0x79b2a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b2a4:
    // 0x79b2a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b2a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b2a8:
    // 0x79b2a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79b2ac:
    // 0x79b2ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79b2b0:
    // 0x79b2b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79b2b4:
    // 0x79b2b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79b2b8:
    // 0x79b2b8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b2b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79b2bc:
    // 0x79b2bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79b2c0:
    if (ctx->pc == 0x79B2C0u) {
        ctx->pc = 0x79B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2BCu;
        // 0x79b2c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2C4u;
        goto label_79b2c4;
    }
    ctx->pc = 0x79B2BCu;
    {
        const bool branch_taken_0x79b2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2BCu;
        // 0x79b2c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2bc) {
            ctx->pc = 0x79B2D0u;
            goto label_79b2d0;
        }
    }
    ctx->pc = 0x79B2C4u;
label_79b2c4:
    // 0x79b2c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b2c8:
    // 0x79b2c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79b2cc:
    if (ctx->pc == 0x79B2CCu) {
        ctx->pc = 0x79B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2C8u;
        // 0x79b2cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2D0u;
        goto label_79b2d0;
    }
    ctx->pc = 0x79B2C8u;
    {
        const bool branch_taken_0x79b2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b2c8) {
            ctx->pc = 0x79B2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2C8u;
            // 0x79b2cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B2D0u;
label_79b2d0:
    // 0x79b2d0: 0xc053f66  jal         func_14FD98
label_79b2d4:
    if (ctx->pc == 0x79B2D4u) {
        ctx->pc = 0x79B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D0u;
        // 0x79b2d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2D8u;
        goto label_79b2d8;
    }
    ctx->pc = 0x79B2D0u;
    SET_GPR_U32(ctx, 31, 0x79B2D8u);
    ctx->pc = 0x79B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2D0u;
    // 0x79b2d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B2D0u, 0x79B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2D8u;
label_79b2d8:
    // 0x79b2d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b2dc:
    // 0x79b2dc: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
label_79b2e0:
    if (ctx->pc == 0x79B2E0u) {
        ctx->pc = 0x79B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2DCu;
        // 0x79b2e0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B2E4u;
        goto label_79b2e4;
    }
    ctx->pc = 0x79B2DCu;
    {
        const bool branch_taken_0x79b2dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b2dc) {
            ctx->pc = 0x79B2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2DCu;
            // 0x79b2e0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B30Cu;
            goto label_79b30c;
        }
    }
    ctx->pc = 0x79B2E4u;
label_79b2e4:
    // 0x79b2e4: 0x8cc40250  lw          $a0, 0x250($a2)
    ctx->pc = 0x79b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
label_79b2e8:
    // 0x79b2e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_79b2ec:
    // 0x79b2ec: 0x8cc305b8  lw          $v1, 0x5B8($a2)
    ctx->pc = 0x79b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1464)));
label_79b2f0:
    // 0x79b2f0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_79b2f4:
    // 0x79b2f4: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x79b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_79b2f8:
    // 0x79b2f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x79b2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_79b2fc:
    // 0x79b2fc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x79b2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_79b300:
    // 0x79b300: 0xacc40250  sw          $a0, 0x250($a2)
    ctx->pc = 0x79b300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 4));
label_79b304:
    // 0x79b304: 0xacc305b8  sw          $v1, 0x5B8($a2)
    ctx->pc = 0x79b304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1464), GPR_U32(ctx, 3));
label_79b308:
    // 0x79b308: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79b30c:
    // 0x79b30c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79b310:
    // 0x79b310: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79b310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
label_79b314:
    // 0x79b314: 0xc0a5516  jal         func_295458
label_79b318:
    if (ctx->pc == 0x79B318u) {
        ctx->pc = 0x79B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B314u;
        // 0x79b318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B31Cu;
        goto label_79b31c;
    }
    ctx->pc = 0x79B314u;
    SET_GPR_U32(ctx, 31, 0x79B31Cu);
    ctx->pc = 0x79B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B314u;
    // 0x79b318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x79B314u, 0x79B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B31Cu;
label_79b31c:
    // 0x79b31c: 0x24100058  addiu       $s0, $zero, 0x58
    ctx->pc = 0x79b31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_79b320:
    // 0x79b320: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b324:
    // 0x79b324: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79b328:
    // 0x79b328: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79b328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b32c:
    // 0x79b32c: 0xc0b0e24  jal         func_2C3890
label_79b330:
    if (ctx->pc == 0x79B330u) {
        ctx->pc = 0x79B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B32Cu;
        // 0x79b330: 0x24a5b438  addiu       $a1, $a1, -0x4BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B334u;
        goto label_79b334;
    }
    ctx->pc = 0x79B32Cu;
    SET_GPR_U32(ctx, 31, 0x79B334u);
    ctx->pc = 0x79B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B32Cu;
    // 0x79b330: 0x24a5b438  addiu       $a1, $a1, -0x4BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79B32Cu, 0x79B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B334u;
label_79b334:
    // 0x79b334: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x79b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_79b338:
    // 0x79b338: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x79b338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_79b33c:
    // 0x79b33c: 0x8c658658  lw          $a1, -0x79A8($v1)
    ctx->pc = 0x79b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_79b340:
    // 0x79b340: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_79b344:
    // 0x79b344: 0x503018  mult        $a2, $v0, $s0
    ctx->pc = 0x79b344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_79b348:
    // 0x79b348: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79b34c:
    // 0x79b34c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79b350:
    // 0x79b350: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x79b350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_79b354:
    // 0x79b354: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b358:
    // 0x79b358: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x79b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_79b35c:
    // 0x79b35c: 0xc0b567c  jal         func_2D59F0
label_79b360:
    if (ctx->pc == 0x79B360u) {
        ctx->pc = 0x79B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B35Cu;
        // 0x79b360: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B364u;
        goto label_79b364;
    }
    ctx->pc = 0x79B35Cu;
    SET_GPR_U32(ctx, 31, 0x79B364u);
    ctx->pc = 0x79B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B35Cu;
    // 0x79b360: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x79B35Cu, 0x79B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B364u;
label_79b364:
    // 0x79b364: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x79b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_79b368:
    // 0x79b368: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x79b368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_79b36c:
    // 0x79b36c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b370:
    // 0x79b370: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x79b370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_79b374:
    // 0x79b374: 0xc0b567c  jal         func_2D59F0
label_79b378:
    if (ctx->pc == 0x79B378u) {
        ctx->pc = 0x79B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B374u;
        // 0x79b378: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B37Cu;
        goto label_79b37c;
    }
    ctx->pc = 0x79B374u;
    SET_GPR_U32(ctx, 31, 0x79B37Cu);
    ctx->pc = 0x79B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B374u;
    // 0x79b378: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x79B374u, 0x79B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B37Cu;
label_79b37c:
    // 0x79b37c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x79b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_79b380:
    // 0x79b380: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x79b380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_79b384:
    // 0x79b384: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b388:
    // 0x79b388: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_79b38c:
    // 0x79b38c: 0xc0b567c  jal         func_2D59F0
label_79b390:
    if (ctx->pc == 0x79B390u) {
        ctx->pc = 0x79B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B38Cu;
        // 0x79b390: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B394u;
        goto label_79b394;
    }
    ctx->pc = 0x79B38Cu;
    SET_GPR_U32(ctx, 31, 0x79B394u);
    ctx->pc = 0x79B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B38Cu;
    // 0x79b390: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x79B38Cu, 0x79B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B394u;
label_79b394:
    // 0x79b394: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x79b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_79b398:
    // 0x79b398: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b39c:
    // 0x79b39c: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x79b39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_79b3a0:
    // 0x79b3a0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x79b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_79b3a4:
    // 0x79b3a4: 0xc0b567c  jal         func_2D59F0
label_79b3a8:
    if (ctx->pc == 0x79B3A8u) {
        ctx->pc = 0x79B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3A4u;
        // 0x79b3a8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3ACu;
        goto label_79b3ac;
    }
    ctx->pc = 0x79B3A4u;
    SET_GPR_U32(ctx, 31, 0x79B3ACu);
    ctx->pc = 0x79B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3A4u;
    // 0x79b3a8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x79B3A4u, 0x79B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3ACu;
label_79b3ac:
    // 0x79b3ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79b3b0:
    // 0x79b3b0: 0xc0a5704  jal         func_295C10
label_79b3b4:
    if (ctx->pc == 0x79B3B4u) {
        ctx->pc = 0x79B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B0u;
        // 0x79b3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3B8u;
        goto label_79b3b8;
    }
    ctx->pc = 0x79B3B0u;
    SET_GPR_U32(ctx, 31, 0x79B3B8u);
    ctx->pc = 0x79B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3B0u;
    // 0x79b3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79B3B0u, 0x79B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3B8u;
label_79b3b8:
    // 0x79b3b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b3bc:
    // 0x79b3bc: 0xc0a5704  jal         func_295C10
label_79b3c0:
    if (ctx->pc == 0x79B3C0u) {
        ctx->pc = 0x79B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3BCu;
        // 0x79b3c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3C4u;
        goto label_79b3c4;
    }
    ctx->pc = 0x79B3BCu;
    SET_GPR_U32(ctx, 31, 0x79B3C4u);
    ctx->pc = 0x79B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3BCu;
    // 0x79b3c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79B3BCu, 0x79B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3C4u;
label_79b3c4:
    // 0x79b3c4: 0xc0a584c  jal         func_296130
label_79b3c8:
    if (ctx->pc == 0x79B3C8u) {
        ctx->pc = 0x79B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3C4u;
        // 0x79b3c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3CCu;
        goto label_79b3cc;
    }
    ctx->pc = 0x79B3C4u;
    SET_GPR_U32(ctx, 31, 0x79B3CCu);
    ctx->pc = 0x79B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3C4u;
    // 0x79b3c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296130u, 0x79B3C4u, 0x79B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3CCu;
label_79b3cc:
    // 0x79b3cc: 0xc0a584c  jal         func_296130
label_79b3d0:
    if (ctx->pc == 0x79B3D0u) {
        ctx->pc = 0x79B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3CCu;
        // 0x79b3d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3D4u;
        goto label_79b3d4;
    }
    ctx->pc = 0x79B3CCu;
    SET_GPR_U32(ctx, 31, 0x79B3D4u);
    ctx->pc = 0x79B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3CCu;
    // 0x79b3d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296130u, 0x79B3CCu, 0x79B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3D4u;
label_79b3d4:
    // 0x79b3d4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b3d8:
    // 0x79b3d8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79b3dc:
    // 0x79b3dc: 0x24a5a548  addiu       $a1, $a1, -0x5AB8
    ctx->pc = 0x79b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944072));
label_79b3e0:
    // 0x79b3e0: 0xc0b0e24  jal         func_2C3890
label_79b3e4:
    if (ctx->pc == 0x79B3E4u) {
        ctx->pc = 0x79B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3E0u;
        // 0x79b3e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3E8u;
        goto label_79b3e8;
    }
    ctx->pc = 0x79B3E0u;
    SET_GPR_U32(ctx, 31, 0x79B3E8u);
    ctx->pc = 0x79B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3E0u;
    // 0x79b3e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79B3E0u, 0x79B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3E8u;
label_79b3e8:
    // 0x79b3e8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b3ec:
    // 0x79b3ec: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79b3f0:
    // 0x79b3f0: 0x24a5a078  addiu       $a1, $a1, -0x5F88
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942840));
label_79b3f4:
    // 0x79b3f4: 0xc0b0e24  jal         func_2C3890
label_79b3f8:
    if (ctx->pc == 0x79B3F8u) {
        ctx->pc = 0x79B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3F4u;
        // 0x79b3f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3FCu;
        goto label_79b3fc;
    }
    ctx->pc = 0x79B3F4u;
    SET_GPR_U32(ctx, 31, 0x79B3FCu);
    ctx->pc = 0x79B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3F4u;
    // 0x79b3f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79B3F4u, 0x79B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3FCu;
label_79b3fc:
    // 0x79b3fc: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b400:
    // 0x79b400: 0xc0b5692  jal         func_2D5A48
label_79b404:
    if (ctx->pc == 0x79B404u) {
        ctx->pc = 0x79B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B400u;
        // 0x79b404: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B408u;
        goto label_79b408;
    }
    ctx->pc = 0x79B400u;
    SET_GPR_U32(ctx, 31, 0x79B408u);
    ctx->pc = 0x79B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B400u;
    // 0x79b404: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B400u, 0x79B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B408u;
label_79b408:
    // 0x79b408: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x79b408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_79b40c:
    // 0x79b40c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x79b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_79b410:
    // 0x79b410: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x79b410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79b414:
    // 0x79b414: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x79b414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79b418:
    // 0x79b418: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x79b418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79b41c:
    // 0x79b41c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x79b41cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79b420:
    // 0x79b420: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x79b420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79b424:
    // 0x79b424: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x79b424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79b428:
    // 0x79b428: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x79b428u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79b42c:
    // 0x79b42c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x79b42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_79b430:
    // 0x79b430: 0x3e00008  jr          $ra
label_79b434:
    if (ctx->pc == 0x79B434u) {
        ctx->pc = 0x79B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B430u;
        // 0x79b434: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B438u;
        goto label_fallthrough_0x79b430;
    }
    ctx->pc = 0x79B430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B430u;
        // 0x79b434: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b430:
    ctx->pc = 0x79B438u;
}
} // namespace gh_r102
