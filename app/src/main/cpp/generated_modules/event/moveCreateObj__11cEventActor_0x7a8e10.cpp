#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: moveCreateObj__11cEventActor
// Address: 0x7a8e10 - 0x7a9318
void moveCreateObj__11cEventActor_0x7a8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveCreateObj__11cEventActor_0x7a8e10");
#endif

    switch (ctx->pc) {
        case 0x7a8e10u: goto label_7a8e10;
        case 0x7a8e14u: goto label_7a8e14;
        case 0x7a8e18u: goto label_7a8e18;
        case 0x7a8e1cu: goto label_7a8e1c;
        case 0x7a8e20u: goto label_7a8e20;
        case 0x7a8e24u: goto label_7a8e24;
        case 0x7a8e28u: goto label_7a8e28;
        case 0x7a8e2cu: goto label_7a8e2c;
        case 0x7a8e30u: goto label_7a8e30;
        case 0x7a8e34u: goto label_7a8e34;
        case 0x7a8e38u: goto label_7a8e38;
        case 0x7a8e3cu: goto label_7a8e3c;
        case 0x7a8e40u: goto label_7a8e40;
        case 0x7a8e44u: goto label_7a8e44;
        case 0x7a8e48u: goto label_7a8e48;
        case 0x7a8e4cu: goto label_7a8e4c;
        case 0x7a8e50u: goto label_7a8e50;
        case 0x7a8e54u: goto label_7a8e54;
        case 0x7a8e58u: goto label_7a8e58;
        case 0x7a8e5cu: goto label_7a8e5c;
        case 0x7a8e60u: goto label_7a8e60;
        case 0x7a8e64u: goto label_7a8e64;
        case 0x7a8e68u: goto label_7a8e68;
        case 0x7a8e6cu: goto label_7a8e6c;
        case 0x7a8e70u: goto label_7a8e70;
        case 0x7a8e74u: goto label_7a8e74;
        case 0x7a8e78u: goto label_7a8e78;
        case 0x7a8e7cu: goto label_7a8e7c;
        case 0x7a8e80u: goto label_7a8e80;
        case 0x7a8e84u: goto label_7a8e84;
        case 0x7a8e88u: goto label_7a8e88;
        case 0x7a8e8cu: goto label_7a8e8c;
        case 0x7a8e90u: goto label_7a8e90;
        case 0x7a8e94u: goto label_7a8e94;
        case 0x7a8e98u: goto label_7a8e98;
        case 0x7a8e9cu: goto label_7a8e9c;
        case 0x7a8ea0u: goto label_7a8ea0;
        case 0x7a8ea4u: goto label_7a8ea4;
        case 0x7a8ea8u: goto label_7a8ea8;
        case 0x7a8eacu: goto label_7a8eac;
        case 0x7a8eb0u: goto label_7a8eb0;
        case 0x7a8eb4u: goto label_7a8eb4;
        case 0x7a8eb8u: goto label_7a8eb8;
        case 0x7a8ebcu: goto label_7a8ebc;
        case 0x7a8ec0u: goto label_7a8ec0;
        case 0x7a8ec4u: goto label_7a8ec4;
        case 0x7a8ec8u: goto label_7a8ec8;
        case 0x7a8eccu: goto label_7a8ecc;
        case 0x7a8ed0u: goto label_7a8ed0;
        case 0x7a8ed4u: goto label_7a8ed4;
        case 0x7a8ed8u: goto label_7a8ed8;
        case 0x7a8edcu: goto label_7a8edc;
        case 0x7a8ee0u: goto label_7a8ee0;
        case 0x7a8ee4u: goto label_7a8ee4;
        case 0x7a8ee8u: goto label_7a8ee8;
        case 0x7a8eecu: goto label_7a8eec;
        case 0x7a8ef0u: goto label_7a8ef0;
        case 0x7a8ef4u: goto label_7a8ef4;
        case 0x7a8ef8u: goto label_7a8ef8;
        case 0x7a8efcu: goto label_7a8efc;
        case 0x7a8f00u: goto label_7a8f00;
        case 0x7a8f04u: goto label_7a8f04;
        case 0x7a8f08u: goto label_7a8f08;
        case 0x7a8f0cu: goto label_7a8f0c;
        case 0x7a8f10u: goto label_7a8f10;
        case 0x7a8f14u: goto label_7a8f14;
        case 0x7a8f18u: goto label_7a8f18;
        case 0x7a8f1cu: goto label_7a8f1c;
        case 0x7a8f20u: goto label_7a8f20;
        case 0x7a8f24u: goto label_7a8f24;
        case 0x7a8f28u: goto label_7a8f28;
        case 0x7a8f2cu: goto label_7a8f2c;
        case 0x7a8f30u: goto label_7a8f30;
        case 0x7a8f34u: goto label_7a8f34;
        case 0x7a8f38u: goto label_7a8f38;
        case 0x7a8f3cu: goto label_7a8f3c;
        case 0x7a8f40u: goto label_7a8f40;
        case 0x7a8f44u: goto label_7a8f44;
        case 0x7a8f48u: goto label_7a8f48;
        case 0x7a8f4cu: goto label_7a8f4c;
        case 0x7a8f50u: goto label_7a8f50;
        case 0x7a8f54u: goto label_7a8f54;
        case 0x7a8f58u: goto label_7a8f58;
        case 0x7a8f5cu: goto label_7a8f5c;
        case 0x7a8f60u: goto label_7a8f60;
        case 0x7a8f64u: goto label_7a8f64;
        case 0x7a8f68u: goto label_7a8f68;
        case 0x7a8f6cu: goto label_7a8f6c;
        case 0x7a8f70u: goto label_7a8f70;
        case 0x7a8f74u: goto label_7a8f74;
        case 0x7a8f78u: goto label_7a8f78;
        case 0x7a8f7cu: goto label_7a8f7c;
        case 0x7a8f80u: goto label_7a8f80;
        case 0x7a8f84u: goto label_7a8f84;
        case 0x7a8f88u: goto label_7a8f88;
        case 0x7a8f8cu: goto label_7a8f8c;
        case 0x7a8f90u: goto label_7a8f90;
        case 0x7a8f94u: goto label_7a8f94;
        case 0x7a8f98u: goto label_7a8f98;
        case 0x7a8f9cu: goto label_7a8f9c;
        case 0x7a8fa0u: goto label_7a8fa0;
        case 0x7a8fa4u: goto label_7a8fa4;
        case 0x7a8fa8u: goto label_7a8fa8;
        case 0x7a8facu: goto label_7a8fac;
        case 0x7a8fb0u: goto label_7a8fb0;
        case 0x7a8fb4u: goto label_7a8fb4;
        case 0x7a8fb8u: goto label_7a8fb8;
        case 0x7a8fbcu: goto label_7a8fbc;
        case 0x7a8fc0u: goto label_7a8fc0;
        case 0x7a8fc4u: goto label_7a8fc4;
        case 0x7a8fc8u: goto label_7a8fc8;
        case 0x7a8fccu: goto label_7a8fcc;
        case 0x7a8fd0u: goto label_7a8fd0;
        case 0x7a8fd4u: goto label_7a8fd4;
        case 0x7a8fd8u: goto label_7a8fd8;
        case 0x7a8fdcu: goto label_7a8fdc;
        case 0x7a8fe0u: goto label_7a8fe0;
        case 0x7a8fe4u: goto label_7a8fe4;
        case 0x7a8fe8u: goto label_7a8fe8;
        case 0x7a8fecu: goto label_7a8fec;
        case 0x7a8ff0u: goto label_7a8ff0;
        case 0x7a8ff4u: goto label_7a8ff4;
        case 0x7a8ff8u: goto label_7a8ff8;
        case 0x7a8ffcu: goto label_7a8ffc;
        case 0x7a9000u: goto label_7a9000;
        case 0x7a9004u: goto label_7a9004;
        case 0x7a9008u: goto label_7a9008;
        case 0x7a900cu: goto label_7a900c;
        case 0x7a9010u: goto label_7a9010;
        case 0x7a9014u: goto label_7a9014;
        case 0x7a9018u: goto label_7a9018;
        case 0x7a901cu: goto label_7a901c;
        case 0x7a9020u: goto label_7a9020;
        case 0x7a9024u: goto label_7a9024;
        case 0x7a9028u: goto label_7a9028;
        case 0x7a902cu: goto label_7a902c;
        case 0x7a9030u: goto label_7a9030;
        case 0x7a9034u: goto label_7a9034;
        case 0x7a9038u: goto label_7a9038;
        case 0x7a903cu: goto label_7a903c;
        case 0x7a9040u: goto label_7a9040;
        case 0x7a9044u: goto label_7a9044;
        case 0x7a9048u: goto label_7a9048;
        case 0x7a904cu: goto label_7a904c;
        case 0x7a9050u: goto label_7a9050;
        case 0x7a9054u: goto label_7a9054;
        case 0x7a9058u: goto label_7a9058;
        case 0x7a905cu: goto label_7a905c;
        case 0x7a9060u: goto label_7a9060;
        case 0x7a9064u: goto label_7a9064;
        case 0x7a9068u: goto label_7a9068;
        case 0x7a906cu: goto label_7a906c;
        case 0x7a9070u: goto label_7a9070;
        case 0x7a9074u: goto label_7a9074;
        case 0x7a9078u: goto label_7a9078;
        case 0x7a907cu: goto label_7a907c;
        case 0x7a9080u: goto label_7a9080;
        case 0x7a9084u: goto label_7a9084;
        case 0x7a9088u: goto label_7a9088;
        case 0x7a908cu: goto label_7a908c;
        case 0x7a9090u: goto label_7a9090;
        case 0x7a9094u: goto label_7a9094;
        case 0x7a9098u: goto label_7a9098;
        case 0x7a909cu: goto label_7a909c;
        case 0x7a90a0u: goto label_7a90a0;
        case 0x7a90a4u: goto label_7a90a4;
        case 0x7a90a8u: goto label_7a90a8;
        case 0x7a90acu: goto label_7a90ac;
        case 0x7a90b0u: goto label_7a90b0;
        case 0x7a90b4u: goto label_7a90b4;
        case 0x7a90b8u: goto label_7a90b8;
        case 0x7a90bcu: goto label_7a90bc;
        case 0x7a90c0u: goto label_7a90c0;
        case 0x7a90c4u: goto label_7a90c4;
        case 0x7a90c8u: goto label_7a90c8;
        case 0x7a90ccu: goto label_7a90cc;
        case 0x7a90d0u: goto label_7a90d0;
        case 0x7a90d4u: goto label_7a90d4;
        case 0x7a90d8u: goto label_7a90d8;
        case 0x7a90dcu: goto label_7a90dc;
        case 0x7a90e0u: goto label_7a90e0;
        case 0x7a90e4u: goto label_7a90e4;
        case 0x7a90e8u: goto label_7a90e8;
        case 0x7a90ecu: goto label_7a90ec;
        case 0x7a90f0u: goto label_7a90f0;
        case 0x7a90f4u: goto label_7a90f4;
        case 0x7a90f8u: goto label_7a90f8;
        case 0x7a90fcu: goto label_7a90fc;
        case 0x7a9100u: goto label_7a9100;
        case 0x7a9104u: goto label_7a9104;
        case 0x7a9108u: goto label_7a9108;
        case 0x7a910cu: goto label_7a910c;
        case 0x7a9110u: goto label_7a9110;
        case 0x7a9114u: goto label_7a9114;
        case 0x7a9118u: goto label_7a9118;
        case 0x7a911cu: goto label_7a911c;
        case 0x7a9120u: goto label_7a9120;
        case 0x7a9124u: goto label_7a9124;
        case 0x7a9128u: goto label_7a9128;
        case 0x7a912cu: goto label_7a912c;
        case 0x7a9130u: goto label_7a9130;
        case 0x7a9134u: goto label_7a9134;
        case 0x7a9138u: goto label_7a9138;
        case 0x7a913cu: goto label_7a913c;
        case 0x7a9140u: goto label_7a9140;
        case 0x7a9144u: goto label_7a9144;
        case 0x7a9148u: goto label_7a9148;
        case 0x7a914cu: goto label_7a914c;
        case 0x7a9150u: goto label_7a9150;
        case 0x7a9154u: goto label_7a9154;
        case 0x7a9158u: goto label_7a9158;
        case 0x7a915cu: goto label_7a915c;
        case 0x7a9160u: goto label_7a9160;
        case 0x7a9164u: goto label_7a9164;
        case 0x7a9168u: goto label_7a9168;
        case 0x7a916cu: goto label_7a916c;
        case 0x7a9170u: goto label_7a9170;
        case 0x7a9174u: goto label_7a9174;
        case 0x7a9178u: goto label_7a9178;
        case 0x7a917cu: goto label_7a917c;
        case 0x7a9180u: goto label_7a9180;
        case 0x7a9184u: goto label_7a9184;
        case 0x7a9188u: goto label_7a9188;
        case 0x7a918cu: goto label_7a918c;
        case 0x7a9190u: goto label_7a9190;
        case 0x7a9194u: goto label_7a9194;
        case 0x7a9198u: goto label_7a9198;
        case 0x7a919cu: goto label_7a919c;
        case 0x7a91a0u: goto label_7a91a0;
        case 0x7a91a4u: goto label_7a91a4;
        case 0x7a91a8u: goto label_7a91a8;
        case 0x7a91acu: goto label_7a91ac;
        case 0x7a91b0u: goto label_7a91b0;
        case 0x7a91b4u: goto label_7a91b4;
        case 0x7a91b8u: goto label_7a91b8;
        case 0x7a91bcu: goto label_7a91bc;
        case 0x7a91c0u: goto label_7a91c0;
        case 0x7a91c4u: goto label_7a91c4;
        case 0x7a91c8u: goto label_7a91c8;
        case 0x7a91ccu: goto label_7a91cc;
        case 0x7a91d0u: goto label_7a91d0;
        case 0x7a91d4u: goto label_7a91d4;
        case 0x7a91d8u: goto label_7a91d8;
        case 0x7a91dcu: goto label_7a91dc;
        case 0x7a91e0u: goto label_7a91e0;
        case 0x7a91e4u: goto label_7a91e4;
        case 0x7a91e8u: goto label_7a91e8;
        case 0x7a91ecu: goto label_7a91ec;
        case 0x7a91f0u: goto label_7a91f0;
        case 0x7a91f4u: goto label_7a91f4;
        case 0x7a91f8u: goto label_7a91f8;
        case 0x7a91fcu: goto label_7a91fc;
        case 0x7a9200u: goto label_7a9200;
        case 0x7a9204u: goto label_7a9204;
        case 0x7a9208u: goto label_7a9208;
        case 0x7a920cu: goto label_7a920c;
        case 0x7a9210u: goto label_7a9210;
        case 0x7a9214u: goto label_7a9214;
        case 0x7a9218u: goto label_7a9218;
        case 0x7a921cu: goto label_7a921c;
        case 0x7a9220u: goto label_7a9220;
        case 0x7a9224u: goto label_7a9224;
        case 0x7a9228u: goto label_7a9228;
        case 0x7a922cu: goto label_7a922c;
        case 0x7a9230u: goto label_7a9230;
        case 0x7a9234u: goto label_7a9234;
        case 0x7a9238u: goto label_7a9238;
        case 0x7a923cu: goto label_7a923c;
        case 0x7a9240u: goto label_7a9240;
        case 0x7a9244u: goto label_7a9244;
        case 0x7a9248u: goto label_7a9248;
        case 0x7a924cu: goto label_7a924c;
        case 0x7a9250u: goto label_7a9250;
        case 0x7a9254u: goto label_7a9254;
        case 0x7a9258u: goto label_7a9258;
        case 0x7a925cu: goto label_7a925c;
        case 0x7a9260u: goto label_7a9260;
        case 0x7a9264u: goto label_7a9264;
        case 0x7a9268u: goto label_7a9268;
        case 0x7a926cu: goto label_7a926c;
        case 0x7a9270u: goto label_7a9270;
        case 0x7a9274u: goto label_7a9274;
        case 0x7a9278u: goto label_7a9278;
        case 0x7a927cu: goto label_7a927c;
        case 0x7a9280u: goto label_7a9280;
        case 0x7a9284u: goto label_7a9284;
        case 0x7a9288u: goto label_7a9288;
        case 0x7a928cu: goto label_7a928c;
        case 0x7a9290u: goto label_7a9290;
        case 0x7a9294u: goto label_7a9294;
        case 0x7a9298u: goto label_7a9298;
        case 0x7a929cu: goto label_7a929c;
        case 0x7a92a0u: goto label_7a92a0;
        case 0x7a92a4u: goto label_7a92a4;
        case 0x7a92a8u: goto label_7a92a8;
        case 0x7a92acu: goto label_7a92ac;
        case 0x7a92b0u: goto label_7a92b0;
        case 0x7a92b4u: goto label_7a92b4;
        case 0x7a92b8u: goto label_7a92b8;
        case 0x7a92bcu: goto label_7a92bc;
        case 0x7a92c0u: goto label_7a92c0;
        case 0x7a92c4u: goto label_7a92c4;
        case 0x7a92c8u: goto label_7a92c8;
        case 0x7a92ccu: goto label_7a92cc;
        case 0x7a92d0u: goto label_7a92d0;
        case 0x7a92d4u: goto label_7a92d4;
        case 0x7a92d8u: goto label_7a92d8;
        case 0x7a92dcu: goto label_7a92dc;
        case 0x7a92e0u: goto label_7a92e0;
        case 0x7a92e4u: goto label_7a92e4;
        case 0x7a92e8u: goto label_7a92e8;
        case 0x7a92ecu: goto label_7a92ec;
        case 0x7a92f0u: goto label_7a92f0;
        case 0x7a92f4u: goto label_7a92f4;
        case 0x7a92f8u: goto label_7a92f8;
        case 0x7a92fcu: goto label_7a92fc;
        case 0x7a9300u: goto label_7a9300;
        case 0x7a9304u: goto label_7a9304;
        case 0x7a9308u: goto label_7a9308;
        case 0x7a930cu: goto label_7a930c;
        case 0x7a9310u: goto label_7a9310;
        case 0x7a9314u: goto label_7a9314;
        default: break;
    }

    ctx->pc = 0x7a8e10u;

