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

// Function: func_0030E660
// Address: 0x30e660 - 0x30ecf8
void func_0030E660_0x30e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030E660_0x30e660");
#endif

    switch (ctx->pc) {
        case 0x30e660u: goto label_30e660;
        case 0x30e664u: goto label_30e664;
        case 0x30e668u: goto label_30e668;
        case 0x30e66cu: goto label_30e66c;
        case 0x30e670u: goto label_30e670;
        case 0x30e674u: goto label_30e674;
        case 0x30e678u: goto label_30e678;
        case 0x30e67cu: goto label_30e67c;
        case 0x30e680u: goto label_30e680;
        case 0x30e684u: goto label_30e684;
        case 0x30e688u: goto label_30e688;
        case 0x30e68cu: goto label_30e68c;
        case 0x30e690u: goto label_30e690;
        case 0x30e694u: goto label_30e694;
        case 0x30e698u: goto label_30e698;
        case 0x30e69cu: goto label_30e69c;
        case 0x30e6a0u: goto label_30e6a0;
        case 0x30e6a4u: goto label_30e6a4;
        case 0x30e6a8u: goto label_30e6a8;
        case 0x30e6acu: goto label_30e6ac;
        case 0x30e6b0u: goto label_30e6b0;
        case 0x30e6b4u: goto label_30e6b4;
        case 0x30e6b8u: goto label_30e6b8;
        case 0x30e6bcu: goto label_30e6bc;
        case 0x30e6c0u: goto label_30e6c0;
        case 0x30e6c4u: goto label_30e6c4;
        case 0x30e6c8u: goto label_30e6c8;
        case 0x30e6ccu: goto label_30e6cc;
        case 0x30e6d0u: goto label_30e6d0;
        case 0x30e6d4u: goto label_30e6d4;
        case 0x30e6d8u: goto label_30e6d8;
        case 0x30e6dcu: goto label_30e6dc;
        case 0x30e6e0u: goto label_30e6e0;
        case 0x30e6e4u: goto label_30e6e4;
        case 0x30e6e8u: goto label_30e6e8;
        case 0x30e6ecu: goto label_30e6ec;
        case 0x30e6f0u: goto label_30e6f0;
        case 0x30e6f4u: goto label_30e6f4;
        case 0x30e6f8u: goto label_30e6f8;
        case 0x30e6fcu: goto label_30e6fc;
        case 0x30e700u: goto label_30e700;
        case 0x30e704u: goto label_30e704;
        case 0x30e708u: goto label_30e708;
        case 0x30e70cu: goto label_30e70c;
        case 0x30e710u: goto label_30e710;
        case 0x30e714u: goto label_30e714;
        case 0x30e718u: goto label_30e718;
        case 0x30e71cu: goto label_30e71c;
        case 0x30e720u: goto label_30e720;
        case 0x30e724u: goto label_30e724;
        case 0x30e728u: goto label_30e728;
        case 0x30e72cu: goto label_30e72c;
        case 0x30e730u: goto label_30e730;
        case 0x30e734u: goto label_30e734;
        case 0x30e738u: goto label_30e738;
        case 0x30e73cu: goto label_30e73c;
        case 0x30e740u: goto label_30e740;
        case 0x30e744u: goto label_30e744;
        case 0x30e748u: goto label_30e748;
        case 0x30e74cu: goto label_30e74c;
        case 0x30e750u: goto label_30e750;
        case 0x30e754u: goto label_30e754;
        case 0x30e758u: goto label_30e758;
        case 0x30e75cu: goto label_30e75c;
        case 0x30e760u: goto label_30e760;
        case 0x30e764u: goto label_30e764;
        case 0x30e768u: goto label_30e768;
        case 0x30e76cu: goto label_30e76c;
        case 0x30e770u: goto label_30e770;
        case 0x30e774u: goto label_30e774;
        case 0x30e778u: goto label_30e778;
        case 0x30e77cu: goto label_30e77c;
        case 0x30e780u: goto label_30e780;
        case 0x30e784u: goto label_30e784;
        case 0x30e788u: goto label_30e788;
        case 0x30e78cu: goto label_30e78c;
        case 0x30e790u: goto label_30e790;
        case 0x30e794u: goto label_30e794;
        case 0x30e798u: goto label_30e798;
        case 0x30e79cu: goto label_30e79c;
        case 0x30e7a0u: goto label_30e7a0;
        case 0x30e7a4u: goto label_30e7a4;
        case 0x30e7a8u: goto label_30e7a8;
        case 0x30e7acu: goto label_30e7ac;
        case 0x30e7b0u: goto label_30e7b0;
        case 0x30e7b4u: goto label_30e7b4;
        case 0x30e7b8u: goto label_30e7b8;
        case 0x30e7bcu: goto label_30e7bc;
        case 0x30e7c0u: goto label_30e7c0;
        case 0x30e7c4u: goto label_30e7c4;
        case 0x30e7c8u: goto label_30e7c8;
        case 0x30e7ccu: goto label_30e7cc;
        case 0x30e7d0u: goto label_30e7d0;
        case 0x30e7d4u: goto label_30e7d4;
        case 0x30e7d8u: goto label_30e7d8;
        case 0x30e7dcu: goto label_30e7dc;
        case 0x30e7e0u: goto label_30e7e0;
        case 0x30e7e4u: goto label_30e7e4;
        case 0x30e7e8u: goto label_30e7e8;
        case 0x30e7ecu: goto label_30e7ec;
        case 0x30e7f0u: goto label_30e7f0;
        case 0x30e7f4u: goto label_30e7f4;
        case 0x30e7f8u: goto label_30e7f8;
        case 0x30e7fcu: goto label_30e7fc;
        case 0x30e800u: goto label_30e800;
        case 0x30e804u: goto label_30e804;
        case 0x30e808u: goto label_30e808;
        case 0x30e80cu: goto label_30e80c;
        case 0x30e810u: goto label_30e810;
        case 0x30e814u: goto label_30e814;
        case 0x30e818u: goto label_30e818;
        case 0x30e81cu: goto label_30e81c;
        case 0x30e820u: goto label_30e820;
        case 0x30e824u: goto label_30e824;
        case 0x30e828u: goto label_30e828;
        case 0x30e82cu: goto label_30e82c;
        case 0x30e830u: goto label_30e830;
        case 0x30e834u: goto label_30e834;
        case 0x30e838u: goto label_30e838;
        case 0x30e83cu: goto label_30e83c;
        case 0x30e840u: goto label_30e840;
        case 0x30e844u: goto label_30e844;
        case 0x30e848u: goto label_30e848;
        case 0x30e84cu: goto label_30e84c;
        case 0x30e850u: goto label_30e850;
        case 0x30e854u: goto label_30e854;
        case 0x30e858u: goto label_30e858;
        case 0x30e85cu: goto label_30e85c;
        case 0x30e860u: goto label_30e860;
        case 0x30e864u: goto label_30e864;
        case 0x30e868u: goto label_30e868;
        case 0x30e86cu: goto label_30e86c;
        case 0x30e870u: goto label_30e870;
        case 0x30e874u: goto label_30e874;
        case 0x30e878u: goto label_30e878;
        case 0x30e87cu: goto label_30e87c;
        case 0x30e880u: goto label_30e880;
        case 0x30e884u: goto label_30e884;
        case 0x30e888u: goto label_30e888;
        case 0x30e88cu: goto label_30e88c;
        case 0x30e890u: goto label_30e890;
        case 0x30e894u: goto label_30e894;
        case 0x30e898u: goto label_30e898;
        case 0x30e89cu: goto label_30e89c;
        case 0x30e8a0u: goto label_30e8a0;
        case 0x30e8a4u: goto label_30e8a4;
        case 0x30e8a8u: goto label_30e8a8;
        case 0x30e8acu: goto label_30e8ac;
        case 0x30e8b0u: goto label_30e8b0;
        case 0x30e8b4u: goto label_30e8b4;
        case 0x30e8b8u: goto label_30e8b8;
        case 0x30e8bcu: goto label_30e8bc;
        case 0x30e8c0u: goto label_30e8c0;
        case 0x30e8c4u: goto label_30e8c4;
        case 0x30e8c8u: goto label_30e8c8;
        case 0x30e8ccu: goto label_30e8cc;
        case 0x30e8d0u: goto label_30e8d0;
        case 0x30e8d4u: goto label_30e8d4;
        case 0x30e8d8u: goto label_30e8d8;
        case 0x30e8dcu: goto label_30e8dc;
        case 0x30e8e0u: goto label_30e8e0;
        case 0x30e8e4u: goto label_30e8e4;
        case 0x30e8e8u: goto label_30e8e8;
        case 0x30e8ecu: goto label_30e8ec;
        case 0x30e8f0u: goto label_30e8f0;
        case 0x30e8f4u: goto label_30e8f4;
        case 0x30e8f8u: goto label_30e8f8;
        case 0x30e8fcu: goto label_30e8fc;
        case 0x30e900u: goto label_30e900;
        case 0x30e904u: goto label_30e904;
        case 0x30e908u: goto label_30e908;
        case 0x30e90cu: goto label_30e90c;
        case 0x30e910u: goto label_30e910;
        case 0x30e914u: goto label_30e914;
        case 0x30e918u: goto label_30e918;
        case 0x30e91cu: goto label_30e91c;
        case 0x30e920u: goto label_30e920;
        case 0x30e924u: goto label_30e924;
        case 0x30e928u: goto label_30e928;
        case 0x30e92cu: goto label_30e92c;
        case 0x30e930u: goto label_30e930;
        case 0x30e934u: goto label_30e934;
        case 0x30e938u: goto label_30e938;
        case 0x30e93cu: goto label_30e93c;
        case 0x30e940u: goto label_30e940;
        case 0x30e944u: goto label_30e944;
        case 0x30e948u: goto label_30e948;
        case 0x30e94cu: goto label_30e94c;
        case 0x30e950u: goto label_30e950;
        case 0x30e954u: goto label_30e954;
        case 0x30e958u: goto label_30e958;
        case 0x30e95cu: goto label_30e95c;
        case 0x30e960u: goto label_30e960;
        case 0x30e964u: goto label_30e964;
        case 0x30e968u: goto label_30e968;
        case 0x30e96cu: goto label_30e96c;
        case 0x30e970u: goto label_30e970;
        case 0x30e974u: goto label_30e974;
        case 0x30e978u: goto label_30e978;
        case 0x30e97cu: goto label_30e97c;
        case 0x30e980u: goto label_30e980;
        case 0x30e984u: goto label_30e984;
        case 0x30e988u: goto label_30e988;
        case 0x30e98cu: goto label_30e98c;
        case 0x30e990u: goto label_30e990;
        case 0x30e994u: goto label_30e994;
        case 0x30e998u: goto label_30e998;
        case 0x30e99cu: goto label_30e99c;
        case 0x30e9a0u: goto label_30e9a0;
        case 0x30e9a4u: goto label_30e9a4;
        case 0x30e9a8u: goto label_30e9a8;
        case 0x30e9acu: goto label_30e9ac;
        case 0x30e9b0u: goto label_30e9b0;
        case 0x30e9b4u: goto label_30e9b4;
        case 0x30e9b8u: goto label_30e9b8;
        case 0x30e9bcu: goto label_30e9bc;
        case 0x30e9c0u: goto label_30e9c0;
        case 0x30e9c4u: goto label_30e9c4;
        case 0x30e9c8u: goto label_30e9c8;
        case 0x30e9ccu: goto label_30e9cc;
        case 0x30e9d0u: goto label_30e9d0;
        case 0x30e9d4u: goto label_30e9d4;
        case 0x30e9d8u: goto label_30e9d8;
        case 0x30e9dcu: goto label_30e9dc;
        case 0x30e9e0u: goto label_30e9e0;
        case 0x30e9e4u: goto label_30e9e4;
        case 0x30e9e8u: goto label_30e9e8;
        case 0x30e9ecu: goto label_30e9ec;
        case 0x30e9f0u: goto label_30e9f0;
        case 0x30e9f4u: goto label_30e9f4;
        case 0x30e9f8u: goto label_30e9f8;
        case 0x30e9fcu: goto label_30e9fc;
        case 0x30ea00u: goto label_30ea00;
        case 0x30ea04u: goto label_30ea04;
        case 0x30ea08u: goto label_30ea08;
        case 0x30ea0cu: goto label_30ea0c;
        case 0x30ea10u: goto label_30ea10;
        case 0x30ea14u: goto label_30ea14;
        case 0x30ea18u: goto label_30ea18;
        case 0x30ea1cu: goto label_30ea1c;
        case 0x30ea20u: goto label_30ea20;
        case 0x30ea24u: goto label_30ea24;
        case 0x30ea28u: goto label_30ea28;
        case 0x30ea2cu: goto label_30ea2c;
        case 0x30ea30u: goto label_30ea30;
        case 0x30ea34u: goto label_30ea34;
        case 0x30ea38u: goto label_30ea38;
        case 0x30ea3cu: goto label_30ea3c;
        case 0x30ea40u: goto label_30ea40;
        case 0x30ea44u: goto label_30ea44;
        case 0x30ea48u: goto label_30ea48;
        case 0x30ea4cu: goto label_30ea4c;
        case 0x30ea50u: goto label_30ea50;
        case 0x30ea54u: goto label_30ea54;
        case 0x30ea58u: goto label_30ea58;
        case 0x30ea5cu: goto label_30ea5c;
        case 0x30ea60u: goto label_30ea60;
        case 0x30ea64u: goto label_30ea64;
        case 0x30ea68u: goto label_30ea68;
        case 0x30ea6cu: goto label_30ea6c;
        case 0x30ea70u: goto label_30ea70;
        case 0x30ea74u: goto label_30ea74;
        case 0x30ea78u: goto label_30ea78;
        case 0x30ea7cu: goto label_30ea7c;
        case 0x30ea80u: goto label_30ea80;
        case 0x30ea84u: goto label_30ea84;
        case 0x30ea88u: goto label_30ea88;
        case 0x30ea8cu: goto label_30ea8c;
        case 0x30ea90u: goto label_30ea90;
        case 0x30ea94u: goto label_30ea94;
        case 0x30ea98u: goto label_30ea98;
        case 0x30ea9cu: goto label_30ea9c;
        case 0x30eaa0u: goto label_30eaa0;
        case 0x30eaa4u: goto label_30eaa4;
        case 0x30eaa8u: goto label_30eaa8;
        case 0x30eaacu: goto label_30eaac;
        case 0x30eab0u: goto label_30eab0;
        case 0x30eab4u: goto label_30eab4;
        case 0x30eab8u: goto label_30eab8;
        case 0x30eabcu: goto label_30eabc;
        case 0x30eac0u: goto label_30eac0;
        case 0x30eac4u: goto label_30eac4;
        case 0x30eac8u: goto label_30eac8;
        case 0x30eaccu: goto label_30eacc;
        case 0x30ead0u: goto label_30ead0;
        case 0x30ead4u: goto label_30ead4;
        case 0x30ead8u: goto label_30ead8;
        case 0x30eadcu: goto label_30eadc;
        case 0x30eae0u: goto label_30eae0;
        case 0x30eae4u: goto label_30eae4;
        case 0x30eae8u: goto label_30eae8;
        case 0x30eaecu: goto label_30eaec;
        case 0x30eaf0u: goto label_30eaf0;
        case 0x30eaf4u: goto label_30eaf4;
        case 0x30eaf8u: goto label_30eaf8;
        case 0x30eafcu: goto label_30eafc;
        case 0x30eb00u: goto label_30eb00;
        case 0x30eb04u: goto label_30eb04;
        case 0x30eb08u: goto label_30eb08;
        case 0x30eb0cu: goto label_30eb0c;
        case 0x30eb10u: goto label_30eb10;
        case 0x30eb14u: goto label_30eb14;
        case 0x30eb18u: goto label_30eb18;
        case 0x30eb1cu: goto label_30eb1c;
        case 0x30eb20u: goto label_30eb20;
        case 0x30eb24u: goto label_30eb24;
        case 0x30eb28u: goto label_30eb28;
        case 0x30eb2cu: goto label_30eb2c;
        case 0x30eb30u: goto label_30eb30;
        case 0x30eb34u: goto label_30eb34;
        case 0x30eb38u: goto label_30eb38;
        case 0x30eb3cu: goto label_30eb3c;
        case 0x30eb40u: goto label_30eb40;
        case 0x30eb44u: goto label_30eb44;
        case 0x30eb48u: goto label_30eb48;
        case 0x30eb4cu: goto label_30eb4c;
        case 0x30eb50u: goto label_30eb50;
        case 0x30eb54u: goto label_30eb54;
        case 0x30eb58u: goto label_30eb58;
        case 0x30eb5cu: goto label_30eb5c;
        case 0x30eb60u: goto label_30eb60;
        case 0x30eb64u: goto label_30eb64;
        case 0x30eb68u: goto label_30eb68;
        case 0x30eb6cu: goto label_30eb6c;
        case 0x30eb70u: goto label_30eb70;
        case 0x30eb74u: goto label_30eb74;
        case 0x30eb78u: goto label_30eb78;
        case 0x30eb7cu: goto label_30eb7c;
        case 0x30eb80u: goto label_30eb80;
        case 0x30eb84u: goto label_30eb84;
        case 0x30eb88u: goto label_30eb88;
        case 0x30eb8cu: goto label_30eb8c;
        case 0x30eb90u: goto label_30eb90;
        case 0x30eb94u: goto label_30eb94;
        case 0x30eb98u: goto label_30eb98;
        case 0x30eb9cu: goto label_30eb9c;
        case 0x30eba0u: goto label_30eba0;
        case 0x30eba4u: goto label_30eba4;
        case 0x30eba8u: goto label_30eba8;
        case 0x30ebacu: goto label_30ebac;
        case 0x30ebb0u: goto label_30ebb0;
        case 0x30ebb4u: goto label_30ebb4;
        case 0x30ebb8u: goto label_30ebb8;
        case 0x30ebbcu: goto label_30ebbc;
        case 0x30ebc0u: goto label_30ebc0;
        case 0x30ebc4u: goto label_30ebc4;
        case 0x30ebc8u: goto label_30ebc8;
        case 0x30ebccu: goto label_30ebcc;
        case 0x30ebd0u: goto label_30ebd0;
        case 0x30ebd4u: goto label_30ebd4;
        case 0x30ebd8u: goto label_30ebd8;
        case 0x30ebdcu: goto label_30ebdc;
        case 0x30ebe0u: goto label_30ebe0;
        case 0x30ebe4u: goto label_30ebe4;
        case 0x30ebe8u: goto label_30ebe8;
        case 0x30ebecu: goto label_30ebec;
        case 0x30ebf0u: goto label_30ebf0;
        case 0x30ebf4u: goto label_30ebf4;
        case 0x30ebf8u: goto label_30ebf8;
        case 0x30ebfcu: goto label_30ebfc;
        case 0x30ec00u: goto label_30ec00;
        case 0x30ec04u: goto label_30ec04;
        case 0x30ec08u: goto label_30ec08;
        case 0x30ec0cu: goto label_30ec0c;
        case 0x30ec10u: goto label_30ec10;
        case 0x30ec14u: goto label_30ec14;
        case 0x30ec18u: goto label_30ec18;
        case 0x30ec1cu: goto label_30ec1c;
        case 0x30ec20u: goto label_30ec20;
        case 0x30ec24u: goto label_30ec24;
        case 0x30ec28u: goto label_30ec28;
        case 0x30ec2cu: goto label_30ec2c;
        case 0x30ec30u: goto label_30ec30;
        case 0x30ec34u: goto label_30ec34;
        case 0x30ec38u: goto label_30ec38;
        case 0x30ec3cu: goto label_30ec3c;
        case 0x30ec40u: goto label_30ec40;
        case 0x30ec44u: goto label_30ec44;
        case 0x30ec48u: goto label_30ec48;
        case 0x30ec4cu: goto label_30ec4c;
        case 0x30ec50u: goto label_30ec50;
        case 0x30ec54u: goto label_30ec54;
        case 0x30ec58u: goto label_30ec58;
        case 0x30ec5cu: goto label_30ec5c;
        case 0x30ec60u: goto label_30ec60;
        case 0x30ec64u: goto label_30ec64;
        case 0x30ec68u: goto label_30ec68;
        case 0x30ec6cu: goto label_30ec6c;
        case 0x30ec70u: goto label_30ec70;
        case 0x30ec74u: goto label_30ec74;
        case 0x30ec78u: goto label_30ec78;
        case 0x30ec7cu: goto label_30ec7c;
        case 0x30ec80u: goto label_30ec80;
        case 0x30ec84u: goto label_30ec84;
        case 0x30ec88u: goto label_30ec88;
        case 0x30ec8cu: goto label_30ec8c;
        case 0x30ec90u: goto label_30ec90;
        case 0x30ec94u: goto label_30ec94;
        case 0x30ec98u: goto label_30ec98;
        case 0x30ec9cu: goto label_30ec9c;
        case 0x30eca0u: goto label_30eca0;
        case 0x30eca4u: goto label_30eca4;
        case 0x30eca8u: goto label_30eca8;
        case 0x30ecacu: goto label_30ecac;
        case 0x30ecb0u: goto label_30ecb0;
        case 0x30ecb4u: goto label_30ecb4;
        case 0x30ecb8u: goto label_30ecb8;
        case 0x30ecbcu: goto label_30ecbc;
        case 0x30ecc0u: goto label_30ecc0;
        case 0x30ecc4u: goto label_30ecc4;
        case 0x30ecc8u: goto label_30ecc8;
        case 0x30ecccu: goto label_30eccc;
        case 0x30ecd0u: goto label_30ecd0;
        case 0x30ecd4u: goto label_30ecd4;
        case 0x30ecd8u: goto label_30ecd8;
        case 0x30ecdcu: goto label_30ecdc;
        case 0x30ece0u: goto label_30ece0;
        case 0x30ece4u: goto label_30ece4;
        case 0x30ece8u: goto label_30ece8;
        case 0x30ececu: goto label_30ecec;
        case 0x30ecf0u: goto label_30ecf0;
        case 0x30ecf4u: goto label_30ecf4;
        default: break;
    }

    ctx->pc = 0x30e660u;

