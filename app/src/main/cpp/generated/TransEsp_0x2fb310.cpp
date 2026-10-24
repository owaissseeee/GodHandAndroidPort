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

// Function: TransEsp
// Address: 0x2fb310 - 0x2fb4c0
void TransEsp_0x2fb310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransEsp_0x2fb310");
#endif

    switch (ctx->pc) {
        case 0x2fb310u: goto label_2fb310;
        case 0x2fb314u: goto label_2fb314;
        case 0x2fb318u: goto label_2fb318;
        case 0x2fb31cu: goto label_2fb31c;
        case 0x2fb320u: goto label_2fb320;
        case 0x2fb324u: goto label_2fb324;
        case 0x2fb328u: goto label_2fb328;
        case 0x2fb32cu: goto label_2fb32c;
        case 0x2fb330u: goto label_2fb330;
        case 0x2fb334u: goto label_2fb334;
        case 0x2fb338u: goto label_2fb338;
        case 0x2fb33cu: goto label_2fb33c;
        case 0x2fb340u: goto label_2fb340;
        case 0x2fb344u: goto label_2fb344;
        case 0x2fb348u: goto label_2fb348;
        case 0x2fb34cu: goto label_2fb34c;
        case 0x2fb350u: goto label_2fb350;
        case 0x2fb354u: goto label_2fb354;
        case 0x2fb358u: goto label_2fb358;
        case 0x2fb35cu: goto label_2fb35c;
        case 0x2fb360u: goto label_2fb360;
        case 0x2fb364u: goto label_2fb364;
        case 0x2fb368u: goto label_2fb368;
        case 0x2fb36cu: goto label_2fb36c;
        case 0x2fb370u: goto label_2fb370;
        case 0x2fb374u: goto label_2fb374;
        case 0x2fb378u: goto label_2fb378;
        case 0x2fb37cu: goto label_2fb37c;
        case 0x2fb380u: goto label_2fb380;
        case 0x2fb384u: goto label_2fb384;
        case 0x2fb388u: goto label_2fb388;
        case 0x2fb38cu: goto label_2fb38c;
        case 0x2fb390u: goto label_2fb390;
        case 0x2fb394u: goto label_2fb394;
        case 0x2fb398u: goto label_2fb398;
        case 0x2fb39cu: goto label_2fb39c;
        case 0x2fb3a0u: goto label_2fb3a0;
        case 0x2fb3a4u: goto label_2fb3a4;
        case 0x2fb3a8u: goto label_2fb3a8;
        case 0x2fb3acu: goto label_2fb3ac;
        case 0x2fb3b0u: goto label_2fb3b0;
        case 0x2fb3b4u: goto label_2fb3b4;
        case 0x2fb3b8u: goto label_2fb3b8;
        case 0x2fb3bcu: goto label_2fb3bc;
        case 0x2fb3c0u: goto label_2fb3c0;
        case 0x2fb3c4u: goto label_2fb3c4;
        case 0x2fb3c8u: goto label_2fb3c8;
        case 0x2fb3ccu: goto label_2fb3cc;
        case 0x2fb3d0u: goto label_2fb3d0;
        case 0x2fb3d4u: goto label_2fb3d4;
        case 0x2fb3d8u: goto label_2fb3d8;
        case 0x2fb3dcu: goto label_2fb3dc;
        case 0x2fb3e0u: goto label_2fb3e0;
        case 0x2fb3e4u: goto label_2fb3e4;
        case 0x2fb3e8u: goto label_2fb3e8;
        case 0x2fb3ecu: goto label_2fb3ec;
        case 0x2fb3f0u: goto label_2fb3f0;
        case 0x2fb3f4u: goto label_2fb3f4;
        case 0x2fb3f8u: goto label_2fb3f8;
        case 0x2fb3fcu: goto label_2fb3fc;
        case 0x2fb400u: goto label_2fb400;
        case 0x2fb404u: goto label_2fb404;
        case 0x2fb408u: goto label_2fb408;
        case 0x2fb40cu: goto label_2fb40c;
        case 0x2fb410u: goto label_2fb410;
        case 0x2fb414u: goto label_2fb414;
        case 0x2fb418u: goto label_2fb418;
        case 0x2fb41cu: goto label_2fb41c;
        case 0x2fb420u: goto label_2fb420;
        case 0x2fb424u: goto label_2fb424;
        case 0x2fb428u: goto label_2fb428;
        case 0x2fb42cu: goto label_2fb42c;
        case 0x2fb430u: goto label_2fb430;
        case 0x2fb434u: goto label_2fb434;
        case 0x2fb438u: goto label_2fb438;
        case 0x2fb43cu: goto label_2fb43c;
        case 0x2fb440u: goto label_2fb440;
        case 0x2fb444u: goto label_2fb444;
        case 0x2fb448u: goto label_2fb448;
        case 0x2fb44cu: goto label_2fb44c;
        case 0x2fb450u: goto label_2fb450;
        case 0x2fb454u: goto label_2fb454;
        case 0x2fb458u: goto label_2fb458;
        case 0x2fb45cu: goto label_2fb45c;
        case 0x2fb460u: goto label_2fb460;
        case 0x2fb464u: goto label_2fb464;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb46cu: goto label_2fb46c;
        case 0x2fb470u: goto label_2fb470;
        case 0x2fb474u: goto label_2fb474;
        case 0x2fb478u: goto label_2fb478;
        case 0x2fb47cu: goto label_2fb47c;
        case 0x2fb480u: goto label_2fb480;
        case 0x2fb484u: goto label_2fb484;
        case 0x2fb488u: goto label_2fb488;
        case 0x2fb48cu: goto label_2fb48c;
        case 0x2fb490u: goto label_2fb490;
        case 0x2fb494u: goto label_2fb494;
        case 0x2fb498u: goto label_2fb498;
        case 0x2fb49cu: goto label_2fb49c;
        case 0x2fb4a0u: goto label_2fb4a0;
        case 0x2fb4a4u: goto label_2fb4a4;
        case 0x2fb4a8u: goto label_2fb4a8;
        case 0x2fb4acu: goto label_2fb4ac;
        case 0x2fb4b0u: goto label_2fb4b0;
        case 0x2fb4b4u: goto label_2fb4b4;
        case 0x2fb4b8u: goto label_2fb4b8;
        case 0x2fb4bcu: goto label_2fb4bc;
        default: break;
    }

    ctx->pc = 0x2fb310u;

