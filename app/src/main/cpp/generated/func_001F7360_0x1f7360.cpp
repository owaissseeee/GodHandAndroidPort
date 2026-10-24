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

// Function: func_001F7360
// Address: 0x1f7360 - 0x1f75b0
void func_001F7360_0x1f7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7360_0x1f7360");
#endif

    switch (ctx->pc) {
        case 0x1f7360u: goto label_1f7360;
        case 0x1f7364u: goto label_1f7364;
        case 0x1f7368u: goto label_1f7368;
        case 0x1f736cu: goto label_1f736c;
        case 0x1f7370u: goto label_1f7370;
        case 0x1f7374u: goto label_1f7374;
        case 0x1f7378u: goto label_1f7378;
        case 0x1f737cu: goto label_1f737c;
        case 0x1f7380u: goto label_1f7380;
        case 0x1f7384u: goto label_1f7384;
        case 0x1f7388u: goto label_1f7388;
        case 0x1f738cu: goto label_1f738c;
        case 0x1f7390u: goto label_1f7390;
        case 0x1f7394u: goto label_1f7394;
        case 0x1f7398u: goto label_1f7398;
        case 0x1f739cu: goto label_1f739c;
        case 0x1f73a0u: goto label_1f73a0;
        case 0x1f73a4u: goto label_1f73a4;
        case 0x1f73a8u: goto label_1f73a8;
        case 0x1f73acu: goto label_1f73ac;
        case 0x1f73b0u: goto label_1f73b0;
        case 0x1f73b4u: goto label_1f73b4;
        case 0x1f73b8u: goto label_1f73b8;
        case 0x1f73bcu: goto label_1f73bc;
        case 0x1f73c0u: goto label_1f73c0;
        case 0x1f73c4u: goto label_1f73c4;
        case 0x1f73c8u: goto label_1f73c8;
        case 0x1f73ccu: goto label_1f73cc;
        case 0x1f73d0u: goto label_1f73d0;
        case 0x1f73d4u: goto label_1f73d4;
        case 0x1f73d8u: goto label_1f73d8;
        case 0x1f73dcu: goto label_1f73dc;
        case 0x1f73e0u: goto label_1f73e0;
        case 0x1f73e4u: goto label_1f73e4;
        case 0x1f73e8u: goto label_1f73e8;
        case 0x1f73ecu: goto label_1f73ec;
        case 0x1f73f0u: goto label_1f73f0;
        case 0x1f73f4u: goto label_1f73f4;
        case 0x1f73f8u: goto label_1f73f8;
        case 0x1f73fcu: goto label_1f73fc;
        case 0x1f7400u: goto label_1f7400;
        case 0x1f7404u: goto label_1f7404;
        case 0x1f7408u: goto label_1f7408;
        case 0x1f740cu: goto label_1f740c;
        case 0x1f7410u: goto label_1f7410;
        case 0x1f7414u: goto label_1f7414;
        case 0x1f7418u: goto label_1f7418;
        case 0x1f741cu: goto label_1f741c;
        case 0x1f7420u: goto label_1f7420;
        case 0x1f7424u: goto label_1f7424;
        case 0x1f7428u: goto label_1f7428;
        case 0x1f742cu: goto label_1f742c;
        case 0x1f7430u: goto label_1f7430;
        case 0x1f7434u: goto label_1f7434;
        case 0x1f7438u: goto label_1f7438;
        case 0x1f743cu: goto label_1f743c;
        case 0x1f7440u: goto label_1f7440;
        case 0x1f7444u: goto label_1f7444;
        case 0x1f7448u: goto label_1f7448;
        case 0x1f744cu: goto label_1f744c;
        case 0x1f7450u: goto label_1f7450;
        case 0x1f7454u: goto label_1f7454;
        case 0x1f7458u: goto label_1f7458;
        case 0x1f745cu: goto label_1f745c;
        case 0x1f7460u: goto label_1f7460;
        case 0x1f7464u: goto label_1f7464;
        case 0x1f7468u: goto label_1f7468;
        case 0x1f746cu: goto label_1f746c;
        case 0x1f7470u: goto label_1f7470;
        case 0x1f7474u: goto label_1f7474;
        case 0x1f7478u: goto label_1f7478;
        case 0x1f747cu: goto label_1f747c;
        case 0x1f7480u: goto label_1f7480;
        case 0x1f7484u: goto label_1f7484;
        case 0x1f7488u: goto label_1f7488;
        case 0x1f748cu: goto label_1f748c;
        case 0x1f7490u: goto label_1f7490;
        case 0x1f7494u: goto label_1f7494;
        case 0x1f7498u: goto label_1f7498;
        case 0x1f749cu: goto label_1f749c;
        case 0x1f74a0u: goto label_1f74a0;
        case 0x1f74a4u: goto label_1f74a4;
        case 0x1f74a8u: goto label_1f74a8;
        case 0x1f74acu: goto label_1f74ac;
        case 0x1f74b0u: goto label_1f74b0;
        case 0x1f74b4u: goto label_1f74b4;
        case 0x1f74b8u: goto label_1f74b8;
        case 0x1f74bcu: goto label_1f74bc;
        case 0x1f74c0u: goto label_1f74c0;
        case 0x1f74c4u: goto label_1f74c4;
        case 0x1f74c8u: goto label_1f74c8;
        case 0x1f74ccu: goto label_1f74cc;
        case 0x1f74d0u: goto label_1f74d0;
        case 0x1f74d4u: goto label_1f74d4;
        case 0x1f74d8u: goto label_1f74d8;
        case 0x1f74dcu: goto label_1f74dc;
        case 0x1f74e0u: goto label_1f74e0;
        case 0x1f74e4u: goto label_1f74e4;
        case 0x1f74e8u: goto label_1f74e8;
        case 0x1f74ecu: goto label_1f74ec;
        case 0x1f74f0u: goto label_1f74f0;
        case 0x1f74f4u: goto label_1f74f4;
        case 0x1f74f8u: goto label_1f74f8;
        case 0x1f74fcu: goto label_1f74fc;
        case 0x1f7500u: goto label_1f7500;
        case 0x1f7504u: goto label_1f7504;
        case 0x1f7508u: goto label_1f7508;
        case 0x1f750cu: goto label_1f750c;
        case 0x1f7510u: goto label_1f7510;
        case 0x1f7514u: goto label_1f7514;
        case 0x1f7518u: goto label_1f7518;
        case 0x1f751cu: goto label_1f751c;
        case 0x1f7520u: goto label_1f7520;
        case 0x1f7524u: goto label_1f7524;
        case 0x1f7528u: goto label_1f7528;
        case 0x1f752cu: goto label_1f752c;
        case 0x1f7530u: goto label_1f7530;
        case 0x1f7534u: goto label_1f7534;
        case 0x1f7538u: goto label_1f7538;
        case 0x1f753cu: goto label_1f753c;
        case 0x1f7540u: goto label_1f7540;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f7548u: goto label_1f7548;
        case 0x1f754cu: goto label_1f754c;
        case 0x1f7550u: goto label_1f7550;
        case 0x1f7554u: goto label_1f7554;
        case 0x1f7558u: goto label_1f7558;
        case 0x1f755cu: goto label_1f755c;
        case 0x1f7560u: goto label_1f7560;
        case 0x1f7564u: goto label_1f7564;
        case 0x1f7568u: goto label_1f7568;
        case 0x1f756cu: goto label_1f756c;
        case 0x1f7570u: goto label_1f7570;
        case 0x1f7574u: goto label_1f7574;
        case 0x1f7578u: goto label_1f7578;
        case 0x1f757cu: goto label_1f757c;
        case 0x1f7580u: goto label_1f7580;
        case 0x1f7584u: goto label_1f7584;
        case 0x1f7588u: goto label_1f7588;
        case 0x1f758cu: goto label_1f758c;
        case 0x1f7590u: goto label_1f7590;
        case 0x1f7594u: goto label_1f7594;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f759cu: goto label_1f759c;
        case 0x1f75a0u: goto label_1f75a0;
        case 0x1f75a4u: goto label_1f75a4;
        case 0x1f75a8u: goto label_1f75a8;
        case 0x1f75acu: goto label_1f75ac;
        default: break;
    }

    ctx->pc = 0x1f7360u;

