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

// Function: _IO_outfloat
// Address: 0x38e4f0 - 0x38eab0
void ps2__IO_outfloat_0x38e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_outfloat_0x38e4f0");
#endif

    switch (ctx->pc) {
        case 0x38e4f0u: goto label_38e4f0;
        case 0x38e4f4u: goto label_38e4f4;
        case 0x38e4f8u: goto label_38e4f8;
        case 0x38e4fcu: goto label_38e4fc;
        case 0x38e500u: goto label_38e500;
        case 0x38e504u: goto label_38e504;
        case 0x38e508u: goto label_38e508;
        case 0x38e50cu: goto label_38e50c;
        case 0x38e510u: goto label_38e510;
        case 0x38e514u: goto label_38e514;
        case 0x38e518u: goto label_38e518;
        case 0x38e51cu: goto label_38e51c;
        case 0x38e520u: goto label_38e520;
        case 0x38e524u: goto label_38e524;
        case 0x38e528u: goto label_38e528;
        case 0x38e52cu: goto label_38e52c;
        case 0x38e530u: goto label_38e530;
        case 0x38e534u: goto label_38e534;
        case 0x38e538u: goto label_38e538;
        case 0x38e53cu: goto label_38e53c;
        case 0x38e540u: goto label_38e540;
        case 0x38e544u: goto label_38e544;
        case 0x38e548u: goto label_38e548;
        case 0x38e54cu: goto label_38e54c;
        case 0x38e550u: goto label_38e550;
        case 0x38e554u: goto label_38e554;
        case 0x38e558u: goto label_38e558;
        case 0x38e55cu: goto label_38e55c;
        case 0x38e560u: goto label_38e560;
        case 0x38e564u: goto label_38e564;
        case 0x38e568u: goto label_38e568;
        case 0x38e56cu: goto label_38e56c;
        case 0x38e570u: goto label_38e570;
        case 0x38e574u: goto label_38e574;
        case 0x38e578u: goto label_38e578;
        case 0x38e57cu: goto label_38e57c;
        case 0x38e580u: goto label_38e580;
        case 0x38e584u: goto label_38e584;
        case 0x38e588u: goto label_38e588;
        case 0x38e58cu: goto label_38e58c;
        case 0x38e590u: goto label_38e590;
        case 0x38e594u: goto label_38e594;
        case 0x38e598u: goto label_38e598;
        case 0x38e59cu: goto label_38e59c;
        case 0x38e5a0u: goto label_38e5a0;
        case 0x38e5a4u: goto label_38e5a4;
        case 0x38e5a8u: goto label_38e5a8;
        case 0x38e5acu: goto label_38e5ac;
        case 0x38e5b0u: goto label_38e5b0;
        case 0x38e5b4u: goto label_38e5b4;
        case 0x38e5b8u: goto label_38e5b8;
        case 0x38e5bcu: goto label_38e5bc;
        case 0x38e5c0u: goto label_38e5c0;
        case 0x38e5c4u: goto label_38e5c4;
        case 0x38e5c8u: goto label_38e5c8;
        case 0x38e5ccu: goto label_38e5cc;
        case 0x38e5d0u: goto label_38e5d0;
        case 0x38e5d4u: goto label_38e5d4;
        case 0x38e5d8u: goto label_38e5d8;
        case 0x38e5dcu: goto label_38e5dc;
        case 0x38e5e0u: goto label_38e5e0;
        case 0x38e5e4u: goto label_38e5e4;
        case 0x38e5e8u: goto label_38e5e8;
        case 0x38e5ecu: goto label_38e5ec;
        case 0x38e5f0u: goto label_38e5f0;
        case 0x38e5f4u: goto label_38e5f4;
        case 0x38e5f8u: goto label_38e5f8;
        case 0x38e5fcu: goto label_38e5fc;
        case 0x38e600u: goto label_38e600;
        case 0x38e604u: goto label_38e604;
        case 0x38e608u: goto label_38e608;
        case 0x38e60cu: goto label_38e60c;
        case 0x38e610u: goto label_38e610;
        case 0x38e614u: goto label_38e614;
        case 0x38e618u: goto label_38e618;
        case 0x38e61cu: goto label_38e61c;
        case 0x38e620u: goto label_38e620;
        case 0x38e624u: goto label_38e624;
        case 0x38e628u: goto label_38e628;
        case 0x38e62cu: goto label_38e62c;
        case 0x38e630u: goto label_38e630;
        case 0x38e634u: goto label_38e634;
        case 0x38e638u: goto label_38e638;
        case 0x38e63cu: goto label_38e63c;
        case 0x38e640u: goto label_38e640;
        case 0x38e644u: goto label_38e644;
        case 0x38e648u: goto label_38e648;
        case 0x38e64cu: goto label_38e64c;
        case 0x38e650u: goto label_38e650;
        case 0x38e654u: goto label_38e654;
        case 0x38e658u: goto label_38e658;
        case 0x38e65cu: goto label_38e65c;
        case 0x38e660u: goto label_38e660;
        case 0x38e664u: goto label_38e664;
        case 0x38e668u: goto label_38e668;
        case 0x38e66cu: goto label_38e66c;
        case 0x38e670u: goto label_38e670;
        case 0x38e674u: goto label_38e674;
        case 0x38e678u: goto label_38e678;
        case 0x38e67cu: goto label_38e67c;
        case 0x38e680u: goto label_38e680;
        case 0x38e684u: goto label_38e684;
        case 0x38e688u: goto label_38e688;
        case 0x38e68cu: goto label_38e68c;
        case 0x38e690u: goto label_38e690;
        case 0x38e694u: goto label_38e694;
        case 0x38e698u: goto label_38e698;
        case 0x38e69cu: goto label_38e69c;
        case 0x38e6a0u: goto label_38e6a0;
        case 0x38e6a4u: goto label_38e6a4;
        case 0x38e6a8u: goto label_38e6a8;
        case 0x38e6acu: goto label_38e6ac;
        case 0x38e6b0u: goto label_38e6b0;
        case 0x38e6b4u: goto label_38e6b4;
        case 0x38e6b8u: goto label_38e6b8;
        case 0x38e6bcu: goto label_38e6bc;
        case 0x38e6c0u: goto label_38e6c0;
        case 0x38e6c4u: goto label_38e6c4;
        case 0x38e6c8u: goto label_38e6c8;
        case 0x38e6ccu: goto label_38e6cc;
        case 0x38e6d0u: goto label_38e6d0;
        case 0x38e6d4u: goto label_38e6d4;
        case 0x38e6d8u: goto label_38e6d8;
        case 0x38e6dcu: goto label_38e6dc;
        case 0x38e6e0u: goto label_38e6e0;
        case 0x38e6e4u: goto label_38e6e4;
        case 0x38e6e8u: goto label_38e6e8;
        case 0x38e6ecu: goto label_38e6ec;
        case 0x38e6f0u: goto label_38e6f0;
        case 0x38e6f4u: goto label_38e6f4;
        case 0x38e6f8u: goto label_38e6f8;
        case 0x38e6fcu: goto label_38e6fc;
        case 0x38e700u: goto label_38e700;
        case 0x38e704u: goto label_38e704;
        case 0x38e708u: goto label_38e708;
        case 0x38e70cu: goto label_38e70c;
        case 0x38e710u: goto label_38e710;
        case 0x38e714u: goto label_38e714;
        case 0x38e718u: goto label_38e718;
        case 0x38e71cu: goto label_38e71c;
        case 0x38e720u: goto label_38e720;
        case 0x38e724u: goto label_38e724;
        case 0x38e728u: goto label_38e728;
        case 0x38e72cu: goto label_38e72c;
        case 0x38e730u: goto label_38e730;
        case 0x38e734u: goto label_38e734;
        case 0x38e738u: goto label_38e738;
        case 0x38e73cu: goto label_38e73c;
        case 0x38e740u: goto label_38e740;
        case 0x38e744u: goto label_38e744;
        case 0x38e748u: goto label_38e748;
        case 0x38e74cu: goto label_38e74c;
        case 0x38e750u: goto label_38e750;
        case 0x38e754u: goto label_38e754;
        case 0x38e758u: goto label_38e758;
        case 0x38e75cu: goto label_38e75c;
        case 0x38e760u: goto label_38e760;
        case 0x38e764u: goto label_38e764;
        case 0x38e768u: goto label_38e768;
        case 0x38e76cu: goto label_38e76c;
        case 0x38e770u: goto label_38e770;
        case 0x38e774u: goto label_38e774;
        case 0x38e778u: goto label_38e778;
        case 0x38e77cu: goto label_38e77c;
        case 0x38e780u: goto label_38e780;
        case 0x38e784u: goto label_38e784;
        case 0x38e788u: goto label_38e788;
        case 0x38e78cu: goto label_38e78c;
        case 0x38e790u: goto label_38e790;
        case 0x38e794u: goto label_38e794;
        case 0x38e798u: goto label_38e798;
        case 0x38e79cu: goto label_38e79c;
        case 0x38e7a0u: goto label_38e7a0;
        case 0x38e7a4u: goto label_38e7a4;
        case 0x38e7a8u: goto label_38e7a8;
        case 0x38e7acu: goto label_38e7ac;
        case 0x38e7b0u: goto label_38e7b0;
        case 0x38e7b4u: goto label_38e7b4;
        case 0x38e7b8u: goto label_38e7b8;
        case 0x38e7bcu: goto label_38e7bc;
        case 0x38e7c0u: goto label_38e7c0;
        case 0x38e7c4u: goto label_38e7c4;
        case 0x38e7c8u: goto label_38e7c8;
        case 0x38e7ccu: goto label_38e7cc;
        case 0x38e7d0u: goto label_38e7d0;
        case 0x38e7d4u: goto label_38e7d4;
        case 0x38e7d8u: goto label_38e7d8;
        case 0x38e7dcu: goto label_38e7dc;
        case 0x38e7e0u: goto label_38e7e0;
        case 0x38e7e4u: goto label_38e7e4;
        case 0x38e7e8u: goto label_38e7e8;
        case 0x38e7ecu: goto label_38e7ec;
        case 0x38e7f0u: goto label_38e7f0;
        case 0x38e7f4u: goto label_38e7f4;
        case 0x38e7f8u: goto label_38e7f8;
        case 0x38e7fcu: goto label_38e7fc;
        case 0x38e800u: goto label_38e800;
        case 0x38e804u: goto label_38e804;
        case 0x38e808u: goto label_38e808;
        case 0x38e80cu: goto label_38e80c;
        case 0x38e810u: goto label_38e810;
        case 0x38e814u: goto label_38e814;
        case 0x38e818u: goto label_38e818;
        case 0x38e81cu: goto label_38e81c;
        case 0x38e820u: goto label_38e820;
        case 0x38e824u: goto label_38e824;
        case 0x38e828u: goto label_38e828;
        case 0x38e82cu: goto label_38e82c;
        case 0x38e830u: goto label_38e830;
        case 0x38e834u: goto label_38e834;
        case 0x38e838u: goto label_38e838;
        case 0x38e83cu: goto label_38e83c;
        case 0x38e840u: goto label_38e840;
        case 0x38e844u: goto label_38e844;
        case 0x38e848u: goto label_38e848;
        case 0x38e84cu: goto label_38e84c;
        case 0x38e850u: goto label_38e850;
        case 0x38e854u: goto label_38e854;
        case 0x38e858u: goto label_38e858;
        case 0x38e85cu: goto label_38e85c;
        case 0x38e860u: goto label_38e860;
        case 0x38e864u: goto label_38e864;
        case 0x38e868u: goto label_38e868;
        case 0x38e86cu: goto label_38e86c;
        case 0x38e870u: goto label_38e870;
        case 0x38e874u: goto label_38e874;
        case 0x38e878u: goto label_38e878;
        case 0x38e87cu: goto label_38e87c;
        case 0x38e880u: goto label_38e880;
        case 0x38e884u: goto label_38e884;
        case 0x38e888u: goto label_38e888;
        case 0x38e88cu: goto label_38e88c;
        case 0x38e890u: goto label_38e890;
        case 0x38e894u: goto label_38e894;
        case 0x38e898u: goto label_38e898;
        case 0x38e89cu: goto label_38e89c;
        case 0x38e8a0u: goto label_38e8a0;
        case 0x38e8a4u: goto label_38e8a4;
        case 0x38e8a8u: goto label_38e8a8;
        case 0x38e8acu: goto label_38e8ac;
        case 0x38e8b0u: goto label_38e8b0;
        case 0x38e8b4u: goto label_38e8b4;
        case 0x38e8b8u: goto label_38e8b8;
        case 0x38e8bcu: goto label_38e8bc;
        case 0x38e8c0u: goto label_38e8c0;
        case 0x38e8c4u: goto label_38e8c4;
        case 0x38e8c8u: goto label_38e8c8;
        case 0x38e8ccu: goto label_38e8cc;
        case 0x38e8d0u: goto label_38e8d0;
        case 0x38e8d4u: goto label_38e8d4;
        case 0x38e8d8u: goto label_38e8d8;
        case 0x38e8dcu: goto label_38e8dc;
        case 0x38e8e0u: goto label_38e8e0;
        case 0x38e8e4u: goto label_38e8e4;
        case 0x38e8e8u: goto label_38e8e8;
        case 0x38e8ecu: goto label_38e8ec;
        case 0x38e8f0u: goto label_38e8f0;
        case 0x38e8f4u: goto label_38e8f4;
        case 0x38e8f8u: goto label_38e8f8;
        case 0x38e8fcu: goto label_38e8fc;
        case 0x38e900u: goto label_38e900;
        case 0x38e904u: goto label_38e904;
        case 0x38e908u: goto label_38e908;
        case 0x38e90cu: goto label_38e90c;
        case 0x38e910u: goto label_38e910;
        case 0x38e914u: goto label_38e914;
        case 0x38e918u: goto label_38e918;
        case 0x38e91cu: goto label_38e91c;
        case 0x38e920u: goto label_38e920;
        case 0x38e924u: goto label_38e924;
        case 0x38e928u: goto label_38e928;
        case 0x38e92cu: goto label_38e92c;
        case 0x38e930u: goto label_38e930;
        case 0x38e934u: goto label_38e934;
        case 0x38e938u: goto label_38e938;
        case 0x38e93cu: goto label_38e93c;
        case 0x38e940u: goto label_38e940;
        case 0x38e944u: goto label_38e944;
        case 0x38e948u: goto label_38e948;
        case 0x38e94cu: goto label_38e94c;
        case 0x38e950u: goto label_38e950;
        case 0x38e954u: goto label_38e954;
        case 0x38e958u: goto label_38e958;
        case 0x38e95cu: goto label_38e95c;
        case 0x38e960u: goto label_38e960;
        case 0x38e964u: goto label_38e964;
        case 0x38e968u: goto label_38e968;
        case 0x38e96cu: goto label_38e96c;
        case 0x38e970u: goto label_38e970;
        case 0x38e974u: goto label_38e974;
        case 0x38e978u: goto label_38e978;
        case 0x38e97cu: goto label_38e97c;
        case 0x38e980u: goto label_38e980;
        case 0x38e984u: goto label_38e984;
        case 0x38e988u: goto label_38e988;
        case 0x38e98cu: goto label_38e98c;
        case 0x38e990u: goto label_38e990;
        case 0x38e994u: goto label_38e994;
        case 0x38e998u: goto label_38e998;
        case 0x38e99cu: goto label_38e99c;
        case 0x38e9a0u: goto label_38e9a0;
        case 0x38e9a4u: goto label_38e9a4;
        case 0x38e9a8u: goto label_38e9a8;
        case 0x38e9acu: goto label_38e9ac;
        case 0x38e9b0u: goto label_38e9b0;
        case 0x38e9b4u: goto label_38e9b4;
        case 0x38e9b8u: goto label_38e9b8;
        case 0x38e9bcu: goto label_38e9bc;
        case 0x38e9c0u: goto label_38e9c0;
        case 0x38e9c4u: goto label_38e9c4;
        case 0x38e9c8u: goto label_38e9c8;
        case 0x38e9ccu: goto label_38e9cc;
        case 0x38e9d0u: goto label_38e9d0;
        case 0x38e9d4u: goto label_38e9d4;
        case 0x38e9d8u: goto label_38e9d8;
        case 0x38e9dcu: goto label_38e9dc;
        case 0x38e9e0u: goto label_38e9e0;
        case 0x38e9e4u: goto label_38e9e4;
        case 0x38e9e8u: goto label_38e9e8;
        case 0x38e9ecu: goto label_38e9ec;
        case 0x38e9f0u: goto label_38e9f0;
        case 0x38e9f4u: goto label_38e9f4;
        case 0x38e9f8u: goto label_38e9f8;
        case 0x38e9fcu: goto label_38e9fc;
        case 0x38ea00u: goto label_38ea00;
        case 0x38ea04u: goto label_38ea04;
        case 0x38ea08u: goto label_38ea08;
        case 0x38ea0cu: goto label_38ea0c;
        case 0x38ea10u: goto label_38ea10;
        case 0x38ea14u: goto label_38ea14;
        case 0x38ea18u: goto label_38ea18;
        case 0x38ea1cu: goto label_38ea1c;
        case 0x38ea20u: goto label_38ea20;
        case 0x38ea24u: goto label_38ea24;
        case 0x38ea28u: goto label_38ea28;
        case 0x38ea2cu: goto label_38ea2c;
        case 0x38ea30u: goto label_38ea30;
        case 0x38ea34u: goto label_38ea34;
        case 0x38ea38u: goto label_38ea38;
        case 0x38ea3cu: goto label_38ea3c;
        case 0x38ea40u: goto label_38ea40;
        case 0x38ea44u: goto label_38ea44;
        case 0x38ea48u: goto label_38ea48;
        case 0x38ea4cu: goto label_38ea4c;
        case 0x38ea50u: goto label_38ea50;
        case 0x38ea54u: goto label_38ea54;
        case 0x38ea58u: goto label_38ea58;
        case 0x38ea5cu: goto label_38ea5c;
        case 0x38ea60u: goto label_38ea60;
        case 0x38ea64u: goto label_38ea64;
        case 0x38ea68u: goto label_38ea68;
        case 0x38ea6cu: goto label_38ea6c;
        case 0x38ea70u: goto label_38ea70;
        case 0x38ea74u: goto label_38ea74;
        case 0x38ea78u: goto label_38ea78;
        case 0x38ea7cu: goto label_38ea7c;
        case 0x38ea80u: goto label_38ea80;
        case 0x38ea84u: goto label_38ea84;
        case 0x38ea88u: goto label_38ea88;
        case 0x38ea8cu: goto label_38ea8c;
        case 0x38ea90u: goto label_38ea90;
        case 0x38ea94u: goto label_38ea94;
        case 0x38ea98u: goto label_38ea98;
        case 0x38ea9cu: goto label_38ea9c;
        case 0x38eaa0u: goto label_38eaa0;
        case 0x38eaa4u: goto label_38eaa4;
        case 0x38eaa8u: goto label_38eaa8;
        case 0x38eaacu: goto label_38eaac;
        default: break;
    }

    ctx->pc = 0x38e4f0u;