label_30e660:
    // 0x30e660: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_30e664:
    // 0x30e664: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x30e664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_30e668:
    // 0x30e668: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x30e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_30e66c:
    // 0x30e66c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30e66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e670:
    // 0x30e670: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x30e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_30e674:
    // 0x30e674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30e674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e678:
    // 0x30e678: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x30e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_30e67c:
    // 0x30e67c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e680:
    // 0x30e680: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30e680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_30e684:
    // 0x30e684: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30e684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e688:
    // 0x30e688: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x30e688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_30e68c:
    // 0x30e68c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30e68cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e690:
    // 0x30e690: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x30e690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_30e694:
    // 0x30e694: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30e694u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e698:
    // 0x30e698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30e69c:
    // 0x30e69c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x30e69cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30e6a0:
    // 0x30e6a0: 0xde240040  ld          $a0, 0x40($s1)
    ctx->pc = 0x30e6a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_30e6a4:
    // 0x30e6a4: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x30e6a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_30e6a8:
    // 0x30e6a8: 0x4183e  dsrl32      $v1, $a0, 0
    ctx->pc = 0x30e6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 0));
label_30e6ac:
    // 0x30e6ac: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x30e6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
label_30e6b0:
    // 0x30e6b0: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x30e6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_30e6b4:
    // 0x30e6b4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x30e6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_30e6b8:
    // 0x30e6b8: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x30e6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_30e6bc:
    // 0x30e6bc: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x30e6bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_30e6c0:
    // 0x30e6c0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x30e6c0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_30e6c4:
    // 0x30e6c4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x30e6c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_30e6c8:
    // 0x30e6c8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x30e6c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_30e6cc:
    // 0x30e6cc: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x30e6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_30e6d0:
    // 0x30e6d0: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_30e6d4:
    if (ctx->pc == 0x30E6D4u) {
        ctx->pc = 0x30E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6D0u;
        // 0x30e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E6D8u;
        goto label_30e6d8;
    }
    ctx->pc = 0x30E6D0u;
    {
        const bool branch_taken_0x30e6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6D0u;
        // 0x30e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6d0) {
            ctx->pc = 0x30E83Cu;
            goto label_30e83c;
        }
    }
    ctx->pc = 0x30E6D8u;