label_7a8e10:
    // 0x7a8e10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x7a8e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_7a8e14:
    // 0x7a8e14: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7a8e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_7a8e18:
    // 0x7a8e18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x7a8e18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7a8e1c:
    // 0x7a8e1c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7a8e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_7a8e20:
    // 0x7a8e20: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7a8e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_7a8e24:
    // 0x7a8e24: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7a8e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_7a8e28:
    // 0x7a8e28: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7a8e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_7a8e2c:
    // 0x7a8e2c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7a8e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_7a8e30:
    // 0x7a8e30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7a8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_7a8e34:
    // 0x7a8e34: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x7a8e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_7a8e38:
    // 0x7a8e38: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x7a8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_7a8e3c:
    // 0x7a8e3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7a8e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_7a8e40:
    // 0x7a8e40: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x7a8e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_7a8e44:
    // 0x7a8e44: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7a8e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_7a8e48:
    // 0x7a8e48: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x7a8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_7a8e4c:
    // 0x7a8e4c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x7a8e4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a8e50:
    // 0x7a8e50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7a8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_7a8e54:
    // 0x7a8e54: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7a8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_7a8e58:
    // 0x7a8e58: 0x184000c5  blez        $v0, . + 4 + (0xC5 << 2)
label_7a8e5c:
    if (ctx->pc == 0x7A8E5Cu) {
        ctx->pc = 0x7A8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8E58u;
        // 0x7a8e5c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8E60u;
        goto label_7a8e60;
    }
    ctx->pc = 0x7A8E58u;
    {
        const bool branch_taken_0x7a8e58 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8E58u;
        // 0x7a8e5c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8e58) {
            ctx->pc = 0x7A9170u;
            goto label_7a9170;
        }
    }
    ctx->pc = 0x7A8E60u;
