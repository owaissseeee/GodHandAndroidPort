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

// Function: func_0036B0F0
// Address: 0x36b0f0 - 0x36b6d8
void func_0036B0F0_0x36b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036B0F0_0x36b0f0");
#endif

    switch (ctx->pc) {
        case 0x36b0f0u: goto label_36b0f0;
        case 0x36b0f4u: goto label_36b0f4;
        case 0x36b0f8u: goto label_36b0f8;
        case 0x36b0fcu: goto label_36b0fc;
        case 0x36b100u: goto label_36b100;
        case 0x36b104u: goto label_36b104;
        case 0x36b108u: goto label_36b108;
        case 0x36b10cu: goto label_36b10c;
        case 0x36b110u: goto label_36b110;
        case 0x36b114u: goto label_36b114;
        case 0x36b118u: goto label_36b118;
        case 0x36b11cu: goto label_36b11c;
        case 0x36b120u: goto label_36b120;
        case 0x36b124u: goto label_36b124;
        case 0x36b128u: goto label_36b128;
        case 0x36b12cu: goto label_36b12c;
        case 0x36b130u: goto label_36b130;
        case 0x36b134u: goto label_36b134;
        case 0x36b138u: goto label_36b138;
        case 0x36b13cu: goto label_36b13c;
        case 0x36b140u: goto label_36b140;
        case 0x36b144u: goto label_36b144;
        case 0x36b148u: goto label_36b148;
        case 0x36b14cu: goto label_36b14c;
        case 0x36b150u: goto label_36b150;
        case 0x36b154u: goto label_36b154;
        case 0x36b158u: goto label_36b158;
        case 0x36b15cu: goto label_36b15c;
        case 0x36b160u: goto label_36b160;
        case 0x36b164u: goto label_36b164;
        case 0x36b168u: goto label_36b168;
        case 0x36b16cu: goto label_36b16c;
        case 0x36b170u: goto label_36b170;
        case 0x36b174u: goto label_36b174;
        case 0x36b178u: goto label_36b178;
        case 0x36b17cu: goto label_36b17c;
        case 0x36b180u: goto label_36b180;
        case 0x36b184u: goto label_36b184;
        case 0x36b188u: goto label_36b188;
        case 0x36b18cu: goto label_36b18c;
        case 0x36b190u: goto label_36b190;
        case 0x36b194u: goto label_36b194;
        case 0x36b198u: goto label_36b198;
        case 0x36b19cu: goto label_36b19c;
        case 0x36b1a0u: goto label_36b1a0;
        case 0x36b1a4u: goto label_36b1a4;
        case 0x36b1a8u: goto label_36b1a8;
        case 0x36b1acu: goto label_36b1ac;
        case 0x36b1b0u: goto label_36b1b0;
        case 0x36b1b4u: goto label_36b1b4;
        case 0x36b1b8u: goto label_36b1b8;
        case 0x36b1bcu: goto label_36b1bc;
        case 0x36b1c0u: goto label_36b1c0;
        case 0x36b1c4u: goto label_36b1c4;
        case 0x36b1c8u: goto label_36b1c8;
        case 0x36b1ccu: goto label_36b1cc;
        case 0x36b1d0u: goto label_36b1d0;
        case 0x36b1d4u: goto label_36b1d4;
        case 0x36b1d8u: goto label_36b1d8;
        case 0x36b1dcu: goto label_36b1dc;
        case 0x36b1e0u: goto label_36b1e0;
        case 0x36b1e4u: goto label_36b1e4;
        case 0x36b1e8u: goto label_36b1e8;
        case 0x36b1ecu: goto label_36b1ec;
        case 0x36b1f0u: goto label_36b1f0;
        case 0x36b1f4u: goto label_36b1f4;
        case 0x36b1f8u: goto label_36b1f8;
        case 0x36b1fcu: goto label_36b1fc;
        case 0x36b200u: goto label_36b200;
        case 0x36b204u: goto label_36b204;
        case 0x36b208u: goto label_36b208;
        case 0x36b20cu: goto label_36b20c;
        case 0x36b210u: goto label_36b210;
        case 0x36b214u: goto label_36b214;
        case 0x36b218u: goto label_36b218;
        case 0x36b21cu: goto label_36b21c;
        case 0x36b220u: goto label_36b220;
        case 0x36b224u: goto label_36b224;
        case 0x36b228u: goto label_36b228;
        case 0x36b22cu: goto label_36b22c;
        case 0x36b230u: goto label_36b230;
        case 0x36b234u: goto label_36b234;
        case 0x36b238u: goto label_36b238;
        case 0x36b23cu: goto label_36b23c;
        case 0x36b240u: goto label_36b240;
        case 0x36b244u: goto label_36b244;
        case 0x36b248u: goto label_36b248;
        case 0x36b24cu: goto label_36b24c;
        case 0x36b250u: goto label_36b250;
        case 0x36b254u: goto label_36b254;
        case 0x36b258u: goto label_36b258;
        case 0x36b25cu: goto label_36b25c;
        case 0x36b260u: goto label_36b260;
        case 0x36b264u: goto label_36b264;
        case 0x36b268u: goto label_36b268;
        case 0x36b26cu: goto label_36b26c;
        case 0x36b270u: goto label_36b270;
        case 0x36b274u: goto label_36b274;
        case 0x36b278u: goto label_36b278;
        case 0x36b27cu: goto label_36b27c;
        case 0x36b280u: goto label_36b280;
        case 0x36b284u: goto label_36b284;
        case 0x36b288u: goto label_36b288;
        case 0x36b28cu: goto label_36b28c;
        case 0x36b290u: goto label_36b290;
        case 0x36b294u: goto label_36b294;
        case 0x36b298u: goto label_36b298;
        case 0x36b29cu: goto label_36b29c;
        case 0x36b2a0u: goto label_36b2a0;
        case 0x36b2a4u: goto label_36b2a4;
        case 0x36b2a8u: goto label_36b2a8;
        case 0x36b2acu: goto label_36b2ac;
        case 0x36b2b0u: goto label_36b2b0;
        case 0x36b2b4u: goto label_36b2b4;
        case 0x36b2b8u: goto label_36b2b8;
        case 0x36b2bcu: goto label_36b2bc;
        case 0x36b2c0u: goto label_36b2c0;
        case 0x36b2c4u: goto label_36b2c4;
        case 0x36b2c8u: goto label_36b2c8;
        case 0x36b2ccu: goto label_36b2cc;
        case 0x36b2d0u: goto label_36b2d0;
        case 0x36b2d4u: goto label_36b2d4;
        case 0x36b2d8u: goto label_36b2d8;
        case 0x36b2dcu: goto label_36b2dc;
        case 0x36b2e0u: goto label_36b2e0;
        case 0x36b2e4u: goto label_36b2e4;
        case 0x36b2e8u: goto label_36b2e8;
        case 0x36b2ecu: goto label_36b2ec;
        case 0x36b2f0u: goto label_36b2f0;
        case 0x36b2f4u: goto label_36b2f4;
        case 0x36b2f8u: goto label_36b2f8;
        case 0x36b2fcu: goto label_36b2fc;
        case 0x36b300u: goto label_36b300;
        case 0x36b304u: goto label_36b304;
        case 0x36b308u: goto label_36b308;
        case 0x36b30cu: goto label_36b30c;
        case 0x36b310u: goto label_36b310;
        case 0x36b314u: goto label_36b314;
        case 0x36b318u: goto label_36b318;
        case 0x36b31cu: goto label_36b31c;
        case 0x36b320u: goto label_36b320;
        case 0x36b324u: goto label_36b324;
        case 0x36b328u: goto label_36b328;
        case 0x36b32cu: goto label_36b32c;
        case 0x36b330u: goto label_36b330;
        case 0x36b334u: goto label_36b334;
        case 0x36b338u: goto label_36b338;
        case 0x36b33cu: goto label_36b33c;
        case 0x36b340u: goto label_36b340;
        case 0x36b344u: goto label_36b344;
        case 0x36b348u: goto label_36b348;
        case 0x36b34cu: goto label_36b34c;
        case 0x36b350u: goto label_36b350;
        case 0x36b354u: goto label_36b354;
        case 0x36b358u: goto label_36b358;
        case 0x36b35cu: goto label_36b35c;
        case 0x36b360u: goto label_36b360;
        case 0x36b364u: goto label_36b364;
        case 0x36b368u: goto label_36b368;
        case 0x36b36cu: goto label_36b36c;
        case 0x36b370u: goto label_36b370;
        case 0x36b374u: goto label_36b374;
        case 0x36b378u: goto label_36b378;
        case 0x36b37cu: goto label_36b37c;
        case 0x36b380u: goto label_36b380;
        case 0x36b384u: goto label_36b384;
        case 0x36b388u: goto label_36b388;
        case 0x36b38cu: goto label_36b38c;
        case 0x36b390u: goto label_36b390;
        case 0x36b394u: goto label_36b394;
        case 0x36b398u: goto label_36b398;
        case 0x36b39cu: goto label_36b39c;
        case 0x36b3a0u: goto label_36b3a0;
        case 0x36b3a4u: goto label_36b3a4;
        case 0x36b3a8u: goto label_36b3a8;
        case 0x36b3acu: goto label_36b3ac;
        case 0x36b3b0u: goto label_36b3b0;
        case 0x36b3b4u: goto label_36b3b4;
        case 0x36b3b8u: goto label_36b3b8;
        case 0x36b3bcu: goto label_36b3bc;
        case 0x36b3c0u: goto label_36b3c0;
        case 0x36b3c4u: goto label_36b3c4;
        case 0x36b3c8u: goto label_36b3c8;
        case 0x36b3ccu: goto label_36b3cc;
        case 0x36b3d0u: goto label_36b3d0;
        case 0x36b3d4u: goto label_36b3d4;
        case 0x36b3d8u: goto label_36b3d8;
        case 0x36b3dcu: goto label_36b3dc;
        case 0x36b3e0u: goto label_36b3e0;
        case 0x36b3e4u: goto label_36b3e4;
        case 0x36b3e8u: goto label_36b3e8;
        case 0x36b3ecu: goto label_36b3ec;
        case 0x36b3f0u: goto label_36b3f0;
        case 0x36b3f4u: goto label_36b3f4;
        case 0x36b3f8u: goto label_36b3f8;
        case 0x36b3fcu: goto label_36b3fc;
        case 0x36b400u: goto label_36b400;
        case 0x36b404u: goto label_36b404;
        case 0x36b408u: goto label_36b408;
        case 0x36b40cu: goto label_36b40c;
        case 0x36b410u: goto label_36b410;
        case 0x36b414u: goto label_36b414;
        case 0x36b418u: goto label_36b418;
        case 0x36b41cu: goto label_36b41c;
        case 0x36b420u: goto label_36b420;
        case 0x36b424u: goto label_36b424;
        case 0x36b428u: goto label_36b428;
        case 0x36b42cu: goto label_36b42c;
        case 0x36b430u: goto label_36b430;
        case 0x36b434u: goto label_36b434;
        case 0x36b438u: goto label_36b438;
        case 0x36b43cu: goto label_36b43c;
        case 0x36b440u: goto label_36b440;
        case 0x36b444u: goto label_36b444;
        case 0x36b448u: goto label_36b448;
        case 0x36b44cu: goto label_36b44c;
        case 0x36b450u: goto label_36b450;
        case 0x36b454u: goto label_36b454;
        case 0x36b458u: goto label_36b458;
        case 0x36b45cu: goto label_36b45c;
        case 0x36b460u: goto label_36b460;
        case 0x36b464u: goto label_36b464;
        case 0x36b468u: goto label_36b468;
        case 0x36b46cu: goto label_36b46c;
        case 0x36b470u: goto label_36b470;
        case 0x36b474u: goto label_36b474;
        case 0x36b478u: goto label_36b478;
        case 0x36b47cu: goto label_36b47c;
        case 0x36b480u: goto label_36b480;
        case 0x36b484u: goto label_36b484;
        case 0x36b488u: goto label_36b488;
        case 0x36b48cu: goto label_36b48c;
        case 0x36b490u: goto label_36b490;
        case 0x36b494u: goto label_36b494;
        case 0x36b498u: goto label_36b498;
        case 0x36b49cu: goto label_36b49c;
        case 0x36b4a0u: goto label_36b4a0;
        case 0x36b4a4u: goto label_36b4a4;
        case 0x36b4a8u: goto label_36b4a8;
        case 0x36b4acu: goto label_36b4ac;
        case 0x36b4b0u: goto label_36b4b0;
        case 0x36b4b4u: goto label_36b4b4;
        case 0x36b4b8u: goto label_36b4b8;
        case 0x36b4bcu: goto label_36b4bc;
        case 0x36b4c0u: goto label_36b4c0;
        case 0x36b4c4u: goto label_36b4c4;
        case 0x36b4c8u: goto label_36b4c8;
        case 0x36b4ccu: goto label_36b4cc;
        case 0x36b4d0u: goto label_36b4d0;
        case 0x36b4d4u: goto label_36b4d4;
        case 0x36b4d8u: goto label_36b4d8;
        case 0x36b4dcu: goto label_36b4dc;
        case 0x36b4e0u: goto label_36b4e0;
        case 0x36b4e4u: goto label_36b4e4;
        case 0x36b4e8u: goto label_36b4e8;
        case 0x36b4ecu: goto label_36b4ec;
        case 0x36b4f0u: goto label_36b4f0;
        case 0x36b4f4u: goto label_36b4f4;
        case 0x36b4f8u: goto label_36b4f8;
        case 0x36b4fcu: goto label_36b4fc;
        case 0x36b500u: goto label_36b500;
        case 0x36b504u: goto label_36b504;
        case 0x36b508u: goto label_36b508;
        case 0x36b50cu: goto label_36b50c;
        case 0x36b510u: goto label_36b510;
        case 0x36b514u: goto label_36b514;
        case 0x36b518u: goto label_36b518;
        case 0x36b51cu: goto label_36b51c;
        case 0x36b520u: goto label_36b520;
        case 0x36b524u: goto label_36b524;
        case 0x36b528u: goto label_36b528;
        case 0x36b52cu: goto label_36b52c;
        case 0x36b530u: goto label_36b530;
        case 0x36b534u: goto label_36b534;
        case 0x36b538u: goto label_36b538;
        case 0x36b53cu: goto label_36b53c;
        case 0x36b540u: goto label_36b540;
        case 0x36b544u: goto label_36b544;
        case 0x36b548u: goto label_36b548;
        case 0x36b54cu: goto label_36b54c;
        case 0x36b550u: goto label_36b550;
        case 0x36b554u: goto label_36b554;
        case 0x36b558u: goto label_36b558;
        case 0x36b55cu: goto label_36b55c;
        case 0x36b560u: goto label_36b560;
        case 0x36b564u: goto label_36b564;
        case 0x36b568u: goto label_36b568;
        case 0x36b56cu: goto label_36b56c;
        case 0x36b570u: goto label_36b570;
        case 0x36b574u: goto label_36b574;
        case 0x36b578u: goto label_36b578;
        case 0x36b57cu: goto label_36b57c;
        case 0x36b580u: goto label_36b580;
        case 0x36b584u: goto label_36b584;
        case 0x36b588u: goto label_36b588;
        case 0x36b58cu: goto label_36b58c;
        case 0x36b590u: goto label_36b590;
        case 0x36b594u: goto label_36b594;
        case 0x36b598u: goto label_36b598;
        case 0x36b59cu: goto label_36b59c;
        case 0x36b5a0u: goto label_36b5a0;
        case 0x36b5a4u: goto label_36b5a4;
        case 0x36b5a8u: goto label_36b5a8;
        case 0x36b5acu: goto label_36b5ac;
        case 0x36b5b0u: goto label_36b5b0;
        case 0x36b5b4u: goto label_36b5b4;
        case 0x36b5b8u: goto label_36b5b8;
        case 0x36b5bcu: goto label_36b5bc;
        case 0x36b5c0u: goto label_36b5c0;
        case 0x36b5c4u: goto label_36b5c4;
        case 0x36b5c8u: goto label_36b5c8;
        case 0x36b5ccu: goto label_36b5cc;
        case 0x36b5d0u: goto label_36b5d0;
        case 0x36b5d4u: goto label_36b5d4;
        case 0x36b5d8u: goto label_36b5d8;
        case 0x36b5dcu: goto label_36b5dc;
        case 0x36b5e0u: goto label_36b5e0;
        case 0x36b5e4u: goto label_36b5e4;
        case 0x36b5e8u: goto label_36b5e8;
        case 0x36b5ecu: goto label_36b5ec;
        case 0x36b5f0u: goto label_36b5f0;
        case 0x36b5f4u: goto label_36b5f4;
        case 0x36b5f8u: goto label_36b5f8;
        case 0x36b5fcu: goto label_36b5fc;
        case 0x36b600u: goto label_36b600;
        case 0x36b604u: goto label_36b604;
        case 0x36b608u: goto label_36b608;
        case 0x36b60cu: goto label_36b60c;
        case 0x36b610u: goto label_36b610;
        case 0x36b614u: goto label_36b614;
        case 0x36b618u: goto label_36b618;
        case 0x36b61cu: goto label_36b61c;
        case 0x36b620u: goto label_36b620;
        case 0x36b624u: goto label_36b624;
        case 0x36b628u: goto label_36b628;
        case 0x36b62cu: goto label_36b62c;
        case 0x36b630u: goto label_36b630;
        case 0x36b634u: goto label_36b634;
        case 0x36b638u: goto label_36b638;
        case 0x36b63cu: goto label_36b63c;
        case 0x36b640u: goto label_36b640;
        case 0x36b644u: goto label_36b644;
        case 0x36b648u: goto label_36b648;
        case 0x36b64cu: goto label_36b64c;
        case 0x36b650u: goto label_36b650;
        case 0x36b654u: goto label_36b654;
        case 0x36b658u: goto label_36b658;
        case 0x36b65cu: goto label_36b65c;
        case 0x36b660u: goto label_36b660;
        case 0x36b664u: goto label_36b664;
        case 0x36b668u: goto label_36b668;
        case 0x36b66cu: goto label_36b66c;
        case 0x36b670u: goto label_36b670;
        case 0x36b674u: goto label_36b674;
        case 0x36b678u: goto label_36b678;
        case 0x36b67cu: goto label_36b67c;
        case 0x36b680u: goto label_36b680;
        case 0x36b684u: goto label_36b684;
        case 0x36b688u: goto label_36b688;
        case 0x36b68cu: goto label_36b68c;
        case 0x36b690u: goto label_36b690;
        case 0x36b694u: goto label_36b694;
        case 0x36b698u: goto label_36b698;
        case 0x36b69cu: goto label_36b69c;
        case 0x36b6a0u: goto label_36b6a0;
        case 0x36b6a4u: goto label_36b6a4;
        case 0x36b6a8u: goto label_36b6a8;
        case 0x36b6acu: goto label_36b6ac;
        case 0x36b6b0u: goto label_36b6b0;
        case 0x36b6b4u: goto label_36b6b4;
        case 0x36b6b8u: goto label_36b6b8;
        case 0x36b6bcu: goto label_36b6bc;
        case 0x36b6c0u: goto label_36b6c0;
        case 0x36b6c4u: goto label_36b6c4;
        case 0x36b6c8u: goto label_36b6c8;
        case 0x36b6ccu: goto label_36b6cc;
        case 0x36b6d0u: goto label_36b6d0;
        case 0x36b6d4u: goto label_36b6d4;
        default: break;
    }

    ctx->pc = 0x36b0f0u;

