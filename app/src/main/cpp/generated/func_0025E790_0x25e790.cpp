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

// Function: func_0025E790
// Address: 0x25e790 - 0x25ed00
void func_0025E790_0x25e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025E790_0x25e790");
#endif

    switch (ctx->pc) {
        case 0x25e790u: goto label_25e790;
        case 0x25e794u: goto label_25e794;
        case 0x25e798u: goto label_25e798;
        case 0x25e79cu: goto label_25e79c;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7a4u: goto label_25e7a4;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7acu: goto label_25e7ac;
        case 0x25e7b0u: goto label_25e7b0;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7b8u: goto label_25e7b8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7ccu: goto label_25e7cc;
        case 0x25e7d0u: goto label_25e7d0;
        case 0x25e7d4u: goto label_25e7d4;
        case 0x25e7d8u: goto label_25e7d8;
        case 0x25e7dcu: goto label_25e7dc;
        case 0x25e7e0u: goto label_25e7e0;
        case 0x25e7e4u: goto label_25e7e4;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e7ecu: goto label_25e7ec;
        case 0x25e7f0u: goto label_25e7f0;
        case 0x25e7f4u: goto label_25e7f4;
        case 0x25e7f8u: goto label_25e7f8;
        case 0x25e7fcu: goto label_25e7fc;
        case 0x25e800u: goto label_25e800;
        case 0x25e804u: goto label_25e804;
        case 0x25e808u: goto label_25e808;
        case 0x25e80cu: goto label_25e80c;
        case 0x25e810u: goto label_25e810;
        case 0x25e814u: goto label_25e814;
        case 0x25e818u: goto label_25e818;
        case 0x25e81cu: goto label_25e81c;
        case 0x25e820u: goto label_25e820;
        case 0x25e824u: goto label_25e824;
        case 0x25e828u: goto label_25e828;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e830u: goto label_25e830;
        case 0x25e834u: goto label_25e834;
        case 0x25e838u: goto label_25e838;
        case 0x25e83cu: goto label_25e83c;
        case 0x25e840u: goto label_25e840;
        case 0x25e844u: goto label_25e844;
        case 0x25e848u: goto label_25e848;
        case 0x25e84cu: goto label_25e84c;
        case 0x25e850u: goto label_25e850;
        case 0x25e854u: goto label_25e854;
        case 0x25e858u: goto label_25e858;
        case 0x25e85cu: goto label_25e85c;
        case 0x25e860u: goto label_25e860;
        case 0x25e864u: goto label_25e864;
        case 0x25e868u: goto label_25e868;
        case 0x25e86cu: goto label_25e86c;
        case 0x25e870u: goto label_25e870;
        case 0x25e874u: goto label_25e874;
        case 0x25e878u: goto label_25e878;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e880u: goto label_25e880;
        case 0x25e884u: goto label_25e884;
        case 0x25e888u: goto label_25e888;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        case 0x25e928u: goto label_25e928;
        case 0x25e92cu: goto label_25e92c;
        case 0x25e930u: goto label_25e930;
        case 0x25e934u: goto label_25e934;
        case 0x25e938u: goto label_25e938;
        case 0x25e93cu: goto label_25e93c;
        case 0x25e940u: goto label_25e940;
        case 0x25e944u: goto label_25e944;
        case 0x25e948u: goto label_25e948;
        case 0x25e94cu: goto label_25e94c;
        case 0x25e950u: goto label_25e950;
        case 0x25e954u: goto label_25e954;
        case 0x25e958u: goto label_25e958;
        case 0x25e95cu: goto label_25e95c;
        case 0x25e960u: goto label_25e960;
        case 0x25e964u: goto label_25e964;
        case 0x25e968u: goto label_25e968;
        case 0x25e96cu: goto label_25e96c;
        case 0x25e970u: goto label_25e970;
        case 0x25e974u: goto label_25e974;
        case 0x25e978u: goto label_25e978;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e980u: goto label_25e980;
        case 0x25e984u: goto label_25e984;
        case 0x25e988u: goto label_25e988;
        case 0x25e98cu: goto label_25e98c;
        case 0x25e990u: goto label_25e990;
        case 0x25e994u: goto label_25e994;
        case 0x25e998u: goto label_25e998;
        case 0x25e99cu: goto label_25e99c;
        case 0x25e9a0u: goto label_25e9a0;
        case 0x25e9a4u: goto label_25e9a4;
        case 0x25e9a8u: goto label_25e9a8;
        case 0x25e9acu: goto label_25e9ac;
        case 0x25e9b0u: goto label_25e9b0;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9b8u: goto label_25e9b8;
        case 0x25e9bcu: goto label_25e9bc;
        case 0x25e9c0u: goto label_25e9c0;
        case 0x25e9c4u: goto label_25e9c4;
        case 0x25e9c8u: goto label_25e9c8;
        case 0x25e9ccu: goto label_25e9cc;
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9d4u: goto label_25e9d4;
        case 0x25e9d8u: goto label_25e9d8;
        case 0x25e9dcu: goto label_25e9dc;
        case 0x25e9e0u: goto label_25e9e0;
        case 0x25e9e4u: goto label_25e9e4;
        case 0x25e9e8u: goto label_25e9e8;
        case 0x25e9ecu: goto label_25e9ec;
        case 0x25e9f0u: goto label_25e9f0;
        case 0x25e9f4u: goto label_25e9f4;
        case 0x25e9f8u: goto label_25e9f8;
        case 0x25e9fcu: goto label_25e9fc;
        case 0x25ea00u: goto label_25ea00;
        case 0x25ea04u: goto label_25ea04;
        case 0x25ea08u: goto label_25ea08;
        case 0x25ea0cu: goto label_25ea0c;
        case 0x25ea10u: goto label_25ea10;
        case 0x25ea14u: goto label_25ea14;
        case 0x25ea18u: goto label_25ea18;
        case 0x25ea1cu: goto label_25ea1c;
        case 0x25ea20u: goto label_25ea20;
        case 0x25ea24u: goto label_25ea24;
        case 0x25ea28u: goto label_25ea28;
        case 0x25ea2cu: goto label_25ea2c;
        case 0x25ea30u: goto label_25ea30;
        case 0x25ea34u: goto label_25ea34;
        case 0x25ea38u: goto label_25ea38;
        case 0x25ea3cu: goto label_25ea3c;
        case 0x25ea40u: goto label_25ea40;
        case 0x25ea44u: goto label_25ea44;
        case 0x25ea48u: goto label_25ea48;
        case 0x25ea4cu: goto label_25ea4c;
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea54u: goto label_25ea54;
        case 0x25ea58u: goto label_25ea58;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea60u: goto label_25ea60;
        case 0x25ea64u: goto label_25ea64;
        case 0x25ea68u: goto label_25ea68;
        case 0x25ea6cu: goto label_25ea6c;
        case 0x25ea70u: goto label_25ea70;
        case 0x25ea74u: goto label_25ea74;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea7cu: goto label_25ea7c;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea84u: goto label_25ea84;
        case 0x25ea88u: goto label_25ea88;
        case 0x25ea8cu: goto label_25ea8c;
        case 0x25ea90u: goto label_25ea90;
        case 0x25ea94u: goto label_25ea94;
        case 0x25ea98u: goto label_25ea98;
        case 0x25ea9cu: goto label_25ea9c;
        case 0x25eaa0u: goto label_25eaa0;
        case 0x25eaa4u: goto label_25eaa4;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eaacu: goto label_25eaac;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eab8u: goto label_25eab8;
        case 0x25eabcu: goto label_25eabc;
        case 0x25eac0u: goto label_25eac0;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eac8u: goto label_25eac8;
        case 0x25eaccu: goto label_25eacc;
        case 0x25ead0u: goto label_25ead0;
        case 0x25ead4u: goto label_25ead4;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eae0u: goto label_25eae0;
        case 0x25eae4u: goto label_25eae4;
        case 0x25eae8u: goto label_25eae8;
        case 0x25eaecu: goto label_25eaec;
        case 0x25eaf0u: goto label_25eaf0;
        case 0x25eaf4u: goto label_25eaf4;
        case 0x25eaf8u: goto label_25eaf8;
        case 0x25eafcu: goto label_25eafc;
        case 0x25eb00u: goto label_25eb00;
        case 0x25eb04u: goto label_25eb04;
        case 0x25eb08u: goto label_25eb08;
        case 0x25eb0cu: goto label_25eb0c;
        case 0x25eb10u: goto label_25eb10;
        case 0x25eb14u: goto label_25eb14;
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb1cu: goto label_25eb1c;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb24u: goto label_25eb24;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb2cu: goto label_25eb2c;
        case 0x25eb30u: goto label_25eb30;
        case 0x25eb34u: goto label_25eb34;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb40u: goto label_25eb40;
        case 0x25eb44u: goto label_25eb44;
        case 0x25eb48u: goto label_25eb48;
        case 0x25eb4cu: goto label_25eb4c;
        case 0x25eb50u: goto label_25eb50;
        case 0x25eb54u: goto label_25eb54;
        case 0x25eb58u: goto label_25eb58;
        case 0x25eb5cu: goto label_25eb5c;
        case 0x25eb60u: goto label_25eb60;
        case 0x25eb64u: goto label_25eb64;
        case 0x25eb68u: goto label_25eb68;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25eb70u: goto label_25eb70;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb7cu: goto label_25eb7c;
        case 0x25eb80u: goto label_25eb80;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eb88u: goto label_25eb88;
        case 0x25eb8cu: goto label_25eb8c;
        case 0x25eb90u: goto label_25eb90;
        case 0x25eb94u: goto label_25eb94;
        case 0x25eb98u: goto label_25eb98;
        case 0x25eb9cu: goto label_25eb9c;
        case 0x25eba0u: goto label_25eba0;
        case 0x25eba4u: goto label_25eba4;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebb0u: goto label_25ebb0;
        case 0x25ebb4u: goto label_25ebb4;
        case 0x25ebb8u: goto label_25ebb8;
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc4u: goto label_25ebc4;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebccu: goto label_25ebcc;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebd4u: goto label_25ebd4;
        case 0x25ebd8u: goto label_25ebd8;
        case 0x25ebdcu: goto label_25ebdc;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ebe8u: goto label_25ebe8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ebf4u: goto label_25ebf4;
        case 0x25ebf8u: goto label_25ebf8;
        case 0x25ebfcu: goto label_25ebfc;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec04u: goto label_25ec04;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec0cu: goto label_25ec0c;
        case 0x25ec10u: goto label_25ec10;
        case 0x25ec14u: goto label_25ec14;
        case 0x25ec18u: goto label_25ec18;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec20u: goto label_25ec20;
        case 0x25ec24u: goto label_25ec24;
        case 0x25ec28u: goto label_25ec28;
        case 0x25ec2cu: goto label_25ec2c;
        case 0x25ec30u: goto label_25ec30;
        case 0x25ec34u: goto label_25ec34;
        case 0x25ec38u: goto label_25ec38;
        case 0x25ec3cu: goto label_25ec3c;
        case 0x25ec40u: goto label_25ec40;
        case 0x25ec44u: goto label_25ec44;
        case 0x25ec48u: goto label_25ec48;
        case 0x25ec4cu: goto label_25ec4c;
        case 0x25ec50u: goto label_25ec50;
        case 0x25ec54u: goto label_25ec54;
        case 0x25ec58u: goto label_25ec58;
        case 0x25ec5cu: goto label_25ec5c;
        case 0x25ec60u: goto label_25ec60;
        case 0x25ec64u: goto label_25ec64;
        case 0x25ec68u: goto label_25ec68;
        case 0x25ec6cu: goto label_25ec6c;
        case 0x25ec70u: goto label_25ec70;
        case 0x25ec74u: goto label_25ec74;
        case 0x25ec78u: goto label_25ec78;
        case 0x25ec7cu: goto label_25ec7c;
        case 0x25ec80u: goto label_25ec80;
        case 0x25ec84u: goto label_25ec84;
        case 0x25ec88u: goto label_25ec88;
        case 0x25ec8cu: goto label_25ec8c;
        case 0x25ec90u: goto label_25ec90;
        case 0x25ec94u: goto label_25ec94;
        case 0x25ec98u: goto label_25ec98;
        case 0x25ec9cu: goto label_25ec9c;
        case 0x25eca0u: goto label_25eca0;
        case 0x25eca4u: goto label_25eca4;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecacu: goto label_25ecac;
        case 0x25ecb0u: goto label_25ecb0;
        case 0x25ecb4u: goto label_25ecb4;
        case 0x25ecb8u: goto label_25ecb8;
        case 0x25ecbcu: goto label_25ecbc;
        case 0x25ecc0u: goto label_25ecc0;
        case 0x25ecc4u: goto label_25ecc4;
        case 0x25ecc8u: goto label_25ecc8;
        case 0x25ecccu: goto label_25eccc;
        case 0x25ecd0u: goto label_25ecd0;
        case 0x25ecd4u: goto label_25ecd4;
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ecdcu: goto label_25ecdc;
        case 0x25ece0u: goto label_25ece0;
        case 0x25ece4u: goto label_25ece4;
        case 0x25ece8u: goto label_25ece8;
        case 0x25ececu: goto label_25ecec;
        case 0x25ecf0u: goto label_25ecf0;
        case 0x25ecf4u: goto label_25ecf4;
        case 0x25ecf8u: goto label_25ecf8;
        case 0x25ecfcu: goto label_25ecfc;
        default: break;
    }

    ctx->pc = 0x25e790u;