label_2fb310:
    // 0x2fb310: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fb310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2fb314:
    // 0x2fb314: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fb314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fb318:
    // 0x2fb318: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2fb31c:
    // 0x2fb31c: 0x24467a84  addiu       $a2, $v0, 0x7A84
    ctx->pc = 0x2fb31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
label_2fb320:
    // 0x2fb320: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fb320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2fb324:
    // 0x2fb324: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2fb324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2fb328:
    // 0x2fb328: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fb328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2fb32c:
    // 0x2fb32c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fb32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2fb330:
    // 0x2fb330: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2fb330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2fb334:
    // 0x2fb334: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2fb334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2fb338:
    // 0x2fb338: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2fb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2fb33c:
    // 0x2fb33c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2fb33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2fb340:
    // 0x2fb340: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2fb340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2fb344:
    // 0x2fb344: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2fb344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2fb348:
    // 0x2fb348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fb34c:
    // 0x2fb34c: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_2fb350:
    // 0x2fb350: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x2fb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_2fb354:
    // 0x2fb354: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2fb354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2fb358:
    // 0x2fb358: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fb35c:
    // 0x2fb35c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_2fb360:
    if (ctx->pc == 0x2FB360u) {
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB364u;
        goto label_2fb364;
    }
    ctx->pc = 0x2FB35Cu;
    {
        const bool branch_taken_0x2fb35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb35c) {
            ctx->pc = 0x2FB490u;
            goto label_2fb490;
        }
    }
    ctx->pc = 0x2FB364u;
label_2fb364:
    // 0x2fb364: 0x8cc2ffa8  lw          $v0, -0x58($a2)
    ctx->pc = 0x2fb364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967208)));
