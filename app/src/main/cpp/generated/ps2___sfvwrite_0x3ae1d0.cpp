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

// Function: __sfvwrite
// Address: 0x3ae1d0 - 0x3ae598
void ps2___sfvwrite_0x3ae1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfvwrite_0x3ae1d0");
#endif

    switch (ctx->pc) {
        case 0x3ae1d0u: goto label_3ae1d0;
        case 0x3ae1d4u: goto label_3ae1d4;
        case 0x3ae1d8u: goto label_3ae1d8;
        case 0x3ae1dcu: goto label_3ae1dc;
        case 0x3ae1e0u: goto label_3ae1e0;
        case 0x3ae1e4u: goto label_3ae1e4;
        case 0x3ae1e8u: goto label_3ae1e8;
        case 0x3ae1ecu: goto label_3ae1ec;
        case 0x3ae1f0u: goto label_3ae1f0;
        case 0x3ae1f4u: goto label_3ae1f4;
        case 0x3ae1f8u: goto label_3ae1f8;
        case 0x3ae1fcu: goto label_3ae1fc;
        case 0x3ae200u: goto label_3ae200;
        case 0x3ae204u: goto label_3ae204;
        case 0x3ae208u: goto label_3ae208;
        case 0x3ae20cu: goto label_3ae20c;
        case 0x3ae210u: goto label_3ae210;
        case 0x3ae214u: goto label_3ae214;
        case 0x3ae218u: goto label_3ae218;
        case 0x3ae21cu: goto label_3ae21c;
        case 0x3ae220u: goto label_3ae220;
        case 0x3ae224u: goto label_3ae224;
        case 0x3ae228u: goto label_3ae228;
        case 0x3ae22cu: goto label_3ae22c;
        case 0x3ae230u: goto label_3ae230;
        case 0x3ae234u: goto label_3ae234;
        case 0x3ae238u: goto label_3ae238;
        case 0x3ae23cu: goto label_3ae23c;
        case 0x3ae240u: goto label_3ae240;
        case 0x3ae244u: goto label_3ae244;
        case 0x3ae248u: goto label_3ae248;
        case 0x3ae24cu: goto label_3ae24c;
        case 0x3ae250u: goto label_3ae250;
        case 0x3ae254u: goto label_3ae254;
        case 0x3ae258u: goto label_3ae258;
        case 0x3ae25cu: goto label_3ae25c;
        case 0x3ae260u: goto label_3ae260;
        case 0x3ae264u: goto label_3ae264;
        case 0x3ae268u: goto label_3ae268;
        case 0x3ae26cu: goto label_3ae26c;
        case 0x3ae270u: goto label_3ae270;
        case 0x3ae274u: goto label_3ae274;
        case 0x3ae278u: goto label_3ae278;
        case 0x3ae27cu: goto label_3ae27c;
        case 0x3ae280u: goto label_3ae280;
        case 0x3ae284u: goto label_3ae284;
        case 0x3ae288u: goto label_3ae288;
        case 0x3ae28cu: goto label_3ae28c;
        case 0x3ae290u: goto label_3ae290;
        case 0x3ae294u: goto label_3ae294;
        case 0x3ae298u: goto label_3ae298;
        case 0x3ae29cu: goto label_3ae29c;
        case 0x3ae2a0u: goto label_3ae2a0;
        case 0x3ae2a4u: goto label_3ae2a4;
        case 0x3ae2a8u: goto label_3ae2a8;
        case 0x3ae2acu: goto label_3ae2ac;
        case 0x3ae2b0u: goto label_3ae2b0;
        case 0x3ae2b4u: goto label_3ae2b4;
        case 0x3ae2b8u: goto label_3ae2b8;
        case 0x3ae2bcu: goto label_3ae2bc;
        case 0x3ae2c0u: goto label_3ae2c0;
        case 0x3ae2c4u: goto label_3ae2c4;
        case 0x3ae2c8u: goto label_3ae2c8;
        case 0x3ae2ccu: goto label_3ae2cc;
        case 0x3ae2d0u: goto label_3ae2d0;
        case 0x3ae2d4u: goto label_3ae2d4;
        case 0x3ae2d8u: goto label_3ae2d8;
        case 0x3ae2dcu: goto label_3ae2dc;
        case 0x3ae2e0u: goto label_3ae2e0;
        case 0x3ae2e4u: goto label_3ae2e4;
        case 0x3ae2e8u: goto label_3ae2e8;
        case 0x3ae2ecu: goto label_3ae2ec;
        case 0x3ae2f0u: goto label_3ae2f0;
        case 0x3ae2f4u: goto label_3ae2f4;
        case 0x3ae2f8u: goto label_3ae2f8;
        case 0x3ae2fcu: goto label_3ae2fc;
        case 0x3ae300u: goto label_3ae300;
        case 0x3ae304u: goto label_3ae304;
        case 0x3ae308u: goto label_3ae308;
        case 0x3ae30cu: goto label_3ae30c;
        case 0x3ae310u: goto label_3ae310;
        case 0x3ae314u: goto label_3ae314;
        case 0x3ae318u: goto label_3ae318;
        case 0x3ae31cu: goto label_3ae31c;
        case 0x3ae320u: goto label_3ae320;
        case 0x3ae324u: goto label_3ae324;
        case 0x3ae328u: goto label_3ae328;
        case 0x3ae32cu: goto label_3ae32c;
        case 0x3ae330u: goto label_3ae330;
        case 0x3ae334u: goto label_3ae334;
        case 0x3ae338u: goto label_3ae338;
        case 0x3ae33cu: goto label_3ae33c;
        case 0x3ae340u: goto label_3ae340;
        case 0x3ae344u: goto label_3ae344;
        case 0x3ae348u: goto label_3ae348;
        case 0x3ae34cu: goto label_3ae34c;
        case 0x3ae350u: goto label_3ae350;
        case 0x3ae354u: goto label_3ae354;
        case 0x3ae358u: goto label_3ae358;
        case 0x3ae35cu: goto label_3ae35c;
        case 0x3ae360u: goto label_3ae360;
        case 0x3ae364u: goto label_3ae364;
        case 0x3ae368u: goto label_3ae368;
        case 0x3ae36cu: goto label_3ae36c;
        case 0x3ae370u: goto label_3ae370;
        case 0x3ae374u: goto label_3ae374;
        case 0x3ae378u: goto label_3ae378;
        case 0x3ae37cu: goto label_3ae37c;
        case 0x3ae380u: goto label_3ae380;
        case 0x3ae384u: goto label_3ae384;
        case 0x3ae388u: goto label_3ae388;
        case 0x3ae38cu: goto label_3ae38c;
        case 0x3ae390u: goto label_3ae390;
        case 0x3ae394u: goto label_3ae394;
        case 0x3ae398u: goto label_3ae398;
        case 0x3ae39cu: goto label_3ae39c;
        case 0x3ae3a0u: goto label_3ae3a0;
        case 0x3ae3a4u: goto label_3ae3a4;
        case 0x3ae3a8u: goto label_3ae3a8;
        case 0x3ae3acu: goto label_3ae3ac;
        case 0x3ae3b0u: goto label_3ae3b0;
        case 0x3ae3b4u: goto label_3ae3b4;
        case 0x3ae3b8u: goto label_3ae3b8;
        case 0x3ae3bcu: goto label_3ae3bc;
        case 0x3ae3c0u: goto label_3ae3c0;
        case 0x3ae3c4u: goto label_3ae3c4;
        case 0x3ae3c8u: goto label_3ae3c8;
        case 0x3ae3ccu: goto label_3ae3cc;
        case 0x3ae3d0u: goto label_3ae3d0;
        case 0x3ae3d4u: goto label_3ae3d4;
        case 0x3ae3d8u: goto label_3ae3d8;
        case 0x3ae3dcu: goto label_3ae3dc;
        case 0x3ae3e0u: goto label_3ae3e0;
        case 0x3ae3e4u: goto label_3ae3e4;
        case 0x3ae3e8u: goto label_3ae3e8;
        case 0x3ae3ecu: goto label_3ae3ec;
        case 0x3ae3f0u: goto label_3ae3f0;
        case 0x3ae3f4u: goto label_3ae3f4;
        case 0x3ae3f8u: goto label_3ae3f8;
        case 0x3ae3fcu: goto label_3ae3fc;
        case 0x3ae400u: goto label_3ae400;
        case 0x3ae404u: goto label_3ae404;
        case 0x3ae408u: goto label_3ae408;
        case 0x3ae40cu: goto label_3ae40c;
        case 0x3ae410u: goto label_3ae410;
        case 0x3ae414u: goto label_3ae414;
        case 0x3ae418u: goto label_3ae418;
        case 0x3ae41cu: goto label_3ae41c;
        case 0x3ae420u: goto label_3ae420;
        case 0x3ae424u: goto label_3ae424;
        case 0x3ae428u: goto label_3ae428;
        case 0x3ae42cu: goto label_3ae42c;
        case 0x3ae430u: goto label_3ae430;
        case 0x3ae434u: goto label_3ae434;
        case 0x3ae438u: goto label_3ae438;
        case 0x3ae43cu: goto label_3ae43c;
        case 0x3ae440u: goto label_3ae440;
        case 0x3ae444u: goto label_3ae444;
        case 0x3ae448u: goto label_3ae448;
        case 0x3ae44cu: goto label_3ae44c;
        case 0x3ae450u: goto label_3ae450;
        case 0x3ae454u: goto label_3ae454;
        case 0x3ae458u: goto label_3ae458;
        case 0x3ae45cu: goto label_3ae45c;
        case 0x3ae460u: goto label_3ae460;
        case 0x3ae464u: goto label_3ae464;
        case 0x3ae468u: goto label_3ae468;
        case 0x3ae46cu: goto label_3ae46c;
        case 0x3ae470u: goto label_3ae470;
        case 0x3ae474u: goto label_3ae474;
        case 0x3ae478u: goto label_3ae478;
        case 0x3ae47cu: goto label_3ae47c;
        case 0x3ae480u: goto label_3ae480;
        case 0x3ae484u: goto label_3ae484;
        case 0x3ae488u: goto label_3ae488;
        case 0x3ae48cu: goto label_3ae48c;
        case 0x3ae490u: goto label_3ae490;
        case 0x3ae494u: goto label_3ae494;
        case 0x3ae498u: goto label_3ae498;
        case 0x3ae49cu: goto label_3ae49c;
        case 0x3ae4a0u: goto label_3ae4a0;
        case 0x3ae4a4u: goto label_3ae4a4;
        case 0x3ae4a8u: goto label_3ae4a8;
        case 0x3ae4acu: goto label_3ae4ac;
        case 0x3ae4b0u: goto label_3ae4b0;
        case 0x3ae4b4u: goto label_3ae4b4;
        case 0x3ae4b8u: goto label_3ae4b8;
        case 0x3ae4bcu: goto label_3ae4bc;
        case 0x3ae4c0u: goto label_3ae4c0;
        case 0x3ae4c4u: goto label_3ae4c4;
        case 0x3ae4c8u: goto label_3ae4c8;
        case 0x3ae4ccu: goto label_3ae4cc;
        case 0x3ae4d0u: goto label_3ae4d0;
        case 0x3ae4d4u: goto label_3ae4d4;
        case 0x3ae4d8u: goto label_3ae4d8;
        case 0x3ae4dcu: goto label_3ae4dc;
        case 0x3ae4e0u: goto label_3ae4e0;
        case 0x3ae4e4u: goto label_3ae4e4;
        case 0x3ae4e8u: goto label_3ae4e8;
        case 0x3ae4ecu: goto label_3ae4ec;
        case 0x3ae4f0u: goto label_3ae4f0;
        case 0x3ae4f4u: goto label_3ae4f4;
        case 0x3ae4f8u: goto label_3ae4f8;
        case 0x3ae4fcu: goto label_3ae4fc;
        case 0x3ae500u: goto label_3ae500;
        case 0x3ae504u: goto label_3ae504;
        case 0x3ae508u: goto label_3ae508;
        case 0x3ae50cu: goto label_3ae50c;
        case 0x3ae510u: goto label_3ae510;
        case 0x3ae514u: goto label_3ae514;
        case 0x3ae518u: goto label_3ae518;
        case 0x3ae51cu: goto label_3ae51c;
        case 0x3ae520u: goto label_3ae520;
        case 0x3ae524u: goto label_3ae524;
        case 0x3ae528u: goto label_3ae528;
        case 0x3ae52cu: goto label_3ae52c;
        case 0x3ae530u: goto label_3ae530;
        case 0x3ae534u: goto label_3ae534;
        case 0x3ae538u: goto label_3ae538;
        case 0x3ae53cu: goto label_3ae53c;
        case 0x3ae540u: goto label_3ae540;
        case 0x3ae544u: goto label_3ae544;
        case 0x3ae548u: goto label_3ae548;
        case 0x3ae54cu: goto label_3ae54c;
        case 0x3ae550u: goto label_3ae550;
        case 0x3ae554u: goto label_3ae554;
        case 0x3ae558u: goto label_3ae558;
        case 0x3ae55cu: goto label_3ae55c;
        case 0x3ae560u: goto label_3ae560;
        case 0x3ae564u: goto label_3ae564;
        case 0x3ae568u: goto label_3ae568;
        case 0x3ae56cu: goto label_3ae56c;
        case 0x3ae570u: goto label_3ae570;
        case 0x3ae574u: goto label_3ae574;
        case 0x3ae578u: goto label_3ae578;
        case 0x3ae57cu: goto label_3ae57c;
        case 0x3ae580u: goto label_3ae580;
        case 0x3ae584u: goto label_3ae584;
        case 0x3ae588u: goto label_3ae588;
        case 0x3ae58cu: goto label_3ae58c;
        case 0x3ae590u: goto label_3ae590;
        case 0x3ae594u: goto label_3ae594;
        default: break;
    }

    ctx->pc = 0x3ae1d0u;

