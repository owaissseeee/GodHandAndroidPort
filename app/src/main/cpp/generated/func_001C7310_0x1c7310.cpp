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

// Function: func_001C7310
// Address: 0x1c7310 - 0x1c77d8
void func_001C7310_0x1c7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C7310_0x1c7310");
#endif

    switch (ctx->pc) {
        case 0x1c7310u: goto label_1c7310;
        case 0x1c7314u: goto label_1c7314;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c731cu: goto label_1c731c;
        case 0x1c7320u: goto label_1c7320;
        case 0x1c7324u: goto label_1c7324;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c732cu: goto label_1c732c;
        case 0x1c7330u: goto label_1c7330;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7338u: goto label_1c7338;
        case 0x1c733cu: goto label_1c733c;
        case 0x1c7340u: goto label_1c7340;
        case 0x1c7344u: goto label_1c7344;
        case 0x1c7348u: goto label_1c7348;
        case 0x1c734cu: goto label_1c734c;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c7354u: goto label_1c7354;
        case 0x1c7358u: goto label_1c7358;
        case 0x1c735cu: goto label_1c735c;
        case 0x1c7360u: goto label_1c7360;
        case 0x1c7364u: goto label_1c7364;
        case 0x1c7368u: goto label_1c7368;
        case 0x1c736cu: goto label_1c736c;
        case 0x1c7370u: goto label_1c7370;
        case 0x1c7374u: goto label_1c7374;
        case 0x1c7378u: goto label_1c7378;
        case 0x1c737cu: goto label_1c737c;
        case 0x1c7380u: goto label_1c7380;
        case 0x1c7384u: goto label_1c7384;
        case 0x1c7388u: goto label_1c7388;
        case 0x1c738cu: goto label_1c738c;
        case 0x1c7390u: goto label_1c7390;
        case 0x1c7394u: goto label_1c7394;
        case 0x1c7398u: goto label_1c7398;
        case 0x1c739cu: goto label_1c739c;
        case 0x1c73a0u: goto label_1c73a0;
        case 0x1c73a4u: goto label_1c73a4;
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c73acu: goto label_1c73ac;
        case 0x1c73b0u: goto label_1c73b0;
        case 0x1c73b4u: goto label_1c73b4;
        case 0x1c73b8u: goto label_1c73b8;
        case 0x1c73bcu: goto label_1c73bc;
        case 0x1c73c0u: goto label_1c73c0;
        case 0x1c73c4u: goto label_1c73c4;
        case 0x1c73c8u: goto label_1c73c8;
        case 0x1c73ccu: goto label_1c73cc;
        case 0x1c73d0u: goto label_1c73d0;
        case 0x1c73d4u: goto label_1c73d4;
        case 0x1c73d8u: goto label_1c73d8;
        case 0x1c73dcu: goto label_1c73dc;
        case 0x1c73e0u: goto label_1c73e0;
        case 0x1c73e4u: goto label_1c73e4;
        case 0x1c73e8u: goto label_1c73e8;
        case 0x1c73ecu: goto label_1c73ec;
        case 0x1c73f0u: goto label_1c73f0;
        case 0x1c73f4u: goto label_1c73f4;
        case 0x1c73f8u: goto label_1c73f8;
        case 0x1c73fcu: goto label_1c73fc;
        case 0x1c7400u: goto label_1c7400;
        case 0x1c7404u: goto label_1c7404;
        case 0x1c7408u: goto label_1c7408;
        case 0x1c740cu: goto label_1c740c;
        case 0x1c7410u: goto label_1c7410;
        case 0x1c7414u: goto label_1c7414;
        case 0x1c7418u: goto label_1c7418;
        case 0x1c741cu: goto label_1c741c;
        case 0x1c7420u: goto label_1c7420;
        case 0x1c7424u: goto label_1c7424;
        case 0x1c7428u: goto label_1c7428;
        case 0x1c742cu: goto label_1c742c;
        case 0x1c7430u: goto label_1c7430;
        case 0x1c7434u: goto label_1c7434;
        case 0x1c7438u: goto label_1c7438;
        case 0x1c743cu: goto label_1c743c;
        case 0x1c7440u: goto label_1c7440;
        case 0x1c7444u: goto label_1c7444;
        case 0x1c7448u: goto label_1c7448;
        case 0x1c744cu: goto label_1c744c;
        case 0x1c7450u: goto label_1c7450;
        case 0x1c7454u: goto label_1c7454;
        case 0x1c7458u: goto label_1c7458;
        case 0x1c745cu: goto label_1c745c;
        case 0x1c7460u: goto label_1c7460;
        case 0x1c7464u: goto label_1c7464;
        case 0x1c7468u: goto label_1c7468;
        case 0x1c746cu: goto label_1c746c;
        case 0x1c7470u: goto label_1c7470;
        case 0x1c7474u: goto label_1c7474;
        case 0x1c7478u: goto label_1c7478;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c7480u: goto label_1c7480;
        case 0x1c7484u: goto label_1c7484;
        case 0x1c7488u: goto label_1c7488;
        case 0x1c748cu: goto label_1c748c;
        case 0x1c7490u: goto label_1c7490;
        case 0x1c7494u: goto label_1c7494;
        case 0x1c7498u: goto label_1c7498;
        case 0x1c749cu: goto label_1c749c;
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74a4u: goto label_1c74a4;
        case 0x1c74a8u: goto label_1c74a8;
        case 0x1c74acu: goto label_1c74ac;
        case 0x1c74b0u: goto label_1c74b0;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74b8u: goto label_1c74b8;
        case 0x1c74bcu: goto label_1c74bc;
        case 0x1c74c0u: goto label_1c74c0;
        case 0x1c74c4u: goto label_1c74c4;
        case 0x1c74c8u: goto label_1c74c8;
        case 0x1c74ccu: goto label_1c74cc;
        case 0x1c74d0u: goto label_1c74d0;
        case 0x1c74d4u: goto label_1c74d4;
        case 0x1c74d8u: goto label_1c74d8;
        case 0x1c74dcu: goto label_1c74dc;
        case 0x1c74e0u: goto label_1c74e0;
        case 0x1c74e4u: goto label_1c74e4;
        case 0x1c74e8u: goto label_1c74e8;
        case 0x1c74ecu: goto label_1c74ec;
        case 0x1c74f0u: goto label_1c74f0;
        case 0x1c74f4u: goto label_1c74f4;
        case 0x1c74f8u: goto label_1c74f8;
        case 0x1c74fcu: goto label_1c74fc;
        case 0x1c7500u: goto label_1c7500;
        case 0x1c7504u: goto label_1c7504;
        case 0x1c7508u: goto label_1c7508;
        case 0x1c750cu: goto label_1c750c;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7514u: goto label_1c7514;
        case 0x1c7518u: goto label_1c7518;
        case 0x1c751cu: goto label_1c751c;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7524u: goto label_1c7524;
        case 0x1c7528u: goto label_1c7528;
        case 0x1c752cu: goto label_1c752c;
        case 0x1c7530u: goto label_1c7530;
        case 0x1c7534u: goto label_1c7534;
        case 0x1c7538u: goto label_1c7538;
        case 0x1c753cu: goto label_1c753c;
        case 0x1c7540u: goto label_1c7540;
        case 0x1c7544u: goto label_1c7544;
        case 0x1c7548u: goto label_1c7548;
        case 0x1c754cu: goto label_1c754c;
        case 0x1c7550u: goto label_1c7550;
        case 0x1c7554u: goto label_1c7554;
        case 0x1c7558u: goto label_1c7558;
        case 0x1c755cu: goto label_1c755c;
        case 0x1c7560u: goto label_1c7560;
        case 0x1c7564u: goto label_1c7564;
        case 0x1c7568u: goto label_1c7568;
        case 0x1c756cu: goto label_1c756c;
        case 0x1c7570u: goto label_1c7570;
        case 0x1c7574u: goto label_1c7574;
        case 0x1c7578u: goto label_1c7578;
        case 0x1c757cu: goto label_1c757c;
        case 0x1c7580u: goto label_1c7580;
        case 0x1c7584u: goto label_1c7584;
        case 0x1c7588u: goto label_1c7588;
        case 0x1c758cu: goto label_1c758c;
        case 0x1c7590u: goto label_1c7590;
        case 0x1c7594u: goto label_1c7594;
        case 0x1c7598u: goto label_1c7598;
        case 0x1c759cu: goto label_1c759c;
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75a4u: goto label_1c75a4;
        case 0x1c75a8u: goto label_1c75a8;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b0u: goto label_1c75b0;
        case 0x1c75b4u: goto label_1c75b4;
        case 0x1c75b8u: goto label_1c75b8;
        case 0x1c75bcu: goto label_1c75bc;
        case 0x1c75c0u: goto label_1c75c0;
        case 0x1c75c4u: goto label_1c75c4;
        case 0x1c75c8u: goto label_1c75c8;
        case 0x1c75ccu: goto label_1c75cc;
        case 0x1c75d0u: goto label_1c75d0;
        case 0x1c75d4u: goto label_1c75d4;
        case 0x1c75d8u: goto label_1c75d8;
        case 0x1c75dcu: goto label_1c75dc;
        case 0x1c75e0u: goto label_1c75e0;
        case 0x1c75e4u: goto label_1c75e4;
        case 0x1c75e8u: goto label_1c75e8;
        case 0x1c75ecu: goto label_1c75ec;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c75f4u: goto label_1c75f4;
        case 0x1c75f8u: goto label_1c75f8;
        case 0x1c75fcu: goto label_1c75fc;
        case 0x1c7600u: goto label_1c7600;
        case 0x1c7604u: goto label_1c7604;
        case 0x1c7608u: goto label_1c7608;
        case 0x1c760cu: goto label_1c760c;
        case 0x1c7610u: goto label_1c7610;
        case 0x1c7614u: goto label_1c7614;
        case 0x1c7618u: goto label_1c7618;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7620u: goto label_1c7620;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c7628u: goto label_1c7628;
        case 0x1c762cu: goto label_1c762c;
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7638u: goto label_1c7638;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c7640u: goto label_1c7640;
        case 0x1c7644u: goto label_1c7644;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7650u: goto label_1c7650;
        case 0x1c7654u: goto label_1c7654;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c765cu: goto label_1c765c;
        case 0x1c7660u: goto label_1c7660;
        case 0x1c7664u: goto label_1c7664;
        case 0x1c7668u: goto label_1c7668;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7674u: goto label_1c7674;
        case 0x1c7678u: goto label_1c7678;
        case 0x1c767cu: goto label_1c767c;
        case 0x1c7680u: goto label_1c7680;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c7688u: goto label_1c7688;
        case 0x1c768cu: goto label_1c768c;
        case 0x1c7690u: goto label_1c7690;
        case 0x1c7694u: goto label_1c7694;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76a4u: goto label_1c76a4;
        case 0x1c76a8u: goto label_1c76a8;
        case 0x1c76acu: goto label_1c76ac;
        case 0x1c76b0u: goto label_1c76b0;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76b8u: goto label_1c76b8;
        case 0x1c76bcu: goto label_1c76bc;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76c4u: goto label_1c76c4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d0u: goto label_1c76d0;
        case 0x1c76d4u: goto label_1c76d4;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76e0u: goto label_1c76e0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76ecu: goto label_1c76ec;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7700u: goto label_1c7700;
        case 0x1c7704u: goto label_1c7704;
        case 0x1c7708u: goto label_1c7708;
        case 0x1c770cu: goto label_1c770c;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7720u: goto label_1c7720;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c7728u: goto label_1c7728;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7730u: goto label_1c7730;
        case 0x1c7734u: goto label_1c7734;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c773cu: goto label_1c773c;
        case 0x1c7740u: goto label_1c7740;
        case 0x1c7744u: goto label_1c7744;
        case 0x1c7748u: goto label_1c7748;
        case 0x1c774cu: goto label_1c774c;
        case 0x1c7750u: goto label_1c7750;
        case 0x1c7754u: goto label_1c7754;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c775cu: goto label_1c775c;
        case 0x1c7760u: goto label_1c7760;
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7768u: goto label_1c7768;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c7770u: goto label_1c7770;
        case 0x1c7774u: goto label_1c7774;
        case 0x1c7778u: goto label_1c7778;
        case 0x1c777cu: goto label_1c777c;
        case 0x1c7780u: goto label_1c7780;
        case 0x1c7784u: goto label_1c7784;
        case 0x1c7788u: goto label_1c7788;
        case 0x1c778cu: goto label_1c778c;
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7794u: goto label_1c7794;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c779cu: goto label_1c779c;
        case 0x1c77a0u: goto label_1c77a0;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77a8u: goto label_1c77a8;
        case 0x1c77acu: goto label_1c77ac;
        case 0x1c77b0u: goto label_1c77b0;
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77b8u: goto label_1c77b8;
        case 0x1c77bcu: goto label_1c77bc;
        case 0x1c77c0u: goto label_1c77c0;
        case 0x1c77c4u: goto label_1c77c4;
        case 0x1c77c8u: goto label_1c77c8;
        case 0x1c77ccu: goto label_1c77cc;
        case 0x1c77d0u: goto label_1c77d0;
        case 0x1c77d4u: goto label_1c77d4;
        default: break;
    }

    ctx->pc = 0x1c7310u;