label_25e790:
    // 0x25e790: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x25e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_25e794:
    // 0x25e794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e798:
    // 0x25e798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25e79c:
    // 0x25e79c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x25e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_25e7a0:
    // 0x25e7a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25e7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e7a4:
    // 0x25e7a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25e7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25e7a8:
    // 0x25e7a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25e7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_25e7ac:
    // 0x25e7ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25e7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_25e7b0:
    // 0x25e7b0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x25e7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_25e7b4:
    // 0x25e7b4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x25e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_25e7b8:
    // 0x25e7b8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x25e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_25e7bc:
    // 0x25e7bc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x25e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_25e7c0:
    // 0x25e7c0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x25e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_25e7c4:
    // 0x25e7c4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x25e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_25e7c8:
    // 0x25e7c8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x25e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_25e7cc:
    // 0x25e7cc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_25e7d0:
    // 0x25e7d0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x25e7d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_25e7d4:
    // 0x25e7d4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x25e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_25e7d8:
    // 0x25e7d8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x25e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_25e7dc:
    // 0x25e7dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25e7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25e7e0:
    // 0x25e7e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x25e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25e7e4:
    // 0x25e7e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x25e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_25e7e8:
    // 0x25e7e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25e7ec:
    // 0x25e7ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25e7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_25e7f0:
    // 0x25e7f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25e7f4:
    // 0x25e7f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25e7f8:
    // 0x25e7f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_25e7fc:
    // 0x25e7fc: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x25e7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_25e800:
    // 0x25e800: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x25e800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
label_25e804:
    // 0x25e804: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x25e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_25e808:
    // 0x25e808: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x25e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_25e80c:
    // 0x25e80c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x25e80cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
label_25e810:
    // 0x25e810: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x25e810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
label_25e814:
    // 0x25e814: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x25e814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_25e818:
    // 0x25e818: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x25e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_25e81c:
    // 0x25e81c: 0xc6600114  lwc1        $f0, 0x114($s3)
    ctx->pc = 0x25e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e820:
    // 0x25e820: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x25e820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
label_25e824:
    // 0x25e824: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25e824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_25e828:
    // 0x25e828: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x25e828u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
label_25e82c:
    // 0x25e82c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x25e82cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
label_25e830:
    // 0x25e830: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x25e830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_25e834:
    // 0x25e834: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x25e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_25e838:
    // 0x25e838: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x25e838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_25e83c:
    // 0x25e83c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x25e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_25e840:
    // 0x25e840: 0x40f809  jalr        $v0
label_25e844:
    if (ctx->pc == 0x25E844u) {
        ctx->pc = 0x25E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E840u;
        // 0x25e844: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E848u;
        goto label_25e848;
    }
    ctx->pc = 0x25E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E848u);
        ctx->pc = 0x25E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E840u;
        // 0x25e844: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E840u, 0x25E848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E848u;
