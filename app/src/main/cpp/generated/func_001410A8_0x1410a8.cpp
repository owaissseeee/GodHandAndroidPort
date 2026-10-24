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

// Function: func_001410A8
// Address: 0x1410a8 - 0x1415e0
void func_001410A8_0x1410a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001410A8_0x1410a8");
#endif

    switch (ctx->pc) {
        case 0x1410a8u: goto label_1410a8;
        case 0x1410acu: goto label_1410ac;
        case 0x1410b0u: goto label_1410b0;
        case 0x1410b4u: goto label_1410b4;
        case 0x1410b8u: goto label_1410b8;
        case 0x1410bcu: goto label_1410bc;
        case 0x1410c0u: goto label_1410c0;
        case 0x1410c4u: goto label_1410c4;
        case 0x1410c8u: goto label_1410c8;
        case 0x1410ccu: goto label_1410cc;
        case 0x1410d0u: goto label_1410d0;
        case 0x1410d4u: goto label_1410d4;
        case 0x1410d8u: goto label_1410d8;
        case 0x1410dcu: goto label_1410dc;
        case 0x1410e0u: goto label_1410e0;
        case 0x1410e4u: goto label_1410e4;
        case 0x1410e8u: goto label_1410e8;
        case 0x1410ecu: goto label_1410ec;
        case 0x1410f0u: goto label_1410f0;
        case 0x1410f4u: goto label_1410f4;
        case 0x1410f8u: goto label_1410f8;
        case 0x1410fcu: goto label_1410fc;
        case 0x141100u: goto label_141100;
        case 0x141104u: goto label_141104;
        case 0x141108u: goto label_141108;
        case 0x14110cu: goto label_14110c;
        case 0x141110u: goto label_141110;
        case 0x141114u: goto label_141114;
        case 0x141118u: goto label_141118;
        case 0x14111cu: goto label_14111c;
        case 0x141120u: goto label_141120;
        case 0x141124u: goto label_141124;
        case 0x141128u: goto label_141128;
        case 0x14112cu: goto label_14112c;
        case 0x141130u: goto label_141130;
        case 0x141134u: goto label_141134;
        case 0x141138u: goto label_141138;
        case 0x14113cu: goto label_14113c;
        case 0x141140u: goto label_141140;
        case 0x141144u: goto label_141144;
        case 0x141148u: goto label_141148;
        case 0x14114cu: goto label_14114c;
        case 0x141150u: goto label_141150;
        case 0x141154u: goto label_141154;
        case 0x141158u: goto label_141158;
        case 0x14115cu: goto label_14115c;
        case 0x141160u: goto label_141160;
        case 0x141164u: goto label_141164;
        case 0x141168u: goto label_141168;
        case 0x14116cu: goto label_14116c;
        case 0x141170u: goto label_141170;
        case 0x141174u: goto label_141174;
        case 0x141178u: goto label_141178;
        case 0x14117cu: goto label_14117c;
        case 0x141180u: goto label_141180;
        case 0x141184u: goto label_141184;
        case 0x141188u: goto label_141188;
        case 0x14118cu: goto label_14118c;
        case 0x141190u: goto label_141190;
        case 0x141194u: goto label_141194;
        case 0x141198u: goto label_141198;
        case 0x14119cu: goto label_14119c;
        case 0x1411a0u: goto label_1411a0;
        case 0x1411a4u: goto label_1411a4;
        case 0x1411a8u: goto label_1411a8;
        case 0x1411acu: goto label_1411ac;
        case 0x1411b0u: goto label_1411b0;
        case 0x1411b4u: goto label_1411b4;
        case 0x1411b8u: goto label_1411b8;
        case 0x1411bcu: goto label_1411bc;
        case 0x1411c0u: goto label_1411c0;
        case 0x1411c4u: goto label_1411c4;
        case 0x1411c8u: goto label_1411c8;
        case 0x1411ccu: goto label_1411cc;
        case 0x1411d0u: goto label_1411d0;
        case 0x1411d4u: goto label_1411d4;
        case 0x1411d8u: goto label_1411d8;
        case 0x1411dcu: goto label_1411dc;
        case 0x1411e0u: goto label_1411e0;
        case 0x1411e4u: goto label_1411e4;
        case 0x1411e8u: goto label_1411e8;
        case 0x1411ecu: goto label_1411ec;
        case 0x1411f0u: goto label_1411f0;
        case 0x1411f4u: goto label_1411f4;
        case 0x1411f8u: goto label_1411f8;
        case 0x1411fcu: goto label_1411fc;
        case 0x141200u: goto label_141200;
        case 0x141204u: goto label_141204;
        case 0x141208u: goto label_141208;
        case 0x14120cu: goto label_14120c;
        case 0x141210u: goto label_141210;
        case 0x141214u: goto label_141214;
        case 0x141218u: goto label_141218;
        case 0x14121cu: goto label_14121c;
        case 0x141220u: goto label_141220;
        case 0x141224u: goto label_141224;
        case 0x141228u: goto label_141228;
        case 0x14122cu: goto label_14122c;
        case 0x141230u: goto label_141230;
        case 0x141234u: goto label_141234;
        case 0x141238u: goto label_141238;
        case 0x14123cu: goto label_14123c;
        case 0x141240u: goto label_141240;
        case 0x141244u: goto label_141244;
        case 0x141248u: goto label_141248;
        case 0x14124cu: goto label_14124c;
        case 0x141250u: goto label_141250;
        case 0x141254u: goto label_141254;
        case 0x141258u: goto label_141258;
        case 0x14125cu: goto label_14125c;
        case 0x141260u: goto label_141260;
        case 0x141264u: goto label_141264;
        case 0x141268u: goto label_141268;
        case 0x14126cu: goto label_14126c;
        case 0x141270u: goto label_141270;
        case 0x141274u: goto label_141274;
        case 0x141278u: goto label_141278;
        case 0x14127cu: goto label_14127c;
        case 0x141280u: goto label_141280;
        case 0x141284u: goto label_141284;
        case 0x141288u: goto label_141288;
        case 0x14128cu: goto label_14128c;
        case 0x141290u: goto label_141290;
        case 0x141294u: goto label_141294;
        case 0x141298u: goto label_141298;
        case 0x14129cu: goto label_14129c;
        case 0x1412a0u: goto label_1412a0;
        case 0x1412a4u: goto label_1412a4;
        case 0x1412a8u: goto label_1412a8;
        case 0x1412acu: goto label_1412ac;
        case 0x1412b0u: goto label_1412b0;
        case 0x1412b4u: goto label_1412b4;
        case 0x1412b8u: goto label_1412b8;
        case 0x1412bcu: goto label_1412bc;
        case 0x1412c0u: goto label_1412c0;
        case 0x1412c4u: goto label_1412c4;
        case 0x1412c8u: goto label_1412c8;
        case 0x1412ccu: goto label_1412cc;
        case 0x1412d0u: goto label_1412d0;
        case 0x1412d4u: goto label_1412d4;
        case 0x1412d8u: goto label_1412d8;
        case 0x1412dcu: goto label_1412dc;
        case 0x1412e0u: goto label_1412e0;
        case 0x1412e4u: goto label_1412e4;
        case 0x1412e8u: goto label_1412e8;
        case 0x1412ecu: goto label_1412ec;
        case 0x1412f0u: goto label_1412f0;
        case 0x1412f4u: goto label_1412f4;
        case 0x1412f8u: goto label_1412f8;
        case 0x1412fcu: goto label_1412fc;
        case 0x141300u: goto label_141300;
        case 0x141304u: goto label_141304;
        case 0x141308u: goto label_141308;
        case 0x14130cu: goto label_14130c;
        case 0x141310u: goto label_141310;
        case 0x141314u: goto label_141314;
        case 0x141318u: goto label_141318;
        case 0x14131cu: goto label_14131c;
        case 0x141320u: goto label_141320;
        case 0x141324u: goto label_141324;
        case 0x141328u: goto label_141328;
        case 0x14132cu: goto label_14132c;
        case 0x141330u: goto label_141330;
        case 0x141334u: goto label_141334;
        case 0x141338u: goto label_141338;
        case 0x14133cu: goto label_14133c;
        case 0x141340u: goto label_141340;
        case 0x141344u: goto label_141344;
        case 0x141348u: goto label_141348;
        case 0x14134cu: goto label_14134c;
        case 0x141350u: goto label_141350;
        case 0x141354u: goto label_141354;
        case 0x141358u: goto label_141358;
        case 0x14135cu: goto label_14135c;
        case 0x141360u: goto label_141360;
        case 0x141364u: goto label_141364;
        case 0x141368u: goto label_141368;
        case 0x14136cu: goto label_14136c;
        case 0x141370u: goto label_141370;
        case 0x141374u: goto label_141374;
        case 0x141378u: goto label_141378;
        case 0x14137cu: goto label_14137c;
        case 0x141380u: goto label_141380;
        case 0x141384u: goto label_141384;
        case 0x141388u: goto label_141388;
        case 0x14138cu: goto label_14138c;
        case 0x141390u: goto label_141390;
        case 0x141394u: goto label_141394;
        case 0x141398u: goto label_141398;
        case 0x14139cu: goto label_14139c;
        case 0x1413a0u: goto label_1413a0;
        case 0x1413a4u: goto label_1413a4;
        case 0x1413a8u: goto label_1413a8;
        case 0x1413acu: goto label_1413ac;
        case 0x1413b0u: goto label_1413b0;
        case 0x1413b4u: goto label_1413b4;
        case 0x1413b8u: goto label_1413b8;
        case 0x1413bcu: goto label_1413bc;
        case 0x1413c0u: goto label_1413c0;
        case 0x1413c4u: goto label_1413c4;
        case 0x1413c8u: goto label_1413c8;
        case 0x1413ccu: goto label_1413cc;
        case 0x1413d0u: goto label_1413d0;
        case 0x1413d4u: goto label_1413d4;
        case 0x1413d8u: goto label_1413d8;
        case 0x1413dcu: goto label_1413dc;
        case 0x1413e0u: goto label_1413e0;
        case 0x1413e4u: goto label_1413e4;
        case 0x1413e8u: goto label_1413e8;
        case 0x1413ecu: goto label_1413ec;
        case 0x1413f0u: goto label_1413f0;
        case 0x1413f4u: goto label_1413f4;
        case 0x1413f8u: goto label_1413f8;
        case 0x1413fcu: goto label_1413fc;
        case 0x141400u: goto label_141400;
        case 0x141404u: goto label_141404;
        case 0x141408u: goto label_141408;
        case 0x14140cu: goto label_14140c;
        case 0x141410u: goto label_141410;
        case 0x141414u: goto label_141414;
        case 0x141418u: goto label_141418;
        case 0x14141cu: goto label_14141c;
        case 0x141420u: goto label_141420;
        case 0x141424u: goto label_141424;
        case 0x141428u: goto label_141428;
        case 0x14142cu: goto label_14142c;
        case 0x141430u: goto label_141430;
        case 0x141434u: goto label_141434;
        case 0x141438u: goto label_141438;
        case 0x14143cu: goto label_14143c;
        case 0x141440u: goto label_141440;
        case 0x141444u: goto label_141444;
        case 0x141448u: goto label_141448;
        case 0x14144cu: goto label_14144c;
        case 0x141450u: goto label_141450;
        case 0x141454u: goto label_141454;
        case 0x141458u: goto label_141458;
        case 0x14145cu: goto label_14145c;
        case 0x141460u: goto label_141460;
        case 0x141464u: goto label_141464;
        case 0x141468u: goto label_141468;
        case 0x14146cu: goto label_14146c;
        case 0x141470u: goto label_141470;
        case 0x141474u: goto label_141474;
        case 0x141478u: goto label_141478;
        case 0x14147cu: goto label_14147c;
        case 0x141480u: goto label_141480;
        case 0x141484u: goto label_141484;
        case 0x141488u: goto label_141488;
        case 0x14148cu: goto label_14148c;
        case 0x141490u: goto label_141490;
        case 0x141494u: goto label_141494;
        case 0x141498u: goto label_141498;
        case 0x14149cu: goto label_14149c;
        case 0x1414a0u: goto label_1414a0;
        case 0x1414a4u: goto label_1414a4;
        case 0x1414a8u: goto label_1414a8;
        case 0x1414acu: goto label_1414ac;
        case 0x1414b0u: goto label_1414b0;
        case 0x1414b4u: goto label_1414b4;
        case 0x1414b8u: goto label_1414b8;
        case 0x1414bcu: goto label_1414bc;
        case 0x1414c0u: goto label_1414c0;
        case 0x1414c4u: goto label_1414c4;
        case 0x1414c8u: goto label_1414c8;
        case 0x1414ccu: goto label_1414cc;
        case 0x1414d0u: goto label_1414d0;
        case 0x1414d4u: goto label_1414d4;
        case 0x1414d8u: goto label_1414d8;
        case 0x1414dcu: goto label_1414dc;
        case 0x1414e0u: goto label_1414e0;
        case 0x1414e4u: goto label_1414e4;
        case 0x1414e8u: goto label_1414e8;
        case 0x1414ecu: goto label_1414ec;
        case 0x1414f0u: goto label_1414f0;
        case 0x1414f4u: goto label_1414f4;
        case 0x1414f8u: goto label_1414f8;
        case 0x1414fcu: goto label_1414fc;
        case 0x141500u: goto label_141500;
        case 0x141504u: goto label_141504;
        case 0x141508u: goto label_141508;
        case 0x14150cu: goto label_14150c;
        case 0x141510u: goto label_141510;
        case 0x141514u: goto label_141514;
        case 0x141518u: goto label_141518;
        case 0x14151cu: goto label_14151c;
        case 0x141520u: goto label_141520;
        case 0x141524u: goto label_141524;
        case 0x141528u: goto label_141528;
        case 0x14152cu: goto label_14152c;
        case 0x141530u: goto label_141530;
        case 0x141534u: goto label_141534;
        case 0x141538u: goto label_141538;
        case 0x14153cu: goto label_14153c;
        case 0x141540u: goto label_141540;
        case 0x141544u: goto label_141544;
        case 0x141548u: goto label_141548;
        case 0x14154cu: goto label_14154c;
        case 0x141550u: goto label_141550;
        case 0x141554u: goto label_141554;
        case 0x141558u: goto label_141558;
        case 0x14155cu: goto label_14155c;
        case 0x141560u: goto label_141560;
        case 0x141564u: goto label_141564;
        case 0x141568u: goto label_141568;
        case 0x14156cu: goto label_14156c;
        case 0x141570u: goto label_141570;
        case 0x141574u: goto label_141574;
        case 0x141578u: goto label_141578;
        case 0x14157cu: goto label_14157c;
        case 0x141580u: goto label_141580;
        case 0x141584u: goto label_141584;
        case 0x141588u: goto label_141588;
        case 0x14158cu: goto label_14158c;
        case 0x141590u: goto label_141590;
        case 0x141594u: goto label_141594;
        case 0x141598u: goto label_141598;
        case 0x14159cu: goto label_14159c;
        case 0x1415a0u: goto label_1415a0;
        case 0x1415a4u: goto label_1415a4;
        case 0x1415a8u: goto label_1415a8;
        case 0x1415acu: goto label_1415ac;
        case 0x1415b0u: goto label_1415b0;
        case 0x1415b4u: goto label_1415b4;
        case 0x1415b8u: goto label_1415b8;
        case 0x1415bcu: goto label_1415bc;
        case 0x1415c0u: goto label_1415c0;
        case 0x1415c4u: goto label_1415c4;
        case 0x1415c8u: goto label_1415c8;
        case 0x1415ccu: goto label_1415cc;
        case 0x1415d0u: goto label_1415d0;
        case 0x1415d4u: goto label_1415d4;
        case 0x1415d8u: goto label_1415d8;
        case 0x1415dcu: goto label_1415dc;
        default: break;
    }

    ctx->pc = 0x1410a8u;