label_1f7360:
    // 0x1f7360: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1f7360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1f7364:
    // 0x1f7364: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f7364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1f7368:
    // 0x1f7368: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31360)));
label_1f736c:
    // 0x1f736c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_1f7370:
    // 0x1f7370: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1f7374:
    // 0x1f7374: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1f7378:
    // 0x1f7378: 0x24517a80  addiu       $s1, $v0, 0x7A80
    ctx->pc = 0x1f7378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
label_1f737c:
    // 0x1f737c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1f7380:
    // 0x1f7380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f7380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7384:
    // 0x1f7384: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f7384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1f7388:
    // 0x1f7388: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1f7388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1f738c:
    // 0x1f738c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f7390:
    // 0x1f7390: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1f7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1f7394:
    // 0x1f7394: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1f7394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1f7398:
    // 0x1f7398: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1f7398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1f739c:
    // 0x1f739c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1f73a0:
    if (ctx->pc == 0x1F73A0u) {
        ctx->pc = 0x1F73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F739Cu;
        // 0x1f73a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F73A4u;
        goto label_1f73a4;
    }
    ctx->pc = 0x1F739Cu;
    {
        const bool branch_taken_0x1f739c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F739Cu;
        // 0x1f73a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f739c) {
            ctx->pc = 0x1F73BCu;
            goto label_1f73bc;
        }
    }
    ctx->pc = 0x1F73A4u;