label_38e4f0:
    // 0x38e4f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x38e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_38e4f4:
    // 0x38e4f4: 0x3122000e  andi        $v0, $t1, 0xE
    ctx->pc = 0x38e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)14);
label_38e4f8:
    // 0x38e4f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x38e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_38e4fc:
    // 0x38e4fc: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x38e4fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
label_38e500:
    // 0x38e500: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x38e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_38e504:
    // 0x38e504: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x38e504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_38e508:
    // 0x38e508: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x38e508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e50c:
    // 0x38e50c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38e510:
    // 0x38e510: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x38e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_38e514:
    // 0x38e514: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x38e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_38e518:
    // 0x38e518: 0x26a3ffbb  addiu       $v1, $s5, -0x45
    ctx->pc = 0x38e518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967227));
label_38e51c:
    // 0x38e51c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x38e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_38e520:
    // 0x38e520: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38e520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e524:
    // 0x38e524: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x38e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_38e528:
    // 0x38e528: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38e528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e52c:
    // 0x38e52c: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x38e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
label_38e530:
    // 0x38e530: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x38e530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38e534:
    // 0x38e534: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x38e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_38e538:
    // 0x38e538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38e538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e53c:
    // 0x38e53c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x38e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_38e540:
    // 0x38e540: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38e540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e544:
    // 0x38e544: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x38e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_38e548:
    // 0x38e548: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x38e548u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e54c:
    // 0x38e54c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x38e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_38e550:
    // 0x38e550: 0x2c620023  sltiu       $v0, $v1, 0x23
    ctx->pc = 0x38e550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_38e554:
    // 0x38e554: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x38e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_38e558:
    // 0x38e558: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x38e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_38e55c:
    // 0x38e55c: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x38e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_38e560:
    // 0x38e560: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_38e564:
    if (ctx->pc == 0x38E564u) {
        ctx->pc = 0x38E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E560u;
        // 0x38e564: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E568u;
        goto label_38e568;
    }
    ctx->pc = 0x38E560u;
    {
        const bool branch_taken_0x38e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E560u;
        // 0x38e564: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e560) {
            ctx->pc = 0x38E5CCu;
            goto label_38e5cc;
        }
    }
    ctx->pc = 0x38E568u;