label_1c7310:
    // 0x1c7310: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1c7314:
    // 0x1c7314: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1c7314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1c7318:
    // 0x1c7318: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1c7318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1c731c:
    // 0x1c731c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c731cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7320:
    // 0x1c7320: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1c7320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1c7324:
    // 0x1c7324: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1c7324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1c7328:
    // 0x1c7328: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1c7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_1c732c:
    // 0x1c732c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1c732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_1c7330:
    // 0x1c7330: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1c7330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_1c7334:
    // 0x1c7334: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1c7334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_1c7338:
    // 0x1c7338: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c7338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1c733c:
    // 0x1c733c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7340:
    // 0x1c7340: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1c7344:
    if (ctx->pc == 0x1C7344u) {
        ctx->pc = 0x1C7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7340u;
        // 0x1c7344: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7348u;
        goto label_1c7348;
    }
    ctx->pc = 0x1C7340u;
    {
        const bool branch_taken_0x1c7340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7340u;
        // 0x1c7344: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7340) {
            ctx->pc = 0x1C7510u;
            goto label_1c7510;
        }
    }
    ctx->pc = 0x1C7348u;
label_1c7348:
    // 0x1c7348: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c7348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c734c:
    // 0x1c734c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1c734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1c7350:
    // 0x1c7350: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c7354:
    // 0x1c7354: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c7354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7358:
    // 0x1c7358: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c7358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c735c:
    // 0x1c735c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c735cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7360:
    // 0x1c7360: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7360u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7364:
    // 0x1c7364: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7368:
    // 0x1c7368: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c736c:
    // 0x1c736c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c736cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7370:
    // 0x1c7370: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7374:
    // 0x1c7374: 0x13b20007  beq         $sp, $s2, . + 4 + (0x7 << 2)