label_3ae1d0:
    // 0x3ae1d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ae1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3ae1d4:
    // 0x3ae1d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ae1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3ae1d8:
    // 0x3ae1d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3ae1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3ae1dc:
    // 0x3ae1dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ae1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3ae1e0:
    // 0x3ae1e0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3ae1e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ae1e4:
    // 0x3ae1e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ae1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ae1e8:
    // 0x3ae1e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ae1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ae1ec:
    // 0x3ae1ec: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3ae1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3ae1f0:
    // 0x3ae1f0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3ae1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3ae1f4:
    // 0x3ae1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ae1f8:
    // 0x3ae1f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ae1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3ae1fc:
    // 0x3ae1fc: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x3ae1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3ae200:
    // 0x3ae200: 0x124000d3  beqz        $s2, . + 4 + (0xD3 << 2)
label_3ae204:
    if (ctx->pc == 0x3AE204u) {
        ctx->pc = 0x3AE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE200u;
        // 0x3ae204: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE208u;
        goto label_3ae208;
    }
    ctx->pc = 0x3AE200u;
    {
        const bool branch_taken_0x3ae200 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE200u;
        // 0x3ae204: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae200) {
            ctx->pc = 0x3AE550u;
            goto label_3ae550;
        }
    }
    ctx->pc = 0x3AE208u;