label_1410a8:
    // 0x1410a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1410ac:
    // 0x1410ac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1410acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1410b0:
    // 0x1410b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1410b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1410b4:
    // 0x1410b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1410b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1410b8:
    // 0x1410b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1410b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1410bc:
    // 0x1410bc: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x1410bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31276)));
label_1410c0:
    // 0x1410c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1410c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1410c4:
    // 0x1410c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1410c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1410c8:
    // 0x1410c8: 0x24447a2c  addiu       $a0, $v0, 0x7A2C
    ctx->pc = 0x1410c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
label_1410cc:
    // 0x1410cc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1410ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1410d0:
    // 0x1410d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1410d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1410d4:
    // 0x1410d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1410d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1410d8:
    // 0x1410d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1410d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1410dc:
    // 0x1410dc: 0x4600136  bltz        $v1, . + 4 + (0x136 << 2)
label_1410e0:
    if (ctx->pc == 0x1410E0u) {
        ctx->pc = 0x1410E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410DCu;
        // 0x1410e0: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410E4u;
        goto label_1410e4;
    }
    ctx->pc = 0x1410DCu;
    {
        const bool branch_taken_0x1410dc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1410E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410DCu;
        // 0x1410e0: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410dc) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x1410E4u;
label_1410e4:
    // 0x1410e4: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x1410e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1410e8:
    // 0x1410e8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1410e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_1410ec:
    // 0x1410ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1410ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1410f0:
    // 0x1410f0: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
label_1410f4:
    if (ctx->pc == 0x1410F4u) {
        ctx->pc = 0x1410F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F0u;
        // 0x1410f4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410F8u;
        goto label_1410f8;
    }
    ctx->pc = 0x1410F0u;
    {
        const bool branch_taken_0x1410f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F0u;
        // 0x1410f4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410f0) {
            ctx->pc = 0x141528u;
            goto label_141528;
        }
    }
    ctx->pc = 0x1410F8u;