label_30e6d8:
    // 0x30e6d8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x30e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_30e6dc:
    // 0x30e6dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x30e6dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_30e6e0:
    // 0x30e6e0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x30e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_30e6e4:
    // 0x30e6e4: 0x246308f0  addiu       $v1, $v1, 0x8F0
    ctx->pc = 0x30e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
label_30e6e8:
    // 0x30e6e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30e6ec:
    // 0x30e6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30e6f0:
    // 0x30e6f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x30e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30e6f4:
    // 0x30e6f4: 0x800008  jr          $a0
label_30e6f8:
    if (ctx->pc == 0x30E6F8u) {
        ctx->pc = 0x30E6FCu;
        goto label_30e6fc;
    }
    ctx->pc = 0x30E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E6F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30E6FCu;
label_30e6fc:
    // 0x30e6fc: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x30e6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_30e700:
    // 0x30e700: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_30e704:
    // 0x30e704: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x30e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_30e708:
    // 0x30e708: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x30e708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e70c:
    // 0x30e70c: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x30e70cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
label_30e710:
    // 0x30e710: 0x30d2000f  andi        $s2, $a2, 0xF
    ctx->pc = 0x30e710u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_30e714:
    // 0x30e714: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x30e714u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30e718:
    // 0x30e718: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
label_30e71c:
    if (ctx->pc == 0x30E71Cu) {
        ctx->pc = 0x30E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E718u;
        // 0x30e71c: 0x30730007  andi        $s3, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E720u;
        goto label_30e720;
    }
    ctx->pc = 0x30E718u;
    {
        const bool branch_taken_0x30e718 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E718u;
        // 0x30e71c: 0x30730007  andi        $s3, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e718) {
            ctx->pc = 0x30E814u;
            goto label_30e814;
        }
    }
    ctx->pc = 0x30E720u;