label_25e848:
    // 0x25e848: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x25e848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_25e84c:
    // 0x25e84c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25e850:
    if (ctx->pc == 0x25E850u) {
        ctx->pc = 0x25E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E84Cu;
        // 0x25e850: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E854u;
        goto label_25e854;
    }
    ctx->pc = 0x25E84Cu;
    {
        const bool branch_taken_0x25e84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E84Cu;
        // 0x25e850: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e84c) {
            ctx->pc = 0x25E868u;
            goto label_25e868;
        }
    }
    ctx->pc = 0x25E854u;
label_25e854:
    // 0x25e854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e858:
    // 0x25e858: 0x106200fd  beq         $v1, $v0, . + 4 + (0xFD << 2)
label_25e85c:
    if (ctx->pc == 0x25E85Cu) {
        ctx->pc = 0x25E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E858u;
        // 0x25e85c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E860u;
        goto label_25e860;
    }
    ctx->pc = 0x25E858u;
    {
        const bool branch_taken_0x25e858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E858u;
        // 0x25e85c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e858) {
            ctx->pc = 0x25EC50u;
            goto label_25ec50;
        }
    }
    ctx->pc = 0x25E860u;
label_25e860:
    // 0x25e860: 0x1000011e  b           . + 4 + (0x11E << 2)
label_25e864:
    if (ctx->pc == 0x25E864u) {
        ctx->pc = 0x25E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E860u;
        // 0x25e864: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E868u;
        goto label_25e868;
    }
    ctx->pc = 0x25E860u;
    {
        const bool branch_taken_0x25e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E860u;
        // 0x25e864: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e860) {
            ctx->pc = 0x25ECDCu;
            goto label_25ecdc;
        }
    }
    ctx->pc = 0x25E868u;
label_25e868:
    // 0x25e868: 0xc09d91a  jal         func_276468
label_25e86c:
    if (ctx->pc == 0x25E86Cu) {
        ctx->pc = 0x25E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E868u;
        // 0x25e86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E870u;
        goto label_25e870;
    }
    ctx->pc = 0x25E868u;
    SET_GPR_U32(ctx, 31, 0x25E870u);
    ctx->pc = 0x25E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E868u;
    // 0x25e86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25E868u, 0x25E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E870u;
label_25e870:
    // 0x25e870: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x25e870u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25e874:
    // 0x25e874: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x25e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_25e878:
    // 0x25e878: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x25e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
label_25e87c:
    // 0x25e87c: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x25e87cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
label_25e880:
    // 0x25e880: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25e884:
    if (ctx->pc == 0x25E884u) {
        ctx->pc = 0x25E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E880u;
        // 0x25e884: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E888u;
        goto label_25e888;
    }
    ctx->pc = 0x25E880u;
    {
        const bool branch_taken_0x25e880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E880u;
        // 0x25e884: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e880) {
            ctx->pc = 0x25E8A0u;
            goto label_25e8a0;
        }
    }
    ctx->pc = 0x25E888u;
label_25e888:
    // 0x25e888: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25e88c:
    // 0x25e88c: 0x24423ac0  addiu       $v0, $v0, 0x3AC0
    ctx->pc = 0x25e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15040));
label_25e890:
    // 0x25e890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25e890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25e894:
    // 0x25e894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25e894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e898:
    // 0x25e898: 0x800008  jr          $a0
label_25e89c:
    if (ctx->pc == 0x25E89Cu) {
        ctx->pc = 0x25E8A0u;
        goto label_25e8a0;
    }
    ctx->pc = 0x25E898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E8A0u: goto label_25e8a0;
            case 0x25E8D4u: goto label_25e8d4;
            case 0x25E908u: goto label_25e908;
            case 0x25E97Cu: goto label_25e97c;
            case 0x25E9B0u: goto label_25e9b0;
            case 0x25EA24u: goto label_25ea24;
            case 0x25EA54u: goto label_25ea54;
            case 0x25EA88u: goto label_25ea88;
            case 0x25EABCu: goto label_25eabc;
            case 0x25EAF0u: goto label_25eaf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E8A0u;
label_25e8a0:
    // 0x25e8a0: 0xc0c73f8  jal         func_31CFE0
label_25e8a4:
    if (ctx->pc == 0x25E8A4u) {
        ctx->pc = 0x25E8A8u;
        goto label_25e8a8;
    }
    ctx->pc = 0x25E8A0u;
    SET_GPR_U32(ctx, 31, 0x25E8A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25E8A0u, 0x25E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8A8u;
label_25e8a8:
    // 0x25e8a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25e8ac:
    // 0x25e8ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25e8b0:
    if (ctx->pc == 0x25E8B0u) {
        ctx->pc = 0x25E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8ACu;
        // 0x25e8b0: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8B4u;
        goto label_25e8b4;
    }
    ctx->pc = 0x25E8ACu;
    {
        const bool branch_taken_0x25e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8ACu;
        // 0x25e8b0: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8ac) {
            ctx->pc = 0x25E8C4u;
            goto label_25e8c4;
        }
    }
    ctx->pc = 0x25E8B4u;
label_25e8b4:
    // 0x25e8b4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e8b8:
    // 0x25e8b8: 0x8c430340  lw          $v1, 0x340($v0)
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
label_25e8bc:
    // 0x25e8bc: 0x10000098  b           . + 4 + (0x98 << 2)
label_25e8c0:
    if (ctx->pc == 0x25E8C0u) {
        ctx->pc = 0x25E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8BCu;
        // 0x25e8c0: 0x8c440344  lw          $a0, 0x344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8C4u;
        goto label_25e8c4;
    }
    ctx->pc = 0x25E8BCu;
    {
        const bool branch_taken_0x25e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8BCu;
        // 0x25e8c0: 0x8c440344  lw          $a0, 0x344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8bc) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e8c8:
    // 0x25e8c8: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x25e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_25e8cc:
    // 0x25e8cc: 0x10000094  b           . + 4 + (0x94 << 2)
label_25e8d0:
    if (ctx->pc == 0x25E8D0u) {
        ctx->pc = 0x25E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8CCu;
        // 0x25e8d0: 0x8c44033c  lw          $a0, 0x33C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8D4u;
        goto label_25e8d4;
    }
    ctx->pc = 0x25E8CCu;
    {
        const bool branch_taken_0x25e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8CCu;
        // 0x25e8d0: 0x8c44033c  lw          $a0, 0x33C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8cc) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25E8D4u;
label_25e8d4:
    // 0x25e8d4: 0xc0c73f8  jal         func_31CFE0
label_25e8d8:
    if (ctx->pc == 0x25E8D8u) {
        ctx->pc = 0x25E8DCu;
        goto label_25e8dc;
    }
    ctx->pc = 0x25E8D4u;
    SET_GPR_U32(ctx, 31, 0x25E8DCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25E8D4u, 0x25E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8DCu;
label_25e8dc:
    // 0x25e8dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25e8e0:
    // 0x25e8e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25e8e4:
    if (ctx->pc == 0x25E8E4u) {
        ctx->pc = 0x25E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8E0u;
        // 0x25e8e4: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8E8u;
        goto label_25e8e8;
    }
    ctx->pc = 0x25E8E0u;
    {
        const bool branch_taken_0x25e8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8E0u;
        // 0x25e8e4: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8e0) {
            ctx->pc = 0x25E8F8u;
            goto label_25e8f8;
        }
    }
    ctx->pc = 0x25E8E8u;
label_25e8e8:
    // 0x25e8e8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e8ec:
    // 0x25e8ec: 0x8c430acc  lw          $v1, 0xACC($v0)
    ctx->pc = 0x25e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2764)));
label_25e8f0:
    // 0x25e8f0: 0x1000008b  b           . + 4 + (0x8B << 2)
label_25e8f4:
    if (ctx->pc == 0x25E8F4u) {
        ctx->pc = 0x25E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8F0u;
        // 0x25e8f4: 0x8c440ad0  lw          $a0, 0xAD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8F8u;
        goto label_25e8f8;
    }
    ctx->pc = 0x25E8F0u;
    {
        const bool branch_taken_0x25e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8F0u;
        // 0x25e8f4: 0x8c440ad0  lw          $a0, 0xAD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8f0) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25E8F8u;
label_25e8f8:
    // 0x25e8f8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e8fc:
    // 0x25e8fc: 0x8c430ad4  lw          $v1, 0xAD4($v0)
    ctx->pc = 0x25e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2772)));