label_1c7378:
    if (ctx->pc == 0x1C7378u) {
        ctx->pc = 0x1C7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7374u;
        // 0x1c7378: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C737Cu;
        goto label_1c737c;
    }
    ctx->pc = 0x1C7374u;
    {
        const bool branch_taken_0x1c7374 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7374u;
        // 0x1c7378: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7374) {
            ctx->pc = 0x1C7394u;
            goto label_1c7394;
        }
    }
    ctx->pc = 0x1C737Cu;
label_1c737c:
    // 0x1c737c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7380:
    // 0x1c7380: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c7380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7384:
    // 0x1c7384: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c7384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7388:
    // 0x1c7388: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c7388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c738c:
    // 0x1c738c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c738cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c7390:
    // 0x1c7390: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c7390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c7394:
    // 0x1c7394: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x1c7394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1c7398:
    // 0x1c7398: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c7398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c739c:
    // 0x1c739c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1c73a0:
    if (ctx->pc == 0x1C73A0u) {
        ctx->pc = 0x1C73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C739Cu;
        // 0x1c73a0: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73A4u;
        goto label_1c73a4;
    }
    ctx->pc = 0x1C739Cu;
    {
        const bool branch_taken_0x1c739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C739Cu;
        // 0x1c73a0: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c739c) {
            ctx->pc = 0x1C750Cu;
            goto label_1c750c;
        }
    }
    ctx->pc = 0x1C73A4u;
label_1c73a4:
    // 0x1c73a4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c73a8:
    // 0x1c73a8: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
label_1c73ac:
    if (ctx->pc == 0x1C73ACu) {
        ctx->pc = 0x1C73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73A8u;
        // 0x1c73ac: 0x266300e0  addiu       $v1, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73B0u;
        goto label_1c73b0;
    }
    ctx->pc = 0x1C73A8u;
    {
        const bool branch_taken_0x1c73a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73A8u;
        // 0x1c73ac: 0x266300e0  addiu       $v1, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73a8) {
            ctx->pc = 0x1C77ACu;
            goto label_1c77ac;
        }
    }
    ctx->pc = 0x1C73B0u;