label_38e568:
    // 0x38e568: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38e56c:
    // 0x38e56c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38e570:
    // 0x38e570: 0x2442d800  addiu       $v0, $v0, -0x2800
    ctx->pc = 0x38e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957056));
label_38e574:
    // 0x38e574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38e578:
    // 0x38e578: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38e57c:
    // 0x38e57c: 0x800008  jr          $a0
label_38e580:
    if (ctx->pc == 0x38E580u) {
        ctx->pc = 0x38E584u;
        goto label_38e584;
    }
    ctx->pc = 0x38E57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38E584u: goto label_38e584;
            case 0x38E58Cu: goto label_38e58c;
            case 0x38E5A0u: goto label_38e5a0;
            case 0x38E5CCu: goto label_38e5cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E57Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38E584u;
label_38e584:
    // 0x38e584: 0x10000011  b           . + 4 + (0x11 << 2)
label_38e588:
    if (ctx->pc == 0x38E588u) {
        ctx->pc = 0x38E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E584u;
        // 0x38e588: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E58Cu;
        goto label_38e58c;
    }
    ctx->pc = 0x38E584u;
    {
        const bool branch_taken_0x38e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E584u;
        // 0x38e588: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e584) {
            ctx->pc = 0x38E5CCu;
            goto label_38e5cc;
        }
    }
    ctx->pc = 0x38E58Cu;
label_38e58c:
    // 0x38e58c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x38e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38e590:
    // 0x38e590: 0x3a0203e7  xori        $v0, $s0, 0x3E7
    ctx->pc = 0x38e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)999);
label_38e594:
    // 0x38e594: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x38e594u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_38e598:
    // 0x38e598: 0x1000000b  b           . + 4 + (0xB << 2)
label_38e59c:
    if (ctx->pc == 0x38E59Cu) {
        ctx->pc = 0x38E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E598u;
        // 0x38e59c: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5A0u;
        goto label_38e5a0;
    }
    ctx->pc = 0x38E598u;
    {
        const bool branch_taken_0x38e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E598u;
        // 0x38e59c: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e598) {
            ctx->pc = 0x38E5C8u;
            goto label_38e5c8;
        }
    }
    ctx->pc = 0x38E5A0u;
label_38e5a0:
    // 0x38e5a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e5a4:
    // 0x38e5a4: 0x3aa30067  xori        $v1, $s5, 0x67
    ctx->pc = 0x38e5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)103);
label_38e5a8:
    // 0x38e5a8: 0x31240100  andi        $a0, $t1, 0x100
    ctx->pc = 0x38e5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
label_38e5ac:
    // 0x38e5ac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38e5acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e5b0:
    // 0x38e5b0: 0x24170045  addiu       $s7, $zero, 0x45
    ctx->pc = 0x38e5b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_38e5b4:
    // 0x38e5b4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x38e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_38e5b8:
    // 0x38e5b8: 0x43b80a  movz        $s7, $v0, $v1
    ctx->pc = 0x38e5b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_38e5bc:
    // 0x38e5bc: 0x4500b  movn        $t2, $zero, $a0
    ctx->pc = 0x38e5bcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_38e5c0:
    // 0x38e5c0: 0xb0800a  movz        $s0, $a1, $s0
    ctx->pc = 0x38e5c0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_38e5c4:
    // 0x38e5c4: 0x24150067  addiu       $s5, $zero, 0x67
    ctx->pc = 0x38e5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_38e5c8:
    // 0x38e5c8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x38e5c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e5cc:
    // 0x38e5cc: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x38e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_38e5d0:
    // 0x38e5d0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_38e5d4:
    if (ctx->pc == 0x38E5D4u) {
        ctx->pc = 0x38E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5D0u;
        // 0x38e5d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5D8u;
        goto label_38e5d8;
    }
    ctx->pc = 0x38E5D0u;
    {
        const bool branch_taken_0x38e5d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5D0u;
        // 0x38e5d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5d0) {
            ctx->pc = 0x38E5E0u;
            goto label_38e5e0;
        }
    }
    ctx->pc = 0x38E5D8u;
label_38e5d8:
    // 0x38e5d8: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x38e5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_38e5dc:
    // 0x38e5dc: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x38e5dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_38e5e0:
    // 0x38e5e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38e5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38e5e4:
    // 0x38e5e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e5e8:
    // 0x38e5e8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x38e5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38e5ec:
    // 0x38e5ec: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x38e5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_38e5f0:
    // 0x38e5f0: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x38e5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_38e5f4:
    // 0x38e5f4: 0xc0e4556  jal         func_391558
label_38e5f8:
    if (ctx->pc == 0x38E5F8u) {
        ctx->pc = 0x38E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5F4u;
        // 0x38e5f8: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5FCu;
        goto label_38e5fc;
    }
    ctx->pc = 0x38E5F4u;
    SET_GPR_U32(ctx, 31, 0x38E5FCu);
    ctx->pc = 0x38E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5F4u;
    // 0x38e5f8: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391558u, 0x38E5F4u, 0x38E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5FCu;
label_38e5fc:
    // 0x38e5fc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x38e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_38e600:
    // 0x38e600: 0x27b6000c  addiu       $s6, $sp, 0xC
    ctx->pc = 0x38e600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_38e604:
    // 0x38e604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x38e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_38e608:
    // 0x38e608: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38e608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38e60c:
    // 0x38e60c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x38e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38e610:
    // 0x38e610: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x38e610u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38e614:
    // 0x38e614: 0x448823  subu        $s1, $v0, $a0
    ctx->pc = 0x38e614u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_38e618:
    // 0x38e618: 0x1283002c  beq         $s4, $v1, . + 4 + (0x2C << 2)
label_38e61c:
    if (ctx->pc == 0x38E61Cu) {
        ctx->pc = 0x38E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E618u;
        // 0x38e61c: 0x234800a  movz        $s0, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E620u;
        goto label_38e620;
    }
    ctx->pc = 0x38E618u;
    {
        const bool branch_taken_0x38e618 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x38E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E618u;
        // 0x38e61c: 0x234800a  movz        $s0, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e618) {
            ctx->pc = 0x38E6CCu;
            goto label_38e6cc;
        }
    }
    ctx->pc = 0x38E620u;
label_38e620:
    // 0x38e620: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x38e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38e624:
    // 0x38e624: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x38e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_38e628:
    // 0x38e628: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_38e62c:
    if (ctx->pc == 0x38E62Cu) {
        ctx->pc = 0x38E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E628u;
        // 0x38e62c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E630u;
        goto label_38e630;
    }
    ctx->pc = 0x38E628u;
    {
        const bool branch_taken_0x38e628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E628u;
        // 0x38e62c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e628) {
            ctx->pc = 0x38E6D4u;
            goto label_38e6d4;
        }
    }
    ctx->pc = 0x38E630u;
