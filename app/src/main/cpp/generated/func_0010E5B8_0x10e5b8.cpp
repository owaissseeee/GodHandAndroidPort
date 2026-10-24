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

// Function: func_0010E5B8
// Address: 0x10e5b8 - 0x10ebf8
void func_0010E5B8_0x10e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010E5B8_0x10e5b8");
#endif

    switch (ctx->pc) {
        case 0x10e5b8u: goto label_10e5b8;
        case 0x10e5bcu: goto label_10e5bc;
        case 0x10e5c0u: goto label_10e5c0;
        case 0x10e5c4u: goto label_10e5c4;
        case 0x10e5c8u: goto label_10e5c8;
        case 0x10e5ccu: goto label_10e5cc;
        case 0x10e5d0u: goto label_10e5d0;
        case 0x10e5d4u: goto label_10e5d4;
        case 0x10e5d8u: goto label_10e5d8;
        case 0x10e5dcu: goto label_10e5dc;
        case 0x10e5e0u: goto label_10e5e0;
        case 0x10e5e4u: goto label_10e5e4;
        case 0x10e5e8u: goto label_10e5e8;
        case 0x10e5ecu: goto label_10e5ec;
        case 0x10e5f0u: goto label_10e5f0;
        case 0x10e5f4u: goto label_10e5f4;
        case 0x10e5f8u: goto label_10e5f8;
        case 0x10e5fcu: goto label_10e5fc;
        case 0x10e600u: goto label_10e600;
        case 0x10e604u: goto label_10e604;
        case 0x10e608u: goto label_10e608;
        case 0x10e60cu: goto label_10e60c;
        case 0x10e610u: goto label_10e610;
        case 0x10e614u: goto label_10e614;
        case 0x10e618u: goto label_10e618;
        case 0x10e61cu: goto label_10e61c;
        case 0x10e620u: goto label_10e620;
        case 0x10e624u: goto label_10e624;
        case 0x10e628u: goto label_10e628;
        case 0x10e62cu: goto label_10e62c;
        case 0x10e630u: goto label_10e630;
        case 0x10e634u: goto label_10e634;
        case 0x10e638u: goto label_10e638;
        case 0x10e63cu: goto label_10e63c;
        case 0x10e640u: goto label_10e640;
        case 0x10e644u: goto label_10e644;
        case 0x10e648u: goto label_10e648;
        case 0x10e64cu: goto label_10e64c;
        case 0x10e650u: goto label_10e650;
        case 0x10e654u: goto label_10e654;
        case 0x10e658u: goto label_10e658;
        case 0x10e65cu: goto label_10e65c;
        case 0x10e660u: goto label_10e660;
        case 0x10e664u: goto label_10e664;
        case 0x10e668u: goto label_10e668;
        case 0x10e66cu: goto label_10e66c;
        case 0x10e670u: goto label_10e670;
        case 0x10e674u: goto label_10e674;
        case 0x10e678u: goto label_10e678;
        case 0x10e67cu: goto label_10e67c;
        case 0x10e680u: goto label_10e680;
        case 0x10e684u: goto label_10e684;
        case 0x10e688u: goto label_10e688;
        case 0x10e68cu: goto label_10e68c;
        case 0x10e690u: goto label_10e690;
        case 0x10e694u: goto label_10e694;
        case 0x10e698u: goto label_10e698;
        case 0x10e69cu: goto label_10e69c;
        case 0x10e6a0u: goto label_10e6a0;
        case 0x10e6a4u: goto label_10e6a4;
        case 0x10e6a8u: goto label_10e6a8;
        case 0x10e6acu: goto label_10e6ac;
        case 0x10e6b0u: goto label_10e6b0;
        case 0x10e6b4u: goto label_10e6b4;
        case 0x10e6b8u: goto label_10e6b8;
        case 0x10e6bcu: goto label_10e6bc;
        case 0x10e6c0u: goto label_10e6c0;
        case 0x10e6c4u: goto label_10e6c4;
        case 0x10e6c8u: goto label_10e6c8;
        case 0x10e6ccu: goto label_10e6cc;
        case 0x10e6d0u: goto label_10e6d0;
        case 0x10e6d4u: goto label_10e6d4;
        case 0x10e6d8u: goto label_10e6d8;
        case 0x10e6dcu: goto label_10e6dc;
        case 0x10e6e0u: goto label_10e6e0;
        case 0x10e6e4u: goto label_10e6e4;
        case 0x10e6e8u: goto label_10e6e8;
        case 0x10e6ecu: goto label_10e6ec;
        case 0x10e6f0u: goto label_10e6f0;
        case 0x10e6f4u: goto label_10e6f4;
        case 0x10e6f8u: goto label_10e6f8;
        case 0x10e6fcu: goto label_10e6fc;
        case 0x10e700u: goto label_10e700;
        case 0x10e704u: goto label_10e704;
        case 0x10e708u: goto label_10e708;
        case 0x10e70cu: goto label_10e70c;
        case 0x10e710u: goto label_10e710;
        case 0x10e714u: goto label_10e714;
        case 0x10e718u: goto label_10e718;
        case 0x10e71cu: goto label_10e71c;
        case 0x10e720u: goto label_10e720;
        case 0x10e724u: goto label_10e724;
        case 0x10e728u: goto label_10e728;
        case 0x10e72cu: goto label_10e72c;
        case 0x10e730u: goto label_10e730;
        case 0x10e734u: goto label_10e734;
        case 0x10e738u: goto label_10e738;
        case 0x10e73cu: goto label_10e73c;
        case 0x10e740u: goto label_10e740;
        case 0x10e744u: goto label_10e744;
        case 0x10e748u: goto label_10e748;
        case 0x10e74cu: goto label_10e74c;
        case 0x10e750u: goto label_10e750;
        case 0x10e754u: goto label_10e754;
        case 0x10e758u: goto label_10e758;
        case 0x10e75cu: goto label_10e75c;
        case 0x10e760u: goto label_10e760;
        case 0x10e764u: goto label_10e764;
        case 0x10e768u: goto label_10e768;
        case 0x10e76cu: goto label_10e76c;
        case 0x10e770u: goto label_10e770;
        case 0x10e774u: goto label_10e774;
        case 0x10e778u: goto label_10e778;
        case 0x10e77cu: goto label_10e77c;
        case 0x10e780u: goto label_10e780;
        case 0x10e784u: goto label_10e784;
        case 0x10e788u: goto label_10e788;
        case 0x10e78cu: goto label_10e78c;
        case 0x10e790u: goto label_10e790;
        case 0x10e794u: goto label_10e794;
        case 0x10e798u: goto label_10e798;
        case 0x10e79cu: goto label_10e79c;
        case 0x10e7a0u: goto label_10e7a0;
        case 0x10e7a4u: goto label_10e7a4;
        case 0x10e7a8u: goto label_10e7a8;
        case 0x10e7acu: goto label_10e7ac;
        case 0x10e7b0u: goto label_10e7b0;
        case 0x10e7b4u: goto label_10e7b4;
        case 0x10e7b8u: goto label_10e7b8;
        case 0x10e7bcu: goto label_10e7bc;
        case 0x10e7c0u: goto label_10e7c0;
        case 0x10e7c4u: goto label_10e7c4;
        case 0x10e7c8u: goto label_10e7c8;
        case 0x10e7ccu: goto label_10e7cc;
        case 0x10e7d0u: goto label_10e7d0;
        case 0x10e7d4u: goto label_10e7d4;
        case 0x10e7d8u: goto label_10e7d8;
        case 0x10e7dcu: goto label_10e7dc;
        case 0x10e7e0u: goto label_10e7e0;
        case 0x10e7e4u: goto label_10e7e4;
        case 0x10e7e8u: goto label_10e7e8;
        case 0x10e7ecu: goto label_10e7ec;
        case 0x10e7f0u: goto label_10e7f0;
        case 0x10e7f4u: goto label_10e7f4;
        case 0x10e7f8u: goto label_10e7f8;
        case 0x10e7fcu: goto label_10e7fc;
        case 0x10e800u: goto label_10e800;
        case 0x10e804u: goto label_10e804;
        case 0x10e808u: goto label_10e808;
        case 0x10e80cu: goto label_10e80c;
        case 0x10e810u: goto label_10e810;
        case 0x10e814u: goto label_10e814;
        case 0x10e818u: goto label_10e818;
        case 0x10e81cu: goto label_10e81c;
        case 0x10e820u: goto label_10e820;
        case 0x10e824u: goto label_10e824;
        case 0x10e828u: goto label_10e828;
        case 0x10e82cu: goto label_10e82c;
        case 0x10e830u: goto label_10e830;
        case 0x10e834u: goto label_10e834;
        case 0x10e838u: goto label_10e838;
        case 0x10e83cu: goto label_10e83c;
        case 0x10e840u: goto label_10e840;
        case 0x10e844u: goto label_10e844;
        case 0x10e848u: goto label_10e848;
        case 0x10e84cu: goto label_10e84c;
        case 0x10e850u: goto label_10e850;
        case 0x10e854u: goto label_10e854;
        case 0x10e858u: goto label_10e858;
        case 0x10e85cu: goto label_10e85c;
        case 0x10e860u: goto label_10e860;
        case 0x10e864u: goto label_10e864;
        case 0x10e868u: goto label_10e868;
        case 0x10e86cu: goto label_10e86c;
        case 0x10e870u: goto label_10e870;
        case 0x10e874u: goto label_10e874;
        case 0x10e878u: goto label_10e878;
        case 0x10e87cu: goto label_10e87c;
        case 0x10e880u: goto label_10e880;
        case 0x10e884u: goto label_10e884;
        case 0x10e888u: goto label_10e888;
        case 0x10e88cu: goto label_10e88c;
        case 0x10e890u: goto label_10e890;
        case 0x10e894u: goto label_10e894;
        case 0x10e898u: goto label_10e898;
        case 0x10e89cu: goto label_10e89c;
        case 0x10e8a0u: goto label_10e8a0;
        case 0x10e8a4u: goto label_10e8a4;
        case 0x10e8a8u: goto label_10e8a8;
        case 0x10e8acu: goto label_10e8ac;
        case 0x10e8b0u: goto label_10e8b0;
        case 0x10e8b4u: goto label_10e8b4;
        case 0x10e8b8u: goto label_10e8b8;
        case 0x10e8bcu: goto label_10e8bc;
        case 0x10e8c0u: goto label_10e8c0;
        case 0x10e8c4u: goto label_10e8c4;
        case 0x10e8c8u: goto label_10e8c8;
        case 0x10e8ccu: goto label_10e8cc;
        case 0x10e8d0u: goto label_10e8d0;
        case 0x10e8d4u: goto label_10e8d4;
        case 0x10e8d8u: goto label_10e8d8;
        case 0x10e8dcu: goto label_10e8dc;
        case 0x10e8e0u: goto label_10e8e0;
        case 0x10e8e4u: goto label_10e8e4;
        case 0x10e8e8u: goto label_10e8e8;
        case 0x10e8ecu: goto label_10e8ec;
        case 0x10e8f0u: goto label_10e8f0;
        case 0x10e8f4u: goto label_10e8f4;
        case 0x10e8f8u: goto label_10e8f8;
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e900u: goto label_10e900;
        case 0x10e904u: goto label_10e904;
        case 0x10e908u: goto label_10e908;
        case 0x10e90cu: goto label_10e90c;
        case 0x10e910u: goto label_10e910;
        case 0x10e914u: goto label_10e914;
        case 0x10e918u: goto label_10e918;
        case 0x10e91cu: goto label_10e91c;
        case 0x10e920u: goto label_10e920;
        case 0x10e924u: goto label_10e924;
        case 0x10e928u: goto label_10e928;
        case 0x10e92cu: goto label_10e92c;
        case 0x10e930u: goto label_10e930;
        case 0x10e934u: goto label_10e934;
        case 0x10e938u: goto label_10e938;
        case 0x10e93cu: goto label_10e93c;
        case 0x10e940u: goto label_10e940;
        case 0x10e944u: goto label_10e944;
        case 0x10e948u: goto label_10e948;
        case 0x10e94cu: goto label_10e94c;
        case 0x10e950u: goto label_10e950;
        case 0x10e954u: goto label_10e954;
        case 0x10e958u: goto label_10e958;
        case 0x10e95cu: goto label_10e95c;
        case 0x10e960u: goto label_10e960;
        case 0x10e964u: goto label_10e964;
        case 0x10e968u: goto label_10e968;
        case 0x10e96cu: goto label_10e96c;
        case 0x10e970u: goto label_10e970;
        case 0x10e974u: goto label_10e974;
        case 0x10e978u: goto label_10e978;
        case 0x10e97cu: goto label_10e97c;
        case 0x10e980u: goto label_10e980;
        case 0x10e984u: goto label_10e984;
        case 0x10e988u: goto label_10e988;
        case 0x10e98cu: goto label_10e98c;
        case 0x10e990u: goto label_10e990;
        case 0x10e994u: goto label_10e994;
        case 0x10e998u: goto label_10e998;
        case 0x10e99cu: goto label_10e99c;
        case 0x10e9a0u: goto label_10e9a0;
        case 0x10e9a4u: goto label_10e9a4;
        case 0x10e9a8u: goto label_10e9a8;
        case 0x10e9acu: goto label_10e9ac;
        case 0x10e9b0u: goto label_10e9b0;
        case 0x10e9b4u: goto label_10e9b4;
        case 0x10e9b8u: goto label_10e9b8;
        case 0x10e9bcu: goto label_10e9bc;
        case 0x10e9c0u: goto label_10e9c0;
        case 0x10e9c4u: goto label_10e9c4;
        case 0x10e9c8u: goto label_10e9c8;
        case 0x10e9ccu: goto label_10e9cc;
        case 0x10e9d0u: goto label_10e9d0;
        case 0x10e9d4u: goto label_10e9d4;
        case 0x10e9d8u: goto label_10e9d8;
        case 0x10e9dcu: goto label_10e9dc;
        case 0x10e9e0u: goto label_10e9e0;
        case 0x10e9e4u: goto label_10e9e4;
        case 0x10e9e8u: goto label_10e9e8;
        case 0x10e9ecu: goto label_10e9ec;
        case 0x10e9f0u: goto label_10e9f0;
        case 0x10e9f4u: goto label_10e9f4;
        case 0x10e9f8u: goto label_10e9f8;
        case 0x10e9fcu: goto label_10e9fc;
        case 0x10ea00u: goto label_10ea00;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea08u: goto label_10ea08;
        case 0x10ea0cu: goto label_10ea0c;
        case 0x10ea10u: goto label_10ea10;
        case 0x10ea14u: goto label_10ea14;
        case 0x10ea18u: goto label_10ea18;
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea20u: goto label_10ea20;
        case 0x10ea24u: goto label_10ea24;
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea2cu: goto label_10ea2c;
        case 0x10ea30u: goto label_10ea30;
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea38u: goto label_10ea38;
        case 0x10ea3cu: goto label_10ea3c;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea44u: goto label_10ea44;
        case 0x10ea48u: goto label_10ea48;
        case 0x10ea4cu: goto label_10ea4c;
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea54u: goto label_10ea54;
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea5cu: goto label_10ea5c;
        case 0x10ea60u: goto label_10ea60;
        case 0x10ea64u: goto label_10ea64;
        case 0x10ea68u: goto label_10ea68;
        case 0x10ea6cu: goto label_10ea6c;
        case 0x10ea70u: goto label_10ea70;
        case 0x10ea74u: goto label_10ea74;
        case 0x10ea78u: goto label_10ea78;
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10ea80u: goto label_10ea80;
        case 0x10ea84u: goto label_10ea84;
        case 0x10ea88u: goto label_10ea88;
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10ea90u: goto label_10ea90;
        case 0x10ea94u: goto label_10ea94;
        case 0x10ea98u: goto label_10ea98;
        case 0x10ea9cu: goto label_10ea9c;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa4u: goto label_10eaa4;
        case 0x10eaa8u: goto label_10eaa8;
        case 0x10eaacu: goto label_10eaac;
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab4u: goto label_10eab4;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eabcu: goto label_10eabc;
        case 0x10eac0u: goto label_10eac0;
        case 0x10eac4u: goto label_10eac4;
        case 0x10eac8u: goto label_10eac8;
        case 0x10eaccu: goto label_10eacc;
        case 0x10ead0u: goto label_10ead0;
        case 0x10ead4u: goto label_10ead4;
        case 0x10ead8u: goto label_10ead8;
        case 0x10eadcu: goto label_10eadc;
        case 0x10eae0u: goto label_10eae0;
        case 0x10eae4u: goto label_10eae4;
        case 0x10eae8u: goto label_10eae8;
        case 0x10eaecu: goto label_10eaec;
        case 0x10eaf0u: goto label_10eaf0;
        case 0x10eaf4u: goto label_10eaf4;
        case 0x10eaf8u: goto label_10eaf8;
        case 0x10eafcu: goto label_10eafc;
        case 0x10eb00u: goto label_10eb00;
        case 0x10eb04u: goto label_10eb04;
        case 0x10eb08u: goto label_10eb08;
        case 0x10eb0cu: goto label_10eb0c;
        case 0x10eb10u: goto label_10eb10;
        case 0x10eb14u: goto label_10eb14;
        case 0x10eb18u: goto label_10eb18;
        case 0x10eb1cu: goto label_10eb1c;
        case 0x10eb20u: goto label_10eb20;
        case 0x10eb24u: goto label_10eb24;
        case 0x10eb28u: goto label_10eb28;
        case 0x10eb2cu: goto label_10eb2c;
        case 0x10eb30u: goto label_10eb30;
        case 0x10eb34u: goto label_10eb34;
        case 0x10eb38u: goto label_10eb38;
        case 0x10eb3cu: goto label_10eb3c;
        case 0x10eb40u: goto label_10eb40;
        case 0x10eb44u: goto label_10eb44;
        case 0x10eb48u: goto label_10eb48;
        case 0x10eb4cu: goto label_10eb4c;
        case 0x10eb50u: goto label_10eb50;
        case 0x10eb54u: goto label_10eb54;
        case 0x10eb58u: goto label_10eb58;
        case 0x10eb5cu: goto label_10eb5c;
        case 0x10eb60u: goto label_10eb60;
        case 0x10eb64u: goto label_10eb64;
        case 0x10eb68u: goto label_10eb68;
        case 0x10eb6cu: goto label_10eb6c;
        case 0x10eb70u: goto label_10eb70;
        case 0x10eb74u: goto label_10eb74;
        case 0x10eb78u: goto label_10eb78;
        case 0x10eb7cu: goto label_10eb7c;
        case 0x10eb80u: goto label_10eb80;
        case 0x10eb84u: goto label_10eb84;
        case 0x10eb88u: goto label_10eb88;
        case 0x10eb8cu: goto label_10eb8c;
        case 0x10eb90u: goto label_10eb90;
        case 0x10eb94u: goto label_10eb94;
        case 0x10eb98u: goto label_10eb98;
        case 0x10eb9cu: goto label_10eb9c;
        case 0x10eba0u: goto label_10eba0;
        case 0x10eba4u: goto label_10eba4;
        case 0x10eba8u: goto label_10eba8;
        case 0x10ebacu: goto label_10ebac;
        case 0x10ebb0u: goto label_10ebb0;
        case 0x10ebb4u: goto label_10ebb4;
        case 0x10ebb8u: goto label_10ebb8;
        case 0x10ebbcu: goto label_10ebbc;
        case 0x10ebc0u: goto label_10ebc0;
        case 0x10ebc4u: goto label_10ebc4;
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebccu: goto label_10ebcc;
        case 0x10ebd0u: goto label_10ebd0;
        case 0x10ebd4u: goto label_10ebd4;
        case 0x10ebd8u: goto label_10ebd8;
        case 0x10ebdcu: goto label_10ebdc;
        case 0x10ebe0u: goto label_10ebe0;
        case 0x10ebe4u: goto label_10ebe4;
        case 0x10ebe8u: goto label_10ebe8;
        case 0x10ebecu: goto label_10ebec;
        case 0x10ebf0u: goto label_10ebf0;
        case 0x10ebf4u: goto label_10ebf4;
        default: break;
    }

    ctx->pc = 0x10e5b8u;