label_1410f8:
    // 0x1410f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1410fc:
    // 0x1410fc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1410fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_141100:
    // 0x141100: 0x14400109  bnez        $v0, . + 4 + (0x109 << 2)
label_141104:
    if (ctx->pc == 0x141104u) {
        ctx->pc = 0x141104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141100u;
        // 0x141104: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141108u;
        goto label_141108;
    }
    ctx->pc = 0x141100u;
    {
        const bool branch_taken_0x141100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141100u;
        // 0x141104: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141100) {
            ctx->pc = 0x141528u;
            goto label_141528;
        }
    }
    ctx->pc = 0x141108u;
label_141108:
    // 0x141108: 0x922323bc  lbu         $v1, 0x23BC($s1)
    ctx->pc = 0x141108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9148)));
label_14110c:
    // 0x14110c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x14110cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_141110:
    // 0x141110: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
label_141114:
    if (ctx->pc == 0x141114u) {
        ctx->pc = 0x141114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141110u;
        // 0x141114: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141118u;
        goto label_141118;
    }
    ctx->pc = 0x141110u;
    {
        const bool branch_taken_0x141110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141110u;
        // 0x141114: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141110) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x141118u;
label_141118:
    // 0x141118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14111c:
    // 0x14111c: 0x2442e5b0  addiu       $v0, $v0, -0x1A50
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
label_141120:
    // 0x141120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141124:
    // 0x141124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_141128:
    // 0x141128: 0x800008  jr          $a0
label_14112c:
    if (ctx->pc == 0x14112Cu) {
        ctx->pc = 0x141130u;
        goto label_141130;
    }
    ctx->pc = 0x141128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141130u: goto label_141130;
            case 0x1411D8u: goto label_1411d8;
            case 0x1412CCu: goto label_1412cc;
            case 0x1413B8u: goto label_1413b8;
            case 0x141468u: goto label_141468;
            case 0x1415B8u: goto label_1415b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x141130u;
label_141130:
    // 0x141130: 0xc04f500  jal         func_13D400
label_141134:
    if (ctx->pc == 0x141134u) {
        ctx->pc = 0x141134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141130u;
        // 0x141134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141138u;
        goto label_141138;
    }
    ctx->pc = 0x141130u;
    SET_GPR_U32(ctx, 31, 0x141138u);
    ctx->pc = 0x141134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141130u;
    // 0x141134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D400u, 0x141130u, 0x141138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141138u;
label_141138:
    // 0x141138: 0x922323bc  lbu         $v1, 0x23BC($s1)
    ctx->pc = 0x141138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9148)));
label_14113c:
    // 0x14113c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x14113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_141140:
    // 0x141140: 0xa62223be  sh          $v0, 0x23BE($s1)
    ctx->pc = 0x141140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 2));
label_141144:
    // 0x141144: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_141148:
    // 0x141148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14114c:
    // 0x14114c: 0xa22323bc  sb          $v1, 0x23BC($s1)
    ctx->pc = 0x14114cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 3));
label_141150:
    // 0x141150: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
label_141154:
    // 0x141154: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x141154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_141158:
    // 0x141158: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_14115c:
    if (ctx->pc == 0x14115Cu) {
        ctx->pc = 0x14115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141158u;
        // 0x14115c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141160u;
        goto label_141160;
    }
    ctx->pc = 0x141158u;
    {
        const bool branch_taken_0x141158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141158u;
        // 0x14115c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141158) {
            ctx->pc = 0x14118Cu;
            goto label_14118c;
        }
    }
    ctx->pc = 0x141160u;
label_141160:
    // 0x141160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141164:
    // 0x141164: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_141168:
    // 0x141168: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x141168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14116c:
    // 0x14116c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14116cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141170:
    // 0x141170: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x141170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141174:
    // 0x141174: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_141178:
    // 0x141178: 0xc0c1c82  jal         func_307208
label_14117c:
    if (ctx->pc == 0x14117Cu) {
        ctx->pc = 0x14117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141178u;
        // 0x14117c: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141180u;
        goto label_141180;
    }
    ctx->pc = 0x141178u;
    SET_GPR_U32(ctx, 31, 0x141180u);
    ctx->pc = 0x14117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141178u;
    // 0x14117c: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x141178u, 0x141180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141180u;
label_141180:
    // 0x141180: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x141180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_141184:
    // 0x141184: 0x10000011  b           . + 4 + (0x11 << 2)