label_3ae208:
    // 0x3ae208: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ae208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3ae20c:
    // 0x3ae20c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3ae20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3ae210:
    // 0x3ae210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ae214:
    if (ctx->pc == 0x3AE214u) {
        ctx->pc = 0x3AE218u;
        goto label_3ae218;
    }
    ctx->pc = 0x3AE210u;
    {
        const bool branch_taken_0x3ae210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae210) {
            ctx->pc = 0x3AE224u;
            goto label_3ae224;
        }
    }
    ctx->pc = 0x3AE218u;
label_3ae218:
    // 0x3ae218: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3ae218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ae21c:
    // 0x3ae21c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3ae220:
    if (ctx->pc == 0x3AE220u) {
        ctx->pc = 0x3AE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE21Cu;
        // 0x3ae220: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE224u;
        goto label_3ae224;
    }
    ctx->pc = 0x3AE21Cu;
    {
        const bool branch_taken_0x3ae21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae21c) {
            ctx->pc = 0x3AE220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE21Cu;
            // 0x3ae220: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE238u;
            goto label_3ae238;
        }
    }
    ctx->pc = 0x3AE224u;
label_3ae224:
    // 0x3ae224: 0xc0eb9cc  jal         func_3AE730
label_3ae228:
    if (ctx->pc == 0x3AE228u) {
        ctx->pc = 0x3AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE224u;
        // 0x3ae228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE22Cu;
        goto label_3ae22c;
    }
    ctx->pc = 0x3AE224u;
    SET_GPR_U32(ctx, 31, 0x3AE22Cu);
    ctx->pc = 0x3AE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE224u;
    // 0x3ae228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE730u, 0x3AE224u, 0x3AE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE22Cu;
label_3ae22c:
    // 0x3ae22c: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
label_3ae230:
    if (ctx->pc == 0x3AE230u) {
        ctx->pc = 0x3AE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE22Cu;
        // 0x3ae230: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE234u;
        goto label_3ae234;
    }
    ctx->pc = 0x3AE22Cu;
    {
        const bool branch_taken_0x3ae22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE22Cu;
        // 0x3ae230: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae22c) {
            ctx->pc = 0x3AE568u;
            goto label_3ae568;
        }
    }
    ctx->pc = 0x3AE234u;
label_3ae234:
    // 0x3ae234: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ae234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3ae238:
    // 0x3ae238: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ae238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae23c:
    // 0x3ae23c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ae23cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae240:
    // 0x3ae240: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3ae240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3ae244:
    // 0x3ae244: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3ae248:
    if (ctx->pc == 0x3AE248u) {
        ctx->pc = 0x3AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE244u;
        // 0x3ae248: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE24Cu;
        goto label_3ae24c;
    }
    ctx->pc = 0x3AE244u;
    {
        const bool branch_taken_0x3ae244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE244u;
        // 0x3ae248: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae244) {
            ctx->pc = 0x3AE2B0u;
            goto label_3ae2b0;
        }
    }
    ctx->pc = 0x3AE24Cu;
label_3ae24c:
    // 0x3ae24c: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x3ae24cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3ae250:
    // 0x3ae250: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_3ae254:
    if (ctx->pc == 0x3AE254u) {
        ctx->pc = 0x3AE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE250u;
        // 0x3ae254: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE258u;
        goto label_3ae258;
    }
    ctx->pc = 0x3AE250u;
    {
        const bool branch_taken_0x3ae250 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE250u;
        // 0x3ae254: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae250) {
            ctx->pc = 0x3AE270u;
            goto label_3ae270;
        }
    }
    ctx->pc = 0x3AE258u;
label_3ae258:
    // 0x3ae258: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3ae258u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ae25c:
    // 0x3ae25c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x3ae25cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ae260:
    // 0x3ae260: 0x0  nop
    ctx->pc = 0x3ae260u;
    // NOP
label_3ae264:
    // 0x3ae264: 0x0  nop
    ctx->pc = 0x3ae264u;
    // NOP