label_10e5b8:
    // 0x10e5b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10e5bc:
    // 0x10e5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e5c0:
    // 0x10e5c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10e5c4:
    // 0x10e5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e5c8:
    // 0x10e5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e5cc:
    // 0x10e5cc: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x10e5ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_10e5d0:
    // 0x10e5d0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x10e5d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_10e5d4:
    // 0x10e5d4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10e5d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10e5d8:
    // 0x10e5d8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x10e5d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_10e5dc:
    // 0x10e5dc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_10e5e0:
    if (ctx->pc == 0x10E5E0u) {
        ctx->pc = 0x10E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5DCu;
        // 0x10e5e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5E4u;
        goto label_10e5e4;
    }
    ctx->pc = 0x10E5DCu;
    {
        const bool branch_taken_0x10e5dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5DCu;
        // 0x10e5e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5dc) {
            ctx->pc = 0x10E5E8u;
            goto label_10e5e8;
        }
    }
    ctx->pc = 0x10E5E4u;
label_10e5e4:
    // 0x10e5e4: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x10e5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_10e5e8:
    // 0x10e5e8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10e5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10e5ec:
    // 0x10e5ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10e5f0:
    if (ctx->pc == 0x10E5F0u) {
        ctx->pc = 0x10E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ECu;
        // 0x10e5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5F4u;
        goto label_10e5f4;
    }
    ctx->pc = 0x10E5ECu;
    {
        const bool branch_taken_0x10e5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ECu;
        // 0x10e5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5ec) {
            ctx->pc = 0x10E604u;
            goto label_10e604;
        }
    }
    ctx->pc = 0x10E5F4u;