label_25e900:
    // 0x25e900: 0x10000087  b           . + 4 + (0x87 << 2)
label_25e904:
    if (ctx->pc == 0x25E904u) {
        ctx->pc = 0x25E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E900u;
        // 0x25e904: 0x8c440ad8  lw          $a0, 0xAD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E908u;
        goto label_25e908;
    }
    ctx->pc = 0x25E900u;
    {
        const bool branch_taken_0x25e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E900u;
        // 0x25e904: 0x8c440ad8  lw          $a0, 0xAD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e900) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25E908u;
label_25e908:
    // 0x25e908: 0xc0c73f8  jal         func_31CFE0
label_25e90c:
    if (ctx->pc == 0x25E90Cu) {
        ctx->pc = 0x25E910u;
        goto label_25e910;
    }
    ctx->pc = 0x25E908u;
    SET_GPR_U32(ctx, 31, 0x25E910u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25E908u, 0x25E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E910u;
label_25e910:
    // 0x25e910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25e914:
    // 0x25e914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25e918:
    if (ctx->pc == 0x25E918u) {
        ctx->pc = 0x25E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E914u;
        // 0x25e918: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E91Cu;
        goto label_25e91c;
    }
    ctx->pc = 0x25E914u;
    {
        const bool branch_taken_0x25e914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E914u;
        // 0x25e918: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e914) {
            ctx->pc = 0x25E928u;
            goto label_25e928;
        }
    }
    ctx->pc = 0x25E91Cu;
label_25e91c:
    // 0x25e91c: 0x8c430acc  lw          $v1, 0xACC($v0)
    ctx->pc = 0x25e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2764)));
label_25e920:
    // 0x25e920: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e924:
    if (ctx->pc == 0x25E924u) {
        ctx->pc = 0x25E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E920u;
        // 0x25e924: 0x8c440ad0  lw          $a0, 0xAD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E928u;
        goto label_25e928;
    }
    ctx->pc = 0x25E920u;
    {
        const bool branch_taken_0x25e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E920u;
        // 0x25e924: 0x8c440ad0  lw          $a0, 0xAD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e920) {
            ctx->pc = 0x25E930u;
            goto label_25e930;
        }
    }
    ctx->pc = 0x25E928u;
label_25e928:
    // 0x25e928: 0x8c430ad4  lw          $v1, 0xAD4($v0)
    ctx->pc = 0x25e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2772)));
label_25e92c:
    // 0x25e92c: 0x8c440ad8  lw          $a0, 0xAD8($v0)
    ctx->pc = 0x25e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2776)));
label_25e930:
    // 0x25e930: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25e930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25e934:
    // 0x25e934: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25e934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25e938:
    // 0x25e938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e93c:
    // 0x25e93c: 0xc05657c  jal         func_1595F0
label_25e940:
    if (ctx->pc == 0x25E940u) {
        ctx->pc = 0x25E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E93Cu;
        // 0x25e940: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E944u;
        goto label_25e944;
    }
    ctx->pc = 0x25E93Cu;
    SET_GPR_U32(ctx, 31, 0x25E944u);
    ctx->pc = 0x25E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E93Cu;
    // 0x25e940: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25E93Cu, 0x25E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E944u;
label_25e944:
    // 0x25e944: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x25e944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e948:
    // 0x25e948: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x25e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
label_25e94c:
    // 0x25e94c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_25e950:
    // 0x25e950: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_25e954:
    // 0x25e954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25e954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e958:
    // 0x25e958: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25e958u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_25e95c:
    // 0x25e95c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25e95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e960:
    // 0x25e960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e964:
    // 0x25e964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25e964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e968:
    // 0x25e968: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25e968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e96c:
    // 0x25e96c: 0xc0b2e92  jal         func_2CBA48
label_25e970:
    if (ctx->pc == 0x25E970u) {
        ctx->pc = 0x25E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E96Cu;
        // 0x25e970: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E974u;
        goto label_25e974;
    }
    ctx->pc = 0x25E96Cu;
    SET_GPR_U32(ctx, 31, 0x25E974u);
    ctx->pc = 0x25E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E96Cu;
    // 0x25e970: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25E96Cu, 0x25E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E974u;
label_25e974:
    // 0x25e974: 0x1000006c  b           . + 4 + (0x6C << 2)
label_25e978:
    if (ctx->pc == 0x25E978u) {
        ctx->pc = 0x25E97Cu;
        goto label_25e97c;
    }
    ctx->pc = 0x25E974u;
    {
        const bool branch_taken_0x25e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e974) {
            ctx->pc = 0x25EB28u;
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25E97Cu;
label_25e97c:
    // 0x25e97c: 0xc0c73f8  jal         func_31CFE0
label_25e980:
    if (ctx->pc == 0x25E980u) {
        ctx->pc = 0x25E984u;
        goto label_25e984;
    }
    ctx->pc = 0x25E97Cu;
    SET_GPR_U32(ctx, 31, 0x25E984u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25E97Cu, 0x25E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E984u;
label_25e984:
    // 0x25e984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25e988:
    // 0x25e988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25e98c:
    if (ctx->pc == 0x25E98Cu) {
        ctx->pc = 0x25E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E988u;
        // 0x25e98c: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E990u;
        goto label_25e990;
    }
    ctx->pc = 0x25E988u;
    {
        const bool branch_taken_0x25e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E988u;
        // 0x25e98c: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e988) {
            ctx->pc = 0x25E9A0u;
            goto label_25e9a0;
        }
    }
    ctx->pc = 0x25E990u;
label_25e990:
    // 0x25e990: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e994:
    // 0x25e994: 0x8c4331a4  lw          $v1, 0x31A4($v0)
    ctx->pc = 0x25e994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12708)));
label_25e998:
    // 0x25e998: 0x10000061  b           . + 4 + (0x61 << 2)
label_25e99c:
    if (ctx->pc == 0x25E99Cu) {
        ctx->pc = 0x25E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E998u;
        // 0x25e99c: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9A0u;
        goto label_25e9a0;
    }
    ctx->pc = 0x25E998u;
    {
        const bool branch_taken_0x25e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E998u;
        // 0x25e99c: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e998) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25E9A0u;
label_25e9a0:
    // 0x25e9a0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e9a4:
    // 0x25e9a4: 0x8c4331a4  lw          $v1, 0x31A4($v0)
    ctx->pc = 0x25e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12708)));
label_25e9a8:
    // 0x25e9a8: 0x1000005d  b           . + 4 + (0x5D << 2)
label_25e9ac:
    if (ctx->pc == 0x25E9ACu) {
        ctx->pc = 0x25E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9A8u;
        // 0x25e9ac: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9B0u;
        goto label_25e9b0;
    }
    ctx->pc = 0x25E9A8u;
    {
        const bool branch_taken_0x25e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9A8u;
        // 0x25e9ac: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9a8) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25E9B0u;
label_25e9b0:
    // 0x25e9b0: 0x8e6216d4  lw          $v0, 0x16D4($s3)
    ctx->pc = 0x25e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
label_25e9b4:
    // 0x25e9b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x25e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_25e9b8:
    // 0x25e9b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25e9bc:
    // 0x25e9bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_25e9c0:
    if (ctx->pc == 0x25E9C0u) {
        ctx->pc = 0x25E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9BCu;
        // 0x25e9c0: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9C4u;
        goto label_25e9c4;
    }
    ctx->pc = 0x25E9BCu;
    {
        const bool branch_taken_0x25e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9BCu;
        // 0x25e9c0: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9bc) {
            ctx->pc = 0x25E9F4u;
            goto label_25e9f4;
        }
    }
    ctx->pc = 0x25E9C4u;
label_25e9c4:
    // 0x25e9c4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e9c8:
    // 0x25e9c8: 0x8e680740  lw          $t0, 0x740($s3)
    ctx->pc = 0x25e9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1856)));