label_38e630:
    // 0x38e630: 0x12a20004  beq         $s5, $v0, . + 4 + (0x4 << 2)
label_38e634:
    if (ctx->pc == 0x38E634u) {
        ctx->pc = 0x38E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E630u;
        // 0x38e634: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E638u;
        goto label_38e638;
    }
    ctx->pc = 0x38E630u;
    {
        const bool branch_taken_0x38e630 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E630u;
        // 0x38e634: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e630) {
            ctx->pc = 0x38E644u;
            goto label_38e644;
        }
    }
    ctx->pc = 0x38E638u;
label_38e638:
    // 0x38e638: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x38e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_38e63c:
    // 0x38e63c: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_38e640:
    if (ctx->pc == 0x38E640u) {
        ctx->pc = 0x38E644u;
        goto label_38e644;
    }
    ctx->pc = 0x38E63Cu;
    {
        const bool branch_taken_0x38e63c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e63c) {
            ctx->pc = 0x38E658u;
            goto label_38e658;
        }
    }
    ctx->pc = 0x38E644u;
label_38e644:
    // 0x38e644: 0x2882fffc  slti        $v0, $a0, -0x4
    ctx->pc = 0x38e644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
label_38e648:
    // 0x38e648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38e64c:
    if (ctx->pc == 0x38E64Cu) {
        ctx->pc = 0x38E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E648u;
        // 0x38e64c: 0x90102a  slt         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E650u;
        goto label_38e650;
    }
    ctx->pc = 0x38E648u;
    {
        const bool branch_taken_0x38e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E648u;
        // 0x38e64c: 0x90102a  slt         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e648) {
            ctx->pc = 0x38E658u;
            goto label_38e658;
        }
    }
    ctx->pc = 0x38E650u;
label_38e650:
    // 0x38e650: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_38e654:
    if (ctx->pc == 0x38E654u) {
        ctx->pc = 0x38E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E650u;
        // 0x38e654: 0x3a850001  xori        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E658u;
        goto label_38e658;
    }
    ctx->pc = 0x38E650u;
    {
        const bool branch_taken_0x38e650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E650u;
        // 0x38e654: 0x3a850001  xori        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e650) {
            ctx->pc = 0x38E6D8u;
            goto label_38e6d8;
        }
    }
    ctx->pc = 0x38E658u;
label_38e658:
    // 0x38e658: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_38e65c:
    if (ctx->pc == 0x38E65Cu) {
        ctx->pc = 0x38E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E658u;
        // 0x38e65c: 0x2409002b  addiu       $t1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E660u;
        goto label_38e660;
    }
    ctx->pc = 0x38E658u;
    {
        const bool branch_taken_0x38e658 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x38E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E658u;
        // 0x38e65c: 0x2409002b  addiu       $t1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e658) {
            ctx->pc = 0x38E668u;
            goto label_38e668;
        }
    }
    ctx->pc = 0x38E660u;
label_38e660:
    // 0x38e660: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x38e660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_38e664:
    // 0x38e664: 0x42023  negu        $a0, $a0
    ctx->pc = 0x38e664u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_38e668:
    // 0x38e668: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x38e668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_38e66c:
    // 0x38e66c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x38e66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38e670:
    // 0x38e670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38e670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e674:
    // 0x38e674: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x38e674u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_38e678:
    // 0x38e678: 0x50e80001  beql        $a3, $t0, . + 4 + (0x1 << 2)
label_38e67c:
    if (ctx->pc == 0x38E67Cu) {
        ctx->pc = 0x38E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E678u;
        // 0x38e67c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E680u;
        goto label_38e680;
    }
    ctx->pc = 0x38E678u;
    {
        const bool branch_taken_0x38e678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x38e678) {
            ctx->pc = 0x38E67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E678u;
            // 0x38e67c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E680u;
            goto label_38e680;
        }
    }
    ctx->pc = 0x38E680u;
label_38e680:
    // 0x38e680: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x38e680u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_38e684:
    // 0x38e684: 0x1010  mfhi        $v0
    ctx->pc = 0x38e684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_38e688:
    // 0x38e688: 0x3012  mflo        $a2
    ctx->pc = 0x38e688u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_38e68c:
    // 0x38e68c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x38e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_38e690:
    // 0x38e690: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38e690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e694:
    // 0x38e694: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x38e694u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_38e698:
    // 0x38e698: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x38e698u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_38e69c:
    // 0x38e69c: 0x50e80001  beql        $a3, $t0, . + 4 + (0x1 << 2)
label_38e6a0:
    if (ctx->pc == 0x38E6A0u) {
        ctx->pc = 0x38E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E69Cu;
        // 0x38e6a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6A4u;
        goto label_38e6a4;
    }
    ctx->pc = 0x38E69Cu;
    {
        const bool branch_taken_0x38e69c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x38e69c) {
            ctx->pc = 0x38E6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E69Cu;
            // 0x38e6a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E6A4u;
            goto label_38e6a4;
        }
    }
    ctx->pc = 0x38E6A4u;
label_38e6a4:
    // 0x38e6a4: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_38e6a8:
    if (ctx->pc == 0x38E6A8u) {
        ctx->pc = 0x38E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6A4u;
        // 0x38e6a8: 0x87001a  div         $zero, $a0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6ACu;
        goto label_38e6ac;
    }
    ctx->pc = 0x38E6A4u;
    {
        const bool branch_taken_0x38e6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e6a4) {
            ctx->pc = 0x38E6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E6A4u;
            // 0x38e6a8: 0x87001a  div         $zero, $a0, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e678;
        }
    }
    ctx->pc = 0x38E6ACu;
label_38e6ac:
    // 0x38e6ac: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x38e6acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_38e6b0:
    // 0x38e6b0: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x38e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_38e6b4:
    // 0x38e6b4: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x38e6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_38e6b8:
    // 0x38e6b8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x38e6b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_38e6bc:
    // 0x38e6bc: 0xa2c90000  sb          $t1, 0x0($s6)
    ctx->pc = 0x38e6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 9));
label_38e6c0:
    // 0x38e6c0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x38e6c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_38e6c4:
    // 0x38e6c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_38e6c8:
    if (ctx->pc == 0x38E6C8u) {
        ctx->pc = 0x38E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6C4u;
        // 0x38e6c8: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6CCu;
        goto label_38e6cc;
    }
    ctx->pc = 0x38E6C4u;
    {
        const bool branch_taken_0x38e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6C4u;
        // 0x38e6c8: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6c4) {
            ctx->pc = 0x38E6D8u;
            goto label_38e6d8;
        }
    }
    ctx->pc = 0x38E6CCu;
label_38e6cc:
    // 0x38e6cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_38e6d0:
    if (ctx->pc == 0x38E6D0u) {
        ctx->pc = 0x38E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6CCu;
        // 0x38e6d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6D4u;
        goto label_38e6d4;
    }
    ctx->pc = 0x38E6CCu;
    {
        const bool branch_taken_0x38e6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6CCu;
        // 0x38e6d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6cc) {
            ctx->pc = 0x38E6D8u;
            goto label_38e6d8;
        }
    }
    ctx->pc = 0x38E6D4u;
label_38e6d4:
    // 0x38e6d4: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x38e6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_38e6d8:
    // 0x38e6d8: 0x26c2fff4  addiu       $v0, $s6, -0xC
    ctx->pc = 0x38e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967284));
label_38e6dc:
    // 0x38e6dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e6e0:
    // 0x38e6e0: 0x3a2f023  subu        $fp, $sp, $v0
    ctx->pc = 0x38e6e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_38e6e4:
    // 0x38e6e4: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_38e6e8:
    if (ctx->pc == 0x38E6E8u) {
        ctx->pc = 0x38E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E4u;
        // 0x38e6e8: 0x65800a  movz        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6ECu;
        goto label_38e6ec;
    }
    ctx->pc = 0x38E6E4u;
    {
        const bool branch_taken_0x38e6e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E4u;
        // 0x38e6e8: 0x65800a  movz        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6e4) {
            ctx->pc = 0x38E6F0u;
            goto label_38e6f0;
        }
    }
    ctx->pc = 0x38E6ECu;
label_38e6ec:
    // 0x38e6ec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x38e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_38e6f0:
    // 0x38e6f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x38e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38e6f4:
    // 0x38e6f4: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x38e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_38e6f8:
    // 0x38e6f8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_38e6fc:
    if (ctx->pc == 0x38E6FCu) {
        ctx->pc = 0x38E700u;
        goto label_38e700;
    }
    ctx->pc = 0x38E6F8u;
    {
        const bool branch_taken_0x38e6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e6f8) {
            ctx->pc = 0x38E710u;
            goto label_38e710;
        }
    }
    ctx->pc = 0x38E700u;
label_38e700:
    // 0x38e700: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x38e700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_38e704:
    // 0x38e704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38e704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e708:
    // 0x38e708: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x38e708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_38e70c:
    // 0x38e70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e710:
    // 0x38e710: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_38e714:
    if (ctx->pc == 0x38E714u) {
        ctx->pc = 0x38E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E710u;
        // 0x38e714: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E718u;
        goto label_38e718;
    }
    ctx->pc = 0x38E710u;
    {
        const bool branch_taken_0x38e710 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E710u;
        // 0x38e714: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e710) {
            ctx->pc = 0x38E74Cu;
            goto label_38e74c;
        }
    }
    ctx->pc = 0x38E718u;