label_36b0f0:
    // 0x36b0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36b0f4:
    // 0x36b0f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36b0f8:
    // 0x36b0f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36b0fc:
    // 0x36b0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36b100:
    // 0x36b100: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_36b104:
    // 0x36b104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36b104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36b108:
    // 0x36b108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_36b10c:
    // 0x36b10c: 0x2612038c  addiu       $s2, $s0, 0x38C
    ctx->pc = 0x36b10cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
label_36b110:
    // 0x36b110: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x36b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_36b114:
    // 0x36b114: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36b114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36b118:
    // 0x36b118: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x36b118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
label_36b11c:
    // 0x36b11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b120:
    // 0x36b120: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b124:
    // 0x36b124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b128:
    // 0x36b128: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x36b128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_36b12c:
    // 0x36b12c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36b130:
    // 0x36b130: 0x40f809  jalr        $v0
label_36b134:
    if (ctx->pc == 0x36B134u) {
        ctx->pc = 0x36B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B130u;
        // 0x36b134: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B138u;
        goto label_36b138;
    }
    ctx->pc = 0x36B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B138u);
        ctx->pc = 0x36B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B130u;
        // 0x36b134: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B130u, 0x36B138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B138u;
label_36b138:
    // 0x36b138: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b13c:
    // 0x36b13c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x36b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36b140:
    // 0x36b140: 0x260901d0  addiu       $t1, $s0, 0x1D0
    ctx->pc = 0x36b140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_36b144:
    // 0x36b144: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x36b144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b148:
    // 0x36b148: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x36b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_36b14c:
    // 0x36b14c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36b14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_36b150:
    // 0x36b150: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b150u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b154:
    // 0x36b154: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b158:
    // 0x36b158: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b15c:
    // 0x36b15c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b160:
    // 0x36b160: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b164:
    // 0x36b164: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x36b164u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b168:
    // 0x36b168: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b16c:
    // 0x36b16c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b170:
    // 0x36b170: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b170u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b174:
    // 0x36b174: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b178:
    // 0x36b178: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x36b178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_36b17c:
    // 0x36b17c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x36b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_36b180:
    // 0x36b180: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b180u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b184:
    // 0x36b184: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b188:
    // 0x36b188: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b18c:
    // 0x36b18c: 0x38a30000  xori        $v1, $a1, 0x0
    ctx->pc = 0x36b18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