label_1c73b0:
    // 0x1c73b0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1c73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1c73b4:
    // 0x1c73b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c73b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c73b8:
    // 0x1c73b8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c73b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c73bc:
    // 0x1c73bc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c73bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c73c0:
    // 0x1c73c0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c73c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c73c4:
    // 0x1c73c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c73c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c73c8:
    // 0x1c73c8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c73cc:
    // 0x1c73cc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c73ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c73d0:
    // 0x1c73d0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c73d4:
    // 0x1c73d4: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c73d8:
    if (ctx->pc == 0x1C73D8u) {
        ctx->pc = 0x1C73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73D4u;
        // 0x1c73d8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73DCu;
        goto label_1c73dc;
    }
    ctx->pc = 0x1C73D4u;
    {
        const bool branch_taken_0x1c73d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73D4u;
        // 0x1c73d8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73d4) {
            ctx->pc = 0x1C73F0u;
            goto label_1c73f0;
        }
    }
    ctx->pc = 0x1C73DCu;
label_1c73dc:
    // 0x1c73dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c73dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c73e0:
    // 0x1c73e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c73e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c73e4:
    // 0x1c73e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c73e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c73e8:
    // 0x1c73e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c73ec:
    // 0x1c73ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c73ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c73f0:
    // 0x1c73f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c73f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c73f4:
    // 0x1c73f4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c73f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c73f8:
    // 0x1c73f8: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x1c73f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1c73fc:
    // 0x1c73fc: 0x0  nop
    ctx->pc = 0x1c73fcu;
    // NOP
label_1c7400:
    // 0x1c7400: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c7404:
    // 0x1c7404: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c7408:
    if (ctx->pc == 0x1C7408u) {
        ctx->pc = 0x1C7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7404u;
        // 0x1c7408: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C740Cu;
        goto label_1c740c;
    }
    ctx->pc = 0x1C7404u;
    {
        const bool branch_taken_0x1c7404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7404) {
            ctx->pc = 0x1C7408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7404u;
            // 0x1c7408: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7500u;
            goto label_1c7500;
        }
    }
    ctx->pc = 0x1C740Cu;
label_1c740c:
    // 0x1c740c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c7410:
    // 0x1c7410: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c7410u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7414:
    // 0x1c7414: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7418:
    // 0x1c7418: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c741c:
    // 0x1c741c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1c741cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c7420:
    // 0x1c7420: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7424:
    // 0x1c7424: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7428:
    // 0x1c7428: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c7428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c742c:
    // 0x1c742c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7430:
    // 0x1c7430: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c7434:
    if (ctx->pc == 0x1C7434u) {
        ctx->pc = 0x1C7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7430u;
        // 0x1c7434: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7438u;
        goto label_1c7438;
    }
    ctx->pc = 0x1C7430u;
    {
        const bool branch_taken_0x1c7430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7430u;
        // 0x1c7434: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7430) {
            ctx->pc = 0x1C744Cu;
            goto label_1c744c;
        }
    }
    ctx->pc = 0x1C7438u;
label_1c7438:
    // 0x1c7438: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c743c:
    // 0x1c743c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7440:
    // 0x1c7440: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c7444:
    // 0x1c7444: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7448:
    // 0x1c7448: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c744c:
    // 0x1c744c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c7450:
    // 0x1c7450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7454:
    // 0x1c7454: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c7454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c7458:
    // 0x1c7458: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c7458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c745c:
    // 0x1c745c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7460:
    if (ctx->pc == 0x1C7460u) {
        ctx->pc = 0x1C7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C745Cu;
        // 0x1c7460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7464u;
        goto label_1c7464;
    }
    ctx->pc = 0x1C745Cu;
    {
        const bool branch_taken_0x1c745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C745Cu;
        // 0x1c7460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c745c) {
            ctx->pc = 0x1C746Cu;
            goto label_1c746c;
        }
    }
    ctx->pc = 0x1C7464u;
label_1c7464:
    // 0x1c7464: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c7464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c7468:
    // 0x1c7468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c746c:
    // 0x1c746c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7470:
    // 0x1c7470: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c7474:
    if (ctx->pc == 0x1C7474u) {
        ctx->pc = 0x1C7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7470u;
        // 0x1c7474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7478u;
        goto label_1c7478;
    }
    ctx->pc = 0x1C7470u;
    {
        const bool branch_taken_0x1c7470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7470) {
            ctx->pc = 0x1C7474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7470u;
            // 0x1c7474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C74D8u;
            goto label_1c74d8;
        }
    }
    ctx->pc = 0x1C7478u;
label_1c7478:
    // 0x1c7478: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c7478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c747c:
    // 0x1c747c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7480:
    if (ctx->pc == 0x1C7480u) {
        ctx->pc = 0x1C7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C747Cu;
        // 0x1c7480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7484u;
        goto label_1c7484;
    }
    ctx->pc = 0x1C747Cu;
    {
        const bool branch_taken_0x1c747c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C747Cu;
        // 0x1c7480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c747c) {
            ctx->pc = 0x1C748Cu;
            goto label_1c748c;
        }
    }
    ctx->pc = 0x1C7484u;
label_1c7484:
    // 0x1c7484: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c7484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7488:
    // 0x1c7488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c748c:
    // 0x1c748c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7490:
    // 0x1c7490: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c7494:
    if (ctx->pc == 0x1C7494u) {
        ctx->pc = 0x1C7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7490u;
        // 0x1c7494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7498u;
        goto label_1c7498;
    }
    ctx->pc = 0x1C7490u;
    {
        const bool branch_taken_0x1c7490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7490) {
            ctx->pc = 0x1C7494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7490u;
            // 0x1c7494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C74D8u;
            goto label_1c74d8;
        }
    }
    ctx->pc = 0x1C7498u;
label_1c7498:
    // 0x1c7498: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c7498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c749c:
    // 0x1c749c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c74a0:
    if (ctx->pc == 0x1C74A0u) {
        ctx->pc = 0x1C74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C749Cu;
        // 0x1c74a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74A4u;
        goto label_1c74a4;
    }
    ctx->pc = 0x1C749Cu;
    {
        const bool branch_taken_0x1c749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C749Cu;
        // 0x1c74a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c749c) {
            ctx->pc = 0x1C74ACu;
            goto label_1c74ac;
        }
    }
    ctx->pc = 0x1C74A4u;