label_38e718:
    // 0x38e718: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x38e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_38e71c:
    // 0x38e71c: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_38e720:
    if (ctx->pc == 0x38E720u) {
        ctx->pc = 0x38E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E71Cu;
        // 0x38e720: 0x91102a  slt         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E724u;
        goto label_38e724;
    }
    ctx->pc = 0x38E71Cu;
    {
        const bool branch_taken_0x38e71c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E71Cu;
        // 0x38e720: 0x91102a  slt         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e71c) {
            ctx->pc = 0x38E738u;
            goto label_38e738;
        }
    }
    ctx->pc = 0x38E724u;
label_38e724:
    // 0x38e724: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38e728:
    if (ctx->pc == 0x38E728u) {
        ctx->pc = 0x38E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E724u;
        // 0x38e728: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E72Cu;
        goto label_38e72c;
    }
    ctx->pc = 0x38E724u;
    {
        const bool branch_taken_0x38e724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E724u;
        // 0x38e728: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e724) {
            ctx->pc = 0x38E74Cu;
            goto label_38e74c;
        }
    }
    ctx->pc = 0x38E72Cu;
label_38e72c:
    // 0x38e72c: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x38e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_38e730:
    // 0x38e730: 0x10000006  b           . + 4 + (0x6 << 2)
label_38e734:
    if (ctx->pc == 0x38E734u) {
        ctx->pc = 0x38E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E730u;
        // 0x38e734: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E738u;
        goto label_38e738;
    }
    ctx->pc = 0x38E730u;
    {
        const bool branch_taken_0x38e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E730u;
        // 0x38e734: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e730) {
            ctx->pc = 0x38E74Cu;
            goto label_38e74c;
        }
    }
    ctx->pc = 0x38E738u;
label_38e738:
    // 0x38e738: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_38e73c:
    if (ctx->pc == 0x38E73Cu) {
        ctx->pc = 0x38E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E738u;
        // 0x38e73c: 0x211b823  subu        $s7, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E740u;
        goto label_38e740;
    }
    ctx->pc = 0x38E738u;
    {
        const bool branch_taken_0x38e738 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E738u;
        // 0x38e73c: 0x211b823  subu        $s7, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e738) {
            ctx->pc = 0x38E74Cu;
            goto label_38e74c;
        }
    }
    ctx->pc = 0x38E740u;
label_38e740:
    // 0x38e740: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x38e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_38e744:
    // 0x38e744: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x38e744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_38e748:
    // 0x38e748: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x38e748u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_38e74c:
    // 0x38e74c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38e750:
    // 0x38e750: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x38e750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_38e754:
    // 0x38e754: 0x2b80a  movz        $s7, $zero, $v0
    ctx->pc = 0x38e754u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_38e758:
    // 0x38e758: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_38e75c:
    if (ctx->pc == 0x38E75Cu) {
        ctx->pc = 0x38E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E758u;
        // 0x38e75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E760u;
        goto label_38e760;
    }
    ctx->pc = 0x38E758u;
    {
        const bool branch_taken_0x38e758 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E758u;
        // 0x38e75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e758) {
            ctx->pc = 0x38E76Cu;
            goto label_38e76c;
        }
    }
    ctx->pc = 0x38E760u;
label_38e760:
    // 0x38e760: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x38e760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_38e764:
    // 0x38e764: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_38e768:
    if (ctx->pc == 0x38E768u) {
        ctx->pc = 0x38E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E764u;
        // 0x38e768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E76Cu;
        goto label_38e76c;
    }
    ctx->pc = 0x38E764u;
    {
        const bool branch_taken_0x38e764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E764u;
        // 0x38e768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e764) {
            ctx->pc = 0x38E770u;
            goto label_38e770;
        }
    }
    ctx->pc = 0x38E76Cu;
label_38e76c:
    // 0x38e76c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x38e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_38e770:
    // 0x38e770: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x38e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_38e774:
    // 0x38e774: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_38e778:
    if (ctx->pc == 0x38E778u) {
        ctx->pc = 0x38E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E774u;
        // 0x38e778: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E77Cu;
        goto label_38e77c;
    }
    ctx->pc = 0x38E774u;
    {
        const bool branch_taken_0x38e774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E774u;
        // 0x38e778: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e774) {
            ctx->pc = 0x38E78Cu;
            goto label_38e78c;
        }
    }
    ctx->pc = 0x38E77Cu;
label_38e77c:
    // 0x38e77c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x38e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_38e780:
    // 0x38e780: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x38e780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_38e784:
    // 0x38e784: 0x10000009  b           . + 4 + (0x9 << 2)
label_38e788:
    if (ctx->pc == 0x38E788u) {
        ctx->pc = 0x38E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E784u;
        // 0x38e788: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E78Cu;
        goto label_38e78c;
    }
    ctx->pc = 0x38E784u;
    {
        const bool branch_taken_0x38e784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E784u;
        // 0x38e788: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e784) {
            ctx->pc = 0x38E7ACu;
            goto label_38e7ac;
        }
    }
    ctx->pc = 0x38E78Cu;
label_38e78c:
    // 0x38e78c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x38e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_38e790:
    // 0x38e790: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_38e794:
    if (ctx->pc == 0x38E794u) {
        ctx->pc = 0x38E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E790u;
        // 0x38e794: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E798u;
        goto label_38e798;
    }
    ctx->pc = 0x38E790u;
    {
        const bool branch_taken_0x38e790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E790u;
        // 0x38e794: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e790) {
            ctx->pc = 0x38E7A0u;
            goto label_38e7a0;
        }
    }
    ctx->pc = 0x38E798u;
label_38e798:
    // 0x38e798: 0x10000002  b           . + 4 + (0x2 << 2)
label_38e79c:
    if (ctx->pc == 0x38E79Cu) {
        ctx->pc = 0x38E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E798u;
        // 0x38e79c: 0x2414002b  addiu       $s4, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7A0u;
        goto label_38e7a0;
    }
    ctx->pc = 0x38E798u;
    {
        const bool branch_taken_0x38e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E798u;
        // 0x38e79c: 0x2414002b  addiu       $s4, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e798) {
            ctx->pc = 0x38E7A4u;
            goto label_38e7a4;
        }
    }
    ctx->pc = 0x38E7A0u;
label_38e7a0:
    // 0x38e7a0: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x38e7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38e7a4:
    // 0x38e7a4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x38e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_38e7a8:
    // 0x38e7a8: 0x43a00b  movn        $s4, $v0, $v1
    ctx->pc = 0x38e7a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_38e7ac:
    // 0x38e7ac: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_38e7b0:
    if (ctx->pc == 0x38E7B0u) {
        ctx->pc = 0x38E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7ACu;
        // 0x38e7b0: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7B4u;
        goto label_38e7b4;
    }
    ctx->pc = 0x38E7ACu;
    {
        const bool branch_taken_0x38e7ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7ACu;
        // 0x38e7b0: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7ac) {
            ctx->pc = 0x38E7C8u;
            goto label_38e7c8;
        }
    }
    ctx->pc = 0x38E7B4u;
label_38e7b4:
    // 0x38e7b4: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x38e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_38e7b8:
    // 0x38e7b8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x38e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_38e7bc:
    // 0x38e7bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38e7c0:
    // 0x38e7c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_38e7c4:
    if (ctx->pc == 0x38E7C4u) {
        ctx->pc = 0x38E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7C0u;
        // 0x38e7c4: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7C8u;
        goto label_38e7c8;
    }
    ctx->pc = 0x38E7C0u;
    {
        const bool branch_taken_0x38e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7C0u;
        // 0x38e7c4: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7c0) {
            ctx->pc = 0x38E7D8u;
            goto label_38e7d8;
        }
    }
    ctx->pc = 0x38E7C8u;
label_38e7c8:
    // 0x38e7c8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x38e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_38e7cc:
    // 0x38e7cc: 0x2f11821  addu        $v1, $s7, $s1
    ctx->pc = 0x38e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_38e7d0:
    // 0x38e7d0: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x38e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_38e7d4:
    // 0x38e7d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38e7d8:
    // 0x38e7d8: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x38e7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_38e7dc:
    // 0x38e7dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38e7e0:
    if (ctx->pc == 0x38E7E0u) {
        ctx->pc = 0x38E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7DCu;
        // 0x38e7e0: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7E4u;
        goto label_38e7e4;
    }
    ctx->pc = 0x38E7DCu;
    {
        const bool branch_taken_0x38e7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7DCu;
        // 0x38e7e0: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7dc) {
            ctx->pc = 0x38E7ECu;
            goto label_38e7ec;
        }
    }
    ctx->pc = 0x38E7E4u;
label_38e7e4:
    // 0x38e7e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_38e7e8:
    if (ctx->pc == 0x38E7E8u) {
        ctx->pc = 0x38E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7E4u;
        // 0x38e7e8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7ECu;
        goto label_38e7ec;
    }
    ctx->pc = 0x38E7E4u;
    {
        const bool branch_taken_0x38e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7E4u;
        // 0x38e7e8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7e4) {
            ctx->pc = 0x38E7FCu;
            goto label_38e7fc;
        }
    }
    ctx->pc = 0x38E7ECu;
label_38e7ec:
    // 0x38e7ec: 0x5c800003  bgtzl       $a0, . + 4 + (0x3 << 2)