label_2fb368:
    // 0x2fb368: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2fb368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2fb36c:
    // 0x2fb36c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_2fb370:
    if (ctx->pc == 0x2FB370u) {
        ctx->pc = 0x2FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB36Cu;
        // 0x2fb370: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB374u;
        goto label_2fb374;
    }
    ctx->pc = 0x2FB36Cu;
    {
        const bool branch_taken_0x2fb36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB36Cu;
        // 0x2fb370: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb36c) {
            ctx->pc = 0x2FB494u;
            goto label_2fb494;
        }
    }
    ctx->pc = 0x2FB374u;
label_2fb374:
    // 0x2fb374: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fb378:
    // 0x2fb378: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
label_2fb37c:
    // 0x2fb37c: 0x245eb7c0  addiu       $fp, $v0, -0x4840
    ctx->pc = 0x2fb37cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
label_2fb380:
    // 0x2fb380: 0x2477b840  addiu       $s7, $v1, -0x47C0
    ctx->pc = 0x2fb380u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
label_2fb384:
    // 0x2fb384: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2fb388:
    // 0x2fb388: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2fb38c:
    // 0x2fb38c: 0x2456b8c0  addiu       $s6, $v0, -0x4740
    ctx->pc = 0x2fb38cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
label_2fb390:
    // 0x2fb390: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
label_2fb394:
    // 0x2fb394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb398:
    // 0x2fb398: 0x3c150400  lui         $s5, 0x400
    ctx->pc = 0x2fb398u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1024 << 16));
label_2fb39c:
    // 0x2fb39c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2fb39cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_2fb3a0:
    // 0x2fb3a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fb3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb3a4:
    // 0x2fb3a4: 0x0  nop
    ctx->pc = 0x2fb3a4u;
    // NOP
label_2fb3a8:
    // 0x2fb3a8: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_2fb3ac:
    // 0x2fb3ac: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_2fb3b0:
    // 0x2fb3b0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fb3b4:
    // 0x2fb3b4: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x2fb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
label_2fb3b8:
    // 0x2fb3b8: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x2fb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_2fb3bc:
    // 0x2fb3bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb3c0:
    // 0x2fb3c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fb3c4:
    // 0x2fb3c4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2fb3c8:
    if (ctx->pc == 0x2FB3C8u) {
        ctx->pc = 0x2FB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C4u;
        // 0x2fb3c8: 0xb71821  addu        $v1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3CCu;
        goto label_2fb3cc;
    }
    ctx->pc = 0x2FB3C4u;
    {
        const bool branch_taken_0x2fb3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C4u;
        // 0x2fb3c8: 0xb71821  addu        $v1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3c4) {
            ctx->pc = 0x2FB480u;
            goto label_2fb480;
        }
    }
    ctx->pc = 0x2FB3CCu;
label_2fb3cc:
    // 0x2fb3cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb3d0:
    // 0x2fb3d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fb3d4:
    // 0x2fb3d4: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_2fb3d8:
    if (ctx->pc == 0x2FB3D8u) {
        ctx->pc = 0x2FB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3D4u;
        // 0x2fb3d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3DCu;
        goto label_2fb3dc;
    }
    ctx->pc = 0x2FB3D4u;
    {
        const bool branch_taken_0x2fb3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb3d4) {
            ctx->pc = 0x2FB3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB3D4u;
            // 0x2fb3d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB484u;
            goto label_2fb484;
        }
    }
    ctx->pc = 0x2FB3DCu;
label_2fb3dc:
    // 0x2fb3dc: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_2fb3e0:
    // 0x2fb3e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb3e4:
    // 0x2fb3e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2fb3e8:
    // 0x2fb3e8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_2fb3ec:
    if (ctx->pc == 0x2FB3ECu) {
        ctx->pc = 0x2FB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3E8u;
        // 0x2fb3ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3F0u;
        goto label_2fb3f0;
    }
    ctx->pc = 0x2FB3E8u;
    {
        const bool branch_taken_0x2fb3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb3e8) {
            ctx->pc = 0x2FB3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB3E8u;
            // 0x2fb3ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB484u;
            goto label_2fb484;
        }
    }
    ctx->pc = 0x2FB3F0u;