label_1f73a4:
    // 0x1f73a4: 0xc07dd6c  jal         func_1F75B0
label_1f73a8:
    if (ctx->pc == 0x1F73A8u) {
        ctx->pc = 0x1F73ACu;
        goto label_1f73ac;
    }
    ctx->pc = 0x1F73A4u;
    SET_GPR_U32(ctx, 31, 0x1F73ACu);
    ctx->pc = 0x1F75B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F75B0u, 0x1F73A4u, 0x1F73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73ACu;
label_1f73ac:
    // 0x1f73ac: 0xc07dd74  jal         func_1F75D0
label_1f73b0:
    if (ctx->pc == 0x1F73B0u) {
        ctx->pc = 0x1F73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73ACu;
        // 0x1f73b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F73B4u;
        goto label_1f73b4;
    }
    ctx->pc = 0x1F73ACu;
    SET_GPR_U32(ctx, 31, 0x1F73B4u);
    ctx->pc = 0x1F73B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73ACu;
    // 0x1f73b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F75D0u, 0x1F73ACu, 0x1F73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73B4u;
label_1f73b4:
    // 0x1f73b4: 0x10000073  b           . + 4 + (0x73 << 2)
label_1f73b8:
    if (ctx->pc == 0x1F73B8u) {
        ctx->pc = 0x1F73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73B4u;
        // 0x1f73b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F73BCu;
        goto label_1f73bc;
    }
    ctx->pc = 0x1F73B4u;
    {
        const bool branch_taken_0x1f73b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73B4u;
        // 0x1f73b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73b4) {
            ctx->pc = 0x1F7584u;
            goto label_1f7584;
        }
    }
    ctx->pc = 0x1F73BCu;
label_1f73bc:
    // 0x1f73bc: 0x8e22fff8  lw          $v0, -0x8($s1)
    ctx->pc = 0x1f73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_1f73c0:
    // 0x1f73c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1f73c4:
    // 0x1f73c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f73c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f73c8:
    // 0x1f73c8: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_1f73cc:
    if (ctx->pc == 0x1F73CCu) {
        ctx->pc = 0x1F73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73C8u;
        // 0x1f73cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F73D0u;
        goto label_1f73d0;
    }
    ctx->pc = 0x1F73C8u;
    {
        const bool branch_taken_0x1f73c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73C8u;
        // 0x1f73cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73c8) {
            ctx->pc = 0x1F7584u;
            goto label_1f7584;
        }
    }
    ctx->pc = 0x1F73D0u;
label_1f73d0:
    // 0x1f73d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f73d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f73d4:
    // 0x1f73d4: 0xc07dd6c  jal         func_1F75B0
label_1f73d8:
    if (ctx->pc == 0x1F73D8u) {
        ctx->pc = 0x1F73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73D4u;
        // 0x1f73d8: 0x265000f4  addiu       $s0, $s2, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F73DCu;
        goto label_1f73dc;
    }
    ctx->pc = 0x1F73D4u;
    SET_GPR_U32(ctx, 31, 0x1F73DCu);
    ctx->pc = 0x1F73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73D4u;
    // 0x1f73d8: 0x265000f4  addiu       $s0, $s2, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F75B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F75B0u, 0x1F73D4u, 0x1F73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73DCu;
label_1f73dc:
    // 0x1f73dc: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