label_38e7f0:
    if (ctx->pc == 0x38E7F0u) {
        ctx->pc = 0x38E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7ECu;
        // 0x38e7f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7F4u;
        goto label_38e7f4;
    }
    ctx->pc = 0x38E7ECu;
    {
        const bool branch_taken_0x38e7ec = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x38e7ec) {
            ctx->pc = 0x38E7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E7ECu;
            // 0x38e7f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E7FCu;
            goto label_38e7fc;
        }
    }
    ctx->pc = 0x38E7F4u;
label_38e7f4:
    // 0x38e7f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38e7f8:
    // 0x38e7f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x38e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_38e7fc:
    // 0x38e7fc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x38e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_38e800:
    // 0x38e800: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38e800u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e804:
    // 0x38e804: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x38e804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38e808:
    // 0x38e808: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38e808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_38e80c:
    // 0x38e80c: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x38e80cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_38e810:
    // 0x38e810: 0x1aa0000d  blez        $s5, . + 4 + (0xD << 2)
label_38e814:
    if (ctx->pc == 0x38E814u) {
        ctx->pc = 0x38E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E810u;
        // 0x38e814: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E818u;
        goto label_38e818;
    }
    ctx->pc = 0x38E810u;
    {
        const bool branch_taken_0x38e810 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x38E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E810u;
        // 0x38e814: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e810) {
            ctx->pc = 0x38E848u;
            goto label_38e848;
        }
    }
    ctx->pc = 0x38E818u;
label_38e818:
    // 0x38e818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e81c:
    // 0x38e81c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_38e820:
    if (ctx->pc == 0x38E820u) {
        ctx->pc = 0x38E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E81Cu;
        // 0x38e820: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E824u;
        goto label_38e824;
    }
    ctx->pc = 0x38E81Cu;
    {
        const bool branch_taken_0x38e81c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E81Cu;
        // 0x38e820: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e81c) {
            ctx->pc = 0x38E848u;
            goto label_38e848;
        }
    }
    ctx->pc = 0x38E824u;
label_38e824:
    // 0x38e824: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_38e828:
    if (ctx->pc == 0x38E828u) {
        ctx->pc = 0x38E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E824u;
        // 0x38e828: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E82Cu;
        goto label_38e82c;
    }
    ctx->pc = 0x38E824u;
    {
        const bool branch_taken_0x38e824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E824u;
        // 0x38e828: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e824) {
            ctx->pc = 0x38E848u;
            goto label_38e848;
        }
    }
    ctx->pc = 0x38E82Cu;
label_38e82c:
    // 0x38e82c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x38e82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38e830:
    // 0x38e830: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x38e830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38e834:
    // 0x38e834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e838:
    // 0x38e838: 0xc0e384e  jal         func_38E138
label_38e83c:
    if (ctx->pc == 0x38E83Cu) {
        ctx->pc = 0x38E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E838u;
        // 0x38e83c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E840u;
        goto label_38e840;
    }
    ctx->pc = 0x38E838u;
    SET_GPR_U32(ctx, 31, 0x38E840u);
    ctx->pc = 0x38E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E838u;
    // 0x38e83c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38E838u, 0x38E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E840u;
label_38e840:
    // 0x38e840: 0x1450008e  bne         $v0, $s0, . + 4 + (0x8E << 2)
label_38e844:
    if (ctx->pc == 0x38E844u) {
        ctx->pc = 0x38E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E840u;
        // 0x38e844: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E848u;
        goto label_38e848;
    }
    ctx->pc = 0x38E840u;
    {
        const bool branch_taken_0x38e840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E840u;
        // 0x38e844: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e840) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38E848u;
label_38e848:
    // 0x38e848: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_38e84c:
    if (ctx->pc == 0x38E84Cu) {
        ctx->pc = 0x38E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E848u;
        // 0x38e84c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E850u;
        goto label_38e850;
    }
    ctx->pc = 0x38E848u;
    {
        const bool branch_taken_0x38e848 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E848u;
        // 0x38e84c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e848) {
            ctx->pc = 0x38E860u;
            goto label_38e860;
        }
    }
    ctx->pc = 0x38E850u;
label_38e850:
    // 0x38e850: 0xc0e3aca  jal         func_38EB28
label_38e854:
    if (ctx->pc == 0x38E854u) {
        ctx->pc = 0x38E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E850u;
        // 0x38e854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E858u;
        goto label_38e858;
    }
    ctx->pc = 0x38E850u;
    SET_GPR_U32(ctx, 31, 0x38E858u);
    ctx->pc = 0x38E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E850u;
    // 0x38e854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38E850u, 0x38E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E858u;
label_38e858:
    // 0x38e858: 0x4400087  bltz        $v0, . + 4 + (0x87 << 2)
label_38e85c:
    if (ctx->pc == 0x38E85Cu) {
        ctx->pc = 0x38E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E858u;
        // 0x38e85c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E860u;
        goto label_38e860;
    }
    ctx->pc = 0x38E858u;
    {
        const bool branch_taken_0x38e858 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E858u;
        // 0x38e85c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e858) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E860u;
label_38e860:
    // 0x38e860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x38e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_38e864:
    // 0x38e864: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38e868:
    // 0x38e868: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_38e86c:
    if (ctx->pc == 0x38E86Cu) {
        ctx->pc = 0x38E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E868u;
        // 0x38e86c: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E870u;
        goto label_38e870;
    }
    ctx->pc = 0x38E868u;
    {
        const bool branch_taken_0x38e868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E868u;
        // 0x38e86c: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e868) {
            ctx->pc = 0x38E89Cu;
            goto label_38e89c;
        }
    }
    ctx->pc = 0x38E870u;
label_38e870:
    // 0x38e870: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
label_38e874:
    if (ctx->pc == 0x38E874u) {
        ctx->pc = 0x38E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E870u;
        // 0x38e874: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E878u;
        goto label_38e878;
    }
    ctx->pc = 0x38E870u;
    {
        const bool branch_taken_0x38e870 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x38E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E870u;
        // 0x38e874: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e870) {
            ctx->pc = 0x38E898u;
            goto label_38e898;
        }
    }
    ctx->pc = 0x38E878u;
label_38e878:
    // 0x38e878: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x38e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_38e87c:
    // 0x38e87c: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x38e87cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_38e880:
    // 0x38e880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e884:
    // 0x38e884: 0xc0e384e  jal         func_38E138
label_38e888:
    if (ctx->pc == 0x38E888u) {
        ctx->pc = 0x38E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E884u;
        // 0x38e888: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E88Cu;
        goto label_38e88c;
    }
    ctx->pc = 0x38E884u;
    SET_GPR_U32(ctx, 31, 0x38E88Cu);
    ctx->pc = 0x38E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E884u;
    // 0x38e888: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38E884u, 0x38E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E88Cu;
label_38e88c:
    // 0x38e88c: 0x1450007b  bne         $v0, $s0, . + 4 + (0x7B << 2)
label_38e890:
    if (ctx->pc == 0x38E890u) {
        ctx->pc = 0x38E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E88Cu;
        // 0x38e890: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E894u;
        goto label_38e894;
    }
    ctx->pc = 0x38E88Cu;
    {
        const bool branch_taken_0x38e88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E88Cu;
        // 0x38e890: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e88c) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38E894u;
label_38e894:
    // 0x38e894: 0x0  nop
    ctx->pc = 0x38e894u;
    // NOP
label_38e898:
    // 0x38e898: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x38e898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38e89c:
    // 0x38e89c: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
label_38e8a0:
    if (ctx->pc == 0x38E8A0u) {
        ctx->pc = 0x38E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E89Cu;
        // 0x38e8a0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8A4u;
        goto label_38e8a4;
    }
    ctx->pc = 0x38E89Cu;
    {
        const bool branch_taken_0x38e89c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x38E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E89Cu;
        // 0x38e8a0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e89c) {
            ctx->pc = 0x38E978u;
            goto label_38e978;
        }
    }
    ctx->pc = 0x38E8A4u;
label_38e8a4:
    // 0x38e8a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_38e8a8:
    if (ctx->pc == 0x38E8A8u) {
        ctx->pc = 0x38E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8A4u;
        // 0x38e8a8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8ACu;
        goto label_38e8ac;
    }
    ctx->pc = 0x38E8A4u;
    {
        const bool branch_taken_0x38e8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8A4u;
        // 0x38e8a8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8a4) {
            ctx->pc = 0x38E8D8u;
            goto label_38e8d8;
        }
    }
    ctx->pc = 0x38E8ACu;
label_38e8ac:
    // 0x38e8ac: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x38e8acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_38e8b0:
    // 0x38e8b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x38e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38e8b4:
    // 0x38e8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e8b8:
    // 0x38e8b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e8bc:
    // 0x38e8bc: 0x40f809  jalr        $v0
label_38e8c0:
    if (ctx->pc == 0x38E8C0u) {
        ctx->pc = 0x38E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8BCu;
        // 0x38e8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8C4u;
        goto label_38e8c4;
    }
    ctx->pc = 0x38E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E8C4u);
        ctx->pc = 0x38E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8BCu;
        // 0x38e8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E8BCu, 0x38E8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E8C4u;
label_38e8c4:
    // 0x38e8c4: 0x1450006c  bne         $v0, $s0, . + 4 + (0x6C << 2)