label_141188:
    if (ctx->pc == 0x141188u) {
        ctx->pc = 0x141188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141184u;
        // 0x141188: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14118Cu;
        goto label_14118c;
    }
    ctx->pc = 0x141184u;
    {
        const bool branch_taken_0x141184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141184u;
        // 0x141188: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141184) {
            ctx->pc = 0x1411CCu;
            goto label_1411cc;
        }
    }
    ctx->pc = 0x14118Cu;
label_14118c:
    // 0x14118c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x14118cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_141190:
    // 0x141190: 0x9c628240  lwu         $v0, -0x7DC0($v1)
    ctx->pc = 0x141190u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935104)));
label_141194:
    // 0x141194: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x141194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_141198:
    // 0x141198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x141198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14119c:
    // 0x14119c: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_1411a0:
    if (ctx->pc == 0x1411A0u) {
        ctx->pc = 0x1411A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14119Cu;
        // 0x1411a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411A4u;
        goto label_1411a4;
    }
    ctx->pc = 0x14119Cu;
    {
        const bool branch_taken_0x14119c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14119Cu;
        // 0x1411a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14119c) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x1411A4u;
label_1411a4:
    // 0x1411a4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1411a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1411a8:
    // 0x1411a8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1411a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_1411ac:
    // 0x1411ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1411acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1411b0:
    // 0x1411b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1411b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1411b4:
    // 0x1411b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1411b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1411b8:
    // 0x1411b8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1411b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1411bc:
    // 0x1411bc: 0xc0c1c82  jal         func_307208
label_1411c0:
    if (ctx->pc == 0x1411C0u) {
        ctx->pc = 0x1411C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411BCu;
        // 0x1411c0: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411C4u;
        goto label_1411c4;
    }
    ctx->pc = 0x1411BCu;
    SET_GPR_U32(ctx, 31, 0x1411C4u);
    ctx->pc = 0x1411C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411BCu;
    // 0x1411c0: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1411BCu, 0x1411C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411C4u;
label_1411c4:
    // 0x1411c4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1411c8:
    // 0x1411c8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1411cc:
    // 0x1411cc: 0xa22223bc  sb          $v0, 0x23BC($s1)
    ctx->pc = 0x1411ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 2));
label_1411d0:
    // 0x1411d0: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_1411d4:
    if (ctx->pc == 0x1411D4u) {
        ctx->pc = 0x1411D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411D0u;
        // 0x1411d4: 0xa62323be  sh          $v1, 0x23BE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411D8u;
        goto label_1411d8;
    }
    ctx->pc = 0x1411D0u;
    {
        const bool branch_taken_0x1411d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411D0u;
        // 0x1411d4: 0xa62323be  sh          $v1, 0x23BE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411d0) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x1411D8u;
label_1411d8:
    // 0x1411d8: 0x862223be  lh          $v0, 0x23BE($s1)
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
label_1411dc:
    // 0x1411dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1411e0:
    if (ctx->pc == 0x1411E0u) {
        ctx->pc = 0x1411E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411DCu;
        // 0x1411e0: 0x962323be  lhu         $v1, 0x23BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411E4u;
        goto label_1411e4;
    }
    ctx->pc = 0x1411DCu;
    {
        const bool branch_taken_0x1411dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1411E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411DCu;
        // 0x1411e0: 0x962323be  lhu         $v1, 0x23BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411dc) {
            ctx->pc = 0x1411F0u;
            goto label_1411f0;
        }
    }
    ctx->pc = 0x1411E4u;
label_1411e4:
    // 0x1411e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1411e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1411e8:
    // 0x1411e8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1411ec:
    if (ctx->pc == 0x1411ECu) {
        ctx->pc = 0x1411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411E8u;
        // 0x1411ec: 0xa62223be  sh          $v0, 0x23BE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411F0u;
        goto label_1411f0;
    }
    ctx->pc = 0x1411E8u;
    {
        const bool branch_taken_0x1411e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411E8u;
        // 0x1411ec: 0xa62223be  sh          $v0, 0x23BE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411e8) {
            ctx->pc = 0x141268u;
            goto label_141268;
        }
    }
    ctx->pc = 0x1411F0u;
label_1411f0:
    // 0x1411f0: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x1411f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
label_1411f4:
    // 0x1411f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1411f8:
    // 0x1411f8: 0x8d027a78  lw          $v0, 0x7A78($t0)
    ctx->pc = 0x1411f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31352)));
label_1411fc:
    // 0x1411fc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_141200:
    // 0x141200: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_141204:
    // 0x141204: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x141204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_141208:
    // 0x141208: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14120c:
    // 0x14120c: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x14120cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_141210:
    // 0x141210: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x141210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_141214:
    // 0x141214: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x141214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_141218:
    // 0x141218: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x141218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_14121c:
    // 0x14121c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_141220:
    // 0x141220: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_141224:
    // 0x141224: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
label_141228:
    // 0x141228: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x141228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_14122c:
    // 0x14122c: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x14122cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_141230:
    // 0x141230: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141234:
    // 0x141234: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x141234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_141238:
    // 0x141238: 0xad027a78  sw          $v0, 0x7A78($t0)
    ctx->pc = 0x141238u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 2));
label_14123c:
    // 0x14123c: 0xc0c6f62  jal         func_31BD88
label_141240:
    if (ctx->pc == 0x141240u) {
        ctx->pc = 0x141240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14123Cu;
        // 0x141240: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141244u;
        goto label_141244;
    }
    ctx->pc = 0x14123Cu;
    SET_GPR_U32(ctx, 31, 0x141244u);
    ctx->pc = 0x141240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14123Cu;
    // 0x141240: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD88u, 0x14123Cu, 0x141244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141244u;
label_141244:
    // 0x141244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141248:
    // 0x141248: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x141248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
label_14124c:
    // 0x14124c: 0xc0b2f16  jal         func_2CBC58
label_141250:
    if (ctx->pc == 0x141250u) {
        ctx->pc = 0x141250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14124Cu;
        // 0x141250: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141254u;
        goto label_141254;
    }
    ctx->pc = 0x14124Cu;
    SET_GPR_U32(ctx, 31, 0x141254u);
    ctx->pc = 0x141250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14124Cu;
    // 0x141250: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC58u, 0x14124Cu, 0x141254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141254u;
label_141254:
    // 0x141254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141258:
    // 0x141258: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_14125c:
    // 0x14125c: 0x28a20034  slti        $v0, $a1, 0x34
    ctx->pc = 0x14125cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)52) ? 1 : 0);
label_141260:
    // 0x141260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_141264:
    if (ctx->pc == 0x141264u) {
        ctx->pc = 0x141264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141260u;
        // 0x141264: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141268u;
        goto label_141268;
    }
    ctx->pc = 0x141260u;
    {
        const bool branch_taken_0x141260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141260u;
        // 0x141264: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141260) {
            ctx->pc = 0x141248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141248;
        }
    }
    ctx->pc = 0x141268u;
label_141268:
    // 0x141268: 0xc04f550  jal         func_13D540
label_14126c:
    if (ctx->pc == 0x14126Cu) {
        ctx->pc = 0x14126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141268u;
        // 0x14126c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141270u;
        goto label_141270;
    }
    ctx->pc = 0x141268u;
    SET_GPR_U32(ctx, 31, 0x141270u);
    ctx->pc = 0x14126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141268u;
    // 0x14126c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D540u, 0x141268u, 0x141270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141270u;
label_141270:
    // 0x141270: 0xc04f6b8  jal         func_13DAE0