label_36b190:
    // 0x36b190: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x36b190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_36b194:
    // 0x36b194: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b198:
    // 0x36b198: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b198u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b19c:
    // 0x36b19c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b1a0:
    // 0x36b1a0: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x36b1a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_36b1a4:
    // 0x36b1a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b1a8:
    // 0x36b1a8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b1ac:
    // 0x36b1ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b1b0:
    // 0x36b1b0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b1b4:
    // 0x36b1b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b1b8:
    // 0x36b1b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b1b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b1bc:
    // 0x36b1bc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b1c0:
    // 0x36b1c0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b1c4:
    // 0x36b1c4: 0x28a40016  slti        $a0, $a1, 0x16
    ctx->pc = 0x36b1c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_36b1c8:
    // 0x36b1c8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b1c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b1cc:
    // 0x36b1cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b1d0:
    // 0x36b1d0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b1d4:
    // 0x36b1d4: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
label_36b1d8:
    if (ctx->pc == 0x36B1D8u) {
        ctx->pc = 0x36B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1D4u;
        // 0x36b1d8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B1DCu;
        goto label_36b1dc;
    }
    ctx->pc = 0x36B1D4u;
    {
        const bool branch_taken_0x36b1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1D4u;
        // 0x36b1d8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b1d4) {
            ctx->pc = 0x36B250u;
            goto label_36b250;
        }
    }
    ctx->pc = 0x36B1DCu;