label_1c74a4:
    // 0x1c74a4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c74a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c74a8:
    // 0x1c74a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c74ac:
    // 0x1c74ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c74acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c74b0:
    // 0x1c74b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c74b4:
    if (ctx->pc == 0x1C74B4u) {
        ctx->pc = 0x1C74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74B0u;
        // 0x1c74b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74B8u;
        goto label_1c74b8;
    }
    ctx->pc = 0x1C74B0u;
    {
        const bool branch_taken_0x1c74b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c74b0) {
            ctx->pc = 0x1C74B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C74B0u;
            // 0x1c74b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C74D8u;
            goto label_1c74d8;
        }
    }
    ctx->pc = 0x1C74B8u;
label_1c74b8:
    // 0x1c74b8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c74b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c74bc:
    // 0x1c74bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c74c0:
    if (ctx->pc == 0x1C74C0u) {
        ctx->pc = 0x1C74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74BCu;
        // 0x1c74c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74C4u;
        goto label_1c74c4;
    }
    ctx->pc = 0x1C74BCu;
    {
        const bool branch_taken_0x1c74bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74BCu;
        // 0x1c74c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74bc) {
            ctx->pc = 0x1C74CCu;
            goto label_1c74cc;
        }
    }
    ctx->pc = 0x1C74C4u;
label_1c74c4:
    // 0x1c74c4: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c74c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c74c8:
    // 0x1c74c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c74c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c74cc:
    // 0x1c74cc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c74ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c74d0:
    // 0x1c74d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c74d4:
    if (ctx->pc == 0x1C74D4u) {
        ctx->pc = 0x1C74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74D0u;
        // 0x1c74d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74D8u;
        goto label_1c74d8;
    }
    ctx->pc = 0x1C74D0u;
    {
        const bool branch_taken_0x1c74d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c74d0) {
            ctx->pc = 0x1C74D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C74D0u;
            // 0x1c74d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C74D8u;
            goto label_1c74d8;
        }
    }
    ctx->pc = 0x1C74D8u;
label_1c74d8:
    // 0x1c74d8: 0x54b60009  bnel        $a1, $s6, . + 4 + (0x9 << 2)
label_1c74dc:
    if (ctx->pc == 0x1C74DCu) {
        ctx->pc = 0x1C74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74D8u;
        // 0x1c74dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74E0u;
        goto label_1c74e0;
    }
    ctx->pc = 0x1C74D8u;
    {
        const bool branch_taken_0x1c74d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c74d8) {
            ctx->pc = 0x1C74DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C74D8u;
            // 0x1c74dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7500u;
            goto label_1c7500;
        }
    }
    ctx->pc = 0x1C74E0u;
label_1c74e0:
    // 0x1c74e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c74e4:
    // 0x1c74e4: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c74e8:
    // 0x1c74e8: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c74ec:
    // 0x1c74ec: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c74ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c74f0:
    // 0x1c74f0: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c74f4:
    // 0x1c74f4: 0xc0f809  jalr        $a2
label_1c74f8:
    if (ctx->pc == 0x1C74F8u) {
        ctx->pc = 0x1C74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74F4u;
        // 0x1c74f8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74FCu;
        goto label_1c74fc;
    }
    ctx->pc = 0x1C74F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C74FCu);
        ctx->pc = 0x1C74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74F4u;
        // 0x1c74f8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C74F4u, 0x1C74FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C74FCu;
label_1c74fc:
    // 0x1c74fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c7500:
    // 0x1c7500: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1c7500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c7504:
    // 0x1c7504: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c7508:
    if (ctx->pc == 0x1C7508u) {
        ctx->pc = 0x1C7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7504u;
        // 0x1c7508: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C750Cu;
        goto label_1c750c;
    }
    ctx->pc = 0x1C7504u;
    {
        const bool branch_taken_0x1c7504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7504u;
        // 0x1c7508: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7504) {
            ctx->pc = 0x1C7400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7400;
        }
    }
    ctx->pc = 0x1C750Cu;
label_1c750c:
    // 0x1c750c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7510:
    // 0x1c7510: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_1c7514:
    if (ctx->pc == 0x1C7514u) {
        ctx->pc = 0x1C7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7510u;
        // 0x1c7514: 0x266300e0  addiu       $v1, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7518u;
        goto label_1c7518;
    }
    ctx->pc = 0x1C7510u;
    {
        const bool branch_taken_0x1c7510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7510u;
        // 0x1c7514: 0x266300e0  addiu       $v1, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7510) {
            ctx->pc = 0x1C77ACu;
            goto label_1c77ac;
        }
    }
    ctx->pc = 0x1C7518u;
label_1c7518:
    // 0x1c7518: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c7518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c751c:
    // 0x1c751c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c7520:
    // 0x1c7520: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c7520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c7524:
    // 0x1c7524: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c7524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c7528:
    // 0x1c7528: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c7528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c752c:
    // 0x1c752c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c752cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7530:
    // 0x1c7530: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c7530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7534:
    // 0x1c7534: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7534u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7538:
    // 0x1c7538: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c7538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c753c:
    // 0x1c753c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c7540:
    // 0x1c7540: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c7540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7544:
    // 0x1c7544: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c7544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7548:
    // 0x1c7548: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
label_1c754c:
    if (ctx->pc == 0x1C754Cu) {
        ctx->pc = 0x1C754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7548u;
        // 0x1c754c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7550u;
        goto label_1c7550;
    }
    ctx->pc = 0x1C7548u;
    {
        const bool branch_taken_0x1c7548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7548u;
        // 0x1c754c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7548) {
            ctx->pc = 0x1C7564u;
            goto label_1c7564;
        }
    }
    ctx->pc = 0x1C7550u;