label_7a8e60:
    // 0x7a8e60: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x7a8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7a8e64:
    // 0x7a8e64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a8e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7a8e68:
    // 0x7a8e68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7a8e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7a8e6c:
    // 0x7a8e6c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x7a8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_7a8e70:
    // 0x7a8e70: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x7a8e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_7a8e74:
    // 0x7a8e74: 0x0  nop
    ctx->pc = 0x7a8e74u;
    // NOP
label_7a8e78:
    // 0x7a8e78: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x7a8e78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_7a8e7c:
    // 0x7a8e7c: 0x2e63018  mult        $a2, $s7, $a2
    ctx->pc = 0x7a8e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_7a8e80:
    // 0x7a8e80: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x7a8e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_7a8e84:
    // 0x7a8e84: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7a8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7a8e88:
    // 0x7a8e88: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x7a8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_7a8e8c:
    // 0x7a8e8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x7a8e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_7a8e90:
    // 0x7a8e90: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x7a8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_7a8e94:
    // 0x7a8e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7a8e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7a8e98:
    // 0x7a8e98: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x7a8e98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a8e9c:
    // 0x7a8e9c: 0xe69821  addu        $s3, $a3, $a2
    ctx->pc = 0x7a8e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_7a8ea0:
    // 0x7a8ea0: 0xc0b1316  jal         func_2C4C58
label_7a8ea4:
    if (ctx->pc == 0x7A8EA4u) {
        ctx->pc = 0x7A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8EA0u;
        // 0x7a8ea4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8EA8u;
        goto label_7a8ea8;
    }
    ctx->pc = 0x7A8EA0u;
    SET_GPR_U32(ctx, 31, 0x7A8EA8u);
    ctx->pc = 0x7A8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8EA0u;
    // 0x7a8ea4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4C58u, 0x7A8EA0u, 0x7A8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8EA8u;
label_7a8ea8:
    // 0x7a8ea8: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x7a8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_7a8eac:
    // 0x7a8eac: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x7a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_7a8eb0:
    // 0x7a8eb0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x7a8eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_7a8eb4:
    // 0x7a8eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7a8eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a8eb8:
    // 0x7a8eb8: 0xa2a30008  sb          $v1, 0x8($s5)
    ctx->pc = 0x7a8eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 3));
label_7a8ebc:
    // 0x7a8ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7a8ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7a8ec0:
    // 0x7a8ec0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x7a8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_7a8ec4:
    // 0x7a8ec4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x7a8ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7a8ec8:
    // 0x7a8ec8: 0xc1ea154  jal         func_7A8550
label_7a8ecc:
    if (ctx->pc == 0x7A8ECCu) {
        ctx->pc = 0x7A8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8EC8u;
        // 0x7a8ecc: 0xa2630008  sb          $v1, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8ED0u;
        goto label_7a8ed0;
    }
    ctx->pc = 0x7A8EC8u;
    SET_GPR_U32(ctx, 31, 0x7A8ED0u);
    ctx->pc = 0x7A8ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8EC8u;
    // 0x7a8ecc: 0xa2630008  sb          $v1, 0x8($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8550u, 0x7A8EC8u, 0x7A8ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8ED0u;
label_7a8ed0:
    // 0x7a8ed0: 0x3843ffff  xori        $v1, $v0, 0xFFFF
    ctx->pc = 0x7a8ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_7a8ed4:
    // 0x7a8ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7a8ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7a8ed8:
    // 0x7a8ed8: 0xc1ea20e  jal         func_7A8838
label_7a8edc:
    if (ctx->pc == 0x7A8EDCu) {
        ctx->pc = 0x7A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8ED8u;
        // 0x7a8edc: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8EE0u;
        goto label_7a8ee0;
    }
    ctx->pc = 0x7A8ED8u;
    SET_GPR_U32(ctx, 31, 0x7A8EE0u);
    ctx->pc = 0x7A8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8ED8u;
    // 0x7a8edc: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8838u, 0x7A8ED8u, 0x7A8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8EE0u;
label_7a8ee0:
    // 0x7a8ee0: 0x3843ffff  xori        $v1, $v0, 0xFFFF
    ctx->pc = 0x7a8ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_7a8ee4:
    // 0x7a8ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7a8ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7a8ee8:
    // 0x7a8ee8: 0xc1ea13c  jal         func_7A84F0
label_7a8eec:
    if (ctx->pc == 0x7A8EECu) {
        ctx->pc = 0x7A8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8EE8u;
        // 0x7a8eec: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8EF0u;
        goto label_7a8ef0;
    }
    ctx->pc = 0x7A8EE8u;
    SET_GPR_U32(ctx, 31, 0x7A8EF0u);
    ctx->pc = 0x7A8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8EE8u;
    // 0x7a8eec: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A84F0u, 0x7A8EE8u, 0x7A8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8EF0u;
label_7a8ef0:
    // 0x7a8ef0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_7a8ef4:
    if (ctx->pc == 0x7A8EF4u) {
        ctx->pc = 0x7A8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8EF0u;
        // 0x7a8ef4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8EF8u;
        goto label_7a8ef8;
    }
    ctx->pc = 0x7A8EF0u;
    {
        const bool branch_taken_0x7a8ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8EF0u;
        // 0x7a8ef4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8ef0) {
            ctx->pc = 0x7A8F78u;
            goto label_7a8f78;
        }
    }
    ctx->pc = 0x7A8EF8u;
label_7a8ef8:
    // 0x7a8ef8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7a8ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a8efc:
    // 0x7a8efc: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x7a8efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