label_3ae268:
    // 0x3ae268: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_3ae26c:
    if (ctx->pc == 0x3AE26Cu) {
        ctx->pc = 0x3AE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE268u;
        // 0x3ae26c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE270u;
        goto label_3ae270;
    }
    ctx->pc = 0x3AE268u;
    {
        const bool branch_taken_0x3ae268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE268u;
        // 0x3ae26c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae268) {
            ctx->pc = 0x3AE258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae258;
        }
    }
    ctx->pc = 0x3AE270u;
label_3ae270:
    // 0x3ae270: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x3ae270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_3ae274:
    // 0x3ae274: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3ae274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3ae278:
    // 0x3ae278: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3ae278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ae27c:
    // 0x3ae27c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ae27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ae280:
    // 0x3ae280: 0x60f809  jalr        $v1
label_3ae284:
    if (ctx->pc == 0x3AE284u) {
        ctx->pc = 0x3AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE280u;
        // 0x3ae284: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE288u;
        goto label_3ae288;
    }
    ctx->pc = 0x3AE280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AE288u);
        ctx->pc = 0x3AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE280u;
        // 0x3ae284: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE280u, 0x3AE288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE288u;
label_3ae288:
    // 0x3ae288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae28c:
    // 0x3ae28c: 0x1a0000b2  blez        $s0, . + 4 + (0xB2 << 2)
label_3ae290:
    if (ctx->pc == 0x3AE290u) {
        ctx->pc = 0x3AE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE28Cu;
        // 0x3ae290: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE294u;
        goto label_3ae294;
    }
    ctx->pc = 0x3AE28Cu;
    {
        const bool branch_taken_0x3ae28c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE28Cu;
        // 0x3ae290: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae28c) {
            ctx->pc = 0x3AE558u;
            goto label_3ae558;
        }
    }
    ctx->pc = 0x3AE294u;
label_3ae294:
    // 0x3ae294: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3ae294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3ae298:
    // 0x3ae298: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3ae298u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3ae29c:
    // 0x3ae29c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3ae29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ae2a0:
    // 0x3ae2a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3ae2a4:
    if (ctx->pc == 0x3AE2A4u) {
        ctx->pc = 0x3AE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A0u;
        // 0x3ae2a4: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2A8u;
        goto label_3ae2a8;
    }
    ctx->pc = 0x3AE2A0u;
    {
        const bool branch_taken_0x3ae2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A0u;
        // 0x3ae2a4: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2a0) {
            ctx->pc = 0x3AE250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae250;
        }
    }
    ctx->pc = 0x3AE2A8u;
label_3ae2a8:
    // 0x3ae2a8: 0x100000af  b           . + 4 + (0xAF << 2)
label_3ae2ac:
    if (ctx->pc == 0x3AE2ACu) {
        ctx->pc = 0x3AE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A8u;
        // 0x3ae2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2B0u;
        goto label_3ae2b0;
    }
    ctx->pc = 0x3AE2A8u;
    {
        const bool branch_taken_0x3ae2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A8u;
        // 0x3ae2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2a8) {
            ctx->pc = 0x3AE568u;
            goto label_3ae568;
        }
    }
    ctx->pc = 0x3AE2B0u;
label_3ae2b0:
    // 0x3ae2b0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3ae2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ae2b4:
    // 0x3ae2b4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_3ae2b8:
    if (ctx->pc == 0x3AE2B8u) {
        ctx->pc = 0x3AE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2B4u;
        // 0x3ae2b8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2BCu;
        goto label_3ae2bc;
    }
    ctx->pc = 0x3AE2B4u;
    {
        const bool branch_taken_0x3ae2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2B4u;
        // 0x3ae2b8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2b4) {
            ctx->pc = 0x3AE3F8u;
            goto label_3ae3f8;
        }
    }
    ctx->pc = 0x3AE2BCu;
label_3ae2bc:
    // 0x3ae2bc: 0x0  nop
    ctx->pc = 0x3ae2bcu;
    // NOP
label_3ae2c0:
    // 0x3ae2c0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3ae2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3ae2c4:
    // 0x3ae2c4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_3ae2c8:
    if (ctx->pc == 0x3AE2C8u) {
        ctx->pc = 0x3AE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2C4u;
        // 0x3ae2c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2CCu;
        goto label_3ae2cc;
    }
    ctx->pc = 0x3AE2C4u;
    {
        const bool branch_taken_0x3ae2c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2C4u;
        // 0x3ae2c8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2c4) {
            ctx->pc = 0x3AE2E8u;
            goto label_3ae2e8;
        }
    }
    ctx->pc = 0x3AE2CCu;
label_3ae2cc:
    // 0x3ae2cc: 0x0  nop
    ctx->pc = 0x3ae2ccu;
    // NOP
label_3ae2d0:
    // 0x3ae2d0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3ae2d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ae2d4:
    // 0x3ae2d4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x3ae2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ae2d8:
    // 0x3ae2d8: 0x0  nop
    ctx->pc = 0x3ae2d8u;
    // NOP
label_3ae2dc:
    // 0x3ae2dc: 0x0  nop
    ctx->pc = 0x3ae2dcu;
    // NOP
label_3ae2e0:
    // 0x3ae2e0: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_3ae2e4:
    if (ctx->pc == 0x3AE2E4u) {
        ctx->pc = 0x3AE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2E0u;
        // 0x3ae2e4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2E8u;
        goto label_3ae2e8;
    }
    ctx->pc = 0x3AE2E0u;
    {
        const bool branch_taken_0x3ae2e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2E0u;
        // 0x3ae2e4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2e0) {
            ctx->pc = 0x3AE2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae2d0;
        }
    }
    ctx->pc = 0x3AE2E8u;
label_3ae2e8:
    // 0x3ae2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2ec:
    // 0x3ae2ec: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x3ae2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_3ae2f0:
    // 0x3ae2f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3ae2f4:
    if (ctx->pc == 0x3AE2F4u) {
        ctx->pc = 0x3AE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2F0u;
        // 0x3ae2f4: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2F8u;
        goto label_3ae2f8;
    }
    ctx->pc = 0x3AE2F0u;
    {
        const bool branch_taken_0x3ae2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2F0u;
        // 0x3ae2f4: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2f0) {
            ctx->pc = 0x3AE32Cu;
            goto label_3ae32c;
        }
    }
    ctx->pc = 0x3AE2F8u;