label_141274:
    if (ctx->pc == 0x141274u) {
        ctx->pc = 0x141274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141270u;
        // 0x141274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141278u;
        goto label_141278;
    }
    ctx->pc = 0x141270u;
    SET_GPR_U32(ctx, 31, 0x141278u);
    ctx->pc = 0x141274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141270u;
    // 0x141274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DAE0u, 0x141270u, 0x141278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141278u;
label_141278:
    // 0x141278: 0x96230092  lhu         $v1, 0x92($s1)
    ctx->pc = 0x141278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_14127c:
    // 0x14127c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141280:
    // 0x141280: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_141284:
    if (ctx->pc == 0x141284u) {
        ctx->pc = 0x141284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141280u;
        // 0x141284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141288u;
        goto label_141288;
    }
    ctx->pc = 0x141280u;
    {
        const bool branch_taken_0x141280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x141284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141280u;
        // 0x141284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141280) {
            ctx->pc = 0x14128Cu;
            goto label_14128c;
        }
    }
    ctx->pc = 0x141288u;
label_141288:
    // 0x141288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14128c:
    // 0x14128c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141290:
    // 0x141290: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_141294:
    if (ctx->pc == 0x141294u) {
        ctx->pc = 0x141294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141290u;
        // 0x141294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141298u;
        goto label_141298;
    }
    ctx->pc = 0x141290u;
    {
        const bool branch_taken_0x141290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141290u;
        // 0x141294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141290) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x141298u;
label_141298:
    // 0x141298: 0x922223bc  lbu         $v0, 0x23BC($s1)
    ctx->pc = 0x141298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9148)));
label_14129c:
    // 0x14129c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x14129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1412a0:
    // 0x1412a0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_1412a4:
    // 0x1412a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1412a8:
    // 0x1412a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1412a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1412ac:
    // 0x1412ac: 0xa22223bc  sb          $v0, 0x23BC($s1)
    ctx->pc = 0x1412acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 2));
label_1412b0:
    // 0x1412b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1412b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1412b4:
    // 0x1412b4: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1412b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_1412b8:
    // 0x1412b8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1412b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1412bc:
    // 0x1412bc: 0xc0c1c82  jal         func_307208
label_1412c0:
    if (ctx->pc == 0x1412C0u) {
        ctx->pc = 0x1412C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412BCu;
        // 0x1412c0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1412C4u;
        goto label_1412c4;
    }
    ctx->pc = 0x1412BCu;
    SET_GPR_U32(ctx, 31, 0x1412C4u);
    ctx->pc = 0x1412C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412BCu;
    // 0x1412c0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1412BCu, 0x1412C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412C4u;
label_1412c4:
    // 0x1412c4: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1412c8:
    if (ctx->pc == 0x1412C8u) {
        ctx->pc = 0x1412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412C4u;
        // 0x1412c8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1412CCu;
        goto label_1412cc;
    }
    ctx->pc = 0x1412C4u;
    {
        const bool branch_taken_0x1412c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412C4u;
        // 0x1412c8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412c4) {
            ctx->pc = 0x1415BCu;
            goto label_1415bc;
        }
    }
    ctx->pc = 0x1412CCu;
label_1412cc:
    // 0x1412cc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1412ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1412d0:
    // 0x1412d0: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
label_1412d4:
    // 0x1412d4: 0x245374a0  addiu       $s3, $v0, 0x74A0
    ctx->pc = 0x1412d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_1412d8:
    // 0x1412d8: 0x24c3ac90  addiu       $v1, $a2, -0x5370
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945936));
label_1412dc:
    // 0x1412dc: 0x8e6505a4  lw          $a1, 0x5A4($s3)
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1444)));
label_1412e0:
    // 0x1412e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1412e4:
    // 0x1412e4: 0xa0c2ac90  sb          $v0, -0x5370($a2)
    ctx->pc = 0x1412e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294945936), (uint8_t)GPR_U32(ctx, 2));
label_1412e8:
    // 0x1412e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1412e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1412ec:
    // 0x1412ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1412ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1412f0:
    // 0x1412f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1412f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1412f4:
    // 0x1412f4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1412f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1412f8:
    // 0x1412f8: 0xc0afa60  jal         func_2BE980
label_1412fc:
    if (ctx->pc == 0x1412FCu) {
        ctx->pc = 0x1412FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412F8u;
        // 0x1412fc: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141300u;
        goto label_141300;
    }
    ctx->pc = 0x1412F8u;
    SET_GPR_U32(ctx, 31, 0x141300u);
    ctx->pc = 0x1412FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412F8u;
    // 0x1412fc: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE980u, 0x1412F8u, 0x141300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141300u;
label_141300:
    // 0x141300: 0x92230090  lbu         $v1, 0x90($s1)
    ctx->pc = 0x141300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 144)));
label_141304:
    // 0x141304: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_141308:
    if (ctx->pc == 0x141308u) {
        ctx->pc = 0x141308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141304u;
        // 0x141308: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14130Cu;
        goto label_14130c;
    }
    ctx->pc = 0x141304u;
    {
        const bool branch_taken_0x141304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141304u;
        // 0x141308: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141304) {
            ctx->pc = 0x14131Cu;
            goto label_14131c;
        }
    }
    ctx->pc = 0x14130Cu;
label_14130c:
    // 0x14130c: 0x8e620584  lw          $v0, 0x584($s3)
    ctx->pc = 0x14130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1412)));
label_141310:
    // 0x141310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141314:
    // 0x141314: 0x1000001e  b           . + 4 + (0x1E << 2)
label_141318:
    if (ctx->pc == 0x141318u) {
        ctx->pc = 0x141318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141314u;
        // 0x141318: 0xae620584  sw          $v0, 0x584($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14131Cu;
        goto label_14131c;
    }
    ctx->pc = 0x141314u;
    {
        const bool branch_taken_0x141314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141314u;
        // 0x141318: 0xae620584  sw          $v0, 0x584($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141314) {
            ctx->pc = 0x141390u;
            goto label_141390;
        }
    }
    ctx->pc = 0x14131Cu;
label_14131c:
    // 0x14131c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x14131cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_141320:
    // 0x141320: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x141320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_141324:
    // 0x141324: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941552)));
label_141328:
    // 0x141328: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_14132c:
    // 0x14132c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_141330:
    // 0x141330: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_141334:
    if (ctx->pc == 0x141334u) {
        ctx->pc = 0x141334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141330u;
        // 0x141334: 0x267205c0  addiu       $s2, $s3, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141338u;
        goto label_141338;
    }
    ctx->pc = 0x141330u;
    {
        const bool branch_taken_0x141330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141330u;
        // 0x141334: 0x267205c0  addiu       $s2, $s3, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141330) {
            ctx->pc = 0x14137Cu;
            goto label_14137c;
        }
    }
    ctx->pc = 0x141338u;
label_141338:
    // 0x141338: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x141338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_14133c:
    // 0x14133c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x14133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_141340:
    // 0x141340: 0xc67405d0  lwc1        $f20, 0x5D0($s3)
    ctx->pc = 0x141340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_141344:
    // 0x141344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141348:
    // 0x141348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14134c:
    // 0x14134c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14134cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141350:
    // 0x141350: 0xc0afa66  jal         func_2BE998
label_141354:
    if (ctx->pc == 0x141354u) {
        ctx->pc = 0x141354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141350u;
        // 0x141354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141358u;
        goto label_141358;
    }
    ctx->pc = 0x141350u;
    SET_GPR_U32(ctx, 31, 0x141358u);
    ctx->pc = 0x141354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141350u;
    // 0x141354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE998u, 0x141350u, 0x141358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141358u;