label_10e5f4:
    // 0x10e5f4: 0x5043007a  beql        $v0, $v1, . + 4 + (0x7A << 2)
label_10e5f8:
    if (ctx->pc == 0x10E5F8u) {
        ctx->pc = 0x10E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5F4u;
        // 0x10e5f8: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5FCu;
        goto label_10e5fc;
    }
    ctx->pc = 0x10E5F4u;
    {
        const bool branch_taken_0x10e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e5f4) {
            ctx->pc = 0x10E5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E5F4u;
            // 0x10e5f8: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7E0u;
            goto label_10e7e0;
        }
    }
    ctx->pc = 0x10E5FCu;
label_10e5fc:
    // 0x10e5fc: 0x10000147  b           . + 4 + (0x147 << 2)
label_10e600:
    if (ctx->pc == 0x10E600u) {
        ctx->pc = 0x10E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5FCu;
        // 0x10e600: 0xc62015c0  lwc1        $f0, 0x15C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E604u;
        goto label_10e604;
    }
    ctx->pc = 0x10E5FCu;
    {
        const bool branch_taken_0x10e5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5FCu;
        // 0x10e600: 0xc62015c0  lwc1        $f0, 0x15C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5fc) {
            ctx->pc = 0x10EB1Cu;
            goto label_10eb1c;
        }
    }
    ctx->pc = 0x10E604u;
label_10e604:
    // 0x10e604: 0xc049150  jal         func_124540
label_10e608:
    if (ctx->pc == 0x10E608u) {
        ctx->pc = 0x10E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E604u;
        // 0x10e608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E60Cu;
        goto label_10e60c;
    }
    ctx->pc = 0x10E604u;
    SET_GPR_U32(ctx, 31, 0x10E60Cu);
    ctx->pc = 0x10E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E604u;
    // 0x10e608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10E604u, 0x10E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E60Cu;
label_10e60c:
    // 0x10e60c: 0x82230648  lb          $v1, 0x648($s1)
    ctx->pc = 0x10e60cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_10e610:
    // 0x10e610: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10e610u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10e614:
    // 0x10e614: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_10e618:
    if (ctx->pc == 0x10E618u) {
        ctx->pc = 0x10E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E614u;
        // 0x10e618: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E61Cu;
        goto label_10e61c;
    }
    ctx->pc = 0x10E614u;
    {
        const bool branch_taken_0x10e614 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x10E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E614u;
        // 0x10e618: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e614) {
            ctx->pc = 0x10E624u;
            goto label_10e624;
        }
    }
    ctx->pc = 0x10E61Cu;
label_10e61c:
    // 0x10e61c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10e620:
    // 0x10e620: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10e620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10e624:
    // 0x10e624: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e628:
    // 0x10e628: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_10e62c:
    if (ctx->pc == 0x10E62Cu) {
        ctx->pc = 0x10E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E628u;
        // 0x10e62c: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E630u;
        goto label_10e630;
    }
    ctx->pc = 0x10E628u;
    {
        const bool branch_taken_0x10e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e628) {
            ctx->pc = 0x10E62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E628u;
            // 0x10e62c: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E664u;
            goto label_10e664;
        }
    }
    ctx->pc = 0x10E630u;
label_10e630:
    // 0x10e630: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x10e630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_10e634:
    // 0x10e634: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10e634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_10e638:
    // 0x10e638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e63c:
    if (ctx->pc == 0x10E63Cu) {
        ctx->pc = 0x10E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E638u;
        // 0x10e63c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E640u;
        goto label_10e640;
    }
    ctx->pc = 0x10E638u;
    {
        const bool branch_taken_0x10e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E638u;
        // 0x10e63c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e638) {
            ctx->pc = 0x10E648u;
            goto label_10e648;
        }
    }
    ctx->pc = 0x10E640u;
label_10e640:
    // 0x10e640: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10e640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_10e644:
    // 0x10e644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e648:
    // 0x10e648: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10e648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_10e64c:
    // 0x10e64c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e650:
    if (ctx->pc == 0x10E650u) {
        ctx->pc = 0x10E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E64Cu;
        // 0x10e650: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E654u;
        goto label_10e654;
    }
    ctx->pc = 0x10E64Cu;
    {
        const bool branch_taken_0x10e64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E64Cu;
        // 0x10e650: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e64c) {
            ctx->pc = 0x10E660u;
            goto label_10e660;
        }
    }
    ctx->pc = 0x10E654u;
label_10e654:
    // 0x10e654: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10e654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10e658:
    // 0x10e658: 0xc07e8a0  jal         func_1FA280
label_10e65c:
    if (ctx->pc == 0x10E65Cu) {
        ctx->pc = 0x10E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E658u;
        // 0x10e65c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E660u;
        goto label_10e660;
    }
    ctx->pc = 0x10E658u;
    SET_GPR_U32(ctx, 31, 0x10E660u);
    ctx->pc = 0x10E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E658u;
    // 0x10e65c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x10E658u, 0x10E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E660u;
label_10e660:
    // 0x10e660: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e664:
    // 0x10e664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e668:
    // 0x10e668: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10e668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_10e66c:
    // 0x10e66c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10e66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10e670:
    // 0x10e670: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10e674:
    // 0x10e674: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x10e674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_10e678:
    // 0x10e678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e67c:
    // 0x10e67c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10e67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_10e680:
    // 0x10e680: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10e680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10e684:
    // 0x10e684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e688:
    // 0x10e688: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x10e688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_10e68c:
    // 0x10e68c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10e68cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10e690:
    // 0x10e690: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10e690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10e694:
    // 0x10e694: 0xc042902  jal         func_10A408