label_1f73e0:
    if (ctx->pc == 0x1F73E0u) {
        ctx->pc = 0x1F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73DCu;
        // 0x1f73e0: 0x2635fa20  addiu       $s5, $s1, -0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F73E4u;
        goto label_1f73e4;
    }
    ctx->pc = 0x1F73DCu;
    {
        const bool branch_taken_0x1f73dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73DCu;
        // 0x1f73e0: 0x2635fa20  addiu       $s5, $s1, -0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73dc) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F73E4u;
label_1f73e4:
    // 0x1f73e4: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x1f73e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
label_1f73e8:
    // 0x1f73e8: 0x2634fb98  addiu       $s4, $s1, -0x468
    ctx->pc = 0x1f73e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966168));
label_1f73ec:
    // 0x1f73ec: 0x3c160200  lui         $s6, 0x200
    ctx->pc = 0x1f73ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)512 << 16));
label_1f73f0:
    // 0x1f73f0: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x1f73f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_1f73f4:
    // 0x1f73f4: 0x0  nop
    ctx->pc = 0x1f73f4u;
    // NOP
label_1f73f8:
    // 0x1f73f8: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1f73f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f73fc:
    // 0x1f73fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7400:
    // 0x1f7400: 0x5622005b  bnel        $s1, $v0, . + 4 + (0x5B << 2)
label_1f7404:
    if (ctx->pc == 0x1F7404u) {
        ctx->pc = 0x1F7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7400u;
        // 0x1f7404: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7408u;
        goto label_1f7408;
    }
    ctx->pc = 0x1F7400u;
    {
        const bool branch_taken_0x1f7400 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7400) {
            ctx->pc = 0x1F7404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7400u;
            // 0x1f7404: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7570u;
            goto label_1f7570;
        }
    }
    ctx->pc = 0x1F7408u;
label_1f7408:
    // 0x1f7408: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1f7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1f740c:
    // 0x1f740c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1f740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1f7410:
    // 0x1f7410: 0x50620057  beql        $v1, $v0, . + 4 + (0x57 << 2)
label_1f7414:
    if (ctx->pc == 0x1F7414u) {
        ctx->pc = 0x1F7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7410u;
        // 0x1f7414: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7418u;
        goto label_1f7418;
    }
    ctx->pc = 0x1F7410u;
    {
        const bool branch_taken_0x1f7410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7410) {
            ctx->pc = 0x1F7414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7410u;
            // 0x1f7414: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7570u;
            goto label_1f7570;
        }
    }
    ctx->pc = 0x1F7418u;
label_1f7418:
    // 0x1f7418: 0xc07dc14  jal         func_1F7050
label_1f741c:
    if (ctx->pc == 0x1F741Cu) {
        ctx->pc = 0x1F741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7418u;
        // 0x1f741c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7420u;
        goto label_1f7420;
    }
    ctx->pc = 0x1F7418u;
    SET_GPR_U32(ctx, 31, 0x1F7420u);
    ctx->pc = 0x1F741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7418u;
    // 0x1f741c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7050u, 0x1F7418u, 0x1F7420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7420u;
label_1f7420:
    // 0x1f7420: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_1f7424:
    if (ctx->pc == 0x1F7424u) {
        ctx->pc = 0x1F7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7420u;
        // 0x1f7424: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7428u;
        goto label_1f7428;
    }
    ctx->pc = 0x1F7420u;
    {
        const bool branch_taken_0x1f7420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7420) {
            ctx->pc = 0x1F7424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7420u;
            // 0x1f7424: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7570u;
            goto label_1f7570;
        }
    }
    ctx->pc = 0x1F7428u;
label_1f7428:
    // 0x1f7428: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1f7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1f742c:
    // 0x1f742c: 0x1071001a  beq         $v1, $s1, . + 4 + (0x1A << 2)
label_1f7430:
    if (ctx->pc == 0x1F7430u) {
        ctx->pc = 0x1F7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F742Cu;
        // 0x1f7430: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7434u;
        goto label_1f7434;
    }
    ctx->pc = 0x1F742Cu;
    {
        const bool branch_taken_0x1f742c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1F7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F742Cu;
        // 0x1f7430: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f742c) {
            ctx->pc = 0x1F7498u;
            goto label_1f7498;
        }
    }
    ctx->pc = 0x1F7434u;