label_30e720:
    // 0x30e720: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x30e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_30e724:
    // 0x30e724: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x30e724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
label_30e728:
    // 0x30e728: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x30e728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e72c:
    // 0x30e72c: 0x10000040  b           . + 4 + (0x40 << 2)
label_30e730:
    if (ctx->pc == 0x30E730u) {
        ctx->pc = 0x30E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E72Cu;
        // 0x30e730: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E734u;
        goto label_30e734;
    }
    ctx->pc = 0x30E72Cu;
    {
        const bool branch_taken_0x30e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E72Cu;
        // 0x30e730: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e72c) {
            ctx->pc = 0x30E830u;
            goto label_30e830;
        }
    }
    ctx->pc = 0x30E734u;
label_30e734:
    // 0x30e734: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x30e734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_30e738:
    // 0x30e738: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30e738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_30e73c:
    // 0x30e73c: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x30e73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_30e740:
    // 0x30e740: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x30e740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30e744:
    // 0x30e744: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x30e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_30e748:
    // 0x30e748: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x30e748u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
label_30e74c:
    // 0x30e74c: 0x30d2000f  andi        $s2, $a2, 0xF
    ctx->pc = 0x30e74cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_30e750:
    // 0x30e750: 0x83a024  and         $s4, $a0, $v1
    ctx->pc = 0x30e750u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_30e754:
    // 0x30e754: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
label_30e758:
    if (ctx->pc == 0x30E758u) {
        ctx->pc = 0x30E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E754u;
        // 0x30e758: 0x30930007  andi        $s3, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E75Cu;
        goto label_30e75c;
    }
    ctx->pc = 0x30E754u;
    {
        const bool branch_taken_0x30e754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E754u;
        // 0x30e758: 0x30930007  andi        $s3, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e754) {
            ctx->pc = 0x30E814u;
            goto label_30e814;
        }
    }
    ctx->pc = 0x30E75Cu;
label_30e75c:
    // 0x30e75c: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x30e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
label_30e760:
    // 0x30e760: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x30e760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
label_30e764:
    // 0x30e764: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x30e764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e768:
    // 0x30e768: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30e768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30e76c:
    // 0x30e76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30e770:
    // 0x30e770: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x30e770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_30e774:
    // 0x30e774: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x30e774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_30e778:
    // 0x30e778: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x30e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_30e77c:
    // 0x30e77c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_30e780:
    if (ctx->pc == 0x30E780u) {
        ctx->pc = 0x30E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E77Cu;
        // 0x30e780: 0x2475ffff  addiu       $s5, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E784u;
        goto label_30e784;
    }
    ctx->pc = 0x30E77Cu;
    {
        const bool branch_taken_0x30e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E77Cu;
        // 0x30e780: 0x2475ffff  addiu       $s5, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e77c) {
            ctx->pc = 0x30E83Cu;
            goto label_30e83c;
        }
    }
    ctx->pc = 0x30E784u;
label_30e784:
    // 0x30e784: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x30e784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e788:
    // 0x30e788: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30e788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30e78c:
    // 0x30e78c: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x30e78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
label_30e790:
    // 0x30e790: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x30e790u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30e794:
    // 0x30e794: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x30e794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
label_30e798:
    // 0x30e798: 0x30d2000f  andi        $s2, $a2, 0xF
    ctx->pc = 0x30e798u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_30e79c:
    // 0x30e79c: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x30e79cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_30e7a0:
    // 0x30e7a0: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_30e7a4:
    if (ctx->pc == 0x30E7A4u) {
        ctx->pc = 0x30E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7A0u;
        // 0x30e7a4: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7A8u;
        goto label_30e7a8;
    }
    ctx->pc = 0x30E7A0u;
    {
        const bool branch_taken_0x30e7a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7A0u;
        // 0x30e7a4: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7a0) {
            ctx->pc = 0x30E814u;
            goto label_30e814;
        }
    }
    ctx->pc = 0x30E7A8u;
label_30e7a8:
    // 0x30e7a8: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x30e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_30e7ac:
    // 0x30e7ac: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x30e7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_30e7b0:
    // 0x30e7b0: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x30e7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e7b4:
    // 0x30e7b4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_30e7b8:
    if (ctx->pc == 0x30E7B8u) {
        ctx->pc = 0x30E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7B4u;
        // 0x30e7b8: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7BCu;
        goto label_30e7bc;
    }
    ctx->pc = 0x30E7B4u;
    {
        const bool branch_taken_0x30e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7B4u;
        // 0x30e7b8: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7b4) {
            ctx->pc = 0x30E830u;
            goto label_30e830;
        }
    }
    ctx->pc = 0x30E7BCu;
label_30e7bc:
    // 0x30e7bc: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x30e7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_30e7c0:
    // 0x30e7c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_30e7c4:
    // 0x30e7c4: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x30e7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_30e7c8:
    // 0x30e7c8: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x30e7c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
label_30e7cc:
    // 0x30e7cc: 0x30d2000f  andi        $s2, $a2, 0xF
    ctx->pc = 0x30e7ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_30e7d0:
    // 0x30e7d0: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x30e7d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30e7d4:
    // 0x30e7d4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_30e7d8:
    if (ctx->pc == 0x30E7D8u) {
        ctx->pc = 0x30E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7D4u;
        // 0x30e7d8: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7DCu;
        goto label_30e7dc;
    }
    ctx->pc = 0x30E7D4u;
    {
        const bool branch_taken_0x30e7d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7D4u;
        // 0x30e7d8: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7d4) {
            ctx->pc = 0x30E814u;
            goto label_30e814;
        }
    }
    ctx->pc = 0x30E7DCu;
label_30e7dc:
    // 0x30e7dc: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x30e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_30e7e0:
    // 0x30e7e0: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x30e7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30e7e4:
    // 0x30e7e4: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x30e7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e7e8:
    // 0x30e7e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_30e7ec:
    if (ctx->pc == 0x30E7ECu) {
        ctx->pc = 0x30E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7E8u;
        // 0x30e7ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7F0u;
        goto label_30e7f0;
    }
    ctx->pc = 0x30E7E8u;
    {
        const bool branch_taken_0x30e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7E8u;
        // 0x30e7ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7e8) {
            ctx->pc = 0x30E830u;
            goto label_30e830;
        }
    }
    ctx->pc = 0x30E7F0u;
label_30e7f0:
    // 0x30e7f0: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x30e7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30e7f4:
    // 0x30e7f4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30e7f8:
    // 0x30e7f8: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x30e7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
label_30e7fc:
    // 0x30e7fc: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x30e7fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_30e800:
    // 0x30e800: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x30e800u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_30e804:
    // 0x30e804: 0x30d2000f  andi        $s2, $a2, 0xF
    ctx->pc = 0x30e804u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_30e808:
    // 0x30e808: 0x65a024  and         $s4, $v1, $a1
    ctx->pc = 0x30e808u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_30e80c:
    // 0x30e80c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_30e810:
    if (ctx->pc == 0x30E810u) {
        ctx->pc = 0x30E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E80Cu;
        // 0x30e810: 0x30730007  andi        $s3, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E814u;
        goto label_30e814;
    }
    ctx->pc = 0x30E80Cu;
    {
        const bool branch_taken_0x30e80c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E80Cu;
        // 0x30e810: 0x30730007  andi        $s3, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e80c) {
            ctx->pc = 0x30E820u;
            goto label_30e820;
        }
    }
    ctx->pc = 0x30E814u;
label_30e814:
    // 0x30e814: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x30e814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_30e818:
    // 0x30e818: 0x10000008  b           . + 4 + (0x8 << 2)
label_30e81c:
    if (ctx->pc == 0x30E81Cu) {
        ctx->pc = 0x30E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E818u;
        // 0x30e81c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E820u;
        goto label_30e820;
    }
    ctx->pc = 0x30E818u;
    {
        const bool branch_taken_0x30e818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E818u;
        // 0x30e81c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e818) {
            ctx->pc = 0x30E83Cu;
            goto label_30e83c;
        }
    }
    ctx->pc = 0x30E820u;
label_30e820:
    // 0x30e820: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_30e824:
    // 0x30e824: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x30e824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_30e828:
    // 0x30e828: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x30e828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e82c:
    // 0x30e82c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x30e82cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_30e830:
    // 0x30e830: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x30e830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_30e834:
    // 0x30e834: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x30e834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_30e838:
    // 0x30e838: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x30e838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30e83c:
    // 0x30e83c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_30e840:
    if (ctx->pc == 0x30E840u) {
        ctx->pc = 0x30E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E83Cu;
        // 0x30e840: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E844u;
        goto label_30e844;
    }
    ctx->pc = 0x30E83Cu;
    {
        const bool branch_taken_0x30e83c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E83Cu;
        // 0x30e840: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e83c) {
            ctx->pc = 0x30E860u;
            goto label_30e860;
        }
    }
    ctx->pc = 0x30E844u;