label_10e698:
    if (ctx->pc == 0x10E698u) {
        ctx->pc = 0x10E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E694u;
        // 0x10e698: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E69Cu;
        goto label_10e69c;
    }
    ctx->pc = 0x10E694u;
    SET_GPR_U32(ctx, 31, 0x10E69Cu);
    ctx->pc = 0x10E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E694u;
    // 0x10e698: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10E694u, 0x10E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E69Cu;
label_10e69c:
    // 0x10e69c: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e6a0:
    // 0x10e6a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10e6a4:
    // 0x10e6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e6a8:
    // 0x10e6a8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x10e6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_10e6ac:
    // 0x10e6ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10e6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_10e6b0:
    // 0x10e6b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e6b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e6b4:
    // 0x10e6b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10e6b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10e6b8:
    // 0x10e6b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10e6b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10e6bc:
    // 0x10e6bc: 0xc042908  jal         func_10A420
label_10e6c0:
    if (ctx->pc == 0x10E6C0u) {
        ctx->pc = 0x10E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6BCu;
        // 0x10e6c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6C4u;
        goto label_10e6c4;
    }
    ctx->pc = 0x10E6BCu;
    SET_GPR_U32(ctx, 31, 0x10E6C4u);
    ctx->pc = 0x10E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6BCu;
    // 0x10e6c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10E6BCu, 0x10E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6C4u;
label_10e6c4:
    // 0x10e6c4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10e6c8:
    // 0x10e6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e6cc:
    // 0x10e6cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x10e6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10e6d0:
    // 0x10e6d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10e6d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10e6d4:
    // 0x10e6d4: 0x8c45018c  lw          $a1, 0x18C($v0)
    ctx->pc = 0x10e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_10e6d8:
    // 0x10e6d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e6dc:
    // 0x10e6dc: 0x8c460194  lw          $a2, 0x194($v0)
    ctx->pc = 0x10e6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_10e6e0:
    // 0x10e6e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10e6e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e6e4:
    // 0x10e6e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10e6e8:
    // 0x10e6e8: 0xc0aa15e  jal         func_2A8578
label_10e6ec:
    if (ctx->pc == 0x10E6ECu) {
        ctx->pc = 0x10E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6E8u;
        // 0x10e6ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6F0u;
        goto label_10e6f0;
    }
    ctx->pc = 0x10E6E8u;
    SET_GPR_U32(ctx, 31, 0x10E6F0u);
    ctx->pc = 0x10E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6E8u;
    // 0x10e6ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10E6E8u, 0x10E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6F0u;
label_10e6f0:
    // 0x10e6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e6f4:
    // 0x10e6f4: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e6f8:
    // 0x10e6f8: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x10e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_10e6fc:
    // 0x10e6fc: 0xe6341588  swc1        $f20, 0x1588($s1)
    ctx->pc = 0x10e6fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10e700:
    // 0x10e700: 0xe63615c0  swc1        $f22, 0x15C0($s1)
    ctx->pc = 0x10e700u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10e704:
    // 0x10e704: 0xe63415c4  swc1        $f20, 0x15C4($s1)
    ctx->pc = 0x10e704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
label_10e708:
    // 0x10e708: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x10e708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_10e70c:
    // 0x10e70c: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
label_10e710:
    if (ctx->pc == 0x10E710u) {
        ctx->pc = 0x10E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E70Cu;
        // 0x10e710: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E714u;
        goto label_10e714;
    }
    ctx->pc = 0x10E70Cu;
    {
        const bool branch_taken_0x10e70c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E70Cu;
        // 0x10e710: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e70c) {
            ctx->pc = 0x10E7C0u;
            goto label_10e7c0;
        }
    }
    ctx->pc = 0x10E714u;
label_10e714:
    // 0x10e714: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10e718:
    // 0x10e718: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10e718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10e71c:
    // 0x10e71c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10e71cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10e720:
    // 0x10e720: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10e724:
    // 0x10e724: 0x40f809  jalr        $v0
label_10e728:
    if (ctx->pc == 0x10E728u) {
        ctx->pc = 0x10E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E724u;
        // 0x10e728: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E72Cu;
        goto label_10e72c;
    }
    ctx->pc = 0x10E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E72Cu);
        ctx->pc = 0x10E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E724u;
        // 0x10e728: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E724u, 0x10E72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E72Cu;
label_10e72c:
    // 0x10e72c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e730:
    // 0x10e730: 0xc07dfa0  jal         func_1F7E80
label_10e734:
    if (ctx->pc == 0x10E734u) {
        ctx->pc = 0x10E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E730u;
        // 0x10e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E738u;
        goto label_10e738;
    }
    ctx->pc = 0x10E730u;
    SET_GPR_U32(ctx, 31, 0x10E738u);
    ctx->pc = 0x10E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E730u;
    // 0x10e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x10E730u, 0x10E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E738u;
label_10e738:
    // 0x10e738: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10e738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_10e73c:
    // 0x10e73c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10e73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_10e740:
    // 0x10e740: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e744:
    // 0x10e744: 0x962205e0  lhu         $v0, 0x5E0($s1)
    ctx->pc = 0x10e744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
label_10e748:
    // 0x10e748: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_10e74c:
    if (ctx->pc == 0x10E74Cu) {
        ctx->pc = 0x10E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E748u;
        // 0x10e74c: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E750u;
        goto label_10e750;
    }
    ctx->pc = 0x10E748u;
    {
        const bool branch_taken_0x10e748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E748u;
        // 0x10e74c: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e748) {
            ctx->pc = 0x10E774u;
            goto label_10e774;
        }
    }
    ctx->pc = 0x10E750u;
label_10e750:
    // 0x10e750: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x10e750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_10e754:
    // 0x10e754: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10e758:
    if (ctx->pc == 0x10E758u) {
        ctx->pc = 0x10E75Cu;
        goto label_10e75c;
    }
    ctx->pc = 0x10E754u;
    {
        const bool branch_taken_0x10e754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e754) {
            ctx->pc = 0x10E774u;
            goto label_10e774;
        }
    }
    ctx->pc = 0x10E75Cu;
label_10e75c:
    // 0x10e75c: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x10e75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e760:
    // 0x10e760: 0x0  nop
    ctx->pc = 0x10e760u;
    // NOP
label_10e764:
    // 0x10e764: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_10e768:
    if (ctx->pc == 0x10E768u) {
        ctx->pc = 0x10E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E764u;
        // 0x10e768: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E76Cu;
        goto label_10e76c;
    }
    ctx->pc = 0x10E764u;
    {
        const bool branch_taken_0x10e764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e764) {
            ctx->pc = 0x10E768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E764u;
            // 0x10e768: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E790u;
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E76Cu;
label_10e76c:
    // 0x10e76c: 0x10000008  b           . + 4 + (0x8 << 2)
label_10e770:
    if (ctx->pc == 0x10E770u) {
        ctx->pc = 0x10E774u;
        goto label_10e774;
    }
    ctx->pc = 0x10E76Cu;
    {
        const bool branch_taken_0x10e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e76c) {
            ctx->pc = 0x10E790u;
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E774u;
label_10e774:
    // 0x10e774: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10e774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10e778:
    // 0x10e778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e77c:
    // 0x10e77c: 0x0  nop
    ctx->pc = 0x10e77cu;
    // NOP
label_10e780:
    // 0x10e780: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e784:
    // 0x10e784: 0x0  nop
    ctx->pc = 0x10e784u;
    // NOP
label_10e788:
    // 0x10e788: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10e78c:
    if (ctx->pc == 0x10E78Cu) {
        ctx->pc = 0x10E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E788u;
        // 0x10e78c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E790u;
        goto label_10e790;
    }
    ctx->pc = 0x10E788u;
    {
        const bool branch_taken_0x10e788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e788) {
            ctx->pc = 0x10E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E788u;
            // 0x10e78c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E790u;
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E790u;
label_10e790:
    // 0x10e790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e794:
    // 0x10e794: 0x0  nop
    ctx->pc = 0x10e794u;
    // NOP
label_10e798:
    // 0x10e798: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e79c:
    // 0x10e79c: 0x0  nop
    ctx->pc = 0x10e79cu;
    // NOP
label_10e7a0:
    // 0x10e7a0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_10e7a4:
    if (ctx->pc == 0x10E7A4u) {
        ctx->pc = 0x10E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A0u;
        // 0x10e7a4: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7A8u;
        goto label_10e7a8;
    }
    ctx->pc = 0x10E7A0u;
    {
        const bool branch_taken_0x10e7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e7a0) {
            ctx->pc = 0x10E7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E7A0u;
            // 0x10e7a4: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7C4u;
            goto label_10e7c4;
        }
    }
    ctx->pc = 0x10E7A8u;
label_10e7a8:
    // 0x10e7a8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x10e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_10e7ac:
    // 0x10e7ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10e7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_10e7b0:
    // 0x10e7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e7b4:
    // 0x10e7b4: 0x0  nop
    ctx->pc = 0x10e7b4u;
    // NOP
label_10e7b8:
    // 0x10e7b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10e7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10e7bc:
    // 0x10e7bc: 0xe6201588  swc1        $f0, 0x1588($s1)
    ctx->pc = 0x10e7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10e7c0:
    // 0x10e7c0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10e7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10e7c4:
    // 0x10e7c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e7c8:
    // 0x10e7c8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x10e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_10e7cc:
    // 0x10e7cc: 0xa62305f0  sh          $v1, 0x5F0($s1)
    ctx->pc = 0x10e7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1520), (uint16_t)GPR_U32(ctx, 3));