label_141358:
    // 0x141358: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
label_14135c:
    if (ctx->pc == 0x14135Cu) {
        ctx->pc = 0x14135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141358u;
        // 0x14135c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x141360u;
        goto label_141360;
    }
    ctx->pc = 0x141358u;
    {
        const bool branch_taken_0x141358 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x14135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141358u;
        // 0x14135c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141358) {
            ctx->pc = 0x141374u;
            goto label_141374;
        }
    }
    ctx->pc = 0x141360u;
label_141360:
    // 0x141360: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x141360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_141364:
    // 0x141364: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x141364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141368:
    // 0x141368: 0xe66005c0  swc1        $f0, 0x5C0($s3)
    ctx->pc = 0x141368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1472), bits); }
label_14136c:
    // 0x14136c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x14136cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_141370:
    // 0x141370: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x141370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_141374:
    // 0x141374: 0x10000006  b           . + 4 + (0x6 << 2)
label_141378:
    if (ctx->pc == 0x141378u) {
        ctx->pc = 0x141378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141374u;
        // 0x141378: 0xe67405d0  swc1        $f20, 0x5D0($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1488), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14137Cu;
        goto label_14137c;
    }
    ctx->pc = 0x141374u;
    {
        const bool branch_taken_0x141374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141374u;
        // 0x141378: 0xe67405d0  swc1        $f20, 0x5D0($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141374) {
            ctx->pc = 0x141390u;
            goto label_141390;
        }
    }
    ctx->pc = 0x14137Cu;
label_14137c:
    // 0x14137c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141380:
    // 0x141380: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x141380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_141384:
    // 0x141384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141388:
    // 0x141388: 0xc0afa66  jal         func_2BE998
label_14138c:
    if (ctx->pc == 0x14138Cu) {
        ctx->pc = 0x14138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141388u;
        // 0x14138c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141390u;
        goto label_141390;
    }
    ctx->pc = 0x141388u;
    SET_GPR_U32(ctx, 31, 0x141390u);
    ctx->pc = 0x14138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141388u;
    // 0x14138c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE998u, 0x141388u, 0x141390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141390u;
label_141390:
    // 0x141390: 0x26847a2c  addiu       $a0, $s4, 0x7A2C
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31276));
label_141394:
    // 0x141394: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x141394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_141398:
    // 0x141398: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_14139c:
    // 0x14139c: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x14139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1413a0:
    // 0x1413a0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1413a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1413a4:
    // 0x1413a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1413a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1413a8:
    // 0x1413a8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1413a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1413ac:
    // 0x1413ac: 0xac83fff8  sw          $v1, -0x8($a0)
    ctx->pc = 0x1413acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 3));
label_1413b0:
    // 0x1413b0: 0x10000081  b           . + 4 + (0x81 << 2)
label_1413b4:
    if (ctx->pc == 0x1413B4u) {
        ctx->pc = 0x1413B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413B0u;
        // 0x1413b4: 0xa22023bc  sb          $zero, 0x23BC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1413B8u;
        goto label_1413b8;
    }
    ctx->pc = 0x1413B0u;
    {
        const bool branch_taken_0x1413b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413B0u;
        // 0x1413b4: 0xa22023bc  sb          $zero, 0x23BC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413b0) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x1413B8u;
label_1413b8:
    // 0x1413b8: 0x862223be  lh          $v0, 0x23BE($s1)
    ctx->pc = 0x1413b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
label_1413bc:
    // 0x1413bc: 0x1c40002d  bgtz        $v0, . + 4 + (0x2D << 2)
label_1413c0:
    if (ctx->pc == 0x1413C0u) {
        ctx->pc = 0x1413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413BCu;
        // 0x1413c0: 0x962323be  lhu         $v1, 0x23BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1413C4u;
        goto label_1413c4;
    }
    ctx->pc = 0x1413BCu;
    {
        const bool branch_taken_0x1413bc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413BCu;
        // 0x1413c0: 0x962323be  lhu         $v1, 0x23BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413bc) {
            ctx->pc = 0x141474u;
            goto label_141474;
        }
    }
    ctx->pc = 0x1413C4u;
label_1413c4:
    // 0x1413c4: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
label_1413c8:
    // 0x1413c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1413cc:
    // 0x1413cc: 0x8d027a78  lw          $v0, 0x7A78($t0)
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31352)));
label_1413d0:
    // 0x1413d0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_1413d4:
    // 0x1413d4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_1413d8:
    // 0x1413d8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1413dc:
    // 0x1413dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1413dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1413e0:
    // 0x1413e0: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x1413e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_1413e4:
    // 0x1413e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1413e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1413e8:
    // 0x1413e8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1413e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1413ec:
    // 0x1413ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1413ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1413f0:
    // 0x1413f0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1413f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1413f4:
    // 0x1413f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1413f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1413f8:
    // 0x1413f8: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x1413f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
label_1413fc:
    // 0x1413fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1413fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_141400:
    // 0x141400: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x141400u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_141404:
    // 0x141404: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141408:
    // 0x141408: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x141408u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_14140c:
    // 0x14140c: 0xad027a78  sw          $v0, 0x7A78($t0)
    ctx->pc = 0x14140cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 2));
label_141410:
    // 0x141410: 0xc0c6f62  jal         func_31BD88
label_141414:
    if (ctx->pc == 0x141414u) {
        ctx->pc = 0x141414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141410u;
        // 0x141414: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141418u;
        goto label_141418;
    }
    ctx->pc = 0x141410u;
    SET_GPR_U32(ctx, 31, 0x141418u);
    ctx->pc = 0x141414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141410u;
    // 0x141414: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD88u, 0x141410u, 0x141418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141418u;
label_141418:
    // 0x141418: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x141418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_14141c:
    // 0x14141c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141420:
    // 0x141420: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x141420u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_141424:
    // 0x141424: 0x0  nop
    ctx->pc = 0x141424u;
    // NOP
label_141428:
    // 0x141428: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
label_14142c:
    // 0x14142c: 0xc0b2f16  jal         func_2CBC58
label_141430:
    if (ctx->pc == 0x141430u) {
        ctx->pc = 0x141430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14142Cu;
        // 0x141430: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141434u;
        goto label_141434;
    }
    ctx->pc = 0x14142Cu;
    SET_GPR_U32(ctx, 31, 0x141434u);
    ctx->pc = 0x141430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14142Cu;
    // 0x141430: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC58u, 0x14142Cu, 0x141434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141434u;
label_141434:
    // 0x141434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141438:
    // 0x141438: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_14143c:
    // 0x14143c: 0x28a20034  slti        $v0, $a1, 0x34
    ctx->pc = 0x14143cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)52) ? 1 : 0);
label_141440:
    // 0x141440: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_141444:
    if (ctx->pc == 0x141444u) {
        ctx->pc = 0x141444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141440u;
        // 0x141444: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141448u;
        goto label_141448;
    }
    ctx->pc = 0x141440u;
    {
        const bool branch_taken_0x141440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141440u;
        // 0x141444: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141440) {
            ctx->pc = 0x141428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141428;
        }
    }
    ctx->pc = 0x141448u;
label_141448:
    // 0x141448: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x141448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
label_14144c:
    // 0x14144c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x14144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_141450:
    // 0x141450: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_141454:
    // 0x141454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x141454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_141458:
    // 0x141458: 0xc0b121a  jal         func_2C4868