label_7a8f00:
    // 0x7a8f00: 0x10000002  b           . + 4 + (0x2 << 2)
label_7a8f04:
    if (ctx->pc == 0x7A8F04u) {
        ctx->pc = 0x7A8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F00u;
        // 0x7a8f04: 0x8c940008  lw          $s4, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F08u;
        goto label_7a8f08;
    }
    ctx->pc = 0x7A8F00u;
    {
        const bool branch_taken_0x7a8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F00u;
        // 0x7a8f04: 0x8c940008  lw          $s4, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8f00) {
            ctx->pc = 0x7A8F0Cu;
            goto label_7a8f0c;
        }
    }
    ctx->pc = 0x7A8F08u;
label_7a8f08:
    // 0x7a8f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7a8f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_7a8f0c:
    // 0x7a8f0c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x7a8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_7a8f10:
    // 0x7a8f10: 0x246364e0  addiu       $v1, $v1, 0x64E0
    ctx->pc = 0x7a8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25824));
label_7a8f14:
    // 0x7a8f14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7a8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7a8f18:
    // 0x7a8f18: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7a8f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_7a8f1c:
    // 0x7a8f1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7a8f20:
    if (ctx->pc == 0x7A8F20u) {
        ctx->pc = 0x7A8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F1Cu;
        // 0x7a8f20: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F24u;
        goto label_7a8f24;
    }
    ctx->pc = 0x7A8F1Cu;
    {
        const bool branch_taken_0x7a8f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F1Cu;
        // 0x7a8f20: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8f1c) {
            ctx->pc = 0x7A8F58u;
            goto label_7a8f58;
        }
    }
    ctx->pc = 0x7A8F24u;
label_7a8f24:
    // 0x7a8f24: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x7a8f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7a8f28:
    // 0x7a8f28: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x7a8f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_7a8f2c:
    // 0x7a8f2c: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x7a8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_7a8f30:
    // 0x7a8f30: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x7a8f30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_7a8f34:
    // 0x7a8f34: 0x1223fff4  beq         $s1, $v1, . + 4 + (-0xC << 2)
label_7a8f38:
    if (ctx->pc == 0x7A8F38u) {
        ctx->pc = 0x7A8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F34u;
        // 0x7a8f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F3Cu;
        goto label_7a8f3c;
    }
    ctx->pc = 0x7A8F34u;
    {
        const bool branch_taken_0x7a8f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x7A8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F34u;
        // 0x7a8f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8f34) {
            ctx->pc = 0x7A8F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8f08;
        }
    }
    ctx->pc = 0x7A8F3Cu;
label_7a8f3c:
    // 0x7a8f3c: 0xc0b77a8  jal         func_2DDEA0
label_7a8f40:
    if (ctx->pc == 0x7A8F40u) {
        ctx->pc = 0x7A8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F3Cu;
        // 0x7a8f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F44u;
        goto label_7a8f44;
    }
    ctx->pc = 0x7A8F3Cu;
    SET_GPR_U32(ctx, 31, 0x7A8F44u);
    ctx->pc = 0x7A8F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8F3Cu;
    // 0x7a8f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEA0u, 0x7A8F3Cu, 0x7A8F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8F44u;
label_7a8f44:
    // 0x7a8f44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x7a8f44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a8f48:
    // 0x7a8f48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7a8f4c:
    // 0x7a8f4c: 0x52c2ffef  beql        $s6, $v0, . + 4 + (-0x11 << 2)
label_7a8f50:
    if (ctx->pc == 0x7A8F50u) {
        ctx->pc = 0x7A8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F4Cu;
        // 0x7a8f50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F54u;
        goto label_7a8f54;
    }
    ctx->pc = 0x7A8F4Cu;
    {
        const bool branch_taken_0x7a8f4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x7a8f4c) {
            ctx->pc = 0x7A8F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8F4Cu;
            // 0x7a8f50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A8F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8f0c;
        }
    }
    ctx->pc = 0x7A8F54u;
label_7a8f54:
    // 0x7a8f54: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x7a8f54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7a8f58:
    // 0x7a8f58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7a8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7a8f5c:
    // 0x7a8f5c: 0x16c30006  bne         $s6, $v1, . + 4 + (0x6 << 2)
label_7a8f60:
    if (ctx->pc == 0x7A8F60u) {
        ctx->pc = 0x7A8F64u;
        goto label_7a8f64;
    }
    ctx->pc = 0x7A8F5Cu;
    {
        const bool branch_taken_0x7a8f5c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x7a8f5c) {
            ctx->pc = 0x7A8F78u;
            goto label_7a8f78;
        }
    }
    ctx->pc = 0x7A8F64u;
label_7a8f64:
    // 0x7a8f64: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x7a8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_7a8f68:
    // 0x7a8f68: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7a8f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7a8f6c:
    // 0x7a8f6c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x7a8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_7a8f70:
    // 0x7a8f70: 0x1000007a  b           . + 4 + (0x7A << 2)
label_7a8f74:
    if (ctx->pc == 0x7A8F74u) {
        ctx->pc = 0x7A8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F70u;
        // 0x7a8f74: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F78u;
        goto label_7a8f78;
    }
    ctx->pc = 0x7A8F70u;
    {
        const bool branch_taken_0x7a8f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F70u;
        // 0x7a8f74: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8f70) {
            ctx->pc = 0x7A915Cu;
            goto label_7a915c;
        }
    }
    ctx->pc = 0x7A8F78u;
label_7a8f78:
    // 0x7a8f78: 0x17c0000a  bnez        $fp, . + 4 + (0xA << 2)
label_7a8f7c:
    if (ctx->pc == 0x7A8F7Cu) {
        ctx->pc = 0x7A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F78u;
        // 0x7a8f7c: 0xae710040  sw          $s1, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F80u;
        goto label_7a8f80;
    }
    ctx->pc = 0x7A8F78u;
    {
        const bool branch_taken_0x7a8f78 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F78u;
        // 0x7a8f7c: 0xae710040  sw          $s1, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8f78) {
            ctx->pc = 0x7A8FA4u;
            goto label_7a8fa4;
        }
    }
    ctx->pc = 0x7A8F80u;
label_7a8f80:
    // 0x7a8f80: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7a8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_7a8f84:
    // 0x7a8f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7a8f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7a8f88:
    // 0x7a8f88: 0xc07fa80  jal         func_1FEA00
label_7a8f8c:
    if (ctx->pc == 0x7A8F8Cu) {
        ctx->pc = 0x7A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F88u;
        // 0x7a8f8c: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F90u;
        goto label_7a8f90;
    }
    ctx->pc = 0x7A8F88u;
    SET_GPR_U32(ctx, 31, 0x7A8F90u);
    ctx->pc = 0x7A8F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8F88u;
    // 0x7a8f8c: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA00u, 0x7A8F88u, 0x7A8F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8F90u;
label_7a8f90:
    // 0x7a8f90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_7a8f94:
    if (ctx->pc == 0x7A8F94u) {
        ctx->pc = 0x7A8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F90u;
        // 0x7a8f94: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8F98u;
        goto label_7a8f98;
    }
    ctx->pc = 0x7A8F90u;
    {
        const bool branch_taken_0x7a8f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8F90u;
        // 0x7a8f94: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8f90) {
            ctx->pc = 0x7A8FA8u;
            goto label_7a8fa8;
        }
    }
    ctx->pc = 0x7A8F98u;
label_7a8f98:
    // 0x7a8f98: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x7a8f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
label_7a8f9c:
    // 0x7a8f9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7a8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_7a8fa0:
    // 0x7a8fa0: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x7a8fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
label_7a8fa4:
    // 0x7a8fa4: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x7a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_7a8fa8:
    // 0x7a8fa8: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_7a8fac:
    if (ctx->pc == 0x7A8FACu) {
        ctx->pc = 0x7A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FA8u;
        // 0x7a8fac: 0x96620024  lhu         $v0, 0x24($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FB0u;
        goto label_7a8fb0;
    }
    ctx->pc = 0x7A8FA8u;
    {
        const bool branch_taken_0x7a8fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7a8fa8) {
            ctx->pc = 0x7A8FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8FA8u;
            // 0x7a8fac: 0x96620024  lhu         $v0, 0x24($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A8FC8u;
            goto label_7a8fc8;
        }
    }
    ctx->pc = 0x7A8FB0u;
label_7a8fb0:
    // 0x7a8fb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7a8fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7a8fb4:
    // 0x7a8fb4: 0xc1ea60e  jal         func_7A9838