label_10e7d0:
    // 0x10e7d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e7d4:
    // 0x10e7d4: 0xa6240568  sh          $a0, 0x568($s1)
    ctx->pc = 0x10e7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 4));
label_10e7d8:
    // 0x10e7d8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10e7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10e7dc:
    // 0x10e7dc: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x10e7dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_10e7e0:
    // 0x10e7e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10e7e4:
    if (ctx->pc == 0x10E7E4u) {
        ctx->pc = 0x10E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7E0u;
        // 0x10e7e4: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7E8u;
        goto label_10e7e8;
    }
    ctx->pc = 0x10E7E0u;
    {
        const bool branch_taken_0x10e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7E0u;
        // 0x10e7e4: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7e0) {
            ctx->pc = 0x10E804u;
            goto label_10e804;
        }
    }
    ctx->pc = 0x10E7E8u;
label_10e7e8:
    // 0x10e7e8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10e7ec:
    // 0x10e7ec: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_10e7f0:
    // 0x10e7f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10e7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_10e7f4:
    // 0x10e7f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10e7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e7f8:
    // 0x10e7f8: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x10e7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_10e7fc:
    // 0x10e7fc: 0xc04939a  jal         func_124E68
label_10e800:
    if (ctx->pc == 0x10E800u) {
        ctx->pc = 0x10E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7FCu;
        // 0x10e800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E804u;
        goto label_10e804;
    }
    ctx->pc = 0x10E7FCu;
    SET_GPR_U32(ctx, 31, 0x10E804u);
    ctx->pc = 0x10E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7FCu;
    // 0x10e800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10E7FCu, 0x10E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E804u;
label_10e804:
    // 0x10e804: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e808:
    // 0x10e808: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10e80c:
    if (ctx->pc == 0x10E80Cu) {
        ctx->pc = 0x10E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E808u;
        // 0x10e80c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E810u;
        goto label_10e810;
    }
    ctx->pc = 0x10E808u;
    {
        const bool branch_taken_0x10e808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E808u;
        // 0x10e80c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e808) {
            ctx->pc = 0x10E814u;
            goto label_10e814;
        }
    }
    ctx->pc = 0x10E810u;
label_10e810:
    // 0x10e810: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10e810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10e814:
    // 0x10e814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e818:
    // 0x10e818: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10e818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10e81c:
    // 0x10e81c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10e81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10e820:
    // 0x10e820: 0xe62205a8  swc1        $f2, 0x5A8($s1)
    ctx->pc = 0x10e820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_10e824:
    // 0x10e824: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x10e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_10e828:
    // 0x10e828: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10e82c:
    if (ctx->pc == 0x10E82Cu) {
        ctx->pc = 0x10E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E828u;
        // 0x10e82c: 0xe62205dc  swc1        $f2, 0x5DC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E830u;
        goto label_10e830;
    }
    ctx->pc = 0x10E828u;
    {
        const bool branch_taken_0x10e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E828u;
        // 0x10e82c: 0xe62205dc  swc1        $f2, 0x5DC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e828) {
            ctx->pc = 0x10E858u;
            goto label_10e858;
        }
    }
    ctx->pc = 0x10E830u;
label_10e830:
    // 0x10e830: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10e834:
    // 0x10e834: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_10e838:
    if (ctx->pc == 0x10E838u) {
        ctx->pc = 0x10E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E834u;
        // 0x10e838: 0xc62015c4  lwc1        $f0, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E83Cu;
        goto label_10e83c;
    }
    ctx->pc = 0x10E834u;
    {
        const bool branch_taken_0x10e834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e834) {
            ctx->pc = 0x10E838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E834u;
            // 0x10e838: 0xc62015c4  lwc1        $f0, 0x15C4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E85Cu;
            goto label_10e85c;
        }
    }
    ctx->pc = 0x10E83Cu;
label_10e83c:
    // 0x10e83c: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e840:
    // 0x10e840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e844:
    // 0x10e844: 0x0  nop
    ctx->pc = 0x10e844u;
    // NOP
label_10e848:
    // 0x10e848: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10e848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e84c:
    // 0x10e84c: 0x0  nop
    ctx->pc = 0x10e84cu;
    // NOP
label_10e850:
    // 0x10e850: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10e854:
    if (ctx->pc == 0x10E854u) {
        ctx->pc = 0x10E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E850u;
        // 0x10e854: 0xe62215c4  swc1        $f2, 0x15C4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E858u;
        goto label_10e858;
    }
    ctx->pc = 0x10E850u;
    {
        const bool branch_taken_0x10e850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e850) {
            ctx->pc = 0x10E854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E850u;
            // 0x10e854: 0xe62215c4  swc1        $f2, 0x15C4($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E858u;
            goto label_10e858;
        }
    }
    ctx->pc = 0x10E858u;
label_10e858:
    // 0x10e858: 0xc62015c4  lwc1        $f0, 0x15C4($s1)
    ctx->pc = 0x10e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e85c:
    // 0x10e85c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10e85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10e860:
    // 0x10e860: 0x0  nop
    ctx->pc = 0x10e860u;
    // NOP
label_10e864:
    // 0x10e864: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10e864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e868:
    // 0x10e868: 0x0  nop
    ctx->pc = 0x10e868u;
    // NOP
label_10e86c:
    // 0x10e86c: 0x45020051  bc1fl       . + 4 + (0x51 << 2)
label_10e870:
    if (ctx->pc == 0x10E870u) {
        ctx->pc = 0x10E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E86Cu;
        // 0x10e870: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E874u;
        goto label_10e874;
    }
    ctx->pc = 0x10E86Cu;
    {
        const bool branch_taken_0x10e86c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e86c) {
            ctx->pc = 0x10E870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E86Cu;
            // 0x10e870: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9B4u;
            goto label_10e9b4;
        }
    }
    ctx->pc = 0x10E874u;
label_10e874:
    // 0x10e874: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_10e878:
    // 0x10e878: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_10e87c:
    if (ctx->pc == 0x10E87Cu) {
        ctx->pc = 0x10E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E878u;
        // 0x10e87c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E880u;
        goto label_10e880;
    }
    ctx->pc = 0x10E878u;
    {
        const bool branch_taken_0x10e878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e878) {
            ctx->pc = 0x10E87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E878u;
            // 0x10e87c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9B4u;
            goto label_10e9b4;
        }
    }
    ctx->pc = 0x10E880u;
label_10e880:
    // 0x10e880: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10e884:
    // 0x10e884: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_10e888:
    if (ctx->pc == 0x10E888u) {
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E884u;
        // 0x10e888: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E88Cu;
        goto label_10e88c;
    }
    ctx->pc = 0x10E884u;
    {
        const bool branch_taken_0x10e884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E884u;
        // 0x10e888: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e884) {
            ctx->pc = 0x10E8B4u;
            goto label_10e8b4;
        }
    }
    ctx->pc = 0x10E88Cu;
label_10e88c:
    // 0x10e88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e890:
    // 0x10e890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e894:
    // 0x10e894: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x10e894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_10e898:
    // 0x10e898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e89c:
    // 0x10e89c: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_10e8a0:
    // 0x10e8a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10e8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e8a4:
    // 0x10e8a4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e8a8:
    // 0x10e8a8: 0xc0aa182  jal         func_2A8608
label_10e8ac:
    if (ctx->pc == 0x10E8ACu) {
        ctx->pc = 0x10E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8A8u;
        // 0x10e8ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8B0u;
        goto label_10e8b0;
    }
    ctx->pc = 0x10E8A8u;
    SET_GPR_U32(ctx, 31, 0x10E8B0u);
    ctx->pc = 0x10E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8A8u;
    // 0x10e8ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x10E8A8u, 0x10E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8B0u;
label_10e8b0:
    // 0x10e8b0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x10e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_10e8b4:
    // 0x10e8b4: 0x8c6274a0  lw          $v0, 0x74A0($v1)
    ctx->pc = 0x10e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29856)));
label_10e8b8:
    // 0x10e8b8: 0x304200d0  andi        $v0, $v0, 0xD0
    ctx->pc = 0x10e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)208);
label_10e8bc:
    // 0x10e8bc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_10e8c0:
    if (ctx->pc == 0x10E8C0u) {
        ctx->pc = 0x10E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8BCu;
        // 0x10e8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8C4u;
        goto label_10e8c4;
    }
    ctx->pc = 0x10E8BCu;
    {
        const bool branch_taken_0x10e8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8BCu;
        // 0x10e8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8bc) {
            ctx->pc = 0x10E988u;
            goto label_10e988;
        }
    }
    ctx->pc = 0x10E8C4u;