label_25e9cc:
    // 0x25e9cc: 0x8c4333a8  lw          $v1, 0x33A8($v0)
    ctx->pc = 0x25e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13224)));
label_25e9d0:
    // 0x25e9d0: 0x8c4433ac  lw          $a0, 0x33AC($v0)
    ctx->pc = 0x25e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13228)));
label_25e9d4:
    // 0x25e9d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25e9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25e9d8:
    // 0x25e9d8: 0x11000053  beqz        $t0, . + 4 + (0x53 << 2)
label_25e9dc:
    if (ctx->pc == 0x25E9DCu) {
        ctx->pc = 0x25E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9D8u;
        // 0x25e9dc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9E0u;
        goto label_25e9e0;
    }
    ctx->pc = 0x25E9D8u;
    {
        const bool branch_taken_0x25e9d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9D8u;
        // 0x25e9dc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9d8) {
            ctx->pc = 0x25EB28u;
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25E9E0u;
label_25e9e0:
    // 0x25e9e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x25e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25e9e4:
    // 0x25e9e4: 0xc09f734  jal         func_27DCD0
label_25e9e8:
    if (ctx->pc == 0x25E9E8u) {
        ctx->pc = 0x25E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9E4u;
        // 0x25e9e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9ECu;
        goto label_25e9ec;
    }
    ctx->pc = 0x25E9E4u;
    SET_GPR_U32(ctx, 31, 0x25E9ECu);
    ctx->pc = 0x25E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9E4u;
    // 0x25e9e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD0u, 0x25E9E4u, 0x25E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9ECu;
label_25e9ec:
    // 0x25e9ec: 0x1000004e  b           . + 4 + (0x4E << 2)
label_25e9f0:
    if (ctx->pc == 0x25E9F0u) {
        ctx->pc = 0x25E9F4u;
        goto label_25e9f4;
    }
    ctx->pc = 0x25E9ECu;
    {
        const bool branch_taken_0x25e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e9ec) {
            ctx->pc = 0x25EB28u;
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25E9F4u;
label_25e9f4:
    // 0x25e9f4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25e9f8:
    // 0x25e9f8: 0x8e680740  lw          $t0, 0x740($s3)
    ctx->pc = 0x25e9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1856)));
label_25e9fc:
    // 0x25e9fc: 0x8c4333b0  lw          $v1, 0x33B0($v0)
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13232)));
label_25ea00:
    // 0x25ea00: 0x8c4433b4  lw          $a0, 0x33B4($v0)
    ctx->pc = 0x25ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13236)));
label_25ea04:
    // 0x25ea04: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25ea04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25ea08:
    // 0x25ea08: 0x11000047  beqz        $t0, . + 4 + (0x47 << 2)
label_25ea0c:
    if (ctx->pc == 0x25EA0Cu) {
        ctx->pc = 0x25EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA08u;
        // 0x25ea0c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA10u;
        goto label_25ea10;
    }
    ctx->pc = 0x25EA08u;
    {
        const bool branch_taken_0x25ea08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA08u;
        // 0x25ea0c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea08) {
            ctx->pc = 0x25EB28u;
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25EA10u;
label_25ea10:
    // 0x25ea10: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x25ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25ea14:
    // 0x25ea14: 0xc09f734  jal         func_27DCD0
label_25ea18:
    if (ctx->pc == 0x25EA18u) {
        ctx->pc = 0x25EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA14u;
        // 0x25ea18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA1Cu;
        goto label_25ea1c;
    }
    ctx->pc = 0x25EA14u;
    SET_GPR_U32(ctx, 31, 0x25EA1Cu);
    ctx->pc = 0x25EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA14u;
    // 0x25ea18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD0u, 0x25EA14u, 0x25EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA1Cu;
label_25ea1c:
    // 0x25ea1c: 0x10000042  b           . + 4 + (0x42 << 2)
label_25ea20:
    if (ctx->pc == 0x25EA20u) {
        ctx->pc = 0x25EA24u;
        goto label_25ea24;
    }
    ctx->pc = 0x25EA1Cu;
    {
        const bool branch_taken_0x25ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea1c) {
            ctx->pc = 0x25EB28u;
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25EA24u;
label_25ea24:
    // 0x25ea24: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25ea28:
    // 0x25ea28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ea2c:
    // 0x25ea2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ea30:
    // 0x25ea30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25ea34:
    // 0x25ea34: 0x8c473988  lw          $a3, 0x3988($v0)
    ctx->pc = 0x25ea34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14728)));
label_25ea38:
    // 0x25ea38: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x25ea38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_25ea3c:
    // 0x25ea3c: 0x8c43398c  lw          $v1, 0x398C($v0)
    ctx->pc = 0x25ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14732)));
label_25ea40:
    // 0x25ea40: 0xe29021  addu        $s2, $a3, $v0
    ctx->pc = 0x25ea40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_25ea44:
    // 0x25ea44: 0xc0c1880  jal         func_306200
label_25ea48:
    if (ctx->pc == 0x25EA48u) {
        ctx->pc = 0x25EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA44u;
        // 0x25ea48: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA4Cu;
        goto label_25ea4c;
    }
    ctx->pc = 0x25EA44u;
    SET_GPR_U32(ctx, 31, 0x25EA4Cu);
    ctx->pc = 0x25EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA44u;
    // 0x25ea48: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x25EA44u, 0x25EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA4Cu;
label_25ea4c:
    // 0x25ea4c: 0x10000036  b           . + 4 + (0x36 << 2)
label_25ea50:
    if (ctx->pc == 0x25EA50u) {
        ctx->pc = 0x25EA54u;
        goto label_25ea54;
    }
    ctx->pc = 0x25EA4Cu;
    {
        const bool branch_taken_0x25ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea4c) {
            ctx->pc = 0x25EB28u;
            goto label_25eb28;
        }
    }
    ctx->pc = 0x25EA54u;
label_25ea54:
    // 0x25ea54: 0xc0c73f8  jal         func_31CFE0
label_25ea58:
    if (ctx->pc == 0x25EA58u) {
        ctx->pc = 0x25EA5Cu;
        goto label_25ea5c;
    }
    ctx->pc = 0x25EA54u;
    SET_GPR_U32(ctx, 31, 0x25EA5Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25EA54u, 0x25EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA5Cu;
label_25ea5c:
    // 0x25ea5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25ea60:
    // 0x25ea60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25ea64:
    if (ctx->pc == 0x25EA64u) {
        ctx->pc = 0x25EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA60u;
        // 0x25ea64: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA68u;
        goto label_25ea68;
    }
    ctx->pc = 0x25EA60u;
    {
        const bool branch_taken_0x25ea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA60u;
        // 0x25ea64: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea60) {
            ctx->pc = 0x25EA78u;
            goto label_25ea78;
        }
    }
    ctx->pc = 0x25EA68u;
label_25ea68:
    // 0x25ea68: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25ea6c:
    // 0x25ea6c: 0x8c431768  lw          $v1, 0x1768($v0)
    ctx->pc = 0x25ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5992)));
label_25ea70:
    // 0x25ea70: 0x1000002b  b           . + 4 + (0x2B << 2)
label_25ea74:
    if (ctx->pc == 0x25EA74u) {
        ctx->pc = 0x25EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA70u;
        // 0x25ea74: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA78u;
        goto label_25ea78;
    }
    ctx->pc = 0x25EA70u;
    {
        const bool branch_taken_0x25ea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA70u;
        // 0x25ea74: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea70) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EA78u;
label_25ea78:
    // 0x25ea78: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25ea7c:
    // 0x25ea7c: 0x8c431760  lw          $v1, 0x1760($v0)
    ctx->pc = 0x25ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5984)));
label_25ea80:
    // 0x25ea80: 0x10000027  b           . + 4 + (0x27 << 2)