label_30e844:
    // 0x30e844: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x30e844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_30e848:
    // 0x30e848: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x30e848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_30e84c:
    // 0x30e84c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_30e850:
    // 0x30e850: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30e850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_30e854:
    // 0x30e854: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30e854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_30e858:
    // 0x30e858: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30e858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_30e85c:
    // 0x30e85c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_30e860:
    // 0x30e860: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30e864:
    // 0x30e864: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x30e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_30e868:
    // 0x30e868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30e86c:
    // 0x30e86c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x30e86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_30e870:
    // 0x30e870: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_30e874:
    if (ctx->pc == 0x30E874u) {
        ctx->pc = 0x30E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E870u;
        // 0x30e874: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E878u;
        goto label_30e878;
    }
    ctx->pc = 0x30E870u;
    {
        const bool branch_taken_0x30e870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E870u;
        // 0x30e874: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e870) {
            ctx->pc = 0x30E8A4u;
            goto label_30e8a4;
        }
    }
    ctx->pc = 0x30E878u;
label_30e878:
    // 0x30e878: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x30e878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_30e87c:
    // 0x30e87c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x30e87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_30e880:
    // 0x30e880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30e880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30e884:
    // 0x30e884: 0x0  nop
    ctx->pc = 0x30e884u;
    // NOP
label_30e888:
    // 0x30e888: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30e888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30e88c:
    // 0x30e88c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_30e890:
    if (ctx->pc == 0x30E890u) {
        ctx->pc = 0x30E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E88Cu;
        // 0x30e890: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E894u;
        goto label_30e894;
    }
    ctx->pc = 0x30E88Cu;
    {
        const bool branch_taken_0x30e88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E88Cu;
        // 0x30e890: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e88c) {
            ctx->pc = 0x30EA10u;
            goto label_30ea10;
        }
    }
    ctx->pc = 0x30E894u;
label_30e894:
    // 0x30e894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30e898:
    // 0x30e898: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x30e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_30e89c:
    // 0x30e89c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_30e8a0:
    if (ctx->pc == 0x30E8A0u) {
        ctx->pc = 0x30E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E89Cu;
        // 0x30e8a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8A4u;
        goto label_30e8a4;
    }
    ctx->pc = 0x30E89Cu;
    {
        const bool branch_taken_0x30e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E89Cu;
        // 0x30e8a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e89c) {
            ctx->pc = 0x30E888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e888;
        }
    }
    ctx->pc = 0x30E8A4u;
label_30e8a4:
    // 0x30e8a4: 0xc0e5928  jal         func_3964A0
label_30e8a8:
    if (ctx->pc == 0x30E8A8u) {
        ctx->pc = 0x30E8ACu;
        goto label_30e8ac;
    }
    ctx->pc = 0x30E8A4u;
    SET_GPR_U32(ctx, 31, 0x30E8ACu);
    ctx->pc = 0x3964A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3964A0u, 0x30E8A4u, 0x30E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E8ACu;
label_30e8ac:
    // 0x30e8ac: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x30e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_30e8b0:
    // 0x30e8b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30e8b4:
    // 0x30e8b4: 0xc0e5802  jal         func_396008
label_30e8b8:
    if (ctx->pc == 0x30E8B8u) {
        ctx->pc = 0x30E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8B4u;
        // 0x30e8b8: 0x30447e00  andi        $a0, $v0, 0x7E00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8BCu;
        goto label_30e8bc;
    }
    ctx->pc = 0x30E8B4u;
    SET_GPR_U32(ctx, 31, 0x30E8BCu);
    ctx->pc = 0x30E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E8B4u;
    // 0x30e8b8: 0x30447e00  andi        $a0, $v0, 0x7E00 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x396008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396008u, 0x30E8B4u, 0x30E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E8BCu;
label_30e8bc:
    // 0x30e8bc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x30e8bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e8c0:
    // 0x30e8c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30e8c4:
    // 0x30e8c4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x30e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_30e8c8:
    // 0x30e8c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30e8cc:
    // 0x30e8cc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_30e8d0:
    // 0x30e8d0: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x30e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
label_30e8d4:
    // 0x30e8d4: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x30e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_30e8d8:
    // 0x30e8d8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x30e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_30e8dc:
    // 0x30e8dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30e8e0:
    // 0x30e8e0: 0x2251024  and         $v0, $s1, $a1
    ctx->pc = 0x30e8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
label_30e8e4:
    // 0x30e8e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x30e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_30e8e8:
    // 0x30e8e8: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_30e8ec:
    if (ctx->pc == 0x30E8ECu) {
        ctx->pc = 0x30E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8E8u;
        // 0x30e8ec: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8F0u;
        goto label_30e8f0;
    }
    ctx->pc = 0x30E8E8u;
    {
        const bool branch_taken_0x30e8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8E8u;
        // 0x30e8ec: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8e8) {
            ctx->pc = 0x30E90Cu;
            goto label_30e90c;
        }
    }
    ctx->pc = 0x30E8F0u;
label_30e8f0:
    // 0x30e8f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30e8f4:
    // 0x30e8f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30e8f8:
    // 0x30e8f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x30e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_30e8fc:
    // 0x30e8fc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x30e8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_30e900:
    // 0x30e900: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x30e900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_30e904:
    // 0x30e904: 0x10000005  b           . + 4 + (0x5 << 2)
label_30e908:
    if (ctx->pc == 0x30E908u) {
        ctx->pc = 0x30E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E904u;
        // 0x30e908: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E90Cu;
        goto label_30e90c;
    }
    ctx->pc = 0x30E904u;
    {
        const bool branch_taken_0x30e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E904u;
        // 0x30e908: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e904) {
            ctx->pc = 0x30E91Cu;
            goto label_30e91c;
        }
    }
    ctx->pc = 0x30E90Cu;
label_30e90c:
    // 0x30e90c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30e910:
    // 0x30e910: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30e914:
    // 0x30e914: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x30e914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_30e918:
    // 0x30e918: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x30e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_30e91c:
    // 0x30e91c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_30e920:
    // 0x30e920: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30e920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30e924:
    // 0x30e924: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x30e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_30e928:
    // 0x30e928: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x30e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_30e92c:
    // 0x30e92c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x30e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_30e930:
    // 0x30e930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30e934:
    // 0x30e934: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x30e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_30e938:
    // 0x30e938: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_30e93c:
    if (ctx->pc == 0x30E93Cu) {
        ctx->pc = 0x30E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E938u;
        // 0x30e93c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E940u;
        goto label_30e940;
    }
    ctx->pc = 0x30E938u;
    {
        const bool branch_taken_0x30e938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E938u;
        // 0x30e93c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e938) {
            ctx->pc = 0x30E96Cu;
            goto label_30e96c;
        }
    }
    ctx->pc = 0x30E940u;
label_30e940:
    // 0x30e940: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x30e940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_30e944:
    // 0x30e944: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x30e944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_30e948:
    // 0x30e948: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30e948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30e94c:
    // 0x30e94c: 0x0  nop
    ctx->pc = 0x30e94cu;
    // NOP
label_30e950:
    // 0x30e950: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30e950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30e954:
    // 0x30e954: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_30e958:
    if (ctx->pc == 0x30E958u) {
        ctx->pc = 0x30E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E954u;
        // 0x30e958: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E95Cu;
        goto label_30e95c;
    }
    ctx->pc = 0x30E954u;
    {
        const bool branch_taken_0x30e954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E954u;
        // 0x30e958: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e954) {
            ctx->pc = 0x30EA10u;
            goto label_30ea10;
        }
    }
    ctx->pc = 0x30E95Cu;
label_30e95c:
    // 0x30e95c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30e960:
    // 0x30e960: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x30e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_30e964:
    // 0x30e964: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_30e968:
    if (ctx->pc == 0x30E968u) {
        ctx->pc = 0x30E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E964u;
        // 0x30e968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E96Cu;
        goto label_30e96c;
    }
    ctx->pc = 0x30E964u;
    {
        const bool branch_taken_0x30e964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E964u;
        // 0x30e968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e964) {
            ctx->pc = 0x30E950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E96Cu;
label_30e96c:
    // 0x30e96c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x30e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_30e970:
    // 0x30e970: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_30e974:
    // 0x30e974: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x30e974u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_30e978:
    // 0x30e978: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30e978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_30e97c:
    // 0x30e97c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_30e980:
    if (ctx->pc == 0x30E980u) {
        ctx->pc = 0x30E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E97Cu;
        // 0x30e980: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E984u;
        goto label_30e984;
    }
    ctx->pc = 0x30E97Cu;
    {
        const bool branch_taken_0x30e97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E97Cu;
        // 0x30e980: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e97c) {
            ctx->pc = 0x30E9B8u;
            goto label_30e9b8;
        }
    }
    ctx->pc = 0x30E984u;