label_36b1dc:
    // 0x36b1dc: 0x24a5ffea  addiu       $a1, $a1, -0x16
    ctx->pc = 0x36b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967274));
label_36b1e0:
    // 0x36b1e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_36b1e4:
    if (ctx->pc == 0x36B1E4u) {
        ctx->pc = 0x36B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1E0u;
        // 0x36b1e4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B1E8u;
        goto label_36b1e8;
    }
    ctx->pc = 0x36B1E0u;
    {
        const bool branch_taken_0x36b1e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1E0u;
        // 0x36b1e4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b1e0) {
            ctx->pc = 0x36B208u;
            goto label_36b208;
        }
    }
    ctx->pc = 0x36B1E8u;
label_36b1e8:
    // 0x36b1e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_36b1ec:
    // 0x36b1ec: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x36b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_36b1f0:
    // 0x36b1f0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36b1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36b1f4:
    // 0x36b1f4: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x36b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_36b1f8:
    // 0x36b1f8: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x36b1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_36b1fc:
    // 0x36b1fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_36b200:
    if (ctx->pc == 0x36B200u) {
        ctx->pc = 0x36B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1FCu;
        // 0x36b200: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B204u;
        goto label_36b204;
    }
    ctx->pc = 0x36B1FCu;
    {
        const bool branch_taken_0x36b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1FCu;
        // 0x36b200: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b1fc) {
            ctx->pc = 0x36B214u;
            goto label_36b214;
        }
    }
    ctx->pc = 0x36B204u;
label_36b204:
    // 0x36b204: 0x0  nop
    ctx->pc = 0x36b204u;
    // NOP
label_36b208:
    // 0x36b208: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x36b208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_36b20c:
    // 0x36b20c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b20cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b210:
    // 0x36b210: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x36b210u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_36b214:
    // 0x36b214: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b214u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b218:
    // 0x36b218: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b21c:
    // 0x36b21c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b220:
    // 0x36b220: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b224:
    // 0x36b224: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b228:
    // 0x36b228: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b22c:
    // 0x36b22c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b230:
    // 0x36b230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b234:
    // 0x36b234: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b234u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b238:
    // 0x36b238: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b23c:
    // 0x36b23c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b240:
    // 0x36b240: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b244:
    // 0x36b244: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b244u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b248:
    // 0x36b248: 0x10000005  b           . + 4 + (0x5 << 2)
label_36b24c:
    if (ctx->pc == 0x36B24Cu) {
        ctx->pc = 0x36B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B248u;
        // 0x36b24c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B250u;
        goto label_36b250;
    }
    ctx->pc = 0x36B248u;
    {
        const bool branch_taken_0x36b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B248u;
        // 0x36b24c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b248) {
            ctx->pc = 0x36B260u;
            goto label_36b260;
        }
    }
    ctx->pc = 0x36B250u;
label_36b250:
    // 0x36b250: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x36b250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_36b254:
    // 0x36b254: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x36b254u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_36b258:
    // 0x36b258: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x36b258u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_36b25c:
    // 0x36b25c: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x36b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_36b260:
    // 0x36b260: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x36b260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_36b264:
    // 0x36b264: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_36b268:
    if (ctx->pc == 0x36B268u) {
        ctx->pc = 0x36B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B264u;
        // 0x36b268: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B26Cu;
        goto label_36b26c;
    }
    ctx->pc = 0x36B264u;
    {
        const bool branch_taken_0x36b264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B264u;
        // 0x36b268: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b264) {
            ctx->pc = 0x36B2D0u;
            goto label_36b2d0;
        }
    }
    ctx->pc = 0x36B26Cu;
label_36b26c:
    // 0x36b26c: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x36b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_36b270:
    // 0x36b270: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_36b274:
    if (ctx->pc == 0x36B274u) {
        ctx->pc = 0x36B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B270u;
        // 0x36b274: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B278u;
        goto label_36b278;
    }
    ctx->pc = 0x36B270u;
    {
        const bool branch_taken_0x36b270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B270u;
        // 0x36b274: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b270) {
            ctx->pc = 0x36B290u;
            goto label_36b290;
        }
    }
    ctx->pc = 0x36B278u;
label_36b278:
    // 0x36b278: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36b278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_36b27c:
    // 0x36b27c: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x36b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_36b280:
    // 0x36b280: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36b280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36b284:
    // 0x36b284: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x36b284u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_36b288:
    // 0x36b288: 0x10000002  b           . + 4 + (0x2 << 2)