label_3ae2f8:
    // 0x3ae2f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ae2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae2fc:
    // 0x3ae2fc: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x3ae2fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_3ae300:
    // 0x3ae300: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ae300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ae304:
    // 0x3ae304: 0xc0e947d  jal         func_3A51F4
label_3ae308:
    if (ctx->pc == 0x3AE308u) {
        ctx->pc = 0x3AE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE304u;
        // 0x3ae308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE30Cu;
        goto label_3ae30c;
    }
    ctx->pc = 0x3AE304u;
    SET_GPR_U32(ctx, 31, 0x3AE30Cu);
    ctx->pc = 0x3AE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE304u;
    // 0x3ae308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3AE304u, 0x3AE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE30Cu;
label_3ae30c:
    // 0x3ae30c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3ae30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ae310:
    // 0x3ae310: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ae310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae314:
    // 0x3ae314: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3ae314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3ae318:
    // 0x3ae318: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ae318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ae31c:
    // 0x3ae31c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3ae31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3ae320:
    // 0x3ae320: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3ae320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3ae324:
    // 0x3ae324: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3ae328:
    if (ctx->pc == 0x3AE328u) {
        ctx->pc = 0x3AE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE324u;
        // 0x3ae328: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE32Cu;
        goto label_3ae32c;
    }
    ctx->pc = 0x3AE324u;
    {
        const bool branch_taken_0x3ae324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE324u;
        // 0x3ae328: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae324) {
            ctx->pc = 0x3AE3D4u;
            goto label_3ae3d4;
        }
    }
    ctx->pc = 0x3AE32Cu;
label_3ae32c:
    // 0x3ae32c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ae32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae330:
    // 0x3ae330: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3ae330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ae334:
    // 0x3ae334: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3ae334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3ae338:
    // 0x3ae338: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3ae33c:
    if (ctx->pc == 0x3AE33Cu) {
        ctx->pc = 0x3AE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE338u;
        // 0x3ae33c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE340u;
        goto label_3ae340;
    }
    ctx->pc = 0x3AE338u;
    {
        const bool branch_taken_0x3ae338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE338u;
        // 0x3ae33c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae338) {
            ctx->pc = 0x3AE374u;
            goto label_3ae374;
        }
    }
    ctx->pc = 0x3AE340u;
label_3ae340:
    // 0x3ae340: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3ae344:
    if (ctx->pc == 0x3AE344u) {
        ctx->pc = 0x3AE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE340u;
        // 0x3ae344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE348u;
        goto label_3ae348;
    }
    ctx->pc = 0x3AE340u;
    {
        const bool branch_taken_0x3ae340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE340u;
        // 0x3ae344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae340) {
            ctx->pc = 0x3AE374u;
            goto label_3ae374;
        }
    }
    ctx->pc = 0x3AE348u;
label_3ae348:
    // 0x3ae348: 0xc0e947d  jal         func_3A51F4
label_3ae34c:
    if (ctx->pc == 0x3AE34Cu) {
        ctx->pc = 0x3AE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE348u;
        // 0x3ae34c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE350u;
        goto label_3ae350;
    }
    ctx->pc = 0x3AE348u;
    SET_GPR_U32(ctx, 31, 0x3AE350u);
    ctx->pc = 0x3AE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE348u;
    // 0x3ae34c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3AE348u, 0x3AE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE350u;
label_3ae350:
    // 0x3ae350: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae354:
    // 0x3ae354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae358:
    // 0x3ae358: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3ae358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3ae35c:
    // 0x3ae35c: 0xc0e9808  jal         func_3A6020
label_3ae360:
    if (ctx->pc == 0x3AE360u) {
        ctx->pc = 0x3AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE35Cu;
        // 0x3ae360: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE364u;
        goto label_3ae364;
    }
    ctx->pc = 0x3AE35Cu;
    SET_GPR_U32(ctx, 31, 0x3AE364u);
    ctx->pc = 0x3AE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE35Cu;
    // 0x3ae360: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3AE35Cu, 0x3AE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE364u;
label_3ae364:
    // 0x3ae364: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_3ae368:
    if (ctx->pc == 0x3AE368u) {
        ctx->pc = 0x3AE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE364u;
        // 0x3ae368: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE36Cu;
        goto label_3ae36c;
    }
    ctx->pc = 0x3AE364u;
    {
        const bool branch_taken_0x3ae364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae364) {
            ctx->pc = 0x3AE368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE364u;
            // 0x3ae368: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE55Cu;
            goto label_3ae55c;
        }
    }
    ctx->pc = 0x3AE36Cu;
label_3ae36c:
    // 0x3ae36c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3ae370:
    if (ctx->pc == 0x3AE370u) {
        ctx->pc = 0x3AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE36Cu;
        // 0x3ae370: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE374u;
        goto label_3ae374;
    }
    ctx->pc = 0x3AE36Cu;
    {
        const bool branch_taken_0x3ae36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE36Cu;
        // 0x3ae370: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae36c) {
            ctx->pc = 0x3AE3D8u;
            goto label_3ae3d8;
        }
    }
    ctx->pc = 0x3AE374u;
label_3ae374:
    // 0x3ae374: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x3ae374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3ae378:
    // 0x3ae378: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3ae378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3ae37c:
    // 0x3ae37c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3ae380:
    if (ctx->pc == 0x3AE380u) {
        ctx->pc = 0x3AE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE37Cu;
        // 0x3ae380: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE384u;
        goto label_3ae384;
    }
    ctx->pc = 0x3AE37Cu;
    {
        const bool branch_taken_0x3ae37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae37c) {
            ctx->pc = 0x3AE380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE37Cu;
            // 0x3ae380: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE3ACu;
            goto label_3ae3ac;
        }
    }
    ctx->pc = 0x3AE384u;
label_3ae384:
    // 0x3ae384: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3ae384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ae388:
    // 0x3ae388: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ae388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ae38c:
    // 0x3ae38c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3ae38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3ae390:
    // 0x3ae390: 0x40f809  jalr        $v0
label_3ae394:
    if (ctx->pc == 0x3AE394u) {
        ctx->pc = 0x3AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE390u;
        // 0x3ae394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE398u;
        goto label_3ae398;
    }
    ctx->pc = 0x3AE390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE398u);
        ctx->pc = 0x3AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE390u;
        // 0x3ae394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE390u, 0x3AE398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE398u;
label_3ae398:
    // 0x3ae398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae39c:
    // 0x3ae39c: 0x5a00006f  blezl       $s0, . + 4 + (0x6F << 2)