label_14145c:
    if (ctx->pc == 0x14145Cu) {
        ctx->pc = 0x14145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141458u;
        // 0x14145c: 0xae627a24  sw          $v0, 0x7A24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141460u;
        goto label_141460;
    }
    ctx->pc = 0x141458u;
    SET_GPR_U32(ctx, 31, 0x141460u);
    ctx->pc = 0x14145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141458u;
    // 0x14145c: 0xae627a24  sw          $v0, 0x7A24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4868u, 0x141458u, 0x141460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141460u;
label_141460:
    // 0x141460: 0x1000002e  b           . + 4 + (0x2E << 2)
label_141464:
    if (ctx->pc == 0x141464u) {
        ctx->pc = 0x141464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141460u;
        // 0x141464: 0x922223bc  lbu         $v0, 0x23BC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141468u;
        goto label_141468;
    }
    ctx->pc = 0x141460u;
    {
        const bool branch_taken_0x141460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141460u;
        // 0x141464: 0x922223bc  lbu         $v0, 0x23BC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141460) {
            ctx->pc = 0x14151Cu;
            goto label_14151c;
        }
    }
    ctx->pc = 0x141468u;
label_141468:
    // 0x141468: 0x862223be  lh          $v0, 0x23BE($s1)
    ctx->pc = 0x141468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
label_14146c:
    // 0x14146c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_141470:
    if (ctx->pc == 0x141470u) {
        ctx->pc = 0x141470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14146Cu;
        // 0x141470: 0x962323be  lhu         $v1, 0x23BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141474u;
        goto label_141474;
    }
    ctx->pc = 0x14146Cu;
    {
        const bool branch_taken_0x14146c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x141470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14146Cu;
        // 0x141470: 0x962323be  lhu         $v1, 0x23BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14146c) {
            ctx->pc = 0x141480u;
            goto label_141480;
        }
    }
    ctx->pc = 0x141474u;
label_141474:
    // 0x141474: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x141474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_141478:
    // 0x141478: 0x1000004f  b           . + 4 + (0x4F << 2)
label_14147c:
    if (ctx->pc == 0x14147Cu) {
        ctx->pc = 0x14147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141478u;
        // 0x14147c: 0xa62223be  sh          $v0, 0x23BE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141480u;
        goto label_141480;
    }
    ctx->pc = 0x141478u;
    {
        const bool branch_taken_0x141478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141478u;
        // 0x14147c: 0xa62223be  sh          $v0, 0x23BE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 9150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141478) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x141480u;
label_141480:
    // 0x141480: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x141480u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
label_141484:
    // 0x141484: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x141484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_141488:
    // 0x141488: 0x8d027a78  lw          $v0, 0x7A78($t0)
    ctx->pc = 0x141488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31352)));
label_14148c:
    // 0x14148c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_141490:
    // 0x141490: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_141494:
    // 0x141494: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_141498:
    // 0x141498: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14149c:
    // 0x14149c: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_1414a0:
    // 0x1414a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1414a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1414a4:
    // 0x1414a4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1414a8:
    // 0x1414a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1414a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1414ac:
    // 0x1414ac: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1414b0:
    // 0x1414b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1414b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1414b4:
    // 0x1414b4: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x1414b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
label_1414b8:
    // 0x1414b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1414b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1414bc:
    // 0x1414bc: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x1414bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_1414c0:
    // 0x1414c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1414c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1414c4:
    // 0x1414c4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1414c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_1414c8:
    // 0x1414c8: 0xad027a78  sw          $v0, 0x7A78($t0)
    ctx->pc = 0x1414c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31352), GPR_U32(ctx, 2));
label_1414cc:
    // 0x1414cc: 0xc0c6f62  jal         func_31BD88
label_1414d0:
    if (ctx->pc == 0x1414D0u) {
        ctx->pc = 0x1414D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414CCu;
        // 0x1414d0: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1414D4u;
        goto label_1414d4;
    }
    ctx->pc = 0x1414CCu;
    SET_GPR_U32(ctx, 31, 0x1414D4u);
    ctx->pc = 0x1414D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414CCu;
    // 0x1414d0: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD88u, 0x1414CCu, 0x1414D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414D4u;
label_1414d4:
    // 0x1414d4: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_1414d8:
    // 0x1414d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1414d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1414dc:
    // 0x1414dc: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x1414dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_1414e0:
    // 0x1414e0: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x1414e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
label_1414e4:
    // 0x1414e4: 0xc0b2f16  jal         func_2CBC58
label_1414e8:
    if (ctx->pc == 0x1414E8u) {
        ctx->pc = 0x1414E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414E4u;
        // 0x1414e8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1414ECu;
        goto label_1414ec;
    }
    ctx->pc = 0x1414E4u;
    SET_GPR_U32(ctx, 31, 0x1414ECu);
    ctx->pc = 0x1414E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414E4u;
    // 0x1414e8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC58u, 0x1414E4u, 0x1414ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414ECu;
label_1414ec:
    // 0x1414ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1414ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1414f0:
    // 0x1414f0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1414f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1414f4:
    // 0x1414f4: 0x28a20034  slti        $v0, $a1, 0x34
    ctx->pc = 0x1414f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)52) ? 1 : 0);
label_1414f8:
    // 0x1414f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1414fc:
    if (ctx->pc == 0x1414FCu) {
        ctx->pc = 0x1414FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414F8u;
        // 0x1414fc: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141500u;
        goto label_141500;
    }
    ctx->pc = 0x1414F8u;
    {
        const bool branch_taken_0x1414f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1414FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414F8u;
        // 0x1414fc: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414f8) {
            ctx->pc = 0x1414E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1414e0;
        }
    }
    ctx->pc = 0x141500u;
label_141500:
    // 0x141500: 0x8e627a24  lw          $v0, 0x7A24($s3)
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31268)));
label_141504:
    // 0x141504: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_141508:
    // 0x141508: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x141508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_14150c:
    // 0x14150c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_141510:
    // 0x141510: 0xc0b12de  jal         func_2C4B78
label_141514:
    if (ctx->pc == 0x141514u) {
        ctx->pc = 0x141514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141510u;
        // 0x141514: 0xae627a24  sw          $v0, 0x7A24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141518u;
        goto label_141518;
    }
    ctx->pc = 0x141510u;
    SET_GPR_U32(ctx, 31, 0x141518u);
    ctx->pc = 0x141514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141510u;
    // 0x141514: 0xae627a24  sw          $v0, 0x7A24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4B78u, 0x141510u, 0x141518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141518u;
label_141518:
    // 0x141518: 0x922223bc  lbu         $v0, 0x23BC($s1)
    ctx->pc = 0x141518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9148)));
label_14151c:
    // 0x14151c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_141520:
    // 0x141520: 0x10000025  b           . + 4 + (0x25 << 2)
label_141524:
    if (ctx->pc == 0x141524u) {
        ctx->pc = 0x141524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141520u;
        // 0x141524: 0xa22223bc  sb          $v0, 0x23BC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141528u;
        goto label_141528;
    }
    ctx->pc = 0x141520u;
    {
        const bool branch_taken_0x141520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141520u;
        // 0x141524: 0xa22223bc  sb          $v0, 0x23BC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141520) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x141528u;
label_141528:
    // 0x141528: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x141528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_14152c:
    // 0x14152c: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x14152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31360)));
label_141530:
    // 0x141530: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x141530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_141534:
    // 0x141534: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x141534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_141538:
    // 0x141538: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_14153c:
    if (ctx->pc == 0x14153Cu) {
        ctx->pc = 0x14153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141538u;
        // 0x14153c: 0x26241dc0  addiu       $a0, $s1, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141540u;
        goto label_141540;
    }
    ctx->pc = 0x141538u;
    {
        const bool branch_taken_0x141538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141538u;
        // 0x14153c: 0x26241dc0  addiu       $a0, $s1, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141538) {
            ctx->pc = 0x1415A8u;
            goto label_1415a8;
        }
    }
    ctx->pc = 0x141540u;