label_36b28c:
    if (ctx->pc == 0x36B28Cu) {
        ctx->pc = 0x36B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B288u;
        // 0x36b28c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B290u;
        goto label_36b290;
    }
    ctx->pc = 0x36B288u;
    {
        const bool branch_taken_0x36b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B288u;
        // 0x36b28c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b288) {
            ctx->pc = 0x36B294u;
            goto label_36b294;
        }
    }
    ctx->pc = 0x36B290u;
label_36b290:
    // 0x36b290: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b294:
    // 0x36b294: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b294u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b298:
    // 0x36b298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b29c:
    // 0x36b29c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b2a0:
    // 0x36b2a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b2a4:
    // 0x36b2a4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b2a8:
    // 0x36b2a8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b2ac:
    // 0x36b2ac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b2b0:
    // 0x36b2b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b2b4:
    // 0x36b2b4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b2b8:
    // 0x36b2b8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b2bc:
    // 0x36b2bc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b2bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b2c0:
    // 0x36b2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b2c4:
    // 0x36b2c4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b2c8:
    // 0x36b2c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_36b2cc:
    if (ctx->pc == 0x36B2CCu) {
        ctx->pc = 0x36B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2C8u;
        // 0x36b2cc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B2D0u;
        goto label_36b2d0;
    }
    ctx->pc = 0x36B2C8u;
    {
        const bool branch_taken_0x36b2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2C8u;
        // 0x36b2cc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b2c8) {
            ctx->pc = 0x36B2D8u;
            goto label_36b2d8;
        }
    }
    ctx->pc = 0x36B2D0u;
label_36b2d0:
    // 0x36b2d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36b2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_36b2d4:
    // 0x36b2d4: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x36b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_36b2d8:
    // 0x36b2d8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x36b2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_36b2dc:
    // 0x36b2dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_36b2e0:
    if (ctx->pc == 0x36B2E0u) {
        ctx->pc = 0x36B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2DCu;
        // 0x36b2e0: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B2E4u;
        goto label_36b2e4;
    }
    ctx->pc = 0x36B2DCu;
    {
        const bool branch_taken_0x36b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2DCu;
        // 0x36b2e0: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b2dc) {
            ctx->pc = 0x36B358u;
            goto label_36b358;
        }
    }
    ctx->pc = 0x36B2E4u;
label_36b2e4:
    // 0x36b2e4: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x36b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_36b2e8:
    // 0x36b2e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_36b2ec:
    if (ctx->pc == 0x36B2ECu) {
        ctx->pc = 0x36B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2E8u;
        // 0x36b2ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B2F0u;
        goto label_36b2f0;
    }
    ctx->pc = 0x36B2E8u;
    {
        const bool branch_taken_0x36b2e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2E8u;
        // 0x36b2ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b2e8) {
            ctx->pc = 0x36B310u;
            goto label_36b310;
        }
    }
    ctx->pc = 0x36B2F0u;
label_36b2f0:
    // 0x36b2f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_36b2f4:
    // 0x36b2f4: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x36b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_36b2f8:
    // 0x36b2f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36b2f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36b2fc:
    // 0x36b2fc: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x36b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_36b300:
    // 0x36b300: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x36b300u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_36b304:
    // 0x36b304: 0x10000005  b           . + 4 + (0x5 << 2)
label_36b308:
    if (ctx->pc == 0x36B308u) {
        ctx->pc = 0x36B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B304u;
        // 0x36b308: 0xae0302bc  sw          $v1, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B30Cu;
        goto label_36b30c;
    }
    ctx->pc = 0x36B304u;
    {
        const bool branch_taken_0x36b304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B304u;
        // 0x36b308: 0xae0302bc  sw          $v1, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b304) {
            ctx->pc = 0x36B31Cu;
            goto label_36b31c;
        }
    }
    ctx->pc = 0x36B30Cu;
label_36b30c:
    // 0x36b30c: 0x0  nop
    ctx->pc = 0x36b30cu;
    // NOP
label_36b310:
    // 0x36b310: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x36b310u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_36b314:
    // 0x36b314: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b318:
    // 0x36b318: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x36b318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
label_36b31c:
    // 0x36b31c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b31cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b320:
    // 0x36b320: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b324:
    // 0x36b324: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b328:
    // 0x36b328: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b32c:
    // 0x36b32c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b32cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b330:
    // 0x36b330: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b334:
    // 0x36b334: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b338:
    // 0x36b338: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b33c:
    // 0x36b33c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b340:
    // 0x36b340: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b344:
    // 0x36b344: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b348:
    // 0x36b348: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b34c:
    // 0x36b34c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b350:
    // 0x36b350: 0x10000005  b           . + 4 + (0x5 << 2)
label_36b354:
    if (ctx->pc == 0x36B354u) {
        ctx->pc = 0x36B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B350u;
        // 0x36b354: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B358u;
        goto label_36b358;
    }
    ctx->pc = 0x36B350u;
    {
        const bool branch_taken_0x36b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B350u;
        // 0x36b354: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b350) {
            ctx->pc = 0x36B368u;
            goto label_36b368;
        }
    }
    ctx->pc = 0x36B358u;
label_36b358:
    // 0x36b358: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x36b358u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_36b35c:
    // 0x36b35c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x36b35cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_36b360:
    // 0x36b360: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x36b360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
label_36b364:
    // 0x36b364: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x36b364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_36b368:
    // 0x36b368: 0x8d2a0018  lw          $t2, 0x18($t1)
    ctx->pc = 0x36b368u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_36b36c:
    // 0x36b36c: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x36b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_36b370:
    // 0x36b370: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x36b370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_36b374:
    // 0x36b374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36b378:
    if (ctx->pc == 0x36B378u) {
        ctx->pc = 0x36B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B374u;
        // 0x36b378: 0x8e0203fc  lw          $v0, 0x3FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B37Cu;
        goto label_36b37c;
    }
    ctx->pc = 0x36B374u;
    {
        const bool branch_taken_0x36b374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B374u;
        // 0x36b378: 0x8e0203fc  lw          $v0, 0x3FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b374) {
            ctx->pc = 0x36B398u;
            goto label_36b398;
        }
    }
    ctx->pc = 0x36B37Cu;
label_36b37c:
    // 0x36b37c: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x36b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
label_36b380:
    // 0x36b380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36b384:
    // 0x36b384: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x36b384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_36b388:
    // 0x36b388: 0xae0203fc  sw          $v0, 0x3FC($s0)
    ctx->pc = 0x36b388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 2));
label_36b38c:
    // 0x36b38c: 0x10000009  b           . + 4 + (0x9 << 2)
label_36b390:
    if (ctx->pc == 0x36B390u) {
        ctx->pc = 0x36B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B38Cu;
        // 0x36b390: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B394u;
        goto label_36b394;
    }
    ctx->pc = 0x36B38Cu;
    {
        const bool branch_taken_0x36b38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B38Cu;
        // 0x36b390: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b38c) {
            ctx->pc = 0x36B3B4u;
            goto label_36b3b4;
        }
    }
    ctx->pc = 0x36B394u;
label_36b394:
    // 0x36b394: 0x0  nop
    ctx->pc = 0x36b394u;
    // NOP