label_38e8c8:
    if (ctx->pc == 0x38E8C8u) {
        ctx->pc = 0x38E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8C4u;
        // 0x38e8c8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8CCu;
        goto label_38e8cc;
    }
    ctx->pc = 0x38E8C4u;
    {
        const bool branch_taken_0x38e8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8C4u;
        // 0x38e8c8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8c4) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E8CCu;
label_38e8cc:
    // 0x38e8cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_38e8d0:
    if (ctx->pc == 0x38E8D0u) {
        ctx->pc = 0x38E8D4u;
        goto label_38e8d4;
    }
    ctx->pc = 0x38E8CCu;
    {
        const bool branch_taken_0x38e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e8cc) {
            ctx->pc = 0x38E920u;
            goto label_38e920;
        }
    }
    ctx->pc = 0x38E8D4u;
label_38e8d4:
    // 0x38e8d4: 0x0  nop
    ctx->pc = 0x38e8d4u;
    // NOP
label_38e8d8:
    // 0x38e8d8: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x38e8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_38e8dc:
    // 0x38e8dc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x38e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38e8e0:
    // 0x38e8e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e8e4:
    // 0x38e8e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e8e8:
    // 0x38e8e8: 0x40f809  jalr        $v0
label_38e8ec:
    if (ctx->pc == 0x38E8ECu) {
        ctx->pc = 0x38E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8E8u;
        // 0x38e8ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8F0u;
        goto label_38e8f0;
    }
    ctx->pc = 0x38E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E8F0u);
        ctx->pc = 0x38E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8E8u;
        // 0x38e8ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E8E8u, 0x38E8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E8F0u;
label_38e8f0:
    // 0x38e8f0: 0x14510061  bne         $v0, $s1, . + 4 + (0x61 << 2)
label_38e8f4:
    if (ctx->pc == 0x38E8F4u) {
        ctx->pc = 0x38E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8F0u;
        // 0x38e8f4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8F8u;
        goto label_38e8f8;
    }
    ctx->pc = 0x38E8F0u;
    {
        const bool branch_taken_0x38e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x38E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8F0u;
        // 0x38e8f4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8f0) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E8F8u;
label_38e8f8:
    // 0x38e8f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e8fc:
    // 0x38e8fc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x38e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38e900:
    // 0x38e900: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x38e900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_38e904:
    // 0x38e904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e908:
    // 0x38e908: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x38e908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_38e90c:
    // 0x38e90c: 0xc0e384e  jal         func_38E138
label_38e910:
    if (ctx->pc == 0x38E910u) {
        ctx->pc = 0x38E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E90Cu;
        // 0x38e910: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E914u;
        goto label_38e914;
    }
    ctx->pc = 0x38E90Cu;
    SET_GPR_U32(ctx, 31, 0x38E914u);
    ctx->pc = 0x38E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E90Cu;
    // 0x38e910: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38E90Cu, 0x38E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E914u;
label_38e914:
    // 0x38e914: 0x14500058  bne         $v0, $s0, . + 4 + (0x58 << 2)
label_38e918:
    if (ctx->pc == 0x38E918u) {
        ctx->pc = 0x38E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E914u;
        // 0x38e918: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E91Cu;
        goto label_38e91c;
    }
    ctx->pc = 0x38E914u;
    {
        const bool branch_taken_0x38e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E914u;
        // 0x38e918: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e914) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E91Cu;
label_38e91c:
    // 0x38e91c: 0x0  nop
    ctx->pc = 0x38e91cu;
    // NOP
label_38e920:
    // 0x38e920: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_38e924:
    if (ctx->pc == 0x38E924u) {
        ctx->pc = 0x38E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E920u;
        // 0x38e924: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E928u;
        goto label_38e928;
    }
    ctx->pc = 0x38E920u;
    {
        const bool branch_taken_0x38e920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E920u;
        // 0x38e924: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e920) {
            ctx->pc = 0x38E9F0u;
            goto label_38e9f0;
        }
    }
    ctx->pc = 0x38E928u;
label_38e928:
    // 0x38e928: 0xc0e3aca  jal         func_38EB28
label_38e92c:
    if (ctx->pc == 0x38E92Cu) {
        ctx->pc = 0x38E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E928u;
        // 0x38e92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E930u;
        goto label_38e930;
    }
    ctx->pc = 0x38E928u;
    SET_GPR_U32(ctx, 31, 0x38E930u);
    ctx->pc = 0x38E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E928u;
    // 0x38e92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38E928u, 0x38E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E930u;
label_38e930:
    // 0x38e930: 0x4400051  bltz        $v0, . + 4 + (0x51 << 2)
label_38e934:
    if (ctx->pc == 0x38E934u) {
        ctx->pc = 0x38E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E930u;
        // 0x38e934: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E938u;
        goto label_38e938;
    }
    ctx->pc = 0x38E930u;
    {
        const bool branch_taken_0x38e930 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E930u;
        // 0x38e934: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e930) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E938u;
label_38e938:
    // 0x38e938: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x38e938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_38e93c:
    // 0x38e93c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_38e940:
    if (ctx->pc == 0x38E940u) {
        ctx->pc = 0x38E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E93Cu;
        // 0x38e940: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E944u;
        goto label_38e944;
    }
    ctx->pc = 0x38E93Cu;
    {
        const bool branch_taken_0x38e93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E93Cu;
        // 0x38e940: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e93c) {
            ctx->pc = 0x38E9F0u;
            goto label_38e9f0;
        }
    }
    ctx->pc = 0x38E944u;
label_38e944:
    // 0x38e944: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x38e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38e948:
    // 0x38e948: 0x2248023  subu        $s0, $s1, $a0
    ctx->pc = 0x38e948u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_38e94c:
    // 0x38e94c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x38e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38e950:
    // 0x38e950: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x38e950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_38e954:
    // 0x38e954: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x38e954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_38e958:
    // 0x38e958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e95c:
    // 0x38e95c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e960:
    // 0x38e960: 0x40f809  jalr        $v0
label_38e964:
    if (ctx->pc == 0x38E964u) {
        ctx->pc = 0x38E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E960u;
        // 0x38e964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E968u;
        goto label_38e968;
    }
    ctx->pc = 0x38E960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E968u);
        ctx->pc = 0x38E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E960u;
        // 0x38e964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E960u, 0x38E968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E968u;
label_38e968:
    // 0x38e968: 0x14500043  bne         $v0, $s0, . + 4 + (0x43 << 2)
label_38e96c:
    if (ctx->pc == 0x38E96Cu) {
        ctx->pc = 0x38E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E968u;
        // 0x38e96c: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E970u;
        goto label_38e970;
    }
    ctx->pc = 0x38E968u;
    {
        const bool branch_taken_0x38e968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E968u;
        // 0x38e96c: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e968) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E970u;
label_38e970:
    // 0x38e970: 0x10000021  b           . + 4 + (0x21 << 2)
label_38e974:
    if (ctx->pc == 0x38E974u) {
        ctx->pc = 0x38E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E970u;
        // 0x38e974: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E978u;
        goto label_38e978;
    }
    ctx->pc = 0x38E970u;
    {
        const bool branch_taken_0x38e970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E970u;
        // 0x38e974: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e970) {
            ctx->pc = 0x38E9F8u;
            goto label_38e9f8;
        }
    }
    ctx->pc = 0x38E978u;
label_38e978:
    // 0x38e978: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x38e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38e97c:
    // 0x38e97c: 0xc0e3aca  jal         func_38EB28
label_38e980:
    if (ctx->pc == 0x38E980u) {
        ctx->pc = 0x38E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E97Cu;
        // 0x38e980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E984u;
        goto label_38e984;
    }
    ctx->pc = 0x38E97Cu;
    SET_GPR_U32(ctx, 31, 0x38E984u);
    ctx->pc = 0x38E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E97Cu;
    // 0x38e980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38E97Cu, 0x38E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E984u;
label_38e984:
    // 0x38e984: 0x440003c  bltz        $v0, . + 4 + (0x3C << 2)
label_38e988:
    if (ctx->pc == 0x38E988u) {
        ctx->pc = 0x38E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E984u;
        // 0x38e988: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E98Cu;
        goto label_38e98c;
    }
    ctx->pc = 0x38E984u;
    {
        const bool branch_taken_0x38e984 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E984u;
        // 0x38e988: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e984) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E98Cu;
label_38e98c:
    // 0x38e98c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_38e990:
    if (ctx->pc == 0x38E990u) {
        ctx->pc = 0x38E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E98Cu;
        // 0x38e990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E994u;
        goto label_38e994;
    }
    ctx->pc = 0x38E98Cu;
    {
        const bool branch_taken_0x38e98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E98Cu;
        // 0x38e990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e98c) {
            ctx->pc = 0x38E9F0u;
            goto label_38e9f0;
        }
    }
    ctx->pc = 0x38E994u;
label_38e994:
    // 0x38e994: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x38e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_38e998:
    // 0x38e998: 0xc0e3aca  jal         func_38EB28
label_38e99c:
    if (ctx->pc == 0x38E99Cu) {
        ctx->pc = 0x38E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E998u;
        // 0x38e99c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E9A0u;
        goto label_38e9a0;
    }
    ctx->pc = 0x38E998u;
    SET_GPR_U32(ctx, 31, 0x38E9A0u);
    ctx->pc = 0x38E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E998u;
    // 0x38e99c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38E998u, 0x38E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9A0u;
label_38e9a0:
    // 0x38e9a0: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