label_7a8fb8:
    if (ctx->pc == 0x7A8FB8u) {
        ctx->pc = 0x7A8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FB4u;
        // 0x7a8fb8: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FBCu;
        goto label_7a8fbc;
    }
    ctx->pc = 0x7A8FB4u;
    SET_GPR_U32(ctx, 31, 0x7A8FBCu);
    ctx->pc = 0x7A8FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8FB4u;
    // 0x7a8fb8: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9838u, 0x7A8FB4u, 0x7A8FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8FBCu;
label_7a8fbc:
    // 0x7a8fbc: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_7a8fc0:
    if (ctx->pc == 0x7A8FC0u) {
        ctx->pc = 0x7A8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FBCu;
        // 0x7a8fc0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FC4u;
        goto label_7a8fc4;
    }
    ctx->pc = 0x7A8FBCu;
    {
        const bool branch_taken_0x7a8fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FBCu;
        // 0x7a8fc0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8fbc) {
            ctx->pc = 0x7A915Cu;
            goto label_7a915c;
        }
    }
    ctx->pc = 0x7A8FC4u;
label_7a8fc4:
    // 0x7a8fc4: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x7a8fc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
label_7a8fc8:
    // 0x7a8fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7a8fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7a8fcc:
    // 0x7a8fcc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7a8fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7a8fd0:
    // 0x7a8fd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7a8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7a8fd4:
    // 0x7a8fd4: 0xc0c4aa0  jal         func_312A80
label_7a8fd8:
    if (ctx->pc == 0x7A8FD8u) {
        ctx->pc = 0x7A8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FD4u;
        // 0x7a8fd8: 0xa6620024  sh          $v0, 0x24($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FDCu;
        goto label_7a8fdc;
    }
    ctx->pc = 0x7A8FD4u;
    SET_GPR_U32(ctx, 31, 0x7A8FDCu);
    ctx->pc = 0x7A8FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8FD4u;
    // 0x7a8fd8: 0xa6620024  sh          $v0, 0x24($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7A8FD4u, 0x7A8FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8FDCu;
label_7a8fdc:
    // 0x7a8fdc: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_7a8fe0:
    if (ctx->pc == 0x7A8FE0u) {
        ctx->pc = 0x7A8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FDCu;
        // 0x7a8fe0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FE4u;
        goto label_7a8fe4;
    }
    ctx->pc = 0x7A8FDCu;
    {
        const bool branch_taken_0x7a8fdc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FDCu;
        // 0x7a8fe0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8fdc) {
            ctx->pc = 0x7A8FF0u;
            goto label_7a8ff0;
        }
    }
    ctx->pc = 0x7A8FE4u;
label_7a8fe4:
    // 0x7a8fe4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x7a8fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_7a8fe8:
    // 0x7a8fe8: 0xc0ae15c  jal         func_2B8570
label_7a8fec:
    if (ctx->pc == 0x7A8FECu) {
        ctx->pc = 0x7A8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FE8u;
        // 0x7a8fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FF0u;
        goto label_7a8ff0;
    }
    ctx->pc = 0x7A8FE8u;
    SET_GPR_U32(ctx, 31, 0x7A8FF0u);
    ctx->pc = 0x7A8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8FE8u;
    // 0x7a8fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8570u, 0x7A8FE8u, 0x7A8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8FF0u;
label_7a8ff0:
    // 0x7a8ff0: 0x5200003b  beql        $s0, $zero, . + 4 + (0x3B << 2)
label_7a8ff4:
    if (ctx->pc == 0x7A8FF4u) {
        ctx->pc = 0x7A8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8FF0u;
        // 0x7a8ff4: 0x96620024  lhu         $v0, 0x24($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A8FF8u;
        goto label_7a8ff8;
    }
    ctx->pc = 0x7A8FF0u;
    {
        const bool branch_taken_0x7a8ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a8ff0) {
            ctx->pc = 0x7A8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8FF0u;
            // 0x7a8ff4: 0x96620024  lhu         $v0, 0x24($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A90E0u;
            goto label_7a90e0;
        }
    }
    ctx->pc = 0x7A8FF8u;
label_7a8ff8:
    // 0x7a8ff8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7a8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7a8ffc:
    // 0x7a8ffc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7a8ffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7a9000:
    // 0x7a9000: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7a9000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7a9004:
    // 0x7a9004: 0x40f809  jalr        $v0
label_7a9008:
    if (ctx->pc == 0x7A9008u) {
        ctx->pc = 0x7A9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9004u;
        // 0x7a9008: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A900Cu;
        goto label_7a900c;
    }
    ctx->pc = 0x7A9004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7A900Cu);
        ctx->pc = 0x7A9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9004u;
        // 0x7a9008: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9004u, 0x7A900Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7A900Cu;
label_7a900c:
    // 0x7a900c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_7a9010:
    if (ctx->pc == 0x7A9010u) {
        ctx->pc = 0x7A9014u;
        goto label_7a9014;
    }
    ctx->pc = 0x7A900Cu;
    {
        const bool branch_taken_0x7a900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a900c) {
            ctx->pc = 0x7A90D0u;
            goto label_7a90d0;
        }
    }
    ctx->pc = 0x7A9014u;
label_7a9014:
    // 0x7a9014: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a9014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_7a9018:
    // 0x7a9018: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_7a901c:
    // 0x7a901c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x7a901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_7a9020:
    // 0x7a9020: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x7a9020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_7a9024:
    // 0x7a9024: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_7a9028:
    if (ctx->pc == 0x7A9028u) {
        ctx->pc = 0x7A9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9024u;
        // 0x7a9028: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A902Cu;
        goto label_7a902c;
    }
    ctx->pc = 0x7A9024u;
    {
        const bool branch_taken_0x7a9024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x7A9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9024u;
        // 0x7a9028: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9024) {
            ctx->pc = 0x7A9044u;
            goto label_7a9044;
        }
    }
    ctx->pc = 0x7A902Cu;
label_7a902c:
    // 0x7a902c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x7a902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_7a9030:
    // 0x7a9030: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x7a9030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7a9034:
    // 0x7a9034: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7a9034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_7a9038:
    // 0x7a9038: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x7a9038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7a903c:
    // 0x7a903c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7a903cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7a9040:
    // 0x7a9040: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x7a9040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_7a9044:
    // 0x7a9044: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x7a9044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_7a9048:
    // 0x7a9048: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_7a904c:
    if (ctx->pc == 0x7A904Cu) {
        ctx->pc = 0x7A904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9048u;
        // 0x7a904c: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9050u;
        goto label_7a9050;
    }
    ctx->pc = 0x7A9048u;
    {
        const bool branch_taken_0x7a9048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7a9048) {
            ctx->pc = 0x7A904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9048u;
            // 0x7a904c: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A906Cu;
            goto label_7a906c;
        }
    }
    ctx->pc = 0x7A9050u;
label_7a9050:
    // 0x7a9050: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7a9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7a9054:
    // 0x7a9054: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x7a9054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_7a9058:
    // 0x7a9058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x7a9058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7a905c:
    // 0x7a905c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x7a905cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_7a9060:
    // 0x7a9060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x7a9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7a9064:
    // 0x7a9064: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x7a9064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_7a9068:
    // 0x7a9068: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x7a9068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_7a906c:
    // 0x7a906c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_7a9070:
    if (ctx->pc == 0x7A9070u) {
        ctx->pc = 0x7A9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A906Cu;
        // 0x7a9070: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9074u;
        goto label_7a9074;
    }
    ctx->pc = 0x7A906Cu;
    {
        const bool branch_taken_0x7a906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x7A9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A906Cu;
        // 0x7a9070: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a906c) {
            ctx->pc = 0x7A9088u;
            goto label_7a9088;
        }
    }
    ctx->pc = 0x7A9074u;
label_7a9074:
    // 0x7a9074: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x7a9074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_7a9078:
    // 0x7a9078: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x7a9078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7a907c:
    // 0x7a907c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7a907cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_7a9080:
    // 0x7a9080: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7a9080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7a9084:
    // 0x7a9084: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7a9084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7a9088:
    // 0x7a9088: 0xc07df52  jal         func_1F7D48
label_7a908c:
    if (ctx->pc == 0x7A908Cu) {
        ctx->pc = 0x7A908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9088u;
        // 0x7a908c: 0xc60c0100  lwc1        $f12, 0x100($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9090u;
        goto label_7a9090;
    }
    ctx->pc = 0x7A9088u;
    SET_GPR_U32(ctx, 31, 0x7A9090u);
    ctx->pc = 0x7A908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9088u;
    // 0x7a908c: 0xc60c0100  lwc1        $f12, 0x100($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x7A9088u, 0x7A9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9090u;