label_10e8c4:
    // 0x10e8c4: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x10e8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_10e8c8:
    // 0x10e8c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10e8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10e8cc:
    // 0x10e8cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e8d0:
    // 0x10e8d0: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e8d4:
    // 0x10e8d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10e8d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_10e8d8:
    // 0x10e8d8: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x10e8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_10e8dc:
    // 0x10e8dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10e8dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10e8e0:
    // 0x10e8e0: 0xe62005dc  swc1        $f0, 0x5DC($s1)
    ctx->pc = 0x10e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_10e8e4:
    // 0x10e8e4: 0xc0560a2  jal         func_158288
label_10e8e8:
    if (ctx->pc == 0x10E8E8u) {
        ctx->pc = 0x10E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8E4u;
        // 0x10e8e8: 0xe62115c4  swc1        $f1, 0x15C4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8ECu;
        goto label_10e8ec;
    }
    ctx->pc = 0x10E8E4u;
    SET_GPR_U32(ctx, 31, 0x10E8ECu);
    ctx->pc = 0x10E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8E4u;
    // 0x10e8e8: 0xe62115c4  swc1        $f1, 0x15C4($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10E8E4u, 0x10E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8ECu;
label_10e8ec:
    // 0x10e8ec: 0xc62215c0  lwc1        $f2, 0x15C0($s1)
    ctx->pc = 0x10e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10e8f0:
    // 0x10e8f0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x10e8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_10e8f4:
    // 0x10e8f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10e8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10e8f8:
    // 0x10e8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e8fc:
    // 0x10e8fc: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e900:
    // 0x10e900: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x10e900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_10e904:
    // 0x10e904: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x10e904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e908:
    // 0x10e908: 0x0  nop
    ctx->pc = 0x10e908u;
    // NOP
label_10e90c:
    // 0x10e90c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_10e910:
    if (ctx->pc == 0x10E910u) {
        ctx->pc = 0x10E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E90Cu;
        // 0x10e910: 0xe62215c0  swc1        $f2, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E914u;
        goto label_10e914;
    }
    ctx->pc = 0x10E90Cu;
    {
        const bool branch_taken_0x10e90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E90Cu;
        // 0x10e910: 0xe62215c0  swc1        $f2, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e90c) {
            ctx->pc = 0x10E928u;
            goto label_10e928;
        }
    }
    ctx->pc = 0x10E914u;
label_10e914:
    // 0x10e914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e918:
    // 0x10e918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e91c:
    // 0x10e91c: 0x0  nop
    ctx->pc = 0x10e91cu;
    // NOP
label_10e920:
    // 0x10e920: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x10e920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_10e924:
    // 0x10e924: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10e924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10e928:
    // 0x10e928: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x10e928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e92c:
    // 0x10e92c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x10e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_10e930:
    // 0x10e930: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10e930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10e934:
    // 0x10e934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e938:
    // 0x10e938: 0x0  nop
    ctx->pc = 0x10e938u;
    // NOP
label_10e93c:
    // 0x10e93c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10e93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e940:
    // 0x10e940: 0x0  nop
    ctx->pc = 0x10e940u;
    // NOP
label_10e944:
    // 0x10e944: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_10e948:
    if (ctx->pc == 0x10E948u) {
        ctx->pc = 0x10E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E944u;
        // 0x10e948: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E94Cu;
        goto label_10e94c;
    }
    ctx->pc = 0x10E944u;
    {
        const bool branch_taken_0x10e944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e944) {
            ctx->pc = 0x10E948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E944u;
            // 0x10e948: 0xc62115c4  lwc1        $f1, 0x15C4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E994u;
            goto label_10e994;
        }
    }
    ctx->pc = 0x10E94Cu;
label_10e94c:
    // 0x10e94c: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_10e950:
    // 0x10e950: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_10e954:
    if (ctx->pc == 0x10E954u) {
        ctx->pc = 0x10E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E950u;
        // 0x10e954: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E958u;
        goto label_10e958;
    }
    ctx->pc = 0x10E950u;
    {
        const bool branch_taken_0x10e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E950u;
        // 0x10e954: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e950) {
            ctx->pc = 0x10E990u;
            goto label_10e990;
        }
    }
    ctx->pc = 0x10E958u;
label_10e958:
    // 0x10e958: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x10e958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_10e95c:
    // 0x10e95c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_10e960:
    // 0x10e960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e964:
    // 0x10e964: 0x2406011b  addiu       $a2, $zero, 0x11B
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_10e968:
    // 0x10e968: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10e968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e96c:
    // 0x10e96c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e96cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e970:
    // 0x10e970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10e970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e974:
    // 0x10e974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10e974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e978:
    // 0x10e978: 0xc0b2e92  jal         func_2CBA48
label_10e97c:
    if (ctx->pc == 0x10E97Cu) {
        ctx->pc = 0x10E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E978u;
        // 0x10e97c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E980u;
        goto label_10e980;
    }
    ctx->pc = 0x10E978u;
    SET_GPR_U32(ctx, 31, 0x10E980u);
    ctx->pc = 0x10E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E978u;
    // 0x10e97c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10E978u, 0x10E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E980u;
label_10e980:
    // 0x10e980: 0x10000003  b           . + 4 + (0x3 << 2)
label_10e984:
    if (ctx->pc == 0x10E984u) {
        ctx->pc = 0x10E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E980u;
        // 0x10e984: 0xae221620  sw          $v0, 0x1620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E988u;
        goto label_10e988;
    }
    ctx->pc = 0x10E980u;
    {
        const bool branch_taken_0x10e980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E980u;
        // 0x10e984: 0xae221620  sw          $v0, 0x1620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e980) {
            ctx->pc = 0x10E990u;
            goto label_10e990;
        }
    }
    ctx->pc = 0x10E988u;
label_10e988:
    // 0x10e988: 0xe63415c4  swc1        $f20, 0x15C4($s1)
    ctx->pc = 0x10e988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
label_10e98c:
    // 0x10e98c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x10e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
label_10e990:
    // 0x10e990: 0xc62115c4  lwc1        $f1, 0x15C4($s1)
    ctx->pc = 0x10e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e994:
    // 0x10e994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e998:
    // 0x10e998: 0x0  nop
    ctx->pc = 0x10e998u;
    // NOP
label_10e99c:
    // 0x10e99c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10e99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e9a0:
    // 0x10e9a0: 0x0  nop
    ctx->pc = 0x10e9a0u;
    // NOP
label_10e9a4:
    // 0x10e9a4: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_10e9a8:
    if (ctx->pc == 0x10E9A8u) {
        ctx->pc = 0x10E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9A4u;
        // 0x10e9a8: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E9ACu;
        goto label_10e9ac;
    }
    ctx->pc = 0x10E9A4u;
    {
        const bool branch_taken_0x10e9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e9a4) {
            ctx->pc = 0x10E9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E9A4u;
            // 0x10e9a8: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EA50u;
            goto label_10ea50;
        }
    }
    ctx->pc = 0x10E9ACu;
label_10e9ac:
    // 0x10e9ac: 0x10000028  b           . + 4 + (0x28 << 2)
label_10e9b0:
    if (ctx->pc == 0x10E9B0u) {
        ctx->pc = 0x10E9B4u;
        goto label_10e9b4;
    }
    ctx->pc = 0x10E9ACu;
    {
        const bool branch_taken_0x10e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e9ac) {
            ctx->pc = 0x10EA50u;
            goto label_10ea50;
        }
    }
    ctx->pc = 0x10E9B4u;
label_10e9b4:
    // 0x10e9b4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_10e9b8:
    // 0x10e9b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_10e9bc:
    if (ctx->pc == 0x10E9BCu) {
        ctx->pc = 0x10E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9B8u;
        // 0x10e9bc: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E9C0u;
        goto label_10e9c0;
    }
    ctx->pc = 0x10E9B8u;
    {
        const bool branch_taken_0x10e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e9b8) {
            ctx->pc = 0x10E9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E9B8u;
            // 0x10e9bc: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9DCu;
            goto label_10e9dc;
        }
    }
    ctx->pc = 0x10E9C0u;
label_10e9c0:
    // 0x10e9c0: 0xc0b6dac  jal         func_2DB6B0
label_10e9c4:
    if (ctx->pc == 0x10E9C4u) {
        ctx->pc = 0x10E9C8u;
        goto label_10e9c8;
    }
    ctx->pc = 0x10E9C0u;
    SET_GPR_U32(ctx, 31, 0x10E9C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10E9C0u, 0x10E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9C8u;
label_10e9c8:
    // 0x10e9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e9cc:
    // 0x10e9cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e9d0:
    // 0x10e9d0: 0xc0c1880  jal         func_306200
label_10e9d4:
    if (ctx->pc == 0x10E9D4u) {
        ctx->pc = 0x10E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9D0u;
        // 0x10e9d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E9D8u;
        goto label_10e9d8;
    }
    ctx->pc = 0x10E9D0u;
    SET_GPR_U32(ctx, 31, 0x10E9D8u);
    ctx->pc = 0x10E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9D0u;
    // 0x10e9d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x10E9D0u, 0x10E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9D8u;
label_10e9d8:
    // 0x10e9d8: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_10e9dc:
    // 0x10e9dc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_10e9e0:
    if (ctx->pc == 0x10E9E0u) {
        ctx->pc = 0x10E9E4u;
        goto label_10e9e4;
    }
    ctx->pc = 0x10E9DCu;
    {
        const bool branch_taken_0x10e9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e9dc) {
            ctx->pc = 0x10EA50u;
            goto label_10ea50;
        }
    }
    ctx->pc = 0x10E9E4u;