label_25ea84:
    if (ctx->pc == 0x25EA84u) {
        ctx->pc = 0x25EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA80u;
        // 0x25ea84: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA88u;
        goto label_25ea88;
    }
    ctx->pc = 0x25EA80u;
    {
        const bool branch_taken_0x25ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA80u;
        // 0x25ea84: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea80) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EA88u;
label_25ea88:
    // 0x25ea88: 0xc0c73f8  jal         func_31CFE0
label_25ea8c:
    if (ctx->pc == 0x25EA8Cu) {
        ctx->pc = 0x25EA90u;
        goto label_25ea90;
    }
    ctx->pc = 0x25EA88u;
    SET_GPR_U32(ctx, 31, 0x25EA90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25EA88u, 0x25EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA90u;
label_25ea90:
    // 0x25ea90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25ea94:
    // 0x25ea94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25ea98:
    if (ctx->pc == 0x25EA98u) {
        ctx->pc = 0x25EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA94u;
        // 0x25ea98: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA9Cu;
        goto label_25ea9c;
    }
    ctx->pc = 0x25EA94u;
    {
        const bool branch_taken_0x25ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA94u;
        // 0x25ea98: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea94) {
            ctx->pc = 0x25EAACu;
            goto label_25eaac;
        }
    }
    ctx->pc = 0x25EA9Cu;
label_25ea9c:
    // 0x25ea9c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25eaa0:
    // 0x25eaa0: 0x8c431768  lw          $v1, 0x1768($v0)
    ctx->pc = 0x25eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5992)));
label_25eaa4:
    // 0x25eaa4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25eaa8:
    if (ctx->pc == 0x25EAA8u) {
        ctx->pc = 0x25EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAA4u;
        // 0x25eaa8: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAACu;
        goto label_25eaac;
    }
    ctx->pc = 0x25EAA4u;
    {
        const bool branch_taken_0x25eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAA4u;
        // 0x25eaa8: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaa4) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EAACu;
label_25eaac:
    // 0x25eaac: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25eab0:
    // 0x25eab0: 0x8c431760  lw          $v1, 0x1760($v0)
    ctx->pc = 0x25eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5984)));
label_25eab4:
    // 0x25eab4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_25eab8:
    if (ctx->pc == 0x25EAB8u) {
        ctx->pc = 0x25EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAB4u;
        // 0x25eab8: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EABCu;
        goto label_25eabc;
    }
    ctx->pc = 0x25EAB4u;
    {
        const bool branch_taken_0x25eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAB4u;
        // 0x25eab8: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eab4) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EABCu;
label_25eabc:
    // 0x25eabc: 0xc0c73f8  jal         func_31CFE0
label_25eac0:
    if (ctx->pc == 0x25EAC0u) {
        ctx->pc = 0x25EAC4u;
        goto label_25eac4;
    }
    ctx->pc = 0x25EABCu;
    SET_GPR_U32(ctx, 31, 0x25EAC4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25EABCu, 0x25EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAC4u;
label_25eac4:
    // 0x25eac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25eac8:
    // 0x25eac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25eacc:
    if (ctx->pc == 0x25EACCu) {
        ctx->pc = 0x25EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAC8u;
        // 0x25eacc: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAD0u;
        goto label_25ead0;
    }
    ctx->pc = 0x25EAC8u;
    {
        const bool branch_taken_0x25eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAC8u;
        // 0x25eacc: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eac8) {
            ctx->pc = 0x25EAE0u;
            goto label_25eae0;
        }
    }
    ctx->pc = 0x25EAD0u;
label_25ead0:
    // 0x25ead0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25ead4:
    // 0x25ead4: 0x8c430f0c  lw          $v1, 0xF0C($v0)
    ctx->pc = 0x25ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3852)));
label_25ead8:
    // 0x25ead8: 0x10000011  b           . + 4 + (0x11 << 2)
label_25eadc:
    if (ctx->pc == 0x25EADCu) {
        ctx->pc = 0x25EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAD8u;
        // 0x25eadc: 0x8c440f10  lw          $a0, 0xF10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAE0u;
        goto label_25eae0;
    }
    ctx->pc = 0x25EAD8u;
    {
        const bool branch_taken_0x25ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAD8u;
        // 0x25eadc: 0x8c440f10  lw          $a0, 0xF10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ead8) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EAE0u;
label_25eae0:
    // 0x25eae0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25eae4:
    // 0x25eae4: 0x8c430f14  lw          $v1, 0xF14($v0)
    ctx->pc = 0x25eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3860)));
label_25eae8:
    // 0x25eae8: 0x1000000d  b           . + 4 + (0xD << 2)
label_25eaec:
    if (ctx->pc == 0x25EAECu) {
        ctx->pc = 0x25EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAE8u;
        // 0x25eaec: 0x8c440f18  lw          $a0, 0xF18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAF0u;
        goto label_25eaf0;
    }
    ctx->pc = 0x25EAE8u;
    {
        const bool branch_taken_0x25eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAE8u;
        // 0x25eaec: 0x8c440f18  lw          $a0, 0xF18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eae8) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EAF0u;
label_25eaf0:
    // 0x25eaf0: 0xc0c73f8  jal         func_31CFE0
label_25eaf4:
    if (ctx->pc == 0x25EAF4u) {
        ctx->pc = 0x25EAF8u;
        goto label_25eaf8;
    }
    ctx->pc = 0x25EAF0u;
    SET_GPR_U32(ctx, 31, 0x25EAF8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25EAF0u, 0x25EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAF8u;
label_25eaf8:
    // 0x25eaf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25eafc:
    // 0x25eafc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25eb00:
    if (ctx->pc == 0x25EB00u) {
        ctx->pc = 0x25EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAFCu;
        // 0x25eb00: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB04u;
        goto label_25eb04;
    }
    ctx->pc = 0x25EAFCu;
    {
        const bool branch_taken_0x25eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAFCu;
        // 0x25eb00: 0x3c160060  lui         $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eafc) {
            ctx->pc = 0x25EB14u;
            goto label_25eb14;
        }
    }
    ctx->pc = 0x25EB04u;
label_25eb04:
    // 0x25eb04: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25eb08:
    // 0x25eb08: 0x8c431340  lw          $v1, 0x1340($v0)
    ctx->pc = 0x25eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
label_25eb0c:
    // 0x25eb0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_25eb10:
    if (ctx->pc == 0x25EB10u) {
        ctx->pc = 0x25EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB0Cu;
        // 0x25eb10: 0x8c441344  lw          $a0, 0x1344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB14u;
        goto label_25eb14;
    }
    ctx->pc = 0x25EB0Cu;
    {
        const bool branch_taken_0x25eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB0Cu;
        // 0x25eb10: 0x8c441344  lw          $a0, 0x1344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb0c) {
            ctx->pc = 0x25EB20u;
            goto label_25eb20;
        }
    }
    ctx->pc = 0x25EB14u;
label_25eb14:
    // 0x25eb14: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x25eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
label_25eb18:
    // 0x25eb18: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x25eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_25eb1c:
    // 0x25eb1c: 0x8c44133c  lw          $a0, 0x133C($v0)
    ctx->pc = 0x25eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
label_25eb20:
    // 0x25eb20: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25eb24:
    // 0x25eb24: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25eb28:
    // 0x25eb28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25eb28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25eb2c:
    // 0x25eb2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25eb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25eb30:
    // 0x25eb30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25eb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25eb34:
    // 0x25eb34: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25eb34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25eb38:
    // 0x25eb38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25eb3c:
    // 0x25eb3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_25eb40:
    // 0x25eb40: 0xc0aa15e  jal         func_2A8578
label_25eb44:
    if (ctx->pc == 0x25EB44u) {
        ctx->pc = 0x25EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB40u;
        // 0x25eb44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB48u;
        goto label_25eb48;
    }
    ctx->pc = 0x25EB40u;
    SET_GPR_U32(ctx, 31, 0x25EB48u);
    ctx->pc = 0x25EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB40u;
    // 0x25eb44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25EB40u, 0x25EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB48u;
label_25eb48:
    // 0x25eb48: 0x8e621644  lw          $v0, 0x1644($s3)
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5700)));
label_25eb4c:
    // 0x25eb4c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x25eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_25eb50:
    // 0x25eb50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25eb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25eb54:
    // 0x25eb54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_25eb58:
    if (ctx->pc == 0x25EB58u) {
        ctx->pc = 0x25EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB54u;
        // 0x25eb58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB5Cu;
        goto label_25eb5c;
    }
    ctx->pc = 0x25EB54u;
    {
        const bool branch_taken_0x25eb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB54u;
        // 0x25eb58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb54) {
            ctx->pc = 0x25EB7Cu;
            goto label_25eb7c;
        }
    }
    ctx->pc = 0x25EB5Cu;