label_7a9090:
    // 0x7a9090: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x7a9090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_7a9094:
    // 0x7a9094: 0xc07df52  jal         func_1F7D48
label_7a9098:
    if (ctx->pc == 0x7A9098u) {
        ctx->pc = 0x7A9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9094u;
        // 0x7a9098: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A909Cu;
        goto label_7a909c;
    }
    ctx->pc = 0x7A9094u;
    SET_GPR_U32(ctx, 31, 0x7A909Cu);
    ctx->pc = 0x7A9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9094u;
    // 0x7a9098: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x7A9094u, 0x7A909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A909Cu;
label_7a909c:
    // 0x7a909c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x7a909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_7a90a0:
    // 0x7a90a0: 0xc07df52  jal         func_1F7D48
label_7a90a4:
    if (ctx->pc == 0x7A90A4u) {
        ctx->pc = 0x7A90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90A0u;
        // 0x7a90a4: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A90A8u;
        goto label_7a90a8;
    }
    ctx->pc = 0x7A90A0u;
    SET_GPR_U32(ctx, 31, 0x7A90A8u);
    ctx->pc = 0x7A90A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A90A0u;
    // 0x7a90a4: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x7A90A0u, 0x7A90A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A90A8u;
label_7a90a8:
    // 0x7a90a8: 0xe6140118  swc1        $f20, 0x118($s0)
    ctx->pc = 0x7a90a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_7a90ac:
    // 0x7a90ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7a90acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7a90b0:
    // 0x7a90b0: 0xe6140114  swc1        $f20, 0x114($s0)
    ctx->pc = 0x7a90b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_7a90b4:
    // 0x7a90b4: 0xe6140110  swc1        $f20, 0x110($s0)
    ctx->pc = 0x7a90b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_7a90b8:
    // 0x7a90b8: 0xc0ada46  jal         func_2B6918
label_7a90bc:
    if (ctx->pc == 0x7A90BCu) {
        ctx->pc = 0x7A90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90B8u;
        // 0x7a90bc: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A90C0u;
        goto label_7a90c0;
    }
    ctx->pc = 0x7A90B8u;
    SET_GPR_U32(ctx, 31, 0x7A90C0u);
    ctx->pc = 0x7A90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A90B8u;
    // 0x7a90bc: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6918u, 0x7A90B8u, 0x7A90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A90C0u;
label_7a90c0:
    // 0x7a90c0: 0xc0527ae  jal         func_149EB8
label_7a90c4:
    if (ctx->pc == 0x7A90C4u) {
        ctx->pc = 0x7A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90C0u;
        // 0x7a90c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A90C8u;
        goto label_7a90c8;
    }
    ctx->pc = 0x7A90C0u;
    SET_GPR_U32(ctx, 31, 0x7A90C8u);
    ctx->pc = 0x7A90C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A90C0u;
    // 0x7a90c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x7A90C0u, 0x7A90C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A90C8u;
label_7a90c8:
    // 0x7a90c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_7a90cc:
    if (ctx->pc == 0x7A90CCu) {
        ctx->pc = 0x7A90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90C8u;
        // 0x7a90cc: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A90D0u;
        goto label_7a90d0;
    }
    ctx->pc = 0x7A90C8u;
    {
        const bool branch_taken_0x7a90c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90C8u;
        // 0x7a90cc: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a90c8) {
            ctx->pc = 0x7A90FCu;
            goto label_7a90fc;
        }
    }
    ctx->pc = 0x7A90D0u;
label_7a90d0:
    // 0x7a90d0: 0xc0c49de  jal         func_312778
label_7a90d4:
    if (ctx->pc == 0x7A90D4u) {
        ctx->pc = 0x7A90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90D0u;
        // 0x7a90d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A90D8u;
        goto label_7a90d8;
    }
    ctx->pc = 0x7A90D0u;
    SET_GPR_U32(ctx, 31, 0x7A90D8u);
    ctx->pc = 0x7A90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A90D0u;
    // 0x7a90d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312778u, 0x7A90D0u, 0x7A90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A90D8u;
label_7a90d8:
    // 0x7a90d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_7a90dc:
    if (ctx->pc == 0x7A90DCu) {
        ctx->pc = 0x7A90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90D8u;
        // 0x7a90dc: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A90E0u;
        goto label_7a90e0;
    }
    ctx->pc = 0x7A90D8u;
    {
        const bool branch_taken_0x7a90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90D8u;
        // 0x7a90dc: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a90d8) {
            ctx->pc = 0x7A90ECu;
            goto label_7a90ec;
        }
    }
    ctx->pc = 0x7A90E0u;
label_7a90e0:
    // 0x7a90e0: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x7a90e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
label_7a90e4:
    // 0x7a90e4: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x7a90e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
label_7a90e8:
    // 0x7a90e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x7a90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_7a90ec:
    // 0x7a90ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7a90ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a90f0:
    // 0x7a90f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7a90f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7a90f4:
    // 0x7a90f4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x7a90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_7a90f8:
    // 0x7a90f8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x7a90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_7a90fc:
    // 0x7a90fc: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_7a9100:
    if (ctx->pc == 0x7A9100u) {
        ctx->pc = 0x7A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90FCu;
        // 0x7a9100: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9104u;
        goto label_7a9104;
    }
    ctx->pc = 0x7A90FCu;
    {
        const bool branch_taken_0x7a90fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A90FCu;
        // 0x7a9100: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a90fc) {
            ctx->pc = 0x7A915Cu;
            goto label_7a915c;
        }
    }
    ctx->pc = 0x7A9104u;
label_7a9104:
    // 0x7a9104: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x7a9104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_7a9108:
    // 0x7a9108: 0x24424220  addiu       $v0, $v0, 0x4220
    ctx->pc = 0x7a9108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16928));
label_7a910c:
    // 0x7a910c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7a910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7a9110:
    // 0x7a9110: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x7a9110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_7a9114:
    // 0x7a9114: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x7a9114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_7a9118:
    // 0x7a9118: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7a9118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_7a911c:
    // 0x7a911c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x7a911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_7a9120:
    // 0x7a9120: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7a9120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_7a9124:
    // 0x7a9124: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x7a9124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_7a9128:
    // 0x7a9128: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x7a9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
label_7a912c:
    // 0x7a912c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x7a912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_7a9130:
    // 0x7a9130: 0xaca202f0  sw          $v0, 0x2F0($a1)
    ctx->pc = 0x7a9130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 2));
label_7a9134:
    // 0x7a9134: 0xc1ea6ac  jal         func_7A9AB0
label_7a9138:
    if (ctx->pc == 0x7A9138u) {
        ctx->pc = 0x7A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9134u;
        // 0x7a9138: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A913Cu;
        goto label_7a913c;
    }
    ctx->pc = 0x7A9134u;
    SET_GPR_U32(ctx, 31, 0x7A913Cu);
    ctx->pc = 0x7A9138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9134u;
    // 0x7a9138: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9AB0u, 0x7A9134u, 0x7A913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A913Cu;
label_7a913c:
    // 0x7a913c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_7a9140:
    if (ctx->pc == 0x7A9140u) {
        ctx->pc = 0x7A9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A913Cu;
        // 0x7a9140: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9144u;
        goto label_7a9144;
    }
    ctx->pc = 0x7A913Cu;
    {
        const bool branch_taken_0x7a913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7a913c) {
            ctx->pc = 0x7A9140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A913Cu;
            // 0x7a9140: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9160u;
            goto label_7a9160;
        }
    }
    ctx->pc = 0x7A9144u;
label_7a9144:
    // 0x7a9144: 0xc0c49de  jal         func_312778
label_7a9148:
    if (ctx->pc == 0x7A9148u) {
        ctx->pc = 0x7A9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9144u;
        // 0x7a9148: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A914Cu;
        goto label_7a914c;
    }
    ctx->pc = 0x7A9144u;
    SET_GPR_U32(ctx, 31, 0x7A914Cu);
    ctx->pc = 0x7A9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9144u;
    // 0x7a9148: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312778u, 0x7A9144u, 0x7A914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A914Cu;
label_7a914c:
    // 0x7a914c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x7a914cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_7a9150:
    // 0x7a9150: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x7a9150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_7a9154:
    // 0x7a9154: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7a9154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7a9158:
    // 0x7a9158: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x7a9158u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_7a915c:
    // 0x7a915c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x7a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_7a9160:
    // 0x7a9160: 0x8fb70024  lw          $s7, 0x24($sp)
    ctx->pc = 0x7a9160u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_7a9164:
    // 0x7a9164: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x7a9164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_7a9168:
    // 0x7a9168: 0x1440ff43  bnez        $v0, . + 4 + (-0xBD << 2)