label_30e984:
    // 0x30e984: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x30e984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_30e988:
    // 0x30e988: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x30e988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_30e98c:
    // 0x30e98c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x30e98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_30e990:
    // 0x30e990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30e990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30e994:
    // 0x30e994: 0x0  nop
    ctx->pc = 0x30e994u;
    // NOP
label_30e998:
    // 0x30e998: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30e998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30e99c:
    // 0x30e99c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_30e9a0:
    if (ctx->pc == 0x30E9A0u) {
        ctx->pc = 0x30E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E99Cu;
        // 0x30e9a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E9A4u;
        goto label_30e9a4;
    }
    ctx->pc = 0x30E99Cu;
    {
        const bool branch_taken_0x30e99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E99Cu;
        // 0x30e9a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e99c) {
            ctx->pc = 0x30EA24u;
            goto label_30ea24;
        }
    }
    ctx->pc = 0x30E9A4u;
label_30e9a4:
    // 0x30e9a4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x30e9a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_30e9a8:
    // 0x30e9a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_30e9ac:
    // 0x30e9ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30e9b0:
    if (ctx->pc == 0x30E9B0u) {
        ctx->pc = 0x30E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ACu;
        // 0x30e9b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E9B4u;
        goto label_30e9b4;
    }
    ctx->pc = 0x30E9ACu;
    {
        const bool branch_taken_0x30e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ACu;
        // 0x30e9b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9ac) {
            ctx->pc = 0x30E998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e998;
        }
    }
    ctx->pc = 0x30E9B4u;
label_30e9b4:
    // 0x30e9b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30e9b8:
    // 0x30e9b8: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x30e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_30e9bc:
    // 0x30e9bc: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x30e9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_30e9c0:
    // 0x30e9c0: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x30e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_30e9c4:
    // 0x30e9c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x30e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_30e9c8:
    // 0x30e9c8: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x30e9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
label_30e9cc:
    // 0x30e9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e9d0:
    // 0x30e9d0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_30e9d4:
    // 0x30e9d4: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
label_30e9d8:
    if (ctx->pc == 0x30E9D8u) {
        ctx->pc = 0x30E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9D4u;
        // 0x30e9d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E9DCu;
        goto label_30e9dc;
    }
    ctx->pc = 0x30E9D4u;
    {
        const bool branch_taken_0x30e9d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9D4u;
        // 0x30e9d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9d4) {
            ctx->pc = 0x30EB14u;
            goto label_30eb14;
        }
    }
    ctx->pc = 0x30E9DCu;
label_30e9dc:
    // 0x30e9dc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x30e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_30e9e0:
    // 0x30e9e0: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x30e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
label_30e9e4:
    // 0x30e9e4: 0x2c41824  and         $v1, $s6, $a0
    ctx->pc = 0x30e9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
label_30e9e8:
    // 0x30e9e8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x30e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_30e9ec:
    // 0x30e9ec: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
label_30e9f0:
    if (ctx->pc == 0x30E9F0u) {
        ctx->pc = 0x30E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ECu;
        // 0x30e9f0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E9F4u;
        goto label_30e9f4;
    }
    ctx->pc = 0x30E9ECu;
    {
        const bool branch_taken_0x30e9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x30E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ECu;
        // 0x30e9f0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9ec) {
            ctx->pc = 0x30EAB4u;
            goto label_30eab4;
        }
    }
    ctx->pc = 0x30E9F4u;
label_30e9f4:
    // 0x30e9f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30e9f8:
    // 0x30e9f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30e9fc:
    // 0x30e9fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x30e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_30ea00:
    // 0x30ea00: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x30ea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_30ea04:
    // 0x30ea04: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x30ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_30ea08:
    // 0x30ea08: 0x1000002e  b           . + 4 + (0x2E << 2)
label_30ea0c:
    if (ctx->pc == 0x30EA0Cu) {
        ctx->pc = 0x30EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA08u;
        // 0x30ea0c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA10u;
        goto label_30ea10;
    }
    ctx->pc = 0x30EA08u;
    {
        const bool branch_taken_0x30ea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA08u;
        // 0x30ea0c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea08) {
            ctx->pc = 0x30EAC4u;
            goto label_30eac4;
        }
    }
    ctx->pc = 0x30EA10u;
label_30ea10:
    // 0x30ea10: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x30ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_30ea14:
    // 0x30ea14: 0xc0ec7ca  jal         func_3B1F28
label_30ea18:
    if (ctx->pc == 0x30EA18u) {
        ctx->pc = 0x30EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA14u;
        // 0x30ea18: 0x24840808  addiu       $a0, $a0, 0x808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA1Cu;
        goto label_30ea1c;
    }
    ctx->pc = 0x30EA14u;
    SET_GPR_U32(ctx, 31, 0x30EA1Cu);
    ctx->pc = 0x30EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA14u;
    // 0x30ea18: 0x24840808  addiu       $a0, $a0, 0x808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x30EA14u, 0x30EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA1Cu;
label_30ea1c:
    // 0x30ea1c: 0x100000ac  b           . + 4 + (0xAC << 2)
label_30ea20:
    if (ctx->pc == 0x30EA20u) {
        ctx->pc = 0x30EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA1Cu;
        // 0x30ea20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA24u;
        goto label_30ea24;
    }
    ctx->pc = 0x30EA1Cu;
    {
        const bool branch_taken_0x30ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA1Cu;
        // 0x30ea20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea1c) {
            ctx->pc = 0x30ECD0u;
            goto label_30ecd0;
        }
    }
    ctx->pc = 0x30EA24u;
label_30ea24:
    // 0x30ea24: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x30ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_30ea28:
    // 0x30ea28: 0xc0ec7ca  jal         func_3B1F28
label_30ea2c:
    if (ctx->pc == 0x30EA2Cu) {
        ctx->pc = 0x30EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA28u;
        // 0x30ea2c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA30u;
        goto label_30ea30;
    }
    ctx->pc = 0x30EA28u;
    SET_GPR_U32(ctx, 31, 0x30EA30u);
    ctx->pc = 0x30EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA28u;
    // 0x30ea2c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x30EA28u, 0x30EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA30u;
label_30ea30:
    // 0x30ea30: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_30ea34:
    // 0x30ea34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_30ea38:
    // 0x30ea38: 0x24423ce0  addiu       $v0, $v0, 0x3CE0
    ctx->pc = 0x30ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15584));
label_30ea3c:
    // 0x30ea3c: 0x34845000  ori         $a0, $a0, 0x5000
    ctx->pc = 0x30ea3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
label_30ea40:
    // 0x30ea40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ea40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30ea44:
    // 0x30ea44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30ea48:
    // 0x30ea48: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_30ea4c:
    // 0x30ea4c: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_30ea50:
    if (ctx->pc == 0x30EA50u) {
        ctx->pc = 0x30EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA4Cu;
        // 0x30ea50: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA54u;
        goto label_30ea54;
    }
    ctx->pc = 0x30EA4Cu;
    {
        const bool branch_taken_0x30ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA4Cu;
        // 0x30ea50: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea4c) {
            ctx->pc = 0x30ECD4u;
            goto label_30ecd4;
        }
    }
    ctx->pc = 0x30EA54u;
label_30ea54:
    // 0x30ea54: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x30ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_30ea58:
    // 0x30ea58: 0x10000003  b           . + 4 + (0x3 << 2)
label_30ea5c:
    if (ctx->pc == 0x30EA5Cu) {
        ctx->pc = 0x30EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA58u;
        // 0x30ea5c: 0x24840870  addiu       $a0, $a0, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA60u;
        goto label_30ea60;
    }
    ctx->pc = 0x30EA58u;
    {
        const bool branch_taken_0x30ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA58u;
        // 0x30ea5c: 0x24840870  addiu       $a0, $a0, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea58) {
            ctx->pc = 0x30EA68u;
            goto label_30ea68;
        }
    }
    ctx->pc = 0x30EA60u;
label_30ea60:
    // 0x30ea60: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x30ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_30ea64:
    // 0x30ea64: 0x248408b0  addiu       $a0, $a0, 0x8B0
    ctx->pc = 0x30ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2224));
label_30ea68:
    // 0x30ea68: 0xc0ec7ca  jal         func_3B1F28
label_30ea6c:
    if (ctx->pc == 0x30EA6Cu) {
        ctx->pc = 0x30EA70u;
        goto label_30ea70;
    }
    ctx->pc = 0x30EA68u;
    SET_GPR_U32(ctx, 31, 0x30EA70u);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x30EA68u, 0x30EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA70u;
label_30ea70:
    // 0x30ea70: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x30ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_30ea74:
    // 0x30ea74: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x30ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_30ea78:
    // 0x30ea78: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_30ea7c:
    // 0x30ea7c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_30ea80:
    // 0x30ea80: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x30ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_30ea84:
    // 0x30ea84: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x30ea84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