label_1f7434:
    // 0x1f7434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f7438:
    if (ctx->pc == 0x1F7438u) {
        ctx->pc = 0x1F7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7434u;
        // 0x1f7438: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F743Cu;
        goto label_1f743c;
    }
    ctx->pc = 0x1F7434u;
    {
        const bool branch_taken_0x1f7434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7434u;
        // 0x1f7438: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7434) {
            ctx->pc = 0x1F744Cu;
            goto label_1f744c;
        }
    }
    ctx->pc = 0x1F743Cu;
label_1f743c:
    // 0x1f743c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1f7440:
    if (ctx->pc == 0x1F7440u) {
        ctx->pc = 0x1F7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F743Cu;
        // 0x1f7440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7444u;
        goto label_1f7444;
    }
    ctx->pc = 0x1F743Cu;
    {
        const bool branch_taken_0x1f743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F743Cu;
        // 0x1f7440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f743c) {
            ctx->pc = 0x1F7464u;
            goto label_1f7464;
        }
    }
    ctx->pc = 0x1F7444u;
label_1f7444:
    // 0x1f7444: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1f7448:
    if (ctx->pc == 0x1F7448u) {
        ctx->pc = 0x1F744Cu;
        goto label_1f744c;
    }
    ctx->pc = 0x1F7444u;
    {
        const bool branch_taken_0x1f7444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7444) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F744Cu;
label_1f744c:
    // 0x1f744c: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_1f7450:
    if (ctx->pc == 0x1F7450u) {
        ctx->pc = 0x1F7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F744Cu;
        // 0x1f7450: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7454u;
        goto label_1f7454;
    }
    ctx->pc = 0x1F744Cu;
    {
        const bool branch_taken_0x1f744c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F744Cu;
        // 0x1f7450: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f744c) {
            ctx->pc = 0x1F74ECu;
            goto label_1f74ec;
        }
    }
    ctx->pc = 0x1F7454u;
label_1f7454:
    // 0x1f7454: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_1f7458:
    if (ctx->pc == 0x1F7458u) {
        ctx->pc = 0x1F745Cu;
        goto label_1f745c;
    }
    ctx->pc = 0x1F7454u;
    {
        const bool branch_taken_0x1f7454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7454) {
            ctx->pc = 0x1F7560u;
            goto label_1f7560;
        }
    }
    ctx->pc = 0x1F745Cu;
label_1f745c:
    // 0x1f745c: 0x10000046  b           . + 4 + (0x46 << 2)
label_1f7460:
    if (ctx->pc == 0x1F7460u) {
        ctx->pc = 0x1F7464u;
        goto label_1f7464;
    }
    ctx->pc = 0x1F745Cu;
    {
        const bool branch_taken_0x1f745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f745c) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7464u;
label_1f7464:
    // 0x1f7464: 0xc07dda0  jal         func_1F7680
label_1f7468:
    if (ctx->pc == 0x1F7468u) {
        ctx->pc = 0x1F7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7464u;
        // 0x1f7468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F746Cu;
        goto label_1f746c;
    }
    ctx->pc = 0x1F7464u;
    SET_GPR_U32(ctx, 31, 0x1F746Cu);
    ctx->pc = 0x1F7468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7464u;
    // 0x1f7468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7680u, 0x1F7464u, 0x1F746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F746Cu;
label_1f746c:
    // 0x1f746c: 0xc07dbea  jal         func_1F6FA8
label_1f7470:
    if (ctx->pc == 0x1F7470u) {
        ctx->pc = 0x1F7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F746Cu;
        // 0x1f7470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7474u;
        goto label_1f7474;
    }
    ctx->pc = 0x1F746Cu;
    SET_GPR_U32(ctx, 31, 0x1F7474u);
    ctx->pc = 0x1F7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F746Cu;
    // 0x1f7470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6FA8u, 0x1F746Cu, 0x1F7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7474u;
label_1f7474:
    // 0x1f7474: 0x14510040  bne         $v0, $s1, . + 4 + (0x40 << 2)
label_1f7478:
    if (ctx->pc == 0x1F7478u) {
        ctx->pc = 0x1F747Cu;
        goto label_1f747c;
    }
    ctx->pc = 0x1F7474u;
    {
        const bool branch_taken_0x1f7474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1f7474) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F747Cu;