label_2fb3f0:
    // 0x2fb3f0: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2fb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_2fb3f4:
    // 0x2fb3f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2fb3f8:
    if (ctx->pc == 0x2FB3F8u) {
        ctx->pc = 0x2FB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3F4u;
        // 0x2fb3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3FCu;
        goto label_2fb3fc;
    }
    ctx->pc = 0x2FB3F4u;
    {
        const bool branch_taken_0x2fb3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3F4u;
        // 0x2fb3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3f4) {
            ctx->pc = 0x2FB40Cu;
            goto label_2fb40c;
        }
    }
    ctx->pc = 0x2FB3FCu;
label_2fb3fc:
    // 0x2fb3fc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2fb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_2fb400:
    // 0x2fb400: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2fb404:
    // 0x2fb404: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_2fb408:
    if (ctx->pc == 0x2FB408u) {
        ctx->pc = 0x2FB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB404u;
        // 0x2fb408: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB40Cu;
        goto label_2fb40c;
    }
    ctx->pc = 0x2FB404u;
    {
        const bool branch_taken_0x2fb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb404) {
            ctx->pc = 0x2FB408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB404u;
            // 0x2fb408: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB484u;
            goto label_2fb484;
        }
    }
    ctx->pc = 0x2FB40Cu;
label_2fb40c:
    // 0x2fb40c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2fb410:
    if (ctx->pc == 0x2FB410u) {
        ctx->pc = 0x2FB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB40Cu;
        // 0x2fb410: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB414u;
        goto label_2fb414;
    }
    ctx->pc = 0x2FB40Cu;
    {
        const bool branch_taken_0x2fb40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB40Cu;
        // 0x2fb410: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb40c) {
            ctx->pc = 0x2FB424u;
            goto label_2fb424;
        }
    }
    ctx->pc = 0x2FB414u;
label_2fb414:
    // 0x2fb414: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2fb414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_2fb418:
    // 0x2fb418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fb418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb41c:
    // 0x2fb41c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2fb420:
    // 0x2fb420: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2fb420u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2fb424:
    // 0x2fb424: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_2fb428:
    if (ctx->pc == 0x2FB428u) {
        ctx->pc = 0x2FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB424u;
        // 0x2fb428: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB42Cu;
        goto label_2fb42c;
    }
    ctx->pc = 0x2FB424u;
    {
        const bool branch_taken_0x2fb424 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb424) {
            ctx->pc = 0x2FB428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB424u;
            // 0x2fb428: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB470u;
            goto label_2fb470;
        }
    }
    ctx->pc = 0x2FB42Cu;
label_2fb42c:
    // 0x2fb42c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2fb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2fb430:
    // 0x2fb430: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2fb430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2fb434:
    // 0x2fb434: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2fb438:
    if (ctx->pc == 0x2FB438u) {
        ctx->pc = 0x2FB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB434u;
        // 0x2fb438: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB43Cu;
        goto label_2fb43c;
    }
    ctx->pc = 0x2FB434u;
    {
        const bool branch_taken_0x2fb434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb434) {
            ctx->pc = 0x2FB438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB434u;
            // 0x2fb438: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB470u;
            goto label_2fb470;
        }
    }
    ctx->pc = 0x2FB43Cu;
label_2fb43c:
    // 0x2fb43c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x2fb43cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
label_2fb440:
    // 0x2fb440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fb440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fb444:
    // 0x2fb444: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2fb448:
    if (ctx->pc == 0x2FB448u) {
        ctx->pc = 0x2FB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB444u;
        // 0x2fb448: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB44Cu;
        goto label_2fb44c;
    }
    ctx->pc = 0x2FB444u;
    {
        const bool branch_taken_0x2fb444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB444u;
        // 0x2fb448: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb444) {
            ctx->pc = 0x2FB45Cu;
            goto label_2fb45c;
        }
    }
    ctx->pc = 0x2FB44Cu;