label_36b398:
    // 0x36b398: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x36b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_36b39c:
    // 0x36b39c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_36b3a0:
    // 0x36b3a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36b3a4:
    // 0x36b3a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x36b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_36b3a8:
    // 0x36b3a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_36b3ac:
    // 0x36b3ac: 0xae030400  sw          $v1, 0x400($s0)
    ctx->pc = 0x36b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 3));
label_36b3b0:
    // 0x36b3b0: 0xad220068  sw          $v0, 0x68($t1)
    ctx->pc = 0x36b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 2));
label_36b3b4:
    // 0x36b3b4: 0x2542fffe  addiu       $v0, $t2, -0x2
    ctx->pc = 0x36b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
label_36b3b8:
    // 0x36b3b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x36b3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_36b3bc:
    // 0x36b3bc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_36b3c0:
    if (ctx->pc == 0x36B3C0u) {
        ctx->pc = 0x36B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3BCu;
        // 0x36b3c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B3C4u;
        goto label_36b3c4;
    }
    ctx->pc = 0x36B3BCu;
    {
        const bool branch_taken_0x36b3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3BCu;
        // 0x36b3c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b3bc) {
            ctx->pc = 0x36B4C4u;
            goto label_36b4c4;
        }
    }
    ctx->pc = 0x36B3C4u;
label_36b3c4:
    // 0x36b3c4: 0x260902f0  addiu       $t1, $s0, 0x2F0
    ctx->pc = 0x36b3c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_36b3c8:
    // 0x36b3c8: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x36b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_36b3cc:
    // 0x36b3cc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x36b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36b3d0:
    // 0x36b3d0: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_36b3d4:
    if (ctx->pc == 0x36B3D4u) {
        ctx->pc = 0x36B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3D0u;
        // 0x36b3d4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B3D8u;
        goto label_36b3d8;
    }
    ctx->pc = 0x36B3D0u;
    {
        const bool branch_taken_0x36b3d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x36B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3D0u;
        // 0x36b3d4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b3d0) {
            ctx->pc = 0x36B420u;
            goto label_36b420;
        }
    }
    ctx->pc = 0x36B3D8u;
label_36b3d8:
    // 0x36b3d8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b3dc:
    // 0x36b3dc: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b3dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b3e0:
    // 0x36b3e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b3e4:
    // 0x36b3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36b3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b3e8:
    // 0x36b3e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b3ec:
    // 0x36b3ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b3f0:
    // 0x36b3f0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b3f4:
    // 0x36b3f4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b3f8:
    // 0x36b3f8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b3fc:
    // 0x36b3fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b400:
    // 0x36b400: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b400u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b404:
    // 0x36b404: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b408:
    // 0x36b408: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b40c:
    // 0x36b40c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b410:
    // 0x36b410: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b414:
    // 0x36b414: 0x10000004  b           . + 4 + (0x4 << 2)
label_36b418:
    if (ctx->pc == 0x36B418u) {
        ctx->pc = 0x36B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B414u;
        // 0x36b418: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B41Cu;
        goto label_36b41c;
    }
    ctx->pc = 0x36B414u;
    {
        const bool branch_taken_0x36b414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B414u;
        // 0x36b418: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b414) {
            ctx->pc = 0x36B428u;
            goto label_36b428;
        }
    }
    ctx->pc = 0x36B41Cu;
label_36b41c:
    // 0x36b41c: 0x0  nop
    ctx->pc = 0x36b41cu;
    // NOP
label_36b420:
    // 0x36b420: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36b420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36b424:
    // 0x36b424: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x36b424u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_36b428:
    // 0x36b428: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x36b428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_36b42c:
    // 0x36b42c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_36b430:
    if (ctx->pc == 0x36B430u) {
        ctx->pc = 0x36B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B42Cu;
        // 0x36b430: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B434u;
        goto label_36b434;
    }
    ctx->pc = 0x36B42Cu;
    {
        const bool branch_taken_0x36b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B42Cu;
        // 0x36b430: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b42c) {
            ctx->pc = 0x36B498u;
            goto label_36b498;
        }
    }
    ctx->pc = 0x36B434u;
label_36b434:
    // 0x36b434: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x36b434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_36b438:
    // 0x36b438: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_36b43c:
    if (ctx->pc == 0x36B43Cu) {
        ctx->pc = 0x36B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B438u;
        // 0x36b43c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B440u;
        goto label_36b440;
    }
    ctx->pc = 0x36B438u;
    {
        const bool branch_taken_0x36b438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B438u;
        // 0x36b43c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b438) {
            ctx->pc = 0x36B458u;
            goto label_36b458;
        }
    }
    ctx->pc = 0x36B440u;
label_36b440:
    // 0x36b440: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36b440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_36b444:
    // 0x36b444: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x36b444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_36b448:
    // 0x36b448: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36b448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36b44c:
    // 0x36b44c: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x36b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_36b450:
    // 0x36b450: 0x10000002  b           . + 4 + (0x2 << 2)
label_36b454:
    if (ctx->pc == 0x36B454u) {
        ctx->pc = 0x36B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B450u;
        // 0x36b454: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B458u;
        goto label_36b458;
    }
    ctx->pc = 0x36B450u;
    {
        const bool branch_taken_0x36b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B450u;
        // 0x36b454: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b450) {
            ctx->pc = 0x36B45Cu;
            goto label_36b45c;
        }
    }
    ctx->pc = 0x36B458u;
label_36b458:
    // 0x36b458: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b45c:
    // 0x36b45c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b45cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b460:
    // 0x36b460: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b464:
    // 0x36b464: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b468:
    // 0x36b468: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b46c:
    // 0x36b46c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b470:
    // 0x36b470: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b474:
    // 0x36b474: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b478:
    // 0x36b478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b47c:
    // 0x36b47c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b480:
    // 0x36b480: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b484:
    // 0x36b484: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b488:
    // 0x36b488: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b48c:
    // 0x36b48c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b48cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b490:
    // 0x36b490: 0x10000003  b           . + 4 + (0x3 << 2)
label_36b494:
    if (ctx->pc == 0x36B494u) {
        ctx->pc = 0x36B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B490u;
        // 0x36b494: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B498u;
        goto label_36b498;
    }
    ctx->pc = 0x36B490u;
    {
        const bool branch_taken_0x36b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B490u;
        // 0x36b494: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b490) {
            ctx->pc = 0x36B4A0u;
            goto label_36b4a0;
        }
    }
    ctx->pc = 0x36B498u;
label_36b498:
    // 0x36b498: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36b498u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_36b49c:
    // 0x36b49c: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x36b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_36b4a0:
    // 0x36b4a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_36b4a4:
    // 0x36b4a4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x36b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_36b4a8:
    // 0x36b4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b4ac:
    // 0x36b4ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x36b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_36b4b0:
    // 0x36b4b0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x36b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_36b4b4:
    // 0x36b4b4: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x36b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_36b4b8:
    // 0x36b4b8: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x36b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_36b4bc:
    // 0x36b4bc: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x36b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_36b4c0:
    // 0x36b4c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36b4c4:
    // 0x36b4c4: 0x55420043  bnel        $t2, $v0, . + 4 + (0x43 << 2)