label_1c7550:
    // 0x1c7550: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c7550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7554:
    // 0x1c7554: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c7554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c7558:
    // 0x1c7558: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c7558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1c755c:
    // 0x1c755c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7560:
    // 0x1c7560: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c7560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c7564:
    // 0x1c7564: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x1c7564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1c7568:
    // 0x1c7568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c756c:
    // 0x1c756c: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_1c7570:
    if (ctx->pc == 0x1C7570u) {
        ctx->pc = 0x1C7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C756Cu;
        // 0x1c7570: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7574u;
        goto label_1c7574;
    }
    ctx->pc = 0x1C756Cu;
    {
        const bool branch_taken_0x1c756c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C756Cu;
        // 0x1c7570: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c756c) {
            ctx->pc = 0x1C77B0u;
            goto label_1c77b0;
        }
    }
    ctx->pc = 0x1C7574u;
label_1c7574:
    // 0x1c7574: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7578:
    // 0x1c7578: 0x5060008e  beql        $v1, $zero, . + 4 + (0x8E << 2)
label_1c757c:
    if (ctx->pc == 0x1C757Cu) {
        ctx->pc = 0x1C757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7578u;
        // 0x1c757c: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7580u;
        goto label_1c7580;
    }
    ctx->pc = 0x1C7578u;
    {
        const bool branch_taken_0x1c7578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7578) {
            ctx->pc = 0x1C757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7578u;
            // 0x1c757c: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77B4u;
            goto label_1c77b4;
        }
    }
    ctx->pc = 0x1C7580u;
label_1c7580:
    // 0x1c7580: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c7580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7584:
    // 0x1c7584: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7588:
    // 0x1c7588: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c758c:
    // 0x1c758c: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c7590:
    // 0x1c7590: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_1c7594:
    if (ctx->pc == 0x1C7594u) {
        ctx->pc = 0x1C7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7590u;
        // 0x1c7594: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7598u;
        goto label_1c7598;
    }
    ctx->pc = 0x1C7590u;
    {
        const bool branch_taken_0x1c7590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7590) {
            ctx->pc = 0x1C7594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7590u;
            // 0x1c7594: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C75B4u;
            goto label_1c75b4;
        }
    }
    ctx->pc = 0x1C7598u;
label_1c7598:
    // 0x1c7598: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x1c7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c759c:
    // 0x1c759c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c75a0:
    // 0x1c75a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c75a4:
    // 0x1c75a4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1c75a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c75a8:
    // 0x1c75a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c75a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c75ac:
    // 0x1c75ac: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c75acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c75b0:
    // 0x1c75b0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c75b4:
    // 0x1c75b4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1c75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c75b8:
    // 0x1c75b8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1c75b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c75bc:
    // 0x1c75bc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c75bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c75c0:
    // 0x1c75c0: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c75c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c75c4:
    // 0x1c75c4: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c75c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c75c8:
    // 0x1c75c8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1c75c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c75cc:
    // 0x1c75cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c75ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c75d0:
    // 0x1c75d0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c75d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c75d4:
    // 0x1c75d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c75d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c75d8:
    // 0x1c75d8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c75dc:
    // 0x1c75dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c75dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c75e0:
    // 0x1c75e0: 0x12160007  beq         $s0, $s6, . + 4 + (0x7 << 2)
label_1c75e4:
    if (ctx->pc == 0x1C75E4u) {
        ctx->pc = 0x1C75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75E0u;
        // 0x1c75e4: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C75E8u;
        goto label_1c75e8;
    }
    ctx->pc = 0x1C75E0u;
    {
        const bool branch_taken_0x1c75e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75E0u;
        // 0x1c75e4: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75e0) {
            ctx->pc = 0x1C7600u;
            goto label_1c7600;
        }
    }
    ctx->pc = 0x1C75E8u;
label_1c75e8:
    // 0x1c75e8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c75e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c75ec:
    // 0x1c75ec: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c75f0:
    // 0x1c75f0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c75f4:
    // 0x1c75f4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c75f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c75f8:
    // 0x1c75f8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c75fc:
    // 0x1c75fc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c75fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1c7600:
    // 0x1c7600: 0xc07df68  jal         func_1F7DA0
label_1c7604:
    if (ctx->pc == 0x1C7604u) {
        ctx->pc = 0x1C7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7600u;
        // 0x1c7604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7608u;
        goto label_1c7608;
    }
    ctx->pc = 0x1C7600u;
    SET_GPR_U32(ctx, 31, 0x1C7608u);
    ctx->pc = 0x1C7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7600u;
    // 0x1c7604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C7600u, 0x1C7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7608u;
label_1c7608:
    // 0x1c7608: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1c7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c760c:
    // 0x1c760c: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c7610:
    // 0x1c7610: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_1c7614:
    if (ctx->pc == 0x1C7614u) {
        ctx->pc = 0x1C7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7610u;
        // 0x1c7614: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7618u;
        goto label_1c7618;
    }
    ctx->pc = 0x1C7610u;
    {
        const bool branch_taken_0x1c7610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7610u;
        // 0x1c7614: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7610) {
            ctx->pc = 0x1C762Cu;
            goto label_1c762c;
        }
    }
    ctx->pc = 0x1C7618u;
label_1c7618:
    // 0x1c7618: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c7618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c761c:
    // 0x1c761c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7620:
    // 0x1c7620: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c7624:
    // 0x1c7624: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c7624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7628:
    // 0x1c7628: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c762c:
    // 0x1c762c: 0xc0527ae  jal         func_149EB8
label_1c7630:
    if (ctx->pc == 0x1C7630u) {
        ctx->pc = 0x1C7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C762Cu;
        // 0x1c7630: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7634u;
        goto label_1c7634;
    }
    ctx->pc = 0x1C762Cu;
    SET_GPR_U32(ctx, 31, 0x1C7634u);
    ctx->pc = 0x1C7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C762Cu;
    // 0x1c7630: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C762Cu, 0x1C7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7634u;