label_2fb44c:
    // 0x2fb44c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_2fb450:
    if (ctx->pc == 0x2FB450u) {
        ctx->pc = 0x2FB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB44Cu;
        // 0x2fb450: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB454u;
        goto label_2fb454;
    }
    ctx->pc = 0x2FB44Cu;
    {
        const bool branch_taken_0x2fb44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb44c) {
            ctx->pc = 0x2FB450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB44Cu;
            // 0x2fb450: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB484u;
            goto label_2fb484;
        }
    }
    ctx->pc = 0x2FB454u;
label_2fb454:
    // 0x2fb454: 0x10000006  b           . + 4 + (0x6 << 2)
label_2fb458:
    if (ctx->pc == 0x2FB458u) {
        ctx->pc = 0x2FB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB454u;
        // 0x2fb458: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB45Cu;
        goto label_2fb45c;
    }
    ctx->pc = 0x2FB454u;
    {
        const bool branch_taken_0x2fb454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB454u;
        // 0x2fb458: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb454) {
            ctx->pc = 0x2FB470u;
            goto label_2fb470;
        }
    }
    ctx->pc = 0x2FB45Cu;
label_2fb45c:
    // 0x2fb45c: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2fb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_2fb460:
    // 0x2fb460: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2fb460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_2fb464:
    // 0x2fb464: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2fb468:
    if (ctx->pc == 0x2FB468u) {
        ctx->pc = 0x2FB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB464u;
        // 0x2fb468: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB46Cu;
        goto label_2fb46c;
    }
    ctx->pc = 0x2FB464u;
    {
        const bool branch_taken_0x2fb464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb464) {
            ctx->pc = 0x2FB468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB464u;
            // 0x2fb468: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB484u;
            goto label_2fb484;
        }
    }
    ctx->pc = 0x2FB46Cu;
label_2fb46c:
    // 0x2fb46c: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x2fb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_2fb470:
    // 0x2fb470: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x2fb470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_2fb474:
    // 0x2fb474: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2fb474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2fb478:
    // 0x2fb478: 0x60f809  jalr        $v1
label_2fb47c:
    if (ctx->pc == 0x2FB47Cu) {
        ctx->pc = 0x2FB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB478u;
        // 0x2fb47c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB480u;
        goto label_2fb480;
    }
    ctx->pc = 0x2FB478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FB480u);
        ctx->pc = 0x2FB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB478u;
        // 0x2fb47c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB478u, 0x2FB480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB480u;
label_2fb480:
    // 0x2fb480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb484:
    // 0x2fb484: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fb484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
label_2fb488:
    // 0x2fb488: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_2fb48c:
    if (ctx->pc == 0x2FB48Cu) {
        ctx->pc = 0x2FB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB488u;
        // 0x2fb48c: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB490u;
        goto label_2fb490;
    }
    ctx->pc = 0x2FB488u;
    {
        const bool branch_taken_0x2fb488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB488u;
        // 0x2fb48c: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb488) {
            ctx->pc = 0x2FB3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb3a8;
        }
    }
    ctx->pc = 0x2FB490u;
label_2fb490:
    // 0x2fb490: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fb490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fb494:
    // 0x2fb494: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fb494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2fb498:
    // 0x2fb498: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fb498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fb49c:
    // 0x2fb49c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2fb49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fb4a0:
    // 0x2fb4a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fb4a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fb4a4:
    // 0x2fb4a4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2fb4a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fb4a8:
    // 0x2fb4a8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2fb4a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fb4ac:
    // 0x2fb4ac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2fb4acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb4b0:
    // 0x2fb4b0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2fb4b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb4b4:
    // 0x2fb4b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb4b8:
    // 0x2fb4b8: 0x3e00008  jr          $ra
label_2fb4bc:
    if (ctx->pc == 0x2FB4BCu) {
        ctx->pc = 0x2FB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4B8u;
        // 0x2fb4bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4C0u;
        goto label_fallthrough_0x2fb4b8;
    }
    ctx->pc = 0x2FB4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4B8u;
        // 0x2fb4bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fb4b8:
    ctx->pc = 0x2FB4C0u;
}