label_3ae3a0:
    if (ctx->pc == 0x3AE3A0u) {
        ctx->pc = 0x3AE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE39Cu;
        // 0x3ae3a0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3A4u;
        goto label_3ae3a4;
    }
    ctx->pc = 0x3AE39Cu;
    {
        const bool branch_taken_0x3ae39c = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x3ae39c) {
            ctx->pc = 0x3AE3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE39Cu;
            // 0x3ae3a0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE55Cu;
            goto label_3ae55c;
        }
    }
    ctx->pc = 0x3AE3A4u;
label_3ae3a4:
    // 0x3ae3a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3ae3a8:
    if (ctx->pc == 0x3AE3A8u) {
        ctx->pc = 0x3AE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3A4u;
        // 0x3ae3a8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3ACu;
        goto label_3ae3ac;
    }
    ctx->pc = 0x3AE3A4u;
    {
        const bool branch_taken_0x3ae3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3A4u;
        // 0x3ae3a8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae3a4) {
            ctx->pc = 0x3AE3D8u;
            goto label_3ae3d8;
        }
    }
    ctx->pc = 0x3AE3ACu;
label_3ae3ac:
    // 0x3ae3ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ae3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae3b0:
    // 0x3ae3b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ae3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3b4:
    // 0x3ae3b4: 0xc0e947d  jal         func_3A51F4
label_3ae3b8:
    if (ctx->pc == 0x3AE3B8u) {
        ctx->pc = 0x3AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3B4u;
        // 0x3ae3b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3BCu;
        goto label_3ae3bc;
    }
    ctx->pc = 0x3AE3B4u;
    SET_GPR_U32(ctx, 31, 0x3AE3BCu);
    ctx->pc = 0x3AE3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3B4u;
    // 0x3ae3b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3AE3B4u, 0x3AE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3BCu;
label_3ae3bc:
    // 0x3ae3bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3ae3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ae3c0:
    // 0x3ae3c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ae3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae3c4:
    // 0x3ae3c4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3ae3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3ae3c8:
    // 0x3ae3c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ae3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ae3cc:
    // 0x3ae3cc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3ae3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3ae3d0:
    // 0x3ae3d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3ae3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3ae3d4:
    // 0x3ae3d4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3ae3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3ae3d8:
    // 0x3ae3d8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3ae3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3ae3dc:
    // 0x3ae3dc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3ae3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3ae3e0:
    // 0x3ae3e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3ae3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ae3e4:
    // 0x3ae3e4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_3ae3e8:
    if (ctx->pc == 0x3AE3E8u) {
        ctx->pc = 0x3AE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3E4u;
        // 0x3ae3e8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3ECu;
        goto label_3ae3ec;
    }
    ctx->pc = 0x3AE3E4u;
    {
        const bool branch_taken_0x3ae3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3E4u;
        // 0x3ae3e8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae3e4) {
            ctx->pc = 0x3AE2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae2c0;
        }
    }
    ctx->pc = 0x3AE3ECu;
label_3ae3ec:
    // 0x3ae3ec: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3ae3f0:
    if (ctx->pc == 0x3AE3F0u) {
        ctx->pc = 0x3AE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3ECu;
        // 0x3ae3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3F4u;
        goto label_3ae3f4;
    }
    ctx->pc = 0x3AE3ECu;
    {
        const bool branch_taken_0x3ae3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3ECu;
        // 0x3ae3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae3ec) {
            ctx->pc = 0x3AE568u;
            goto label_3ae568;
        }
    }
    ctx->pc = 0x3AE3F4u;
label_3ae3f4:
    // 0x3ae3f4: 0x0  nop
    ctx->pc = 0x3ae3f4u;
    // NOP
label_3ae3f8:
    // 0x3ae3f8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_3ae3fc:
    if (ctx->pc == 0x3AE3FCu) {
        ctx->pc = 0x3AE400u;
        goto label_3ae400;
    }
    ctx->pc = 0x3AE3F8u;
    {
        const bool branch_taken_0x3ae3f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae3f8) {
            ctx->pc = 0x3AE420u;
            goto label_3ae420;
        }
    }
    ctx->pc = 0x3AE400u;
label_3ae400:
    // 0x3ae400: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ae400u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae404:
    // 0x3ae404: 0x0  nop
    ctx->pc = 0x3ae404u;
    // NOP
label_3ae408:
    // 0x3ae408: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3ae408u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ae40c:
    // 0x3ae40c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x3ae40cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ae410:
    // 0x3ae410: 0x0  nop
    ctx->pc = 0x3ae410u;
    // NOP
label_3ae414:
    // 0x3ae414: 0x0  nop
    ctx->pc = 0x3ae414u;
    // NOP
label_3ae418:
    // 0x3ae418: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_3ae41c:
    if (ctx->pc == 0x3AE41Cu) {
        ctx->pc = 0x3AE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE418u;
        // 0x3ae41c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE420u;
        goto label_3ae420;
    }
    ctx->pc = 0x3AE418u;
    {
        const bool branch_taken_0x3ae418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE418u;
        // 0x3ae41c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae418) {
            ctx->pc = 0x3AE408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae408;
        }
    }
    ctx->pc = 0x3AE420u;
label_3ae420:
    // 0x3ae420: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_3ae424:
    if (ctx->pc == 0x3AE424u) {
        ctx->pc = 0x3AE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE420u;
        // 0x3ae424: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE428u;
        goto label_3ae428;
    }
    ctx->pc = 0x3AE420u;
    {
        const bool branch_taken_0x3ae420 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae420) {
            ctx->pc = 0x3AE424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE420u;
            // 0x3ae424: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE458u;
            goto label_3ae458;
        }
    }
    ctx->pc = 0x3AE428u;
label_3ae428:
    // 0x3ae428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ae428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ae42c:
    // 0x3ae42c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ae42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ae430:
    // 0x3ae430: 0xc0e93f2  jal         func_3A4FC8
label_3ae434:
    if (ctx->pc == 0x3AE434u) {
        ctx->pc = 0x3AE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE430u;
        // 0x3ae434: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE438u;
        goto label_3ae438;
    }
    ctx->pc = 0x3AE430u;
    SET_GPR_U32(ctx, 31, 0x3AE438u);
    ctx->pc = 0x3AE434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE430u;
    // 0x3ae434: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FC8u, 0x3AE430u, 0x3AE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE438u;