label_36b4c8:
    if (ctx->pc == 0x36B4C8u) {
        ctx->pc = 0x36B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4C4u;
        // 0x36b4c8: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B4CCu;
        goto label_36b4cc;
    }
    ctx->pc = 0x36B4C4u;
    {
        const bool branch_taken_0x36b4c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x36b4c4) {
            ctx->pc = 0x36B4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B4C4u;
            // 0x36b4c8: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B5D4u;
            goto label_36b5d4;
        }
    }
    ctx->pc = 0x36B4CCu;
label_36b4cc:
    // 0x36b4cc: 0x26090314  addiu       $t1, $s0, 0x314
    ctx->pc = 0x36b4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
label_36b4d0:
    // 0x36b4d0: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x36b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_36b4d4:
    // 0x36b4d4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x36b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36b4d8:
    // 0x36b4d8: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_36b4dc:
    if (ctx->pc == 0x36B4DCu) {
        ctx->pc = 0x36B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4D8u;
        // 0x36b4dc: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B4E0u;
        goto label_36b4e0;
    }
    ctx->pc = 0x36B4D8u;
    {
        const bool branch_taken_0x36b4d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x36B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4D8u;
        // 0x36b4dc: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4d8) {
            ctx->pc = 0x36B528u;
            goto label_36b528;
        }
    }
    ctx->pc = 0x36B4E0u;
label_36b4e0:
    // 0x36b4e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b4e4:
    // 0x36b4e4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b4e4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b4e8:
    // 0x36b4e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b4ec:
    // 0x36b4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36b4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b4f0:
    // 0x36b4f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b4f4:
    // 0x36b4f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b4f8:
    // 0x36b4f8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b4fc:
    // 0x36b4fc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b500:
    // 0x36b500: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b504:
    // 0x36b504: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b508:
    // 0x36b508: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b50c:
    // 0x36b50c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b510:
    // 0x36b510: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b514:
    // 0x36b514: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b518:
    // 0x36b518: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b51c:
    // 0x36b51c: 0x10000004  b           . + 4 + (0x4 << 2)
label_36b520:
    if (ctx->pc == 0x36B520u) {
        ctx->pc = 0x36B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B51Cu;
        // 0x36b520: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B524u;
        goto label_36b524;
    }
    ctx->pc = 0x36B51Cu;
    {
        const bool branch_taken_0x36b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B51Cu;
        // 0x36b520: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b51c) {
            ctx->pc = 0x36B530u;
            goto label_36b530;
        }
    }
    ctx->pc = 0x36B524u;
label_36b524:
    // 0x36b524: 0x0  nop
    ctx->pc = 0x36b524u;
    // NOP
label_36b528:
    // 0x36b528: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36b528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36b52c:
    // 0x36b52c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x36b52cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_36b530:
    // 0x36b530: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x36b530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_36b534:
    // 0x36b534: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_36b538:
    if (ctx->pc == 0x36B538u) {
        ctx->pc = 0x36B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B534u;
        // 0x36b538: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B53Cu;
        goto label_36b53c;
    }
    ctx->pc = 0x36B534u;
    {
        const bool branch_taken_0x36b534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B534u;
        // 0x36b538: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b534) {
            ctx->pc = 0x36B5A8u;
            goto label_36b5a8;
        }
    }
    ctx->pc = 0x36B53Cu;
label_36b53c:
    // 0x36b53c: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x36b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_36b540:
    // 0x36b540: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_36b544:
    if (ctx->pc == 0x36B544u) {
        ctx->pc = 0x36B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B540u;
        // 0x36b544: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B548u;
        goto label_36b548;
    }
    ctx->pc = 0x36B540u;
    {
        const bool branch_taken_0x36b540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B540u;
        // 0x36b544: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b540) {
            ctx->pc = 0x36B560u;
            goto label_36b560;
        }
    }
    ctx->pc = 0x36B548u;
label_36b548:
    // 0x36b548: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x36b548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_36b54c:
    // 0x36b54c: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x36b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_36b550:
    // 0x36b550: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36b550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36b554:
    // 0x36b554: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x36b554u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_36b558:
    // 0x36b558: 0x10000002  b           . + 4 + (0x2 << 2)
label_36b55c:
    if (ctx->pc == 0x36B55Cu) {
        ctx->pc = 0x36B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B558u;
        // 0x36b55c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B560u;
        goto label_36b560;
    }
    ctx->pc = 0x36B558u;
    {
        const bool branch_taken_0x36b558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B558u;
        // 0x36b55c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b558) {
            ctx->pc = 0x36B564u;
            goto label_36b564;
        }
    }
    ctx->pc = 0x36B560u;
label_36b560:
    // 0x36b560: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36b560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b564:
    // 0x36b564: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b564u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b568:
    // 0x36b568: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b56c:
    // 0x36b56c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b570:
    // 0x36b570: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b574:
    // 0x36b574: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b574u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b578:
    // 0x36b578: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b57c:
    // 0x36b57c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b580:
    // 0x36b580: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b584:
    // 0x36b584: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b588:
    // 0x36b588: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b58c:
    // 0x36b58c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b58cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b590:
    // 0x36b590: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b594:
    // 0x36b594: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b598:
    // 0x36b598: 0x10000005  b           . + 4 + (0x5 << 2)
label_36b59c:
    if (ctx->pc == 0x36B59Cu) {
        ctx->pc = 0x36B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B598u;
        // 0x36b59c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B5A0u;
        goto label_36b5a0;
    }
    ctx->pc = 0x36B598u;
    {
        const bool branch_taken_0x36b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B598u;
        // 0x36b59c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b598) {
            ctx->pc = 0x36B5B0u;
            goto label_36b5b0;
        }
    }
    ctx->pc = 0x36B5A0u;
label_36b5a0:
    // 0x36b5a0: 0x10000031  b           . + 4 + (0x31 << 2)
label_36b5a4:
    if (ctx->pc == 0x36B5A4u) {
        ctx->pc = 0x36B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B5A0u;
        // 0x36b5a4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B5A8u;
        goto label_36b5a8;
    }
    ctx->pc = 0x36B5A0u;
    {
        const bool branch_taken_0x36b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B5A0u;
        // 0x36b5a4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b5a0) {
            ctx->pc = 0x36B668u;
            goto label_36b668;
        }
    }
    ctx->pc = 0x36B5A8u;
label_36b5a8:
    // 0x36b5a8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x36b5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_36b5ac:
    // 0x36b5ac: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x36b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_36b5b0:
    // 0x36b5b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_36b5b4:
    // 0x36b5b4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x36b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_36b5b8:
    // 0x36b5b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b5bc:
    // 0x36b5bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x36b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_36b5c0:
    // 0x36b5c0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x36b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_36b5c4:
    // 0x36b5c4: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x36b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_36b5c8:
    // 0x36b5c8: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x36b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_36b5cc:
    // 0x36b5cc: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x36b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_36b5d0:
    // 0x36b5d0: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x36b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_36b5d4:
    // 0x36b5d4: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x36b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