label_1c7634:
    // 0x1c7634: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7638:
    // 0x1c7638: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1c7638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c763c:
    // 0x1c763c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c7640:
    // 0x1c7640: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7644:
    // 0x1c7644: 0x2671000c  addiu       $s1, $s3, 0xC
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1c7648:
    // 0x1c7648: 0xc051f18  jal         func_147C60
label_1c764c:
    if (ctx->pc == 0x1C764Cu) {
        ctx->pc = 0x1C764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7648u;
        // 0x1c764c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7650u;
        goto label_1c7650;
    }
    ctx->pc = 0x1C7648u;
    SET_GPR_U32(ctx, 31, 0x1C7650u);
    ctx->pc = 0x1C764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7648u;
    // 0x1c764c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C7648u, 0x1C7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7650u;
label_1c7650:
    // 0x1c7650: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c7654:
    // 0x1c7654: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x1c7654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7658:
    // 0x1c7658: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1c7658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c765c:
    // 0x1c765c: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
label_1c7660:
    if (ctx->pc == 0x1C7660u) {
        ctx->pc = 0x1C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C765Cu;
        // 0x1c7660: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7664u;
        goto label_1c7664;
    }
    ctx->pc = 0x1C765Cu;
    {
        const bool branch_taken_0x1c765c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c765c) {
            ctx->pc = 0x1C7660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C765Cu;
            // 0x1c7660: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77A0u;
            goto label_1c77a0;
        }
    }
    ctx->pc = 0x1C7664u;
label_1c7664:
    // 0x1c7664: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1c7664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7668:
    // 0x1c7668: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c766c:
    // 0x1c766c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1c766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7670:
    // 0x1c7670: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c7670u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7674:
    // 0x1c7674: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1c7674u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c7678:
    // 0x1c7678: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7678u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c767c:
    // 0x1c767c: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1c767cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7680:
    // 0x1c7680: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c7680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c7684:
    // 0x1c7684: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c7684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7688:
    // 0x1c7688: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1c7688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c768c:
    // 0x1c768c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7690:
    // 0x1c7690: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1c7690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7694:
    // 0x1c7694: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c7694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c7698:
    // 0x1c7698: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1c7698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c769c:
    // 0x1c769c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1c769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c76a0:
    // 0x1c76a0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1c76a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1c76a4:
    // 0x1c76a4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1c76a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c76a8:
    // 0x1c76a8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1c76a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c76ac:
    // 0x1c76ac: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1c76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c76b0:
    // 0x1c76b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c76b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c76b4:
    // 0x1c76b4: 0xc0c28ac  jal         func_30A2B0
label_1c76b8:
    if (ctx->pc == 0x1C76B8u) {
        ctx->pc = 0x1C76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76B4u;
        // 0x1c76b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76BCu;
        goto label_1c76bc;
    }
    ctx->pc = 0x1C76B4u;
    SET_GPR_U32(ctx, 31, 0x1C76BCu);
    ctx->pc = 0x1C76B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76B4u;
    // 0x1c76b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C76B4u, 0x1C76BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76BCu;
label_1c76bc:
    // 0x1c76bc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c76bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c76c0:
    // 0x1c76c0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c76c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c76c4:
    // 0x1c76c4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c76c8:
    // 0x1c76c8: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c76cc:
    if (ctx->pc == 0x1C76CCu) {
        ctx->pc = 0x1C76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C8u;
        // 0x1c76cc: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76D0u;
        goto label_1c76d0;
    }
    ctx->pc = 0x1C76C8u;
    {
        const bool branch_taken_0x1c76c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C8u;
        // 0x1c76cc: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76c8) {
            ctx->pc = 0x1C76E4u;
            goto label_1c76e4;
        }
    }
    ctx->pc = 0x1C76D0u;
label_1c76d0:
    // 0x1c76d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c76d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c76d4:
    // 0x1c76d4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1c76d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c76d8:
    // 0x1c76d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c76d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c76dc:
    // 0x1c76dc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1c76dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c76e0:
    // 0x1c76e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c76e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c76e4:
    // 0x1c76e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c76e8:
    // 0x1c76e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c76e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c76ec:
    // 0x1c76ec: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c76ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c76f0:
    // 0x1c76f0: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c76f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c76f4:
    // 0x1c76f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c76f8:
    if (ctx->pc == 0x1C76F8u) {
        ctx->pc = 0x1C76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76F4u;
        // 0x1c76f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76FCu;
        goto label_1c76fc;
    }
    ctx->pc = 0x1C76F4u;
    {
        const bool branch_taken_0x1c76f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76F4u;
        // 0x1c76f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76f4) {
            ctx->pc = 0x1C7704u;
            goto label_1c7704;
        }
    }
    ctx->pc = 0x1C76FCu;
label_1c76fc:
    // 0x1c76fc: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c76fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c7700:
    // 0x1c7700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7704:
    // 0x1c7704: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7708:
    // 0x1c7708: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1c770c:
    if (ctx->pc == 0x1C770Cu) {
        ctx->pc = 0x1C770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7708u;
        // 0x1c770c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7710u;
        goto label_1c7710;
    }
    ctx->pc = 0x1C7708u;
    {
        const bool branch_taken_0x1c7708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7708) {
            ctx->pc = 0x1C770Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7708u;
            // 0x1c770c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7774u;
            goto label_1c7774;
        }
    }
    ctx->pc = 0x1C7710u;
label_1c7710:
    // 0x1c7710: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c7710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c7714:
    // 0x1c7714: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7718:
    if (ctx->pc == 0x1C7718u) {
        ctx->pc = 0x1C7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7714u;
        // 0x1c7718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C771Cu;
        goto label_1c771c;
    }
    ctx->pc = 0x1C7714u;
    {
        const bool branch_taken_0x1c7714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7714u;
        // 0x1c7718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7714) {
            ctx->pc = 0x1C7724u;
            goto label_1c7724;
        }
    }
    ctx->pc = 0x1C771Cu;