label_1f747c:
    // 0x1f747c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f7480:
    // 0x1f7480: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1f7484:
    if (ctx->pc == 0x1F7484u) {
        ctx->pc = 0x1F7488u;
        goto label_1f7488;
    }
    ctx->pc = 0x1F7480u;
    {
        const bool branch_taken_0x1f7480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7480) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7488u;
label_1f7488:
    // 0x1f7488: 0x40f809  jalr        $v0
label_1f748c:
    if (ctx->pc == 0x1F748Cu) {
        ctx->pc = 0x1F748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7488u;
        // 0x1f748c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7490u;
        goto label_1f7490;
    }
    ctx->pc = 0x1F7488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7490u);
        ctx->pc = 0x1F748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7488u;
        // 0x1f748c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7488u, 0x1F7490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7490u;
label_1f7490:
    // 0x1f7490: 0x10000039  b           . + 4 + (0x39 << 2)
label_1f7494:
    if (ctx->pc == 0x1F7494u) {
        ctx->pc = 0x1F7498u;
        goto label_1f7498;
    }
    ctx->pc = 0x1F7490u;
    {
        const bool branch_taken_0x1f7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7490) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7498u;
label_1f7498:
    // 0x1f7498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f749c:
    // 0x1f749c: 0xc07dda0  jal         func_1F7680
label_1f74a0:
    if (ctx->pc == 0x1F74A0u) {
        ctx->pc = 0x1F74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F749Cu;
        // 0x1f74a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74A4u;
        goto label_1f74a4;
    }
    ctx->pc = 0x1F749Cu;
    SET_GPR_U32(ctx, 31, 0x1F74A4u);
    ctx->pc = 0x1F74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F749Cu;
    // 0x1f74a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7680u, 0x1F749Cu, 0x1F74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74A4u;
label_1f74a4:
    // 0x1f74a4: 0xc07dbea  jal         func_1F6FA8
label_1f74a8:
    if (ctx->pc == 0x1F74A8u) {
        ctx->pc = 0x1F74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74A4u;
        // 0x1f74a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74ACu;
        goto label_1f74ac;
    }
    ctx->pc = 0x1F74A4u;
    SET_GPR_U32(ctx, 31, 0x1F74ACu);
    ctx->pc = 0x1F74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74A4u;
    // 0x1f74a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6FA8u, 0x1F74A4u, 0x1F74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74ACu;
label_1f74ac:
    // 0x1f74ac: 0x14510032  bne         $v0, $s1, . + 4 + (0x32 << 2)
label_1f74b0:
    if (ctx->pc == 0x1F74B0u) {
        ctx->pc = 0x1F74B4u;
        goto label_1f74b4;
    }
    ctx->pc = 0x1F74ACu;
    {
        const bool branch_taken_0x1f74ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1f74ac) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F74B4u;