label_36b5d8:
    // 0x36b5d8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_36b5dc:
    if (ctx->pc == 0x36B5DCu) {
        ctx->pc = 0x36B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B5D8u;
        // 0x36b5dc: 0x8e09038c  lw          $t1, 0x38C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B5E0u;
        goto label_36b5e0;
    }
    ctx->pc = 0x36B5D8u;
    {
        const bool branch_taken_0x36b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B5D8u;
        // 0x36b5dc: 0x8e09038c  lw          $t1, 0x38C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b5d8) {
            ctx->pc = 0x36B650u;
            goto label_36b650;
        }
    }
    ctx->pc = 0x36B5E0u;
label_36b5e0:
    // 0x36b5e0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x36b5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_36b5e4:
    // 0x36b5e4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_36b5e8:
    if (ctx->pc == 0x36B5E8u) {
        ctx->pc = 0x36B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B5E4u;
        // 0x36b5e8: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B5ECu;
        goto label_36b5ec;
    }
    ctx->pc = 0x36B5E4u;
    {
        const bool branch_taken_0x36b5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b5e4) {
            ctx->pc = 0x36B5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B5E4u;
            // 0x36b5e8: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B62Cu;
            goto label_36b62c;
        }
    }
    ctx->pc = 0x36B5ECu;
label_36b5ec:
    // 0x36b5ec: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x36b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_36b5f0:
    // 0x36b5f0: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x36b5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_36b5f4:
    // 0x36b5f4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x36b5f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b5f8:
    // 0x36b5f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b5fc:
    // 0x36b5fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b600:
    // 0x36b600: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b604:
    // 0x36b604: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b608:
    // 0x36b608: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x36b608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b60c:
    // 0x36b60c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b610:
    // 0x36b610: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b614:
    // 0x36b614: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b618:
    // 0x36b618: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x36b618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36b61c:
    // 0x36b61c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x36b61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_36b620:
    // 0x36b620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36b620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36b624:
    // 0x36b624: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x36b624u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_36b628:
    // 0x36b628: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x36b628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_36b62c:
    // 0x36b62c: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x36b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_36b630:
    // 0x36b630: 0x8e040390  lw          $a0, 0x390($s0)
    ctx->pc = 0x36b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_36b634:
    // 0x36b634: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x36b634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_36b638:
    // 0x36b638: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x36b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_36b63c:
    // 0x36b63c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x36b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_36b640:
    // 0x36b640: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x36b640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_36b644:
    // 0x36b644: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x36b644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_36b648:
    // 0x36b648: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_36b64c:
    if (ctx->pc == 0x36B64Cu) {
        ctx->pc = 0x36B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B648u;
        // 0x36b64c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B650u;
        goto label_36b650;
    }
    ctx->pc = 0x36B648u;
    {
        const bool branch_taken_0x36b648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B648u;
        // 0x36b64c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b648) {
            ctx->pc = 0x36B6C0u;
            goto label_36b6c0;
        }
    }
    ctx->pc = 0x36B650u;
label_36b650:
    // 0x36b650: 0x4e2ffe3  bltzl       $a3, . + 4 + (-0x1D << 2)
label_36b654:
    if (ctx->pc == 0x36B654u) {
        ctx->pc = 0x36B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B650u;
        // 0x36b654: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B658u;
        goto label_36b658;
    }
    ctx->pc = 0x36B650u;
    {
        const bool branch_taken_0x36b650 = (GPR_S64(ctx, 7) < 0);
        if (branch_taken_0x36b650) {
            ctx->pc = 0x36B654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B650u;
            // 0x36b654: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b5e0;
        }
    }
    ctx->pc = 0x36B658u;
label_36b658:
    // 0x36b658: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36b658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36b65c:
    // 0x36b65c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x36b65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_36b660:
    // 0x36b660: 0x5040ffcf  beql        $v0, $zero, . + 4 + (-0x31 << 2)
label_36b664:
    if (ctx->pc == 0x36B664u) {
        ctx->pc = 0x36B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B660u;
        // 0x36b664: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B668u;
        goto label_36b668;
    }
    ctx->pc = 0x36B660u;
    {
        const bool branch_taken_0x36b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b660) {
            ctx->pc = 0x36B664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B660u;
            // 0x36b664: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b5a0;
        }
    }
    ctx->pc = 0x36B668u;
label_36b668:
    // 0x36b668: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x36b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_36b66c:
    // 0x36b66c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36b66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b670:
    // 0x36b670: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x36b670u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_36b674:
    // 0x36b674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b678:
    // 0x36b678: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x36b678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_36b67c:
    // 0x36b67c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36b67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b680:
    // 0x36b680: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x36b680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_36b684:
    // 0x36b684: 0xc0ceb28  jal         func_33ACA0
label_36b688:
    if (ctx->pc == 0x36B688u) {
        ctx->pc = 0x36B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B684u;
        // 0x36b688: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B68Cu;
        goto label_36b68c;
    }
    ctx->pc = 0x36B684u;
    SET_GPR_U32(ctx, 31, 0x36B68Cu);
    ctx->pc = 0x36B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B684u;
    // 0x36b688: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36B684u, 0x36B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B68Cu;
label_36b68c:
    // 0x36b68c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b690:
    // 0x36b690: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36b690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b694:
    // 0x36b694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b698:
    // 0x36b698: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36b69c:
    // 0x36b69c: 0x40f809  jalr        $v0
label_36b6a0:
    if (ctx->pc == 0x36B6A0u) {
        ctx->pc = 0x36B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B69Cu;
        // 0x36b6a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B6A4u;
        goto label_36b6a4;
    }
    ctx->pc = 0x36B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B6A4u);
        ctx->pc = 0x36B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B69Cu;
        // 0x36b6a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B69Cu, 0x36B6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B6A4u;
label_36b6a4:
    // 0x36b6a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b6a8:
    // 0x36b6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b6ac:
    // 0x36b6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b6b0:
    // 0x36b6b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36b6b4:
    // 0x36b6b4: 0x40f809  jalr        $v0
label_36b6b8:
    if (ctx->pc == 0x36B6B8u) {
        ctx->pc = 0x36B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6B4u;
        // 0x36b6b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B6BCu;
        goto label_36b6bc;
    }
    ctx->pc = 0x36B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B6BCu);
        ctx->pc = 0x36B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6B4u;
        // 0x36b6b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B6B4u, 0x36B6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B6BCu;
label_36b6bc:
    // 0x36b6bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b6c0:
    // 0x36b6c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36b6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36b6c4:
    // 0x36b6c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36b6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36b6c8:
    // 0x36b6c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36b6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36b6cc:
    // 0x36b6cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x36b6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36b6d0:
    // 0x36b6d0: 0x3e00008  jr          $ra
label_36b6d4:
    if (ctx->pc == 0x36B6D4u) {
        ctx->pc = 0x36B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6D0u;
        // 0x36b6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B6D8u;
        goto label_fallthrough_0x36b6d0;
    }
    ctx->pc = 0x36B6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6D0u;
        // 0x36b6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b6d0:
    ctx->pc = 0x36B6D8u;
}