label_25eb5c:
    // 0x25eb5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25eb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25eb60:
    // 0x25eb60: 0xc097f8c  jal         func_25FE30
label_25eb64:
    if (ctx->pc == 0x25EB64u) {
        ctx->pc = 0x25EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB60u;
        // 0x25eb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB68u;
        goto label_25eb68;
    }
    ctx->pc = 0x25EB60u;
    SET_GPR_U32(ctx, 31, 0x25EB68u);
    ctx->pc = 0x25EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB60u;
    // 0x25eb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25EB60u, 0x25EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB68u;
label_25eb68:
    // 0x25eb68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25eb6c:
    if (ctx->pc == 0x25EB6Cu) {
        ctx->pc = 0x25EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB68u;
        // 0x25eb6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB70u;
        goto label_25eb70;
    }
    ctx->pc = 0x25EB68u;
    {
        const bool branch_taken_0x25eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB68u;
        // 0x25eb6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb68) {
            ctx->pc = 0x25EB78u;
            goto label_25eb78;
        }
    }
    ctx->pc = 0x25EB70u;
label_25eb70:
    // 0x25eb70: 0xc07f59a  jal         func_1FD668
label_25eb74:
    if (ctx->pc == 0x25EB74u) {
        ctx->pc = 0x25EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB70u;
        // 0x25eb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB78u;
        goto label_25eb78;
    }
    ctx->pc = 0x25EB70u;
    SET_GPR_U32(ctx, 31, 0x25EB78u);
    ctx->pc = 0x25EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB70u;
    // 0x25eb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x25EB70u, 0x25EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB78u;
label_25eb78:
    // 0x25eb78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25eb7c:
    // 0x25eb7c: 0xc05657c  jal         func_1595F0
label_25eb80:
    if (ctx->pc == 0x25EB80u) {
        ctx->pc = 0x25EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB7Cu;
        // 0x25eb80: 0x26d0ee00  addiu       $s0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB84u;
        goto label_25eb84;
    }
    ctx->pc = 0x25EB7Cu;
    SET_GPR_U32(ctx, 31, 0x25EB84u);
    ctx->pc = 0x25EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB7Cu;
    // 0x25eb80: 0x26d0ee00  addiu       $s0, $s6, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25EB7Cu, 0x25EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB84u;
label_25eb84:
    // 0x25eb84: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_25eb88:
    // 0x25eb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25eb8c:
    // 0x25eb8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_25eb90:
    // 0x25eb90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25eb94:
    // 0x25eb94: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25eb94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_25eb98:
    // 0x25eb98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25eb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25eb9c:
    // 0x25eb9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25eb9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25eba0:
    // 0x25eba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25eba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25eba4:
    // 0x25eba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25eba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25eba8:
    // 0x25eba8: 0xc0b2e92  jal         func_2CBA48
label_25ebac:
    if (ctx->pc == 0x25EBACu) {
        ctx->pc = 0x25EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBA8u;
        // 0x25ebac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBB0u;
        goto label_25ebb0;
    }
    ctx->pc = 0x25EBA8u;
    SET_GPR_U32(ctx, 31, 0x25EBB0u);
    ctx->pc = 0x25EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBA8u;
    // 0x25ebac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25EBA8u, 0x25EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBB0u;
label_25ebb0:
    // 0x25ebb0: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x25ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_25ebb4:
    // 0x25ebb4: 0x2862024b  slti        $v0, $v1, 0x24B
    ctx->pc = 0x25ebb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)587) ? 1 : 0);
label_25ebb8:
    // 0x25ebb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25ebbc:
    if (ctx->pc == 0x25EBBCu) {
        ctx->pc = 0x25EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBB8u;
        // 0x25ebbc: 0x28620249  slti        $v0, $v1, 0x249 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)585) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBC0u;
        goto label_25ebc0;
    }
    ctx->pc = 0x25EBB8u;
    {
        const bool branch_taken_0x25ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBB8u;
        // 0x25ebbc: 0x28620249  slti        $v0, $v1, 0x249 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)585) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebb8) {
            ctx->pc = 0x25EBE0u;
            goto label_25ebe0;
        }
    }
    ctx->pc = 0x25EBC0u;
label_25ebc0:
    // 0x25ebc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25ebc4:
    if (ctx->pc == 0x25EBC4u) {
        ctx->pc = 0x25EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC0u;
        // 0x25ebc4: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBC8u;
        goto label_25ebc8;
    }
    ctx->pc = 0x25EBC0u;
    {
        const bool branch_taken_0x25ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC0u;
        // 0x25ebc4: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc0) {
            ctx->pc = 0x25EBECu;
            goto label_25ebec;
        }
    }
    ctx->pc = 0x25EBC8u;
label_25ebc8:
    // 0x25ebc8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_25ebcc:
    if (ctx->pc == 0x25EBCCu) {
        ctx->pc = 0x25EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC8u;
        // 0x25ebcc: 0x24020240  addiu       $v0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBD0u;
        goto label_25ebd0;
    }
    ctx->pc = 0x25EBC8u;
    {
        const bool branch_taken_0x25ebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC8u;
        // 0x25ebcc: 0x24020240  addiu       $v0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc8) {
            ctx->pc = 0x25EBECu;
            goto label_25ebec;
        }
    }
    ctx->pc = 0x25EBD0u;
label_25ebd0:
    // 0x25ebd0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_25ebd4:
    if (ctx->pc == 0x25EBD4u) {
        ctx->pc = 0x25EBD8u;
        goto label_25ebd8;
    }
    ctx->pc = 0x25EBD0u;
    {
        const bool branch_taken_0x25ebd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ebd0) {
            ctx->pc = 0x25EBECu;
            goto label_25ebec;
        }
    }
    ctx->pc = 0x25EBD8u;
label_25ebd8:
    // 0x25ebd8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_25ebdc:
    if (ctx->pc == 0x25EBDCu) {
        ctx->pc = 0x25EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBD8u;
        // 0x25ebdc: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBE0u;
        goto label_25ebe0;
    }
    ctx->pc = 0x25EBD8u;
    {
        const bool branch_taken_0x25ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBD8u;
        // 0x25ebdc: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebd8) {
            ctx->pc = 0x25EC48u;
            goto label_25ec48;
        }
    }
    ctx->pc = 0x25EBE0u;
label_25ebe0:
    // 0x25ebe0: 0x2402024e  addiu       $v0, $zero, 0x24E
    ctx->pc = 0x25ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
label_25ebe4:
    // 0x25ebe4: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_25ebe8:
    if (ctx->pc == 0x25EBE8u) {
        ctx->pc = 0x25EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBE4u;
        // 0x25ebe8: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBECu;
        goto label_25ebec;
    }
    ctx->pc = 0x25EBE4u;
    {
        const bool branch_taken_0x25ebe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ebe4) {
            ctx->pc = 0x25EBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EBE4u;
            // 0x25ebe8: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EC48u;
            goto label_25ec48;
        }
    }
    ctx->pc = 0x25EBECu;
label_25ebec:
    // 0x25ebec: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25ebecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_25ebf0:
    // 0x25ebf0: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x25ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_25ebf4:
    // 0x25ebf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25ebf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ebf8:
    // 0x25ebf8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x25ebf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25ebfc:
    // 0x25ebfc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25ebfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25ec00:
    // 0x25ec00: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x25ec00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_25ec04:
    // 0x25ec04: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x25ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_25ec08:
    // 0x25ec08: 0xc0c194a  jal         func_306528
label_25ec0c:
    if (ctx->pc == 0x25EC0Cu) {
        ctx->pc = 0x25EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC08u;
        // 0x25ec0c: 0x26d0ee00  addiu       $s0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC10u;
        goto label_25ec10;
    }
    ctx->pc = 0x25EC08u;
    SET_GPR_U32(ctx, 31, 0x25EC10u);
    ctx->pc = 0x25EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC08u;
    // 0x25ec0c: 0x26d0ee00  addiu       $s0, $s6, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x25EC08u, 0x25EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC10u;