label_1f74b4:
    // 0x1f74b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f74b8:
    // 0x1f74b8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1f74bc:
    if (ctx->pc == 0x1F74BCu) {
        ctx->pc = 0x1F74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74B8u;
        // 0x1f74bc: 0x26648140  addiu       $a0, $s3, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74C0u;
        goto label_1f74c0;
    }
    ctx->pc = 0x1F74B8u;
    {
        const bool branch_taken_0x1f74b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74B8u;
        // 0x1f74bc: 0x26648140  addiu       $a0, $s3, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74b8) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F74C0u;
label_1f74c0:
    // 0x1f74c0: 0xc0c6d04  jal         func_31B410
label_1f74c4:
    if (ctx->pc == 0x1F74C4u) {
        ctx->pc = 0x1F74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74C0u;
        // 0x1f74c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74C8u;
        goto label_1f74c8;
    }
    ctx->pc = 0x1F74C0u;
    SET_GPR_U32(ctx, 31, 0x1F74C8u);
    ctx->pc = 0x1F74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74C0u;
    // 0x1f74c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B410u, 0x1F74C0u, 0x1F74C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74C8u;
label_1f74c8:
    // 0x1f74c8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1f74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_1f74cc:
    // 0x1f74cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1f74d0:
    // 0x1f74d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f74d4:
    // 0x1f74d4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_1f74d8:
    // 0x1f74d8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1f74d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f74dc:
    // 0x1f74dc: 0xc0b0e36  jal         func_2C38D8
label_1f74e0:
    if (ctx->pc == 0x1F74E0u) {
        ctx->pc = 0x1F74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74DCu;
        // 0x1f74e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74E4u;
        goto label_1f74e4;
    }
    ctx->pc = 0x1F74DCu;
    SET_GPR_U32(ctx, 31, 0x1F74E4u);
    ctx->pc = 0x1F74E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74DCu;
    // 0x1f74e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C38D8u, 0x1F74DCu, 0x1F74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74E4u;
label_1f74e4:
    // 0x1f74e4: 0x10000024  b           . + 4 + (0x24 << 2)
label_1f74e8:
    if (ctx->pc == 0x1F74E8u) {
        ctx->pc = 0x1F74ECu;
        goto label_1f74ec;
    }
    ctx->pc = 0x1F74E4u;
    {
        const bool branch_taken_0x1f74e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74e4) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F74ECu;
label_1f74ec:
    // 0x1f74ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f74ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f74f0:
    // 0x1f74f0: 0xc07dda0  jal         func_1F7680
label_1f74f4:
    if (ctx->pc == 0x1F74F4u) {
        ctx->pc = 0x1F74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74F0u;
        // 0x1f74f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74F8u;
        goto label_1f74f8;
    }
    ctx->pc = 0x1F74F0u;
    SET_GPR_U32(ctx, 31, 0x1F74F8u);
    ctx->pc = 0x1F74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74F0u;
    // 0x1f74f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7680u, 0x1F74F0u, 0x1F74F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74F8u;
label_1f74f8:
    // 0x1f74f8: 0xc07dbea  jal         func_1F6FA8
label_1f74fc:
    if (ctx->pc == 0x1F74FCu) {
        ctx->pc = 0x1F74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74F8u;
        // 0x1f74fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7500u;
        goto label_1f7500;
    }
    ctx->pc = 0x1F74F8u;
    SET_GPR_U32(ctx, 31, 0x1F7500u);
    ctx->pc = 0x1F74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74F8u;
    // 0x1f74fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6FA8u, 0x1F74F8u, 0x1F7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7500u;
label_1f7500:
    // 0x1f7500: 0x1451001d  bne         $v0, $s1, . + 4 + (0x1D << 2)
label_1f7504:
    if (ctx->pc == 0x1F7504u) {
        ctx->pc = 0x1F7508u;
        goto label_1f7508;
    }
    ctx->pc = 0x1F7500u;
    {
        const bool branch_taken_0x1f7500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1f7500) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7508u;
label_1f7508:
    // 0x1f7508: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f750c:
    // 0x1f750c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1f7510:
    if (ctx->pc == 0x1F7510u) {
        ctx->pc = 0x1F7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F750Cu;
        // 0x1f7510: 0x26648140  addiu       $a0, $s3, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7514u;
        goto label_1f7514;
    }
    ctx->pc = 0x1F750Cu;
    {
        const bool branch_taken_0x1f750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F750Cu;
        // 0x1f7510: 0x26648140  addiu       $a0, $s3, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f750c) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7514u;
label_1f7514:
    // 0x1f7514: 0xc0c6d04  jal         func_31B410
label_1f7518:
    if (ctx->pc == 0x1F7518u) {
        ctx->pc = 0x1F7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7514u;
        // 0x1f7518: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F751Cu;
        goto label_1f751c;
    }
    ctx->pc = 0x1F7514u;
    SET_GPR_U32(ctx, 31, 0x1F751Cu);
    ctx->pc = 0x1F7518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7514u;
    // 0x1f7518: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B410u, 0x1F7514u, 0x1F751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F751Cu;
label_1f751c:
    // 0x1f751c: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1f751cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_1f7520:
    // 0x1f7520: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f7524:
    // 0x1f7524: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1f7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1f7528:
    // 0x1f7528: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x1f7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_1f752c:
    // 0x1f752c: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x1f752cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_1f7530:
    // 0x1f7530: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f7530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f7534:
    // 0x1f7534: 0x60f809  jalr        $v1
label_1f7538:
    if (ctx->pc == 0x1F7538u) {
        ctx->pc = 0x1F7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7534u;
        // 0x1f7538: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F753Cu;
        goto label_1f753c;
    }
    ctx->pc = 0x1F7534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F753Cu);
        ctx->pc = 0x1F7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7534u;
        // 0x1f7538: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7534u, 0x1F753Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F753Cu;
label_1f753c:
    // 0x1f753c: 0x9222003b  lbu         $v0, 0x3B($s1)
    ctx->pc = 0x1f753cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_1f7540:
    // 0x1f7540: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f7540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1f7544:
    // 0x1f7544: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f7548:
    if (ctx->pc == 0x1F7548u) {
        ctx->pc = 0x1F754Cu;
        goto label_1f754c;
    }
    ctx->pc = 0x1F7544u;
    {
        const bool branch_taken_0x1f7544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7544) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F754Cu;
label_1f754c:
    // 0x1f754c: 0x96250036  lhu         $a1, 0x36($s1)
    ctx->pc = 0x1f754cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
label_1f7550:
    // 0x1f7550: 0xc0b0a7e  jal         func_2C29F8
label_1f7554:
    if (ctx->pc == 0x1F7554u) {
        ctx->pc = 0x1F7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7550u;
        // 0x1f7554: 0x26e4ea60  addiu       $a0, $s7, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7558u;
        goto label_1f7558;
    }
    ctx->pc = 0x1F7550u;
    SET_GPR_U32(ctx, 31, 0x1F7558u);
    ctx->pc = 0x1F7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7550u;
    // 0x1f7554: 0x26e4ea60  addiu       $a0, $s7, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x1F7550u, 0x1F7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7558u;
label_1f7558:
    // 0x1f7558: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f755c:
    if (ctx->pc == 0x1F755Cu) {
        ctx->pc = 0x1F7560u;
        goto label_1f7560;
    }
    ctx->pc = 0x1F7558u;
    {
        const bool branch_taken_0x1f7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7558) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7560u;
label_1f7560:
    // 0x1f7560: 0xc07dc32  jal         func_1F70C8
label_1f7564:
    if (ctx->pc == 0x1F7564u) {
        ctx->pc = 0x1F7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7560u;
        // 0x1f7564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7568u;
        goto label_1f7568;
    }
    ctx->pc = 0x1F7560u;
    SET_GPR_U32(ctx, 31, 0x1F7568u);
    ctx->pc = 0x1F7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7560u;
    // 0x1f7564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F70C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F70C8u, 0x1F7560u, 0x1F7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7568u;
label_1f7568:
    // 0x1f7568: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f756c:
    if (ctx->pc == 0x1F756Cu) {
        ctx->pc = 0x1F7570u;
        goto label_1f7570;
    }
    ctx->pc = 0x1F7568u;
    {
        const bool branch_taken_0x1f7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7568) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7570u;
label_1f7570:
    // 0x1f7570: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_1f7574:
    if (ctx->pc == 0x1F7574u) {
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7570u;
        // 0x1f7574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7578u;
        goto label_1f7578;
    }
    ctx->pc = 0x1F7570u;
    {
        const bool branch_taken_0x1f7570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7570u;
        // 0x1f7574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7570) {
            ctx->pc = 0x1F73F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73f8;
        }
    }
    ctx->pc = 0x1F7578u;