label_1c771c:
    // 0x1c771c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c771cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7720:
    // 0x1c7720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7724:
    // 0x1c7724: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7728:
    // 0x1c7728: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c772c:
    if (ctx->pc == 0x1C772Cu) {
        ctx->pc = 0x1C772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7728u;
        // 0x1c772c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7730u;
        goto label_1c7730;
    }
    ctx->pc = 0x1C7728u;
    {
        const bool branch_taken_0x1c7728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7728) {
            ctx->pc = 0x1C772Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7728u;
            // 0x1c772c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7774u;
            goto label_1c7774;
        }
    }
    ctx->pc = 0x1C7730u;
label_1c7730:
    // 0x1c7730: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c7730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7734:
    // 0x1c7734: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7738:
    if (ctx->pc == 0x1C7738u) {
        ctx->pc = 0x1C7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7734u;
        // 0x1c7738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C773Cu;
        goto label_1c773c;
    }
    ctx->pc = 0x1C7734u;
    {
        const bool branch_taken_0x1c7734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7734u;
        // 0x1c7738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7734) {
            ctx->pc = 0x1C7744u;
            goto label_1c7744;
        }
    }
    ctx->pc = 0x1C773Cu;
label_1c773c:
    // 0x1c773c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c773cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c7740:
    // 0x1c7740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7744:
    // 0x1c7744: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7748:
    // 0x1c7748: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c774c:
    if (ctx->pc == 0x1C774Cu) {
        ctx->pc = 0x1C774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7748u;
        // 0x1c774c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7750u;
        goto label_1c7750;
    }
    ctx->pc = 0x1C7748u;
    {
        const bool branch_taken_0x1c7748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7748) {
            ctx->pc = 0x1C774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7748u;
            // 0x1c774c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7774u;
            goto label_1c7774;
        }
    }
    ctx->pc = 0x1C7750u;
label_1c7750:
    // 0x1c7750: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c7750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c7754:
    // 0x1c7754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7758:
    if (ctx->pc == 0x1C7758u) {
        ctx->pc = 0x1C7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7754u;
        // 0x1c7758: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C775Cu;
        goto label_1c775c;
    }
    ctx->pc = 0x1C7754u;
    {
        const bool branch_taken_0x1c7754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7754u;
        // 0x1c7758: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7754) {
            ctx->pc = 0x1C7764u;
            goto label_1c7764;
        }
    }
    ctx->pc = 0x1C775Cu;
label_1c775c:
    // 0x1c775c: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c775cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c7760:
    // 0x1c7760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7764:
    // 0x1c7764: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7768:
    // 0x1c7768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c776c:
    if (ctx->pc == 0x1C776Cu) {
        ctx->pc = 0x1C776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7768u;
        // 0x1c776c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7770u;
        goto label_1c7770;
    }
    ctx->pc = 0x1C7768u;
    {
        const bool branch_taken_0x1c7768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7768u;
        // 0x1c776c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7768) {
            ctx->pc = 0x1C7778u;
            goto label_1c7778;
        }
    }
    ctx->pc = 0x1C7770u;
label_1c7770:
    // 0x1c7770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7774:
    // 0x1c7774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7778:
    // 0x1c7778: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_1c777c:
    if (ctx->pc == 0x1C777Cu) {
        ctx->pc = 0x1C777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7778u;
        // 0x1c777c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7780u;
        goto label_1c7780;
    }
    ctx->pc = 0x1C7778u;
    {
        const bool branch_taken_0x1c7778 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7778) {
            ctx->pc = 0x1C777Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7778u;
            // 0x1c777c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77A0u;
            goto label_1c77a0;
        }
    }
    ctx->pc = 0x1C7780u;
label_1c7780:
    // 0x1c7780: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c7780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c7784:
    // 0x1c7784: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c7788:
    // 0x1c7788: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c7788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c778c:
    // 0x1c778c: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c778cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c7790:
    // 0x1c7790: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c7790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c7794:
    // 0x1c7794: 0xc0f809  jalr        $a2
label_1c7798:
    if (ctx->pc == 0x1C7798u) {
        ctx->pc = 0x1C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7794u;
        // 0x1c7798: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C779Cu;
        goto label_1c779c;
    }
    ctx->pc = 0x1C7794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C779Cu);
        ctx->pc = 0x1C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7794u;
        // 0x1c7798: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7794u, 0x1C779Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C779Cu;
label_1c779c:
    // 0x1c779c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c779cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c77a0:
    // 0x1c77a0: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1c77a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c77a4:
    // 0x1c77a4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_1c77a8:
    if (ctx->pc == 0x1C77A8u) {
        ctx->pc = 0x1C77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77A4u;
        // 0x1c77a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C77ACu;
        goto label_1c77ac;
    }
    ctx->pc = 0x1C77A4u;
    {
        const bool branch_taken_0x1c77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77A4u;
        // 0x1c77a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77a4) {
            ctx->pc = 0x1C7658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7658;
        }
    }
    ctx->pc = 0x1C77ACu;
label_1c77ac:
    // 0x1c77ac: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1c77acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1c77b0:
    // 0x1c77b0: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1c77b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c77b4:
    // 0x1c77b4: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1c77b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c77b8:
    // 0x1c77b8: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1c77b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c77bc:
    // 0x1c77bc: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1c77bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1c77c0:
    // 0x1c77c0: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1c77c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1c77c4:
    // 0x1c77c4: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1c77c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c77c8:
    // 0x1c77c8: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1c77c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c77cc:
    // 0x1c77cc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c77ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1c77d0:
    // 0x1c77d0: 0x3e00008  jr          $ra
label_1c77d4:
    if (ctx->pc == 0x1C77D4u) {
        ctx->pc = 0x1C77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D0u;
        // 0x1c77d4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C77D8u;
        goto label_fallthrough_0x1c77d0;
    }
    ctx->pc = 0x1C77D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D0u;
        // 0x1c77d4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c77d0:
    ctx->pc = 0x1C77D8u;
}