label_38e9a4:
    if (ctx->pc == 0x38E9A4u) {
        ctx->pc = 0x38E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9A0u;
        // 0x38e9a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E9A8u;
        goto label_38e9a8;
    }
    ctx->pc = 0x38E9A0u;
    {
        const bool branch_taken_0x38e9a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9A0u;
        // 0x38e9a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9a0) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E9A8u;
label_38e9a8:
    // 0x38e9a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38e9ac:
    // 0x38e9ac: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x38e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38e9b0:
    // 0x38e9b0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x38e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_38e9b4:
    // 0x38e9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e9b8:
    // 0x38e9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e9bc:
    // 0x38e9bc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x38e9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_38e9c0:
    // 0x38e9c0: 0xc0e384e  jal         func_38E138
label_38e9c4:
    if (ctx->pc == 0x38E9C4u) {
        ctx->pc = 0x38E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9C0u;
        // 0x38e9c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E9C8u;
        goto label_38e9c8;
    }
    ctx->pc = 0x38E9C0u;
    SET_GPR_U32(ctx, 31, 0x38E9C8u);
    ctx->pc = 0x38E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E9C0u;
    // 0x38e9c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38E9C0u, 0x38E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E9C8u;
label_38e9c8:
    // 0x38e9c8: 0x1450002b  bne         $v0, $s0, . + 4 + (0x2B << 2)
label_38e9cc:
    if (ctx->pc == 0x38E9CCu) {
        ctx->pc = 0x38E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9C8u;
        // 0x38e9cc: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E9D0u;
        goto label_38e9d0;
    }
    ctx->pc = 0x38E9C8u;
    {
        const bool branch_taken_0x38e9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9C8u;
        // 0x38e9cc: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9c8) {
            ctx->pc = 0x38EA78u;
            goto label_38ea78;
        }
    }
    ctx->pc = 0x38E9D0u;
label_38e9d0:
    // 0x38e9d0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x38e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38e9d4:
    // 0x38e9d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x38e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38e9d8:
    // 0x38e9d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e9dc:
    // 0x38e9dc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e9e0:
    // 0x38e9e0: 0x40f809  jalr        $v0
label_38e9e4:
    if (ctx->pc == 0x38E9E4u) {
        ctx->pc = 0x38E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9E0u;
        // 0x38e9e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E9E8u;
        goto label_38e9e8;
    }
    ctx->pc = 0x38E9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E9E8u);
        ctx->pc = 0x38E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9E0u;
        // 0x38e9e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E9E0u, 0x38E9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E9E8u;
label_38e9e8:
    // 0x38e9e8: 0x14510024  bne         $v0, $s1, . + 4 + (0x24 << 2)
label_38e9ec:
    if (ctx->pc == 0x38E9ECu) {
        ctx->pc = 0x38E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9E8u;
        // 0x38e9ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E9F0u;
        goto label_38e9f0;
    }
    ctx->pc = 0x38E9E8u;
    {
        const bool branch_taken_0x38e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x38E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9E8u;
        // 0x38e9ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9e8) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38E9F0u;
label_38e9f0:
    // 0x38e9f0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x38e9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38e9f4:
    // 0x38e9f4: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x38e9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_38e9f8:
    // 0x38e9f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e9fc:
    // 0x38e9fc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x38e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38ea00:
    // 0x38ea00: 0xc0e384e  jal         func_38E138
label_38ea04:
    if (ctx->pc == 0x38EA04u) {
        ctx->pc = 0x38EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA00u;
        // 0x38ea04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA08u;
        goto label_38ea08;
    }
    ctx->pc = 0x38EA00u;
    SET_GPR_U32(ctx, 31, 0x38EA08u);
    ctx->pc = 0x38EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA00u;
    // 0x38ea04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38EA00u, 0x38EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA08u;
label_38ea08:
    // 0x38ea08: 0x1450001c  bne         $v0, $s0, . + 4 + (0x1C << 2)
label_38ea0c:
    if (ctx->pc == 0x38EA0Cu) {
        ctx->pc = 0x38EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA08u;
        // 0x38ea0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA10u;
        goto label_38ea10;
    }
    ctx->pc = 0x38EA08u;
    {
        const bool branch_taken_0x38ea08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA08u;
        // 0x38ea0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea08) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38EA10u;
label_38ea10:
    // 0x38ea10: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_38ea14:
    if (ctx->pc == 0x38EA14u) {
        ctx->pc = 0x38EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA10u;
        // 0x38ea14: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA18u;
        goto label_38ea18;
    }
    ctx->pc = 0x38EA10u;
    {
        const bool branch_taken_0x38ea10 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA10u;
        // 0x38ea14: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea10) {
            ctx->pc = 0x38EA38u;
            goto label_38ea38;
        }
    }
    ctx->pc = 0x38EA18u;
label_38ea18:
    // 0x38ea18: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x38ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38ea1c:
    // 0x38ea1c: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x38ea1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_38ea20:
    // 0x38ea20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38ea24:
    // 0x38ea24: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38ea28:
    // 0x38ea28: 0x40f809  jalr        $v0
label_38ea2c:
    if (ctx->pc == 0x38EA2Cu) {
        ctx->pc = 0x38EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA28u;
        // 0x38ea2c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA30u;
        goto label_38ea30;
    }
    ctx->pc = 0x38EA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38EA30u);
        ctx->pc = 0x38EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA28u;
        // 0x38ea2c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EA28u, 0x38EA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EA30u;
label_38ea30:
    // 0x38ea30: 0x145e0012  bne         $v0, $fp, . + 4 + (0x12 << 2)
label_38ea34:
    if (ctx->pc == 0x38EA34u) {
        ctx->pc = 0x38EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA30u;
        // 0x38ea34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA38u;
        goto label_38ea38;
    }
    ctx->pc = 0x38EA30u;
    {
        const bool branch_taken_0x38ea30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x38EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA30u;
        // 0x38ea34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea30) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38EA38u;
label_38ea38:
    // 0x38ea38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x38ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_38ea3c:
    // 0x38ea3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ea40:
    // 0x38ea40: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
label_38ea44:
    if (ctx->pc == 0x38EA44u) {
        ctx->pc = 0x38EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA40u;
        // 0x38ea44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA48u;
        goto label_38ea48;
    }
    ctx->pc = 0x38EA40u;
    {
        const bool branch_taken_0x38ea40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x38EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA40u;
        // 0x38ea44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea40) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38EA48u;
label_38ea48:
    // 0x38ea48: 0x1aa0000c  blez        $s5, . + 4 + (0xC << 2)
label_38ea4c:
    if (ctx->pc == 0x38EA4Cu) {
        ctx->pc = 0x38EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA48u;
        // 0x38ea4c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA50u;
        goto label_38ea50;
    }
    ctx->pc = 0x38EA48u;
    {
        const bool branch_taken_0x38ea48 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x38EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA48u;
        // 0x38ea4c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea48) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38EA50u;
label_38ea50:
    // 0x38ea50: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x38ea50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_38ea54:
    // 0x38ea54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38ea58:
    // 0x38ea58: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x38ea58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_38ea5c:
    // 0x38ea5c: 0xc0e384e  jal         func_38E138
label_38ea60:
    if (ctx->pc == 0x38EA60u) {
        ctx->pc = 0x38EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA5Cu;
        // 0x38ea60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA64u;
        goto label_38ea64;
    }
    ctx->pc = 0x38EA5Cu;
    SET_GPR_U32(ctx, 31, 0x38EA64u);
    ctx->pc = 0x38EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA5Cu;
    // 0x38ea60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38EA5Cu, 0x38EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA64u;
label_38ea64:
    // 0x38ea64: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_38ea68:
    if (ctx->pc == 0x38EA68u) {
        ctx->pc = 0x38EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA64u;
        // 0x38ea68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA6Cu;
        goto label_38ea6c;
    }
    ctx->pc = 0x38EA64u;
    {
        const bool branch_taken_0x38ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x38EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA64u;
        // 0x38ea68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea64) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38EA6Cu;
label_38ea6c:
    // 0x38ea6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_38ea70:
    if (ctx->pc == 0x38EA70u) {
        ctx->pc = 0x38EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA6Cu;
        // 0x38ea70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA74u;
        goto label_38ea74;
    }
    ctx->pc = 0x38EA6Cu;
    {
        const bool branch_taken_0x38ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA6Cu;
        // 0x38ea70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea6c) {
            ctx->pc = 0x38EA7Cu;
            goto label_38ea7c;
        }
    }
    ctx->pc = 0x38EA74u;
label_38ea74:
    // 0x38ea74: 0x0  nop
    ctx->pc = 0x38ea74u;
    // NOP
label_38ea78:
    // 0x38ea78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38ea7c:
    // 0x38ea7c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x38ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_38ea80:
    // 0x38ea80: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x38ea80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_38ea84:
    // 0x38ea84: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x38ea84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_38ea88:
    // 0x38ea88: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x38ea88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_38ea8c:
    // 0x38ea8c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x38ea8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38ea90:
    // 0x38ea90: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x38ea90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38ea94:
    // 0x38ea94: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x38ea94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38ea98:
    // 0x38ea98: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x38ea98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38ea9c:
    // 0x38ea9c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x38ea9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38eaa0:
    // 0x38eaa0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x38eaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38eaa4:
    // 0x38eaa4: 0x3e00008  jr          $ra
label_38eaa8:
    if (ctx->pc == 0x38EAA8u) {
        ctx->pc = 0x38EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAA4u;
        // 0x38eaa8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAACu;
        goto label_38eaac;
    }
    ctx->pc = 0x38EAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAA4u;
        // 0x38eaa8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EAACu;
label_38eaac:
    // 0x38eaac: 0x0  nop
    ctx->pc = 0x38eaacu;
    // NOP
    ctx->pc = 0x38eab0u;
}