label_30ea88:
    // 0x30ea88: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30ea88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
label_30ea8c:
    // 0x30ea8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30ea90:
    // 0x30ea90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ea94:
    // 0x30ea94: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x30ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_30ea98:
    // 0x30ea98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30ea9c:
    // 0x30ea9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x30ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_30eaa0:
    // 0x30eaa0: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x30eaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
label_30eaa4:
    // 0x30eaa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30eaa8:
    // 0x30eaa8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x30eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_30eaac:
    // 0x30eaac: 0x10000089  b           . + 4 + (0x89 << 2)
label_30eab0:
    if (ctx->pc == 0x30EAB0u) {
        ctx->pc = 0x30EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAACu;
        // 0x30eab0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EAB4u;
        goto label_30eab4;
    }
    ctx->pc = 0x30EAACu;
    {
        const bool branch_taken_0x30eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAACu;
        // 0x30eab0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eaac) {
            ctx->pc = 0x30ECD4u;
            goto label_30ecd4;
        }
    }
    ctx->pc = 0x30EAB4u;
label_30eab4:
    // 0x30eab4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30eab8:
    // 0x30eab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30eab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30eabc:
    // 0x30eabc: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x30eabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_30eac0:
    // 0x30eac0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x30eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_30eac4:
    // 0x30eac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_30eac8:
    // 0x30eac8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30eacc:
    // 0x30eacc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x30eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_30ead0:
    // 0x30ead0: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x30ead0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_30ead4:
    // 0x30ead4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x30ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_30ead8:
    // 0x30ead8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30eadc:
    // 0x30eadc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x30eadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_30eae0:
    // 0x30eae0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_30eae4:
    if (ctx->pc == 0x30EAE4u) {
        ctx->pc = 0x30EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAE0u;
        // 0x30eae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EAE8u;
        goto label_30eae8;
    }
    ctx->pc = 0x30EAE0u;
    {
        const bool branch_taken_0x30eae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAE0u;
        // 0x30eae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eae0) {
            ctx->pc = 0x30EB14u;
            goto label_30eb14;
        }
    }
    ctx->pc = 0x30EAE8u;
label_30eae8:
    // 0x30eae8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30eaec:
    // 0x30eaec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x30eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_30eaf0:
    // 0x30eaf0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x30eaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_30eaf4:
    // 0x30eaf4: 0x0  nop
    ctx->pc = 0x30eaf4u;
    // NOP
label_30eaf8:
    // 0x30eaf8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30eaf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30eafc:
    // 0x30eafc: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_30eb00:
    if (ctx->pc == 0x30EB00u) {
        ctx->pc = 0x30EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAFCu;
        // 0x30eb00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB04u;
        goto label_30eb04;
    }
    ctx->pc = 0x30EAFCu;
    {
        const bool branch_taken_0x30eafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAFCu;
        // 0x30eb00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eafc) {
            ctx->pc = 0x30EA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea54;
        }
    }
    ctx->pc = 0x30EB04u;
label_30eb04:
    // 0x30eb04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30eb08:
    // 0x30eb08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x30eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_30eb0c:
    // 0x30eb0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_30eb10:
    if (ctx->pc == 0x30EB10u) {
        ctx->pc = 0x30EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB0Cu;
        // 0x30eb10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB14u;
        goto label_30eb14;
    }
    ctx->pc = 0x30EB0Cu;
    {
        const bool branch_taken_0x30eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB0Cu;
        // 0x30eb10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb0c) {
            ctx->pc = 0x30EAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30eaf8;
        }
    }
    ctx->pc = 0x30EB14u;
label_30eb14:
    // 0x30eb14: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
label_30eb18:
    if (ctx->pc == 0x30EB18u) {
        ctx->pc = 0x30EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB14u;
        // 0x30eb18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB1Cu;
        goto label_30eb1c;
    }
    ctx->pc = 0x30EB14u;
    {
        const bool branch_taken_0x30eb14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB14u;
        // 0x30eb18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb14) {
            ctx->pc = 0x30EB8Cu;
            goto label_30eb8c;
        }
    }
    ctx->pc = 0x30EB1Cu;
label_30eb1c:
    // 0x30eb1c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x30eb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_30eb20:
    // 0x30eb20: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x30eb20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_30eb24:
    // 0x30eb24: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x30eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_30eb28:
    // 0x30eb28: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x30eb28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_30eb2c:
    // 0x30eb2c: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x30eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_30eb30:
    // 0x30eb30: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x30eb30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
label_30eb34:
    // 0x30eb34: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x30eb34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
label_30eb38:
    // 0x30eb38: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x30eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_30eb3c:
    // 0x30eb3c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x30eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_30eb40:
    // 0x30eb40: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30eb44:
    if (ctx->pc == 0x30EB44u) {
        ctx->pc = 0x30EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB40u;
        // 0x30eb44: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB48u;
        goto label_30eb48;
    }
    ctx->pc = 0x30EB40u;
    {
        const bool branch_taken_0x30eb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB40u;
        // 0x30eb44: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb40) {
            ctx->pc = 0x30EB74u;
            goto label_30eb74;
        }
    }
    ctx->pc = 0x30EB48u;
label_30eb48:
    // 0x30eb48: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x30eb48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
label_30eb4c:
    // 0x30eb4c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x30eb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_30eb50:
    // 0x30eb50: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x30eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_30eb54:
    // 0x30eb54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30eb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30eb58:
    // 0x30eb58: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x30eb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30eb5c:
    // 0x30eb5c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_30eb60:
    if (ctx->pc == 0x30EB60u) {
        ctx->pc = 0x30EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB5Cu;
        // 0x30eb60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB64u;
        goto label_30eb64;
    }
    ctx->pc = 0x30EB5Cu;
    {
        const bool branch_taken_0x30eb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB5Cu;
        // 0x30eb60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb5c) {
            ctx->pc = 0x30EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea60;
        }
    }
    ctx->pc = 0x30EB64u;
label_30eb64:
    // 0x30eb64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30eb68:
    // 0x30eb68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_30eb6c:
    // 0x30eb6c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30eb70:
    if (ctx->pc == 0x30EB70u) {
        ctx->pc = 0x30EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB6Cu;
        // 0x30eb70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB74u;
        goto label_30eb74;
    }
    ctx->pc = 0x30EB6Cu;
    {
        const bool branch_taken_0x30eb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB6Cu;
        // 0x30eb70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb6c) {
            ctx->pc = 0x30EB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30eb58;
        }
    }
    ctx->pc = 0x30EB74u;
label_30eb74:
    // 0x30eb74: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x30eb74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_30eb78:
    // 0x30eb78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30eb7c:
    // 0x30eb7c: 0xd3182a  slt         $v1, $a2, $s3
    ctx->pc = 0x30eb7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_30eb80:
    // 0x30eb80: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x30eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_30eb84:
    // 0x30eb84: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_30eb88:
    if (ctx->pc == 0x30EB88u) {
        ctx->pc = 0x30EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB84u;
        // 0x30eb88: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB8Cu;
        goto label_30eb8c;
    }
    ctx->pc = 0x30EB84u;
    {
        const bool branch_taken_0x30eb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB84u;
        // 0x30eb88: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb84) {
            ctx->pc = 0x30EB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30eb38;
        }
    }
    ctx->pc = 0x30EB8Cu;
label_30eb8c:
    // 0x30eb8c: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
label_30eb90:
    if (ctx->pc == 0x30EB90u) {
        ctx->pc = 0x30EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB8Cu;
        // 0x30eb90: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB94u;
        goto label_30eb94;
    }
    ctx->pc = 0x30EB8Cu;
    {
        const bool branch_taken_0x30eb8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB8Cu;
        // 0x30eb90: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb8c) {
            ctx->pc = 0x30EC80u;
            goto label_30ec80;
        }
    }
    ctx->pc = 0x30EB94u;
label_30eb94:
    // 0x30eb94: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x30eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_30eb98:
    // 0x30eb98: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x30eb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_30eb9c:
    // 0x30eb9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30eba0:
    // 0x30eba0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_30eba4:
    // 0x30eba4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_30eba8:
    if (ctx->pc == 0x30EBA8u) {
        ctx->pc = 0x30EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBA4u;
        // 0x30eba8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBACu;
        goto label_30ebac;
    }
    ctx->pc = 0x30EBA4u;
    {
        const bool branch_taken_0x30eba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBA4u;
        // 0x30eba8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eba4) {
            ctx->pc = 0x30EBD8u;
            goto label_30ebd8;
        }
    }
    ctx->pc = 0x30EBACu;