label_3ae438:
    // 0x3ae438: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ae438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae43c:
    // 0x3ae43c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3ae440:
    if (ctx->pc == 0x3AE440u) {
        ctx->pc = 0x3AE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE43Cu;
        // 0x3ae440: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE444u;
        goto label_3ae444;
    }
    ctx->pc = 0x3AE43Cu;
    {
        const bool branch_taken_0x3ae43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE43Cu;
        // 0x3ae440: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae43c) {
            ctx->pc = 0x3AE44Cu;
            goto label_3ae44c;
        }
    }
    ctx->pc = 0x3AE444u;
label_3ae444:
    // 0x3ae444: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ae448:
    if (ctx->pc == 0x3AE448u) {
        ctx->pc = 0x3AE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE444u;
        // 0x3ae448: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE44Cu;
        goto label_3ae44c;
    }
    ctx->pc = 0x3AE444u;
    {
        const bool branch_taken_0x3ae444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE444u;
        // 0x3ae448: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae444) {
            ctx->pc = 0x3AE450u;
            goto label_3ae450;
        }
    }
    ctx->pc = 0x3AE44Cu;
label_3ae44c:
    // 0x3ae44c: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x3ae44cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ae450:
    // 0x3ae450: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3ae450u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ae454:
    // 0x3ae454: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3ae454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3ae458:
    // 0x3ae458: 0x255202b  sltu        $a0, $s2, $s5
    ctx->pc = 0x3ae458u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3ae45c:
    // 0x3ae45c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3ae45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ae460:
    // 0x3ae460: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3ae460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ae464:
    // 0x3ae464: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x3ae464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae468:
    // 0x3ae468: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3ae468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ae46c:
    // 0x3ae46c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3ae46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ae470:
    // 0x3ae470: 0x2a4380a  movz        $a3, $s5, $a0
    ctx->pc = 0x3ae470u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 21));
label_3ae474:
    // 0x3ae474: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3ae474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3ae478:
    // 0x3ae478: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3ae47c:
    if (ctx->pc == 0x3AE47Cu) {
        ctx->pc = 0x3AE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE478u;
        // 0x3ae47c: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE480u;
        goto label_3ae480;
    }
    ctx->pc = 0x3AE478u;
    {
        const bool branch_taken_0x3ae478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE478u;
        // 0x3ae47c: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae478) {
            ctx->pc = 0x3AE4BCu;
            goto label_3ae4bc;
        }
    }
    ctx->pc = 0x3AE480u;
label_3ae480:
    // 0x3ae480: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x3ae480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3ae484:
    // 0x3ae484: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3ae488:
    if (ctx->pc == 0x3AE488u) {
        ctx->pc = 0x3AE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE484u;
        // 0x3ae488: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE48Cu;
        goto label_3ae48c;
    }
    ctx->pc = 0x3AE484u;
    {
        const bool branch_taken_0x3ae484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE484u;
        // 0x3ae488: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae484) {
            ctx->pc = 0x3AE4BCu;
            goto label_3ae4bc;
        }
    }
    ctx->pc = 0x3AE48Cu;
label_3ae48c:
    // 0x3ae48c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ae48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ae490:
    // 0x3ae490: 0xc0e947d  jal         func_3A51F4
label_3ae494:
    if (ctx->pc == 0x3AE494u) {
        ctx->pc = 0x3AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE490u;
        // 0x3ae494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE498u;
        goto label_3ae498;
    }
    ctx->pc = 0x3AE490u;
    SET_GPR_U32(ctx, 31, 0x3AE498u);
    ctx->pc = 0x3AE494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE490u;
    // 0x3ae494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3AE490u, 0x3AE498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE498u;
label_3ae498:
    // 0x3ae498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae49c:
    // 0x3ae49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4a0:
    // 0x3ae4a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3ae4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3ae4a4:
    // 0x3ae4a4: 0xc0e9808  jal         func_3A6020
label_3ae4a8:
    if (ctx->pc == 0x3AE4A8u) {
        ctx->pc = 0x3AE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4A4u;
        // 0x3ae4a8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4ACu;
        goto label_3ae4ac;
    }
    ctx->pc = 0x3AE4A4u;
    SET_GPR_U32(ctx, 31, 0x3AE4ACu);
    ctx->pc = 0x3AE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE4A4u;
    // 0x3ae4a8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3AE4A4u, 0x3AE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE4ACu;
label_3ae4ac:
    // 0x3ae4ac: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_3ae4b0:
    if (ctx->pc == 0x3AE4B0u) {
        ctx->pc = 0x3AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4ACu;
        // 0x3ae4b0: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4B4u;
        goto label_3ae4b4;
    }
    ctx->pc = 0x3AE4ACu;
    {
        const bool branch_taken_0x3ae4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4ACu;
        // 0x3ae4b0: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae4ac) {
            ctx->pc = 0x3AE558u;
            goto label_3ae558;
        }
    }
    ctx->pc = 0x3AE4B4u;
label_3ae4b4:
    // 0x3ae4b4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3ae4b8:
    if (ctx->pc == 0x3AE4B8u) {
        ctx->pc = 0x3AE4BCu;
        goto label_3ae4bc;
    }
    ctx->pc = 0x3AE4B4u;
    {
        const bool branch_taken_0x3ae4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae4b4) {
            ctx->pc = 0x3AE520u;
            goto label_3ae520;
        }
    }
    ctx->pc = 0x3AE4BCu;
label_3ae4bc:
    // 0x3ae4bc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3ae4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4c0:
    // 0x3ae4c0: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3ae4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ae4c4:
    // 0x3ae4c4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3ae4c8:
    if (ctx->pc == 0x3AE4C8u) {
        ctx->pc = 0x3AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4C4u;
        // 0x3ae4c8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4CCu;
        goto label_3ae4cc;
    }
    ctx->pc = 0x3AE4C4u;
    {
        const bool branch_taken_0x3ae4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae4c4) {
            ctx->pc = 0x3AE4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE4C4u;
            // 0x3ae4c8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE4F4u;
            goto label_3ae4f4;
        }
    }
    ctx->pc = 0x3AE4CCu;
label_3ae4cc:
    // 0x3ae4cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3ae4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ae4d0:
    // 0x3ae4d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ae4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4d4:
    // 0x3ae4d4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3ae4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3ae4d8:
    // 0x3ae4d8: 0x40f809  jalr        $v0