label_1f7578:
    // 0x1f7578: 0xc07dd74  jal         func_1F75D0
label_1f757c:
    if (ctx->pc == 0x1F757Cu) {
        ctx->pc = 0x1F757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7578u;
        // 0x1f757c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7580u;
        goto label_1f7580;
    }
    ctx->pc = 0x1F7578u;
    SET_GPR_U32(ctx, 31, 0x1F7580u);
    ctx->pc = 0x1F757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7578u;
    // 0x1f757c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F75D0u, 0x1F7578u, 0x1F7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7580u;
label_1f7580:
    // 0x1f7580: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f7580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f7584:
    // 0x1f7584: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f7584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f7588:
    // 0x1f7588: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f7588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f758c:
    // 0x1f758c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f758cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7590:
    // 0x1f7590: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f7590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7594:
    // 0x1f7594: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1f7594u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7598:
    // 0x1f7598: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1f7598u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f759c:
    // 0x1f759c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1f759cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f75a0:
    // 0x1f75a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f75a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f75a4:
    // 0x1f75a4: 0x3e00008  jr          $ra
label_1f75a8:
    if (ctx->pc == 0x1F75A8u) {
        ctx->pc = 0x1F75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75A4u;
        // 0x1f75a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75ACu;
        goto label_1f75ac;
    }
    ctx->pc = 0x1F75A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75A4u;
        // 0x1f75a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F75A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F75ACu;
label_1f75ac:
    // 0x1f75ac: 0x0  nop
    ctx->pc = 0x1f75acu;
    // NOP
    ctx->pc = 0x1f75b0u;
}