label_141540:
    // 0x141540: 0xc04f3c8  jal         func_13CF20
label_141544:
    if (ctx->pc == 0x141544u) {
        ctx->pc = 0x141544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141540u;
        // 0x141544: 0x263223c0  addiu       $s2, $s1, 0x23C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141548u;
        goto label_141548;
    }
    ctx->pc = 0x141540u;
    SET_GPR_U32(ctx, 31, 0x141548u);
    ctx->pc = 0x141544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141540u;
    // 0x141544: 0x263223c0  addiu       $s2, $s1, 0x23C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CF20u, 0x141540u, 0x141548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141548u;
label_141548:
    // 0x141548: 0x263022f4  addiu       $s0, $s1, 0x22F4
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8948));
label_14154c:
    // 0x14154c: 0xc05018e  jal         func_140638
label_141550:
    if (ctx->pc == 0x141550u) {
        ctx->pc = 0x141550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14154Cu;
        // 0x141550: 0x26241e90  addiu       $a0, $s1, 0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141554u;
        goto label_141554;
    }
    ctx->pc = 0x14154Cu;
    SET_GPR_U32(ctx, 31, 0x141554u);
    ctx->pc = 0x141550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14154Cu;
    // 0x141550: 0x26241e90  addiu       $a0, $s1, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140638u, 0x14154Cu, 0x141554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141554u;
label_141554:
    // 0x141554: 0xc04fae8  jal         func_13EBA0
label_141558:
    if (ctx->pc == 0x141558u) {
        ctx->pc = 0x141558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141554u;
        // 0x141558: 0x26242220  addiu       $a0, $s1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14155Cu;
        goto label_14155c;
    }
    ctx->pc = 0x141554u;
    SET_GPR_U32(ctx, 31, 0x14155Cu);
    ctx->pc = 0x141558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141554u;
    // 0x141558: 0x26242220  addiu       $a0, $s1, 0x2220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EBA0u, 0x141554u, 0x14155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14155Cu;
label_14155c:
    // 0x14155c: 0xc051d18  jal         func_147460
label_141560:
    if (ctx->pc == 0x141560u) {
        ctx->pc = 0x141560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14155Cu;
        // 0x141560: 0x26241a20  addiu       $a0, $s1, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141564u;
        goto label_141564;
    }
    ctx->pc = 0x14155Cu;
    SET_GPR_U32(ctx, 31, 0x141564u);
    ctx->pc = 0x141560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14155Cu;
    // 0x141560: 0x26241a20  addiu       $a0, $s1, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147460u, 0x14155Cu, 0x141564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141564u;
label_141564:
    // 0x141564: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x141564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_141568:
    // 0x141568: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_14156c:
    if (ctx->pc == 0x14156Cu) {
        ctx->pc = 0x14156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141568u;
        // 0x14156c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141570u;
        goto label_141570;
    }
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141568) {
            ctx->pc = 0x14156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141568u;
            // 0x14156c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141594u;
            goto label_141594;
        }
    }
    ctx->pc = 0x141570u;
label_141570:
    // 0x141570: 0x90a20078  lbu         $v0, 0x78($a1)
    ctx->pc = 0x141570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
label_141574:
    // 0x141574: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_141578:
    if (ctx->pc == 0x141578u) {
        ctx->pc = 0x141578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141574u;
        // 0x141578: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14157Cu;
        goto label_14157c;
    }
    ctx->pc = 0x141574u;
    {
        const bool branch_taken_0x141574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141574) {
            ctx->pc = 0x141578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141574u;
            // 0x141578: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141594u;
            goto label_141594;
        }
    }
    ctx->pc = 0x14157Cu;
label_14157c:
    // 0x14157c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x14157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_141580:
    // 0x141580: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x141580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_141584:
    // 0x141584: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_141588:
    // 0x141588: 0x60f809  jalr        $v1
label_14158c:
    if (ctx->pc == 0x14158Cu) {
        ctx->pc = 0x14158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141588u;
        // 0x14158c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141590u;
        goto label_141590;
    }
    ctx->pc = 0x141588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141590u);
        ctx->pc = 0x14158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141588u;
        // 0x14158c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141588u, 0x141590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141590u;
label_141590:
    // 0x141590: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_141594:
    // 0x141594: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x141594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_141598:
    // 0x141598: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_14159c:
    if (ctx->pc == 0x14159Cu) {
        ctx->pc = 0x14159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141598u;
        // 0x14159c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415A0u;
        goto label_1415a0;
    }
    ctx->pc = 0x141598u;
    {
        const bool branch_taken_0x141598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141598) {
            ctx->pc = 0x14159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141598u;
            // 0x14159c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141568;
        }
    }
    ctx->pc = 0x1415A0u;
label_1415a0:
    // 0x1415a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1415a4:
    if (ctx->pc == 0x1415A4u) {
        ctx->pc = 0x1415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A0u;
        // 0x1415a4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415A8u;
        goto label_1415a8;
    }
    ctx->pc = 0x1415A0u;
    {
        const bool branch_taken_0x1415a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A0u;
        // 0x1415a4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415a0) {
            ctx->pc = 0x1415BCu;
            goto label_1415bc;
        }
    }
    ctx->pc = 0x1415A8u;
label_1415a8:
    // 0x1415a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1415ac:
    if (ctx->pc == 0x1415ACu) {
        ctx->pc = 0x1415ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A8u;
        // 0x1415ac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415B0u;
        goto label_1415b0;
    }
    ctx->pc = 0x1415A8u;
    {
        const bool branch_taken_0x1415a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A8u;
        // 0x1415ac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415a8) {
            ctx->pc = 0x1415BCu;
            goto label_1415bc;
        }
    }
    ctx->pc = 0x1415B0u;
label_1415b0:
    // 0x1415b0: 0xc04fc82  jal         func_13F208
label_1415b4:
    if (ctx->pc == 0x1415B4u) {
        ctx->pc = 0x1415B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415B0u;
        // 0x1415b4: 0x26241520  addiu       $a0, $s1, 0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415B8u;
        goto label_1415b8;
    }
    ctx->pc = 0x1415B0u;
    SET_GPR_U32(ctx, 31, 0x1415B8u);
    ctx->pc = 0x1415B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1415B0u;
    // 0x1415b4: 0x26241520  addiu       $a0, $s1, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F208u, 0x1415B0u, 0x1415B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415B8u;
label_1415b8:
    // 0x1415b8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1415b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1415bc:
    // 0x1415bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1415bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1415c0:
    // 0x1415c0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1415c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1415c4:
    // 0x1415c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1415c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1415c8:
    // 0x1415c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1415c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1415cc:
    // 0x1415cc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1415ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1415d0:
    // 0x1415d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1415d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1415d4:
    // 0x1415d4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1415d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1415d8:
    // 0x1415d8: 0x3e00008  jr          $ra
label_1415dc:
    if (ctx->pc == 0x1415DCu) {
        ctx->pc = 0x1415DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415D8u;
        // 0x1415dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415E0u;
        goto label_fallthrough_0x1415d8;
    }
    ctx->pc = 0x1415D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1415DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415D8u;
        // 0x1415dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1415D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1415d8:
    ctx->pc = 0x1415E0u;
}