label_30ebac:
    // 0x30ebac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x30ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_30ebb0:
    // 0x30ebb0: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x30ebb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_30ebb4:
    // 0x30ebb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30ebb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ebb8:
    // 0x30ebb8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30ebb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30ebbc:
    // 0x30ebbc: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_30ebc0:
    if (ctx->pc == 0x30EBC0u) {
        ctx->pc = 0x30EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBBCu;
        // 0x30ebc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBC4u;
        goto label_30ebc4;
    }
    ctx->pc = 0x30EBBCu;
    {
        const bool branch_taken_0x30ebbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBBCu;
        // 0x30ebc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebbc) {
            ctx->pc = 0x30EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea60;
        }
    }
    ctx->pc = 0x30EBC4u;
label_30ebc4:
    // 0x30ebc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30ebc8:
    // 0x30ebc8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30ebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_30ebcc:
    // 0x30ebcc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30ebd0:
    if (ctx->pc == 0x30EBD0u) {
        ctx->pc = 0x30EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBCCu;
        // 0x30ebd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBD4u;
        goto label_30ebd4;
    }
    ctx->pc = 0x30EBCCu;
    {
        const bool branch_taken_0x30ebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBCCu;
        // 0x30ebd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebcc) {
            ctx->pc = 0x30EBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ebb8;
        }
    }
    ctx->pc = 0x30EBD4u;
label_30ebd4:
    // 0x30ebd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30ebd8:
    // 0x30ebd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ebd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ebdc:
    // 0x30ebdc: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x30ebdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_30ebe0:
    // 0x30ebe0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x30ebe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_30ebe4:
    // 0x30ebe4: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_30ebe8:
    if (ctx->pc == 0x30EBE8u) {
        ctx->pc = 0x30EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBE4u;
        // 0x30ebe8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBECu;
        goto label_30ebec;
    }
    ctx->pc = 0x30EBE4u;
    {
        const bool branch_taken_0x30ebe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBE4u;
        // 0x30ebe8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebe4) {
            ctx->pc = 0x30EC14u;
            goto label_30ec14;
        }
    }
    ctx->pc = 0x30EBECu;
label_30ebec:
    // 0x30ebec: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x30ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_30ebf0:
    // 0x30ebf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_30ebf4:
    // 0x30ebf4: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x30ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_30ebf8:
    // 0x30ebf8: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x30ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_30ebfc:
    // 0x30ebfc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x30ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_30ec00:
    // 0x30ec00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x30ec00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_30ec04:
    // 0x30ec04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30ec08:
    // 0x30ec08: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x30ec08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_30ec0c:
    // 0x30ec0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_30ec10:
    if (ctx->pc == 0x30EC10u) {
        ctx->pc = 0x30EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC0Cu;
        // 0x30ec10: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC14u;
        goto label_30ec14;
    }
    ctx->pc = 0x30EC0Cu;
    {
        const bool branch_taken_0x30ec0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC0Cu;
        // 0x30ec10: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec0c) {
            ctx->pc = 0x30EBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ebf8;
        }
    }
    ctx->pc = 0x30EC14u;
label_30ec14:
    // 0x30ec14: 0x1aa0001a  blez        $s5, . + 4 + (0x1A << 2)
label_30ec18:
    if (ctx->pc == 0x30EC18u) {
        ctx->pc = 0x30EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC14u;
        // 0x30ec18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC1Cu;
        goto label_30ec1c;
    }
    ctx->pc = 0x30EC14u;
    {
        const bool branch_taken_0x30ec14 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x30EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC14u;
        // 0x30ec18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec14) {
            ctx->pc = 0x30EC80u;
            goto label_30ec80;
        }
    }
    ctx->pc = 0x30EC1Cu;
label_30ec1c:
    // 0x30ec1c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x30ec1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_30ec20:
    // 0x30ec20: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x30ec20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_30ec24:
    // 0x30ec24: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x30ec24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
label_30ec28:
    // 0x30ec28: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x30ec28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
label_30ec2c:
    // 0x30ec2c: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x30ec2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
label_30ec30:
    // 0x30ec30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x30ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_30ec34:
    // 0x30ec34: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x30ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_30ec38:
    // 0x30ec38: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30ec3c:
    if (ctx->pc == 0x30EC3Cu) {
        ctx->pc = 0x30EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC38u;
        // 0x30ec3c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC40u;
        goto label_30ec40;
    }
    ctx->pc = 0x30EC38u;
    {
        const bool branch_taken_0x30ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC38u;
        // 0x30ec3c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec38) {
            ctx->pc = 0x30EC6Cu;
            goto label_30ec6c;
        }
    }
    ctx->pc = 0x30EC40u;
label_30ec40:
    // 0x30ec40: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x30ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_30ec44:
    // 0x30ec44: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x30ec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_30ec48:
    // 0x30ec48: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x30ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_30ec4c:
    // 0x30ec4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30ec4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ec50:
    // 0x30ec50: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30ec50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30ec54:
    // 0x30ec54: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_30ec58:
    if (ctx->pc == 0x30EC58u) {
        ctx->pc = 0x30EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC54u;
        // 0x30ec58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC5Cu;
        goto label_30ec5c;
    }
    ctx->pc = 0x30EC54u;
    {
        const bool branch_taken_0x30ec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC54u;
        // 0x30ec58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec54) {
            ctx->pc = 0x30EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea60;
        }
    }
    ctx->pc = 0x30EC5Cu;
label_30ec5c:
    // 0x30ec5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30ec60:
    // 0x30ec60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_30ec64:
    // 0x30ec64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30ec68:
    if (ctx->pc == 0x30EC68u) {
        ctx->pc = 0x30EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC64u;
        // 0x30ec68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC6Cu;
        goto label_30ec6c;
    }
    ctx->pc = 0x30EC64u;
    {
        const bool branch_taken_0x30ec64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC64u;
        // 0x30ec68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec64) {
            ctx->pc = 0x30EC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ec50;
        }
    }
    ctx->pc = 0x30EC6Cu;
label_30ec6c:
    // 0x30ec6c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x30ec6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_30ec70:
    // 0x30ec70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30ec70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30ec74:
    // 0x30ec74: 0xd5182a  slt         $v1, $a2, $s5
    ctx->pc = 0x30ec74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30ec78:
    // 0x30ec78: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_30ec7c:
    if (ctx->pc == 0x30EC7Cu) {
        ctx->pc = 0x30EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC78u;
        // 0x30ec7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC80u;
        goto label_30ec80;
    }
    ctx->pc = 0x30EC78u;
    {
        const bool branch_taken_0x30ec78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC78u;
        // 0x30ec7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec78) {
            ctx->pc = 0x30EC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ec30;
        }
    }
    ctx->pc = 0x30EC80u;
label_30ec80:
    // 0x30ec80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30ec84:
    // 0x30ec84: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x30ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_30ec88:
    // 0x30ec88: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x30ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_30ec8c:
    // 0x30ec8c: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x30ec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
label_30ec90:
    // 0x30ec90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x30ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_30ec94:
    // 0x30ec94: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x30ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30ec98:
    // 0x30ec98: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
label_30ec9c:
    // 0x30ec9c: 0xc0e5802  jal         func_396008
label_30eca0:
    if (ctx->pc == 0x30ECA0u) {
        ctx->pc = 0x30ECA4u;
        goto label_30eca4;
    }
    ctx->pc = 0x30EC9Cu;
    SET_GPR_U32(ctx, 31, 0x30ECA4u);
    ctx->pc = 0x396008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396008u, 0x30EC9Cu, 0x30ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ECA4u;
label_30eca4:
    // 0x30eca4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x30eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_30eca8:
    // 0x30eca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30ecac:
    // 0x30ecac: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x30ecacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_30ecb0:
    // 0x30ecb0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_30ecb4:
    // 0x30ecb4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_30ecb8:
    // 0x30ecb8: 0x24a53ce0  addiu       $a1, $a1, 0x3CE0
    ctx->pc = 0x30ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15584));
label_30ecbc:
    // 0x30ecbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30ecc0:
    // 0x30ecc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ecc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ecc4:
    // 0x30ecc4: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x30ecc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_30ecc8:
    // 0x30ecc8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x30ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_30eccc:
    // 0x30eccc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_30ecd0:
    // 0x30ecd0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x30ecd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30ecd4:
    // 0x30ecd4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x30ecd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30ecd8:
    // 0x30ecd8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x30ecd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30ecdc:
    // 0x30ecdc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x30ecdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30ece0:
    // 0x30ece0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30ece0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30ece4:
    // 0x30ece4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x30ece4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30ece8:
    // 0x30ece8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x30ece8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30ecec:
    // 0x30ecec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ececu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30ecf0:
    // 0x30ecf0: 0x3e00008  jr          $ra
label_30ecf4:
    if (ctx->pc == 0x30ECF4u) {
        ctx->pc = 0x30ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECF0u;
        // 0x30ecf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ECF8u;
        goto label_fallthrough_0x30ecf0;
    }
    ctx->pc = 0x30ECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECF0u;
        // 0x30ecf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30ecf0:
    ctx->pc = 0x30ECF8u;
}