label_3ae4dc:
    if (ctx->pc == 0x3AE4DCu) {
        ctx->pc = 0x3AE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4D8u;
        // 0x3ae4dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4E0u;
        goto label_3ae4e0;
    }
    ctx->pc = 0x3AE4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE4E0u);
        ctx->pc = 0x3AE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4D8u;
        // 0x3ae4dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE4D8u, 0x3AE4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE4E0u;
label_3ae4e0:
    // 0x3ae4e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4e4:
    // 0x3ae4e4: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_3ae4e8:
    if (ctx->pc == 0x3AE4E8u) {
        ctx->pc = 0x3AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4E4u;
        // 0x3ae4e8: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4ECu;
        goto label_3ae4ec;
    }
    ctx->pc = 0x3AE4E4u;
    {
        const bool branch_taken_0x3ae4e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4E4u;
        // 0x3ae4e8: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae4e4) {
            ctx->pc = 0x3AE558u;
            goto label_3ae558;
        }
    }
    ctx->pc = 0x3AE4ECu;
label_3ae4ec:
    // 0x3ae4ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_3ae4f0:
    if (ctx->pc == 0x3AE4F0u) {
        ctx->pc = 0x3AE4F4u;
        goto label_3ae4f4;
    }
    ctx->pc = 0x3AE4ECu;
    {
        const bool branch_taken_0x3ae4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae4ec) {
            ctx->pc = 0x3AE520u;
            goto label_3ae520;
        }
    }
    ctx->pc = 0x3AE4F4u;
label_3ae4f4:
    // 0x3ae4f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ae4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae4f8:
    // 0x3ae4f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ae4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4fc:
    // 0x3ae4fc: 0xc0e947d  jal         func_3A51F4
label_3ae500:
    if (ctx->pc == 0x3AE500u) {
        ctx->pc = 0x3AE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4FCu;
        // 0x3ae500: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE504u;
        goto label_3ae504;
    }
    ctx->pc = 0x3AE4FCu;
    SET_GPR_U32(ctx, 31, 0x3AE504u);
    ctx->pc = 0x3AE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE4FCu;
    // 0x3ae500: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3AE4FCu, 0x3AE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE504u;
label_3ae504:
    // 0x3ae504: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3ae504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ae508:
    // 0x3ae508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae50c:
    // 0x3ae50c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3ae50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3ae510:
    // 0x3ae510: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ae510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ae514:
    // 0x3ae514: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3ae514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3ae518:
    // 0x3ae518: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3ae518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3ae51c:
    // 0x3ae51c: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x3ae51cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_3ae520:
    // 0x3ae520: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_3ae524:
    if (ctx->pc == 0x3AE524u) {
        ctx->pc = 0x3AE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE520u;
        // 0x3ae524: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE528u;
        goto label_3ae528;
    }
    ctx->pc = 0x3AE520u;
    {
        const bool branch_taken_0x3ae520 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae520) {
            ctx->pc = 0x3AE524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE520u;
            // 0x3ae524: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE53Cu;
            goto label_3ae53c;
        }
    }
    ctx->pc = 0x3AE528u;
label_3ae528:
    // 0x3ae528: 0xc0e9808  jal         func_3A6020
label_3ae52c:
    if (ctx->pc == 0x3AE52Cu) {
        ctx->pc = 0x3AE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE528u;
        // 0x3ae52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE530u;
        goto label_3ae530;
    }
    ctx->pc = 0x3AE528u;
    SET_GPR_U32(ctx, 31, 0x3AE530u);
    ctx->pc = 0x3AE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE528u;
    // 0x3ae52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3AE528u, 0x3AE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE530u;
label_3ae530:
    // 0x3ae530: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ae534:
    if (ctx->pc == 0x3AE534u) {
        ctx->pc = 0x3AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE530u;
        // 0x3ae534: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE538u;
        goto label_3ae538;
    }
    ctx->pc = 0x3AE530u;
    {
        const bool branch_taken_0x3ae530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE530u;
        // 0x3ae534: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae530) {
            ctx->pc = 0x3AE558u;
            goto label_3ae558;
        }
    }
    ctx->pc = 0x3AE538u;
label_3ae538:
    // 0x3ae538: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3ae538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3ae53c:
    // 0x3ae53c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3ae53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3ae540:
    // 0x3ae540: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3ae540u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3ae544:
    // 0x3ae544: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ae548:
    // 0x3ae548: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_3ae54c:
    if (ctx->pc == 0x3AE54Cu) {
        ctx->pc = 0x3AE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE548u;
        // 0x3ae54c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE550u;
        goto label_3ae550;
    }
    ctx->pc = 0x3AE548u;
    {
        const bool branch_taken_0x3ae548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE548u;
        // 0x3ae54c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae548) {
            ctx->pc = 0x3AE3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae3f8;
        }
    }
    ctx->pc = 0x3AE550u;
label_3ae550:
    // 0x3ae550: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ae554:
    if (ctx->pc == 0x3AE554u) {
        ctx->pc = 0x3AE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE550u;
        // 0x3ae554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE558u;
        goto label_3ae558;
    }
    ctx->pc = 0x3AE550u;
    {
        const bool branch_taken_0x3ae550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE550u;
        // 0x3ae554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae550) {
            ctx->pc = 0x3AE568u;
            goto label_3ae568;
        }
    }
    ctx->pc = 0x3AE558u;
label_3ae558:
    // 0x3ae558: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3ae558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3ae55c:
    // 0x3ae55c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ae560:
    // 0x3ae560: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ae560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3ae564:
    // 0x3ae564: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x3ae564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_3ae568:
    // 0x3ae568: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ae568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ae56c:
    // 0x3ae56c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ae56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ae570:
    // 0x3ae570: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ae570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ae574:
    // 0x3ae574: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ae574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ae578:
    // 0x3ae578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ae578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ae57c:
    // 0x3ae57c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3ae57cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae580:
    // 0x3ae580: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3ae580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae584:
    // 0x3ae584: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3ae584u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae588:
    // 0x3ae588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae58c:
    // 0x3ae58c: 0x3e00008  jr          $ra
label_3ae590:
    if (ctx->pc == 0x3AE590u) {
        ctx->pc = 0x3AE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE58Cu;
        // 0x3ae590: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE594u;
        goto label_3ae594;
    }
    ctx->pc = 0x3AE58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE58Cu;
        // 0x3ae590: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE594u;
label_3ae594:
    // 0x3ae594: 0x0  nop
    ctx->pc = 0x3ae594u;
    // NOP
    ctx->pc = 0x3ae598u;
}