label_7a916c:
    if (ctx->pc == 0x7A916Cu) {
        ctx->pc = 0x7A916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9168u;
        // 0x7a916c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9170u;
        goto label_7a9170;
    }
    ctx->pc = 0x7A9168u;
    {
        const bool branch_taken_0x7a9168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9168u;
        // 0x7a916c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9168) {
            ctx->pc = 0x7A8E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8e78;
        }
    }
    ctx->pc = 0x7A9170u;
label_7a9170:
    // 0x7a9170: 0xc0b6db0  jal         func_2DB6C0
label_7a9174:
    if (ctx->pc == 0x7A9174u) {
        ctx->pc = 0x7A9178u;
        goto label_7a9178;
    }
    ctx->pc = 0x7A9170u;
    SET_GPR_U32(ctx, 31, 0x7A9178u);
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x7A9170u, 0x7A9178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9178u;
label_7a9178:
    // 0x7a9178: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_7a917c:
    if (ctx->pc == 0x7A917Cu) {
        ctx->pc = 0x7A9180u;
        goto label_7a9180;
    }
    ctx->pc = 0x7A9178u;
    {
        const bool branch_taken_0x7a9178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9178) {
            ctx->pc = 0x7A921Cu;
            goto label_7a921c;
        }
    }
    ctx->pc = 0x7A9180u;
label_7a9180:
    // 0x7a9180: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x7a9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_7a9184:
    // 0x7a9184: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7a9184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_7a9188:
    // 0x7a9188: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_7a918c:
    if (ctx->pc == 0x7A918Cu) {
        ctx->pc = 0x7A918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9188u;
        // 0x7a918c: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9190u;
        goto label_7a9190;
    }
    ctx->pc = 0x7A9188u;
    {
        const bool branch_taken_0x7a9188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9188u;
        // 0x7a918c: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9188) {
            ctx->pc = 0x7A921Cu;
            goto label_7a921c;
        }
    }
    ctx->pc = 0x7A9190u;
label_7a9190:
    // 0x7a9190: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x7a9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
label_7a9194:
    // 0x7a9194: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x7a9194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7a9198:
    // 0x7a9198: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x7a9198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7a919c:
    // 0x7a919c: 0x10e4001f  beq         $a3, $a0, . + 4 + (0x1F << 2)
label_7a91a0:
    if (ctx->pc == 0x7A91A0u) {
        ctx->pc = 0x7A91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A919Cu;
        // 0x7a91a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A91A4u;
        goto label_7a91a4;
    }
    ctx->pc = 0x7A919Cu;
    {
        const bool branch_taken_0x7a919c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x7A91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A919Cu;
        // 0x7a91a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a919c) {
            ctx->pc = 0x7A921Cu;
            goto label_7a921c;
        }
    }
    ctx->pc = 0x7A91A4u;
label_7a91a4:
    // 0x7a91a4: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x7a91a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_7a91a8:
    // 0x7a91a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7a91a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7a91ac:
    // 0x7a91ac: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x7a91acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_7a91b0:
    // 0x7a91b0: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x7a91b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_7a91b4:
    // 0x7a91b4: 0x14450015  bne         $v0, $a1, . + 4 + (0x15 << 2)
label_7a91b8:
    if (ctx->pc == 0x7A91B8u) {
        ctx->pc = 0x7A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A91B4u;
        // 0x7a91b8: 0x8e634c30  lw          $v1, 0x4C30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A91BCu;
        goto label_7a91bc;
    }
    ctx->pc = 0x7A91B4u;
    {
        const bool branch_taken_0x7a91b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x7A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A91B4u;
        // 0x7a91b8: 0x8e634c30  lw          $v1, 0x4C30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a91b4) {
            ctx->pc = 0x7A920Cu;
            goto label_7a920c;
        }
    }
    ctx->pc = 0x7A91BCu;
label_7a91bc:
    // 0x7a91bc: 0x8c904c30  lw          $s0, 0x4C30($a0)
    ctx->pc = 0x7a91bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19504)));
label_7a91c0:
    // 0x7a91c0: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x7a91c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_7a91c4:
    // 0x7a91c4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x7a91c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7a91c8:
    // 0x7a91c8: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
label_7a91cc:
    if (ctx->pc == 0x7A91CCu) {
        ctx->pc = 0x7A91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A91C8u;
        // 0x7a91cc: 0x24924c30  addiu       $s2, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A91D0u;
        goto label_7a91d0;
    }
    ctx->pc = 0x7A91C8u;
    {
        const bool branch_taken_0x7a91c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x7A91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A91C8u;
        // 0x7a91cc: 0x24924c30  addiu       $s2, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a91c8) {
            ctx->pc = 0x7A91E4u;
            goto label_7a91e4;
        }
    }
    ctx->pc = 0x7A91D0u;
label_7a91d0:
    // 0x7a91d0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x7a91d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_7a91d4:
    // 0x7a91d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x7a91d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7a91d8:
    // 0x7a91d8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x7a91d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_7a91dc:
    // 0x7a91dc: 0xc0e947d  jal         func_3A51F4
label_7a91e0:
    if (ctx->pc == 0x7A91E0u) {
        ctx->pc = 0x7A91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A91DCu;
        // 0x7a91e0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A91E4u;
        goto label_7a91e4;
    }
    ctx->pc = 0x7A91DCu;
    SET_GPR_U32(ctx, 31, 0x7A91E4u);
    ctx->pc = 0x7A91E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A91DCu;
    // 0x7a91e0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x7A91DCu, 0x7A91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A91E4u;
label_7a91e4:
    // 0x7a91e4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x7a91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7a91e8:
    // 0x7a91e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7a91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7a91ec:
    // 0x7a91ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a91ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7a91f0:
    // 0x7a91f0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x7a91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_7a91f4:
    // 0x7a91f4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x7a91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_7a91f8:
    // 0x7a91f8: 0x8e624c30  lw          $v0, 0x4C30($s3)
    ctx->pc = 0x7a91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19504)));
label_7a91fc:
    // 0x7a91fc: 0xc0c4a42  jal         func_312908
label_7a9200:
    if (ctx->pc == 0x7A9200u) {
        ctx->pc = 0x7A9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A91FCu;
        // 0x7a9200: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9204u;
        goto label_7a9204;
    }
    ctx->pc = 0x7A91FCu;
    SET_GPR_U32(ctx, 31, 0x7A9204u);
    ctx->pc = 0x7A9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A91FCu;
    // 0x7a9200: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312908u, 0x7A91FCu, 0x7A9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9204u;
label_7a9204:
    // 0x7a9204: 0x10000005  b           . + 4 + (0x5 << 2)
label_7a9208:
    if (ctx->pc == 0x7A9208u) {
        ctx->pc = 0x7A920Cu;
        goto label_7a920c;
    }
    ctx->pc = 0x7A9204u;
    {
        const bool branch_taken_0x7a9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9204) {
            ctx->pc = 0x7A921Cu;
            goto label_7a921c;
        }
    }
    ctx->pc = 0x7A920Cu;
label_7a920c:
    // 0x7a920c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x7a920cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_7a9210:
    // 0x7a9210: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7a9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7a9214:
    // 0x7a9214: 0x54e2ffe6  bnel        $a3, $v0, . + 4 + (-0x1A << 2)
label_7a9218:
    if (ctx->pc == 0x7A9218u) {
        ctx->pc = 0x7A9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9214u;
        // 0x7a9218: 0x8cf10000  lw          $s1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A921Cu;
        goto label_7a921c;
    }
    ctx->pc = 0x7A9214u;
    {
        const bool branch_taken_0x7a9214 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x7a9214) {
            ctx->pc = 0x7A9218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9214u;
            // 0x7a9218: 0x8cf10000  lw          $s1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A91B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a91b0;
        }
    }
    ctx->pc = 0x7A921Cu;
label_7a921c:
    // 0x7a921c: 0xc0b6dac  jal         func_2DB6B0
label_7a9220:
    if (ctx->pc == 0x7A9220u) {
        ctx->pc = 0x7A9224u;
        goto label_7a9224;
    }
    ctx->pc = 0x7A921Cu;
    SET_GPR_U32(ctx, 31, 0x7A9224u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7A921Cu, 0x7A9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9224u;
label_7a9224:
    // 0x7a9224: 0x8c4206a8  lw          $v0, 0x6A8($v0)
    ctx->pc = 0x7a9224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
label_7a9228:
    // 0x7a9228: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_7a922c:
    if (ctx->pc == 0x7A922Cu) {
        ctx->pc = 0x7A922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9228u;
        // 0x7a922c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9230u;
        goto label_7a9230;
    }
    ctx->pc = 0x7A9228u;
    {
        const bool branch_taken_0x7a9228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9228) {
            ctx->pc = 0x7A922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9228u;
            // 0x7a922c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A92D8u;
            goto label_7a92d8;
        }
    }
    ctx->pc = 0x7A9230u;