label_10e9e4:
    // 0x10e9e4: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x10e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e9e8:
    // 0x10e9e8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10e9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_10e9ec:
    // 0x10e9ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e9f0:
    // 0x10e9f0: 0x0  nop
    ctx->pc = 0x10e9f0u;
    // NOP
label_10e9f4:
    // 0x10e9f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10e9f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e9f8:
    // 0x10e9f8: 0x0  nop
    ctx->pc = 0x10e9f8u;
    // NOP
label_10e9fc:
    // 0x10e9fc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_10ea00:
    if (ctx->pc == 0x10EA00u) {
        ctx->pc = 0x10EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9FCu;
        // 0x10ea00: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA04u;
        goto label_10ea04;
    }
    ctx->pc = 0x10E9FCu;
    {
        const bool branch_taken_0x10e9fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9FCu;
        // 0x10ea00: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9fc) {
            ctx->pc = 0x10EA3Cu;
            goto label_10ea3c;
        }
    }
    ctx->pc = 0x10EA04u;
label_10ea04:
    // 0x10ea04: 0xc0b6dac  jal         func_2DB6B0
label_10ea08:
    if (ctx->pc == 0x10EA08u) {
        ctx->pc = 0x10EA0Cu;
        goto label_10ea0c;
    }
    ctx->pc = 0x10EA04u;
    SET_GPR_U32(ctx, 31, 0x10EA0Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10EA04u, 0x10EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA0Cu;
label_10ea0c:
    // 0x10ea0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ea10:
    // 0x10ea10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ea14:
    // 0x10ea14: 0xc0c1880  jal         func_306200
label_10ea18:
    if (ctx->pc == 0x10EA18u) {
        ctx->pc = 0x10EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA14u;
        // 0x10ea18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA1Cu;
        goto label_10ea1c;
    }
    ctx->pc = 0x10EA14u;
    SET_GPR_U32(ctx, 31, 0x10EA1Cu);
    ctx->pc = 0x10EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA14u;
    // 0x10ea18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x10EA14u, 0x10EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA1Cu;
label_10ea1c:
    // 0x10ea1c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10ea1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_10ea20:
    // 0x10ea20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ea24:
    // 0x10ea24: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x10ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_10ea28:
    // 0x10ea28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10ea28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ea2c:
    // 0x10ea2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ea2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ea30:
    // 0x10ea30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ea34:
    // 0x10ea34: 0xc0c194a  jal         func_306528
label_10ea38:
    if (ctx->pc == 0x10EA38u) {
        ctx->pc = 0x10EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA34u;
        // 0x10ea38: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA3Cu;
        goto label_10ea3c;
    }
    ctx->pc = 0x10EA34u;
    SET_GPR_U32(ctx, 31, 0x10EA3Cu);
    ctx->pc = 0x10EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA34u;
    // 0x10ea38: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10EA34u, 0x10EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA3Cu;
label_10ea3c:
    // 0x10ea3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_10ea40:
    // 0x10ea40: 0x8e251620  lw          $a1, 0x1620($s1)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5664)));
label_10ea44:
    // 0x10ea44: 0xc0b2ee8  jal         func_2CBBA0
label_10ea48:
    if (ctx->pc == 0x10EA48u) {
        ctx->pc = 0x10EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA44u;
        // 0x10ea48: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA4Cu;
        goto label_10ea4c;
    }
    ctx->pc = 0x10EA44u;
    SET_GPR_U32(ctx, 31, 0x10EA4Cu);
    ctx->pc = 0x10EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA44u;
    // 0x10ea48: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x10EA44u, 0x10EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA4Cu;
label_10ea4c:
    // 0x10ea4c: 0xae201620  sw          $zero, 0x1620($s1)
    ctx->pc = 0x10ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
label_10ea50:
    // 0x10ea50: 0xc055f06  jal         func_157C18
label_10ea54:
    if (ctx->pc == 0x10EA54u) {
        ctx->pc = 0x10EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA50u;
        // 0x10ea54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA58u;
        goto label_10ea58;
    }
    ctx->pc = 0x10EA50u;
    SET_GPR_U32(ctx, 31, 0x10EA58u);
    ctx->pc = 0x10EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA50u;
    // 0x10ea54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10EA50u, 0x10EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA58u;
label_10ea58:
    // 0x10ea58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ea5c:
    if (ctx->pc == 0x10EA5Cu) {
        ctx->pc = 0x10EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA58u;
        // 0x10ea5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA60u;
        goto label_10ea60;
    }
    ctx->pc = 0x10EA58u;
    {
        const bool branch_taken_0x10ea58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA58u;
        // 0x10ea5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea58) {
            ctx->pc = 0x10EA7Cu;
            goto label_10ea7c;
        }
    }
    ctx->pc = 0x10EA60u;
label_10ea60:
    // 0x10ea60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ea64:
    // 0x10ea64: 0xc0493d8  jal         func_124F60
label_10ea68:
    if (ctx->pc == 0x10EA68u) {
        ctx->pc = 0x10EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA64u;
        // 0x10ea68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA6Cu;
        goto label_10ea6c;
    }
    ctx->pc = 0x10EA64u;
    SET_GPR_U32(ctx, 31, 0x10EA6Cu);
    ctx->pc = 0x10EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA64u;
    // 0x10ea68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10EA64u, 0x10EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA6Cu;
label_10ea6c:
    // 0x10ea6c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10ea6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10ea70:
    // 0x10ea70: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10ea70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_10ea74:
    // 0x10ea74: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10ea74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10ea78:
    // 0x10ea78: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10ea78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10ea7c:
    // 0x10ea7c: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10ea80:
    // 0x10ea80: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_10ea84:
    if (ctx->pc == 0x10EA84u) {
        ctx->pc = 0x10EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA80u;
        // 0x10ea84: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA88u;
        goto label_10ea88;
    }
    ctx->pc = 0x10EA80u;
    {
        const bool branch_taken_0x10ea80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea80) {
            ctx->pc = 0x10EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA80u;
            // 0x10ea84: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EAD8u;
            goto label_10ead8;
        }
    }
    ctx->pc = 0x10EA88u;
label_10ea88:
    // 0x10ea88: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10ea8c:
    // 0x10ea8c: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10ea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10ea90:
    // 0x10ea90: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10ea90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10ea94:
    // 0x10ea94: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10ea98:
    // 0x10ea98: 0x40f809  jalr        $v0
label_10ea9c:
    if (ctx->pc == 0x10EA9Cu) {
        ctx->pc = 0x10EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA98u;
        // 0x10ea9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAA0u;
        goto label_10eaa0;
    }
    ctx->pc = 0x10EA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10EAA0u);
        ctx->pc = 0x10EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA98u;
        // 0x10ea9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA98u, 0x10EAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EAA0u;
label_10eaa0:
    // 0x10eaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10eaa4:
    // 0x10eaa4: 0xc07dfac  jal         func_1F7EB0
label_10eaa8:
    if (ctx->pc == 0x10EAA8u) {
        ctx->pc = 0x10EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAA4u;
        // 0x10eaa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAACu;
        goto label_10eaac;
    }
    ctx->pc = 0x10EAA4u;
    SET_GPR_U32(ctx, 31, 0x10EAACu);
    ctx->pc = 0x10EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAA4u;
    // 0x10eaa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x10EAA4u, 0x10EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAACu;
label_10eaac:
    // 0x10eaac: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x10eaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_10eab0:
    // 0x10eab0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x10eab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_10eab4:
    // 0x10eab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10eab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10eab8:
    // 0x10eab8: 0x0  nop
    ctx->pc = 0x10eab8u;
    // NOP
label_10eabc:
    // 0x10eabc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10eabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10eac0:
    // 0x10eac0: 0x0  nop
    ctx->pc = 0x10eac0u;
    // NOP
label_10eac4:
    // 0x10eac4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_10eac8:
    if (ctx->pc == 0x10EAC8u) {
        ctx->pc = 0x10EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAC4u;
        // 0x10eac8: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EACCu;
        goto label_10eacc;
    }
    ctx->pc = 0x10EAC4u;
    {
        const bool branch_taken_0x10eac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10eac4) {
            ctx->pc = 0x10EAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EAC4u;
            // 0x10eac8: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EAD8u;
            goto label_10ead8;
        }
    }
    ctx->pc = 0x10EACCu;
label_10eacc:
    // 0x10eacc: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x10eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_10ead0:
    // 0x10ead0: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x10ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_10ead4:
    // 0x10ead4: 0xc6211588  lwc1        $f1, 0x1588($s1)
    ctx->pc = 0x10ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10ead8:
    // 0x10ead8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eadc:
    // 0x10eadc: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x10eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10eae0:
    // 0x10eae0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_10eae4:
    // 0x10eae4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10eae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_10eae8:
    // 0x10eae8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10eae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10eaec:
    // 0x10eaec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10eaecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_10eaf0:
    // 0x10eaf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10eaf4:
    // 0x10eaf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10eaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10eaf8:
    // 0x10eaf8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10eaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_10eafc:
    // 0x10eafc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10eafcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10eb00:
    // 0x10eb00: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x10eb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_10eb04:
    // 0x10eb04: 0xc053e7c  jal         func_14F9F0