label_25ec10:
    // 0x25ec10: 0xc05657c  jal         func_1595F0
label_25ec14:
    if (ctx->pc == 0x25EC14u) {
        ctx->pc = 0x25EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC10u;
        // 0x25ec14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC18u;
        goto label_25ec18;
    }
    ctx->pc = 0x25EC10u;
    SET_GPR_U32(ctx, 31, 0x25EC18u);
    ctx->pc = 0x25EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC10u;
    // 0x25ec14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25EC10u, 0x25EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC18u;
label_25ec18:
    // 0x25ec18: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x25ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
label_25ec1c:
    // 0x25ec1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ec20:
    // 0x25ec20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_25ec24:
    // 0x25ec24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ec28:
    // 0x25ec28: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25ec28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_25ec2c:
    // 0x25ec2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25ec2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ec30:
    // 0x25ec30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25ec30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ec34:
    // 0x25ec34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ec38:
    // 0x25ec38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25ec38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ec3c:
    // 0x25ec3c: 0xc0b2e92  jal         func_2CBA48
label_25ec40:
    if (ctx->pc == 0x25EC40u) {
        ctx->pc = 0x25EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC3Cu;
        // 0x25ec40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC44u;
        goto label_25ec44;
    }
    ctx->pc = 0x25EC3Cu;
    SET_GPR_U32(ctx, 31, 0x25EC44u);
    ctx->pc = 0x25EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC3Cu;
    // 0x25ec40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25EC3Cu, 0x25EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC44u;
label_25ec44:
    // 0x25ec44: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x25ec44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_25ec48:
    // 0x25ec48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25ec4c:
    // 0x25ec4c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x25ec4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_25ec50:
    // 0x25ec50: 0x96620434  lhu         $v0, 0x434($s3)
    ctx->pc = 0x25ec50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1076)));
label_25ec54:
    // 0x25ec54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ec58:
    // 0x25ec58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25ec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25ec5c:
    // 0x25ec5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ec5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ec60:
    // 0x25ec60: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_25ec64:
    // 0x25ec64: 0xe660054c  swc1        $f0, 0x54C($s3)
    ctx->pc = 0x25ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1356), bits); }
label_25ec68:
    // 0x25ec68: 0xc055f06  jal         func_157C18
label_25ec6c:
    if (ctx->pc == 0x25EC6Cu) {
        ctx->pc = 0x25EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC68u;
        // 0x25ec6c: 0xa6620434  sh          $v0, 0x434($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC70u;
        goto label_25ec70;
    }
    ctx->pc = 0x25EC68u;
    SET_GPR_U32(ctx, 31, 0x25EC70u);
    ctx->pc = 0x25EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC68u;
    // 0x25ec6c: 0xa6620434  sh          $v0, 0x434($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25EC68u, 0x25EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC70u;
label_25ec70:
    // 0x25ec70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25ec74:
    if (ctx->pc == 0x25EC74u) {
        ctx->pc = 0x25EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC70u;
        // 0x25ec74: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC78u;
        goto label_25ec78;
    }
    ctx->pc = 0x25EC70u;
    {
        const bool branch_taken_0x25ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC70u;
        // 0x25ec74: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec70) {
            ctx->pc = 0x25ECB4u;
            goto label_25ecb4;
        }
    }
    ctx->pc = 0x25EC78u;
label_25ec78:
    // 0x25ec78: 0x8e621644  lw          $v0, 0x1644($s3)
    ctx->pc = 0x25ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5700)));
label_25ec7c:
    // 0x25ec7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25ec80:
    // 0x25ec80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25ec84:
    if (ctx->pc == 0x25EC84u) {
        ctx->pc = 0x25EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC80u;
        // 0x25ec84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC88u;
        goto label_25ec88;
    }
    ctx->pc = 0x25EC80u;
    {
        const bool branch_taken_0x25ec80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC80u;
        // 0x25ec84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec80) {
            ctx->pc = 0x25ECA0u;
            goto label_25eca0;
        }
    }
    ctx->pc = 0x25EC88u;
label_25ec88:
    // 0x25ec88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25ec8c:
    // 0x25ec8c: 0xa26202f4  sb          $v0, 0x2F4($s3)
    ctx->pc = 0x25ec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 2));
label_25ec90:
    // 0x25ec90: 0xa26302f5  sb          $v1, 0x2F5($s3)
    ctx->pc = 0x25ec90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 3));
label_25ec94:
    // 0x25ec94: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x25ec94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
label_25ec98:
    // 0x25ec98: 0x1000000e  b           . + 4 + (0xE << 2)
label_25ec9c:
    if (ctx->pc == 0x25EC9Cu) {
        ctx->pc = 0x25EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC98u;
        // 0x25ec9c: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ECA0u;
        goto label_25eca0;
    }
    ctx->pc = 0x25EC98u;
    {
        const bool branch_taken_0x25ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC98u;
        // 0x25ec9c: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec98) {
            ctx->pc = 0x25ECD4u;
            goto label_25ecd4;
        }
    }
    ctx->pc = 0x25ECA0u;
label_25eca0:
    // 0x25eca0: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x25eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
label_25eca4:
    // 0x25eca4: 0xa26202f5  sb          $v0, 0x2F5($s3)
    ctx->pc = 0x25eca4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 2));
label_25eca8:
    // 0x25eca8: 0xa26202f4  sb          $v0, 0x2F4($s3)
    ctx->pc = 0x25eca8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 2));
label_25ecac:
    // 0x25ecac: 0x10000009  b           . + 4 + (0x9 << 2)
label_25ecb0:
    if (ctx->pc == 0x25ECB0u) {
        ctx->pc = 0x25ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECACu;
        // 0x25ecb0: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ECB4u;
        goto label_25ecb4;
    }
    ctx->pc = 0x25ECACu;
    {
        const bool branch_taken_0x25ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECACu;
        // 0x25ecb0: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecac) {
            ctx->pc = 0x25ECD4u;
            goto label_25ecd4;
        }
    }
    ctx->pc = 0x25ECB4u;
label_25ecb4:
    // 0x25ecb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25ecb8:
    // 0x25ecb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ecb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25ecbc:
    // 0x25ecbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ecc0:
    // 0x25ecc0: 0xc053e7c  jal         func_14F9F0
label_25ecc4:
    if (ctx->pc == 0x25ECC4u) {
        ctx->pc = 0x25ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECC0u;
        // 0x25ecc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ECC8u;
        goto label_25ecc8;
    }
    ctx->pc = 0x25ECC0u;
    SET_GPR_U32(ctx, 31, 0x25ECC8u);
    ctx->pc = 0x25ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECC0u;
    // 0x25ecc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25ECC0u, 0x25ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECC8u;
label_25ecc8:
    // 0x25ecc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25eccc:
    // 0x25eccc: 0xc053e4a  jal         func_14F928
label_25ecd0:
    if (ctx->pc == 0x25ECD0u) {
        ctx->pc = 0x25ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECCCu;
        // 0x25ecd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ECD4u;
        goto label_25ecd4;
    }
    ctx->pc = 0x25ECCCu;
    SET_GPR_U32(ctx, 31, 0x25ECD4u);
    ctx->pc = 0x25ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECCCu;
    // 0x25ecd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25ECCCu, 0x25ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECD4u;
label_25ecd4:
    // 0x25ecd4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x25ecd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_25ecd8:
    // 0x25ecd8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x25ecd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_25ecdc:
    // 0x25ecdc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x25ecdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_25ece0:
    // 0x25ece0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x25ece0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_25ece4:
    // 0x25ece4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x25ece4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25ece8:
    // 0x25ece8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x25ece8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25ecec:
    // 0x25ecec: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x25ececu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25ecf0:
    // 0x25ecf0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25ecf4:
    // 0x25ecf4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x25ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25ecf8:
    // 0x25ecf8: 0x3e00008  jr          $ra
label_25ecfc:
    if (ctx->pc == 0x25ECFCu) {
        ctx->pc = 0x25ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECF8u;
        // 0x25ecfc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED00u;
        goto label_fallthrough_0x25ecf8;
    }
    ctx->pc = 0x25ECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECF8u;
        // 0x25ecfc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25ecf8:
    ctx->pc = 0x25ED00u;
}