label_7a9230:
    // 0x7a9230: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x7a9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_7a9234:
    // 0x7a9234: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7a9234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_7a9238:
    // 0x7a9238: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_7a923c:
    if (ctx->pc == 0x7A923Cu) {
        ctx->pc = 0x7A923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9238u;
        // 0x7a923c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9240u;
        goto label_7a9240;
    }
    ctx->pc = 0x7A9238u;
    {
        const bool branch_taken_0x7a9238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7a9238) {
            ctx->pc = 0x7A923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9238u;
            // 0x7a923c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A92D8u;
            goto label_7a92d8;
        }
    }
    ctx->pc = 0x7A9240u;
label_7a9240:
    // 0x7a9240: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7a9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_7a9244:
    // 0x7a9244: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x7a9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
label_7a9248:
    // 0x7a9248: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x7a9248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7a924c:
    // 0x7a924c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x7a924cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7a9250:
    // 0x7a9250: 0x10e40020  beq         $a3, $a0, . + 4 + (0x20 << 2)
label_7a9254:
    if (ctx->pc == 0x7A9254u) {
        ctx->pc = 0x7A9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9250u;
        // 0x7a9254: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9258u;
        goto label_7a9258;
    }
    ctx->pc = 0x7A9250u;
    {
        const bool branch_taken_0x7a9250 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x7A9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9250u;
        // 0x7a9254: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9250) {
            ctx->pc = 0x7A92D4u;
            goto label_7a92d4;
        }
    }
    ctx->pc = 0x7A9258u;
label_7a9258:
    // 0x7a9258: 0x24050376  addiu       $a1, $zero, 0x376
    ctx->pc = 0x7a9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
label_7a925c:
    // 0x7a925c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7a925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7a9260:
    // 0x7a9260: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x7a9260u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_7a9264:
    // 0x7a9264: 0x0  nop
    ctx->pc = 0x7a9264u;
    // NOP
label_7a9268:
    // 0x7a9268: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x7a9268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_7a926c:
    // 0x7a926c: 0x14450015  bne         $v0, $a1, . + 4 + (0x15 << 2)
label_7a9270:
    if (ctx->pc == 0x7A9270u) {
        ctx->pc = 0x7A9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A926Cu;
        // 0x7a9270: 0x8e634c30  lw          $v1, 0x4C30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9274u;
        goto label_7a9274;
    }
    ctx->pc = 0x7A926Cu;
    {
        const bool branch_taken_0x7a926c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x7A9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A926Cu;
        // 0x7a9270: 0x8e634c30  lw          $v1, 0x4C30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a926c) {
            ctx->pc = 0x7A92C4u;
            goto label_7a92c4;
        }
    }
    ctx->pc = 0x7A9274u;
label_7a9274:
    // 0x7a9274: 0x8c904c30  lw          $s0, 0x4C30($a0)
    ctx->pc = 0x7a9274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19504)));
label_7a9278:
    // 0x7a9278: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x7a9278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_7a927c:
    // 0x7a927c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x7a927cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7a9280:
    // 0x7a9280: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
label_7a9284:
    if (ctx->pc == 0x7A9284u) {
        ctx->pc = 0x7A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9280u;
        // 0x7a9284: 0x24924c30  addiu       $s2, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9288u;
        goto label_7a9288;
    }
    ctx->pc = 0x7A9280u;
    {
        const bool branch_taken_0x7a9280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x7A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9280u;
        // 0x7a9284: 0x24924c30  addiu       $s2, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9280) {
            ctx->pc = 0x7A929Cu;
            goto label_7a929c;
        }
    }
    ctx->pc = 0x7A9288u;
label_7a9288:
    // 0x7a9288: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x7a9288u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_7a928c:
    // 0x7a928c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x7a928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7a9290:
    // 0x7a9290: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x7a9290u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_7a9294:
    // 0x7a9294: 0xc0e947d  jal         func_3A51F4
label_7a9298:
    if (ctx->pc == 0x7A9298u) {
        ctx->pc = 0x7A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9294u;
        // 0x7a9298: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A929Cu;
        goto label_7a929c;
    }
    ctx->pc = 0x7A9294u;
    SET_GPR_U32(ctx, 31, 0x7A929Cu);
    ctx->pc = 0x7A9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9294u;
    // 0x7a9298: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x7A9294u, 0x7A929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A929Cu;
label_7a929c:
    // 0x7a929c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x7a929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7a92a0:
    // 0x7a92a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7a92a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7a92a4:
    // 0x7a92a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a92a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7a92a8:
    // 0x7a92a8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x7a92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_7a92ac:
    // 0x7a92ac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x7a92acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_7a92b0:
    // 0x7a92b0: 0x8e624c30  lw          $v0, 0x4C30($s3)
    ctx->pc = 0x7a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19504)));
label_7a92b4:
    // 0x7a92b4: 0xc0c4a42  jal         func_312908
label_7a92b8:
    if (ctx->pc == 0x7A92B8u) {
        ctx->pc = 0x7A92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A92B4u;
        // 0x7a92b8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A92BCu;
        goto label_7a92bc;
    }
    ctx->pc = 0x7A92B4u;
    SET_GPR_U32(ctx, 31, 0x7A92BCu);
    ctx->pc = 0x7A92B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A92B4u;
    // 0x7a92b8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312908u, 0x7A92B4u, 0x7A92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A92BCu;
label_7a92bc:
    // 0x7a92bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_7a92c0:
    if (ctx->pc == 0x7A92C0u) {
        ctx->pc = 0x7A92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A92BCu;
        // 0x7a92c0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A92C4u;
        goto label_7a92c4;
    }
    ctx->pc = 0x7A92BCu;
    {
        const bool branch_taken_0x7a92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A92BCu;
        // 0x7a92c0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a92bc) {
            ctx->pc = 0x7A92D8u;
            goto label_7a92d8;
        }
    }
    ctx->pc = 0x7A92C4u;
label_7a92c4:
    // 0x7a92c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x7a92c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_7a92c8:
    // 0x7a92c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7a92cc:
    // 0x7a92cc: 0x54e2ffe6  bnel        $a3, $v0, . + 4 + (-0x1A << 2)
label_7a92d0:
    if (ctx->pc == 0x7A92D0u) {
        ctx->pc = 0x7A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A92CCu;
        // 0x7a92d0: 0x8cf10000  lw          $s1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A92D4u;
        goto label_7a92d4;
    }
    ctx->pc = 0x7A92CCu;
    {
        const bool branch_taken_0x7a92cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x7a92cc) {
            ctx->pc = 0x7A92D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A92CCu;
            // 0x7a92d0: 0x8cf10000  lw          $s1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a9268;
        }
    }
    ctx->pc = 0x7A92D4u;
label_7a92d4:
    // 0x7a92d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x7a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_7a92d8:
    // 0x7a92d8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x7a92d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7a92dc:
    // 0x7a92dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7a92dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7a92e0:
    // 0x7a92e0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7a92e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7a92e4:
    // 0x7a92e4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x7a92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_7a92e8:
    // 0x7a92e8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7a92e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7a92ec:
    // 0x7a92ec: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7a92ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7a92f0:
    // 0x7a92f0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x7a92f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7a92f4:
    // 0x7a92f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x7a92f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7a92f8:
    // 0x7a92f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x7a92f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7a92fc:
    // 0x7a92fc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x7a92fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7a9300:
    // 0x7a9300: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7a9300u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7a9304:
    // 0x7a9304: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7a9304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7a9308:
    // 0x7a9308: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x7a9308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7a930c:
    // 0x7a930c: 0x3e00008  jr          $ra
label_7a9310:
    if (ctx->pc == 0x7A9310u) {
        ctx->pc = 0x7A9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A930Cu;
        // 0x7a9310: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9314u;
        goto label_7a9314;
    }
    ctx->pc = 0x7A930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A930Cu;
        // 0x7a9310: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9314u;
label_7a9314:
    // 0x7a9314: 0x0  nop
    ctx->pc = 0x7a9314u;
    // NOP
    ctx->pc = 0x7a9318u;
}
} // namespace gh_event