label_10eb08:
    if (ctx->pc == 0x10EB08u) {
        ctx->pc = 0x10EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB04u;
        // 0x10eb08: 0xe6211588  swc1        $f1, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB0Cu;
        goto label_10eb0c;
    }
    ctx->pc = 0x10EB04u;
    SET_GPR_U32(ctx, 31, 0x10EB0Cu);
    ctx->pc = 0x10EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB04u;
    // 0x10eb08: 0xe6211588  swc1        $f1, 0x1588($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10EB04u, 0x10EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB0Cu;
label_10eb0c:
    // 0x10eb0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10eb0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10eb10:
    // 0x10eb10: 0xc053e4a  jal         func_14F928
label_10eb14:
    if (ctx->pc == 0x10EB14u) {
        ctx->pc = 0x10EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB10u;
        // 0x10eb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB18u;
        goto label_10eb18;
    }
    ctx->pc = 0x10EB10u;
    SET_GPR_U32(ctx, 31, 0x10EB18u);
    ctx->pc = 0x10EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB10u;
    // 0x10eb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10EB10u, 0x10EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB18u;
label_10eb18:
    // 0x10eb18: 0xc62015c0  lwc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10eb1c:
    // 0x10eb1c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10eb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_10eb20:
    // 0x10eb20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10eb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10eb24:
    // 0x10eb24: 0x0  nop
    ctx->pc = 0x10eb24u;
    // NOP
label_10eb28:
    // 0x10eb28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10eb28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10eb2c:
    // 0x10eb2c: 0x0  nop
    ctx->pc = 0x10eb2cu;
    // NOP
label_10eb30:
    // 0x10eb30: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_10eb34:
    if (ctx->pc == 0x10EB34u) {
        ctx->pc = 0x10EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB30u;
        // 0x10eb34: 0xe6201610  swc1        $f0, 0x1610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5648), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB38u;
        goto label_10eb38;
    }
    ctx->pc = 0x10EB30u;
    {
        const bool branch_taken_0x10eb30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB30u;
        // 0x10eb34: 0xe6201610  swc1        $f0, 0x1610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb30) {
            ctx->pc = 0x10EB70u;
            goto label_10eb70;
        }
    }
    ctx->pc = 0x10EB38u;
label_10eb38:
    // 0x10eb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eb3c:
    // 0x10eb3c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10eb40:
    // 0x10eb40: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10eb44:
    // 0x10eb44: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x10eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10eb48:
    // 0x10eb48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10eb48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eb4c:
    // 0x10eb4c: 0xc042902  jal         func_10A408
label_10eb50:
    if (ctx->pc == 0x10EB50u) {
        ctx->pc = 0x10EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB4Cu;
        // 0x10eb50: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB54u;
        goto label_10eb54;
    }
    ctx->pc = 0x10EB4Cu;
    SET_GPR_U32(ctx, 31, 0x10EB54u);
    ctx->pc = 0x10EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB4Cu;
    // 0x10eb50: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10EB4Cu, 0x10EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB54u;
label_10eb54:
    // 0x10eb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eb58:
    // 0x10eb58: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10eb5c:
    // 0x10eb5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10eb60:
    // 0x10eb60: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x10eb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10eb64:
    // 0x10eb64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10eb64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eb68:
    // 0x10eb68: 0xc042908  jal         func_10A420
label_10eb6c:
    if (ctx->pc == 0x10EB6Cu) {
        ctx->pc = 0x10EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB68u;
        // 0x10eb6c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB70u;
        goto label_10eb70;
    }
    ctx->pc = 0x10EB68u;
    SET_GPR_U32(ctx, 31, 0x10EB70u);
    ctx->pc = 0x10EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB68u;
    // 0x10eb6c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10EB68u, 0x10EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB70u;
label_10eb70:
    // 0x10eb70: 0xc04290e  jal         func_10A438
label_10eb74:
    if (ctx->pc == 0x10EB74u) {
        ctx->pc = 0x10EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB70u;
        // 0x10eb74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB78u;
        goto label_10eb78;
    }
    ctx->pc = 0x10EB70u;
    SET_GPR_U32(ctx, 31, 0x10EB78u);
    ctx->pc = 0x10EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB70u;
    // 0x10eb74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10EB70u, 0x10EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB78u;
label_10eb78:
    // 0x10eb78: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10eb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10eb7c:
    // 0x10eb7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x10eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_10eb80:
    // 0x10eb80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_10eb84:
    if (ctx->pc == 0x10EB84u) {
        ctx->pc = 0x10EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB80u;
        // 0x10eb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB88u;
        goto label_10eb88;
    }
    ctx->pc = 0x10EB80u;
    {
        const bool branch_taken_0x10eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB80u;
        // 0x10eb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb80) {
            ctx->pc = 0x10EBBCu;
            goto label_10ebbc;
        }
    }
    ctx->pc = 0x10EB88u;
label_10eb88:
    // 0x10eb88: 0x862205f0  lh          $v0, 0x5F0($s1)
    ctx->pc = 0x10eb88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1520)));
label_10eb8c:
    // 0x10eb8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10eb90:
    if (ctx->pc == 0x10EB90u) {
        ctx->pc = 0x10EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB8Cu;
        // 0x10eb90: 0x962405f0  lhu         $a0, 0x5F0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB94u;
        goto label_10eb94;
    }
    ctx->pc = 0x10EB8Cu;
    {
        const bool branch_taken_0x10eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB8Cu;
        // 0x10eb90: 0x962405f0  lhu         $a0, 0x5F0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb8c) {
            ctx->pc = 0x10EBB0u;
            goto label_10ebb0;
        }
    }
    ctx->pc = 0x10EB94u;
label_10eb94:
    // 0x10eb94: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x10eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_10eb98:
    // 0x10eb98: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_10eb9c:
    // 0x10eb9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_10eba0:
    // 0x10eba0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10eba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10eba4:
    // 0x10eba4: 0xa62405f0  sh          $a0, 0x5F0($s1)
    ctx->pc = 0x10eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1520), (uint16_t)GPR_U32(ctx, 4));
label_10eba8:
    // 0x10eba8: 0x10000003  b           . + 4 + (0x3 << 2)
label_10ebac:
    if (ctx->pc == 0x10EBACu) {
        ctx->pc = 0x10EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBA8u;
        // 0x10ebac: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBB0u;
        goto label_10ebb0;
    }
    ctx->pc = 0x10EBA8u;
    {
        const bool branch_taken_0x10eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBA8u;
        // 0x10ebac: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eba8) {
            ctx->pc = 0x10EBB8u;
            goto label_10ebb8;
        }
    }
    ctx->pc = 0x10EBB0u;
label_10ebb0:
    // 0x10ebb0: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10ebb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10ebb4:
    // 0x10ebb4: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10ebb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_10ebb8:
    // 0x10ebb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ebbc:
    // 0x10ebbc: 0xc048e4e  jal         func_123938
label_10ebc0:
    if (ctx->pc == 0x10EBC0u) {
        ctx->pc = 0x10EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBBCu;
        // 0x10ebc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBC4u;
        goto label_10ebc4;
    }
    ctx->pc = 0x10EBBCu;
    SET_GPR_U32(ctx, 31, 0x10EBC4u);
    ctx->pc = 0x10EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBBCu;
    // 0x10ebc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10EBBCu, 0x10EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBC4u;
label_10ebc4:
    // 0x10ebc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ebc8:
    if (ctx->pc == 0x10EBC8u) {
        ctx->pc = 0x10EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC4u;
        // 0x10ebc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBCCu;
        goto label_10ebcc;
    }
    ctx->pc = 0x10EBC4u;
    {
        const bool branch_taken_0x10ebc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC4u;
        // 0x10ebc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebc4) {
            ctx->pc = 0x10EBD8u;
            goto label_10ebd8;
        }
    }
    ctx->pc = 0x10EBCCu;
label_10ebcc:
    // 0x10ebcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ebd0:
    // 0x10ebd0: 0xc0493d8  jal         func_124F60
label_10ebd4:
    if (ctx->pc == 0x10EBD4u) {
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBD0u;
        // 0x10ebd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBD8u;
        goto label_10ebd8;
    }
    ctx->pc = 0x10EBD0u;
    SET_GPR_U32(ctx, 31, 0x10EBD8u);
    ctx->pc = 0x10EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBD0u;
    // 0x10ebd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10EBD0u, 0x10EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10ebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10ebdc:
    // 0x10ebdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ebdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ebe0:
    // 0x10ebe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ebe4:
    // 0x10ebe4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x10ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_10ebe8:
    // 0x10ebe8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10ebec:
    // 0x10ebec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10ebf0:
    // 0x10ebf0: 0x3e00008  jr          $ra
label_10ebf4:
    if (ctx->pc == 0x10EBF4u) {
        ctx->pc = 0x10EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF0u;
        // 0x10ebf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBF8u;
        goto label_fallthrough_0x10ebf0;
    }
    ctx->pc = 0x10EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF0u;
        // 0x10ebf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ebf0:
    ctx->pc = 0x10EBF8u;
}
